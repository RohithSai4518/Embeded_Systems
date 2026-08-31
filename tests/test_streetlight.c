/**
 * @file test_streetlight.c
 * @brief Automated Unit Tests for Smart Automatic Street Light System
 * @author Embedded Systems Engineering Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "streetlight_fsm.h"
#include "sensor_ldr.h"
#include "sensor_pir.h"
#include "actuator_pwm.h"
#include <stdio.h>
#include <assert.h>

void test_daytime_idle(void) {
    printf("[TEST 1/4] Testing Daytime (Lux > 300) -> Streetlight OFF...\n");
    streetlight_fsm_init(NULL);
    sensor_ldr_set_simulated_lux(500.0f);
    sensor_pir_trigger_simulated_motion(false);

    streetlight_fsm_update(0.1f);

    streetlight_telemetry_t telem;
    streetlight_fsm_get_telemetry(&telem);
    assert(telem.state == STATE_DAY_IDLE);
    assert(telem.relay_energized == false);
    assert(telem.current_pwm_duty_pct == 0);
    printf("[PASS] Daytime Idle confirmed.\n");
}

void test_night_standby_dimming(void) {
    printf("[TEST 2/4] Testing Night Standby (Lux < 150, No Motion) -> 25%% Dimming...\n");
    streetlight_fsm_init(NULL);
    sensor_ldr_set_simulated_lux(80.0f); /* Night */
    sensor_pir_trigger_simulated_motion(false);

    /* Run several steps for smooth ramping */
    for (int i = 0; i < 15; ++i) {
        streetlight_fsm_update(0.1f);
    }

    streetlight_telemetry_t telem;
    streetlight_fsm_get_telemetry(&telem);
    assert(telem.state == STATE_NIGHT_STANDBY);
    assert(telem.relay_energized == true);
    assert(telem.current_pwm_duty_pct == 25);
    printf("[PASS] Night Standby 25%% Dimming confirmed.\n");
}

void test_night_motion_full_brightness(void) {
    printf("[TEST 3/4] Testing Night Motion Detection -> 100%% Full Brightness & Hold Timer...\n");
    streetlight_fsm_init(NULL);
    sensor_ldr_set_simulated_lux(50.0f); /* Night */

    /* Step into Night Standby */
    for (int i = 0; i < 10; ++i) streetlight_fsm_update(0.1f);

    /* Trigger Motion */
    sensor_pir_trigger_simulated_motion(true);
    for (int i = 0; i < 15; ++i) streetlight_fsm_update(0.1f);

    streetlight_telemetry_t telem;
    streetlight_fsm_get_telemetry(&telem);
    assert(telem.state == STATE_NIGHT_MOTION_ACTIVE);
    assert(telem.current_pwm_duty_pct == 100);
    assert(telem.motion_timer_remaining > 0);

    /* Stop motion and let 15s timer expire */
    sensor_pir_trigger_simulated_motion(false);
    for (int i = 0; i < 160; ++i) {
        streetlight_fsm_update(0.1f); /* 16 seconds */
    }

    streetlight_fsm_get_telemetry(&telem);
    assert(telem.state == STATE_NIGHT_STANDBY);
    assert(telem.current_pwm_duty_pct == 25);
    printf("[PASS] Night Motion Trigger & Hold Timer expiration confirmed.\n");
}

void test_manual_override_modes(void) {
    printf("[TEST 4/4] Testing Manual Override Modes (FORCE_ON / FORCE_OFF)...\n");
    streetlight_fsm_init(NULL);
    sensor_ldr_set_simulated_lux(500.0f); /* Daylight */

    /* Force ON */
    streetlight_fsm_set_mode(MODE_MANUAL_FORCE_ON);
    for (int i = 0; i < 15; ++i) streetlight_fsm_update(0.1f);

    streetlight_telemetry_t telem;
    streetlight_fsm_get_telemetry(&telem);
    assert(telem.current_pwm_duty_pct == 100);
    assert(telem.relay_energized == true);

    /* Force OFF */
    streetlight_fsm_set_mode(MODE_MANUAL_FORCE_OFF);
    for (int i = 0; i < 15; ++i) streetlight_fsm_update(0.1f);

    streetlight_fsm_get_telemetry(&telem);
    assert(telem.current_pwm_duty_pct == 0);
    assert(telem.relay_energized == false);

    printf("[PASS] Manual Override confirmed.\n");
}

int main(void) {
    printf("============================================================\n");
    printf("     Smart Streetlight Automated Unit Test Suite            \n");
    printf("============================================================\n");

    test_daytime_idle();
    test_night_standby_dimming();
    test_night_motion_full_brightness();
    test_manual_override_modes();

    printf("\n============================================================\n");
    printf("   >>> ALL 4 TEST SUITES PASSED WITH ZERO FAILURES <<<      \n");
    printf("============================================================\n");
    return 0;
}
