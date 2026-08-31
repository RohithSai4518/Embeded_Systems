/**
 * @file control_pid.h
 * @brief Industrial Cascaded PID Controller with Anti-Windup & Derivative Filter
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef CONTROL_PID_H
#define CONTROL_PID_H

#include "pulse_types.h"
#include "dsp_filters.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    float kp;                   /**< Proportional Gain */
    float ki;                   /**< Integral Gain */
    float kd;                   /**< Derivative Gain */
    float ff;                   /**< Feedforward Gain */
    float output_min;           /**< Lower saturation limit */
    float output_max;           /**< Upper saturation limit */
    float integrator_min;       /**< Integral clamp minimum */
    float integrator_max;       /**< Integral clamp maximum */
    float d_term_lpf_hz;        /**< Cutoff frequency for D-term low-pass filter */
} pid_config_t;

typedef struct {
    pid_config_t config;
    float integrator;
    float prev_error;
    float prev_measurement;
    dsp_lpf1_t d_filter;
    float p_term;
    float i_term;
    float d_term;
    float ff_term;
    float output;
    bool is_saturated;
} pid_controller_t;

void pid_init(pid_controller_t *pid, const pid_config_t *config, float sample_rate_hz);
float pid_update(pid_controller_t *pid, float setpoint, float measurement, float dt_seconds);
float pid_update_error(pid_controller_t *pid, float error, float dt_seconds);
void pid_reset(pid_controller_t *pid);
void pid_set_gains(pid_controller_t *pid, float kp, float ki, float kd, float ff);

#ifdef __cplusplus
}
#endif

#endif /* CONTROL_PID_H */
