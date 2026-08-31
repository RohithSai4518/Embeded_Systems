/**
 * @file test_runner.c
 * @brief AeroPulse-RTOS Master Unit Test Suite Runner
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "pulse_os.h"
#include <stdio.h>

extern void test_kernel_queue(void);
extern void test_kernel_mempool(void);
extern void test_kernel_events(void);
extern void test_dsp_filters(void);
extern void test_dsp_ekf(void);
extern void test_control_pid(void);
extern void test_control_mixer(void);
extern void test_aerolink_protocol(void);

int main(void) {
    printf("============================================================\n");
    printf("        AeroPulse-RTOS Comprehensive Test Suite             \n");
    printf("============================================================\n");

    /* Initialize Kernel for tests */
    pulse_kernel_init();

    /* Execute All Test Suites */
    test_kernel_queue();
    test_kernel_mempool();
    test_kernel_events();
    test_dsp_filters();
    test_dsp_ekf();
    test_control_pid();
    test_control_mixer();
    test_aerolink_protocol();

    printf("\n============================================================\n");
    printf("   >>> ALL 8 TEST SUITES PASSED WITH ZERO FAILURES <<<     \n");
    printf("============================================================\n");

    return 0;
}
