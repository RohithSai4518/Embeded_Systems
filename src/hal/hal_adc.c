/**
 * @file hal_adc.c
 * @brief Hardware Abstraction Layer - Multi-Channel ADC Driver
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "hal_adc.h"
#include <string.h>

typedef struct {
    uint16_t raw_samples[HAL_ADC_CH_COUNT];
    float voltages[HAL_ADC_CH_COUNT];
    hal_adc_config_t config;
    bool is_initialized;
} adc_internal_t;

static adc_internal_t g_adc;

/* Nominal scaling coefficients: 12-bit ADC (0-4095) with 3.3V reference */
#define ADC_VREF 3.3f
#define ADC_MAX_COUNT 4095.0f
#define VBAT_DIVIDER_RATIO 11.0f    /* 10:1 resistor divider -> 0 to 36.3V range */
#define CURRENT_SENSE_GAIN 50.0f    /* 50A / V hall sensor */

pulse_status_t hal_adc_init(const hal_adc_config_t *config) {
    if (!config) return PULSE_ERROR_INVALID_PARAM;

    memset(&g_adc, 0, sizeof(g_adc));
    g_adc.config = *config;
    g_adc.is_initialized = true;

    /* Set default baseline voltages for simulation (4S LiPo ~ 16.0V, 5.2A current) */
    g_adc.voltages[HAL_ADC_CH_VBAT] = 16.2f;
    g_adc.voltages[HAL_ADC_CH_IBAT] = 4.8f;
    g_adc.voltages[HAL_ADC_CH_RSSI] = 0.95f; /* 95% */
    g_adc.voltages[HAL_ADC_CH_AIRSPEED] = 15.4f; /* m/s */
    g_adc.voltages[HAL_ADC_CH_MCU_TEMP] = 42.5f; /* Celsius */
    g_adc.voltages[HAL_ADC_CH_VREF_INT] = 1.20f;

    return PULSE_OK;
}

pulse_status_t hal_adc_read_raw(hal_adc_channel_t channel, uint16_t *out_raw) {
    if (channel >= HAL_ADC_CH_COUNT || !out_raw) return PULSE_ERROR_INVALID_PARAM;
    if (!g_adc.is_initialized) return PULSE_ERROR_NOT_INITIALIZED;

    *out_raw = (uint16_t)((g_adc.voltages[channel] / (ADC_VREF * VBAT_DIVIDER_RATIO)) * ADC_MAX_COUNT);
    return PULSE_OK;
}

pulse_status_t hal_adc_read_voltage(hal_adc_channel_t channel, float *out_volts) {
    if (channel >= HAL_ADC_CH_COUNT || !out_volts) return PULSE_ERROR_INVALID_PARAM;
    if (!g_adc.is_initialized) return PULSE_ERROR_NOT_INITIALIZED;

    *out_volts = g_adc.voltages[channel];
    return PULSE_OK;
}

pulse_status_t hal_adc_read_all_voltages(float *voltages_out, uint8_t max_channels) {
    if (!voltages_out || max_channels == 0) return PULSE_ERROR_INVALID_PARAM;
    if (!g_adc.is_initialized) return PULSE_ERROR_NOT_INITIALIZED;

    uint8_t count = PULSE_MIN(max_channels, HAL_ADC_CH_COUNT);
    for (uint8_t i = 0; i < count; ++i) {
        voltages_out[i] = g_adc.voltages[i];
    }
    return PULSE_OK;
}

float hal_adc_get_battery_voltage(void) {
    return g_adc.voltages[HAL_ADC_CH_VBAT];
}

float hal_adc_get_battery_current(void) {
    return g_adc.voltages[HAL_ADC_CH_IBAT];
}

void hal_adc_set_simulated_values(float vbat, float ibat, float temp_c) {
    g_adc.voltages[HAL_ADC_CH_VBAT] = vbat;
    g_adc.voltages[HAL_ADC_CH_IBAT] = ibat;
    g_adc.voltages[HAL_ADC_CH_MCU_TEMP] = temp_c;
}
