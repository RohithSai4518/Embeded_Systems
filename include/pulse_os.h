/**
 * @file pulse_os.h
 * @brief AeroPulse-RTOS Public Kernel API Declarations
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef PULSE_OS_H
#define PULSE_OS_H

#include "pulse_types.h"
#include "pulse_config.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Task States */
typedef enum {
    PULSE_TASK_STATE_READY = 0,
    PULSE_TASK_STATE_RUNNING,
    PULSE_TASK_STATE_BLOCKED,
    PULSE_TASK_STATE_SUSPENDED,
    PULSE_TASK_STATE_TERMINATED
} pulse_task_state_t;

/* Task Function Pointer */
typedef void (*pulse_task_func_t)(void *arg);

/* Forward Declarations of Kernel Handles */
typedef struct pulse_tcb* pulse_task_handle_t;
typedef struct pulse_queue* pulse_queue_handle_t;
typedef struct pulse_mutex* pulse_mutex_handle_t;
typedef struct pulse_sem* pulse_sem_handle_t;
typedef struct pulse_event* pulse_event_handle_t;
typedef struct pulse_timer* pulse_timer_handle_t;
typedef struct pulse_mempool* pulse_mempool_handle_t;

/* Task Creation Parameters */
typedef struct {
    const char *name;               /**< Human-readable debug name */
    pulse_task_func_t function;     /**< Entry function pointer */
    void *argument;                 /**< Parameter passed to task */
    uint32_t priority;              /**< 0 (Highest) to PULSE_CONFIG_IDLE_PRIORITY */
    uint32_t *stack_buffer;         /**< Pointer to pre-allocated stack memory */
    uint32_t stack_size_words;      /**< Stack size in 32-bit words */
} pulse_task_attr_t;

/* Task Statistics */
typedef struct {
    const char *name;
    pulse_task_state_t state;
    uint32_t priority;
    uint32_t stack_high_water_mark; /**< Minimum unused stack in words */
    uint32_t runtime_ticks;         /**< Total execution ticks */
    float cpu_usage_percent;        /**< Computed CPU utilization */
} pulse_task_stats_t;

/* Timer Callback Function Pointer */
typedef void (*pulse_timer_cb_t)(pulse_timer_handle_t timer, void *arg);

/* Timer Modes */
typedef enum {
    PULSE_TIMER_ONE_SHOT = 0,
    PULSE_TIMER_PERIODIC = 1
} pulse_timer_mode_t;

/* Event Wait Options */
typedef enum {
    PULSE_EVENT_WAIT_ANY = 0,       /**< Wake up if any requested bit is set */
    PULSE_EVENT_WAIT_ALL = 1        /**< Wake up only when all requested bits are set */
} pulse_event_wait_t;

/* ========================================================================= */
/*                         KERNEL LIFECYCLE & SCHEDULER                      */
/* ========================================================================= */

/**
 * @brief Initialize the PulseOS kernel data structures, idle task, and timer lists.
 * @return PULSE_OK on success.
 */
pulse_status_t pulse_kernel_init(void);

/**
 * @brief Start the preemptive multitasking scheduler.
 * @note This call never returns on embedded targets.
 */
void pulse_kernel_start(void);

/**
 * @brief Check if the kernel scheduler is currently running.
 */
bool pulse_kernel_is_running(void);

/**
 * @brief Increment the system tick counter and wake up sleeping tasks.
 * @note Typically called from SysTick ISR or simulated hardware clock.
 */
void pulse_kernel_tick_handler(void);

/**
 * @brief Return current system uptime in ticks (milliseconds).
 */
pulse_tick_t pulse_time_get_ticks(void);

/**
 * @brief Convert milliseconds to RTOS ticks.
 */
static inline pulse_tick_t pulse_ms_to_ticks(uint32_t ms) {
    return (pulse_tick_t)ms;
}

/**
 * @brief Enter critical section (disables interrupts / context switches).
 * @return Previous interrupt mask status.
 */
uint32_t pulse_enter_critical(void);

/**
 * @brief Exit critical section (restores previous interrupt state).
 * @param state Previous status returned by pulse_enter_critical.
 */
void pulse_exit_critical(uint32_t state);

/* ========================================================================= */
/*                              TASK MANAGEMENT                              */
/* ========================================================================= */

/**
 * @brief Create a new real-time task.
 * @param attr Pointer to initialization attributes.
 * @param[out] out_handle Pointer to store allocated task handle.
 */
pulse_status_t pulse_task_create(const pulse_task_attr_t *attr, pulse_task_handle_t *out_handle);

/**
 * @brief Put current task to sleep for a specified duration.
 * @param ticks Duration in ticks.
 */
pulse_status_t pulse_task_delay(pulse_tick_t ticks);

/**
 * @brief Delay task until a specific target wake time (for periodic loops).
 * @param[in,out] prev_wake_time Pointer to previous wake time tick.
 * @param increment Period duration in ticks.
 */
pulse_status_t pulse_task_delay_until(pulse_tick_t *prev_wake_time, pulse_tick_t increment);

/**
 * @brief Yield processor to another ready task with equal or higher priority.
 */
void pulse_task_yield(void);

/**
 * @brief Get currently running task handle.
 */
pulse_task_handle_t pulse_task_get_current(void);

/**
 * @brief Suspend a specific task.
 */
pulse_status_t pulse_task_suspend(pulse_task_handle_t handle);

/**
 * @brief Resume a suspended task.
 */
pulse_status_t pulse_task_resume(pulse_task_handle_t handle);

/**
 * @brief Collect execution statistics for all active tasks.
 * @param[out] stats_array Buffer to receive stats.
 * @param max_count Maximum number of entries.
 * @return Number of tasks recorded.
 */
uint32_t pulse_task_get_system_stats(pulse_task_stats_t *stats_array, uint32_t max_count);

/* ========================================================================= */
/*                           MESSAGE QUEUE IPC                               */
/* ========================================================================= */

/**
 * @brief Create a thread-safe message queue.
 * @param item_size Size in bytes of each message item.
 * @param queue_length Maximum number of items the queue can hold.
 * @param[out] out_queue Handle to created queue.
 */
pulse_status_t pulse_queue_create(size_t item_size, uint32_t queue_length, pulse_queue_handle_t *out_queue);

/**
 * @brief Send an item to the back of the queue.
 * @param queue Target queue handle.
 * @param item Pointer to data buffer to copy into queue.
 * @param timeout_ticks Maximum time to wait if queue is full.
 */
pulse_status_t pulse_queue_send(pulse_queue_handle_t queue, const void *item, pulse_tick_t timeout_ticks);

/**
 * @brief Send an item to the front of the queue (high priority bypass).
 */
pulse_status_t pulse_queue_send_to_front(pulse_queue_handle_t queue, const void *item, pulse_tick_t timeout_ticks);

/**
 * @brief Receive an item from the queue.
 * @param queue Target queue handle.
 * @param[out] buffer Pointer to memory to receive copied data.
 * @param timeout_ticks Maximum time to wait if queue is empty.
 */
pulse_status_t pulse_queue_receive(pulse_queue_handle_t queue, void *buffer, pulse_tick_t timeout_ticks);

/**
 * @brief Peek at the front item without removing it.
 */
pulse_status_t pulse_queue_peek(pulse_queue_handle_t queue, void *buffer, pulse_tick_t timeout_ticks);

/**
 * @brief Return number of items currently waiting in the queue.
 */
uint32_t pulse_queue_get_count(pulse_queue_handle_t queue);

/**
 * @brief Destroy a message queue and free kernel metadata.
 */
pulse_status_t pulse_queue_destroy(pulse_queue_handle_t queue);

/* ========================================================================= */
/*                          MUTEX & SEMAPHORES                               */
/* ========================================================================= */

/**
 * @brief Create a recursive mutex with priority inheritance to prevent priority inversion.
 */
pulse_status_t pulse_mutex_create(pulse_mutex_handle_t *out_mutex);

/**
 * @brief Lock/Acquire mutex.
 */
pulse_status_t pulse_mutex_lock(pulse_mutex_handle_t mutex, pulse_tick_t timeout_ticks);

/**
 * @brief Unlock/Release mutex.
 */
pulse_status_t pulse_mutex_unlock(pulse_mutex_handle_t mutex);

/**
 * @brief Destroy a mutex.
 */
pulse_status_t pulse_mutex_destroy(pulse_mutex_handle_t mutex);

/**
 * @brief Create a counting semaphore.
 * @param initial_count Starting token count.
 * @param max_count Maximum allowable tokens.
 */
pulse_status_t pulse_sem_create(uint32_t initial_count, uint32_t max_count, pulse_sem_handle_t *out_sem);

/**
 * @brief Take/Acquire semaphore token.
 */
pulse_status_t pulse_sem_take(pulse_sem_handle_t sem, pulse_tick_t timeout_ticks);

/**
 * @brief Give/Release semaphore token.
 */
pulse_status_t pulse_sem_give(pulse_sem_handle_t sem);

/**
 * @brief Give semaphore from Interrupt Service Routine (non-blocking).
 */
pulse_status_t pulse_sem_give_from_isr(pulse_sem_handle_t sem, bool *woken_higher_prio_task);

/**
 * @brief Destroy a semaphore.
 */
pulse_status_t pulse_sem_destroy(pulse_sem_handle_t sem);

/* ========================================================================= */
/*                             EVENT FLAGS                                   */
/* ========================================================================= */

/**
 * @brief Create a 32-bit Event Group for multi-task synchronization.
 */
pulse_status_t pulse_event_create(pulse_event_handle_t *out_event);

/**
 * @brief Set event bits in the group and wake waiting tasks.
 */
pulse_status_t pulse_event_set(pulse_event_handle_t event, uint32_t bits);

/**
 * @brief Clear specified event bits.
 */
pulse_status_t pulse_event_clear(pulse_event_handle_t event, uint32_t bits);

/**
 * @brief Wait for bit combination with auto-clear option.
 */
pulse_status_t pulse_event_wait(pulse_event_handle_t event, uint32_t bits_to_wait_for,
                                pulse_event_wait_t wait_type, bool auto_clear,
                                uint32_t *out_bits, pulse_tick_t timeout_ticks);

/**
 * @brief Destroy an event group.
 */
pulse_status_t pulse_event_destroy(pulse_event_handle_t event);

/* ========================================================================= */
/*                          SOFTWARE TIMERS                                  */
/* ========================================================================= */

/**
 * @brief Create a deterministic software timer.
 */
pulse_status_t pulse_timer_create(const char *name, pulse_tick_t period_ticks,
                                  pulse_timer_mode_t mode, pulse_timer_cb_t callback,
                                  void *arg, pulse_timer_handle_t *out_timer);

/**
 * @brief Start or restart software timer.
 */
pulse_status_t pulse_timer_start(pulse_timer_handle_t timer);

/**
 * @brief Stop software timer.
 */
pulse_status_t pulse_timer_stop(pulse_timer_handle_t timer);

/**
 * @brief Modify software timer period.
 */
pulse_status_t pulse_timer_set_period(pulse_timer_handle_t timer, pulse_tick_t new_period_ticks);

/* ========================================================================= */
/*                      DETERMINISTIC MEMORY POOLS                           */
/* ========================================================================= */

/**
 * @brief Initialize a deterministic, zero-fragmentation fixed-size memory pool.
 */
pulse_status_t pulse_mempool_create(void *buffer, size_t block_size, uint32_t block_count,
                                    pulse_mempool_handle_t *out_pool);

/**
 * @brief Allocate one fixed block from pool in O(1) time.
 */
void* pulse_mempool_alloc(pulse_mempool_handle_t pool, pulse_tick_t timeout_ticks);

/**
 * @brief Free allocated block back to pool in O(1) time.
 */
pulse_status_t pulse_mempool_free(pulse_mempool_handle_t pool, void *block);

#ifdef __cplusplus
}
#endif

#endif /* PULSE_OS_H */
