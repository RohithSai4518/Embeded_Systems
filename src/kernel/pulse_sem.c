/**
 * @file pulse_sem.c
 * @brief Counting & Binary Semaphore Implementation with ISR Safe Handlers
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "pulse_os.h"
#include <string.h>

struct pulse_sem {
    uint32_t count;
    uint32_t max_count;
    pulse_task_handle_t waiting_task;
    bool in_use;
};

static struct pulse_sem g_semaphores[PULSE_CONFIG_MAX_SEMAPHORES];

pulse_status_t pulse_sem_create(uint32_t initial_count, uint32_t max_count, pulse_sem_handle_t *out_sem) {
    if (!out_sem || max_count == 0 || initial_count > max_count) {
        return PULSE_ERROR_INVALID_PARAM;
    }

    uint32_t crit = pulse_enter_critical();
    struct pulse_sem *s = NULL;
    for (uint32_t i = 0; i < PULSE_CONFIG_MAX_SEMAPHORES; ++i) {
        if (!g_semaphores[i].in_use) {
            s = &g_semaphores[i];
            break;
        }
    }

    if (!s) {
        pulse_exit_critical(crit);
        return PULSE_ERROR_NO_MEMORY;
    }

    s->count = initial_count;
    s->max_count = max_count;
    s->waiting_task = NULL;
    s->in_use = true;

    *out_sem = s;
    pulse_exit_critical(crit);
    return PULSE_OK;
}

pulse_status_t pulse_sem_take(pulse_sem_handle_t sem, pulse_tick_t timeout_ticks) {
    if (!sem || !sem->in_use) return PULSE_ERROR_INVALID_PARAM;

    pulse_tick_t start = pulse_time_get_ticks();

    while (1) {
        uint32_t crit = pulse_enter_critical();

        if (sem->count > 0) {
            sem->count--;
            pulse_exit_critical(crit);
            return PULSE_OK;
        }

        if (timeout_ticks == PULSE_NO_WAIT) {
            pulse_exit_critical(crit);
            return PULSE_ERROR_RESOURCE_BUSY;
        }

        if (timeout_ticks != PULSE_WAIT_FOREVER && (pulse_time_get_ticks() - start) >= timeout_ticks) {
            pulse_exit_critical(crit);
            return PULSE_ERROR_TIMEOUT;
        }

        sem->waiting_task = pulse_task_get_current();
        pulse_exit_critical(crit);
        pulse_task_delay(1);
    }
}

pulse_status_t pulse_sem_give(pulse_sem_handle_t sem) {
    if (!sem || !sem->in_use) return PULSE_ERROR_INVALID_PARAM;

    uint32_t crit = pulse_enter_critical();

    if (sem->count < sem->max_count) {
        sem->count++;
        if (sem->waiting_task) {
            pulse_task_resume(sem->waiting_task);
            sem->waiting_task = NULL;
        }
        pulse_exit_critical(crit);
        return PULSE_OK;
    }

    pulse_exit_critical(crit);
    return PULSE_ERROR_OVERFLOW;
}

pulse_status_t pulse_sem_give_from_isr(pulse_sem_handle_t sem, bool *woken_higher_prio_task) {
    if (!sem || !sem->in_use) return PULSE_ERROR_INVALID_PARAM;

    if (woken_higher_prio_task) *woken_higher_prio_task = false;

    if (sem->count < sem->max_count) {
        sem->count++;
        if (sem->waiting_task) {
            pulse_task_resume(sem->waiting_task);
            sem->waiting_task = NULL;
            if (woken_higher_prio_task) *woken_higher_prio_task = true;
        }
        return PULSE_OK;
    }
    return PULSE_ERROR_OVERFLOW;
}

pulse_status_t pulse_sem_destroy(pulse_sem_handle_t sem) {
    if (!sem || !sem->in_use) return PULSE_ERROR_INVALID_PARAM;
    uint32_t crit = pulse_enter_critical();
    sem->in_use = false;
    pulse_exit_critical(crit);
    return PULSE_OK;
}
