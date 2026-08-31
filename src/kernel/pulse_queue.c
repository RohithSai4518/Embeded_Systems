/**
 * @file pulse_queue.c
 * @brief Thread-Safe Circular FIFO Message Queue with Blocking Timeouts
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "pulse_os.h"
#include <string.h>
#include <stdlib.h>

struct pulse_queue {
    uint8_t *buffer;
    size_t item_size;
    uint32_t capacity;
    uint32_t head;          /**< Write index */
    uint32_t tail;          /**< Read index */
    uint32_t count;         /**< Current items */
    pulse_task_handle_t waiting_sender;
    pulse_task_handle_t waiting_receiver;
    bool in_use;
};

static struct pulse_queue g_queues[PULSE_CONFIG_MAX_QUEUES];

pulse_status_t pulse_queue_create(size_t item_size, uint32_t queue_length, pulse_queue_handle_t *out_queue) {
    if (item_size == 0 || queue_length == 0 || !out_queue) {
        return PULSE_ERROR_INVALID_PARAM;
    }

    uint32_t crit = pulse_enter_critical();

    struct pulse_queue *q = NULL;
    for (uint32_t i = 0; i < PULSE_CONFIG_MAX_QUEUES; ++i) {
        if (!g_queues[i].in_use) {
            q = &g_queues[i];
            break;
        }
    }

    if (!q) {
        pulse_exit_critical(crit);
        return PULSE_ERROR_NO_MEMORY;
    }

    q->buffer = (uint8_t *)malloc(item_size * queue_length);
    if (!q->buffer) {
        pulse_exit_critical(crit);
        return PULSE_ERROR_NO_MEMORY;
    }

    q->item_size = item_size;
    q->capacity = queue_length;
    q->head = 0;
    q->tail = 0;
    q->count = 0;
    q->waiting_sender = NULL;
    q->waiting_receiver = NULL;
    q->in_use = true;

    *out_queue = q;
    pulse_exit_critical(crit);
    return PULSE_OK;
}

pulse_status_t pulse_queue_send(pulse_queue_handle_t queue, const void *item, pulse_tick_t timeout_ticks) {
    if (!queue || !item || !queue->in_use) {
        return PULSE_ERROR_INVALID_PARAM;
    }

    pulse_tick_t start = pulse_time_get_ticks();

    while (1) {
        uint32_t crit = pulse_enter_critical();

        if (queue->count < queue->capacity) {
            /* Copy item to head position */
            uint8_t *dest = queue->buffer + (queue->head * queue->item_size);
            memcpy(dest, item, queue->item_size);
            queue->head = (queue->head + 1) % queue->capacity;
            queue->count++;

            /* Wake waiting receiver */
            if (queue->waiting_receiver) {
                pulse_task_resume(queue->waiting_receiver);
                queue->waiting_receiver = NULL;
            }

            pulse_exit_critical(crit);
            return PULSE_OK;
        }

        if (timeout_ticks == PULSE_NO_WAIT) {
            pulse_exit_critical(crit);
            return PULSE_ERROR_QUEUE_FULL;
        }

        if (timeout_ticks != PULSE_WAIT_FOREVER) {
            if ((pulse_time_get_ticks() - start) >= timeout_ticks) {
                pulse_exit_critical(crit);
                return PULSE_ERROR_TIMEOUT;
            }
        }

        queue->waiting_sender = pulse_task_get_current();
        pulse_exit_critical(crit);
        pulse_task_delay(1);
    }
}

pulse_status_t pulse_queue_send_to_front(pulse_queue_handle_t queue, const void *item, pulse_tick_t timeout_ticks) {
    if (!queue || !item || !queue->in_use) {
        return PULSE_ERROR_INVALID_PARAM;
    }

    pulse_tick_t start = pulse_time_get_ticks();

    while (1) {
        uint32_t crit = pulse_enter_critical();

        if (queue->count < queue->capacity) {
            /* Move tail backwards */
            queue->tail = (queue->tail == 0) ? (queue->capacity - 1) : (queue->tail - 1);
            uint8_t *dest = queue->buffer + (queue->tail * queue->item_size);
            memcpy(dest, item, queue->item_size);
            queue->count++;

            if (queue->waiting_receiver) {
                pulse_task_resume(queue->waiting_receiver);
                queue->waiting_receiver = NULL;
            }

            pulse_exit_critical(crit);
            return PULSE_OK;
        }

        if (timeout_ticks == PULSE_NO_WAIT) {
            pulse_exit_critical(crit);
            return PULSE_ERROR_QUEUE_FULL;
        }

        if (timeout_ticks != PULSE_WAIT_FOREVER && (pulse_time_get_ticks() - start) >= timeout_ticks) {
            pulse_exit_critical(crit);
            return PULSE_ERROR_TIMEOUT;
        }

        queue->waiting_sender = pulse_task_get_current();
        pulse_exit_critical(crit);
        pulse_task_delay(1);
    }
}

pulse_status_t pulse_queue_receive(pulse_queue_handle_t queue, void *buffer, pulse_tick_t timeout_ticks) {
    if (!queue || !buffer || !queue->in_use) {
        return PULSE_ERROR_INVALID_PARAM;
    }

    pulse_tick_t start = pulse_time_get_ticks();

    while (1) {
        uint32_t crit = pulse_enter_critical();

        if (queue->count > 0) {
            uint8_t *src = queue->buffer + (queue->tail * queue->item_size);
            memcpy(buffer, src, queue->item_size);
            queue->tail = (queue->tail + 1) % queue->capacity;
            queue->count--;

            if (queue->waiting_sender) {
                pulse_task_resume(queue->waiting_sender);
                queue->waiting_sender = NULL;
            }

            pulse_exit_critical(crit);
            return PULSE_OK;
        }

        if (timeout_ticks == PULSE_NO_WAIT) {
            pulse_exit_critical(crit);
            return PULSE_ERROR_QUEUE_EMPTY;
        }

        if (timeout_ticks != PULSE_WAIT_FOREVER && (pulse_time_get_ticks() - start) >= timeout_ticks) {
            pulse_exit_critical(crit);
            return PULSE_ERROR_TIMEOUT;
        }

        queue->waiting_receiver = pulse_task_get_current();
        pulse_exit_critical(crit);
        pulse_task_delay(1);
    }
}

pulse_status_t pulse_queue_peek(pulse_queue_handle_t queue, void *buffer, pulse_tick_t timeout_ticks) {
    if (!queue || !buffer || !queue->in_use) {
        return PULSE_ERROR_INVALID_PARAM;
    }

    uint32_t crit = pulse_enter_critical();
    if (queue->count > 0) {
        uint8_t *src = queue->buffer + (queue->tail * queue->item_size);
        memcpy(buffer, src, queue->item_size);
        pulse_exit_critical(crit);
        return PULSE_OK;
    }
    pulse_exit_critical(crit);

    PULSE_UNUSED(timeout_ticks);
    return PULSE_ERROR_QUEUE_EMPTY;
}

uint32_t pulse_queue_get_count(pulse_queue_handle_t queue) {
    if (!queue || !queue->in_use) return 0;
    return queue->count;
}

pulse_status_t pulse_queue_destroy(pulse_queue_handle_t queue) {
    if (!queue || !queue->in_use) return PULSE_ERROR_INVALID_PARAM;
    uint32_t crit = pulse_enter_critical();
    if (queue->buffer) {
        free(queue->buffer);
        queue->buffer = NULL;
    }
    queue->in_use = false;
    pulse_exit_critical(crit);
    return PULSE_OK;
}
