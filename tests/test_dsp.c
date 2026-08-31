/**
 * @file test_dsp.c
 * @brief Unit Tests for DSP Filters & 7-State Quaternion EKF
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "dsp_filters.h"
#include "dsp_ekf.h"
#include <stdio.h>
#include <assert.h>
#include <math.h>

void test_dsp_filters(void) {
    printf("[TEST] Running DSP Low-Pass and Biquad Filter Tests...\n");

    /* 1. Low-Pass Filter Test */
    dsp_lpf1_t lpf;
    dsp_lpf1_init(&lpf, 20.0f, 1000.0f);
    float out = 0.0f;
    for (int i = 0; i < 50; ++i) {
        out = dsp_lpf1_update(&lpf, 10.0f);
    }
    assert(out > 8.0f && out <= 10.0f);

    /* 2. Biquad Notch Filter Test (Reject 50 Hz motor vibration on 1000Hz loop) */
    dsp_biquad_t notch;
    dsp_biquad_init(&notch, DSP_BIQUAD_NOTCH, 50.0f, 1000.0f, 5.0f);
    float filtered_notch = 0.0f;
    for (int i = 0; i < 200; ++i) {
        float input_50hz = sinf(2.0f * 3.14159f * 50.0f * ((float)i / 1000.0f));
        filtered_notch = dsp_biquad_update(&notch, input_50hz);
    }
    assert(fabsf(filtered_notch) < 0.2f); /* Significant attenuation */

    printf("[PASS] DSP Filter Tests Completed Successfully.\n");
}

void test_dsp_ekf(void) {
    printf("[TEST] Running 7-State Quaternion EKF Convergence Tests...\n");
    dsp_ekf_t ekf;
    dsp_ekf_init(&ekf);

    /* Feed level stationary gravity (0, 0, 9.80665) and 0 gyro */
    vec3_f32_t gyro = { 0.0f, 0.0f, 0.0f };
    vec3_f32_t accel = { 0.0f, 0.0f, 9.80665f };

    for (int i = 0; i < 250; ++i) {
        dsp_ekf_predict(&ekf, &gyro, 0.004f);
        dsp_ekf_update_accel(&ekf, &accel);
    }

    euler_f32_t euler;
    dsp_ekf_get_attitude_euler(&ekf, &euler);
    assert(fabsf(euler.roll) < 0.5f);
    assert(fabsf(euler.pitch) < 0.5f);

    printf("[PASS] 7-State Quaternion EKF Tests Completed Successfully.\n");
}
