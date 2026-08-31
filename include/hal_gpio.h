/**
 * @file hal_gpio.h
 * @brief Hardware Abstraction Layer - GPIO Controller & External Interrupts
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef HAL_GPIO_H
#define HAL_GPIO_H

#include "pulse_types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    HAL_GPIO_PORT_A = 0,
    HAL_GPIO_PORT_B,
    HAL_GPIO_PORT_C,
    HAL_GPIO_PORT_D,
    HAL_GPIO_PORT_E,
    HAL_GPIO_PORT_COUNT
} hal_gpio_port_t;

typedef enum {
    HAL_GPIO_PIN_0 = 0,
    HAL_GPIO_PIN_1,
    HAL_GPIO_PIN_2,
    HAL_GPIO_PIN_3,
    HAL_GPIO_PIN_4,
    HAL_GPIO_PIN_5,
    HAL_GPIO_PIN_6,
    HAL_GPIO_PIN_7,
    HAL_GPIO_PIN_8,
    HAL_GPIO_PIN_9,
    HAL_GPIO_PIN_10,
    HAL_GPIO_PIN_11,
    HAL_GPIO_PIN_12,
    HAL_GPIO_PIN_13,
    HAL_GPIO_PIN_14,
    HAL_GPIO_PIN_15,
    HAL_GPIO_PIN_COUNT
} hal_gpio_pin_t;

typedef enum {
    HAL_GPIO_MODE_INPUT = 0,
    HAL_GPIO_MODE_OUTPUT_PP,       /**< Output Push-Pull */
    HAL_GPIO_MODE_OUTPUT_OD,       /**< Output Open-Drain */
    HAL_GPIO_MODE_AF_PP,           /**< Alternate Function Push-Pull */
    HAL_GPIO_MODE_AF_OD,           /**< Alternate Function Open-Drain */
    HAL_GPIO_MODE_ANALOG           /**< Analog In for ADC/DAC */
} hal_gpio_mode_t;

typedef enum {
    HAL_GPIO_PULL_NONE = 0,
    HAL_GPIO_PULL_UP,
    HAL_GPIO_PULL_DOWN
} hal_gpio_pull_t;

typedef enum {
    HAL_GPIO_SPEED_LOW = 0,
    HAL_GPIO_SPEED_MEDIUM,
    HAL_GPIO_SPEED_HIGH,
    HAL_GPIO_SPEED_VERY_HIGH
} hal_gpio_speed_t;

typedef enum {
    HAL_GPIO_INTR_NONE = 0,
    HAL_GPIO_INTR_RISING,
    HAL_GPIO_INTR_FALLING,
    HAL_GPIO_INTR_BOTH
} hal_gpio_intr_edge_t;

typedef struct {
    hal_gpio_port_t port;
    hal_gpio_pin_t pin;
    hal_gpio_mode_t mode;
    hal_gpio_pull_t pull;
    hal_gpio_speed_t speed;
    uint8_t alternate_func;        /**< AF0 .. AF15 */
} hal_gpio_config_t;

typedef void (*hal_gpio_isr_cb_t)(hal_gpio_port_t port, hal_gpio_pin_t pin, void *user_data);

pulse_status_t hal_gpio_init(const hal_gpio_config_t *config);
pulse_status_t hal_gpio_write(hal_gpio_port_t port, hal_gpio_pin_t pin, bool level);
bool hal_gpio_read(hal_gpio_port_t port, hal_gpio_pin_t pin);
pulse_status_t hal_gpio_toggle(hal_gpio_port_t port, hal_gpio_pin_t pin);
pulse_status_t hal_gpio_enable_interrupt(hal_gpio_port_t port, hal_gpio_pin_t pin,
                                        hal_gpio_intr_edge_t edge, hal_gpio_isr_cb_t isr_cb,
                                        void *user_data);
pulse_status_t hal_gpio_disable_interrupt(hal_gpio_port_t port, hal_gpio_pin_t pin);

#ifdef __cplusplus
}
#endif

#endif /* HAL_GPIO_H */
