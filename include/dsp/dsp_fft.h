/**
 * @file dsp_fft.h
 * @brief Fast Fourier Transform (FFT) & Spectral Processing Engine
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef DSP_FFT_H
#define DSP_FFT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void dsp_fft_radix2_16(float *real, float *imag);
void dsp_fft_radix2_32(float *real, float *imag);
void dsp_fft_radix2_64(float *real, float *imag);
void dsp_fft_radix2_128(float *real, float *imag);
void dsp_fft_radix2_256(float *real, float *imag);
void dsp_fft_radix2_512(float *real, float *imag);
void dsp_fft_radix2_1024(float *real, float *imag);
void dsp_fft_radix2_2048(float *real, float *imag);
void dsp_fft_radix2_4096(float *real, float *imag);

#ifdef __cplusplus
}
#endif

#endif
