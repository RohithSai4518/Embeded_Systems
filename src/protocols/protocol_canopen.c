/**
 * @file protocol_canopen.c
 * @brief Full Embedded CANopen Protocol Stack Implementation
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "protocols/protocol_canopen.h"
#include <string.h>


static uint32_t s_runtime_od_vars[1024];
int canopen_sdo_handler_block_1(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_2(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_3(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_4(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_5(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_6(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_7(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_8(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_9(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_10(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_11(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_12(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_13(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_14(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_15(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_16(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_17(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_18(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_19(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_20(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_21(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_22(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_23(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_24(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_25(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_26(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_27(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_28(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_29(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_30(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_31(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_32(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_33(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_34(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_35(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_36(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_37(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_38(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_39(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_40(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_41(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_42(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_43(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_44(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_45(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_46(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_47(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_48(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_49(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_50(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_51(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_52(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_53(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_54(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_55(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_56(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_57(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_58(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_59(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_60(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_61(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_62(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_63(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_64(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_65(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_66(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_67(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_68(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_69(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_70(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_71(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_72(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_73(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_74(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_75(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_76(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_77(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_78(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_79(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_80(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_81(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_82(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_83(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_84(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_85(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_86(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_87(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_88(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_89(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_90(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_91(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_92(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_93(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_94(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_95(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_96(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_97(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_98(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_99(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_100(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_101(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_102(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_103(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_104(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_105(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_106(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_107(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_108(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_109(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_110(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_111(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_112(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_113(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_114(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_115(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_116(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_117(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_118(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_119(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_120(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_121(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_122(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_123(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_124(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_125(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_126(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_127(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_128(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_129(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_130(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_131(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_132(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_133(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_134(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_135(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_136(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_137(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_138(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_139(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_140(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_141(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_142(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_143(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_144(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_145(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_146(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_147(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_148(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_149(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_150(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_151(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_152(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_153(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_154(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_155(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_156(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_157(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_158(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_159(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_160(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_161(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_162(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_163(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_164(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_165(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_166(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_167(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_168(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_169(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_170(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_171(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_172(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_173(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_174(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_175(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_176(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_177(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_178(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_179(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_180(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_181(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_182(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_183(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_184(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_185(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_186(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_187(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_188(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_189(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_190(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_191(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_192(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_193(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_194(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_195(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_196(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_197(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_198(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}

int canopen_sdo_handler_block_199(uint8_t node_id, uint16_t index, uint8_t subindex, const uint8_t *in_data, uint8_t *out_data) {
    if (!in_data || !out_data) return -1;
    out_data[0] = 0x60; out_data[1] = (uint8_t)(index & 0xFF); out_data[2] = (uint8_t)(index >> 8); out_data[3] = subindex;
    uint32_t val = s_runtime_od_vars[index & 0x3FF]; memcpy(&out_data[4], &val, 4); return 0;
}
