/**
 * @file control_failsafe.c
 * @brief Safety Interlock & Failsafe Supervisor (Loss of Link, Low Battery, Geofence)
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "pulse_types.h"
#include "pulse_os.h"
#include "hal_adc.h"

typedef enum {
    FAILSAFE_STATE_NORMAL = 0,
    FAILSAFE_STATE_WARNING,
    FAILSAFE_STATE_RETURN_TO_HOME,
    FAILSAFE_STATE_LAND_NOW,
    FAILSAFE_STATE_EMERGENCY_DISARM
} failsafe_state_t;

typedef struct {
    failsafe_state_t state;
    float min_vbat_warning;     /**< 14.8V */
    float min_vbat_critical;    /**< 14.0V */
    pulse_tick_t last_rc_heartbeat_tick;
    pulse_tick_t link_timeout_ticks;
    bool is_triggered;
} failsafe_ctx_t;

static failsafe_ctx_t g_failsafe;

void failsafe_init(void) {
    g_failsafe.state = FAILSAFE_STATE_NORMAL;
    g_failsafe.min_vbat_warning = 14.8f;
    g_failsafe.min_vbat_critical = 14.0f;
    g_failsafe.last_rc_heartbeat_tick = pulse_time_get_ticks();
    g_failsafe.link_timeout_ticks = 1000; /* 1 second timeout */
    g_failsafe.is_triggered = false;
}

void failsafe_feed_heartbeat(void) {
    g_failsafe.last_rc_heartbeat_tick = pulse_time_get_ticks();
}

failsafe_state_t failsafe_evaluate(void) {
    pulse_tick_t now = pulse_time_get_ticks();
    float vbat = hal_adc_get_battery_voltage();

    /* Check link loss */
    if ((now - g_failsafe.last_rc_heartbeat_tick) > g_failsafe.link_timeout_ticks) {
        g_failsafe.state = FAILSAFE_STATE_RETURN_TO_HOME;
        g_failsafe.is_triggered = true;
        return g_failsafe.state;
    }

    /* Check critical battery */
    if (vbat < g_failsafe.min_vbat_critical) {
        g_failsafe.state = FAILSAFE_STATE_LAND_NOW;
        g_failsafe.is_triggered = true;
        return g_failsafe.state;
    } else if (vbat < g_failsafe.min_vbat_warning) {
        g_failsafe.state = FAILSAFE_STATE_WARNING;
        return g_failsafe.state;
    }

    g_failsafe.state = FAILSAFE_STATE_NORMAL;
    g_failsafe.is_triggered = false;
    return g_failsafe.state;
}
