/**
 * @file control_mixer.c
 * @brief Multi-Rotor Matrix Mixer & Actuator Output Mapping Implementation
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "control_mixer.h"
#include <string.h>

void mixer_init(mixer_config_t *mixer, mixer_frame_type_t frame_type) {
    if (!mixer) return;

    memset(mixer, 0, sizeof(*mixer));
    mixer->frame_type = frame_type;
    mixer->min_throttle = 0.05f;  /* 5% min spinning idle when armed */
    mixer->max_throttle = 1.0f;
    mixer->idle_throttle = 0.08f;
    mixer->is_armed = false;

    switch (frame_type) {
        case MIXER_FRAME_QUAD_X:
            mixer->motor_count = 4;
            /* Motor 1: Rear Right (CCW) */
            mixer->rules[0] = (motor_mix_rule_t){ -1.0f,  1.0f, -1.0f, 1.0f };
            /* Motor 2: Front Right (CW) */
            mixer->rules[1] = (motor_mix_rule_t){ -1.0f, -1.0f,  1.0f, 1.0f };
            /* Motor 3: Rear Left (CW) */
            mixer->rules[2] = (motor_mix_rule_t){  1.0f,  1.0f,  1.0f, 1.0f };
            /* Motor 4: Front Left (CCW) */
            mixer->rules[3] = (motor_mix_rule_t){  1.0f, -1.0f, -1.0f, 1.0f };
            break;

        case MIXER_FRAME_HEX_X:
            mixer->motor_count = 6;
            for (int i = 0; i < 6; ++i) {
                mixer->rules[i] = (motor_mix_rule_t){ 0.0f, 0.0f, 0.0f, 1.0f };
            }
            break;

        default:
            mixer->motor_count = 4;
            break;
    }
}

void mixer_arm(mixer_config_t *mixer) {
    if (!mixer) return;
    mixer->is_armed = true;
}

void mixer_disarm(mixer_config_t *mixer) {
    if (!mixer) return;
    mixer->is_armed = false;
}

bool mixer_is_armed(const mixer_config_t *mixer) {
    return mixer ? mixer->is_armed : false;
}

void mixer_apply(const mixer_config_t *mixer, float roll_cmd, float pitch_cmd, float yaw_cmd, float throttle_cmd, float *motor_outputs) {
    if (!mixer || !motor_outputs) return;

    if (!mixer->is_armed) {
        for (uint8_t i = 0; i < mixer->motor_count; ++i) {
            motor_outputs[i] = 0.0f;
        }
        return;
    }

    /* Bound throttle */
    throttle_cmd = PULSE_CLAMP(throttle_cmd, mixer->min_throttle, mixer->max_throttle);

    for (uint8_t i = 0; i < mixer->motor_count; ++i) {
        float mix = (mixer->rules[i].throttle_factor * throttle_cmd) +
                    (mixer->rules[i].roll_factor     * roll_cmd) +
                    (mixer->rules[i].pitch_factor    * pitch_cmd) +
                    (mixer->rules[i].yaw_factor      * yaw_cmd);

        motor_outputs[i] = PULSE_CLAMP(mix, mixer->idle_throttle, 1.0f);
    }
}
