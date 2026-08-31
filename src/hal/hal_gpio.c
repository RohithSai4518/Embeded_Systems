/**
 * @file hal_gpio.c
 * @brief Hardware Abstraction Layer - GPIO Implementation & Interrupt Dispatcher
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "hal_gpio.h"
#include <string.h>

typedef struct {
    bool state;
    hal_gpio_mode_t mode;
    hal_gpio_pull_t pull;
    hal_gpio_speed_t speed;
    hal_gpio_intr_edge_t intr_edge;
    hal_gpio_isr_cb_t isr_callback;
    void *user_data;
    bool is_configured;
} gpio_pin_state_t;

static gpio_pin_state_t g_gpio_table[HAL_GPIO_PORT_COUNT][HAL_GPIO_PIN_COUNT];

pulse_status_t hal_gpio_init(const hal_gpio_config_t *config) {
    if (!config || config->port >= HAL_GPIO_PORT_COUNT || config->pin >= HAL_GPIO_PIN_COUNT) {
        return PULSE_ERROR_INVALID_PARAM;
    }

    gpio_pin_state_t *p = &g_gpio_table[config->port][config->pin];
    p->mode = config->mode;
    p->pull = config->pull;
    p->speed = config->speed;
    p->state = (config->pull == HAL_GPIO_PULL_UP) ? true : false;
    p->is_configured = true;

    return PULSE_OK;
}

pulse_status_t hal_gpio_write(hal_gpio_port_t port, hal_gpio_pin_t pin, bool level) {
    if (port >= HAL_GPIO_PORT_COUNT || pin >= HAL_GPIO_PIN_COUNT) {
        return PULSE_ERROR_INVALID_PARAM;
    }
    g_gpio_table[port][pin].state = level;
    return PULSE_OK;
}

bool hal_gpio_read(hal_gpio_port_t port, hal_gpio_pin_t pin) {
    if (port >= HAL_GPIO_PORT_COUNT || pin >= HAL_GPIO_PIN_COUNT) {
        return false;
    }
    return g_gpio_table[port][pin].state;
}

pulse_status_t hal_gpio_toggle(hal_gpio_port_t port, hal_gpio_pin_t pin) {
    if (port >= HAL_GPIO_PORT_COUNT || pin >= HAL_GPIO_PIN_COUNT) {
        return PULSE_ERROR_INVALID_PARAM;
    }
    g_gpio_table[port][pin].state = !g_gpio_table[port][pin].state;
    return PULSE_OK;
}

pulse_status_t hal_gpio_enable_interrupt(hal_gpio_port_t port, hal_gpio_pin_t pin,
                                        hal_gpio_intr_edge_t edge, hal_gpio_isr_cb_t isr_cb,
                                        void *user_data) {
    if (port >= HAL_GPIO_PORT_COUNT || pin >= HAL_GPIO_PIN_COUNT || !isr_cb) {
        return PULSE_ERROR_INVALID_PARAM;
    }

    gpio_pin_state_t *p = &g_gpio_table[port][pin];
    p->intr_edge = edge;
    p->isr_callback = isr_cb;
    p->user_data = user_data;
    return PULSE_OK;
}

pulse_status_t hal_gpio_disable_interrupt(hal_gpio_port_t port, hal_gpio_pin_t pin) {
    if (port >= HAL_GPIO_PORT_COUNT || pin >= HAL_GPIO_PIN_COUNT) {
        return PULSE_ERROR_INVALID_PARAM;
    }
    g_gpio_table[port][pin].isr_callback = NULL;
    return PULSE_OK;
}

void hal_gpio_trigger_external_interrupt(hal_gpio_port_t port, hal_gpio_pin_t pin) {
    if (port < HAL_GPIO_PORT_COUNT && pin < HAL_GPIO_PIN_COUNT) {
        gpio_pin_state_t *p = &g_gpio_table[port][pin];
        if (p->isr_callback) {
            p->isr_callback(port, pin, p->user_data);
        }
    }
}
