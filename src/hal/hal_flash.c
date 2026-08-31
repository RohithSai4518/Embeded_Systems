/**
 * @file hal_flash.c
 * @brief Hardware Abstraction Layer - QSPI Non-Volatile Flash Driver & EEPROM Emulation
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "hal_flash.h"
#include <string.h>
#include <stdlib.h>

#define SIMULATED_FLASH_SIZE (4UL * 1024UL * 1024UL) /* 4MB simulated flash buffer */

static uint8_t *g_flash_storage = NULL;
static bool g_flash_initialized = false;

pulse_status_t hal_flash_init(void) {
    if (!g_flash_storage) {
        g_flash_storage = (uint8_t *)malloc(SIMULATED_FLASH_SIZE);
        if (!g_flash_storage) return PULSE_ERROR_NO_MEMORY;
        /* NOR Flash erased state is 0xFF */
        memset(g_flash_storage, 0xFF, SIMULATED_FLASH_SIZE);
    }
    g_flash_initialized = true;
    return PULSE_OK;
}

pulse_status_t hal_flash_read(uint32_t address, uint8_t *buffer, size_t length) {
    if (!g_flash_initialized || !g_flash_storage) return PULSE_ERROR_NOT_INITIALIZED;
    if (!buffer || (address + length) > SIMULATED_FLASH_SIZE) return PULSE_ERROR_INVALID_PARAM;

    memcpy(buffer, &g_flash_storage[address], length);
    return PULSE_OK;
}

pulse_status_t hal_flash_write(uint32_t address, const uint8_t *data, size_t length) {
    if (!g_flash_initialized || !g_flash_storage) return PULSE_ERROR_NOT_INITIALIZED;
    if (!data || (address + length) > SIMULATED_FLASH_SIZE) return PULSE_ERROR_INVALID_PARAM;

    /* Flash bit programming can only change 1s to 0s */
    for (size_t i = 0; i < length; ++i) {
        g_flash_storage[address + i] &= data[i];
    }
    return PULSE_OK;
}

pulse_status_t hal_flash_erase_sector(uint32_t sector_address) {
    if (!g_flash_initialized || !g_flash_storage) return PULSE_ERROR_NOT_INITIALIZED;
    if ((sector_address + HAL_FLASH_SECTOR_SIZE) > SIMULATED_FLASH_SIZE) return PULSE_ERROR_INVALID_PARAM;

    uint32_t aligned_addr = sector_address & ~(HAL_FLASH_SECTOR_SIZE - 1);
    memset(&g_flash_storage[aligned_addr], 0xFF, HAL_FLASH_SECTOR_SIZE);
    return PULSE_OK;
}

pulse_status_t hal_flash_erase_chip(void) {
    if (!g_flash_initialized || !g_flash_storage) return PULSE_ERROR_NOT_INITIALIZED;
    memset(g_flash_storage, 0xFF, SIMULATED_FLASH_SIZE);
    return PULSE_OK;
}

bool hal_flash_is_busy(void) {
    return false;
}
