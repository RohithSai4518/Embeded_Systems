/**
 * @file pulse_event.c
 * @brief Multi-bit Event Flags Synchronization Primitive
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "pulse_os.h"
#include <string.h>

struct pulse_event {
    uint32_t event_bits;
    pulse_task_handle_t waiting_task;
    uint32_t waiting_bits;
    pulse_event_wait_t wait_type;
    bool in_use;
};

static struct pulse_event g_events[PULSE_CONFIG_MAX_EVENT_GROUPS];

pulse_status_t pulse_event_create(pulse_event_handle_t *out_event) {
    if (!out_event) return PULSE_ERROR_INVALID_PARAM;

    uint32_t crit = pulse_enter_critical();
    struct pulse_event *e = NULL;
    for (uint32_t i = 0; i < PULSE_CONFIG_MAX_EVENT_GROUPS; ++i) {
        if (!g_events[i].in_use) {
            e = &g_events[i];
            break;
        }
    }

    if (!e) {
        pulse_exit_critical(crit);
        return PULSE_ERROR_NO_MEMORY;
    }

    e->event_bits = 0;
    e->waiting_task = NULL;
    e->waiting_bits = 0;
    e->in_use = true;

    *out_event = e;
    pulse_exit_critical(crit);
    return PULSE_OK;
}

pulse_status_t pulse_event_set(pulse_event_handle_t event, uint32_t bits) {
    if (!event || !event->in_use) return PULSE_ERROR_INVALID_PARAM;

    uint32_t crit = pulse_enter_critical();
    event->event_bits |= bits;

    if (event->waiting_task) {
        bool match = false;
        if (event->wait_type == PULSE_EVENT_WAIT_ALL) {
            match = ((event->event_bits & event->waiting_bits) == event->waiting_bits);
        } else {
            match = ((event->event_bits & event->waiting_bits) != 0);
        }

        if (match) {
            pulse_task_resume(event->waiting_task);
            event->waiting_task = NULL;
        }
    }

    pulse_exit_critical(crit);
    return PULSE_OK;
}

pulse_status_t pulse_event_clear(pulse_event_handle_t event, uint32_t bits) {
    if (!event || !event->in_use) return PULSE_ERROR_INVALID_PARAM;

    uint32_t crit = pulse_enter_critical();
    event->event_bits &= ~bits;
    pulse_exit_critical(crit);
    return PULSE_OK;
}

pulse_status_t pulse_event_wait(pulse_event_handle_t event, uint32_t bits_to_wait_for,
                                pulse_event_wait_t wait_type, bool auto_clear,
                                uint32_t *out_bits, pulse_tick_t timeout_ticks) {
    if (!event || !event->in_use || bits_to_wait_for == 0) return PULSE_ERROR_INVALID_PARAM;

    pulse_tick_t start = pulse_time_get_ticks();

    while (1) {
        uint32_t crit = pulse_enter_critical();

        bool match = false;
        if (wait_type == PULSE_EVENT_WAIT_ALL) {
            match = ((event->event_bits & bits_to_wait_for) == bits_to_wait_for);
        } else {
            match = ((event->event_bits & bits_to_wait_for) != 0);
        }

        if (match) {
            if (out_bits) *out_bits = event->event_bits;
            if (auto_clear) {
                event->event_bits &= ~bits_to_wait_for;
            }
            pulse_exit_critical(crit);
            return PULSE_OK;
        }

        if (timeout_ticks == PULSE_NO_WAIT) {
            pulse_exit_critical(crit);
            return PULSE_ERROR_TIMEOUT;
        }

        if (timeout_ticks != PULSE_WAIT_FOREVER && (pulse_time_get_ticks() - start) >= timeout_ticks) {
            pulse_exit_critical(crit);
            return PULSE_ERROR_TIMEOUT;
        }

        event->waiting_task = pulse_task_get_current();
        event->waiting_bits = bits_to_wait_for;
        event->wait_type = wait_type;
        pulse_exit_critical(crit);
        pulse_task_delay(1);
    }
}

pulse_status_t pulse_event_destroy(pulse_event_handle_t event) {
    if (!event || !event->in_use) return PULSE_ERROR_INVALID_PARAM;
    uint32_t crit = pulse_enter_critical();
    event->in_use = false;
    pulse_exit_critical(crit);
    return PULSE_OK;
}
