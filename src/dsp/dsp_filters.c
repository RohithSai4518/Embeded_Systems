/**
 * @file dsp_filters.c
 * @brief Digital Signal Processing - Filter Implementations
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "dsp_filters.h"
#include <string.h>
#include <math.h>

#define M_PI_F 3.14159265358979323846f

/* 1st Order Low-Pass Filter */
void dsp_lpf1_init(dsp_lpf1_t *filter, float cutoff_freq_hz, float sample_rate_hz) {
    if (!filter || sample_rate_hz <= 0.0f || cutoff_freq_hz <= 0.0f) return;

    float rc = 1.0f / (2.0f * M_PI_F * cutoff_freq_hz);
    float dt = 1.0f / sample_rate_hz;
    filter->alpha = dt / (rc + dt);
    filter->prev_output = 0.0f;
    filter->initialized = false;
}

float dsp_lpf1_update(dsp_lpf1_t *filter, float input) {
    if (!filter) return input;

    if (!filter->initialized) {
        filter->prev_output = input;
        filter->initialized = true;
        return input;
    }

    filter->prev_output += filter->alpha * (input - filter->prev_output);
    return filter->prev_output;
}

void dsp_lpf1_reset(dsp_lpf1_t *filter, float initial_val) {
    if (!filter) return;
    filter->prev_output = initial_val;
    filter->initialized = true;
}

/* 2nd Order Biquad Filter (Direct Form II Transposed) */
void dsp_biquad_init(dsp_biquad_t *filter, dsp_biquad_type_t type, float center_freq_hz, float sample_rate_hz, float q_factor) {
    if (!filter || sample_rate_hz <= 0.0f || center_freq_hz <= 0.0f || q_factor <= 0.0f) return;

    float omega = 2.0f * M_PI_F * center_freq_hz / sample_rate_hz;
    float sn = sinf(omega);
    float cs = cosf(omega);
    float alpha = sn / (2.0f * q_factor);

    float a0 = 1.0f + alpha;

    switch (type) {
        case DSP_BIQUAD_LOWPASS:
            filter->b0 = ((1.0f - cs) / 2.0f) / a0;
            filter->b1 = (1.0f - cs) / a0;
            filter->b2 = ((1.0f - cs) / 2.0f) / a0;
            filter->a1 = (-2.0f * cs) / a0;
            filter->a2 = (1.0f - alpha) / a0;
            break;

        case DSP_BIQUAD_HIGHPASS:
            filter->b0 = ((1.0f + cs) / 2.0f) / a0;
            filter->b1 = (-(1.0f + cs)) / a0;
            filter->b2 = ((1.0f + cs) / 2.0f) / a0;
            filter->a1 = (-2.0f * cs) / a0;
            filter->a2 = (1.0f - alpha) / a0;
            break;

        case DSP_BIQUAD_NOTCH:
            filter->b0 = 1.0f / a0;
            filter->b1 = (-2.0f * cs) / a0;
            filter->b2 = 1.0f / a0;
            filter->a1 = (-2.0f * cs) / a0;
            filter->a2 = (1.0f - alpha) / a0;
            break;

        default:
            filter->b0 = 1.0f;
            filter->b1 = 0.0f;
            filter->b2 = 0.0f;
            filter->a1 = 0.0f;
            filter->a2 = 0.0f;
            break;
    }

    filter->d1 = 0.0f;
    filter->d2 = 0.0f;
}

float dsp_biquad_update(dsp_biquad_t *filter, float input) {
    if (!filter) return input;

    /* Direct Form II Transposed:
       y[n] = b0 * x[n] + d1
       d1 = b1 * x[n] - a1 * y[n] + d2
       d2 = b2 * x[n] - a2 * y[n]
    */
    float output = filter->b0 * input + filter->d1;
    filter->d1 = filter->b1 * input - filter->a1 * output + filter->d2;
    filter->d2 = filter->b2 * input - filter->a2 * output;

    return output;
}

void dsp_biquad_reset(dsp_biquad_t *filter) {
    if (!filter) return;
    filter->d1 = 0.0f;
    filter->d2 = 0.0f;
}

/* Moving Average Filter */
void dsp_moving_avg_init(dsp_moving_avg_t *filter, float *buffer_storage, uint16_t size) {
    if (!filter || !buffer_storage || size == 0) return;

    filter->buffer = buffer_storage;
    filter->size = size;
    filter->index = 0;
    filter->sum = 0.0f;
    filter->count = 0;
    memset(filter->buffer, 0, sizeof(float) * size);
}

float dsp_moving_avg_update(dsp_moving_avg_t *filter, float input) {
    if (!filter || !filter->buffer || filter->size == 0) return input;

    filter->sum -= filter->buffer[filter->index];
    filter->buffer[filter->index] = input;
    filter->sum += input;

    filter->index = (filter->index + 1) % filter->size;
    if (filter->count < filter->size) {
        filter->count++;
    }

    return (filter->sum / (float)filter->count);
}

void dsp_moving_avg_reset(dsp_moving_avg_t *filter) {
    if (!filter || !filter->buffer) return;
    filter->index = 0;
    filter->sum = 0.0f;
    filter->count = 0;
    memset(filter->buffer, 0, sizeof(float) * filter->size);
}
