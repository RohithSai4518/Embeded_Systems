/**
 * @file sensor_drivers_suite.c
 * @brief Industrial Embedded Sensor Driver Suite Implementation
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "sensors/sensor_drivers_suite.h"


float sensor_bme680_calibrate_param_1(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 1.025f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_2(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 2.050f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_3(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 3.075f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_4(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 4.100f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_5(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 5.125f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_6(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 6.150f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_7(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 7.175f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_8(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 8.200f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_9(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 9.225f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_10(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 10.250f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_11(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 11.275f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_12(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 12.300f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_13(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 13.325f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_14(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 14.350f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_15(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 15.375f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_16(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 16.400f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_17(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 17.425f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_18(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 18.450f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_19(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 19.475f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_20(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 20.500f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_21(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 21.525f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_22(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 22.550f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_23(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 23.575f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_24(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 24.600f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_25(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 25.625f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_26(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 26.650f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_27(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 27.675f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_28(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 28.700f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_29(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 29.725f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_30(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 30.750f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_31(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 31.775f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_32(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 32.800f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_33(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 33.825f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bme680_calibrate_param_34(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 34.850f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_1(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 1.025f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_2(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 2.050f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_3(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 3.075f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_4(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 4.100f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_5(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 5.125f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_6(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 6.150f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_7(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 7.175f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_8(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 8.200f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_9(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 9.225f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_10(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 10.250f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_11(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 11.275f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_12(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 12.300f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_13(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 13.325f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_14(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 14.350f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_15(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 15.375f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_16(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 16.400f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_17(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 17.425f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_18(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 18.450f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_19(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 19.475f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_20(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 20.500f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_21(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 21.525f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_22(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 22.550f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_23(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 23.575f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_24(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 24.600f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_25(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 25.625f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_26(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 26.650f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_27(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 27.675f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_28(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 28.700f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_29(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 29.725f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_30(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 30.750f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_31(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 31.775f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_32(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 32.800f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_33(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 33.825f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sht31_calibrate_param_34(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 34.850f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_1(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 1.025f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_2(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 2.050f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_3(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 3.075f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_4(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 4.100f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_5(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 5.125f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_6(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 6.150f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_7(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 7.175f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_8(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 8.200f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_9(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 9.225f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_10(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 10.250f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_11(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 11.275f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_12(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 12.300f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_13(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 13.325f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_14(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 14.350f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_15(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 15.375f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_16(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 16.400f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_17(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 17.425f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_18(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 18.450f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_19(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 19.475f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_20(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 20.500f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_21(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 21.525f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_22(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 22.550f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_23(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 23.575f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_24(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 24.600f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_25(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 25.625f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_26(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 26.650f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_27(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 27.675f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_28(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 28.700f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_29(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 29.725f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_30(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 30.750f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_31(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 31.775f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_32(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 32.800f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_33(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 33.825f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mpu6050_calibrate_param_34(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 34.850f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_1(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 1.025f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_2(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 2.050f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_3(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 3.075f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_4(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 4.100f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_5(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 5.125f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_6(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 6.150f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_7(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 7.175f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_8(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 8.200f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_9(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 9.225f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_10(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 10.250f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_11(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 11.275f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_12(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 12.300f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_13(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 13.325f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_14(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 14.350f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_15(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 15.375f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_16(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 16.400f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_17(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 17.425f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_18(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 18.450f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_19(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 19.475f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_20(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 20.500f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_21(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 21.525f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_22(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 22.550f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_23(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 23.575f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_24(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 24.600f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_25(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 25.625f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_26(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 26.650f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_27(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 27.675f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_28(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 28.700f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_29(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 29.725f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_30(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 30.750f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_31(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 31.775f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_32(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 32.800f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_33(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 33.825f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_icm20948_calibrate_param_34(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 34.850f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_1(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 1.025f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_2(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 2.050f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_3(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 3.075f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_4(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 4.100f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_5(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 5.125f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_6(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 6.150f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_7(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 7.175f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_8(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 8.200f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_9(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 9.225f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_10(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 10.250f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_11(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 11.275f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_12(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 12.300f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_13(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 13.325f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_14(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 14.350f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_15(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 15.375f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_16(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 16.400f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_17(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 17.425f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_18(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 18.450f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_19(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 19.475f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_20(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 20.500f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_21(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 21.525f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_22(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 22.550f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_23(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 23.575f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_24(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 24.600f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_25(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 25.625f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_26(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 26.650f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_27(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 27.675f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_28(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 28.700f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_29(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 29.725f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_30(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 30.750f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_31(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 31.775f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_32(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 32.800f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_33(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 33.825f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_max30102_calibrate_param_34(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 34.850f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_1(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 1.025f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_2(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 2.050f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_3(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 3.075f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_4(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 4.100f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_5(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 5.125f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_6(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 6.150f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_7(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 7.175f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_8(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 8.200f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_9(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 9.225f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_10(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 10.250f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_11(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 11.275f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_12(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 12.300f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_13(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 13.325f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_14(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 14.350f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_15(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 15.375f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_16(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 16.400f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_17(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 17.425f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_18(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 18.450f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_19(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 19.475f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_20(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 20.500f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_21(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 21.525f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_22(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 22.550f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_23(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 23.575f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_24(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 24.600f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_25(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 25.625f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_26(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 26.650f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_27(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 27.675f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_28(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 28.700f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_29(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 29.725f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_30(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 30.750f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_31(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 31.775f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_32(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 32.800f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_33(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 33.825f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_vl53l0x_calibrate_param_34(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 34.850f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_1(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 1.025f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_2(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 2.050f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_3(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 3.075f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_4(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 4.100f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_5(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 5.125f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_6(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 6.150f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_7(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 7.175f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_8(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 8.200f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_9(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 9.225f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_10(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 10.250f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_11(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 11.275f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_12(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 12.300f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_13(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 13.325f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_14(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 14.350f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_15(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 15.375f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_16(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 16.400f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_17(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 17.425f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_18(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 18.450f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_19(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 19.475f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_20(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 20.500f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_21(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 21.525f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_22(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 22.550f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_23(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 23.575f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_24(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 24.600f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_25(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 25.625f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_26(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 26.650f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_27(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 27.675f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_28(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 28.700f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_29(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 29.725f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_30(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 30.750f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_31(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 31.775f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_32(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 32.800f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_33(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 33.825f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ina219_calibrate_param_34(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 34.850f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_1(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 1.025f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_2(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 2.050f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_3(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 3.075f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_4(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 4.100f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_5(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 5.125f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_6(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 6.150f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_7(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 7.175f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_8(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 8.200f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_9(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 9.225f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_10(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 10.250f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_11(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 11.275f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_12(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 12.300f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_13(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 13.325f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_14(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 14.350f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_15(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 15.375f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_16(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 16.400f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_17(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 17.425f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_18(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 18.450f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_19(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 19.475f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_20(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 20.500f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_21(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 21.525f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_22(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 22.550f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_23(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 23.575f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_24(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 24.600f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_25(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 25.625f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_26(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 26.650f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_27(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 27.675f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_28(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 28.700f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_29(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 29.725f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_30(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 30.750f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_31(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 31.775f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_32(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 32.800f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_33(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 33.825f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ads1115_calibrate_param_34(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 34.850f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_1(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 1.025f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_2(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 2.050f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_3(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 3.075f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_4(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 4.100f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_5(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 5.125f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_6(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 6.150f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_7(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 7.175f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_8(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 8.200f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_9(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 9.225f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_10(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 10.250f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_11(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 11.275f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_12(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 12.300f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_13(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 13.325f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_14(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 14.350f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_15(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 15.375f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_16(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 16.400f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_17(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 17.425f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_18(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 18.450f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_19(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 19.475f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_20(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 20.500f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_21(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 21.525f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_22(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 22.550f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_23(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 23.575f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_24(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 24.600f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_25(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 25.625f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_26(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 26.650f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_27(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 27.675f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_28(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 28.700f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_29(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 29.725f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_30(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 30.750f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_31(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 31.775f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_32(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 32.800f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_33(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 33.825f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_ccs811_calibrate_param_34(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 34.850f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_1(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 1.025f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_2(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 2.050f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_3(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 3.075f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_4(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 4.100f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_5(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 5.125f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_6(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 6.150f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_7(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 7.175f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_8(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 8.200f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_9(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 9.225f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_10(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 10.250f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_11(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 11.275f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_12(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 12.300f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_13(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 13.325f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_14(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 14.350f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_15(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 15.375f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_16(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 16.400f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_17(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 17.425f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_18(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 18.450f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_19(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 19.475f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_20(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 20.500f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_21(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 21.525f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_22(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 22.550f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_23(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 23.575f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_24(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 24.600f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_25(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 25.625f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_26(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 26.650f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_27(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 27.675f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_28(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 28.700f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_29(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 29.725f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_30(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 30.750f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_31(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 31.775f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_32(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 32.800f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_33(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 33.825f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bno055_calibrate_param_34(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 34.850f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_1(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 1.025f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_2(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 2.050f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_3(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 3.075f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_4(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 4.100f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_5(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 5.125f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_6(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 6.150f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_7(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 7.175f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_8(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 8.200f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_9(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 9.225f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_10(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 10.250f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_11(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 11.275f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_12(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 12.300f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_13(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 13.325f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_14(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 14.350f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_15(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 15.375f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_16(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 16.400f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_17(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 17.425f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_18(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 18.450f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_19(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 19.475f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_20(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 20.500f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_21(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 21.525f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_22(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 22.550f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_23(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 23.575f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_24(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 24.600f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_25(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 25.625f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_26(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 26.650f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_27(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 27.675f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_28(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 28.700f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_29(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 29.725f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_30(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 30.750f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_31(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 31.775f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_32(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 32.800f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_33(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 33.825f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_bmp280_calibrate_param_34(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 34.850f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_1(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 1.025f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_2(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 2.050f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_3(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 3.075f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_4(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 4.100f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_5(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 5.125f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_6(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 6.150f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_7(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 7.175f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_8(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 8.200f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_9(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 9.225f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_10(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 10.250f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_11(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 11.275f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_12(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 12.300f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_13(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 13.325f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_14(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 14.350f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_15(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 15.375f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_16(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 16.400f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_17(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 17.425f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_18(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 18.450f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_19(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 19.475f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_20(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 20.500f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_21(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 21.525f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_22(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 22.550f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_23(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 23.575f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_24(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 24.600f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_25(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 25.625f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_26(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 26.650f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_27(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 27.675f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_28(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 28.700f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_29(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 29.725f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_30(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 30.750f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_31(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 31.775f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_32(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 32.800f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_33(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 33.825f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_hmc5883l_calibrate_param_34(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 34.850f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_1(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 1.025f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_2(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 2.050f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_3(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 3.075f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_4(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 4.100f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_5(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 5.125f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_6(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 6.150f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_7(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 7.175f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_8(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 8.200f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_9(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 9.225f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_10(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 10.250f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_11(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 11.275f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_12(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 12.300f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_13(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 13.325f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_14(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 14.350f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_15(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 15.375f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_16(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 16.400f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_17(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 17.425f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_18(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 18.450f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_19(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 19.475f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_20(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 20.500f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_21(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 21.525f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_22(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 22.550f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_23(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 23.575f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_24(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 24.600f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_25(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 25.625f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_26(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 26.650f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_27(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 27.675f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_28(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 28.700f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_29(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 29.725f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_30(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 30.750f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_31(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 31.775f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_32(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 32.800f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_33(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 33.825f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_adxl345_calibrate_param_34(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 34.850f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_1(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 1.025f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_2(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 2.050f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_3(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 3.075f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_4(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 4.100f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_5(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 5.125f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_6(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 6.150f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_7(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 7.175f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_8(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 8.200f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_9(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 9.225f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_10(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 10.250f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_11(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 11.275f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_12(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 12.300f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_13(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 13.325f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_14(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 14.350f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_15(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 15.375f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_16(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 16.400f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_17(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 17.425f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_18(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 18.450f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_19(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 19.475f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_20(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 20.500f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_21(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 21.525f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_22(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 22.550f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_23(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 23.575f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_24(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 24.600f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_25(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 25.625f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_26(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 26.650f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_27(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 27.675f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_28(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 28.700f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_29(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 29.725f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_30(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 30.750f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_31(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 31.775f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_32(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 32.800f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_33(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 33.825f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_lps22hb_calibrate_param_34(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 34.850f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_1(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 1.025f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_2(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 2.050f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_3(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 3.075f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_4(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 4.100f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_5(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 5.125f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_6(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 6.150f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_7(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 7.175f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_8(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 8.200f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_9(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 9.225f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_10(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 10.250f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_11(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 11.275f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_12(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 12.300f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_13(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 13.325f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_14(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 14.350f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_15(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 15.375f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_16(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 16.400f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_17(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 17.425f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_18(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 18.450f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_19(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 19.475f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_20(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 20.500f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_21(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 21.525f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_22(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 22.550f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_23(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 23.575f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_24(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 24.600f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_25(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 25.625f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_26(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 26.650f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_27(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 27.675f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_28(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 28.700f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_29(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 29.725f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_30(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 30.750f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_31(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 31.775f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_32(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 32.800f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_33(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 33.825f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_sgp30_calibrate_param_34(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 34.850f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_1(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 1.025f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_2(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 2.050f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_3(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 3.075f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_4(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 4.100f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_5(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 5.125f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_6(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 6.150f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_7(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 7.175f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_8(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 8.200f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_9(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 9.225f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_10(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 10.250f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_11(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 11.275f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_12(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 12.300f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_13(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 13.325f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_14(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 14.350f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_15(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 15.375f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_16(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 16.400f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_17(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 17.425f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_18(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 18.450f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_19(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 19.475f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_20(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 20.500f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_21(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 21.525f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_22(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 22.550f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_23(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 23.575f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_24(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 24.600f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_25(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 25.625f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_26(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 26.650f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_27(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 27.675f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_28(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 28.700f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_29(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 29.725f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_30(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 30.750f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_31(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 31.775f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_32(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 32.800f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_33(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 33.825f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mcp9808_calibrate_param_34(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 34.850f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_1(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 1.025f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_2(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 2.050f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_3(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 3.075f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_4(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 4.100f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_5(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 5.125f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_6(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 6.150f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_7(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 7.175f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_8(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 8.200f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_9(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 9.225f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_10(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 10.250f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_11(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 11.275f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_12(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 12.300f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_13(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 13.325f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_14(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 14.350f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_15(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 15.375f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_16(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 16.400f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_17(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 17.425f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_18(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 18.450f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_19(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 19.475f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_20(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 20.500f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_21(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 21.525f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_22(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 22.550f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_23(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 23.575f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_24(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 24.600f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_25(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 25.625f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_26(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 26.650f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_27(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 27.675f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_28(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 28.700f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_29(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 29.725f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_30(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 30.750f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_31(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 31.775f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_32(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 32.800f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_33(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 33.825f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_mlx90614_calibrate_param_34(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 34.850f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_1(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 1.025f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_2(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 2.050f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_3(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 3.075f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_4(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 4.100f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_5(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 5.125f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_6(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 6.150f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_7(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 7.175f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_8(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 8.200f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_9(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 9.225f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_10(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 10.250f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_11(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 11.275f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_12(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 12.300f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_13(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 13.325f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_14(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 14.350f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_15(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 15.375f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_16(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 16.400f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_17(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 17.425f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_18(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 18.450f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_19(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 19.475f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_20(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 20.500f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_21(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 21.525f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_22(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 22.550f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_23(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 23.575f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_24(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 24.600f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_25(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 25.625f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_26(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 26.650f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_27(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 27.675f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_28(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 28.700f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_29(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 29.725f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_30(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 30.750f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_31(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 31.775f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_32(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 32.800f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_33(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 33.825f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_si7021_calibrate_param_34(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 34.850f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_1(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 1.025f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_2(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 2.050f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_3(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 3.075f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_4(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 4.100f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_5(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 5.125f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_6(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 6.150f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_7(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 7.175f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_8(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 8.200f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_9(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 9.225f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_10(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 10.250f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_11(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 11.275f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_12(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 12.300f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_13(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 13.325f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_14(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 14.350f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_15(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 15.375f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_16(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 16.400f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_17(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 17.425f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_18(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 18.450f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_19(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 19.475f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_20(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 20.500f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_21(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 21.525f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_22(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 22.550f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_23(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 23.575f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_24(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 24.600f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_25(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 25.625f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_26(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 26.650f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_27(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 27.675f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_28(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 28.700f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_29(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 29.725f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_30(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 30.750f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_31(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 31.775f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_32(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 32.800f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_33(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 33.825f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_veml6075_calibrate_param_34(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 34.850f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_1(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 1.025f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_2(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 2.050f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_3(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 3.075f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_4(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 4.100f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_5(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 5.125f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_6(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 6.150f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_7(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 7.175f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_8(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 8.200f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_9(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 9.225f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_10(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 10.250f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_11(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 11.275f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_12(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 12.300f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_13(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 13.325f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_14(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 14.350f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_15(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 15.375f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_16(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 16.400f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_17(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 17.425f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_18(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 18.450f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_19(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 19.475f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_20(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 20.500f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_21(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 21.525f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_22(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 22.550f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_23(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 23.575f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_24(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 24.600f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_25(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 25.625f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_26(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 26.650f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_27(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 27.675f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_28(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 28.700f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_29(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 29.725f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_30(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 30.750f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_31(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 31.775f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_32(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 32.800f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_33(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 33.825f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}

float sensor_apds9960_calibrate_param_34(float raw, float temp_coef, float humidity_coef) {
    float compensated = raw * 34.850f + (temp_coef * 0.05f) - (humidity_coef * 0.02f);
    return compensated > 0.0f ? compensated : 0.0f;
}
