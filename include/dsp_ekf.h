/**
 * @file dsp_ekf.h
 * @brief 7-State Quaternion Extended Kalman Filter (EKF) for AHRS & Sensor Fusion
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef DSP_EKF_H
#define DSP_EKF_H

#include "pulse_types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    quat_f32_t q;               /**< Orientation quaternion (Earth to Body frame) */
    vec3_f32_t gyro_bias;       /**< Estimated gyro bias in rad/s */
    euler_f32_t euler_rad;      /**< Roll, Pitch, Yaw in radians */
    euler_f32_t euler_deg;      /**< Roll, Pitch, Yaw in degrees */
    vec3_f32_t linear_accel_e;  /**< Earth-frame linear acceleration (gravity removed) */
    float p_cov[7][7];          /**< State error covariance matrix */
    float q_cov_gyro;           /**< Gyro process noise */
    float q_cov_bias;           /**< Gyro bias random walk process noise */
    float r_cov_accel;          /**< Accelerometer measurement noise covariance */
    float r_cov_mag;            /**< Magnetometer measurement noise covariance */
    bool is_converged;
    uint32_t last_update_us;
} dsp_ekf_t;

void dsp_ekf_init(dsp_ekf_t *ekf);
void dsp_ekf_predict(dsp_ekf_t *ekf, const vec3_f32_t *gyro_rad_s, float dt_seconds);
void dsp_ekf_update_accel(dsp_ekf_t *ekf, const vec3_f32_t *accel_m_s2);
void dsp_ekf_update_mag(dsp_ekf_t *ekf, const vec3_f32_t *mag_gauss);
void dsp_ekf_get_attitude_euler(const dsp_ekf_t *ekf, euler_f32_t *out_deg);
void dsp_ekf_get_quaternion(const dsp_ekf_t *ekf, quat_f32_t *out_q);

#ifdef __cplusplus
}
#endif

#endif /* DSP_EKF_H */
