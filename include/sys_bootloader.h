/**
 * @file sys_bootloader.h
 * @brief Dual-Bank Secure Bootloader & OTA Firmware Verification Engine
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef SYS_BOOTLOADER_H
#define SYS_BOOTLOADER_H

#include "pulse_types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define BOOT_IMAGE_MAGIC        0x50554C53 /* 'PULS' */
#define BOOT_HEADER_VERSION     1

typedef enum {
    BOOT_BANK_A = 0,
    BOOT_BANK_B = 1,
    BOOT_BANK_UNKNOWN = 0xFF
} boot_bank_t;

typedef enum {
    IMAGE_STATE_EMPTY = 0,
    IMAGE_STATE_STAGED,
    IMAGE_STATE_VALID,
    IMAGE_STATE_TESTING,
    IMAGE_STATE_CONFIRMED,
    IMAGE_STATE_CORRUPT
} image_state_t;

#pragma pack(push, 1)
typedef struct {
    uint32_t magic;
    uint32_t header_version;
    uint32_t image_size;
    uint32_t crc32;
    uint32_t version_major;
    uint32_t version_minor;
    uint32_t version_patch;
    uint32_t build_timestamp;
    uint32_t entry_point;
    uint8_t git_commit_hash[20];
    uint32_t signature[8];
} boot_image_header_t;

typedef struct {
    uint32_t active_bank;
    uint32_t boot_attempts;
    uint32_t max_boot_attempts;
    uint32_t bank_a_state;
    uint32_t bank_b_state;
    uint32_t crc32;
} boot_metadata_t;
#pragma pack(pop)

pulse_status_t bootloader_init(void);
pulse_status_t bootloader_verify_image(uint32_t bank_flash_address, const boot_image_header_t **out_header);
pulse_status_t bootloader_stage_chunk(uint32_t offset, const uint8_t *data, size_t len);
pulse_status_t bootloader_finalize_staging(uint32_t total_size, uint32_t expected_crc32);
pulse_status_t bootloader_switch_active_bank(boot_bank_t new_bank);
void bootloader_mark_boot_successful(void);
void bootloader_trigger_system_reset(void);

/* Fast CRC-32 Engine */
uint32_t sys_crc32_calculate(const uint8_t *data, size_t length);
uint32_t sys_crc32_update(uint32_t running_crc, const uint8_t *data, size_t length);

#ifdef __cplusplus
}
#endif

#endif /* SYS_BOOTLOADER_H */
