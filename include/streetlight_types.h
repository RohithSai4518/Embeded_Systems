/**
 * @file streetlight_types.h
 * @brief Smart Automatic Street Light System - Type Definitions & Pin Configuration
 * @author Embedded Systems Engineering Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef STREETLIGHT_TYPES_H
#define STREETLIGHT_TYPES_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/* System Status Codes */
typedef enum {
    SYS_OK               =  0,
    SYS_ERR_GENERIC      = -1,
    SYS_ERR_NULL_PTR     = -2,
    SYS_ERR_INVALID_PARAM= -3,
    SYS_ERR_TIMEOUT      = -4,
    SYS_ERR_HARDWARE     = -5
} sys_status_t;

/* System Operating Mode */
typedef enum {
    MODE_AUTO = 0,          /**< Automatic LDR + PIR sensor-driven mode */
    MODE_MANUAL_FORCE_ON,   /**< Manual override: 100% Brightness always */
    MODE_MANUAL_FORCE_OFF   /**< Manual override: 0% Brightness always */
} system_mode_t;

/* Street Light State Machine States */
typedef enum {
    STATE_DAY_IDLE = 0,         /**< Daytime: Ambient light > threshold -> Light OFF (0%) */
    STATE_NIGHT_STANDBY,        /**< Nighttime without motion -> Light DIMMED (25%) */
    STATE_NIGHT_MOTION_ACTIVE   /**< Nighttime with motion -> Light FULL (100%) */
} streetlight_state_t;

/* Threshold Configuration Parameters */
typedef struct {
    float lux_night_threshold;      /**< Below this Lux value is considered Night (e.g. 150.0 Lux) */
    float lux_day_threshold;        /**< Above this Lux value is considered Day (e.g. 250.0 Lux for hysteresis) */
    uint16_t motion_hold_seconds;   /**< Seconds to stay at 100% brightness after motion stops (e.g. 15s) */
    uint8_t standby_brightness_pct; /**< Dimmed standby brightness % (e.g. 25%) */
    uint8_t active_brightness_pct;  /**< Motion active brightness % (e.g. 100%) */
} streetlight_config_t;

/* Real-Time Telemetry & Metrics */
typedef struct {
    float ambient_lux;              /**< Current LDR light level in Lux */
    bool motion_detected;           /**< Current PIR sensor digital reading */
    uint16_t motion_timer_remaining;/**< Countdown timer in seconds */
    uint8_t current_pwm_duty_pct;   /**< Current LED brightness (0 - 100%) */
    bool relay_energized;           /**< AC Mains / High-power Relay state */
    streetlight_state_t state;      /**< Current FSM state */
    system_mode_t mode;             /**< Operating mode (AUTO / MANUAL) */
    float total_operating_hours;    /**< Total runtime hours */
    float energy_saved_kwh;         /**< Computed kWh saved compared to traditional lamps */
    float energy_savings_percent;   /**< % energy saved (e.g. 68.5%) */
} streetlight_telemetry_t;

/* Pin Mapping Definitions (Microcontroller GPIO & ADC) */
#define PIN_ADC_LDR_SENSOR      0   /* ADC Channel 0 */
#define PIN_GPIO_PIR_MOTION     2   /* Digital Input Pin D2 (EXTI) */
#define PIN_PWM_LED_DIMMER      9   /* Timer 1 PWM Pin D9 */
#define PIN_RELAY_CONTROL       8   /* Digital Output Pin D8 */
#define PIN_I2C_SDA             4   /* I2C Data Pin A4 */
#define PIN_I2C_SCL             5   /* I2C Clock Pin A5 */

#ifdef __cplusplus
}
#endif

#endif /* STREETLIGHT_TYPES_H */
