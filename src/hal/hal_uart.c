/**
 * @file hal_uart.c
 * @brief Hardware Abstraction Layer - UART Implementation with DMA Ring Buffering
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "hal_uart.h"
#include "pulse_os.h"
#include <string.h>
#include <stdio.h>

typedef struct {
    uint8_t tx_buffer[PULSE_CONFIG_UART_TX_BUFFER_SIZE];
    uint8_t rx_buffer[PULSE_CONFIG_UART_RX_BUFFER_SIZE];
    volatile uint16_t tx_head;
    volatile uint16_t tx_tail;
    volatile uint16_t rx_head;
    volatile uint16_t rx_tail;
    hal_uart_config_t config;
    hal_uart_rx_cb_t rx_callback;
    void *user_data;
    bool is_initialized;
} uart_port_internal_t;

static uart_port_internal_t g_uart_ports[HAL_UART_PORT_COUNT];

pulse_status_t hal_uart_init(const hal_uart_config_t *config) {
    if (!config || config->port >= HAL_UART_PORT_COUNT) {
        return PULSE_ERROR_INVALID_PARAM;
    }

    uart_port_internal_t *u = &g_uart_ports[config->port];
    memset(u, 0, sizeof(*u));
    u->config = *config;
    u->is_initialized = true;

    return PULSE_OK;
}

pulse_status_t hal_uart_write(hal_uart_port_t port, const uint8_t *data, size_t length, pulse_tick_t timeout) {
    if (port >= HAL_UART_PORT_COUNT || !data || length == 0) {
        return PULSE_ERROR_INVALID_PARAM;
    }
    uart_port_internal_t *u = &g_uart_ports[port];
    if (!u->is_initialized) return PULSE_ERROR_NOT_INITIALIZED;

    PULSE_UNUSED(timeout);
    uint32_t crit = pulse_enter_critical();

    for (size_t i = 0; i < length; ++i) {
        uint16_t next_head = (u->tx_head + 1) % PULSE_CONFIG_UART_TX_BUFFER_SIZE;
        if (next_head == u->tx_tail) {
            /* Buffer full, drop or wait */
            break;
        }
        u->tx_buffer[u->tx_head] = data[i];
        u->tx_head = next_head;
    }

    pulse_exit_critical(crit);
    return PULSE_OK;
}

pulse_status_t hal_uart_read(hal_uart_port_t port, uint8_t *buffer, size_t max_len, size_t *bytes_read, pulse_tick_t timeout) {
    if (port >= HAL_UART_PORT_COUNT || !buffer || max_len == 0) {
        return PULSE_ERROR_INVALID_PARAM;
    }
    uart_port_internal_t *u = &g_uart_ports[port];
    if (!u->is_initialized) return PULSE_ERROR_NOT_INITIALIZED;

    PULSE_UNUSED(timeout);
    uint32_t crit = pulse_enter_critical();
    size_t count = 0;

    while (u->rx_head != u->rx_tail && count < max_len) {
        buffer[count++] = u->rx_buffer[u->rx_tail];
        u->rx_tail = (u->rx_tail + 1) % PULSE_CONFIG_UART_RX_BUFFER_SIZE;
    }

    if (bytes_read) *bytes_read = count;
    pulse_exit_critical(crit);

    return (count > 0) ? PULSE_OK : PULSE_ERROR_QUEUE_EMPTY;
}

pulse_status_t hal_uart_write_byte(hal_uart_port_t port, uint8_t byte) {
    return hal_uart_write(port, &byte, 1, PULSE_NO_WAIT);
}

pulse_status_t hal_uart_read_byte(hal_uart_port_t port, uint8_t *out_byte, pulse_tick_t timeout) {
    size_t read = 0;
    return hal_uart_read(port, out_byte, 1, &read, timeout);
}

pulse_status_t hal_uart_register_rx_callback(hal_uart_port_t port, hal_uart_rx_cb_t callback, void *user_data) {
    if (port >= HAL_UART_PORT_COUNT) return PULSE_ERROR_INVALID_PARAM;
    g_uart_ports[port].rx_callback = callback;
    g_uart_ports[port].user_data = user_data;
    return PULSE_OK;
}

size_t hal_uart_get_available_rx(hal_uart_port_t port) {
    if (port >= HAL_UART_PORT_COUNT) return 0;
    uart_port_internal_t *u = &g_uart_ports[port];
    if (u->rx_head >= u->rx_tail) {
        return (u->rx_head - u->rx_tail);
    } else {
        return (PULSE_CONFIG_UART_RX_BUFFER_SIZE - u->rx_tail + u->rx_head);
    }
}

pulse_status_t hal_uart_flush(hal_uart_port_t port) {
    if (port >= HAL_UART_PORT_COUNT) return PULSE_ERROR_INVALID_PARAM;
    uint32_t crit = pulse_enter_critical();
    g_uart_ports[port].tx_tail = g_uart_ports[port].tx_head;
    g_uart_ports[port].rx_tail = g_uart_ports[port].rx_head;
    pulse_exit_critical(crit);
    return PULSE_OK;
}

/* ISR DMA RX Helper called when hardware byte arrives */
void hal_uart_rx_isr_handler(hal_uart_port_t port, uint8_t byte) {
    if (port >= HAL_UART_PORT_COUNT) return;
    uart_port_internal_t *u = &g_uart_ports[port];

    uint16_t next_head = (u->rx_head + 1) % PULSE_CONFIG_UART_RX_BUFFER_SIZE;
    if (next_head != u->rx_tail) {
        u->rx_buffer[u->rx_head] = byte;
        u->rx_head = next_head;
    }

    if (u->rx_callback) {
        u->rx_callback(port, byte, u->user_data);
    }
}
