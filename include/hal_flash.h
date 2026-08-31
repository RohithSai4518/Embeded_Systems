/**
 * @file hal_flash.h
 * @brief Hardware Abstraction Layer - Non-Volatile Flash & Wear-Leveled EEPROM Emulation
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef HAL_FLASH_H
#define HAL_FLASH_H

#include "pulse_types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define HAL_FLASH_PAGE_SIZE         4096UL
#define HAL_FLASH_SECTOR_SIZE       65536UL
#define HAL_FLASH_TOTAL_SIZE        (16UL * 1024UL * 1024UL) /* 16 MB QSPI Flash */

/* Memory Bank Partitions */
#define HAL_FLASH_ADDR_BOOTLOADER   0x00000000UL
#define HAL_FLASH_ADDR_APP_BANK_A   0x00040000UL /* 256KB offset, 4MB size */
#define HAL_FLASH_ADDR_APP_BANK_B   0x00440000UL /* Staging bank for OTA */
#define HAL_FLASH_ADDR_PARAMS       0x00840000UL /* Calibration parameters */
#define HAL_FLASH_ADDR_BLACKBOX     0x00900000UL /* Blackbox telemetry logs (7MB) */

pulse_status_t hal_flash_init(void);
pulse_status_t hal_flash_read(uint32_t address, uint8_t *buffer, size_t length);
pulse_status_t hal_flash_write(uint32_t address, const uint8_t *data, size_t length);
pulse_status_t hal_flash_erase_sector(uint32_t sector_address);
pulse_status_t hal_flash_erase_chip(void);
bool hal_flash_is_busy(void);

#ifdef __cplusplus
}
#endif

#endif /* HAL_FLASH_H */
