/**
 * @file pulse_mem.c
 * @brief Deterministic Fixed-Size Memory Pool Allocator (Zero Fragmentation)
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "pulse_os.h"
#include <string.h>

struct pulse_mempool {
    uint8_t *pool_buffer;
    size_t block_size;
    uint32_t block_count;
    uint32_t free_count;
    void *free_list_head;
    bool in_use;
};

#define MAX_STATIC_POOLS 4
static struct pulse_mempool g_pools[MAX_STATIC_POOLS];

pulse_status_t pulse_mempool_create(void *buffer, size_t block_size, uint32_t block_count,
                                    pulse_mempool_handle_t *out_pool) {
    if (!buffer || block_size < sizeof(void*) || block_count == 0 || !out_pool) {
        return PULSE_ERROR_INVALID_PARAM;
    }

    uint32_t crit = pulse_enter_critical();
    struct pulse_mempool *pool = NULL;
    for (uint32_t i = 0; i < MAX_STATIC_POOLS; ++i) {
        if (!g_pools[i].in_use) {
            pool = &g_pools[i];
            break;
        }
    }

    if (!pool) {
        pulse_exit_critical(crit);
        return PULSE_ERROR_NO_MEMORY;
    }

    pool->pool_buffer = (uint8_t *)buffer;
    pool->block_size = block_size;
    pool->block_count = block_count;
    pool->free_count = block_count;

    /* Build singly linked free list */
    uint8_t *ptr = pool->pool_buffer;
    for (uint32_t i = 0; i < block_count - 1; ++i) {
        void **next_ptr = (void **)ptr;
        *next_ptr = (void *)(ptr + block_size);
        ptr += block_size;
    }
    void **last_ptr = (void **)ptr;
    *last_ptr = NULL;

    pool->free_list_head = pool->pool_buffer;
    pool->in_use = true;

    *out_pool = pool;
    pulse_exit_critical(crit);
    return PULSE_OK;
}

void* pulse_mempool_alloc(pulse_mempool_handle_t pool, pulse_tick_t timeout_ticks) {
    if (!pool || !pool->in_use) return NULL;

    pulse_tick_t start = pulse_time_get_ticks();

    while (1) {
        uint32_t crit = pulse_enter_critical();

        if (pool->free_list_head != NULL) {
            void *block = pool->free_list_head;
            pool->free_list_head = *(void **)block;
            pool->free_count--;
            pulse_exit_critical(crit);
            return block;
        }

        if (timeout_ticks == PULSE_NO_WAIT) {
            pulse_exit_critical(crit);
            return NULL;
        }

        if (timeout_ticks != PULSE_WAIT_FOREVER && (pulse_time_get_ticks() - start) >= timeout_ticks) {
            pulse_exit_critical(crit);
            return NULL;
        }

        pulse_exit_critical(crit);
        pulse_task_delay(1);
    }
}

pulse_status_t pulse_mempool_free(pulse_mempool_handle_t pool, void *block) {
    if (!pool || !pool->in_use || !block) return PULSE_ERROR_INVALID_PARAM;

    uint32_t crit = pulse_enter_critical();

    /* Range check */
    uint8_t *b = (uint8_t *)block;
    if (b < pool->pool_buffer || b >= (pool->pool_buffer + (pool->block_size * pool->block_count))) {
        pulse_exit_critical(crit);
        return PULSE_ERROR_INVALID_PARAM;
    }

    *(void **)block = pool->free_list_head;
    pool->free_list_head = block;
    pool->free_count++;

    pulse_exit_critical(crit);
    return PULSE_OK;
}
