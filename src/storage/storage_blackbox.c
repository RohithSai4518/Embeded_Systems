/**
 * @file storage_blackbox.c
 * @brief High-Speed Circular Blackbox Flight Data Recorder Implementation
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "storage_blackbox.h"
#include "hal_flash.h"
#include "sys_bootloader.h"
#include "pulse_os.h"
#include <string.h>

#define RAM_BUFFER_ENTRIES 32

typedef struct {
    blackbox_meta_header_t header;
    blackbox_fast_entry_t ram_buffer[RAM_BUFFER_ENTRIES];
    uint16_t ram_idx;
    uint32_t current_flash_addr;
    bool is_logging;
} blackbox_ctx_t;

static blackbox_ctx_t g_bb;

pulse_status_t blackbox_init(void) {
    memset(&g_bb, 0, sizeof(g_bb));
    g_bb.header.magic = BLACKBOX_HEADER_MAGIC;
    g_bb.header.session_id = 1;
    g_bb.current_flash_addr = HAL_FLASH_ADDR_BLACKBOX;
    g_bb.is_logging = false;

    hal_flash_init();
    return PULSE_OK;
}

pulse_status_t blackbox_start_session(void) {
    g_bb.header.session_id++;
    g_bb.header.start_timestamp_ms = (uint32_t)pulse_time_get_ticks();
    g_bb.header.total_records = 0;
    g_bb.ram_idx = 0;
    g_bb.is_logging = true;

    /* Write metadata header to flash partition base */
    hal_flash_write(HAL_FLASH_ADDR_BLACKBOX, (const uint8_t *)&g_bb.header, sizeof(g_bb.header));
    g_bb.current_flash_addr = HAL_FLASH_ADDR_BLACKBOX + sizeof(g_bb.header);

    return PULSE_OK;
}

pulse_status_t blackbox_log_fast_entry(const blackbox_fast_entry_t *entry) {
    if (!g_bb.is_logging || !entry) return PULSE_ERROR_SAFETY_LOCK;

    g_bb.ram_buffer[g_bb.ram_idx++] = *entry;
    g_bb.header.total_records++;

    if (g_bb.ram_idx >= RAM_BUFFER_ENTRIES) {
        blackbox_flush_to_flash();
    }

    return PULSE_OK;
}

pulse_status_t blackbox_log_event(blackbox_record_type_t type, uint32_t data) {
    blackbox_fast_entry_t entry;
    memset(&entry, 0, sizeof(entry));
    entry.timestamp_us = (uint32_t)pulse_time_get_ticks() * 1000;
    entry.record_type = (uint8_t)type;
    entry.flags = data;

    return blackbox_log_fast_entry(&entry);
}

pulse_status_t blackbox_flush_to_flash(void) {
    if (g_bb.ram_idx == 0) return PULSE_OK;

    size_t bytes_to_write = g_bb.ram_idx * sizeof(blackbox_fast_entry_t);
    hal_flash_write(g_bb.current_flash_addr, (const uint8_t *)g_bb.ram_buffer, bytes_to_write);
    g_bb.current_flash_addr += bytes_to_write;
    g_bb.ram_idx = 0;

    return PULSE_OK;
}

uint32_t blackbox_get_record_count(void) {
    return g_bb.header.total_records;
}

void blackbox_erase_all(void) {
    hal_flash_erase_sector(HAL_FLASH_ADDR_BLACKBOX);
    g_bb.header.total_records = 0;
    g_bb.current_flash_addr = HAL_FLASH_ADDR_BLACKBOX;
}
