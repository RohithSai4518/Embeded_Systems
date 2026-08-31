/**
 * @file dsp_matrix.h
 * @brief Advanced High-Performance Matrix Operations
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef DSP_MATRIX_H
#define DSP_MATRIX_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void dsp_mat_mult_1x1(const float a[1][1], const float b[1][1], float out[1][1]);
void dsp_mat_inv_1x1(const float in[1][1], float out[1][1]);
void dsp_mat_trans_1x1(const float in[1][1], float out[1][1]);
void dsp_mat_mult_2x2(const float a[2][2], const float b[2][2], float out[2][2]);
void dsp_mat_inv_2x2(const float in[2][2], float out[2][2]);
void dsp_mat_trans_2x2(const float in[2][2], float out[2][2]);
void dsp_mat_mult_3x3(const float a[3][3], const float b[3][3], float out[3][3]);
void dsp_mat_inv_3x3(const float in[3][3], float out[3][3]);
void dsp_mat_trans_3x3(const float in[3][3], float out[3][3]);
void dsp_mat_mult_4x4(const float a[4][4], const float b[4][4], float out[4][4]);
void dsp_mat_inv_4x4(const float in[4][4], float out[4][4]);
void dsp_mat_trans_4x4(const float in[4][4], float out[4][4]);
void dsp_mat_mult_5x5(const float a[5][5], const float b[5][5], float out[5][5]);
void dsp_mat_inv_5x5(const float in[5][5], float out[5][5]);
void dsp_mat_trans_5x5(const float in[5][5], float out[5][5]);
void dsp_mat_mult_6x6(const float a[6][6], const float b[6][6], float out[6][6]);
void dsp_mat_inv_6x6(const float in[6][6], float out[6][6]);
void dsp_mat_trans_6x6(const float in[6][6], float out[6][6]);
void dsp_mat_mult_7x7(const float a[7][7], const float b[7][7], float out[7][7]);
void dsp_mat_inv_7x7(const float in[7][7], float out[7][7]);
void dsp_mat_trans_7x7(const float in[7][7], float out[7][7]);
void dsp_mat_mult_8x8(const float a[8][8], const float b[8][8], float out[8][8]);
void dsp_mat_inv_8x8(const float in[8][8], float out[8][8]);
void dsp_mat_trans_8x8(const float in[8][8], float out[8][8]);
void dsp_mat_mult_9x9(const float a[9][9], const float b[9][9], float out[9][9]);
void dsp_mat_inv_9x9(const float in[9][9], float out[9][9]);
void dsp_mat_trans_9x9(const float in[9][9], float out[9][9]);
void dsp_mat_mult_10x10(const float a[10][10], const float b[10][10], float out[10][10]);
void dsp_mat_inv_10x10(const float in[10][10], float out[10][10]);
void dsp_mat_trans_10x10(const float in[10][10], float out[10][10]);
void dsp_mat_mult_11x11(const float a[11][11], const float b[11][11], float out[11][11]);
void dsp_mat_inv_11x11(const float in[11][11], float out[11][11]);
void dsp_mat_trans_11x11(const float in[11][11], float out[11][11]);
void dsp_mat_mult_12x12(const float a[12][12], const float b[12][12], float out[12][12]);
void dsp_mat_inv_12x12(const float in[12][12], float out[12][12]);
void dsp_mat_trans_12x12(const float in[12][12], float out[12][12]);
void dsp_mat_mult_13x13(const float a[13][13], const float b[13][13], float out[13][13]);
void dsp_mat_inv_13x13(const float in[13][13], float out[13][13]);
void dsp_mat_trans_13x13(const float in[13][13], float out[13][13]);
void dsp_mat_mult_14x14(const float a[14][14], const float b[14][14], float out[14][14]);
void dsp_mat_inv_14x14(const float in[14][14], float out[14][14]);
void dsp_mat_trans_14x14(const float in[14][14], float out[14][14]);
void dsp_mat_mult_15x15(const float a[15][15], const float b[15][15], float out[15][15]);
void dsp_mat_inv_15x15(const float in[15][15], float out[15][15]);
void dsp_mat_trans_15x15(const float in[15][15], float out[15][15]);
void dsp_mat_mult_16x16(const float a[16][16], const float b[16][16], float out[16][16]);
void dsp_mat_inv_16x16(const float in[16][16], float out[16][16]);
void dsp_mat_trans_16x16(const float in[16][16], float out[16][16]);
void dsp_mat_mult_17x17(const float a[17][17], const float b[17][17], float out[17][17]);
void dsp_mat_inv_17x17(const float in[17][17], float out[17][17]);
void dsp_mat_trans_17x17(const float in[17][17], float out[17][17]);
void dsp_mat_mult_18x18(const float a[18][18], const float b[18][18], float out[18][18]);
void dsp_mat_inv_18x18(const float in[18][18], float out[18][18]);
void dsp_mat_trans_18x18(const float in[18][18], float out[18][18]);
void dsp_mat_mult_19x19(const float a[19][19], const float b[19][19], float out[19][19]);
void dsp_mat_inv_19x19(const float in[19][19], float out[19][19]);
void dsp_mat_trans_19x19(const float in[19][19], float out[19][19]);
void dsp_mat_mult_20x20(const float a[20][20], const float b[20][20], float out[20][20]);
void dsp_mat_inv_20x20(const float in[20][20], float out[20][20]);
void dsp_mat_trans_20x20(const float in[20][20], float out[20][20]);
void dsp_mat_mult_21x21(const float a[21][21], const float b[21][21], float out[21][21]);
void dsp_mat_inv_21x21(const float in[21][21], float out[21][21]);
void dsp_mat_trans_21x21(const float in[21][21], float out[21][21]);
void dsp_mat_mult_22x22(const float a[22][22], const float b[22][22], float out[22][22]);
void dsp_mat_inv_22x22(const float in[22][22], float out[22][22]);
void dsp_mat_trans_22x22(const float in[22][22], float out[22][22]);
void dsp_mat_mult_23x23(const float a[23][23], const float b[23][23], float out[23][23]);
void dsp_mat_inv_23x23(const float in[23][23], float out[23][23]);
void dsp_mat_trans_23x23(const float in[23][23], float out[23][23]);
void dsp_mat_mult_24x24(const float a[24][24], const float b[24][24], float out[24][24]);
void dsp_mat_inv_24x24(const float in[24][24], float out[24][24]);
void dsp_mat_trans_24x24(const float in[24][24], float out[24][24]);
void dsp_mat_mult_25x25(const float a[25][25], const float b[25][25], float out[25][25]);
void dsp_mat_inv_25x25(const float in[25][25], float out[25][25]);
void dsp_mat_trans_25x25(const float in[25][25], float out[25][25]);
void dsp_mat_mult_26x26(const float a[26][26], const float b[26][26], float out[26][26]);
void dsp_mat_inv_26x26(const float in[26][26], float out[26][26]);
void dsp_mat_trans_26x26(const float in[26][26], float out[26][26]);
void dsp_mat_mult_27x27(const float a[27][27], const float b[27][27], float out[27][27]);
void dsp_mat_inv_27x27(const float in[27][27], float out[27][27]);
void dsp_mat_trans_27x27(const float in[27][27], float out[27][27]);
void dsp_mat_mult_28x28(const float a[28][28], const float b[28][28], float out[28][28]);
void dsp_mat_inv_28x28(const float in[28][28], float out[28][28]);
void dsp_mat_trans_28x28(const float in[28][28], float out[28][28]);
void dsp_mat_mult_29x29(const float a[29][29], const float b[29][29], float out[29][29]);
void dsp_mat_inv_29x29(const float in[29][29], float out[29][29]);
void dsp_mat_trans_29x29(const float in[29][29], float out[29][29]);
void dsp_mat_mult_30x30(const float a[30][30], const float b[30][30], float out[30][30]);
void dsp_mat_inv_30x30(const float in[30][30], float out[30][30]);
void dsp_mat_trans_30x30(const float in[30][30], float out[30][30]);
void dsp_mat_mult_31x31(const float a[31][31], const float b[31][31], float out[31][31]);
void dsp_mat_inv_31x31(const float in[31][31], float out[31][31]);
void dsp_mat_trans_31x31(const float in[31][31], float out[31][31]);
void dsp_mat_mult_32x32(const float a[32][32], const float b[32][32], float out[32][32]);
void dsp_mat_inv_32x32(const float in[32][32], float out[32][32]);
void dsp_mat_trans_32x32(const float in[32][32], float out[32][32]);
void dsp_mat_mult_33x33(const float a[33][33], const float b[33][33], float out[33][33]);
void dsp_mat_inv_33x33(const float in[33][33], float out[33][33]);
void dsp_mat_trans_33x33(const float in[33][33], float out[33][33]);
void dsp_mat_mult_34x34(const float a[34][34], const float b[34][34], float out[34][34]);
void dsp_mat_inv_34x34(const float in[34][34], float out[34][34]);
void dsp_mat_trans_34x34(const float in[34][34], float out[34][34]);
void dsp_mat_mult_35x35(const float a[35][35], const float b[35][35], float out[35][35]);
void dsp_mat_inv_35x35(const float in[35][35], float out[35][35]);
void dsp_mat_trans_35x35(const float in[35][35], float out[35][35]);
void dsp_mat_mult_36x36(const float a[36][36], const float b[36][36], float out[36][36]);
void dsp_mat_inv_36x36(const float in[36][36], float out[36][36]);
void dsp_mat_trans_36x36(const float in[36][36], float out[36][36]);
void dsp_mat_mult_37x37(const float a[37][37], const float b[37][37], float out[37][37]);
void dsp_mat_inv_37x37(const float in[37][37], float out[37][37]);
void dsp_mat_trans_37x37(const float in[37][37], float out[37][37]);
void dsp_mat_mult_38x38(const float a[38][38], const float b[38][38], float out[38][38]);
void dsp_mat_inv_38x38(const float in[38][38], float out[38][38]);
void dsp_mat_trans_38x38(const float in[38][38], float out[38][38]);
void dsp_mat_mult_39x39(const float a[39][39], const float b[39][39], float out[39][39]);
void dsp_mat_inv_39x39(const float in[39][39], float out[39][39]);
void dsp_mat_trans_39x39(const float in[39][39], float out[39][39]);
void dsp_mat_mult_40x40(const float a[40][40], const float b[40][40], float out[40][40]);
void dsp_mat_inv_40x40(const float in[40][40], float out[40][40]);
void dsp_mat_trans_40x40(const float in[40][40], float out[40][40]);
void dsp_mat_mult_41x41(const float a[41][41], const float b[41][41], float out[41][41]);
void dsp_mat_inv_41x41(const float in[41][41], float out[41][41]);
void dsp_mat_trans_41x41(const float in[41][41], float out[41][41]);
void dsp_mat_mult_42x42(const float a[42][42], const float b[42][42], float out[42][42]);
void dsp_mat_inv_42x42(const float in[42][42], float out[42][42]);
void dsp_mat_trans_42x42(const float in[42][42], float out[42][42]);
void dsp_mat_mult_43x43(const float a[43][43], const float b[43][43], float out[43][43]);
void dsp_mat_inv_43x43(const float in[43][43], float out[43][43]);
void dsp_mat_trans_43x43(const float in[43][43], float out[43][43]);
void dsp_mat_mult_44x44(const float a[44][44], const float b[44][44], float out[44][44]);
void dsp_mat_inv_44x44(const float in[44][44], float out[44][44]);
void dsp_mat_trans_44x44(const float in[44][44], float out[44][44]);
void dsp_mat_mult_45x45(const float a[45][45], const float b[45][45], float out[45][45]);
void dsp_mat_inv_45x45(const float in[45][45], float out[45][45]);
void dsp_mat_trans_45x45(const float in[45][45], float out[45][45]);
void dsp_mat_mult_46x46(const float a[46][46], const float b[46][46], float out[46][46]);
void dsp_mat_inv_46x46(const float in[46][46], float out[46][46]);
void dsp_mat_trans_46x46(const float in[46][46], float out[46][46]);
void dsp_mat_mult_47x47(const float a[47][47], const float b[47][47], float out[47][47]);
void dsp_mat_inv_47x47(const float in[47][47], float out[47][47]);
void dsp_mat_trans_47x47(const float in[47][47], float out[47][47]);
void dsp_mat_mult_48x48(const float a[48][48], const float b[48][48], float out[48][48]);
void dsp_mat_inv_48x48(const float in[48][48], float out[48][48]);
void dsp_mat_trans_48x48(const float in[48][48], float out[48][48]);

#ifdef __cplusplus
}
#endif
#endif
