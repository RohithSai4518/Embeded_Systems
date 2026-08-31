/**
 * @file protocol_can_matrix.c
 * @brief Automotive CAN DBC Matrix & Multi-ECU Signal Unpacking Engine
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include <stdint.h>
#include <stdbool.h>
#include <string.h>


/* CAN Matrix Frame 0x101 Signal Decoder */
int can_matrix_unpack_frame_1(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 0.150f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x102 Signal Decoder */
int can_matrix_unpack_frame_2(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 0.200f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x103 Signal Decoder */
int can_matrix_unpack_frame_3(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 0.250f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x104 Signal Decoder */
int can_matrix_unpack_frame_4(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 0.300f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x105 Signal Decoder */
int can_matrix_unpack_frame_5(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 0.350f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x106 Signal Decoder */
int can_matrix_unpack_frame_6(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 0.400f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x107 Signal Decoder */
int can_matrix_unpack_frame_7(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 0.450f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x108 Signal Decoder */
int can_matrix_unpack_frame_8(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 0.500f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x109 Signal Decoder */
int can_matrix_unpack_frame_9(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 0.550f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x10A Signal Decoder */
int can_matrix_unpack_frame_10(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 0.600f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x10B Signal Decoder */
int can_matrix_unpack_frame_11(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 0.650f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x10C Signal Decoder */
int can_matrix_unpack_frame_12(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 0.700f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x10D Signal Decoder */
int can_matrix_unpack_frame_13(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 0.750f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x10E Signal Decoder */
int can_matrix_unpack_frame_14(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 0.800f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x10F Signal Decoder */
int can_matrix_unpack_frame_15(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 0.850f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x110 Signal Decoder */
int can_matrix_unpack_frame_16(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 0.900f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x111 Signal Decoder */
int can_matrix_unpack_frame_17(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 0.950f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x112 Signal Decoder */
int can_matrix_unpack_frame_18(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 1.000f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x113 Signal Decoder */
int can_matrix_unpack_frame_19(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 1.050f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x114 Signal Decoder */
int can_matrix_unpack_frame_20(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 1.100f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x115 Signal Decoder */
int can_matrix_unpack_frame_21(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 1.150f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x116 Signal Decoder */
int can_matrix_unpack_frame_22(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 1.200f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x117 Signal Decoder */
int can_matrix_unpack_frame_23(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 1.250f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x118 Signal Decoder */
int can_matrix_unpack_frame_24(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 1.300f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x119 Signal Decoder */
int can_matrix_unpack_frame_25(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 1.350f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x11A Signal Decoder */
int can_matrix_unpack_frame_26(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 1.400f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x11B Signal Decoder */
int can_matrix_unpack_frame_27(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 1.450f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x11C Signal Decoder */
int can_matrix_unpack_frame_28(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 1.500f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x11D Signal Decoder */
int can_matrix_unpack_frame_29(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 1.550f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x11E Signal Decoder */
int can_matrix_unpack_frame_30(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 1.600f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x11F Signal Decoder */
int can_matrix_unpack_frame_31(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 1.650f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x120 Signal Decoder */
int can_matrix_unpack_frame_32(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 1.700f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x121 Signal Decoder */
int can_matrix_unpack_frame_33(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 1.750f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x122 Signal Decoder */
int can_matrix_unpack_frame_34(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 1.800f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x123 Signal Decoder */
int can_matrix_unpack_frame_35(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 1.850f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x124 Signal Decoder */
int can_matrix_unpack_frame_36(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 1.900f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x125 Signal Decoder */
int can_matrix_unpack_frame_37(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 1.950f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x126 Signal Decoder */
int can_matrix_unpack_frame_38(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 2.000f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x127 Signal Decoder */
int can_matrix_unpack_frame_39(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 2.050f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x128 Signal Decoder */
int can_matrix_unpack_frame_40(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 2.100f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x129 Signal Decoder */
int can_matrix_unpack_frame_41(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 2.150f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x12A Signal Decoder */
int can_matrix_unpack_frame_42(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 2.200f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x12B Signal Decoder */
int can_matrix_unpack_frame_43(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 2.250f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x12C Signal Decoder */
int can_matrix_unpack_frame_44(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 2.300f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x12D Signal Decoder */
int can_matrix_unpack_frame_45(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 2.350f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x12E Signal Decoder */
int can_matrix_unpack_frame_46(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 2.400f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x12F Signal Decoder */
int can_matrix_unpack_frame_47(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 2.450f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x130 Signal Decoder */
int can_matrix_unpack_frame_48(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 2.500f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x131 Signal Decoder */
int can_matrix_unpack_frame_49(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 2.550f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x132 Signal Decoder */
int can_matrix_unpack_frame_50(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 2.600f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x133 Signal Decoder */
int can_matrix_unpack_frame_51(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 2.650f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x134 Signal Decoder */
int can_matrix_unpack_frame_52(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 2.700f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x135 Signal Decoder */
int can_matrix_unpack_frame_53(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 2.750f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x136 Signal Decoder */
int can_matrix_unpack_frame_54(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 2.800f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x137 Signal Decoder */
int can_matrix_unpack_frame_55(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 2.850f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x138 Signal Decoder */
int can_matrix_unpack_frame_56(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 2.900f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x139 Signal Decoder */
int can_matrix_unpack_frame_57(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 2.950f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x13A Signal Decoder */
int can_matrix_unpack_frame_58(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 3.000f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x13B Signal Decoder */
int can_matrix_unpack_frame_59(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 3.050f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x13C Signal Decoder */
int can_matrix_unpack_frame_60(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 3.100f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x13D Signal Decoder */
int can_matrix_unpack_frame_61(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 3.150f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x13E Signal Decoder */
int can_matrix_unpack_frame_62(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 3.200f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x13F Signal Decoder */
int can_matrix_unpack_frame_63(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 3.250f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x140 Signal Decoder */
int can_matrix_unpack_frame_64(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 3.300f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x141 Signal Decoder */
int can_matrix_unpack_frame_65(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 3.350f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x142 Signal Decoder */
int can_matrix_unpack_frame_66(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 3.400f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x143 Signal Decoder */
int can_matrix_unpack_frame_67(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 3.450f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x144 Signal Decoder */
int can_matrix_unpack_frame_68(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 3.500f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x145 Signal Decoder */
int can_matrix_unpack_frame_69(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 3.550f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x146 Signal Decoder */
int can_matrix_unpack_frame_70(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 3.600f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x147 Signal Decoder */
int can_matrix_unpack_frame_71(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 3.650f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x148 Signal Decoder */
int can_matrix_unpack_frame_72(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 3.700f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x149 Signal Decoder */
int can_matrix_unpack_frame_73(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 3.750f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x14A Signal Decoder */
int can_matrix_unpack_frame_74(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 3.800f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x14B Signal Decoder */
int can_matrix_unpack_frame_75(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 3.850f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x14C Signal Decoder */
int can_matrix_unpack_frame_76(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 3.900f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x14D Signal Decoder */
int can_matrix_unpack_frame_77(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 3.950f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x14E Signal Decoder */
int can_matrix_unpack_frame_78(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 4.000f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x14F Signal Decoder */
int can_matrix_unpack_frame_79(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 4.050f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x150 Signal Decoder */
int can_matrix_unpack_frame_80(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 4.100f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x151 Signal Decoder */
int can_matrix_unpack_frame_81(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 4.150f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x152 Signal Decoder */
int can_matrix_unpack_frame_82(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 4.200f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x153 Signal Decoder */
int can_matrix_unpack_frame_83(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 4.250f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x154 Signal Decoder */
int can_matrix_unpack_frame_84(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 4.300f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x155 Signal Decoder */
int can_matrix_unpack_frame_85(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 4.350f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x156 Signal Decoder */
int can_matrix_unpack_frame_86(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 4.400f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x157 Signal Decoder */
int can_matrix_unpack_frame_87(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 4.450f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x158 Signal Decoder */
int can_matrix_unpack_frame_88(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 4.500f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x159 Signal Decoder */
int can_matrix_unpack_frame_89(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 4.550f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x15A Signal Decoder */
int can_matrix_unpack_frame_90(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 4.600f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x15B Signal Decoder */
int can_matrix_unpack_frame_91(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 4.650f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x15C Signal Decoder */
int can_matrix_unpack_frame_92(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 4.700f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x15D Signal Decoder */
int can_matrix_unpack_frame_93(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 4.750f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x15E Signal Decoder */
int can_matrix_unpack_frame_94(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 4.800f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x15F Signal Decoder */
int can_matrix_unpack_frame_95(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 4.850f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x160 Signal Decoder */
int can_matrix_unpack_frame_96(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 4.900f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x161 Signal Decoder */
int can_matrix_unpack_frame_97(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 4.950f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x162 Signal Decoder */
int can_matrix_unpack_frame_98(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 5.000f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x163 Signal Decoder */
int can_matrix_unpack_frame_99(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 5.050f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x164 Signal Decoder */
int can_matrix_unpack_frame_100(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 5.100f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x165 Signal Decoder */
int can_matrix_unpack_frame_101(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 5.150f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x166 Signal Decoder */
int can_matrix_unpack_frame_102(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 5.200f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x167 Signal Decoder */
int can_matrix_unpack_frame_103(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 5.250f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x168 Signal Decoder */
int can_matrix_unpack_frame_104(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 5.300f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x169 Signal Decoder */
int can_matrix_unpack_frame_105(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 5.350f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x16A Signal Decoder */
int can_matrix_unpack_frame_106(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 5.400f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x16B Signal Decoder */
int can_matrix_unpack_frame_107(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 5.450f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x16C Signal Decoder */
int can_matrix_unpack_frame_108(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 5.500f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x16D Signal Decoder */
int can_matrix_unpack_frame_109(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 5.550f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x16E Signal Decoder */
int can_matrix_unpack_frame_110(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 5.600f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x16F Signal Decoder */
int can_matrix_unpack_frame_111(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 5.650f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x170 Signal Decoder */
int can_matrix_unpack_frame_112(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 5.700f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x171 Signal Decoder */
int can_matrix_unpack_frame_113(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 5.750f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x172 Signal Decoder */
int can_matrix_unpack_frame_114(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 5.800f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x173 Signal Decoder */
int can_matrix_unpack_frame_115(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 5.850f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x174 Signal Decoder */
int can_matrix_unpack_frame_116(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 5.900f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x175 Signal Decoder */
int can_matrix_unpack_frame_117(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 5.950f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x176 Signal Decoder */
int can_matrix_unpack_frame_118(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 6.000f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x177 Signal Decoder */
int can_matrix_unpack_frame_119(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 6.050f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x178 Signal Decoder */
int can_matrix_unpack_frame_120(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 6.100f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x179 Signal Decoder */
int can_matrix_unpack_frame_121(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 6.150f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x17A Signal Decoder */
int can_matrix_unpack_frame_122(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 6.200f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x17B Signal Decoder */
int can_matrix_unpack_frame_123(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 6.250f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x17C Signal Decoder */
int can_matrix_unpack_frame_124(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 6.300f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x17D Signal Decoder */
int can_matrix_unpack_frame_125(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 6.350f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x17E Signal Decoder */
int can_matrix_unpack_frame_126(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 6.400f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x17F Signal Decoder */
int can_matrix_unpack_frame_127(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 6.450f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x180 Signal Decoder */
int can_matrix_unpack_frame_128(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 6.500f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x181 Signal Decoder */
int can_matrix_unpack_frame_129(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 6.550f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x182 Signal Decoder */
int can_matrix_unpack_frame_130(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 6.600f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x183 Signal Decoder */
int can_matrix_unpack_frame_131(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 6.650f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x184 Signal Decoder */
int can_matrix_unpack_frame_132(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 6.700f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x185 Signal Decoder */
int can_matrix_unpack_frame_133(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 6.750f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x186 Signal Decoder */
int can_matrix_unpack_frame_134(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 6.800f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x187 Signal Decoder */
int can_matrix_unpack_frame_135(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 6.850f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x188 Signal Decoder */
int can_matrix_unpack_frame_136(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 6.900f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x189 Signal Decoder */
int can_matrix_unpack_frame_137(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 6.950f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x18A Signal Decoder */
int can_matrix_unpack_frame_138(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 7.000f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x18B Signal Decoder */
int can_matrix_unpack_frame_139(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 7.050f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x18C Signal Decoder */
int can_matrix_unpack_frame_140(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 7.100f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x18D Signal Decoder */
int can_matrix_unpack_frame_141(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 7.150f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x18E Signal Decoder */
int can_matrix_unpack_frame_142(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 7.200f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x18F Signal Decoder */
int can_matrix_unpack_frame_143(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 7.250f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x190 Signal Decoder */
int can_matrix_unpack_frame_144(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 7.300f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x191 Signal Decoder */
int can_matrix_unpack_frame_145(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 7.350f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x192 Signal Decoder */
int can_matrix_unpack_frame_146(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 7.400f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x193 Signal Decoder */
int can_matrix_unpack_frame_147(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 7.450f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x194 Signal Decoder */
int can_matrix_unpack_frame_148(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 7.500f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x195 Signal Decoder */
int can_matrix_unpack_frame_149(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 7.550f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x196 Signal Decoder */
int can_matrix_unpack_frame_150(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 7.600f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x197 Signal Decoder */
int can_matrix_unpack_frame_151(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 7.650f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x198 Signal Decoder */
int can_matrix_unpack_frame_152(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 7.700f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x199 Signal Decoder */
int can_matrix_unpack_frame_153(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 7.750f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x19A Signal Decoder */
int can_matrix_unpack_frame_154(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 7.800f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x19B Signal Decoder */
int can_matrix_unpack_frame_155(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 7.850f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x19C Signal Decoder */
int can_matrix_unpack_frame_156(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 7.900f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x19D Signal Decoder */
int can_matrix_unpack_frame_157(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 7.950f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x19E Signal Decoder */
int can_matrix_unpack_frame_158(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 8.000f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x19F Signal Decoder */
int can_matrix_unpack_frame_159(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 8.050f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1A0 Signal Decoder */
int can_matrix_unpack_frame_160(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 8.100f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1A1 Signal Decoder */
int can_matrix_unpack_frame_161(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 8.150f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1A2 Signal Decoder */
int can_matrix_unpack_frame_162(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 8.200f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1A3 Signal Decoder */
int can_matrix_unpack_frame_163(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 8.250f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1A4 Signal Decoder */
int can_matrix_unpack_frame_164(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 8.300f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1A5 Signal Decoder */
int can_matrix_unpack_frame_165(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 8.350f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1A6 Signal Decoder */
int can_matrix_unpack_frame_166(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 8.400f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1A7 Signal Decoder */
int can_matrix_unpack_frame_167(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 8.450f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1A8 Signal Decoder */
int can_matrix_unpack_frame_168(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 8.500f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1A9 Signal Decoder */
int can_matrix_unpack_frame_169(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 8.550f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1AA Signal Decoder */
int can_matrix_unpack_frame_170(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 8.600f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1AB Signal Decoder */
int can_matrix_unpack_frame_171(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 8.650f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1AC Signal Decoder */
int can_matrix_unpack_frame_172(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 8.700f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1AD Signal Decoder */
int can_matrix_unpack_frame_173(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 8.750f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1AE Signal Decoder */
int can_matrix_unpack_frame_174(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 8.800f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1AF Signal Decoder */
int can_matrix_unpack_frame_175(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 8.850f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1B0 Signal Decoder */
int can_matrix_unpack_frame_176(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 8.900f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1B1 Signal Decoder */
int can_matrix_unpack_frame_177(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 8.950f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1B2 Signal Decoder */
int can_matrix_unpack_frame_178(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 9.000f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1B3 Signal Decoder */
int can_matrix_unpack_frame_179(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 9.050f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1B4 Signal Decoder */
int can_matrix_unpack_frame_180(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 9.100f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1B5 Signal Decoder */
int can_matrix_unpack_frame_181(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 9.150f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1B6 Signal Decoder */
int can_matrix_unpack_frame_182(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 9.200f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1B7 Signal Decoder */
int can_matrix_unpack_frame_183(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 9.250f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1B8 Signal Decoder */
int can_matrix_unpack_frame_184(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 9.300f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1B9 Signal Decoder */
int can_matrix_unpack_frame_185(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 9.350f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1BA Signal Decoder */
int can_matrix_unpack_frame_186(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 9.400f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1BB Signal Decoder */
int can_matrix_unpack_frame_187(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 9.450f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1BC Signal Decoder */
int can_matrix_unpack_frame_188(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 9.500f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1BD Signal Decoder */
int can_matrix_unpack_frame_189(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 9.550f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1BE Signal Decoder */
int can_matrix_unpack_frame_190(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 9.600f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1BF Signal Decoder */
int can_matrix_unpack_frame_191(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 9.650f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1C0 Signal Decoder */
int can_matrix_unpack_frame_192(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 9.700f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1C1 Signal Decoder */
int can_matrix_unpack_frame_193(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 9.750f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1C2 Signal Decoder */
int can_matrix_unpack_frame_194(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 9.800f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1C3 Signal Decoder */
int can_matrix_unpack_frame_195(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 9.850f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1C4 Signal Decoder */
int can_matrix_unpack_frame_196(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 9.900f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1C5 Signal Decoder */
int can_matrix_unpack_frame_197(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 9.950f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1C6 Signal Decoder */
int can_matrix_unpack_frame_198(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 10.000f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1C7 Signal Decoder */
int can_matrix_unpack_frame_199(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 10.050f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1C8 Signal Decoder */
int can_matrix_unpack_frame_200(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 10.100f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1C9 Signal Decoder */
int can_matrix_unpack_frame_201(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 10.150f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1CA Signal Decoder */
int can_matrix_unpack_frame_202(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 10.200f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1CB Signal Decoder */
int can_matrix_unpack_frame_203(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 10.250f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1CC Signal Decoder */
int can_matrix_unpack_frame_204(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 10.300f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1CD Signal Decoder */
int can_matrix_unpack_frame_205(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 10.350f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1CE Signal Decoder */
int can_matrix_unpack_frame_206(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 10.400f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1CF Signal Decoder */
int can_matrix_unpack_frame_207(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 10.450f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1D0 Signal Decoder */
int can_matrix_unpack_frame_208(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 10.500f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1D1 Signal Decoder */
int can_matrix_unpack_frame_209(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 10.550f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1D2 Signal Decoder */
int can_matrix_unpack_frame_210(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 10.600f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1D3 Signal Decoder */
int can_matrix_unpack_frame_211(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 10.650f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1D4 Signal Decoder */
int can_matrix_unpack_frame_212(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 10.700f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1D5 Signal Decoder */
int can_matrix_unpack_frame_213(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 10.750f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1D6 Signal Decoder */
int can_matrix_unpack_frame_214(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 10.800f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1D7 Signal Decoder */
int can_matrix_unpack_frame_215(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 10.850f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1D8 Signal Decoder */
int can_matrix_unpack_frame_216(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 10.900f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1D9 Signal Decoder */
int can_matrix_unpack_frame_217(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 10.950f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1DA Signal Decoder */
int can_matrix_unpack_frame_218(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 11.000f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1DB Signal Decoder */
int can_matrix_unpack_frame_219(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 11.050f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1DC Signal Decoder */
int can_matrix_unpack_frame_220(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 11.100f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1DD Signal Decoder */
int can_matrix_unpack_frame_221(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 11.150f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1DE Signal Decoder */
int can_matrix_unpack_frame_222(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 11.200f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1DF Signal Decoder */
int can_matrix_unpack_frame_223(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 11.250f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1E0 Signal Decoder */
int can_matrix_unpack_frame_224(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 11.300f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1E1 Signal Decoder */
int can_matrix_unpack_frame_225(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 11.350f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1E2 Signal Decoder */
int can_matrix_unpack_frame_226(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 11.400f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1E3 Signal Decoder */
int can_matrix_unpack_frame_227(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 11.450f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1E4 Signal Decoder */
int can_matrix_unpack_frame_228(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 11.500f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1E5 Signal Decoder */
int can_matrix_unpack_frame_229(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 11.550f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1E6 Signal Decoder */
int can_matrix_unpack_frame_230(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 11.600f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1E7 Signal Decoder */
int can_matrix_unpack_frame_231(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 11.650f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1E8 Signal Decoder */
int can_matrix_unpack_frame_232(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 11.700f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1E9 Signal Decoder */
int can_matrix_unpack_frame_233(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 11.750f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1EA Signal Decoder */
int can_matrix_unpack_frame_234(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 11.800f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1EB Signal Decoder */
int can_matrix_unpack_frame_235(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 11.850f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1EC Signal Decoder */
int can_matrix_unpack_frame_236(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 11.900f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1ED Signal Decoder */
int can_matrix_unpack_frame_237(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 11.950f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1EE Signal Decoder */
int can_matrix_unpack_frame_238(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 12.000f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1EF Signal Decoder */
int can_matrix_unpack_frame_239(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 12.050f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1F0 Signal Decoder */
int can_matrix_unpack_frame_240(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 12.100f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1F1 Signal Decoder */
int can_matrix_unpack_frame_241(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 12.150f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1F2 Signal Decoder */
int can_matrix_unpack_frame_242(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 12.200f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1F3 Signal Decoder */
int can_matrix_unpack_frame_243(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 12.250f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1F4 Signal Decoder */
int can_matrix_unpack_frame_244(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 12.300f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1F5 Signal Decoder */
int can_matrix_unpack_frame_245(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 12.350f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1F6 Signal Decoder */
int can_matrix_unpack_frame_246(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 12.400f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1F7 Signal Decoder */
int can_matrix_unpack_frame_247(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 12.450f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1F8 Signal Decoder */
int can_matrix_unpack_frame_248(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 12.500f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1F9 Signal Decoder */
int can_matrix_unpack_frame_249(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 12.550f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1FA Signal Decoder */
int can_matrix_unpack_frame_250(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 12.600f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1FB Signal Decoder */
int can_matrix_unpack_frame_251(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 12.650f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1FC Signal Decoder */
int can_matrix_unpack_frame_252(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 12.700f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1FD Signal Decoder */
int can_matrix_unpack_frame_253(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 12.750f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1FE Signal Decoder */
int can_matrix_unpack_frame_254(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 12.800f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x1FF Signal Decoder */
int can_matrix_unpack_frame_255(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 12.850f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x200 Signal Decoder */
int can_matrix_unpack_frame_256(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 12.900f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x201 Signal Decoder */
int can_matrix_unpack_frame_257(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 12.950f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x202 Signal Decoder */
int can_matrix_unpack_frame_258(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 13.000f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x203 Signal Decoder */
int can_matrix_unpack_frame_259(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 13.050f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x204 Signal Decoder */
int can_matrix_unpack_frame_260(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 13.100f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x205 Signal Decoder */
int can_matrix_unpack_frame_261(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 13.150f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x206 Signal Decoder */
int can_matrix_unpack_frame_262(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 13.200f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x207 Signal Decoder */
int can_matrix_unpack_frame_263(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 13.250f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x208 Signal Decoder */
int can_matrix_unpack_frame_264(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 13.300f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x209 Signal Decoder */
int can_matrix_unpack_frame_265(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 13.350f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x20A Signal Decoder */
int can_matrix_unpack_frame_266(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 13.400f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x20B Signal Decoder */
int can_matrix_unpack_frame_267(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 13.450f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x20C Signal Decoder */
int can_matrix_unpack_frame_268(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 13.500f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x20D Signal Decoder */
int can_matrix_unpack_frame_269(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 13.550f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x20E Signal Decoder */
int can_matrix_unpack_frame_270(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 13.600f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x20F Signal Decoder */
int can_matrix_unpack_frame_271(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 13.650f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x210 Signal Decoder */
int can_matrix_unpack_frame_272(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 13.700f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x211 Signal Decoder */
int can_matrix_unpack_frame_273(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 13.750f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x212 Signal Decoder */
int can_matrix_unpack_frame_274(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 13.800f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x213 Signal Decoder */
int can_matrix_unpack_frame_275(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 13.850f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x214 Signal Decoder */
int can_matrix_unpack_frame_276(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 13.900f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x215 Signal Decoder */
int can_matrix_unpack_frame_277(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 13.950f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x216 Signal Decoder */
int can_matrix_unpack_frame_278(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 14.000f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x217 Signal Decoder */
int can_matrix_unpack_frame_279(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 14.050f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x218 Signal Decoder */
int can_matrix_unpack_frame_280(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 14.100f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x219 Signal Decoder */
int can_matrix_unpack_frame_281(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 14.150f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x21A Signal Decoder */
int can_matrix_unpack_frame_282(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 14.200f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x21B Signal Decoder */
int can_matrix_unpack_frame_283(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 14.250f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x21C Signal Decoder */
int can_matrix_unpack_frame_284(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 14.300f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x21D Signal Decoder */
int can_matrix_unpack_frame_285(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 14.350f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x21E Signal Decoder */
int can_matrix_unpack_frame_286(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 14.400f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x21F Signal Decoder */
int can_matrix_unpack_frame_287(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 14.450f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x220 Signal Decoder */
int can_matrix_unpack_frame_288(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 14.500f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x221 Signal Decoder */
int can_matrix_unpack_frame_289(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 14.550f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x222 Signal Decoder */
int can_matrix_unpack_frame_290(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 14.600f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x223 Signal Decoder */
int can_matrix_unpack_frame_291(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 14.650f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x224 Signal Decoder */
int can_matrix_unpack_frame_292(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 14.700f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x225 Signal Decoder */
int can_matrix_unpack_frame_293(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 14.750f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x226 Signal Decoder */
int can_matrix_unpack_frame_294(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 14.800f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x227 Signal Decoder */
int can_matrix_unpack_frame_295(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 14.850f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x228 Signal Decoder */
int can_matrix_unpack_frame_296(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 14.900f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x229 Signal Decoder */
int can_matrix_unpack_frame_297(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 14.950f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x22A Signal Decoder */
int can_matrix_unpack_frame_298(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 15.000f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x22B Signal Decoder */
int can_matrix_unpack_frame_299(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 15.050f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x22C Signal Decoder */
int can_matrix_unpack_frame_300(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 15.100f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x22D Signal Decoder */
int can_matrix_unpack_frame_301(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 15.150f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x22E Signal Decoder */
int can_matrix_unpack_frame_302(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 15.200f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x22F Signal Decoder */
int can_matrix_unpack_frame_303(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 15.250f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x230 Signal Decoder */
int can_matrix_unpack_frame_304(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 15.300f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x231 Signal Decoder */
int can_matrix_unpack_frame_305(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 15.350f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x232 Signal Decoder */
int can_matrix_unpack_frame_306(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 15.400f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x233 Signal Decoder */
int can_matrix_unpack_frame_307(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 15.450f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x234 Signal Decoder */
int can_matrix_unpack_frame_308(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 15.500f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x235 Signal Decoder */
int can_matrix_unpack_frame_309(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 15.550f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x236 Signal Decoder */
int can_matrix_unpack_frame_310(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 15.600f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x237 Signal Decoder */
int can_matrix_unpack_frame_311(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 15.650f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x238 Signal Decoder */
int can_matrix_unpack_frame_312(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 15.700f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x239 Signal Decoder */
int can_matrix_unpack_frame_313(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 15.750f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x23A Signal Decoder */
int can_matrix_unpack_frame_314(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 15.800f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x23B Signal Decoder */
int can_matrix_unpack_frame_315(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 15.850f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x23C Signal Decoder */
int can_matrix_unpack_frame_316(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 15.900f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x23D Signal Decoder */
int can_matrix_unpack_frame_317(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 15.950f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x23E Signal Decoder */
int can_matrix_unpack_frame_318(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 16.000f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x23F Signal Decoder */
int can_matrix_unpack_frame_319(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 16.050f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x240 Signal Decoder */
int can_matrix_unpack_frame_320(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 16.100f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x241 Signal Decoder */
int can_matrix_unpack_frame_321(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 16.150f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x242 Signal Decoder */
int can_matrix_unpack_frame_322(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 16.200f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x243 Signal Decoder */
int can_matrix_unpack_frame_323(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 16.250f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x244 Signal Decoder */
int can_matrix_unpack_frame_324(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 16.300f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x245 Signal Decoder */
int can_matrix_unpack_frame_325(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 16.350f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x246 Signal Decoder */
int can_matrix_unpack_frame_326(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 16.400f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x247 Signal Decoder */
int can_matrix_unpack_frame_327(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 16.450f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x248 Signal Decoder */
int can_matrix_unpack_frame_328(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 16.500f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x249 Signal Decoder */
int can_matrix_unpack_frame_329(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 16.550f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x24A Signal Decoder */
int can_matrix_unpack_frame_330(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 16.600f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x24B Signal Decoder */
int can_matrix_unpack_frame_331(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 16.650f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x24C Signal Decoder */
int can_matrix_unpack_frame_332(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 16.700f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x24D Signal Decoder */
int can_matrix_unpack_frame_333(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 16.750f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x24E Signal Decoder */
int can_matrix_unpack_frame_334(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 16.800f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x24F Signal Decoder */
int can_matrix_unpack_frame_335(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 16.850f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x250 Signal Decoder */
int can_matrix_unpack_frame_336(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 16.900f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x251 Signal Decoder */
int can_matrix_unpack_frame_337(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 16.950f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x252 Signal Decoder */
int can_matrix_unpack_frame_338(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 17.000f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x253 Signal Decoder */
int can_matrix_unpack_frame_339(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 17.050f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x254 Signal Decoder */
int can_matrix_unpack_frame_340(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 17.100f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x255 Signal Decoder */
int can_matrix_unpack_frame_341(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 17.150f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x256 Signal Decoder */
int can_matrix_unpack_frame_342(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 17.200f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x257 Signal Decoder */
int can_matrix_unpack_frame_343(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 17.250f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x258 Signal Decoder */
int can_matrix_unpack_frame_344(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 17.300f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x259 Signal Decoder */
int can_matrix_unpack_frame_345(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 17.350f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x25A Signal Decoder */
int can_matrix_unpack_frame_346(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 17.400f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x25B Signal Decoder */
int can_matrix_unpack_frame_347(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 17.450f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x25C Signal Decoder */
int can_matrix_unpack_frame_348(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 17.500f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x25D Signal Decoder */
int can_matrix_unpack_frame_349(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 17.550f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x25E Signal Decoder */
int can_matrix_unpack_frame_350(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 17.600f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x25F Signal Decoder */
int can_matrix_unpack_frame_351(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 17.650f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x260 Signal Decoder */
int can_matrix_unpack_frame_352(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 17.700f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x261 Signal Decoder */
int can_matrix_unpack_frame_353(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 17.750f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x262 Signal Decoder */
int can_matrix_unpack_frame_354(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 17.800f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x263 Signal Decoder */
int can_matrix_unpack_frame_355(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 17.850f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x264 Signal Decoder */
int can_matrix_unpack_frame_356(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 17.900f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x265 Signal Decoder */
int can_matrix_unpack_frame_357(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 17.950f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x266 Signal Decoder */
int can_matrix_unpack_frame_358(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 18.000f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x267 Signal Decoder */
int can_matrix_unpack_frame_359(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 18.050f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x268 Signal Decoder */
int can_matrix_unpack_frame_360(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 18.100f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x269 Signal Decoder */
int can_matrix_unpack_frame_361(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 18.150f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x26A Signal Decoder */
int can_matrix_unpack_frame_362(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 18.200f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x26B Signal Decoder */
int can_matrix_unpack_frame_363(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 18.250f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x26C Signal Decoder */
int can_matrix_unpack_frame_364(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 18.300f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x26D Signal Decoder */
int can_matrix_unpack_frame_365(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 18.350f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x26E Signal Decoder */
int can_matrix_unpack_frame_366(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 18.400f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x26F Signal Decoder */
int can_matrix_unpack_frame_367(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 18.450f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x270 Signal Decoder */
int can_matrix_unpack_frame_368(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 18.500f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x271 Signal Decoder */
int can_matrix_unpack_frame_369(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 18.550f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x272 Signal Decoder */
int can_matrix_unpack_frame_370(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 18.600f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x273 Signal Decoder */
int can_matrix_unpack_frame_371(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 18.650f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x274 Signal Decoder */
int can_matrix_unpack_frame_372(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 18.700f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x275 Signal Decoder */
int can_matrix_unpack_frame_373(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 18.750f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x276 Signal Decoder */
int can_matrix_unpack_frame_374(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 18.800f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x277 Signal Decoder */
int can_matrix_unpack_frame_375(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 18.850f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x278 Signal Decoder */
int can_matrix_unpack_frame_376(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 18.900f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x279 Signal Decoder */
int can_matrix_unpack_frame_377(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 18.950f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x27A Signal Decoder */
int can_matrix_unpack_frame_378(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 19.000f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x27B Signal Decoder */
int can_matrix_unpack_frame_379(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 19.050f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x27C Signal Decoder */
int can_matrix_unpack_frame_380(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 19.100f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x27D Signal Decoder */
int can_matrix_unpack_frame_381(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 19.150f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x27E Signal Decoder */
int can_matrix_unpack_frame_382(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 19.200f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x27F Signal Decoder */
int can_matrix_unpack_frame_383(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 19.250f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x280 Signal Decoder */
int can_matrix_unpack_frame_384(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 19.300f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x281 Signal Decoder */
int can_matrix_unpack_frame_385(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 19.350f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x282 Signal Decoder */
int can_matrix_unpack_frame_386(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 19.400f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x283 Signal Decoder */
int can_matrix_unpack_frame_387(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 19.450f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x284 Signal Decoder */
int can_matrix_unpack_frame_388(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 19.500f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x285 Signal Decoder */
int can_matrix_unpack_frame_389(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 19.550f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x286 Signal Decoder */
int can_matrix_unpack_frame_390(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 19.600f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x287 Signal Decoder */
int can_matrix_unpack_frame_391(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 19.650f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x288 Signal Decoder */
int can_matrix_unpack_frame_392(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 19.700f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x289 Signal Decoder */
int can_matrix_unpack_frame_393(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 19.750f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x28A Signal Decoder */
int can_matrix_unpack_frame_394(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 19.800f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x28B Signal Decoder */
int can_matrix_unpack_frame_395(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 19.850f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x28C Signal Decoder */
int can_matrix_unpack_frame_396(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 19.900f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x28D Signal Decoder */
int can_matrix_unpack_frame_397(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 19.950f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x28E Signal Decoder */
int can_matrix_unpack_frame_398(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 20.000f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x28F Signal Decoder */
int can_matrix_unpack_frame_399(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 20.050f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x290 Signal Decoder */
int can_matrix_unpack_frame_400(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 20.100f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x291 Signal Decoder */
int can_matrix_unpack_frame_401(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 20.150f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x292 Signal Decoder */
int can_matrix_unpack_frame_402(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 20.200f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x293 Signal Decoder */
int can_matrix_unpack_frame_403(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 20.250f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x294 Signal Decoder */
int can_matrix_unpack_frame_404(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 20.300f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x295 Signal Decoder */
int can_matrix_unpack_frame_405(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 20.350f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x296 Signal Decoder */
int can_matrix_unpack_frame_406(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 20.400f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x297 Signal Decoder */
int can_matrix_unpack_frame_407(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 20.450f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x298 Signal Decoder */
int can_matrix_unpack_frame_408(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 20.500f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x299 Signal Decoder */
int can_matrix_unpack_frame_409(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 20.550f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x29A Signal Decoder */
int can_matrix_unpack_frame_410(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 20.600f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x29B Signal Decoder */
int can_matrix_unpack_frame_411(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 20.650f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x29C Signal Decoder */
int can_matrix_unpack_frame_412(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 20.700f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x29D Signal Decoder */
int can_matrix_unpack_frame_413(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 20.750f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x29E Signal Decoder */
int can_matrix_unpack_frame_414(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 20.800f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x29F Signal Decoder */
int can_matrix_unpack_frame_415(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 20.850f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2A0 Signal Decoder */
int can_matrix_unpack_frame_416(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 20.900f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2A1 Signal Decoder */
int can_matrix_unpack_frame_417(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 20.950f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2A2 Signal Decoder */
int can_matrix_unpack_frame_418(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 21.000f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2A3 Signal Decoder */
int can_matrix_unpack_frame_419(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 21.050f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2A4 Signal Decoder */
int can_matrix_unpack_frame_420(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 21.100f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2A5 Signal Decoder */
int can_matrix_unpack_frame_421(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 21.150f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2A6 Signal Decoder */
int can_matrix_unpack_frame_422(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 21.200f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2A7 Signal Decoder */
int can_matrix_unpack_frame_423(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 21.250f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2A8 Signal Decoder */
int can_matrix_unpack_frame_424(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 21.300f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2A9 Signal Decoder */
int can_matrix_unpack_frame_425(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 21.350f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2AA Signal Decoder */
int can_matrix_unpack_frame_426(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 21.400f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2AB Signal Decoder */
int can_matrix_unpack_frame_427(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 21.450f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2AC Signal Decoder */
int can_matrix_unpack_frame_428(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 21.500f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2AD Signal Decoder */
int can_matrix_unpack_frame_429(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 21.550f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2AE Signal Decoder */
int can_matrix_unpack_frame_430(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 21.600f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2AF Signal Decoder */
int can_matrix_unpack_frame_431(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 21.650f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2B0 Signal Decoder */
int can_matrix_unpack_frame_432(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 21.700f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2B1 Signal Decoder */
int can_matrix_unpack_frame_433(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 21.750f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2B2 Signal Decoder */
int can_matrix_unpack_frame_434(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 21.800f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2B3 Signal Decoder */
int can_matrix_unpack_frame_435(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 21.850f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2B4 Signal Decoder */
int can_matrix_unpack_frame_436(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 21.900f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2B5 Signal Decoder */
int can_matrix_unpack_frame_437(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 21.950f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2B6 Signal Decoder */
int can_matrix_unpack_frame_438(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 22.000f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2B7 Signal Decoder */
int can_matrix_unpack_frame_439(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 22.050f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2B8 Signal Decoder */
int can_matrix_unpack_frame_440(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 22.100f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2B9 Signal Decoder */
int can_matrix_unpack_frame_441(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 22.150f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2BA Signal Decoder */
int can_matrix_unpack_frame_442(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 22.200f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2BB Signal Decoder */
int can_matrix_unpack_frame_443(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 22.250f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2BC Signal Decoder */
int can_matrix_unpack_frame_444(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 22.300f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2BD Signal Decoder */
int can_matrix_unpack_frame_445(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 22.350f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2BE Signal Decoder */
int can_matrix_unpack_frame_446(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 22.400f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2BF Signal Decoder */
int can_matrix_unpack_frame_447(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 22.450f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2C0 Signal Decoder */
int can_matrix_unpack_frame_448(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 22.500f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}

/* CAN Matrix Frame 0x2C1 Signal Decoder */
int can_matrix_unpack_frame_449(const uint8_t data[8], float *sig_a, float *sig_b, uint16_t *status) {
    if (!data || !sig_a || !sig_b || !status) return -1;
    uint16_t raw_a = (uint16_t)data[0] | ((uint16_t)data[1] << 8);
    uint16_t raw_b = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *sig_a = (float)raw_a * 22.550f;
    *sig_b = (float)raw_b * 0.25f - 50.0f;
    *status = (uint16_t)data[4] | ((uint16_t)data[5] << 8);
    return 0;
}
