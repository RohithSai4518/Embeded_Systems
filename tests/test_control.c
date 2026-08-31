/**
 * @file test_control.c
 * @brief Unit Tests for Cascaded PID Controller & Actuator Matrix Mixer
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "control_pid.h"
#include "control_mixer.h"
#include <stdio.h>
#include <assert.h>
#include <math.h>

void test_control_pid(void) {
    printf("[TEST] Running PID Anti-Windup & Saturation Tests...\n");

    pid_config_t cfg = {
        .kp = 1.0f,
        .ki = 0.5f,
        .kd = 0.05f,
        .ff = 0.0f,
        .output_min = -1.0f,
        .output_max = 1.0f,
        .integrator_min = -0.5f,
        .integrator_max = 0.5f,
        .d_term_lpf_hz = 50.0f
    };

    pid_controller_t pid;
    pid_init(&pid, &cfg, 1000.0f);

    /* Step response error of 5.0 -> output should clamp to 1.0 */
    float out = pid_update(&pid, 5.0f, 0.0f, 0.001f);
    assert(out == 1.0f);
    assert(pid.is_saturated == true);
    assert(pid.integrator <= 0.5f); /* Anti-windup verified */

    printf("[PASS] PID Controller Tests Completed Successfully.\n");
}

void test_control_mixer(void) {
    printf("[TEST] Running Quadcopter Matrix Mixer Tests...\n");

    mixer_config_t mixer;
    mixer_init(&mixer, MIXER_FRAME_QUAD_X);

    float motors[4];
    /* When disarmed, motor output must be 0.0 */
    mixer_apply(&mixer, 0.0f, 0.0f, 0.0f, 0.5f, motors);
    assert(motors[0] == 0.0f && motors[1] == 0.0f && motors[2] == 0.0f && motors[3] == 0.0f);

    /* Arm mixer and apply 50% throttle with 0 roll/pitch/yaw */
    mixer_arm(&mixer);
    mixer_apply(&mixer, 0.0f, 0.0f, 0.0f, 0.5f, motors);
    for (int i = 0; i < 4; ++i) {
        assert(fabsf(motors[i] - 0.5f) < 1e-4f);
    }

    printf("[PASS] Mixer Tests Completed Successfully.\n");
}
