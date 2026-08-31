/**
 * @file sys_crc32.c
 * @brief High-Throughput Lookup-Table CRC-32 (IEEE 802.3 Ethernet Polynomial)
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "sys_bootloader.h"

#define CRC32_POLYNOMIAL 0xEDB88320UL

static uint32_t s_crc32_table[256];
static bool s_table_initialized = false;

static void init_crc32_table(void) {
    for (uint32_t i = 0; i < 256; ++i) {
        uint32_t c = i;
        for (int j = 0; j < 8; ++j) {
            if (c & 1) {
                c = CRC32_POLYNOMIAL ^ (c >> 1);
            } else {
                c = c >> 1;
            }
        }
        s_crc32_table[i] = c;
    }
    s_table_initialized = true;
}

uint32_t sys_crc32_calculate(const uint8_t *data, size_t length) {
    return sys_crc32_update(0xFFFFFFFFUL, data, length) ^ 0xFFFFFFFFUL;
}

uint32_t sys_crc32_update(uint32_t running_crc, const uint8_t *data, size_t length) {
    if (!data || length == 0) return running_crc;

    if (!s_table_initialized) {
        init_crc32_table();
    }

    uint32_t crc = running_crc;
    for (size_t i = 0; i < length; ++i) {
        crc = s_crc32_table[(crc ^ data[i]) & 0xFF] ^ (crc >> 8);
    }
    return crc;
}
