/**
 * @file sensor_gps.h
 * @brief GNSS / GPS High-Dynamic Receiver & NMEA/UBX Parser Interface
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef SENSOR_GPS_H
#define SENSOR_GPS_H

#include "pulse_types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    GPS_FIX_NONE = 0,
    GPS_FIX_2D,
    GPS_FIX_3D,
    GPS_FIX_DGPS,
    GPS_FIX_RTK_FLOAT,
    GPS_FIX_RTK_FIXED
} gps_fix_type_t;

typedef struct {
    double latitude_deg;        /**< Latitude in degrees (+ = North, - = South) */
    double longitude_deg;       /**< Longitude in degrees (+ = East, - = West) */
    float altitude_msl_m;       /**< Height above Mean Sea Level in meters */
    float ground_speed_m_s;     /**< Ground speed in m/s */
    float course_over_ground_deg;/**< Track angle in degrees */
    float hdop;                 /**< Horizontal Dilution of Precision */
    float vdop;                 /**< Vertical Dilution of Precision */
    uint8_t satellites_visible;
    uint8_t satellites_used;
    gps_fix_type_t fix_type;
    uint32_t unix_epoch_time;   /**< UTC time */
    uint32_t timestamp_ms;
    bool fix_valid;
} sensor_gps_data_t;

pulse_status_t sensor_gps_init(void);
pulse_status_t sensor_gps_process_byte(uint8_t byte);
pulse_status_t sensor_gps_get_data(sensor_gps_data_t *out_data);
bool sensor_gps_has_3d_fix(void);

#ifdef __cplusplus
}
#endif

#endif /* SENSOR_GPS_H */
