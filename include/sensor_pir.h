/**
 * @file sensor_pir.h
 * @brief PIR (Passive Infrared) Motion Sensor Driver & Debounce Filter
 * @author Embedded Systems Engineering Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef SENSOR_PIR_H
#define SENSOR_PIR_H

#include "streetlight_types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef void (*pir_motion_cb_t)(void *user_data);

sys_status_t sensor_pir_init(pir_motion_cb_t isr_cb, void *user_data);
bool sensor_pir_is_motion_detected(void);
void sensor_pir_trigger_simulated_motion(bool detected);

#ifdef __cplusplus
}
#endif

#endif /* SENSOR_PIR_H */
