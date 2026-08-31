/**
 * @file hal_adc.h
 * @brief Hardware Abstraction Layer - Multi-Channel ADC with DMA Scanning
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef HAL_ADC_H
#define HAL_ADC_H

#include "pulse_types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    HAL_ADC_CH_VBAT = 0,        /**< Battery Voltage Sense */
    HAL_ADC_CH_IBAT,            /**< Battery Current Sense */
    HAL_ADC_CH_RSSI,            /**< Radio Signal Strength Analog Pin */
    HAL_ADC_CH_AIRSPEED,        /**< Pitot Tube Differential Pressure */
    HAL_ADC_CH_MCU_TEMP,        /**< Internal Temperature Sensor */
    HAL_ADC_CH_VREF_INT,        /**< Internal Reference Voltage (1.2V) */
    HAL_ADC_CH_COUNT
} hal_adc_channel_t;

typedef struct {
    uint32_t sample_rate_hz;
    uint8_t oversampling_ratio; /**< 1x, 4x, 16x, 64x */
    bool enable_continuous_dma;
} hal_adc_config_t;

pulse_status_t hal_adc_init(const hal_adc_config_t *config);
pulse_status_t hal_adc_read_raw(hal_adc_channel_t channel, uint16_t *out_raw);
pulse_status_t hal_adc_read_voltage(hal_adc_channel_t channel, float *out_volts);
pulse_status_t hal_adc_read_all_voltages(float *voltages_out, uint8_t max_channels);
float hal_adc_get_battery_voltage(void);
float hal_adc_get_battery_current(void);

#ifdef __cplusplus
}
#endif

#endif /* HAL_ADC_H */
