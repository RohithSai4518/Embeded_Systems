/**
 * @file sensor_ldr.h
 * @brief LDR (Light Dependent Resistor) Analog Sensor Driver & Lux Formula
 * @author Embedded Systems Engineering Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef SENSOR_LDR_H
#define SENSOR_LDR_H

#include "streetlight_types.h"

#ifdef __cplusplus
extern "C" {
#endif

sys_status_t sensor_ldr_init(void);
sys_status_t sensor_ldr_read_raw(uint16_t *out_raw_adc);
sys_status_t sensor_ldr_read_voltage(float *out_voltage_v);
sys_status_t sensor_ldr_read_lux(float *out_lux);
void sensor_ldr_set_simulated_lux(float lux);

#ifdef __cplusplus
}
#endif

#endif /* SENSOR_LDR_H */
