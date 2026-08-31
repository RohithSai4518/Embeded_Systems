/**
 * @file sim_registers.c
 * @brief Emulated Memory-Mapped I/O (MMIO) Hardware Peripheral Registers
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "pulse_types.h"
#include <string.h>

#define MMIO_BASE_ADDR 0x40000000UL
#define MMIO_MAP_SIZE  0x00010000UL

static uint32_t g_mmio_space[MMIO_MAP_SIZE / 4];

void sim_registers_init(void) {
    memset(g_mmio_space, 0, sizeof(g_mmio_space));
}

uint32_t sim_mmio_read32(uint32_t address) {
    uint32_t offset = (address - MMIO_BASE_ADDR) / 4;
    if (offset < (MMIO_MAP_SIZE / 4)) {
        return g_mmio_space[offset];
    }
    return 0;
}

void sim_mmio_write32(uint32_t address, uint32_t value) {
    uint32_t offset = (address - MMIO_BASE_ADDR) / 4;
    if (offset < (MMIO_MAP_SIZE / 4)) {
        g_mmio_space[offset] = value;
    }
}
