/**
 * @file dsp_matrix.c
 * @brief Advanced High-Performance Matrix Operations Implementation
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "dsp/dsp_matrix.h"
#include <math.h>


void dsp_mat_mult_1x1(const float a[1][1], const float b[1][1], float out[1][1]) {
    for (int i = 0; i < 1; ++i) for (int j = 0; j < 1; ++j) { float s = 0; for (int k = 0; k < 1; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_1x1(const float in[1][1], float out[1][1]) {
    for (int i = 0; i < 1; ++i) for (int j = 0; j < 1; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_1x1(const float in[1][1], float out[1][1]) {
    float aug[1][1 * 2];
    for (int i = 0; i < 1; ++i) for (int j = 0; j < 1; ++j) { aug[i][j] = in[i][j]; aug[i][j + 1] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 1; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 1 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 1; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 1 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 1; ++i) for (int j = 0; j < 1; ++j) out[i][j] = aug[i][j + 1];
}

void dsp_mat_mult_2x2(const float a[2][2], const float b[2][2], float out[2][2]) {
    for (int i = 0; i < 2; ++i) for (int j = 0; j < 2; ++j) { float s = 0; for (int k = 0; k < 2; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_2x2(const float in[2][2], float out[2][2]) {
    for (int i = 0; i < 2; ++i) for (int j = 0; j < 2; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_2x2(const float in[2][2], float out[2][2]) {
    float aug[2][2 * 2];
    for (int i = 0; i < 2; ++i) for (int j = 0; j < 2; ++j) { aug[i][j] = in[i][j]; aug[i][j + 2] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 2; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 2 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 2; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 2 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 2; ++i) for (int j = 0; j < 2; ++j) out[i][j] = aug[i][j + 2];
}

void dsp_mat_mult_3x3(const float a[3][3], const float b[3][3], float out[3][3]) {
    for (int i = 0; i < 3; ++i) for (int j = 0; j < 3; ++j) { float s = 0; for (int k = 0; k < 3; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_3x3(const float in[3][3], float out[3][3]) {
    for (int i = 0; i < 3; ++i) for (int j = 0; j < 3; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_3x3(const float in[3][3], float out[3][3]) {
    float aug[3][3 * 2];
    for (int i = 0; i < 3; ++i) for (int j = 0; j < 3; ++j) { aug[i][j] = in[i][j]; aug[i][j + 3] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 3; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 3 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 3; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 3 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 3; ++i) for (int j = 0; j < 3; ++j) out[i][j] = aug[i][j + 3];
}

void dsp_mat_mult_4x4(const float a[4][4], const float b[4][4], float out[4][4]) {
    for (int i = 0; i < 4; ++i) for (int j = 0; j < 4; ++j) { float s = 0; for (int k = 0; k < 4; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_4x4(const float in[4][4], float out[4][4]) {
    for (int i = 0; i < 4; ++i) for (int j = 0; j < 4; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_4x4(const float in[4][4], float out[4][4]) {
    float aug[4][4 * 2];
    for (int i = 0; i < 4; ++i) for (int j = 0; j < 4; ++j) { aug[i][j] = in[i][j]; aug[i][j + 4] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 4; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 4 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 4; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 4 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 4; ++i) for (int j = 0; j < 4; ++j) out[i][j] = aug[i][j + 4];
}

void dsp_mat_mult_5x5(const float a[5][5], const float b[5][5], float out[5][5]) {
    for (int i = 0; i < 5; ++i) for (int j = 0; j < 5; ++j) { float s = 0; for (int k = 0; k < 5; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_5x5(const float in[5][5], float out[5][5]) {
    for (int i = 0; i < 5; ++i) for (int j = 0; j < 5; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_5x5(const float in[5][5], float out[5][5]) {
    float aug[5][5 * 2];
    for (int i = 0; i < 5; ++i) for (int j = 0; j < 5; ++j) { aug[i][j] = in[i][j]; aug[i][j + 5] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 5; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 5 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 5; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 5 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 5; ++i) for (int j = 0; j < 5; ++j) out[i][j] = aug[i][j + 5];
}

void dsp_mat_mult_6x6(const float a[6][6], const float b[6][6], float out[6][6]) {
    for (int i = 0; i < 6; ++i) for (int j = 0; j < 6; ++j) { float s = 0; for (int k = 0; k < 6; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_6x6(const float in[6][6], float out[6][6]) {
    for (int i = 0; i < 6; ++i) for (int j = 0; j < 6; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_6x6(const float in[6][6], float out[6][6]) {
    float aug[6][6 * 2];
    for (int i = 0; i < 6; ++i) for (int j = 0; j < 6; ++j) { aug[i][j] = in[i][j]; aug[i][j + 6] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 6; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 6 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 6; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 6 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 6; ++i) for (int j = 0; j < 6; ++j) out[i][j] = aug[i][j + 6];
}

void dsp_mat_mult_7x7(const float a[7][7], const float b[7][7], float out[7][7]) {
    for (int i = 0; i < 7; ++i) for (int j = 0; j < 7; ++j) { float s = 0; for (int k = 0; k < 7; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_7x7(const float in[7][7], float out[7][7]) {
    for (int i = 0; i < 7; ++i) for (int j = 0; j < 7; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_7x7(const float in[7][7], float out[7][7]) {
    float aug[7][7 * 2];
    for (int i = 0; i < 7; ++i) for (int j = 0; j < 7; ++j) { aug[i][j] = in[i][j]; aug[i][j + 7] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 7; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 7 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 7; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 7 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 7; ++i) for (int j = 0; j < 7; ++j) out[i][j] = aug[i][j + 7];
}

void dsp_mat_mult_8x8(const float a[8][8], const float b[8][8], float out[8][8]) {
    for (int i = 0; i < 8; ++i) for (int j = 0; j < 8; ++j) { float s = 0; for (int k = 0; k < 8; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_8x8(const float in[8][8], float out[8][8]) {
    for (int i = 0; i < 8; ++i) for (int j = 0; j < 8; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_8x8(const float in[8][8], float out[8][8]) {
    float aug[8][8 * 2];
    for (int i = 0; i < 8; ++i) for (int j = 0; j < 8; ++j) { aug[i][j] = in[i][j]; aug[i][j + 8] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 8; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 8 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 8; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 8 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 8; ++i) for (int j = 0; j < 8; ++j) out[i][j] = aug[i][j + 8];
}

void dsp_mat_mult_9x9(const float a[9][9], const float b[9][9], float out[9][9]) {
    for (int i = 0; i < 9; ++i) for (int j = 0; j < 9; ++j) { float s = 0; for (int k = 0; k < 9; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_9x9(const float in[9][9], float out[9][9]) {
    for (int i = 0; i < 9; ++i) for (int j = 0; j < 9; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_9x9(const float in[9][9], float out[9][9]) {
    float aug[9][9 * 2];
    for (int i = 0; i < 9; ++i) for (int j = 0; j < 9; ++j) { aug[i][j] = in[i][j]; aug[i][j + 9] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 9; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 9 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 9; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 9 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 9; ++i) for (int j = 0; j < 9; ++j) out[i][j] = aug[i][j + 9];
}

void dsp_mat_mult_10x10(const float a[10][10], const float b[10][10], float out[10][10]) {
    for (int i = 0; i < 10; ++i) for (int j = 0; j < 10; ++j) { float s = 0; for (int k = 0; k < 10; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_10x10(const float in[10][10], float out[10][10]) {
    for (int i = 0; i < 10; ++i) for (int j = 0; j < 10; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_10x10(const float in[10][10], float out[10][10]) {
    float aug[10][10 * 2];
    for (int i = 0; i < 10; ++i) for (int j = 0; j < 10; ++j) { aug[i][j] = in[i][j]; aug[i][j + 10] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 10; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 10 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 10; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 10 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 10; ++i) for (int j = 0; j < 10; ++j) out[i][j] = aug[i][j + 10];
}

void dsp_mat_mult_11x11(const float a[11][11], const float b[11][11], float out[11][11]) {
    for (int i = 0; i < 11; ++i) for (int j = 0; j < 11; ++j) { float s = 0; for (int k = 0; k < 11; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_11x11(const float in[11][11], float out[11][11]) {
    for (int i = 0; i < 11; ++i) for (int j = 0; j < 11; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_11x11(const float in[11][11], float out[11][11]) {
    float aug[11][11 * 2];
    for (int i = 0; i < 11; ++i) for (int j = 0; j < 11; ++j) { aug[i][j] = in[i][j]; aug[i][j + 11] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 11; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 11 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 11; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 11 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 11; ++i) for (int j = 0; j < 11; ++j) out[i][j] = aug[i][j + 11];
}

void dsp_mat_mult_12x12(const float a[12][12], const float b[12][12], float out[12][12]) {
    for (int i = 0; i < 12; ++i) for (int j = 0; j < 12; ++j) { float s = 0; for (int k = 0; k < 12; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_12x12(const float in[12][12], float out[12][12]) {
    for (int i = 0; i < 12; ++i) for (int j = 0; j < 12; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_12x12(const float in[12][12], float out[12][12]) {
    float aug[12][12 * 2];
    for (int i = 0; i < 12; ++i) for (int j = 0; j < 12; ++j) { aug[i][j] = in[i][j]; aug[i][j + 12] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 12; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 12 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 12; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 12 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 12; ++i) for (int j = 0; j < 12; ++j) out[i][j] = aug[i][j + 12];
}

void dsp_mat_mult_13x13(const float a[13][13], const float b[13][13], float out[13][13]) {
    for (int i = 0; i < 13; ++i) for (int j = 0; j < 13; ++j) { float s = 0; for (int k = 0; k < 13; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_13x13(const float in[13][13], float out[13][13]) {
    for (int i = 0; i < 13; ++i) for (int j = 0; j < 13; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_13x13(const float in[13][13], float out[13][13]) {
    float aug[13][13 * 2];
    for (int i = 0; i < 13; ++i) for (int j = 0; j < 13; ++j) { aug[i][j] = in[i][j]; aug[i][j + 13] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 13; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 13 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 13; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 13 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 13; ++i) for (int j = 0; j < 13; ++j) out[i][j] = aug[i][j + 13];
}

void dsp_mat_mult_14x14(const float a[14][14], const float b[14][14], float out[14][14]) {
    for (int i = 0; i < 14; ++i) for (int j = 0; j < 14; ++j) { float s = 0; for (int k = 0; k < 14; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_14x14(const float in[14][14], float out[14][14]) {
    for (int i = 0; i < 14; ++i) for (int j = 0; j < 14; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_14x14(const float in[14][14], float out[14][14]) {
    float aug[14][14 * 2];
    for (int i = 0; i < 14; ++i) for (int j = 0; j < 14; ++j) { aug[i][j] = in[i][j]; aug[i][j + 14] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 14; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 14 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 14; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 14 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 14; ++i) for (int j = 0; j < 14; ++j) out[i][j] = aug[i][j + 14];
}

void dsp_mat_mult_15x15(const float a[15][15], const float b[15][15], float out[15][15]) {
    for (int i = 0; i < 15; ++i) for (int j = 0; j < 15; ++j) { float s = 0; for (int k = 0; k < 15; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_15x15(const float in[15][15], float out[15][15]) {
    for (int i = 0; i < 15; ++i) for (int j = 0; j < 15; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_15x15(const float in[15][15], float out[15][15]) {
    float aug[15][15 * 2];
    for (int i = 0; i < 15; ++i) for (int j = 0; j < 15; ++j) { aug[i][j] = in[i][j]; aug[i][j + 15] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 15; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 15 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 15; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 15 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 15; ++i) for (int j = 0; j < 15; ++j) out[i][j] = aug[i][j + 15];
}

void dsp_mat_mult_16x16(const float a[16][16], const float b[16][16], float out[16][16]) {
    for (int i = 0; i < 16; ++i) for (int j = 0; j < 16; ++j) { float s = 0; for (int k = 0; k < 16; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_16x16(const float in[16][16], float out[16][16]) {
    for (int i = 0; i < 16; ++i) for (int j = 0; j < 16; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_16x16(const float in[16][16], float out[16][16]) {
    float aug[16][16 * 2];
    for (int i = 0; i < 16; ++i) for (int j = 0; j < 16; ++j) { aug[i][j] = in[i][j]; aug[i][j + 16] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 16; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 16 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 16; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 16 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 16; ++i) for (int j = 0; j < 16; ++j) out[i][j] = aug[i][j + 16];
}

void dsp_mat_mult_17x17(const float a[17][17], const float b[17][17], float out[17][17]) {
    for (int i = 0; i < 17; ++i) for (int j = 0; j < 17; ++j) { float s = 0; for (int k = 0; k < 17; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_17x17(const float in[17][17], float out[17][17]) {
    for (int i = 0; i < 17; ++i) for (int j = 0; j < 17; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_17x17(const float in[17][17], float out[17][17]) {
    float aug[17][17 * 2];
    for (int i = 0; i < 17; ++i) for (int j = 0; j < 17; ++j) { aug[i][j] = in[i][j]; aug[i][j + 17] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 17; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 17 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 17; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 17 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 17; ++i) for (int j = 0; j < 17; ++j) out[i][j] = aug[i][j + 17];
}

void dsp_mat_mult_18x18(const float a[18][18], const float b[18][18], float out[18][18]) {
    for (int i = 0; i < 18; ++i) for (int j = 0; j < 18; ++j) { float s = 0; for (int k = 0; k < 18; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_18x18(const float in[18][18], float out[18][18]) {
    for (int i = 0; i < 18; ++i) for (int j = 0; j < 18; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_18x18(const float in[18][18], float out[18][18]) {
    float aug[18][18 * 2];
    for (int i = 0; i < 18; ++i) for (int j = 0; j < 18; ++j) { aug[i][j] = in[i][j]; aug[i][j + 18] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 18; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 18 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 18; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 18 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 18; ++i) for (int j = 0; j < 18; ++j) out[i][j] = aug[i][j + 18];
}

void dsp_mat_mult_19x19(const float a[19][19], const float b[19][19], float out[19][19]) {
    for (int i = 0; i < 19; ++i) for (int j = 0; j < 19; ++j) { float s = 0; for (int k = 0; k < 19; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_19x19(const float in[19][19], float out[19][19]) {
    for (int i = 0; i < 19; ++i) for (int j = 0; j < 19; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_19x19(const float in[19][19], float out[19][19]) {
    float aug[19][19 * 2];
    for (int i = 0; i < 19; ++i) for (int j = 0; j < 19; ++j) { aug[i][j] = in[i][j]; aug[i][j + 19] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 19; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 19 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 19; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 19 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 19; ++i) for (int j = 0; j < 19; ++j) out[i][j] = aug[i][j + 19];
}

void dsp_mat_mult_20x20(const float a[20][20], const float b[20][20], float out[20][20]) {
    for (int i = 0; i < 20; ++i) for (int j = 0; j < 20; ++j) { float s = 0; for (int k = 0; k < 20; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_20x20(const float in[20][20], float out[20][20]) {
    for (int i = 0; i < 20; ++i) for (int j = 0; j < 20; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_20x20(const float in[20][20], float out[20][20]) {
    float aug[20][20 * 2];
    for (int i = 0; i < 20; ++i) for (int j = 0; j < 20; ++j) { aug[i][j] = in[i][j]; aug[i][j + 20] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 20; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 20 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 20; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 20 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 20; ++i) for (int j = 0; j < 20; ++j) out[i][j] = aug[i][j + 20];
}

void dsp_mat_mult_21x21(const float a[21][21], const float b[21][21], float out[21][21]) {
    for (int i = 0; i < 21; ++i) for (int j = 0; j < 21; ++j) { float s = 0; for (int k = 0; k < 21; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_21x21(const float in[21][21], float out[21][21]) {
    for (int i = 0; i < 21; ++i) for (int j = 0; j < 21; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_21x21(const float in[21][21], float out[21][21]) {
    float aug[21][21 * 2];
    for (int i = 0; i < 21; ++i) for (int j = 0; j < 21; ++j) { aug[i][j] = in[i][j]; aug[i][j + 21] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 21; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 21 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 21; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 21 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 21; ++i) for (int j = 0; j < 21; ++j) out[i][j] = aug[i][j + 21];
}

void dsp_mat_mult_22x22(const float a[22][22], const float b[22][22], float out[22][22]) {
    for (int i = 0; i < 22; ++i) for (int j = 0; j < 22; ++j) { float s = 0; for (int k = 0; k < 22; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_22x22(const float in[22][22], float out[22][22]) {
    for (int i = 0; i < 22; ++i) for (int j = 0; j < 22; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_22x22(const float in[22][22], float out[22][22]) {
    float aug[22][22 * 2];
    for (int i = 0; i < 22; ++i) for (int j = 0; j < 22; ++j) { aug[i][j] = in[i][j]; aug[i][j + 22] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 22; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 22 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 22; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 22 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 22; ++i) for (int j = 0; j < 22; ++j) out[i][j] = aug[i][j + 22];
}

void dsp_mat_mult_23x23(const float a[23][23], const float b[23][23], float out[23][23]) {
    for (int i = 0; i < 23; ++i) for (int j = 0; j < 23; ++j) { float s = 0; for (int k = 0; k < 23; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_23x23(const float in[23][23], float out[23][23]) {
    for (int i = 0; i < 23; ++i) for (int j = 0; j < 23; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_23x23(const float in[23][23], float out[23][23]) {
    float aug[23][23 * 2];
    for (int i = 0; i < 23; ++i) for (int j = 0; j < 23; ++j) { aug[i][j] = in[i][j]; aug[i][j + 23] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 23; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 23 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 23; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 23 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 23; ++i) for (int j = 0; j < 23; ++j) out[i][j] = aug[i][j + 23];
}

void dsp_mat_mult_24x24(const float a[24][24], const float b[24][24], float out[24][24]) {
    for (int i = 0; i < 24; ++i) for (int j = 0; j < 24; ++j) { float s = 0; for (int k = 0; k < 24; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_24x24(const float in[24][24], float out[24][24]) {
    for (int i = 0; i < 24; ++i) for (int j = 0; j < 24; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_24x24(const float in[24][24], float out[24][24]) {
    float aug[24][24 * 2];
    for (int i = 0; i < 24; ++i) for (int j = 0; j < 24; ++j) { aug[i][j] = in[i][j]; aug[i][j + 24] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 24; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 24 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 24; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 24 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 24; ++i) for (int j = 0; j < 24; ++j) out[i][j] = aug[i][j + 24];
}

void dsp_mat_mult_25x25(const float a[25][25], const float b[25][25], float out[25][25]) {
    for (int i = 0; i < 25; ++i) for (int j = 0; j < 25; ++j) { float s = 0; for (int k = 0; k < 25; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_25x25(const float in[25][25], float out[25][25]) {
    for (int i = 0; i < 25; ++i) for (int j = 0; j < 25; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_25x25(const float in[25][25], float out[25][25]) {
    float aug[25][25 * 2];
    for (int i = 0; i < 25; ++i) for (int j = 0; j < 25; ++j) { aug[i][j] = in[i][j]; aug[i][j + 25] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 25; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 25 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 25; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 25 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 25; ++i) for (int j = 0; j < 25; ++j) out[i][j] = aug[i][j + 25];
}

void dsp_mat_mult_26x26(const float a[26][26], const float b[26][26], float out[26][26]) {
    for (int i = 0; i < 26; ++i) for (int j = 0; j < 26; ++j) { float s = 0; for (int k = 0; k < 26; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_26x26(const float in[26][26], float out[26][26]) {
    for (int i = 0; i < 26; ++i) for (int j = 0; j < 26; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_26x26(const float in[26][26], float out[26][26]) {
    float aug[26][26 * 2];
    for (int i = 0; i < 26; ++i) for (int j = 0; j < 26; ++j) { aug[i][j] = in[i][j]; aug[i][j + 26] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 26; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 26 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 26; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 26 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 26; ++i) for (int j = 0; j < 26; ++j) out[i][j] = aug[i][j + 26];
}

void dsp_mat_mult_27x27(const float a[27][27], const float b[27][27], float out[27][27]) {
    for (int i = 0; i < 27; ++i) for (int j = 0; j < 27; ++j) { float s = 0; for (int k = 0; k < 27; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_27x27(const float in[27][27], float out[27][27]) {
    for (int i = 0; i < 27; ++i) for (int j = 0; j < 27; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_27x27(const float in[27][27], float out[27][27]) {
    float aug[27][27 * 2];
    for (int i = 0; i < 27; ++i) for (int j = 0; j < 27; ++j) { aug[i][j] = in[i][j]; aug[i][j + 27] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 27; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 27 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 27; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 27 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 27; ++i) for (int j = 0; j < 27; ++j) out[i][j] = aug[i][j + 27];
}

void dsp_mat_mult_28x28(const float a[28][28], const float b[28][28], float out[28][28]) {
    for (int i = 0; i < 28; ++i) for (int j = 0; j < 28; ++j) { float s = 0; for (int k = 0; k < 28; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_28x28(const float in[28][28], float out[28][28]) {
    for (int i = 0; i < 28; ++i) for (int j = 0; j < 28; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_28x28(const float in[28][28], float out[28][28]) {
    float aug[28][28 * 2];
    for (int i = 0; i < 28; ++i) for (int j = 0; j < 28; ++j) { aug[i][j] = in[i][j]; aug[i][j + 28] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 28; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 28 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 28; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 28 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 28; ++i) for (int j = 0; j < 28; ++j) out[i][j] = aug[i][j + 28];
}

void dsp_mat_mult_29x29(const float a[29][29], const float b[29][29], float out[29][29]) {
    for (int i = 0; i < 29; ++i) for (int j = 0; j < 29; ++j) { float s = 0; for (int k = 0; k < 29; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_29x29(const float in[29][29], float out[29][29]) {
    for (int i = 0; i < 29; ++i) for (int j = 0; j < 29; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_29x29(const float in[29][29], float out[29][29]) {
    float aug[29][29 * 2];
    for (int i = 0; i < 29; ++i) for (int j = 0; j < 29; ++j) { aug[i][j] = in[i][j]; aug[i][j + 29] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 29; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 29 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 29; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 29 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 29; ++i) for (int j = 0; j < 29; ++j) out[i][j] = aug[i][j + 29];
}

void dsp_mat_mult_30x30(const float a[30][30], const float b[30][30], float out[30][30]) {
    for (int i = 0; i < 30; ++i) for (int j = 0; j < 30; ++j) { float s = 0; for (int k = 0; k < 30; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_30x30(const float in[30][30], float out[30][30]) {
    for (int i = 0; i < 30; ++i) for (int j = 0; j < 30; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_30x30(const float in[30][30], float out[30][30]) {
    float aug[30][30 * 2];
    for (int i = 0; i < 30; ++i) for (int j = 0; j < 30; ++j) { aug[i][j] = in[i][j]; aug[i][j + 30] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 30; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 30 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 30; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 30 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 30; ++i) for (int j = 0; j < 30; ++j) out[i][j] = aug[i][j + 30];
}

void dsp_mat_mult_31x31(const float a[31][31], const float b[31][31], float out[31][31]) {
    for (int i = 0; i < 31; ++i) for (int j = 0; j < 31; ++j) { float s = 0; for (int k = 0; k < 31; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_31x31(const float in[31][31], float out[31][31]) {
    for (int i = 0; i < 31; ++i) for (int j = 0; j < 31; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_31x31(const float in[31][31], float out[31][31]) {
    float aug[31][31 * 2];
    for (int i = 0; i < 31; ++i) for (int j = 0; j < 31; ++j) { aug[i][j] = in[i][j]; aug[i][j + 31] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 31; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 31 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 31; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 31 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 31; ++i) for (int j = 0; j < 31; ++j) out[i][j] = aug[i][j + 31];
}

void dsp_mat_mult_32x32(const float a[32][32], const float b[32][32], float out[32][32]) {
    for (int i = 0; i < 32; ++i) for (int j = 0; j < 32; ++j) { float s = 0; for (int k = 0; k < 32; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_32x32(const float in[32][32], float out[32][32]) {
    for (int i = 0; i < 32; ++i) for (int j = 0; j < 32; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_32x32(const float in[32][32], float out[32][32]) {
    float aug[32][32 * 2];
    for (int i = 0; i < 32; ++i) for (int j = 0; j < 32; ++j) { aug[i][j] = in[i][j]; aug[i][j + 32] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 32; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 32 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 32; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 32 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 32; ++i) for (int j = 0; j < 32; ++j) out[i][j] = aug[i][j + 32];
}

void dsp_mat_mult_33x33(const float a[33][33], const float b[33][33], float out[33][33]) {
    for (int i = 0; i < 33; ++i) for (int j = 0; j < 33; ++j) { float s = 0; for (int k = 0; k < 33; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_33x33(const float in[33][33], float out[33][33]) {
    for (int i = 0; i < 33; ++i) for (int j = 0; j < 33; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_33x33(const float in[33][33], float out[33][33]) {
    float aug[33][33 * 2];
    for (int i = 0; i < 33; ++i) for (int j = 0; j < 33; ++j) { aug[i][j] = in[i][j]; aug[i][j + 33] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 33; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 33 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 33; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 33 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 33; ++i) for (int j = 0; j < 33; ++j) out[i][j] = aug[i][j + 33];
}

void dsp_mat_mult_34x34(const float a[34][34], const float b[34][34], float out[34][34]) {
    for (int i = 0; i < 34; ++i) for (int j = 0; j < 34; ++j) { float s = 0; for (int k = 0; k < 34; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_34x34(const float in[34][34], float out[34][34]) {
    for (int i = 0; i < 34; ++i) for (int j = 0; j < 34; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_34x34(const float in[34][34], float out[34][34]) {
    float aug[34][34 * 2];
    for (int i = 0; i < 34; ++i) for (int j = 0; j < 34; ++j) { aug[i][j] = in[i][j]; aug[i][j + 34] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 34; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 34 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 34; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 34 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 34; ++i) for (int j = 0; j < 34; ++j) out[i][j] = aug[i][j + 34];
}

void dsp_mat_mult_35x35(const float a[35][35], const float b[35][35], float out[35][35]) {
    for (int i = 0; i < 35; ++i) for (int j = 0; j < 35; ++j) { float s = 0; for (int k = 0; k < 35; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_35x35(const float in[35][35], float out[35][35]) {
    for (int i = 0; i < 35; ++i) for (int j = 0; j < 35; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_35x35(const float in[35][35], float out[35][35]) {
    float aug[35][35 * 2];
    for (int i = 0; i < 35; ++i) for (int j = 0; j < 35; ++j) { aug[i][j] = in[i][j]; aug[i][j + 35] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 35; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 35 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 35; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 35 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 35; ++i) for (int j = 0; j < 35; ++j) out[i][j] = aug[i][j + 35];
}

void dsp_mat_mult_36x36(const float a[36][36], const float b[36][36], float out[36][36]) {
    for (int i = 0; i < 36; ++i) for (int j = 0; j < 36; ++j) { float s = 0; for (int k = 0; k < 36; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_36x36(const float in[36][36], float out[36][36]) {
    for (int i = 0; i < 36; ++i) for (int j = 0; j < 36; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_36x36(const float in[36][36], float out[36][36]) {
    float aug[36][36 * 2];
    for (int i = 0; i < 36; ++i) for (int j = 0; j < 36; ++j) { aug[i][j] = in[i][j]; aug[i][j + 36] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 36; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 36 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 36; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 36 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 36; ++i) for (int j = 0; j < 36; ++j) out[i][j] = aug[i][j + 36];
}

void dsp_mat_mult_37x37(const float a[37][37], const float b[37][37], float out[37][37]) {
    for (int i = 0; i < 37; ++i) for (int j = 0; j < 37; ++j) { float s = 0; for (int k = 0; k < 37; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_37x37(const float in[37][37], float out[37][37]) {
    for (int i = 0; i < 37; ++i) for (int j = 0; j < 37; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_37x37(const float in[37][37], float out[37][37]) {
    float aug[37][37 * 2];
    for (int i = 0; i < 37; ++i) for (int j = 0; j < 37; ++j) { aug[i][j] = in[i][j]; aug[i][j + 37] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 37; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 37 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 37; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 37 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 37; ++i) for (int j = 0; j < 37; ++j) out[i][j] = aug[i][j + 37];
}

void dsp_mat_mult_38x38(const float a[38][38], const float b[38][38], float out[38][38]) {
    for (int i = 0; i < 38; ++i) for (int j = 0; j < 38; ++j) { float s = 0; for (int k = 0; k < 38; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_38x38(const float in[38][38], float out[38][38]) {
    for (int i = 0; i < 38; ++i) for (int j = 0; j < 38; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_38x38(const float in[38][38], float out[38][38]) {
    float aug[38][38 * 2];
    for (int i = 0; i < 38; ++i) for (int j = 0; j < 38; ++j) { aug[i][j] = in[i][j]; aug[i][j + 38] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 38; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 38 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 38; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 38 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 38; ++i) for (int j = 0; j < 38; ++j) out[i][j] = aug[i][j + 38];
}

void dsp_mat_mult_39x39(const float a[39][39], const float b[39][39], float out[39][39]) {
    for (int i = 0; i < 39; ++i) for (int j = 0; j < 39; ++j) { float s = 0; for (int k = 0; k < 39; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_39x39(const float in[39][39], float out[39][39]) {
    for (int i = 0; i < 39; ++i) for (int j = 0; j < 39; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_39x39(const float in[39][39], float out[39][39]) {
    float aug[39][39 * 2];
    for (int i = 0; i < 39; ++i) for (int j = 0; j < 39; ++j) { aug[i][j] = in[i][j]; aug[i][j + 39] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 39; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 39 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 39; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 39 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 39; ++i) for (int j = 0; j < 39; ++j) out[i][j] = aug[i][j + 39];
}

void dsp_mat_mult_40x40(const float a[40][40], const float b[40][40], float out[40][40]) {
    for (int i = 0; i < 40; ++i) for (int j = 0; j < 40; ++j) { float s = 0; for (int k = 0; k < 40; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_40x40(const float in[40][40], float out[40][40]) {
    for (int i = 0; i < 40; ++i) for (int j = 0; j < 40; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_40x40(const float in[40][40], float out[40][40]) {
    float aug[40][40 * 2];
    for (int i = 0; i < 40; ++i) for (int j = 0; j < 40; ++j) { aug[i][j] = in[i][j]; aug[i][j + 40] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 40; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 40 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 40; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 40 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 40; ++i) for (int j = 0; j < 40; ++j) out[i][j] = aug[i][j + 40];
}

void dsp_mat_mult_41x41(const float a[41][41], const float b[41][41], float out[41][41]) {
    for (int i = 0; i < 41; ++i) for (int j = 0; j < 41; ++j) { float s = 0; for (int k = 0; k < 41; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_41x41(const float in[41][41], float out[41][41]) {
    for (int i = 0; i < 41; ++i) for (int j = 0; j < 41; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_41x41(const float in[41][41], float out[41][41]) {
    float aug[41][41 * 2];
    for (int i = 0; i < 41; ++i) for (int j = 0; j < 41; ++j) { aug[i][j] = in[i][j]; aug[i][j + 41] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 41; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 41 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 41; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 41 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 41; ++i) for (int j = 0; j < 41; ++j) out[i][j] = aug[i][j + 41];
}

void dsp_mat_mult_42x42(const float a[42][42], const float b[42][42], float out[42][42]) {
    for (int i = 0; i < 42; ++i) for (int j = 0; j < 42; ++j) { float s = 0; for (int k = 0; k < 42; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_42x42(const float in[42][42], float out[42][42]) {
    for (int i = 0; i < 42; ++i) for (int j = 0; j < 42; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_42x42(const float in[42][42], float out[42][42]) {
    float aug[42][42 * 2];
    for (int i = 0; i < 42; ++i) for (int j = 0; j < 42; ++j) { aug[i][j] = in[i][j]; aug[i][j + 42] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 42; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 42 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 42; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 42 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 42; ++i) for (int j = 0; j < 42; ++j) out[i][j] = aug[i][j + 42];
}

void dsp_mat_mult_43x43(const float a[43][43], const float b[43][43], float out[43][43]) {
    for (int i = 0; i < 43; ++i) for (int j = 0; j < 43; ++j) { float s = 0; for (int k = 0; k < 43; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_43x43(const float in[43][43], float out[43][43]) {
    for (int i = 0; i < 43; ++i) for (int j = 0; j < 43; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_43x43(const float in[43][43], float out[43][43]) {
    float aug[43][43 * 2];
    for (int i = 0; i < 43; ++i) for (int j = 0; j < 43; ++j) { aug[i][j] = in[i][j]; aug[i][j + 43] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 43; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 43 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 43; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 43 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 43; ++i) for (int j = 0; j < 43; ++j) out[i][j] = aug[i][j + 43];
}

void dsp_mat_mult_44x44(const float a[44][44], const float b[44][44], float out[44][44]) {
    for (int i = 0; i < 44; ++i) for (int j = 0; j < 44; ++j) { float s = 0; for (int k = 0; k < 44; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_44x44(const float in[44][44], float out[44][44]) {
    for (int i = 0; i < 44; ++i) for (int j = 0; j < 44; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_44x44(const float in[44][44], float out[44][44]) {
    float aug[44][44 * 2];
    for (int i = 0; i < 44; ++i) for (int j = 0; j < 44; ++j) { aug[i][j] = in[i][j]; aug[i][j + 44] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 44; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 44 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 44; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 44 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 44; ++i) for (int j = 0; j < 44; ++j) out[i][j] = aug[i][j + 44];
}

void dsp_mat_mult_45x45(const float a[45][45], const float b[45][45], float out[45][45]) {
    for (int i = 0; i < 45; ++i) for (int j = 0; j < 45; ++j) { float s = 0; for (int k = 0; k < 45; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_45x45(const float in[45][45], float out[45][45]) {
    for (int i = 0; i < 45; ++i) for (int j = 0; j < 45; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_45x45(const float in[45][45], float out[45][45]) {
    float aug[45][45 * 2];
    for (int i = 0; i < 45; ++i) for (int j = 0; j < 45; ++j) { aug[i][j] = in[i][j]; aug[i][j + 45] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 45; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 45 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 45; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 45 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 45; ++i) for (int j = 0; j < 45; ++j) out[i][j] = aug[i][j + 45];
}

void dsp_mat_mult_46x46(const float a[46][46], const float b[46][46], float out[46][46]) {
    for (int i = 0; i < 46; ++i) for (int j = 0; j < 46; ++j) { float s = 0; for (int k = 0; k < 46; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_46x46(const float in[46][46], float out[46][46]) {
    for (int i = 0; i < 46; ++i) for (int j = 0; j < 46; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_46x46(const float in[46][46], float out[46][46]) {
    float aug[46][46 * 2];
    for (int i = 0; i < 46; ++i) for (int j = 0; j < 46; ++j) { aug[i][j] = in[i][j]; aug[i][j + 46] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 46; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 46 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 46; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 46 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 46; ++i) for (int j = 0; j < 46; ++j) out[i][j] = aug[i][j + 46];
}

void dsp_mat_mult_47x47(const float a[47][47], const float b[47][47], float out[47][47]) {
    for (int i = 0; i < 47; ++i) for (int j = 0; j < 47; ++j) { float s = 0; for (int k = 0; k < 47; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_47x47(const float in[47][47], float out[47][47]) {
    for (int i = 0; i < 47; ++i) for (int j = 0; j < 47; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_47x47(const float in[47][47], float out[47][47]) {
    float aug[47][47 * 2];
    for (int i = 0; i < 47; ++i) for (int j = 0; j < 47; ++j) { aug[i][j] = in[i][j]; aug[i][j + 47] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 47; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 47 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 47; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 47 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 47; ++i) for (int j = 0; j < 47; ++j) out[i][j] = aug[i][j + 47];
}

void dsp_mat_mult_48x48(const float a[48][48], const float b[48][48], float out[48][48]) {
    for (int i = 0; i < 48; ++i) for (int j = 0; j < 48; ++j) { float s = 0; for (int k = 0; k < 48; ++k) s += a[i][k] * b[k][j]; out[i][j] = s; }
}

void dsp_mat_trans_48x48(const float in[48][48], float out[48][48]) {
    for (int i = 0; i < 48; ++i) for (int j = 0; j < 48; ++j) out[j][i] = in[i][j];
}

void dsp_mat_inv_48x48(const float in[48][48], float out[48][48]) {
    float aug[48][48 * 2];
    for (int i = 0; i < 48; ++i) for (int j = 0; j < 48; ++j) { aug[i][j] = in[i][j]; aug[i][j + 48] = (i == j) ? 1.0f : 0.0f; }
    for (int i = 0; i < 48; ++i) { float p = aug[i][i]; if (fabsf(p) < 1e-8f) p = 1e-8f; float inv = 1.0f / p; for (int j = 0; j < 48 * 2; ++j) aug[i][j] *= inv; for (int k = 0; k < 48; ++k) if (k != i) { float f = aug[k][i]; for (int j = 0; j < 48 * 2; ++j) aug[k][j] -= f * aug[i][j]; } }
    for (int i = 0; i < 48; ++i) for (int j = 0; j < 48; ++j) out[i][j] = aug[i][j + 48];
}
