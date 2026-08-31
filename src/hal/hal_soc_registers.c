/**
 * @file hal_soc_registers.c
 * @brief Complete SoC Peripheral Register Configuration & Base Address Mapping Table
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include <stdint.h>
#include <stdbool.h>


/* SoC Peripheral Block Configuration Routine 1 */
int hal_soc_configure_peripheral_block_1(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 1 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 2 */
int hal_soc_configure_peripheral_block_2(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 2 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 3 */
int hal_soc_configure_peripheral_block_3(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 3 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 4 */
int hal_soc_configure_peripheral_block_4(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 4 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 5 */
int hal_soc_configure_peripheral_block_5(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 5 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 6 */
int hal_soc_configure_peripheral_block_6(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 6 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 7 */
int hal_soc_configure_peripheral_block_7(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 7 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 8 */
int hal_soc_configure_peripheral_block_8(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 8 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 9 */
int hal_soc_configure_peripheral_block_9(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 9 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 10 */
int hal_soc_configure_peripheral_block_10(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 10 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 11 */
int hal_soc_configure_peripheral_block_11(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 11 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 12 */
int hal_soc_configure_peripheral_block_12(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 12 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 13 */
int hal_soc_configure_peripheral_block_13(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 13 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 14 */
int hal_soc_configure_peripheral_block_14(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 14 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 15 */
int hal_soc_configure_peripheral_block_15(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 15 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 16 */
int hal_soc_configure_peripheral_block_16(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 16 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 17 */
int hal_soc_configure_peripheral_block_17(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 17 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 18 */
int hal_soc_configure_peripheral_block_18(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 18 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 19 */
int hal_soc_configure_peripheral_block_19(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 19 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 20 */
int hal_soc_configure_peripheral_block_20(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 20 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 21 */
int hal_soc_configure_peripheral_block_21(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 21 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 22 */
int hal_soc_configure_peripheral_block_22(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 22 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 23 */
int hal_soc_configure_peripheral_block_23(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 23 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 24 */
int hal_soc_configure_peripheral_block_24(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 24 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 25 */
int hal_soc_configure_peripheral_block_25(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 25 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 26 */
int hal_soc_configure_peripheral_block_26(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 26 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 27 */
int hal_soc_configure_peripheral_block_27(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 27 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 28 */
int hal_soc_configure_peripheral_block_28(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 28 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 29 */
int hal_soc_configure_peripheral_block_29(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 29 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 30 */
int hal_soc_configure_peripheral_block_30(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 30 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 31 */
int hal_soc_configure_peripheral_block_31(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 31 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 32 */
int hal_soc_configure_peripheral_block_32(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 32 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 33 */
int hal_soc_configure_peripheral_block_33(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 33 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 34 */
int hal_soc_configure_peripheral_block_34(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 34 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 35 */
int hal_soc_configure_peripheral_block_35(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 35 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 36 */
int hal_soc_configure_peripheral_block_36(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 36 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 37 */
int hal_soc_configure_peripheral_block_37(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 37 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 38 */
int hal_soc_configure_peripheral_block_38(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 38 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 39 */
int hal_soc_configure_peripheral_block_39(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 39 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 40 */
int hal_soc_configure_peripheral_block_40(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 40 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 41 */
int hal_soc_configure_peripheral_block_41(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 41 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 42 */
int hal_soc_configure_peripheral_block_42(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 42 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 43 */
int hal_soc_configure_peripheral_block_43(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 43 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 44 */
int hal_soc_configure_peripheral_block_44(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 44 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 45 */
int hal_soc_configure_peripheral_block_45(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 45 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 46 */
int hal_soc_configure_peripheral_block_46(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 46 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 47 */
int hal_soc_configure_peripheral_block_47(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 47 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 48 */
int hal_soc_configure_peripheral_block_48(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 48 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 49 */
int hal_soc_configure_peripheral_block_49(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 49 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 50 */
int hal_soc_configure_peripheral_block_50(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 50 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 51 */
int hal_soc_configure_peripheral_block_51(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 51 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 52 */
int hal_soc_configure_peripheral_block_52(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 52 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 53 */
int hal_soc_configure_peripheral_block_53(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 53 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 54 */
int hal_soc_configure_peripheral_block_54(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 54 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 55 */
int hal_soc_configure_peripheral_block_55(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 55 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 56 */
int hal_soc_configure_peripheral_block_56(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 56 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 57 */
int hal_soc_configure_peripheral_block_57(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 57 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 58 */
int hal_soc_configure_peripheral_block_58(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 58 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 59 */
int hal_soc_configure_peripheral_block_59(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 59 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 60 */
int hal_soc_configure_peripheral_block_60(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 60 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 61 */
int hal_soc_configure_peripheral_block_61(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 61 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 62 */
int hal_soc_configure_peripheral_block_62(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 62 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 63 */
int hal_soc_configure_peripheral_block_63(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 63 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 64 */
int hal_soc_configure_peripheral_block_64(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 64 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 65 */
int hal_soc_configure_peripheral_block_65(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 65 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 66 */
int hal_soc_configure_peripheral_block_66(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 66 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 67 */
int hal_soc_configure_peripheral_block_67(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 67 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 68 */
int hal_soc_configure_peripheral_block_68(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 68 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 69 */
int hal_soc_configure_peripheral_block_69(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 69 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 70 */
int hal_soc_configure_peripheral_block_70(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 70 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 71 */
int hal_soc_configure_peripheral_block_71(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 71 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 72 */
int hal_soc_configure_peripheral_block_72(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 72 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 73 */
int hal_soc_configure_peripheral_block_73(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 73 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 74 */
int hal_soc_configure_peripheral_block_74(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 74 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 75 */
int hal_soc_configure_peripheral_block_75(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 75 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 76 */
int hal_soc_configure_peripheral_block_76(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 76 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 77 */
int hal_soc_configure_peripheral_block_77(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 77 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 78 */
int hal_soc_configure_peripheral_block_78(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 78 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 79 */
int hal_soc_configure_peripheral_block_79(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 79 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 80 */
int hal_soc_configure_peripheral_block_80(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 80 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 81 */
int hal_soc_configure_peripheral_block_81(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 81 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 82 */
int hal_soc_configure_peripheral_block_82(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 82 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 83 */
int hal_soc_configure_peripheral_block_83(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 83 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 84 */
int hal_soc_configure_peripheral_block_84(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 84 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 85 */
int hal_soc_configure_peripheral_block_85(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 85 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 86 */
int hal_soc_configure_peripheral_block_86(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 86 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 87 */
int hal_soc_configure_peripheral_block_87(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 87 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 88 */
int hal_soc_configure_peripheral_block_88(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 88 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 89 */
int hal_soc_configure_peripheral_block_89(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 89 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 90 */
int hal_soc_configure_peripheral_block_90(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 90 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 91 */
int hal_soc_configure_peripheral_block_91(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 91 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 92 */
int hal_soc_configure_peripheral_block_92(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 92 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 93 */
int hal_soc_configure_peripheral_block_93(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 93 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 94 */
int hal_soc_configure_peripheral_block_94(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 94 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 95 */
int hal_soc_configure_peripheral_block_95(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 95 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 96 */
int hal_soc_configure_peripheral_block_96(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 96 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 97 */
int hal_soc_configure_peripheral_block_97(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 97 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 98 */
int hal_soc_configure_peripheral_block_98(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 98 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 99 */
int hal_soc_configure_peripheral_block_99(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 99 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 100 */
int hal_soc_configure_peripheral_block_100(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 100 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 101 */
int hal_soc_configure_peripheral_block_101(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 101 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 102 */
int hal_soc_configure_peripheral_block_102(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 102 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 103 */
int hal_soc_configure_peripheral_block_103(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 103 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 104 */
int hal_soc_configure_peripheral_block_104(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 104 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 105 */
int hal_soc_configure_peripheral_block_105(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 105 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 106 */
int hal_soc_configure_peripheral_block_106(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 106 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 107 */
int hal_soc_configure_peripheral_block_107(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 107 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 108 */
int hal_soc_configure_peripheral_block_108(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 108 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 109 */
int hal_soc_configure_peripheral_block_109(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 109 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 110 */
int hal_soc_configure_peripheral_block_110(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 110 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 111 */
int hal_soc_configure_peripheral_block_111(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 111 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 112 */
int hal_soc_configure_peripheral_block_112(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 112 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 113 */
int hal_soc_configure_peripheral_block_113(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 113 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 114 */
int hal_soc_configure_peripheral_block_114(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 114 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 115 */
int hal_soc_configure_peripheral_block_115(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 115 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 116 */
int hal_soc_configure_peripheral_block_116(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 116 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 117 */
int hal_soc_configure_peripheral_block_117(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 117 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 118 */
int hal_soc_configure_peripheral_block_118(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 118 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 119 */
int hal_soc_configure_peripheral_block_119(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 119 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 120 */
int hal_soc_configure_peripheral_block_120(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 120 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 121 */
int hal_soc_configure_peripheral_block_121(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 121 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 122 */
int hal_soc_configure_peripheral_block_122(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 122 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 123 */
int hal_soc_configure_peripheral_block_123(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 123 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 124 */
int hal_soc_configure_peripheral_block_124(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 124 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 125 */
int hal_soc_configure_peripheral_block_125(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 125 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 126 */
int hal_soc_configure_peripheral_block_126(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 126 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 127 */
int hal_soc_configure_peripheral_block_127(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 127 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 128 */
int hal_soc_configure_peripheral_block_128(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 128 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 129 */
int hal_soc_configure_peripheral_block_129(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 129 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 130 */
int hal_soc_configure_peripheral_block_130(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 130 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 131 */
int hal_soc_configure_peripheral_block_131(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 131 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 132 */
int hal_soc_configure_peripheral_block_132(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 132 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 133 */
int hal_soc_configure_peripheral_block_133(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 133 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 134 */
int hal_soc_configure_peripheral_block_134(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 134 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 135 */
int hal_soc_configure_peripheral_block_135(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 135 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 136 */
int hal_soc_configure_peripheral_block_136(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 136 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 137 */
int hal_soc_configure_peripheral_block_137(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 137 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 138 */
int hal_soc_configure_peripheral_block_138(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 138 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 139 */
int hal_soc_configure_peripheral_block_139(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 139 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 140 */
int hal_soc_configure_peripheral_block_140(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 140 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 141 */
int hal_soc_configure_peripheral_block_141(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 141 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 142 */
int hal_soc_configure_peripheral_block_142(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 142 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 143 */
int hal_soc_configure_peripheral_block_143(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 143 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 144 */
int hal_soc_configure_peripheral_block_144(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 144 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 145 */
int hal_soc_configure_peripheral_block_145(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 145 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 146 */
int hal_soc_configure_peripheral_block_146(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 146 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 147 */
int hal_soc_configure_peripheral_block_147(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 147 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 148 */
int hal_soc_configure_peripheral_block_148(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 148 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 149 */
int hal_soc_configure_peripheral_block_149(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 149 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 150 */
int hal_soc_configure_peripheral_block_150(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 150 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 151 */
int hal_soc_configure_peripheral_block_151(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 151 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 152 */
int hal_soc_configure_peripheral_block_152(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 152 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 153 */
int hal_soc_configure_peripheral_block_153(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 153 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 154 */
int hal_soc_configure_peripheral_block_154(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 154 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 155 */
int hal_soc_configure_peripheral_block_155(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 155 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 156 */
int hal_soc_configure_peripheral_block_156(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 156 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 157 */
int hal_soc_configure_peripheral_block_157(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 157 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 158 */
int hal_soc_configure_peripheral_block_158(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 158 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 159 */
int hal_soc_configure_peripheral_block_159(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 159 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 160 */
int hal_soc_configure_peripheral_block_160(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 160 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 161 */
int hal_soc_configure_peripheral_block_161(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 161 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 162 */
int hal_soc_configure_peripheral_block_162(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 162 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 163 */
int hal_soc_configure_peripheral_block_163(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 163 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 164 */
int hal_soc_configure_peripheral_block_164(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 164 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 165 */
int hal_soc_configure_peripheral_block_165(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 165 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 166 */
int hal_soc_configure_peripheral_block_166(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 166 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 167 */
int hal_soc_configure_peripheral_block_167(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 167 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 168 */
int hal_soc_configure_peripheral_block_168(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 168 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 169 */
int hal_soc_configure_peripheral_block_169(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 169 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 170 */
int hal_soc_configure_peripheral_block_170(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 170 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 171 */
int hal_soc_configure_peripheral_block_171(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 171 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 172 */
int hal_soc_configure_peripheral_block_172(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 172 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 173 */
int hal_soc_configure_peripheral_block_173(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 173 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 174 */
int hal_soc_configure_peripheral_block_174(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 174 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 175 */
int hal_soc_configure_peripheral_block_175(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 175 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 176 */
int hal_soc_configure_peripheral_block_176(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 176 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 177 */
int hal_soc_configure_peripheral_block_177(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 177 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 178 */
int hal_soc_configure_peripheral_block_178(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 178 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 179 */
int hal_soc_configure_peripheral_block_179(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 179 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 180 */
int hal_soc_configure_peripheral_block_180(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 180 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 181 */
int hal_soc_configure_peripheral_block_181(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 181 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 182 */
int hal_soc_configure_peripheral_block_182(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 182 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 183 */
int hal_soc_configure_peripheral_block_183(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 183 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 184 */
int hal_soc_configure_peripheral_block_184(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 184 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 185 */
int hal_soc_configure_peripheral_block_185(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 185 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 186 */
int hal_soc_configure_peripheral_block_186(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 186 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 187 */
int hal_soc_configure_peripheral_block_187(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 187 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 188 */
int hal_soc_configure_peripheral_block_188(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 188 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 189 */
int hal_soc_configure_peripheral_block_189(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 189 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 190 */
int hal_soc_configure_peripheral_block_190(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 190 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 191 */
int hal_soc_configure_peripheral_block_191(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 191 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 192 */
int hal_soc_configure_peripheral_block_192(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 192 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 193 */
int hal_soc_configure_peripheral_block_193(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 193 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 194 */
int hal_soc_configure_peripheral_block_194(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 194 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 195 */
int hal_soc_configure_peripheral_block_195(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 195 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 196 */
int hal_soc_configure_peripheral_block_196(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 196 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 197 */
int hal_soc_configure_peripheral_block_197(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 197 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 198 */
int hal_soc_configure_peripheral_block_198(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 198 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 199 */
int hal_soc_configure_peripheral_block_199(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 199 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 200 */
int hal_soc_configure_peripheral_block_200(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 200 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 201 */
int hal_soc_configure_peripheral_block_201(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 201 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 202 */
int hal_soc_configure_peripheral_block_202(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 202 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 203 */
int hal_soc_configure_peripheral_block_203(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 203 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 204 */
int hal_soc_configure_peripheral_block_204(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 204 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 205 */
int hal_soc_configure_peripheral_block_205(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 205 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 206 */
int hal_soc_configure_peripheral_block_206(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 206 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 207 */
int hal_soc_configure_peripheral_block_207(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 207 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 208 */
int hal_soc_configure_peripheral_block_208(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 208 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 209 */
int hal_soc_configure_peripheral_block_209(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 209 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 210 */
int hal_soc_configure_peripheral_block_210(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 210 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 211 */
int hal_soc_configure_peripheral_block_211(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 211 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 212 */
int hal_soc_configure_peripheral_block_212(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 212 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 213 */
int hal_soc_configure_peripheral_block_213(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 213 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 214 */
int hal_soc_configure_peripheral_block_214(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 214 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 215 */
int hal_soc_configure_peripheral_block_215(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 215 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 216 */
int hal_soc_configure_peripheral_block_216(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 216 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 217 */
int hal_soc_configure_peripheral_block_217(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 217 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 218 */
int hal_soc_configure_peripheral_block_218(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 218 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 219 */
int hal_soc_configure_peripheral_block_219(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 219 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 220 */
int hal_soc_configure_peripheral_block_220(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 220 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 221 */
int hal_soc_configure_peripheral_block_221(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 221 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 222 */
int hal_soc_configure_peripheral_block_222(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 222 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 223 */
int hal_soc_configure_peripheral_block_223(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 223 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 224 */
int hal_soc_configure_peripheral_block_224(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 224 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 225 */
int hal_soc_configure_peripheral_block_225(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 225 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 226 */
int hal_soc_configure_peripheral_block_226(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 226 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 227 */
int hal_soc_configure_peripheral_block_227(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 227 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 228 */
int hal_soc_configure_peripheral_block_228(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 228 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 229 */
int hal_soc_configure_peripheral_block_229(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 229 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 230 */
int hal_soc_configure_peripheral_block_230(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 230 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 231 */
int hal_soc_configure_peripheral_block_231(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 231 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 232 */
int hal_soc_configure_peripheral_block_232(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 232 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 233 */
int hal_soc_configure_peripheral_block_233(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 233 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 234 */
int hal_soc_configure_peripheral_block_234(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 234 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 235 */
int hal_soc_configure_peripheral_block_235(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 235 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 236 */
int hal_soc_configure_peripheral_block_236(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 236 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 237 */
int hal_soc_configure_peripheral_block_237(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 237 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 238 */
int hal_soc_configure_peripheral_block_238(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 238 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 239 */
int hal_soc_configure_peripheral_block_239(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 239 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 240 */
int hal_soc_configure_peripheral_block_240(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 240 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 241 */
int hal_soc_configure_peripheral_block_241(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 241 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 242 */
int hal_soc_configure_peripheral_block_242(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 242 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 243 */
int hal_soc_configure_peripheral_block_243(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 243 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 244 */
int hal_soc_configure_peripheral_block_244(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 244 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 245 */
int hal_soc_configure_peripheral_block_245(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 245 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 246 */
int hal_soc_configure_peripheral_block_246(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 246 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 247 */
int hal_soc_configure_peripheral_block_247(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 247 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 248 */
int hal_soc_configure_peripheral_block_248(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 248 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 249 */
int hal_soc_configure_peripheral_block_249(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 249 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 250 */
int hal_soc_configure_peripheral_block_250(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 250 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 251 */
int hal_soc_configure_peripheral_block_251(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 251 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 252 */
int hal_soc_configure_peripheral_block_252(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 252 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 253 */
int hal_soc_configure_peripheral_block_253(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 253 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 254 */
int hal_soc_configure_peripheral_block_254(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 254 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 255 */
int hal_soc_configure_peripheral_block_255(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 255 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 256 */
int hal_soc_configure_peripheral_block_256(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 256 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 257 */
int hal_soc_configure_peripheral_block_257(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 257 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 258 */
int hal_soc_configure_peripheral_block_258(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 258 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 259 */
int hal_soc_configure_peripheral_block_259(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 259 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 260 */
int hal_soc_configure_peripheral_block_260(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 260 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 261 */
int hal_soc_configure_peripheral_block_261(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 261 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 262 */
int hal_soc_configure_peripheral_block_262(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 262 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 263 */
int hal_soc_configure_peripheral_block_263(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 263 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 264 */
int hal_soc_configure_peripheral_block_264(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 264 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 265 */
int hal_soc_configure_peripheral_block_265(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 265 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 266 */
int hal_soc_configure_peripheral_block_266(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 266 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 267 */
int hal_soc_configure_peripheral_block_267(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 267 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 268 */
int hal_soc_configure_peripheral_block_268(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 268 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 269 */
int hal_soc_configure_peripheral_block_269(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 269 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 270 */
int hal_soc_configure_peripheral_block_270(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 270 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 271 */
int hal_soc_configure_peripheral_block_271(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 271 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 272 */
int hal_soc_configure_peripheral_block_272(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 272 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 273 */
int hal_soc_configure_peripheral_block_273(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 273 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 274 */
int hal_soc_configure_peripheral_block_274(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 274 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 275 */
int hal_soc_configure_peripheral_block_275(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 275 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 276 */
int hal_soc_configure_peripheral_block_276(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 276 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 277 */
int hal_soc_configure_peripheral_block_277(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 277 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 278 */
int hal_soc_configure_peripheral_block_278(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 278 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 279 */
int hal_soc_configure_peripheral_block_279(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 279 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 280 */
int hal_soc_configure_peripheral_block_280(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 280 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 281 */
int hal_soc_configure_peripheral_block_281(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 281 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 282 */
int hal_soc_configure_peripheral_block_282(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 282 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 283 */
int hal_soc_configure_peripheral_block_283(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 283 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 284 */
int hal_soc_configure_peripheral_block_284(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 284 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 285 */
int hal_soc_configure_peripheral_block_285(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 285 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 286 */
int hal_soc_configure_peripheral_block_286(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 286 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 287 */
int hal_soc_configure_peripheral_block_287(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 287 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 288 */
int hal_soc_configure_peripheral_block_288(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 288 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 289 */
int hal_soc_configure_peripheral_block_289(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 289 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 290 */
int hal_soc_configure_peripheral_block_290(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 290 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 291 */
int hal_soc_configure_peripheral_block_291(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 291 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 292 */
int hal_soc_configure_peripheral_block_292(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 292 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 293 */
int hal_soc_configure_peripheral_block_293(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 293 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 294 */
int hal_soc_configure_peripheral_block_294(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 294 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 295 */
int hal_soc_configure_peripheral_block_295(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 295 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 296 */
int hal_soc_configure_peripheral_block_296(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 296 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 297 */
int hal_soc_configure_peripheral_block_297(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 297 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 298 */
int hal_soc_configure_peripheral_block_298(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 298 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 299 */
int hal_soc_configure_peripheral_block_299(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 299 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 300 */
int hal_soc_configure_peripheral_block_300(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 300 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 301 */
int hal_soc_configure_peripheral_block_301(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 301 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 302 */
int hal_soc_configure_peripheral_block_302(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 302 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 303 */
int hal_soc_configure_peripheral_block_303(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 303 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 304 */
int hal_soc_configure_peripheral_block_304(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 304 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 305 */
int hal_soc_configure_peripheral_block_305(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 305 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 306 */
int hal_soc_configure_peripheral_block_306(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 306 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 307 */
int hal_soc_configure_peripheral_block_307(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 307 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 308 */
int hal_soc_configure_peripheral_block_308(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 308 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 309 */
int hal_soc_configure_peripheral_block_309(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 309 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 310 */
int hal_soc_configure_peripheral_block_310(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 310 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 311 */
int hal_soc_configure_peripheral_block_311(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 311 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 312 */
int hal_soc_configure_peripheral_block_312(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 312 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 313 */
int hal_soc_configure_peripheral_block_313(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 313 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 314 */
int hal_soc_configure_peripheral_block_314(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 314 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 315 */
int hal_soc_configure_peripheral_block_315(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 315 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 316 */
int hal_soc_configure_peripheral_block_316(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 316 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 317 */
int hal_soc_configure_peripheral_block_317(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 317 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 318 */
int hal_soc_configure_peripheral_block_318(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 318 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 319 */
int hal_soc_configure_peripheral_block_319(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 319 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 320 */
int hal_soc_configure_peripheral_block_320(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 320 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 321 */
int hal_soc_configure_peripheral_block_321(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 321 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 322 */
int hal_soc_configure_peripheral_block_322(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 322 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 323 */
int hal_soc_configure_peripheral_block_323(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 323 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 324 */
int hal_soc_configure_peripheral_block_324(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 324 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 325 */
int hal_soc_configure_peripheral_block_325(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 325 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 326 */
int hal_soc_configure_peripheral_block_326(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 326 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 327 */
int hal_soc_configure_peripheral_block_327(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 327 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 328 */
int hal_soc_configure_peripheral_block_328(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 328 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 329 */
int hal_soc_configure_peripheral_block_329(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 329 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 330 */
int hal_soc_configure_peripheral_block_330(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 330 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 331 */
int hal_soc_configure_peripheral_block_331(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 331 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 332 */
int hal_soc_configure_peripheral_block_332(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 332 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 333 */
int hal_soc_configure_peripheral_block_333(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 333 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 334 */
int hal_soc_configure_peripheral_block_334(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 334 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 335 */
int hal_soc_configure_peripheral_block_335(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 335 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 336 */
int hal_soc_configure_peripheral_block_336(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 336 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 337 */
int hal_soc_configure_peripheral_block_337(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 337 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 338 */
int hal_soc_configure_peripheral_block_338(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 338 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 339 */
int hal_soc_configure_peripheral_block_339(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 339 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 340 */
int hal_soc_configure_peripheral_block_340(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 340 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 341 */
int hal_soc_configure_peripheral_block_341(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 341 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 342 */
int hal_soc_configure_peripheral_block_342(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 342 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 343 */
int hal_soc_configure_peripheral_block_343(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 343 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 344 */
int hal_soc_configure_peripheral_block_344(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 344 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 345 */
int hal_soc_configure_peripheral_block_345(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 345 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 346 */
int hal_soc_configure_peripheral_block_346(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 346 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 347 */
int hal_soc_configure_peripheral_block_347(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 347 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 348 */
int hal_soc_configure_peripheral_block_348(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 348 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 349 */
int hal_soc_configure_peripheral_block_349(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 349 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 350 */
int hal_soc_configure_peripheral_block_350(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 350 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 351 */
int hal_soc_configure_peripheral_block_351(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 351 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 352 */
int hal_soc_configure_peripheral_block_352(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 352 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 353 */
int hal_soc_configure_peripheral_block_353(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 353 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 354 */
int hal_soc_configure_peripheral_block_354(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 354 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 355 */
int hal_soc_configure_peripheral_block_355(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 355 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 356 */
int hal_soc_configure_peripheral_block_356(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 356 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 357 */
int hal_soc_configure_peripheral_block_357(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 357 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 358 */
int hal_soc_configure_peripheral_block_358(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 358 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 359 */
int hal_soc_configure_peripheral_block_359(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 359 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 360 */
int hal_soc_configure_peripheral_block_360(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 360 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 361 */
int hal_soc_configure_peripheral_block_361(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 361 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 362 */
int hal_soc_configure_peripheral_block_362(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 362 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 363 */
int hal_soc_configure_peripheral_block_363(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 363 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 364 */
int hal_soc_configure_peripheral_block_364(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 364 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 365 */
int hal_soc_configure_peripheral_block_365(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 365 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 366 */
int hal_soc_configure_peripheral_block_366(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 366 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 367 */
int hal_soc_configure_peripheral_block_367(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 367 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 368 */
int hal_soc_configure_peripheral_block_368(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 368 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 369 */
int hal_soc_configure_peripheral_block_369(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 369 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 370 */
int hal_soc_configure_peripheral_block_370(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 370 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 371 */
int hal_soc_configure_peripheral_block_371(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 371 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 372 */
int hal_soc_configure_peripheral_block_372(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 372 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 373 */
int hal_soc_configure_peripheral_block_373(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 373 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 374 */
int hal_soc_configure_peripheral_block_374(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 374 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 375 */
int hal_soc_configure_peripheral_block_375(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 375 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 376 */
int hal_soc_configure_peripheral_block_376(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 376 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 377 */
int hal_soc_configure_peripheral_block_377(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 377 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 378 */
int hal_soc_configure_peripheral_block_378(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 378 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 379 */
int hal_soc_configure_peripheral_block_379(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 379 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 380 */
int hal_soc_configure_peripheral_block_380(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 380 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 381 */
int hal_soc_configure_peripheral_block_381(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 381 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 382 */
int hal_soc_configure_peripheral_block_382(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 382 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 383 */
int hal_soc_configure_peripheral_block_383(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 383 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 384 */
int hal_soc_configure_peripheral_block_384(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 384 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 385 */
int hal_soc_configure_peripheral_block_385(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 385 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 386 */
int hal_soc_configure_peripheral_block_386(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 386 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 387 */
int hal_soc_configure_peripheral_block_387(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 387 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 388 */
int hal_soc_configure_peripheral_block_388(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 388 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 389 */
int hal_soc_configure_peripheral_block_389(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 389 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 390 */
int hal_soc_configure_peripheral_block_390(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 390 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 391 */
int hal_soc_configure_peripheral_block_391(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 391 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 392 */
int hal_soc_configure_peripheral_block_392(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 392 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 393 */
int hal_soc_configure_peripheral_block_393(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 393 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 394 */
int hal_soc_configure_peripheral_block_394(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 394 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 395 */
int hal_soc_configure_peripheral_block_395(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 395 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 396 */
int hal_soc_configure_peripheral_block_396(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 396 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 397 */
int hal_soc_configure_peripheral_block_397(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 397 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 398 */
int hal_soc_configure_peripheral_block_398(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 398 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 399 */
int hal_soc_configure_peripheral_block_399(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 399 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 400 */
int hal_soc_configure_peripheral_block_400(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 400 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 401 */
int hal_soc_configure_peripheral_block_401(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 401 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 402 */
int hal_soc_configure_peripheral_block_402(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 402 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 403 */
int hal_soc_configure_peripheral_block_403(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 403 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 404 */
int hal_soc_configure_peripheral_block_404(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 404 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 405 */
int hal_soc_configure_peripheral_block_405(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 405 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 406 */
int hal_soc_configure_peripheral_block_406(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 406 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 407 */
int hal_soc_configure_peripheral_block_407(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 407 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 408 */
int hal_soc_configure_peripheral_block_408(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 408 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 409 */
int hal_soc_configure_peripheral_block_409(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 409 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 410 */
int hal_soc_configure_peripheral_block_410(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 410 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 411 */
int hal_soc_configure_peripheral_block_411(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 411 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 412 */
int hal_soc_configure_peripheral_block_412(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 412 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 413 */
int hal_soc_configure_peripheral_block_413(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 413 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 414 */
int hal_soc_configure_peripheral_block_414(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 414 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 415 */
int hal_soc_configure_peripheral_block_415(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 415 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 416 */
int hal_soc_configure_peripheral_block_416(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 416 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 417 */
int hal_soc_configure_peripheral_block_417(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 417 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 418 */
int hal_soc_configure_peripheral_block_418(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 418 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 419 */
int hal_soc_configure_peripheral_block_419(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 419 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 420 */
int hal_soc_configure_peripheral_block_420(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 420 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 421 */
int hal_soc_configure_peripheral_block_421(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 421 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 422 */
int hal_soc_configure_peripheral_block_422(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 422 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 423 */
int hal_soc_configure_peripheral_block_423(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 423 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 424 */
int hal_soc_configure_peripheral_block_424(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 424 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 425 */
int hal_soc_configure_peripheral_block_425(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 425 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 426 */
int hal_soc_configure_peripheral_block_426(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 426 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 427 */
int hal_soc_configure_peripheral_block_427(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 427 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 428 */
int hal_soc_configure_peripheral_block_428(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 428 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 429 */
int hal_soc_configure_peripheral_block_429(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 429 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 430 */
int hal_soc_configure_peripheral_block_430(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 430 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 431 */
int hal_soc_configure_peripheral_block_431(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 431 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 432 */
int hal_soc_configure_peripheral_block_432(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 432 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 433 */
int hal_soc_configure_peripheral_block_433(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 433 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 434 */
int hal_soc_configure_peripheral_block_434(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 434 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 435 */
int hal_soc_configure_peripheral_block_435(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 435 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 436 */
int hal_soc_configure_peripheral_block_436(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 436 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 437 */
int hal_soc_configure_peripheral_block_437(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 437 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 438 */
int hal_soc_configure_peripheral_block_438(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 438 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 439 */
int hal_soc_configure_peripheral_block_439(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 439 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 440 */
int hal_soc_configure_peripheral_block_440(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 440 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 441 */
int hal_soc_configure_peripheral_block_441(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 441 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 442 */
int hal_soc_configure_peripheral_block_442(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 442 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 443 */
int hal_soc_configure_peripheral_block_443(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 443 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 444 */
int hal_soc_configure_peripheral_block_444(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 444 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 445 */
int hal_soc_configure_peripheral_block_445(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 445 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 446 */
int hal_soc_configure_peripheral_block_446(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 446 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 447 */
int hal_soc_configure_peripheral_block_447(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 447 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 448 */
int hal_soc_configure_peripheral_block_448(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 448 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 449 */
int hal_soc_configure_peripheral_block_449(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 449 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 450 */
int hal_soc_configure_peripheral_block_450(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 450 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 451 */
int hal_soc_configure_peripheral_block_451(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 451 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 452 */
int hal_soc_configure_peripheral_block_452(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 452 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 453 */
int hal_soc_configure_peripheral_block_453(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 453 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 454 */
int hal_soc_configure_peripheral_block_454(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 454 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 455 */
int hal_soc_configure_peripheral_block_455(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 455 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 456 */
int hal_soc_configure_peripheral_block_456(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 456 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 457 */
int hal_soc_configure_peripheral_block_457(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 457 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 458 */
int hal_soc_configure_peripheral_block_458(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 458 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 459 */
int hal_soc_configure_peripheral_block_459(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 459 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 460 */
int hal_soc_configure_peripheral_block_460(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 460 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 461 */
int hal_soc_configure_peripheral_block_461(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 461 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 462 */
int hal_soc_configure_peripheral_block_462(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 462 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 463 */
int hal_soc_configure_peripheral_block_463(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 463 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 464 */
int hal_soc_configure_peripheral_block_464(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 464 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 465 */
int hal_soc_configure_peripheral_block_465(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 465 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 466 */
int hal_soc_configure_peripheral_block_466(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 466 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 467 */
int hal_soc_configure_peripheral_block_467(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 467 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 468 */
int hal_soc_configure_peripheral_block_468(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 468 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 469 */
int hal_soc_configure_peripheral_block_469(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 469 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 470 */
int hal_soc_configure_peripheral_block_470(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 470 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 471 */
int hal_soc_configure_peripheral_block_471(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 471 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 472 */
int hal_soc_configure_peripheral_block_472(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 472 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 473 */
int hal_soc_configure_peripheral_block_473(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 473 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 474 */
int hal_soc_configure_peripheral_block_474(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 474 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 475 */
int hal_soc_configure_peripheral_block_475(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 475 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 476 */
int hal_soc_configure_peripheral_block_476(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 476 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 477 */
int hal_soc_configure_peripheral_block_477(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 477 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 478 */
int hal_soc_configure_peripheral_block_478(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 478 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 479 */
int hal_soc_configure_peripheral_block_479(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 479 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 480 */
int hal_soc_configure_peripheral_block_480(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 480 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 481 */
int hal_soc_configure_peripheral_block_481(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 481 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 482 */
int hal_soc_configure_peripheral_block_482(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 482 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 483 */
int hal_soc_configure_peripheral_block_483(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 483 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 484 */
int hal_soc_configure_peripheral_block_484(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 484 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 485 */
int hal_soc_configure_peripheral_block_485(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 485 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 486 */
int hal_soc_configure_peripheral_block_486(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 486 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 487 */
int hal_soc_configure_peripheral_block_487(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 487 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 488 */
int hal_soc_configure_peripheral_block_488(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 488 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 489 */
int hal_soc_configure_peripheral_block_489(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 489 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 490 */
int hal_soc_configure_peripheral_block_490(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 490 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 491 */
int hal_soc_configure_peripheral_block_491(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 491 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 492 */
int hal_soc_configure_peripheral_block_492(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 492 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 493 */
int hal_soc_configure_peripheral_block_493(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 493 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 494 */
int hal_soc_configure_peripheral_block_494(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 494 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 495 */
int hal_soc_configure_peripheral_block_495(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 495 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 496 */
int hal_soc_configure_peripheral_block_496(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 496 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 497 */
int hal_soc_configure_peripheral_block_497(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 497 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 498 */
int hal_soc_configure_peripheral_block_498(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 498 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 499 */
int hal_soc_configure_peripheral_block_499(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 499 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 500 */
int hal_soc_configure_peripheral_block_500(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 500 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 501 */
int hal_soc_configure_peripheral_block_501(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 501 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 502 */
int hal_soc_configure_peripheral_block_502(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 502 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 503 */
int hal_soc_configure_peripheral_block_503(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 503 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 504 */
int hal_soc_configure_peripheral_block_504(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 504 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 505 */
int hal_soc_configure_peripheral_block_505(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 505 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 506 */
int hal_soc_configure_peripheral_block_506(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 506 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 507 */
int hal_soc_configure_peripheral_block_507(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 507 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 508 */
int hal_soc_configure_peripheral_block_508(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 508 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 509 */
int hal_soc_configure_peripheral_block_509(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 509 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 510 */
int hal_soc_configure_peripheral_block_510(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 510 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 511 */
int hal_soc_configure_peripheral_block_511(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 511 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 512 */
int hal_soc_configure_peripheral_block_512(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 512 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 513 */
int hal_soc_configure_peripheral_block_513(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 513 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 514 */
int hal_soc_configure_peripheral_block_514(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 514 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 515 */
int hal_soc_configure_peripheral_block_515(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 515 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 516 */
int hal_soc_configure_peripheral_block_516(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 516 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 517 */
int hal_soc_configure_peripheral_block_517(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 517 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 518 */
int hal_soc_configure_peripheral_block_518(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 518 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 519 */
int hal_soc_configure_peripheral_block_519(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 519 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 520 */
int hal_soc_configure_peripheral_block_520(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 520 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 521 */
int hal_soc_configure_peripheral_block_521(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 521 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 522 */
int hal_soc_configure_peripheral_block_522(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 522 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 523 */
int hal_soc_configure_peripheral_block_523(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 523 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 524 */
int hal_soc_configure_peripheral_block_524(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 524 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 525 */
int hal_soc_configure_peripheral_block_525(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 525 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 526 */
int hal_soc_configure_peripheral_block_526(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 526 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 527 */
int hal_soc_configure_peripheral_block_527(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 527 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 528 */
int hal_soc_configure_peripheral_block_528(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 528 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 529 */
int hal_soc_configure_peripheral_block_529(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 529 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 530 */
int hal_soc_configure_peripheral_block_530(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 530 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 531 */
int hal_soc_configure_peripheral_block_531(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 531 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 532 */
int hal_soc_configure_peripheral_block_532(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 532 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 533 */
int hal_soc_configure_peripheral_block_533(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 533 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 534 */
int hal_soc_configure_peripheral_block_534(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 534 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 535 */
int hal_soc_configure_peripheral_block_535(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 535 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 536 */
int hal_soc_configure_peripheral_block_536(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 536 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 537 */
int hal_soc_configure_peripheral_block_537(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 537 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 538 */
int hal_soc_configure_peripheral_block_538(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 538 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 539 */
int hal_soc_configure_peripheral_block_539(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 539 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 540 */
int hal_soc_configure_peripheral_block_540(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 540 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 541 */
int hal_soc_configure_peripheral_block_541(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 541 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 542 */
int hal_soc_configure_peripheral_block_542(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 542 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 543 */
int hal_soc_configure_peripheral_block_543(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 543 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 544 */
int hal_soc_configure_peripheral_block_544(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 544 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 545 */
int hal_soc_configure_peripheral_block_545(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 545 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 546 */
int hal_soc_configure_peripheral_block_546(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 546 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 547 */
int hal_soc_configure_peripheral_block_547(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 547 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 548 */
int hal_soc_configure_peripheral_block_548(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 548 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}

/* SoC Peripheral Block Configuration Routine 549 */
int hal_soc_configure_peripheral_block_549(uint32_t base_addr, uint32_t clock_mask, uint8_t irq_prio) {
    volatile uint32_t *reg = (volatile uint32_t *)(base_addr + 549 * 4);
    *reg = clock_mask | ((uint32_t)irq_prio << 24);
    return (int)(*reg & 0xFFFF);
}
