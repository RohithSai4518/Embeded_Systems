/**
 * @file pulse_types.h
 * @brief AeroPulse-RTOS Core Type Definitions & Status Codes
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef PULSE_TYPES_H
#define PULSE_TYPES_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/* System Status & Error Return Codes */
typedef enum {
    PULSE_OK                    =  0,   /**< Operation completed successfully */
    PULSE_ERROR_GENERIC         = -1,   /**< Unspecified generic runtime error */
    PULSE_ERROR_NULL_POINTER    = -2,   /**< Null pointer passed to function */
    PULSE_ERROR_INVALID_PARAM   = -3,   /**< Parameter out of allowable bounds */
    PULSE_ERROR_TIMEOUT         = -4,   /**< Operation timed out */
    PULSE_ERROR_RESOURCE_BUSY   = -5,   /**< Hardware or software resource busy */
    PULSE_ERROR_NO_MEMORY       = -6,   /**< Dynamic or pool memory exhausted */
    PULSE_ERROR_QUEUE_FULL      = -7,   /**< Ring buffer / message queue is full */
    PULSE_ERROR_QUEUE_EMPTY     = -8,   /**< Ring buffer / message queue is empty */
    PULSE_ERROR_NOT_FOUND       = -9,   /**< Requested item or ID does not exist */
    PULSE_ERROR_OVERFLOW        = -10,  /**< Arithmetic or buffer overflow */
    PULSE_ERROR_UNDERFLOW       = -11,  /**< Arithmetic or buffer underflow */
    PULSE_ERROR_CRC_MISMATCH    = -12,  /**< Checksum / CRC integrity check failed */
    PULSE_ERROR_NOT_INITIALIZED = -13,  /**< Module or hardware not initialized */
    PULSE_ERROR_HARDWARE_FAULT  = -14,  /**< Hardware peripheral bus or IO error */
    PULSE_ERROR_CALIBRATION_FAIL= -15,  /**< Sensor offset/scale calibration fail */
    PULSE_ERROR_SAFETY_LOCK     = -16   /**< Safety interlocking disallows operation */
} pulse_status_t;

/* System Tick Representation (32-bit millisecond counter) */
typedef uint32_t pulse_tick_t;

#define PULSE_WAIT_FOREVER      ((pulse_tick_t)0xFFFFFFFFU)
#define PULSE_NO_WAIT           ((pulse_tick_t)0x00000000U)

/* 3D Vector float representation */
typedef struct {
    float x;
    float y;
    float z;
} vec3_f32_t;

/* 3D Vector int16 representation for raw sensors */
typedef struct {
    int16_t x;
    int16_t y;
    int16_t z;
} vec3_i16_t;

/* 4D Quaternion representation */
typedef struct {
    float w;
    float x;
    float y;
    float z;
} quat_f32_t;

/* Euler angles representation (in radians or degrees) */
typedef struct {
    float roll;     /**< Rotation about X axis */
    float pitch;    /**< Rotation about Y axis */
    float yaw;      /**< Rotation about Z axis */
} euler_f32_t;

/* Standard Min/Max/Clamp Utility Macros */
#define PULSE_MIN(a, b)             (((a) < (b)) ? (a) : (b))
#define PULSE_MAX(a, b)             (((a) > (b)) ? (a) : (b))
#define PULSE_CLAMP(val, min, max)  (PULSE_MAX((min), PULSE_MIN((val), (max))))
#define PULSE_ARRAY_SIZE(arr)       (sizeof(arr) / sizeof((arr)[0]))
#define PULSE_UNUSED(x)             ((void)(x))

#ifdef __cplusplus
}
#endif

#endif /* PULSE_TYPES_H */
