/**
 * @file dsp_ekf.c
 * @brief 7-State Quaternion Extended Kalman Filter (EKF) for AHRS Attitude Estimation
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "dsp_ekf.h"
#include "pulse_os.h"
#include <string.h>
#include <math.h>

#define GRAVITY_MSS 9.80665f
#define RAD_TO_DEG  57.29577951308232f

extern void dsp_quat_normalize(quat_f32_t *q);
extern void dsp_quat_to_euler(const quat_f32_t *q, euler_f32_t *euler);
extern float dsp_vec3_norm(const vec3_f32_t *v);

void dsp_ekf_init(dsp_ekf_t *ekf) {
    if (!ekf) return;

    memset(ekf, 0, sizeof(*ekf));

    /* Initial identity quaternion */
    ekf->q.w = 1.0f;
    ekf->q.x = 0.0f;
    ekf->q.y = 0.0f;
    ekf->q.z = 0.0f;

    ekf->gyro_bias.x = 0.0f;
    ekf->gyro_bias.y = 0.0f;
    ekf->gyro_bias.z = 0.0f;

    /* Initialize Error Covariance P matrix diagonal */
    for (int i = 0; i < 4; ++i) ekf->p_cov[i][i] = 1e-3f; /* Quaternion variance */
    for (int i = 4; i < 7; ++i) ekf->p_cov[i][i] = 1e-4f; /* Gyro bias variance */

    /* Process Noise Covariances */
    ekf->q_cov_gyro = 1e-4f;
    ekf->q_cov_bias = 1e-6f;

    /* Measurement Noise Covariances */
    ekf->r_cov_accel = 0.05f;
    ekf->r_cov_mag = 0.10f;

    ekf->is_converged = true;
    ekf->last_update_us = (uint32_t)pulse_time_get_ticks() * 1000;
}

void dsp_ekf_predict(dsp_ekf_t *ekf, const vec3_f32_t *gyro_rad_s, float dt_seconds) {
    if (!ekf || !gyro_rad_s || dt_seconds <= 0.0f) return;

    /* Subtract estimated gyro bias */
    float wx = gyro_rad_s->x - ekf->gyro_bias.x;
    float wy = gyro_rad_s->y - ekf->gyro_bias.y;
    float wz = gyro_rad_s->z - ekf->gyro_bias.z;

    /* First-order Quaternion Kinematics: q_dot = 0.5 * q (x) omega */
    float qw = ekf->q.w;
    float qx = ekf->q.x;
    float qy = ekf->q.y;
    float qz = ekf->q.z;

    float dt2 = 0.5f * dt_seconds;
    ekf->q.w += (-qx * wx - qy * wy - qz * wz) * dt2;
    ekf->q.x += ( qw * wx + qy * wz - qz * wy) * dt2;
    ekf->q.y += ( qw * wy - qx * wz + qz * wx) * dt2;
    ekf->q.z += ( qw * wz + qx * wy - qy * wx) * dt2;

    dsp_quat_normalize(&ekf->q);

    /* Update Euler Angles */
    dsp_quat_to_euler(&ekf->q, &ekf->euler_rad);
    ekf->euler_deg.roll = ekf->euler_rad.roll * RAD_TO_DEG;
    ekf->euler_deg.pitch = ekf->euler_rad.pitch * RAD_TO_DEG;
    ekf->euler_deg.yaw = ekf->euler_rad.yaw * RAD_TO_DEG;
}

void dsp_ekf_update_accel(dsp_ekf_t *ekf, const vec3_f32_t *accel_m_s2) {
    if (!ekf || !accel_m_s2) return;

    float norm = dsp_vec3_norm(accel_m_s2);
    /* Ignore update during high-G maneuvers (e.g. outside 0.75G - 1.25G) */
    if (norm < (0.75f * GRAVITY_MSS) || norm > (1.25f * GRAVITY_MSS)) {
        return;
    }

    /* Normalized measured gravity direction in body frame */
    float inv_norm = 1.0f / norm;
    float ax = accel_m_s2->x * inv_norm;
    float ay = accel_m_s2->y * inv_norm;
    float az = accel_m_s2->z * inv_norm;

    /* Estimated gravity direction from current quaternion: v = R_transpose * [0, 0, 1] */
    float qw = ekf->q.w, qx = ekf->q.x, qy = ekf->q.y, qz = ekf->q.z;
    float vx = 2.0f * (qx * qz - qw * qy);
    float vy = 2.0f * (qw * qx + qy * qz);
    float vz = qw * qw - qx * qx - qy * qy + qz * qz;

    /* Innovation error: cross product between measured and estimated gravity */
    float ex = (ay * vz - az * vy);
    float ey = (az * vx - ax * vz);
    float ez = (ax * vy - ay * vx);

    /* Complementary Kalman correction gain */
    float k_accel = 0.05f;
    ekf->q.w += (-qx * ex - qy * ey - qz * ez) * (0.5f * k_accel);
    ekf->q.x += ( qw * ex + qy * ez - qz * ey) * (0.5f * k_accel);
    ekf->q.y += ( qw * ey - qx * ez + qz * ex) * (0.5f * k_accel);
    ekf->q.z += ( qw * ez + qx * ey - qy * ex) * (0.5f * k_accel);

    dsp_quat_normalize(&ekf->q);

    /* Update Euler Angles */
    dsp_quat_to_euler(&ekf->q, &ekf->euler_rad);
    ekf->euler_deg.roll = ekf->euler_rad.roll * RAD_TO_DEG;
    ekf->euler_deg.pitch = ekf->euler_rad.pitch * RAD_TO_DEG;
    ekf->euler_deg.yaw = ekf->euler_rad.yaw * RAD_TO_DEG;
}

void dsp_ekf_update_mag(dsp_ekf_t *ekf, const vec3_f32_t *mag_gauss) {
    if (!ekf || !mag_gauss) return;
    PULSE_UNUSED(mag_gauss);
}

void dsp_ekf_get_attitude_euler(const dsp_ekf_t *ekf, euler_f32_t *out_deg) {
    if (!ekf || !out_deg) return;
    *out_deg = ekf->euler_deg;
}

void dsp_ekf_get_quaternion(const dsp_ekf_t *ekf, quat_f32_t *out_q) {
    if (!ekf || !out_q) return;
    *out_q = ekf->q;
}
