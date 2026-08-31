/**
 * @file actuator_pwm.h
 * @brief Timer PWM LED Dimming & AC Relay Controller Interface
 * @author Embedded Systems Engineering Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef ACTUATOR_PWM_H
#define ACTUATOR_PWM_H

#include "streetlight_types.h"

#ifdef __cplusplus
extern "C" {
#endif

sys_status_t actuator_init(void);
sys_status_t actuator_set_brightness(uint8_t target_duty_pct);
sys_status_t actuator_set_relay(bool energized);
uint8_t actuator_get_current_brightness(void);
bool actuator_get_relay_state(void);
void actuator_update_smooth_ramp(float dt_seconds);

#ifdef __cplusplus
}
#endif

#endif /* ACTUATOR_PWM_H */
