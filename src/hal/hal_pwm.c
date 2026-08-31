/**
 * @file hal_pwm.c
 * @brief Hardware Abstraction Layer - Timer PWM Generator Implementation
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "hal_pwm.h"
#include <string.h>

typedef struct {
    hal_pwm_config_t config;
    uint16_t pulse_us;
    float duty_cycle;
    bool is_active;
} pwm_channel_internal_t;

static pwm_channel_internal_t g_pwm_channels[HAL_PWM_CH_COUNT];

pulse_status_t hal_pwm_init(const hal_pwm_config_t *config) {
    if (!config || config->channel >= HAL_PWM_CH_COUNT) {
        return PULSE_ERROR_INVALID_PARAM;
    }

    pwm_channel_internal_t *ch = &g_pwm_channels[config->channel];
    ch->config = *config;
    ch->pulse_us = 1000; /* Standard disarmed 1000us */
    ch->duty_cycle = 0.0f;
    ch->is_active = true;

    return PULSE_OK;
}

pulse_status_t hal_pwm_set_pulse_us(hal_pwm_channel_t channel, uint16_t pulse_us) {
    if (channel >= HAL_PWM_CH_COUNT) return PULSE_ERROR_INVALID_PARAM;

    pulse_us = (uint16_t)PULSE_CLAMP(pulse_us, 900, 2200);
    g_pwm_channels[channel].pulse_us = pulse_us;
    g_pwm_channels[channel].duty_cycle = (float)(pulse_us - 1000) / 1000.0f;

    return PULSE_OK;
}

pulse_status_t hal_pwm_set_duty(hal_pwm_channel_t channel, float duty_cycle_0_to_1) {
    if (channel >= HAL_PWM_CH_COUNT) return PULSE_ERROR_INVALID_PARAM;

    duty_cycle_0_to_1 = PULSE_CLAMP(duty_cycle_0_to_1, 0.0f, 1.0f);
    g_pwm_channels[channel].duty_cycle = duty_cycle_0_to_1;
    g_pwm_channels[channel].pulse_us = (uint16_t)(1000.0f + (duty_cycle_0_to_1 * 1000.0f));

    return PULSE_OK;
}

pulse_status_t hal_pwm_set_all(const float *duties_0_to_1, uint8_t count) {
    if (!duties_0_to_1 || count > HAL_PWM_CH_COUNT) return PULSE_ERROR_INVALID_PARAM;

    for (uint8_t i = 0; i < count; ++i) {
        hal_pwm_set_duty((hal_pwm_channel_t)i, duties_0_to_1[i]);
    }
    return PULSE_OK;
}

pulse_status_t hal_pwm_stop(hal_pwm_channel_t channel) {
    if (channel >= HAL_PWM_CH_COUNT) return PULSE_ERROR_INVALID_PARAM;
    g_pwm_channels[channel].pulse_us = 1000;
    g_pwm_channels[channel].duty_cycle = 0.0f;
    return PULSE_OK;
}

pulse_status_t hal_pwm_stop_all(void) {
    for (uint8_t i = 0; i < HAL_PWM_CH_COUNT; ++i) {
        hal_pwm_stop((hal_pwm_channel_t)i);
    }
    return PULSE_OK;
}

float hal_pwm_get_duty(hal_pwm_channel_t channel) {
    if (channel >= HAL_PWM_CH_COUNT) return 0.0f;
    return g_pwm_channels[channel].duty_cycle;
}
