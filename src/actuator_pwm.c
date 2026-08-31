/**
 * @file actuator_pwm.c
 * @brief PWM LED Dimming & Relay Actuation Implementation
 * @author Embedded Systems Engineering Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "actuator_pwm.h"
#include <math.h>

static uint8_t s_target_duty = 0;
static float s_current_duty = 0.0f;
static bool s_relay_state = false;
static float s_slew_rate_pct_per_sec = 100.0f; /* Fast, natural smooth transition */

sys_status_t actuator_init(void) {
    s_target_duty = 0;
    s_current_duty = 0.0f;
    s_relay_state = false;
    return SYS_OK;
}

sys_status_t actuator_set_brightness(uint8_t target_duty_pct) {
    if (target_duty_pct > 100) target_duty_pct = 100;
    s_target_duty = target_duty_pct;
    return SYS_OK;
}

sys_status_t actuator_set_relay(bool energized) {
    s_relay_state = energized;
    return SYS_OK;
}

uint8_t actuator_get_current_brightness(void) {
    return (uint8_t)roundf(s_current_duty);
}

bool actuator_get_relay_state(void) {
    return s_relay_state;
}

void actuator_update_smooth_ramp(float dt_seconds) {
    if (dt_seconds <= 0.0f) return;

    float target = (float)s_target_duty;
    float max_change = s_slew_rate_pct_per_sec * dt_seconds;

    if (fabsf(target - s_current_duty) <= max_change) {
        s_current_duty = target;
    } else if (s_current_duty < target) {
        s_current_duty += max_change;
    } else {
        s_current_duty -= max_change;
    }
}
