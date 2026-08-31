/**
 * @file dsp_filters.h
 * @brief Digital Signal Processing - Biquad, Low-Pass, Notch & Moving Average Filters
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef DSP_FILTERS_H
#define DSP_FILTERS_H

#include "pulse_types.h"

#ifdef __cplusplus
extern "C" {
#endif

/* 1st Order Low-Pass Filter (IIR) */
typedef struct {
    float alpha;
    float prev_output;
    bool initialized;
} dsp_lpf1_t;

/* 2nd Order Biquad Filter (Direct Form II Transposed) */
typedef struct {
    float b0, b1, b2;
    float a1, a2;
    float d1, d2;
} dsp_biquad_t;

typedef enum {
    DSP_BIQUAD_LOWPASS = 0,
    DSP_BIQUAD_HIGHPASS,
    DSP_BIQUAD_NOTCH,
    DSP_BIQUAD_BANDPASS
} dsp_biquad_type_t;

/* Moving Average Filter */
typedef struct {
    float *buffer;
    uint16_t size;
    uint16_t index;
    float sum;
    uint16_t count;
} dsp_moving_avg_t;

/* LPF 1st Order Functions */
void dsp_lpf1_init(dsp_lpf1_t *filter, float cutoff_freq_hz, float sample_rate_hz);
float dsp_lpf1_update(dsp_lpf1_t *filter, float input);
void dsp_lpf1_reset(dsp_lpf1_t *filter, float initial_val);

/* Biquad Functions */
void dsp_biquad_init(dsp_biquad_t *filter, dsp_biquad_type_t type, float center_freq_hz, float sample_rate_hz, float q_factor);
float dsp_biquad_update(dsp_biquad_t *filter, float input);
void dsp_biquad_reset(dsp_biquad_t *filter);

/* Moving Average Functions */
void dsp_moving_avg_init(dsp_moving_avg_t *filter, float *buffer_storage, uint16_t size);
float dsp_moving_avg_update(dsp_moving_avg_t *filter, float input);
void dsp_moving_avg_reset(dsp_moving_avg_t *filter);

#ifdef __cplusplus
}
#endif

#endif /* DSP_FILTERS_H */
