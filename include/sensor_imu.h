/**
 * @file sensor_imu.h
 * @brief High-Precision 6-DoF/9-DoF Inertial Measurement Unit (IMU) Interface
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef SENSOR_IMU_H
#define SENSOR_IMU_H

#include "pulse_types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    vec3_f32_t accel_m_s2;      /**< Linear acceleration in m/s^2 */
    vec3_f32_t gyro_rad_s;      /**< Angular velocity in radians/sec */
    vec3_f32_t gyro_deg_s;      /**< Angular velocity in degrees/sec */
    vec3_f32_t mag_gauss;       /**< Magnetic field in Gauss */
    float temperature_c;        /**< Die temperature in Celsius */
    uint32_t timestamp_us;      /**< Sampling timestamp in microseconds */
    bool data_valid;            /**< True if checksum & self-test pass */
} sensor_imu_data_t;

typedef struct {
    vec3_f32_t accel_offset;
    vec3_f32_t accel_scale;     /**< Nominal 1.0 */
    vec3_f32_t gyro_offset;
    vec3_f32_t mag_hard_iron;
    vec3_f32_t mag_soft_iron[3];
} sensor_calibration_t;

pulse_status_t sensor_imu_init(void);
pulse_status_t sensor_imu_read(sensor_imu_data_t *out_data);
pulse_status_t sensor_imu_calibrate_gyro(uint32_t sample_count, vec3_f32_t *out_offsets);
pulse_status_t sensor_imu_set_calibration(const sensor_calibration_t *calib);
pulse_status_t sensor_imu_get_calibration(sensor_calibration_t *out_calib);
bool sensor_imu_is_healthy(void);

#ifdef __cplusplus
}
#endif

#endif /* SENSOR_IMU_H */
