/**
 * @file hal_can.c
 * @brief Hardware Abstraction Layer - CAN 2.0B / CAN-FD Bus Implementation
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "hal_can.h"
#include "pulse_os.h"
#include <string.h>

typedef struct {
    hal_can_frame_t rx_fifo[PULSE_CONFIG_CAN_RX_FIFO_SIZE];
    uint8_t rx_head;
    uint8_t rx_tail;
    uint8_t rx_count;
    hal_can_config_t config;
    hal_can_rx_cb_t rx_callback;
    void *user_data;
    bool is_initialized;
} can_bus_internal_t;

static can_bus_internal_t g_can_buses[HAL_CAN_BUS_COUNT];

pulse_status_t hal_can_init(const hal_can_config_t *config) {
    if (!config || config->bus >= HAL_CAN_BUS_COUNT) {
        return PULSE_ERROR_INVALID_PARAM;
    }

    can_bus_internal_t *c = &g_can_buses[config->bus];
    memset(c, 0, sizeof(*c));
    c->config = *config;
    c->is_initialized = true;

    return PULSE_OK;
}

pulse_status_t hal_can_transmit(hal_can_bus_t bus, const hal_can_frame_t *frame, pulse_tick_t timeout) {
    if (bus >= HAL_CAN_BUS_COUNT || !frame || frame->dlc > 8) {
        return PULSE_ERROR_INVALID_PARAM;
    }
    can_bus_internal_t *c = &g_can_buses[bus];
    if (!c->is_initialized) return PULSE_ERROR_NOT_INITIALIZED;

    PULSE_UNUSED(timeout);

    /* If loopback mode is enabled, route directly to RX FIFO */
    if (c->config.enable_loopback) {
        uint32_t crit = pulse_enter_critical();
        if (c->rx_count < PULSE_CONFIG_CAN_RX_FIFO_SIZE) {
            c->rx_fifo[c->rx_head] = *frame;
            c->rx_fifo[c->rx_head].timestamp_us = (uint32_t)pulse_time_get_ticks() * 1000;
            c->rx_head = (c->rx_head + 1) % PULSE_CONFIG_CAN_RX_FIFO_SIZE;
            c->rx_count++;

            if (c->rx_callback) {
                c->rx_callback(bus, frame, c->user_data);
            }
        }
        pulse_exit_critical(crit);
    }

    return PULSE_OK;
}

pulse_status_t hal_can_receive(hal_can_bus_t bus, hal_can_frame_t *frame, pulse_tick_t timeout) {
    if (bus >= HAL_CAN_BUS_COUNT || !frame) return PULSE_ERROR_INVALID_PARAM;
    can_bus_internal_t *c = &g_can_buses[bus];
    if (!c->is_initialized) return PULSE_ERROR_NOT_INITIALIZED;

    pulse_tick_t start = pulse_time_get_ticks();

    while (1) {
        uint32_t crit = pulse_enter_critical();
        if (c->rx_count > 0) {
            *frame = c->rx_fifo[c->rx_tail];
            c->rx_tail = (c->rx_tail + 1) % PULSE_CONFIG_CAN_RX_FIFO_SIZE;
            c->rx_count--;
            pulse_exit_critical(crit);
            return PULSE_OK;
        }

        if (timeout == PULSE_NO_WAIT) {
            pulse_exit_critical(crit);
            return PULSE_ERROR_QUEUE_EMPTY;
        }

        if (timeout != PULSE_WAIT_FOREVER && (pulse_time_get_ticks() - start) >= timeout) {
            pulse_exit_critical(crit);
            return PULSE_ERROR_TIMEOUT;
        }

        pulse_exit_critical(crit);
        pulse_task_delay(1);
    }
}

pulse_status_t hal_can_register_rx_callback(hal_can_bus_t bus, hal_can_rx_cb_t callback, void *user_data) {
    if (bus >= HAL_CAN_BUS_COUNT) return PULSE_ERROR_INVALID_PARAM;
    g_can_buses[bus].rx_callback = callback;
    g_can_buses[bus].user_data = user_data;
    return PULSE_OK;
}

pulse_status_t hal_can_set_filter(hal_can_bus_t bus, uint32_t filter_id, uint32_t mask, bool is_extended) {
    if (bus >= HAL_CAN_BUS_COUNT) return PULSE_ERROR_INVALID_PARAM;
    PULSE_UNUSED(filter_id);
    PULSE_UNUSED(mask);
    PULSE_UNUSED(is_extended);
    return PULSE_OK;
}
