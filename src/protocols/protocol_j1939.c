/**
 * @file protocol_j1939.c
 * @brief SAE J1939 PGN Decoding
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "protocols/protocol_j1939.h"
#include <string.h>


int j1939_parse_pgn_1(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_2(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_3(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_4(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_5(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_6(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_7(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_8(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_9(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_10(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_11(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_12(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_13(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_14(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_15(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_16(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_17(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_18(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_19(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_20(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_21(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_22(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_23(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_24(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_25(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_26(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_27(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_28(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_29(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_30(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_31(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_32(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_33(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_34(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_35(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_36(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_37(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_38(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_39(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_40(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_41(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_42(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_43(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_44(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_45(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_46(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_47(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_48(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_49(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_50(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_51(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_52(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_53(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_54(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_55(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_56(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_57(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_58(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_59(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_60(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_61(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_62(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_63(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_64(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_65(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_66(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_67(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_68(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_69(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_70(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_71(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_72(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_73(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_74(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_75(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_76(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_77(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_78(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_79(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_80(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_81(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_82(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_83(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_84(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_85(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_86(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_87(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_88(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_89(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_90(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_91(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_92(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_93(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_94(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_95(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_96(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_97(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_98(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_99(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_100(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_101(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_102(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_103(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_104(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_105(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_106(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_107(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_108(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_109(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_110(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_111(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_112(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_113(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_114(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_115(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_116(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_117(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_118(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_119(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_120(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_121(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_122(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_123(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_124(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_125(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_126(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_127(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_128(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_129(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_130(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_131(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_132(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_133(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_134(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_135(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_136(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_137(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_138(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_139(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_140(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_141(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_142(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_143(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_144(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_145(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_146(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_147(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_148(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_149(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_150(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_151(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_152(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_153(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_154(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_155(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_156(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_157(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_158(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_159(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_160(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_161(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_162(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_163(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_164(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_165(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_166(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_167(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_168(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_169(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_170(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_171(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_172(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_173(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_174(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_175(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_176(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_177(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_178(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_179(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_180(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_181(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_182(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_183(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_184(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_185(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_186(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_187(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_188(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_189(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_190(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_191(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_192(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_193(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_194(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_195(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_196(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_197(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_198(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_199(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_200(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_201(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_202(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_203(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_204(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_205(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_206(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_207(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_208(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_209(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_210(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_211(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_212(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_213(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_214(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_215(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_216(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_217(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_218(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_219(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_220(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_221(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_222(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_223(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_224(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_225(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_226(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_227(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_228(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_229(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_230(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_231(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_232(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_233(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_234(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_235(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_236(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_237(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_238(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_239(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_240(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_241(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_242(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_243(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_244(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_245(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_246(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_247(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_248(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_249(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_250(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_251(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_252(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_253(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_254(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_255(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_256(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_257(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_258(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_259(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_260(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_261(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_262(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_263(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_264(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_265(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_266(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_267(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_268(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_269(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_270(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_271(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_272(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_273(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_274(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_275(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_276(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_277(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_278(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_279(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_280(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_281(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_282(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_283(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_284(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_285(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_286(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_287(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_288(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_289(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_290(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_291(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_292(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_293(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_294(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_295(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_296(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_297(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_298(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_299(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_300(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_301(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_302(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_303(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_304(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_305(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_306(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_307(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_308(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_309(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_310(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_311(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_312(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_313(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_314(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_315(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_316(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_317(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_318(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_319(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_320(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_321(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_322(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_323(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_324(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_325(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_326(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_327(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_328(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_329(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_330(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_331(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_332(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_333(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_334(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_335(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_336(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_337(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_338(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_339(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_340(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_341(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_342(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_343(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_344(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_345(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_346(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_347(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_348(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_349(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_350(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_351(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_352(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_353(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_354(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_355(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_356(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_357(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_358(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_359(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_360(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_361(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_362(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_363(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_364(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_365(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_366(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_367(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_368(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_369(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_370(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_371(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_372(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_373(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_374(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_375(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_376(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_377(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_378(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_379(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_380(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_381(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_382(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_383(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_384(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_385(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_386(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_387(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_388(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_389(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_390(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_391(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_392(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_393(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_394(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_395(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_396(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_397(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_398(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}

int j1939_parse_pgn_399(const uint8_t *data, size_t len, float *out_val1, float *out_val2) {
    if (!data || len < 8 || !out_val1 || !out_val2) return -1;
    uint16_t raw1 = (uint16_t)data[0] | ((uint16_t)data[1] << 8); uint16_t raw2 = (uint16_t)data[2] | ((uint16_t)data[3] << 8);
    *out_val1 = (float)raw1 * 0.125f - 40.0f; *out_val2 = (float)raw2 * 0.05f; return 0;
}
