/**
 * @file pulse_sched.c
 * @brief AeroPulse-RTOS Preemptive Priority Scheduler & Task Context Management
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "pulse_os.h"
#include <string.h>
#include <stdio.h>

#if defined(_WIN32) || defined(__linux__) || defined(__APPLE__)
#include <windows.h>
#endif

/* Task Control Block (TCB) */
struct pulse_tcb {
    uint32_t *stack_top;                /**< Current stack pointer */
    uint32_t *stack_base;               /**< Stack memory starting pointer */
    uint32_t stack_size_words;          /**< Size in words */
    uint32_t priority;                  /**< Effective running priority (0 = Highest) */
    uint32_t base_priority;             /**< Base priority before mutex inheritance */
    pulse_task_state_t state;           /**< Ready, Running, Blocked, Suspended */
    pulse_tick_t wake_tick;             /**< Tick counter to wake up when delayed */
    pulse_tick_t runtime_ticks;         /**< Accumulated execution ticks */
    const char *name;                   /**< Task debug label */
    pulse_task_func_t function;         /**< Entry function */
    void *argument;                     /**< Argument passed to entry */
    struct pulse_tcb *next;             /**< Linked list next pointer */
    struct pulse_tcb *prev;             /**< Linked list prev pointer */
    bool in_ready_list;
#if defined(_WIN32)
    HANDLE sim_thread;
    DWORD sim_thread_id;
    HANDLE sim_event;
#endif
};

/* Internal Kernel State */
typedef struct {
    struct pulse_tcb tasks[PULSE_CONFIG_MAX_TASKS];
    uint32_t task_count;
    struct pulse_tcb *current_task;
    struct pulse_tcb *ready_heads[PULSE_CONFIG_MAX_PRIORITIES];
    struct pulse_tcb *ready_tails[PULSE_CONFIG_MAX_PRIORITIES];
    struct pulse_tcb *delay_list_head;
    volatile pulse_tick_t system_ticks;
    volatile bool is_running;
    volatile uint32_t critical_nesting;
    uint32_t idle_stack[PULSE_CONFIG_IDLE_STACK_SIZE];
    pulse_task_handle_t idle_task_handle;
} kernel_state_t;

static kernel_state_t g_kernel;

/* Forward Declarations */
static void pulse_idle_task_entry(void *arg);
static void pulse_sched_ready_insert(struct pulse_tcb *tcb);
static void pulse_sched_ready_remove(struct pulse_tcb *tcb);

pulse_status_t pulse_kernel_init(void) {
    memset(&g_kernel, 0, sizeof(g_kernel));
    g_kernel.system_ticks = 0;
    g_kernel.is_running = false;
    g_kernel.critical_nesting = 0;

    for (uint32_t p = 0; p < PULSE_CONFIG_MAX_PRIORITIES; ++p) {
        g_kernel.ready_heads[p] = NULL;
        g_kernel.ready_tails[p] = NULL;
    }
    g_kernel.delay_list_head = NULL;

    /* Create the system Idle Task */
    pulse_task_attr_t idle_attr = {
        .name = "IDLE",
        .function = pulse_idle_task_entry,
        .argument = NULL,
        .priority = PULSE_CONFIG_IDLE_PRIORITY,
        .stack_buffer = g_kernel.idle_stack,
        .stack_size_words = PULSE_CONFIG_IDLE_STACK_SIZE
    };

    return pulse_task_create(&idle_attr, &g_kernel.idle_task_handle);
}

static void pulse_idle_task_entry(void *arg) {
    PULSE_UNUSED(arg);
    while (1) {
        /* Idle low-power wait / yield */
#if defined(_WIN32)
        Sleep(1);
#endif
        pulse_task_yield();
    }
}

#if defined(_WIN32)
static DWORD WINAPI win32_task_wrapper(LPVOID param) {
    struct pulse_tcb *tcb = (struct pulse_tcb *)param;
    /* Wait until scheduled for the first time */
    WaitForSingleObject(tcb->sim_event, INFINITE);
    if (tcb->function) {
        tcb->function(tcb->argument);
    }
    tcb->state = PULSE_TASK_STATE_TERMINATED;
    return 0;
}
#endif

pulse_status_t pulse_task_create(const pulse_task_attr_t *attr, pulse_task_handle_t *out_handle) {
    if (!attr || !attr->function || !attr->stack_buffer || attr->stack_size_words == 0) {
        return PULSE_ERROR_INVALID_PARAM;
    }
    if (attr->priority >= PULSE_CONFIG_MAX_PRIORITIES) {
        return PULSE_ERROR_INVALID_PARAM;
    }

    uint32_t crit = pulse_enter_critical();

    if (g_kernel.task_count >= PULSE_CONFIG_MAX_TASKS) {
        pulse_exit_critical(crit);
        return PULSE_ERROR_NO_MEMORY;
    }

    struct pulse_tcb *tcb = &g_kernel.tasks[g_kernel.task_count++];
    memset(tcb, 0, sizeof(*tcb));

    tcb->name = attr->name ? attr->name : "Task";
    tcb->function = attr->function;
    tcb->argument = attr->argument;
    tcb->priority = attr->priority;
    tcb->base_priority = attr->priority;
    tcb->stack_base = attr->stack_buffer;
    tcb->stack_size_words = attr->stack_size_words;
    tcb->stack_top = attr->stack_buffer + attr->stack_size_words - 1;
    tcb->state = PULSE_TASK_STATE_READY;
    tcb->wake_tick = 0;
    tcb->runtime_ticks = 0;

    /* Fill stack with watermark pattern */
    for (uint32_t i = 0; i < attr->stack_size_words; ++i) {
        attr->stack_buffer[i] = 0xDEADBEEF;
    }

#if defined(_WIN32)
    tcb->sim_event = CreateEvent(NULL, FALSE, FALSE, NULL);
    tcb->sim_thread = CreateThread(NULL, 0, win32_task_wrapper, tcb, 0, &tcb->sim_thread_id);
#endif

    pulse_sched_ready_insert(tcb);

    if (out_handle) {
        *out_handle = tcb;
    }

    pulse_exit_critical(crit);
    return PULSE_OK;
}

static void pulse_sched_ready_insert(struct pulse_tcb *tcb) {
    uint32_t p = tcb->priority;
    tcb->state = PULSE_TASK_STATE_READY;
    tcb->in_ready_list = true;
    tcb->next = NULL;
    tcb->prev = g_kernel.ready_tails[p];

    if (g_kernel.ready_tails[p] != NULL) {
        g_kernel.ready_tails[p]->next = tcb;
    } else {
        g_kernel.ready_heads[p] = tcb;
    }
    g_kernel.ready_tails[p] = tcb;
}

static void pulse_sched_ready_remove(struct pulse_tcb *tcb) {
    if (!tcb->in_ready_list) return;

    uint32_t p = tcb->priority;
    if (tcb->prev) {
        tcb->prev->next = tcb->next;
    } else {
        g_kernel.ready_heads[p] = tcb->next;
    }

    if (tcb->next) {
        tcb->next->prev = tcb->prev;
    } else {
        g_kernel.ready_tails[p] = tcb->prev;
    }

    tcb->next = NULL;
    tcb->prev = NULL;
    tcb->in_ready_list = false;
}

static struct pulse_tcb* pulse_sched_pick_highest(void) {
    for (uint32_t p = 0; p < PULSE_CONFIG_MAX_PRIORITIES; ++p) {
        if (g_kernel.ready_heads[p] != NULL) {
            return g_kernel.ready_heads[p];
        }
    }
    return g_kernel.idle_task_handle;
}

void pulse_kernel_start(void) {
    g_kernel.is_running = true;
    struct pulse_tcb *first = pulse_sched_pick_highest();
    g_kernel.current_task = first;
    first->state = PULSE_TASK_STATE_RUNNING;

#if defined(_WIN32)
    SetEvent(first->sim_event);
    /* In desktop simulation, this thread manages tick generation or waits */
    while (g_kernel.is_running) {
        Sleep(1);
        pulse_kernel_tick_handler();
    }
#endif
}

bool pulse_kernel_is_running(void) {
    return g_kernel.is_running;
}

void pulse_kernel_tick_handler(void) {
    if (!g_kernel.is_running) return;

    g_kernel.system_ticks++;

    uint32_t crit = pulse_enter_critical();

    /* Check delayed tasks */
    struct pulse_tcb *curr = g_kernel.delay_list_head;
    struct pulse_tcb *prev = NULL;

    while (curr != NULL) {
        struct pulse_tcb *next = curr->next;
        if (g_kernel.system_ticks >= curr->wake_tick) {
            /* Unblock task */
            if (prev) {
                prev->next = next;
            } else {
                g_kernel.delay_list_head = next;
            }
            pulse_sched_ready_insert(curr);
        } else {
            prev = curr;
        }
        curr = next;
    }

    if (g_kernel.current_task) {
        g_kernel.current_task->runtime_ticks++;
    }

    pulse_exit_critical(crit);
}

pulse_tick_t pulse_time_get_ticks(void) {
    return g_kernel.system_ticks;
}

pulse_status_t pulse_task_delay(pulse_tick_t ticks) {
    if (ticks == 0) {
        pulse_task_yield();
        return PULSE_OK;
    }

    uint32_t crit = pulse_enter_critical();
    struct pulse_tcb *cur = g_kernel.current_task;
    if (!cur) {
        pulse_exit_critical(crit);
        return PULSE_ERROR_NOT_INITIALIZED;
    }

    pulse_sched_ready_remove(cur);
    cur->state = PULSE_TASK_STATE_BLOCKED;
    cur->wake_tick = g_kernel.system_ticks + ticks;

    /* Add to delay list */
    cur->next = g_kernel.delay_list_head;
    g_kernel.delay_list_head = cur;

    pulse_exit_critical(crit);
    pulse_task_yield();
    return PULSE_OK;
}

pulse_status_t pulse_task_delay_until(pulse_tick_t *prev_wake_time, pulse_tick_t increment) {
    if (!prev_wake_time) return PULSE_ERROR_NULL_POINTER;

    pulse_tick_t target = *prev_wake_time + increment;
    pulse_tick_t now = pulse_time_get_ticks();

    if (target > now) {
        pulse_task_delay(target - now);
    }
    *prev_wake_time = target;
    return PULSE_OK;
}

void pulse_task_yield(void) {
    if (!g_kernel.is_running) return;

    uint32_t crit = pulse_enter_critical();
    struct pulse_tcb *prev = g_kernel.current_task;
    struct pulse_tcb *next = pulse_sched_pick_highest();

    if (prev && prev->state == PULSE_TASK_STATE_RUNNING) {
        prev->state = PULSE_TASK_STATE_READY;
        /* Rotate round-robin at same priority */
        if (g_kernel.ready_heads[prev->priority] == prev && prev->next != NULL) {
            pulse_sched_ready_remove(prev);
            pulse_sched_ready_insert(prev);
        }
    }

    if (next) {
        next->state = PULSE_TASK_STATE_RUNNING;
        g_kernel.current_task = next;
#if defined(_WIN32)
        if (prev != next && next->sim_event) {
            SetEvent(next->sim_event);
        }
#endif
    }

    pulse_exit_critical(crit);
}

pulse_task_handle_t pulse_task_get_current(void) {
    return g_kernel.current_task;
}

pulse_status_t pulse_task_suspend(pulse_task_handle_t handle) {
    if (!handle) handle = g_kernel.current_task;
    uint32_t crit = pulse_enter_critical();
    pulse_sched_ready_remove(handle);
    handle->state = PULSE_TASK_STATE_SUSPENDED;
    pulse_exit_critical(crit);
    if (handle == g_kernel.current_task) {
        pulse_task_yield();
    }
    return PULSE_OK;
}

pulse_status_t pulse_task_resume(pulse_task_handle_t handle) {
    if (!handle) return PULSE_ERROR_NULL_POINTER;
    uint32_t crit = pulse_enter_critical();
    if (handle->state == PULSE_TASK_STATE_SUSPENDED) {
        pulse_sched_ready_insert(handle);
    }
    pulse_exit_critical(crit);
    return PULSE_OK;
}

uint32_t pulse_task_get_system_stats(pulse_task_stats_t *stats_array, uint32_t max_count) {
    if (!stats_array || max_count == 0) return 0;

    uint32_t count = PULSE_MIN(g_kernel.task_count, max_count);
    pulse_tick_t total = g_kernel.system_ticks > 0 ? g_kernel.system_ticks : 1;

    for (uint32_t i = 0; i < count; ++i) {
        struct pulse_tcb *t = &g_kernel.tasks[i];
        stats_array[i].name = t->name;
        stats_array[i].state = t->state;
        stats_array[i].priority = t->priority;
        stats_array[i].runtime_ticks = t->runtime_ticks;
        stats_array[i].cpu_usage_percent = ((float)t->runtime_ticks * 100.0f) / (float)total;

        /* Calculate stack high-water mark */
        uint32_t unused = 0;
        for (uint32_t w = 0; w < t->stack_size_words; ++w) {
            if (t->stack_base[w] == 0xDEADBEEF) {
                unused++;
            } else {
                break;
            }
        }
        stats_array[i].stack_high_water_mark = unused;
    }
    return count;
}

uint32_t pulse_enter_critical(void) {
    g_kernel.critical_nesting++;
    return g_kernel.critical_nesting;
}

void pulse_exit_critical(uint32_t state) {
    PULSE_UNUSED(state);
    if (g_kernel.critical_nesting > 0) {
        g_kernel.critical_nesting--;
    }
}
