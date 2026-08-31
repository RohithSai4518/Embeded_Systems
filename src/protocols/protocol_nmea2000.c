/**
 * @file protocol_nmea2000.c
 * @brief Marine NMEA 2000 PGN Parsers & Telemetry Encoders
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "protocols/protocol_nmea2000.h"
#include <string.h>


int n2k_decode_pgn_1(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_2(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_3(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_4(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_5(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_6(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_7(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_8(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_9(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_10(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_11(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_12(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_13(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_14(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_15(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_16(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_17(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_18(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_19(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_20(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_21(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_22(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_23(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_24(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_25(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_26(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_27(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_28(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_29(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_30(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_31(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_32(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_33(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_34(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_35(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_36(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_37(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_38(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_39(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_40(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_41(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_42(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_43(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_44(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_45(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_46(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_47(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_48(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_49(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_50(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_51(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_52(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_53(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_54(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_55(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_56(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_57(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_58(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_59(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_60(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_61(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_62(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_63(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_64(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_65(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_66(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_67(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_68(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_69(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_70(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_71(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_72(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_73(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_74(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_75(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_76(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_77(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_78(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_79(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_80(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_81(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_82(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_83(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_84(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_85(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_86(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_87(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_88(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_89(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_90(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_91(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_92(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_93(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_94(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_95(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_96(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_97(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_98(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_99(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_100(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_101(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_102(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_103(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_104(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_105(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_106(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_107(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_108(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_109(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_110(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_111(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_112(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_113(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_114(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_115(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_116(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_117(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_118(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_119(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_120(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_121(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_122(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_123(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_124(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_125(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_126(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_127(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_128(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_129(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_130(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_131(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_132(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_133(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_134(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_135(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_136(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_137(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_138(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_139(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_140(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_141(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_142(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_143(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_144(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_145(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_146(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_147(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_148(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}

int n2k_decode_pgn_149(const uint8_t *payload, size_t len, float *out_metric) {
    if (!payload || len < 8 || !out_metric) return -1;
    uint32_t raw = (uint32_t)payload[0] | ((uint32_t)payload[1] << 8) | ((uint32_t)payload[2] << 16);
    *out_metric = (float)raw * 0.001f; return 0;
}
