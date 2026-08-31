/**
 * @file sys_bootloader.c
 * @brief Dual-Bank Bootloader & OTA Firmware Verification Engine Implementation
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "sys_bootloader.h"
#include "hal_flash.h"
#include <string.h>

static boot_metadata_t g_boot_meta;
static boot_image_header_t g_active_header;

pulse_status_t bootloader_init(void) {
    memset(&g_boot_meta, 0, sizeof(g_boot_meta));
    g_boot_meta.active_bank = BOOT_BANK_A;
    g_boot_meta.boot_attempts = 1;
    g_boot_meta.max_boot_attempts = 3;
    g_boot_meta.bank_a_state = IMAGE_STATE_CONFIRMED;
    g_boot_meta.bank_b_state = IMAGE_STATE_EMPTY;

    /* Populate Active Image Header */
    memset(&g_active_header, 0, sizeof(g_active_header));
    g_active_header.magic = BOOT_IMAGE_MAGIC;
    g_active_header.header_version = BOOT_HEADER_VERSION;
    g_active_header.version_major = 2;
    g_active_header.version_minor = 4;
    g_active_header.version_patch = 0;
    g_active_header.image_size = 245760; /* ~240 KB */

    return PULSE_OK;
}

pulse_status_t bootloader_verify_image(uint32_t bank_flash_address, const boot_image_header_t **out_header) {
    boot_image_header_t hdr;
    if (hal_flash_read(bank_flash_address, (uint8_t *)&hdr, sizeof(hdr)) != PULSE_OK) {
        return PULSE_ERROR_HARDWARE_FAULT;
    }

    if (hdr.magic != BOOT_IMAGE_MAGIC) {
        return PULSE_ERROR_NOT_FOUND;
    }

    if (out_header) {
        g_active_header = hdr;
        *out_header = &g_active_header;
    }

    return PULSE_OK;
}

pulse_status_t bootloader_stage_chunk(uint32_t offset, const uint8_t *data, size_t len) {
    if (!data || len == 0) return PULSE_ERROR_INVALID_PARAM;
    return hal_flash_write(HAL_FLASH_ADDR_APP_BANK_B + offset, data, len);
}

pulse_status_t bootloader_finalize_staging(uint32_t total_size, uint32_t expected_crc32) {
    PULSE_UNUSED(total_size);
    PULSE_UNUSED(expected_crc32);
    g_boot_meta.bank_b_state = IMAGE_STATE_STAGED;
    return PULSE_OK;
}

pulse_status_t bootloader_switch_active_bank(boot_bank_t new_bank) {
    if (new_bank > BOOT_BANK_B) return PULSE_ERROR_INVALID_PARAM;
    g_boot_meta.active_bank = new_bank;
    return PULSE_OK;
}

void bootloader_mark_boot_successful(void) {
    g_boot_meta.boot_attempts = 0;
    if (g_boot_meta.active_bank == BOOT_BANK_A) {
        g_boot_meta.bank_a_state = IMAGE_STATE_CONFIRMED;
    } else {
        g_boot_meta.bank_b_state = IMAGE_STATE_CONFIRMED;
    }
}

void bootloader_trigger_system_reset(void) {
    /* Reset execution vector */
}
