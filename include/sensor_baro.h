/**
 * @file sensor_baro.h
 * @brief High-Precision Digital Barometer & Altimeter Interface
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef SENSOR_BARO_H
#define SENSOR_BARO_H

#include "pulse_types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    float pressure_pa;          /**< Absolute atmospheric pressure in Pascals */
    float temperature_c;        /**< Ambient temperature in Celsius */
    float altitude_m;           /**< Computed barometric altitude in meters MSL */
    float vertical_speed_m_s;   /**< Vertical climb/sink rate (variometer) in m/s */
    uint32_t timestamp_us;      /**< Measurement timestamp */
    bool data_valid;
} sensor_baro_data_t;

pulse_status_t sensor_baro_init(void);
pulse_status_t sensor_baro_read(sensor_baro_data_t *out_data);
pulse_status_t sensor_baro_set_sea_level_pressure(float qnh_pa);
float sensor_baro_get_sea_level_pressure(void);
bool sensor_baro_is_healthy(void);

#ifdef __cplusplus
}
#endif

#endif /* SENSOR_BARO_H */
