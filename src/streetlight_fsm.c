/**
 * @file streetlight_fsm.c
 * @brief Finite State Machine & Energy Calculation Implementation
 * @author Embedded Systems Engineering Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "streetlight_fsm.h"
#include "sensor_ldr.h"
#include "sensor_pir.h"
#include "actuator_pwm.h"
#include "display_lcd1602.h"
#include <math.h>

#define BASELINE_LAMP_POWER_KW 0.150f /* 150W traditional HPS street lamp */

static streetlight_config_t s_config = {
    .lux_night_threshold = 150.0f,
    .lux_day_threshold = 250.0f,
    .motion_hold_seconds = 15,
    .standby_brightness_pct = 25,
    .active_brightness_pct = 100
};

static streetlight_telemetry_t s_telem;
static float s_motion_timer = 0.0f;
static float s_accumulated_energy_saved_kwh = 0.0f;
static float s_accumulated_total_kwh_trad = 0.0f;

/* Motion sensor interrupt callback */
static void on_motion_event(void *user_data) {
    (void)user_data;
    if (s_telem.state == STATE_NIGHT_STANDBY || s_telem.state == STATE_NIGHT_MOTION_ACTIVE) {
        s_motion_timer = (float)s_config.motion_hold_seconds;
        s_telem.state = STATE_NIGHT_MOTION_ACTIVE;
    }
}

sys_status_t streetlight_fsm_init(const streetlight_config_t *config) {
    if (config) s_config = *config;

    s_telem.ambient_lux = 450.0f;
    s_telem.motion_detected = false;
    s_telem.motion_timer_remaining = 0;
    s_telem.current_pwm_duty_pct = 0;
    s_telem.relay_energized = false;
    s_telem.state = STATE_DAY_IDLE;
    s_telem.mode = MODE_AUTO;
    s_telem.total_operating_hours = 0.0f;
    s_telem.energy_saved_kwh = 0.0f;
    s_telem.energy_savings_percent = 75.0f;

    sensor_pir_init(on_motion_event, NULL);
    actuator_init();
    lcd1602_init(0x27);

    return SYS_OK;
}

void streetlight_fsm_update(float dt_seconds) {
    if (dt_seconds <= 0.0f) return;

    /* 1. Read Sensors */
    sensor_ldr_read_lux(&s_telem.ambient_lux);
    s_telem.motion_detected = sensor_pir_is_motion_detected();

    /* 2. Handle Operating Modes */
    if (s_telem.mode == MODE_MANUAL_FORCE_ON) {
        actuator_set_relay(true);
        actuator_set_brightness(100);
        s_telem.state = STATE_NIGHT_MOTION_ACTIVE;
    } else if (s_telem.mode == MODE_MANUAL_FORCE_OFF) {
        actuator_set_relay(false);
        actuator_set_brightness(0);
        s_telem.state = STATE_DAY_IDLE;
    } else {
        /* AUTO MODE FSM */
        switch (s_telem.state) {
            case STATE_DAY_IDLE:
                actuator_set_relay(false);
                actuator_set_brightness(0);
                s_motion_timer = 0.0f;

                /* Transition to Night if Lux falls below threshold */
                if (s_telem.ambient_lux < s_config.lux_night_threshold) {
                    s_telem.state = STATE_NIGHT_STANDBY;
                }
                break;

            case STATE_NIGHT_STANDBY:
                actuator_set_relay(true);
                actuator_set_brightness(s_config.standby_brightness_pct);

                /* Transition back to Day if morning sunlight returns */
                if (s_telem.ambient_lux > s_config.lux_day_threshold) {
                    s_telem.state = STATE_DAY_IDLE;
                } else if (s_telem.motion_detected) {
                    s_motion_timer = (float)s_config.motion_hold_seconds;
                    s_telem.state = STATE_NIGHT_MOTION_ACTIVE;
                }
                break;

            case STATE_NIGHT_MOTION_ACTIVE:
                actuator_set_relay(true);
                actuator_set_brightness(s_config.active_brightness_pct);

                if (s_telem.motion_detected) {
                    s_motion_timer = (float)s_config.motion_hold_seconds;
                } else if (s_motion_timer > 0.0f) {
                    s_motion_timer -= dt_seconds;
                    if (s_motion_timer <= 0.0f) {
                        s_motion_timer = 0.0f;
                        s_telem.state = STATE_NIGHT_STANDBY;
                    }
                } else {
                    s_telem.state = STATE_NIGHT_STANDBY;
                }

                /* Check for daytime override */
                if (s_telem.ambient_lux > s_config.lux_day_threshold) {
                    s_telem.state = STATE_DAY_IDLE;
                }
                break;
        }
    }

    /* 3. Smooth Actuator Slew Ramping */
    actuator_update_smooth_ramp(dt_seconds);
    s_telem.current_pwm_duty_pct = actuator_get_current_brightness();
    s_telem.relay_energized = actuator_get_relay_state();
    s_telem.motion_timer_remaining = (uint16_t)ceilf(s_motion_timer);

    /* 4. Energy Metrics Calculation */
    float hours = dt_seconds / 3600.0f;
    s_telem.total_operating_hours += hours;

    /* Traditional light would consume full power during all night hours */
    if (s_telem.state != STATE_DAY_IDLE) {
        float trad_energy_step = BASELINE_LAMP_POWER_KW * hours;
        float actual_energy_step = BASELINE_LAMP_POWER_KW * ((float)s_telem.current_pwm_duty_pct / 100.0f) * hours;
        float saved_step = trad_energy_step - actual_energy_step;

        s_accumulated_energy_saved_kwh += saved_step;
        s_accumulated_total_kwh_trad += trad_energy_step;
    }

    s_telem.energy_saved_kwh = s_accumulated_energy_saved_kwh;
    if (s_accumulated_total_kwh_trad > 0.0f) {
        s_telem.energy_savings_percent = (s_accumulated_energy_saved_kwh / s_accumulated_total_kwh_trad) * 100.0f;
    }

    /* 5. Update 16x2 Character LCD */
    const char *st_text = (s_telem.state == STATE_DAY_IDLE) ? "DAY [OFF]" :
                          (s_telem.state == STATE_NIGHT_STANDBY) ? "NIGHT[DIM]" : "NIGHT[FULL]";
    lcd1602_printf(0, 0, "%-10s %3u%%", st_text, s_telem.current_pwm_duty_pct);
    lcd1602_printf(1, 0, "L:%4.0fLx MOT:%s", s_telem.ambient_lux, s_telem.motion_detected ? "YES" : "NO ");
}

void streetlight_fsm_set_mode(system_mode_t mode) {
    s_telem.mode = mode;
}

void streetlight_fsm_get_telemetry(streetlight_telemetry_t *out_telemetry) {
    if (out_telemetry) *out_telemetry = s_telem;
}

void streetlight_fsm_set_config(const streetlight_config_t *config) {
    if (config) s_config = *config;
}

void streetlight_fsm_get_config(streetlight_config_t *out_config) {
    if (out_config) *out_config = s_config;
}
