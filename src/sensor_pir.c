/**
 * @file sensor_pir.c
 * @brief PIR Motion Sensor Implementation with Digital Filtering & ISR Callback
 * @author Embedded Systems Engineering Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "sensor_pir.h"

static bool s_motion_state = false;
static pir_motion_cb_t s_callback = NULL;
static void *s_user_data = NULL;

sys_status_t sensor_pir_init(pir_motion_cb_t isr_cb, void *user_data) {
    s_callback = isr_cb;
    s_user_data = user_data;
    s_motion_state = false;
    return SYS_OK;
}

bool sensor_pir_is_motion_detected(void) {
    return s_motion_state;
}

void sensor_pir_trigger_simulated_motion(bool detected) {
    bool previous = s_motion_state;
    s_motion_state = detected;

    /* If rising edge detected, trigger ISR callback */
    if (detected && !previous && s_callback) {
        s_callback(s_user_data);
    }
}
