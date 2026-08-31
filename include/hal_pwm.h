/**
 * @file hal_pwm.h
 * @brief Hardware Abstraction Layer - Timer PWM & Actuator Signal Generator
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef HAL_PWM_H
#define HAL_PWM_H

#include "pulse_types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define HAL_PWM_MAX_CHANNELS 8

typedef enum {
    HAL_PWM_CH_1 = 0,
    HAL_PWM_CH_2,
    HAL_PWM_CH_3,
    HAL_PWM_CH_4,
    HAL_PWM_CH_5,
    HAL_PWM_CH_6,
    HAL_PWM_CH_7,
    HAL_PWM_CH_8,
    HAL_PWM_CH_COUNT
} hal_pwm_channel_t;

typedef enum {
    HAL_PWM_MODE_STANDARD_50HZ = 0,     /**< Standard Servo/ESC (1000us - 2000us at 50Hz) */
    HAL_PWM_MODE_ONESHOT125,            /**< Fast ESC (125us - 250us at up to 4kHz) */
    HAL_PWM_MODE_DSHOT600,              /**< Digital ESC protocol */
    HAL_PWM_MODE_CUSTOM_DUTY            /**< Direct 0.0% to 100.0% duty cycle */
} hal_pwm_mode_t;

typedef struct {
    hal_pwm_channel_t channel;
    hal_pwm_mode_t mode;
    uint32_t frequency_hz;
    float deadtime_nanoseconds;
} hal_pwm_config_t;

pulse_status_t hal_pwm_init(const hal_pwm_config_t *config);
pulse_status_t hal_pwm_set_pulse_us(hal_pwm_channel_t channel, uint16_t pulse_us);
pulse_status_t hal_pwm_set_duty(hal_pwm_channel_t channel, float duty_cycle_0_to_1);
pulse_status_t hal_pwm_set_all(const float *duties_0_to_1, uint8_t count);
pulse_status_t hal_pwm_stop(hal_pwm_channel_t channel);
pulse_status_t hal_pwm_stop_all(void);

#ifdef __cplusplus
}
#endif

#endif /* HAL_PWM_H */
