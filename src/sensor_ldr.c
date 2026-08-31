/**
 * @file sensor_ldr.c
 * @brief LDR Sensor Implementation with Analog Conversion & Lux Formula
 * @author Embedded Systems Engineering Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "sensor_ldr.h"
#include <math.h>

#define ADC_VREF 5.0f           /* 5V Reference */
#define ADC_RESOLUTION 1023.0f  /* 10-bit ADC */
#define R_PULLDOWN 10000.0f     /* 10k fixed resistor in divider */
#define LDR_CALIB_LUX_CONST 500.0f

static float s_simulated_lux = 450.0f; /* Default Daylight */

sys_status_t sensor_ldr_init(void) {
    return SYS_OK;
}

sys_status_t sensor_ldr_read_raw(uint16_t *out_raw_adc) {
    if (!out_raw_adc) return SYS_ERR_NULL_PTR;

    /* Simulate ADC count from current Lux level */
    float v_out = (s_simulated_lux / (s_simulated_lux + 100.0f)) * ADC_VREF;
    *out_raw_adc = (uint16_t)((v_out / ADC_VREF) * ADC_RESOLUTION);
    return SYS_OK;
}

sys_status_t sensor_ldr_read_voltage(float *out_voltage_v) {
    if (!out_voltage_v) return SYS_ERR_NULL_PTR;

    uint16_t raw = 0;
    sensor_ldr_read_raw(&raw);
    *out_voltage_v = ((float)raw / ADC_RESOLUTION) * ADC_VREF;
    return SYS_OK;
}

sys_status_t sensor_ldr_read_lux(float *out_lux) {
    if (!out_lux) return SYS_ERR_NULL_PTR;
    *out_lux = s_simulated_lux;
    return SYS_OK;
}

void sensor_ldr_set_simulated_lux(float lux) {
    if (lux < 0.0f) lux = 0.0f;
    s_simulated_lux = lux;
}
