/**
 * @file test_kernel.c
 * @brief Unit & Stress Tests for PulseOS RTOS Kernel Primitives
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "pulse_os.h"
#include <stdio.h>
#include <assert.h>
#include <string.h>

void test_kernel_queue(void) {
    printf("[TEST] Running Message Queue Tests...\n");
    pulse_queue_handle_t q;
    pulse_status_t status = pulse_queue_create(sizeof(uint32_t), 4, &q);
    assert(status == PULSE_OK);

    uint32_t val1 = 100, val2 = 200, val3 = 300, val4 = 400, val5 = 500;
    assert(pulse_queue_send(q, &val1, PULSE_NO_WAIT) == PULSE_OK);
    assert(pulse_queue_send(q, &val2, PULSE_NO_WAIT) == PULSE_OK);
    assert(pulse_queue_send(q, &val3, PULSE_NO_WAIT) == PULSE_OK);
    assert(pulse_queue_send(q, &val4, PULSE_NO_WAIT) == PULSE_OK);
    assert(pulse_queue_send(q, &val5, PULSE_NO_WAIT) == PULSE_ERROR_QUEUE_FULL);

    assert(pulse_queue_get_count(q) == 4);

    uint32_t rx = 0;
    assert(pulse_queue_receive(q, &rx, PULSE_NO_WAIT) == PULSE_OK && rx == 100);
    assert(pulse_queue_receive(q, &rx, PULSE_NO_WAIT) == PULSE_OK && rx == 200);
    assert(pulse_queue_receive(q, &rx, PULSE_NO_WAIT) == PULSE_OK && rx == 300);
    assert(pulse_queue_receive(q, &rx, PULSE_NO_WAIT) == PULSE_OK && rx == 400);
    assert(pulse_queue_receive(q, &rx, PULSE_NO_WAIT) == PULSE_ERROR_QUEUE_EMPTY);

    pulse_queue_destroy(q);
    printf("[PASS] Message Queue Test Completed Successfully.\n");
}

void test_kernel_mempool(void) {
    printf("[TEST] Running Deterministic Memory Pool Tests...\n");
    uint8_t memory_storage[32 * 8];
    pulse_mempool_handle_t pool;
    assert(pulse_mempool_create(memory_storage, 32, 8, &pool) == PULSE_OK);

    void *blocks[8];
    for (int i = 0; i < 8; ++i) {
        blocks[i] = pulse_mempool_alloc(pool, PULSE_NO_WAIT);
        assert(blocks[i] != NULL);
    }
    assert(pulse_mempool_alloc(pool, PULSE_NO_WAIT) == NULL); /* Pool exhausted */

    for (int i = 0; i < 8; ++i) {
        assert(pulse_mempool_free(pool, blocks[i]) == PULSE_OK);
    }

    void *reallocated = pulse_mempool_alloc(pool, PULSE_NO_WAIT);
    assert(reallocated != NULL);
    pulse_mempool_free(pool, reallocated);

    printf("[PASS] Memory Pool Test Completed Successfully.\n");
}

void test_kernel_events(void) {
    printf("[TEST] Running Event Flags Synchronization Tests...\n");
    pulse_event_handle_t evt;
    assert(pulse_event_create(&evt) == PULSE_OK);

    pulse_event_set(evt, 0x05); /* Set bits 0 and 2 */
    uint32_t out = 0;
    assert(pulse_event_wait(evt, 0x01, PULSE_EVENT_WAIT_ANY, false, &out, PULSE_NO_WAIT) == PULSE_OK);
    assert(out == 0x05);

    assert(pulse_event_wait(evt, 0x05, PULSE_EVENT_WAIT_ALL, true, &out, PULSE_NO_WAIT) == PULSE_OK);
    /* Auto clear checked */
    assert(pulse_event_wait(evt, 0x05, PULSE_EVENT_WAIT_ALL, false, &out, PULSE_NO_WAIT) == PULSE_ERROR_TIMEOUT);

    pulse_event_destroy(evt);
    printf("[PASS] Event Flags Test Completed Successfully.\n");
}
