/**
 * @file control_pid.c
 * @brief Industrial Cascaded PID Controller Implementation
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "control_pid.h"
#include <string.h>

void pid_init(pid_controller_t *pid, const pid_config_t *config, float sample_rate_hz) {
    if (!pid || !config) return;

    memset(pid, 0, sizeof(*pid));
    pid->config = *config;

    if (config->d_term_lpf_hz > 0.0f && sample_rate_hz > 0.0f) {
        dsp_lpf1_init(&pid->d_filter, config->d_term_lpf_hz, sample_rate_hz);
    }
}

float pid_update(pid_controller_t *pid, float setpoint, float measurement, float dt_seconds) {
    if (!pid || dt_seconds <= 0.0f) return 0.0f;

    float error = setpoint - measurement;

    /* Proportional Term */
    pid->p_term = pid->config.kp * error;

    /* Integral Term with Anti-Windup Clamping */
    pid->integrator += pid->config.ki * error * dt_seconds;
    pid->integrator = PULSE_CLAMP(pid->integrator, pid->config.integrator_min, pid->config.integrator_max);
    pid->i_term = pid->integrator;

    /* Derivative Term (on measurement change to prevent derivative kick) */
    float d_meas = (measurement - pid->prev_measurement) / dt_seconds;
    float filtered_d = dsp_lpf1_update(&pid->d_filter, d_meas);
    pid->d_term = -pid->config.kd * filtered_d;

    /* Feedforward Term */
    pid->ff_term = pid->config.ff * setpoint;

    /* Total Output */
    float total = pid->p_term + pid->i_term + pid->d_term + pid->ff_term;
    float clamped_output = PULSE_CLAMP(total, pid->config.output_min, pid->config.output_max);

    pid->is_saturated = (clamped_output != total);
    pid->output = clamped_output;
    pid->prev_error = error;
    pid->prev_measurement = measurement;

    return pid->output;
}

float pid_update_error(pid_controller_t *pid, float error, float dt_seconds) {
    if (!pid || dt_seconds <= 0.0f) return 0.0f;

    pid->p_term = pid->config.kp * error;

    pid->integrator += pid->config.ki * error * dt_seconds;
    pid->integrator = PULSE_CLAMP(pid->integrator, pid->config.integrator_min, pid->config.integrator_max);
    pid->i_term = pid->integrator;

    float d_err = (error - pid->prev_error) / dt_seconds;
    float filtered_d = dsp_lpf1_update(&pid->d_filter, d_err);
    pid->d_term = pid->config.kd * filtered_d;

    float total = pid->p_term + pid->i_term + pid->d_term;
    pid->output = PULSE_CLAMP(total, pid->config.output_min, pid->config.output_max);

    pid->prev_error = error;
    return pid->output;
}

void pid_reset(pid_controller_t *pid) {
    if (!pid) return;
    pid->integrator = 0.0f;
    pid->prev_error = 0.0f;
    pid->prev_measurement = 0.0f;
    dsp_lpf1_reset(&pid->d_filter, 0.0f);
    pid->p_term = 0.0f;
    pid->i_term = 0.0f;
    pid->d_term = 0.0f;
    pid->ff_term = 0.0f;
    pid->output = 0.0f;
    pid->is_saturated = false;
}

void pid_set_gains(pid_controller_t *pid, float kp, float ki, float kd, float ff) {
    if (!pid) return;
    pid->config.kp = kp;
    pid->config.ki = ki;
    pid->config.kd = kd;
    pid->config.ff = ff;
}
