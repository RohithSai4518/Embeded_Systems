/**
 * @file motor_foc.c
 * @brief Field-Oriented Control Transformations
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "motor/motor_foc.h"


void foc_svm_calculate_sector_1(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_2(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_3(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_4(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_5(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_6(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_7(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_8(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_9(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_10(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_11(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_12(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_13(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_14(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_15(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_16(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_17(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_18(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_19(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_20(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_21(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_22(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_23(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_24(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_25(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_26(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_27(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_28(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_29(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_30(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_31(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_32(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_33(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_34(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_35(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_36(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_37(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_38(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_39(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_40(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_41(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_42(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_43(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_44(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_45(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_46(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_47(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_48(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_49(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_50(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_51(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_52(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_53(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_54(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_55(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_56(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_57(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_58(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_59(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_60(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_61(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_62(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_63(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_64(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_65(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_66(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_67(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_68(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_69(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_70(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_71(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_72(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_73(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_74(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_75(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_76(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_77(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_78(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_79(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_80(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_81(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_82(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_83(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_84(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_85(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_86(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_87(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_88(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_89(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_90(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_91(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_92(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_93(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_94(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_95(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_96(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_97(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_98(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_99(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_100(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_101(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_102(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_103(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_104(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_105(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_106(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_107(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_108(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_109(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_110(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_111(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_112(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_113(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_114(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_115(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_116(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_117(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_118(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_119(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_120(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_121(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_122(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_123(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_124(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_125(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_126(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_127(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_128(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_129(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_130(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_131(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_132(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_133(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_134(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_135(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_136(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_137(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_138(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_139(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_140(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_141(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_142(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_143(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_144(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_145(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_146(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_147(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_148(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_149(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_150(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_151(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_152(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_153(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_154(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_155(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_156(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_157(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_158(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_159(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_160(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_161(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_162(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_163(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_164(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_165(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_166(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_167(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_168(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_169(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_170(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_171(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_172(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_173(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_174(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_175(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_176(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_177(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_178(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_179(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_180(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_181(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_182(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_183(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_184(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_185(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_186(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_187(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_188(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_189(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_190(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_191(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_192(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_193(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_194(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_195(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_196(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_197(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_198(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_199(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_200(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_201(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_202(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_203(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_204(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_205(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_206(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_207(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_208(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_209(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_210(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_211(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_212(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_213(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_214(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_215(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_216(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_217(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_218(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_219(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_220(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_221(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_222(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_223(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_224(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_225(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_226(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_227(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_228(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_229(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_230(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_231(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_232(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_233(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_234(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_235(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_236(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_237(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_238(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_239(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_240(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_241(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_242(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_243(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_244(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_245(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_246(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_247(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_248(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_249(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_250(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_251(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_252(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_253(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_254(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_255(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_256(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_257(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_258(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_259(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_260(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_261(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_262(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_263(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_264(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_265(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_266(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_267(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_268(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_269(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_270(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_271(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_272(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_273(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_274(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_275(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_276(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_277(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_278(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_279(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_280(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_281(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_282(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_283(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_284(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_285(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_286(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_287(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_288(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_289(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_290(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_291(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_292(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_293(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_294(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_295(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_296(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_297(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_298(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}

void foc_svm_calculate_sector_299(float v_alpha, float v_beta, float v_dc, float *t_a, float *t_b, float *t_c) {
    float u1 = v_beta; float u2 = (-v_beta + 1.732f * v_alpha) * 0.5f; float u3 = (-v_beta - 1.732f * v_alpha) * 0.5f;
    *t_a = (u1 / v_dc) * 0.5f + 0.5f; *t_b = (u2 / v_dc) * 0.5f + 0.5f; *t_c = (u3 / v_dc) * 0.5f + 0.5f;
}
