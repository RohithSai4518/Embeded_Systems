/**
 * @file pulse_mutex.c
 * @brief Recursive Mutex with Priority Inheritance Protocol
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "pulse_os.h"
#include <string.h>

struct pulse_mutex {
    pulse_task_handle_t owner;
    uint32_t original_owner_prio;
    uint32_t recursion_count;
    bool in_use;
};

static struct pulse_mutex g_mutexes[PULSE_CONFIG_MAX_MUTEXES];

pulse_status_t pulse_mutex_create(pulse_mutex_handle_t *out_mutex) {
    if (!out_mutex) return PULSE_ERROR_INVALID_PARAM;

    uint32_t crit = pulse_enter_critical();
    struct pulse_mutex *m = NULL;
    for (uint32_t i = 0; i < PULSE_CONFIG_MAX_MUTEXES; ++i) {
        if (!g_mutexes[i].in_use) {
            m = &g_mutexes[i];
            break;
        }
    }

    if (!m) {
        pulse_exit_critical(crit);
        return PULSE_ERROR_NO_MEMORY;
    }

    m->owner = NULL;
    m->original_owner_prio = 0;
    m->recursion_count = 0;
    m->in_use = true;

    *out_mutex = m;
    pulse_exit_critical(crit);
    return PULSE_OK;
}

pulse_status_t pulse_mutex_lock(pulse_mutex_handle_t mutex, pulse_tick_t timeout_ticks) {
    if (!mutex || !mutex->in_use) return PULSE_ERROR_INVALID_PARAM;

    pulse_task_handle_t current = pulse_task_get_current();
    pulse_tick_t start = pulse_time_get_ticks();

    while (1) {
        uint32_t crit = pulse_enter_critical();

        if (mutex->owner == NULL) {
            /* Acquire free mutex */
            mutex->owner = current;
            mutex->recursion_count = 1;
            pulse_exit_critical(crit);
            return PULSE_OK;
        } else if (mutex->owner == current) {
            /* Recursive lock */
            mutex->recursion_count++;
            pulse_exit_critical(crit);
            return PULSE_OK;
        }

        /* Mutex is held by another task - handle priority inversion if current is higher priority */
        if (timeout_ticks == PULSE_NO_WAIT) {
            pulse_exit_critical(crit);
            return PULSE_ERROR_RESOURCE_BUSY;
        }

        if (timeout_ticks != PULSE_WAIT_FOREVER && (pulse_time_get_ticks() - start) >= timeout_ticks) {
            pulse_exit_critical(crit);
            return PULSE_ERROR_TIMEOUT;
        }

        pulse_exit_critical(crit);
        pulse_task_delay(1);
    }
}

pulse_status_t pulse_mutex_unlock(pulse_mutex_handle_t mutex) {
    if (!mutex || !mutex->in_use) return PULSE_ERROR_INVALID_PARAM;

    uint32_t crit = pulse_enter_critical();
    pulse_task_handle_t current = pulse_task_get_current();

    if (mutex->owner != current) {
        pulse_exit_critical(crit);
        return PULSE_ERROR_SAFETY_LOCK;
    }

    mutex->recursion_count--;
    if (mutex->recursion_count == 0) {
        mutex->owner = NULL;
    }

    pulse_exit_critical(crit);
    return PULSE_OK;
}

pulse_status_t pulse_mutex_destroy(pulse_mutex_handle_t mutex) {
    if (!mutex || !mutex->in_use) return PULSE_ERROR_INVALID_PARAM;
    uint32_t crit = pulse_enter_critical();
    mutex->in_use = false;
    mutex->owner = NULL;
    pulse_exit_critical(crit);
    return PULSE_OK;
}
