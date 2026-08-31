/**
 * @file pulse_timer.c
 * @brief High-Resolution Deterministic Software Timers Implementation
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "pulse_os.h"
#include <string.h>

struct pulse_timer {
    const char *name;
    pulse_tick_t period_ticks;
    pulse_tick_t expire_tick;
    pulse_timer_mode_t mode;
    pulse_timer_cb_t callback;
    void *arg;
    bool is_active;
    bool in_use;
};

static struct pulse_timer g_timers[PULSE_CONFIG_MAX_TIMERS];

pulse_status_t pulse_timer_create(const char *name, pulse_tick_t period_ticks,
                                  pulse_timer_mode_t mode, pulse_timer_cb_t callback,
                                  void *arg, pulse_timer_handle_t *out_timer) {
    if (!callback || period_ticks == 0 || !out_timer) {
        return PULSE_ERROR_INVALID_PARAM;
    }

    uint32_t crit = pulse_enter_critical();
    struct pulse_timer *t = NULL;
    for (uint32_t i = 0; i < PULSE_CONFIG_MAX_TIMERS; ++i) {
        if (!g_timers[i].in_use) {
            t = &g_timers[i];
            break;
        }
    }

    if (!t) {
        pulse_exit_critical(crit);
        return PULSE_ERROR_NO_MEMORY;
    }

    t->name = name ? name : "Timer";
    t->period_ticks = period_ticks;
    t->mode = mode;
    t->callback = callback;
    t->arg = arg;
    t->is_active = false;
    t->expire_tick = 0;
    t->in_use = true;

    *out_timer = t;
    pulse_exit_critical(crit);
    return PULSE_OK;
}

pulse_status_t pulse_timer_start(pulse_timer_handle_t timer) {
    if (!timer || !timer->in_use) return PULSE_ERROR_INVALID_PARAM;

    uint32_t crit = pulse_enter_critical();
    timer->expire_tick = pulse_time_get_ticks() + timer->period_ticks;
    timer->is_active = true;
    pulse_exit_critical(crit);
    return PULSE_OK;
}

pulse_status_t pulse_timer_stop(pulse_timer_handle_t timer) {
    if (!timer || !timer->in_use) return PULSE_ERROR_INVALID_PARAM;

    uint32_t crit = pulse_enter_critical();
    timer->is_active = false;
    pulse_exit_critical(crit);
    return PULSE_OK;
}

pulse_status_t pulse_timer_set_period(pulse_timer_handle_t timer, pulse_tick_t new_period_ticks) {
    if (!timer || !timer->in_use || new_period_ticks == 0) return PULSE_ERROR_INVALID_PARAM;

    uint32_t crit = pulse_enter_critical();
    timer->period_ticks = new_period_ticks;
    if (timer->is_active) {
        timer->expire_tick = pulse_time_get_ticks() + new_period_ticks;
    }
    pulse_exit_critical(crit);
    return PULSE_OK;
}

/* Timer process tick called from scheduler / system tick */
void pulse_timer_process(pulse_tick_t current_tick) {
    for (uint32_t i = 0; i < PULSE_CONFIG_MAX_TIMERS; ++i) {
        struct pulse_timer *t = &g_timers[i];
        if (t->in_use && t->is_active) {
            if (current_tick >= t->expire_tick) {
                if (t->callback) {
                    t->callback(t, t->arg);
                }

                if (t->mode == PULSE_TIMER_PERIODIC) {
                    t->expire_tick = current_tick + t->period_ticks;
                } else {
                    t->is_active = false;
                }
            }
        }
    }
}
