/**
 * @file control_mixer.h
 * @brief Multi-Rotor Matrix Mixer & Actuator Output Mapping
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef CONTROL_MIXER_H
#define CONTROL_MIXER_H

#include "pulse_types.h"
#include "hal_pwm.h"

#ifdef __cplusplus
extern "C" {
#endif

#define MIXER_MAX_MOTORS 8

typedef enum {
    MIXER_FRAME_QUAD_X = 0,     /**< Standard Quadcopter X configuration */
    MIXER_FRAME_QUAD_PLUS,      /**< Plus (+) Quadcopter configuration */
    MIXER_FRAME_HEX_X,          /**< Hexacopter X */
    MIXER_FRAME_OCTO_X,         /**< Octocopter X */
    MIXER_FRAME_CUSTOM          /**< Custom matrix */
} mixer_frame_type_t;

typedef struct {
    float roll_factor;
    float pitch_factor;
    float yaw_factor;
    float throttle_factor;
} motor_mix_rule_t;

typedef struct {
    mixer_frame_type_t frame_type;
    uint8_t motor_count;
    motor_mix_rule_t rules[MIXER_MAX_MOTORS];
    float min_throttle;
    float max_throttle;
    float idle_throttle;
    bool is_armed;
} mixer_config_t;

void mixer_init(mixer_config_t *mixer, mixer_frame_type_t frame_type);
void mixer_arm(mixer_config_t *mixer);
void mixer_disarm(mixer_config_t *mixer);
bool mixer_is_armed(const mixer_config_t *mixer);
void mixer_apply(const mixer_config_t *mixer, float roll_cmd, float pitch_cmd, float yaw_cmd, float throttle_cmd, float *motor_outputs);

#ifdef __cplusplus
}
#endif

#endif /* CONTROL_MIXER_H */
