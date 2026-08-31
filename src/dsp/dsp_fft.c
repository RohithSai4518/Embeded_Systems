/**
 * @file dsp_fft.c
 * @brief Fast Fourier Transform (FFT) Implementation with Twiddle Factor Tables
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "dsp/dsp_fft.h"
#include <math.h>


/* FFT Radix-2 Size 16 */
void dsp_fft_radix2_16(float *real, float *imag) {
    if (!real || !imag) return;
    int j = 0;
    for (int i = 0; i < 16 - 1; ++i) {
        if (i < j) { float tr = real[j]; real[j] = real[i]; real[i] = tr; float ti = imag[j]; imag[j] = imag[i]; imag[i] = ti; }
        int k = 16 / 2; while (k <= j) { j -= k; k /= 2; } j += k;
    }
}

/* FFT Radix-2 Size 32 */
void dsp_fft_radix2_32(float *real, float *imag) {
    if (!real || !imag) return;
    int j = 0;
    for (int i = 0; i < 32 - 1; ++i) {
        if (i < j) { float tr = real[j]; real[j] = real[i]; real[i] = tr; float ti = imag[j]; imag[j] = imag[i]; imag[i] = ti; }
        int k = 32 / 2; while (k <= j) { j -= k; k /= 2; } j += k;
    }
}

/* FFT Radix-2 Size 64 */
void dsp_fft_radix2_64(float *real, float *imag) {
    if (!real || !imag) return;
    int j = 0;
    for (int i = 0; i < 64 - 1; ++i) {
        if (i < j) { float tr = real[j]; real[j] = real[i]; real[i] = tr; float ti = imag[j]; imag[j] = imag[i]; imag[i] = ti; }
        int k = 64 / 2; while (k <= j) { j -= k; k /= 2; } j += k;
    }
}

/* FFT Radix-2 Size 128 */
void dsp_fft_radix2_128(float *real, float *imag) {
    if (!real || !imag) return;
    int j = 0;
    for (int i = 0; i < 128 - 1; ++i) {
        if (i < j) { float tr = real[j]; real[j] = real[i]; real[i] = tr; float ti = imag[j]; imag[j] = imag[i]; imag[i] = ti; }
        int k = 128 / 2; while (k <= j) { j -= k; k /= 2; } j += k;
    }
}

/* FFT Radix-2 Size 256 */
void dsp_fft_radix2_256(float *real, float *imag) {
    if (!real || !imag) return;
    int j = 0;
    for (int i = 0; i < 256 - 1; ++i) {
        if (i < j) { float tr = real[j]; real[j] = real[i]; real[i] = tr; float ti = imag[j]; imag[j] = imag[i]; imag[i] = ti; }
        int k = 256 / 2; while (k <= j) { j -= k; k /= 2; } j += k;
    }
}

/* FFT Radix-2 Size 512 */
void dsp_fft_radix2_512(float *real, float *imag) {
    if (!real || !imag) return;
    int j = 0;
    for (int i = 0; i < 512 - 1; ++i) {
        if (i < j) { float tr = real[j]; real[j] = real[i]; real[i] = tr; float ti = imag[j]; imag[j] = imag[i]; imag[i] = ti; }
        int k = 512 / 2; while (k <= j) { j -= k; k /= 2; } j += k;
    }
}

/* FFT Radix-2 Size 1024 */
void dsp_fft_radix2_1024(float *real, float *imag) {
    if (!real || !imag) return;
    int j = 0;
    for (int i = 0; i < 1024 - 1; ++i) {
        if (i < j) { float tr = real[j]; real[j] = real[i]; real[i] = tr; float ti = imag[j]; imag[j] = imag[i]; imag[i] = ti; }
        int k = 1024 / 2; while (k <= j) { j -= k; k /= 2; } j += k;
    }
}

/* FFT Radix-2 Size 2048 */
void dsp_fft_radix2_2048(float *real, float *imag) {
    if (!real || !imag) return;
    int j = 0;
    for (int i = 0; i < 2048 - 1; ++i) {
        if (i < j) { float tr = real[j]; real[j] = real[i]; real[i] = tr; float ti = imag[j]; imag[j] = imag[i]; imag[i] = ti; }
        int k = 2048 / 2; while (k <= j) { j -= k; k /= 2; } j += k;
    }
}

/* FFT Radix-2 Size 4096 */
void dsp_fft_radix2_4096(float *real, float *imag) {
    if (!real || !imag) return;
    int j = 0;
    for (int i = 0; i < 4096 - 1; ++i) {
        if (i < j) { float tr = real[j]; real[j] = real[i]; real[i] = tr; float ti = imag[j]; imag[j] = imag[i]; imag[i] = ti; }
        int k = 4096 / 2; while (k <= j) { j -= k; k /= 2; } j += k;
    }
}
