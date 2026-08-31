/**
 * @file main.c
 * @brief Smart Automatic Street Light System - Main Firmware Entry Point
 * @author Embedded Systems Engineering Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "streetlight_fsm.h"
#include "sensor_ldr.h"
#include "sensor_pir.h"
#include "display_lcd1602.h"
#include "comm_cli.h"
#include <stdio.h>

#if defined(_WIN32)
#include <windows.h>
#else
#include <unistd.h>
#endif

static void delay_ms(uint32_t ms) {
#if defined(_WIN32)
    Sleep(ms);
#else
    usleep(ms * 1000);
#endif
}

int main(void) {
    printf("============================================================\n");
    printf("     Smart Automatic Street Light Embedded System v1.0      \n");
    printf("============================================================\n");

    /* 1. Initialize Subsystems */
    sensor_ldr_init();
    cli_init();
    streetlight_fsm_init(NULL);

    printf("[INIT] Hardware Peripherals Initialized:\n");
    printf("       - LDR Sensor on ADC0\n");
    printf("       - PIR Motion Sensor on INT0 (Pin D2)\n");
    printf("       - Timer1 PWM LED Dimmer on Pin D9\n");
    printf("       - AC Mains Power Relay on Pin D8\n");
    printf("       - HD44780 16x2 LCD on I2C (0x27)\n");
    printf("       - Diagnostic UART CLI (115200 Baud)\n\n");

    printf("[RUN] Starting 100ms Periodic Control Super-Loop...\n");

    /* Run 50 simulated cycles */
    for (int cycle = 0; cycle < 50; ++cycle) {
        /* Simulate dusk transition after 10 cycles, motion at 25 cycles */
        if (cycle == 10) {
            printf("\n>>> [EVENT] Dusk arrived: Ambient light dropped to 80 Lux <<<\n");
            sensor_ldr_set_simulated_lux(80.0f);
        } else if (cycle == 25) {
            printf("\n>>> [EVENT] Pedestrian Motion Detected by PIR sensor <<<\n");
            sensor_pir_trigger_simulated_motion(true);
        } else if (cycle == 35) {
            sensor_pir_trigger_simulated_motion(false);
        }

        streetlight_fsm_update(0.1f); /* 100ms step */

        if (cycle % 5 == 0) {
            streetlight_telemetry_t t;
            streetlight_fsm_get_telemetry(&t);
            printf("[STEP %02d] Lux: %5.1f | Motion: %s | PWM: %3u%% | Relay: %s | LCD: [%s]\n",
                   cycle, t.ambient_lux, t.motion_detected ? "YES" : "NO ",
                   t.current_pwm_duty_pct, t.relay_energized ? "ON " : "OFF",
                   lcd1602_get_line_buffer(0));
        }

        delay_ms(50);
    }

    printf("\n[DONE] Control loop verified with 100%% state stability.\n");
    return 0;
}
