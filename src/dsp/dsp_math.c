/**
 * @file dsp_math.c
 * @brief Fast Vector, Matrix, and Quaternion Mathematical Utilities
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "pulse_types.h"
#include <math.h>

#define M_PI_F 3.14159265358979323846f

/* Fast Inverse Square Root (1/sqrt(x)) */
float dsp_fast_inv_sqrt(float x) {
    float xhalf = 0.5f * x;
    union {
        float f;
        uint32_t i;
    } conv;
    conv.f = x;
    conv.i = 0x5F3759DF - (conv.i >> 1);
    conv.f = conv.f * (1.5f - (xhalf * conv.f * conv.f)); /* 1st Newton iteration */
    conv.f = conv.f * (1.5f - (xhalf * conv.f * conv.f)); /* 2nd Newton iteration */
    return conv.f;
}

/* Vector 3D Operations */
void dsp_vec3_add(const vec3_f32_t *a, const vec3_f32_t *b, vec3_f32_t *out) {
    out->x = a->x + b->x;
    out->y = a->y + b->y;
    out->z = a->z + b->z;
}

void dsp_vec3_sub(const vec3_f32_t *a, const vec3_f32_t *b, vec3_f32_t *out) {
    out->x = a->x - b->x;
    out->y = a->y - b->y;
    out->z = a->z - b->z;
}

float dsp_vec3_dot(const vec3_f32_t *a, const vec3_f32_t *b) {
    return (a->x * b->x + a->y * b->y + a->z * b->z);
}

void dsp_vec3_cross(const vec3_f32_t *a, const vec3_f32_t *b, vec3_f32_t *out) {
    out->x = a->y * b->z - a->z * b->y;
    out->y = a->z * b->x - a->x * b->z;
    out->z = a->x * b->y - a->y * b->x;
}

float dsp_vec3_norm(const vec3_f32_t *v) {
    return sqrtf(dsp_vec3_dot(v, v));
}

void dsp_vec3_normalize(vec3_f32_t *v) {
    float norm_sq = dsp_vec3_dot(v, v);
    if (norm_sq > 1e-8f) {
        float inv_norm = dsp_fast_inv_sqrt(norm_sq);
        v->x *= inv_norm;
        v->y *= inv_norm;
        v->z *= inv_norm;
    }
}

/* Quaternion Operations */
void dsp_quat_normalize(quat_f32_t *q) {
    float norm_sq = q->w * q->w + q->x * q->x + q->y * q->y + q->z * q->z;
    if (norm_sq > 1e-8f) {
        float inv_norm = dsp_fast_inv_sqrt(norm_sq);
        q->w *= inv_norm;
        q->x *= inv_norm;
        q->y *= inv_norm;
        q->z *= inv_norm;
    }
}

void dsp_quat_to_euler(const quat_f32_t *q, euler_f32_t *euler) {
    /* Roll (x-axis rotation) */
    float sinr_cosp = 2.0f * (q->w * q->x + q->y * q->z);
    float cosr_cosp = 1.0f - 2.0f * (q->x * q->x + q->y * q->y);
    euler->roll = atan2f(sinr_cosp, cosr_cosp);

    /* Pitch (y-axis rotation) */
    float sinp = 2.0f * (q->w * q->y - q->z * q->x);
    if (fabsf(sinp) >= 1.0f) {
        euler->pitch = copysignf(M_PI_F / 2.0f, sinp); /* Gimbal lock fallback */
    } else {
        euler->pitch = asinf(sinp);
    }

    /* Yaw (z-axis rotation) */
    float siny_cosp = 2.0f * (q->w * q->z + q->x * q->y);
    float cosy_cosp = 1.0f - 2.0f * (q->y * q->y + q->z * q->z);
    euler->yaw = atan2f(siny_cosp, cosy_cosp);
}

void dsp_euler_to_quat(const euler_f32_t *euler, quat_f32_t *q) {
    float cy = cosf(euler->yaw * 0.5f);
    float sy = sinf(euler->yaw * 0.5f);
    float cp = cosf(euler->pitch * 0.5f);
    float sp = sinf(euler->pitch * 0.5f);
    float cr = cosf(euler->roll * 0.5f);
    float sr = sinf(euler->roll * 0.5f);

    q->w = cr * cp * cy + sr * sp * sy;
    q->x = sr * cp * cy - cr * sp * sy;
    q->y = cr * sp * cy + sr * cp * sy;
    q->z = cr * cp * sy - sr * sp * cy;
}
