/**
 * @file storage_params.c
 * @brief Non-Volatile Parameter Table & Checksum Store Implementation
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "pulse_types.h"
#include "hal_flash.h"
#include "sys_bootloader.h"
#include <string.h>

#define PARAMS_MAGIC 0x5041524D /* 'PARM' */
#define MAX_PARAMS 64

typedef struct {
    char name[16];
    float value;
    float default_val;
    float min_val;
    float max_val;
} param_entry_t;

typedef struct {
    uint32_t magic;
    uint32_t count;
    param_entry_t entries[MAX_PARAMS];
    uint32_t crc32;
} param_table_t;

static param_table_t g_params;

pulse_status_t params_init(void) {
    memset(&g_params, 0, sizeof(g_params));
    g_params.magic = PARAMS_MAGIC;
    g_params.count = 0;

    /* Populate default flight parameters */
    param_entry_t defaults[] = {
        { "PID_ROLL_KP", 1.20f, 1.20f, 0.1f, 10.0f },
        { "PID_ROLL_KI", 0.05f, 0.05f, 0.0f, 2.0f },
        { "PID_ROLL_KD", 0.03f, 0.03f, 0.0f, 1.0f },
        { "PID_PITCH_KP", 1.25f, 1.25f, 0.1f, 10.0f },
        { "PID_PITCH_KI", 0.05f, 0.05f, 0.0f, 2.0f },
        { "PID_PITCH_KD", 0.03f, 0.03f, 0.0f, 1.0f },
        { "PID_YAW_KP", 2.50f, 2.50f, 0.1f, 10.0f },
        { "BAT_MIN_VOLTS", 14.2f, 14.2f, 10.0f, 25.0f },
        { "MAX_ALT_M", 120.0f, 120.0f, 10.0f, 500.0f }
    };

    for (size_t i = 0; i < PULSE_ARRAY_SIZE(defaults); ++i) {
        g_params.entries[g_params.count++] = defaults[i];
    }

    return PULSE_OK;
}

float params_get(const char *name, float fallback) {
    if (!name) return fallback;
    for (uint32_t i = 0; i < g_params.count; ++i) {
        if (strcmp(g_params.entries[i].name, name) == 0) {
            return g_params.entries[i].value;
        }
    }
    return fallback;
}

pulse_status_t params_set(const char *name, float value) {
    if (!name) return PULSE_ERROR_NULL_POINTER;
    for (uint32_t i = 0; i < g_params.count; ++i) {
        if (strcmp(g_params.entries[i].name, name) == 0) {
            g_params.entries[i].value = PULSE_CLAMP(value, g_params.entries[i].min_val, g_params.entries[i].max_val);
            return PULSE_OK;
        }
    }
    return PULSE_ERROR_NOT_FOUND;
}

pulse_status_t params_save_to_flash(void) {
    g_params.crc32 = sys_crc32_calculate((const uint8_t *)&g_params, sizeof(param_table_t) - sizeof(uint32_t));
    hal_flash_erase_sector(HAL_FLASH_ADDR_PARAMS);
    return hal_flash_write(HAL_FLASH_ADDR_PARAMS, (const uint8_t *)&g_params, sizeof(param_table_t));
}

pulse_status_t params_load_from_flash(void) {
    param_table_t loaded;
    if (hal_flash_read(HAL_FLASH_ADDR_PARAMS, (uint8_t *)&loaded, sizeof(param_table_t)) != PULSE_OK) {
        return PULSE_ERROR_HARDWARE_FAULT;
    }

    if (loaded.magic != PARAMS_MAGIC) {
        return PULSE_ERROR_NOT_FOUND;
    }

    uint32_t crc = sys_crc32_calculate((const uint8_t *)&loaded, sizeof(param_table_t) - sizeof(uint32_t));
    if (crc != loaded.crc32) {
        return PULSE_ERROR_CRC_MISMATCH;
    }

    g_params = loaded;
    return PULSE_OK;
}
