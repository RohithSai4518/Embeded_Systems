/**
 * @file streetlight_fsm.h
 * @brief Smart Automatic Street Light Finite State Machine & Energy Calculator
 * @author Embedded Systems Engineering Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef STREETLIGHT_FSM_H
#define STREETLIGHT_FSM_H

#include "streetlight_types.h"

#ifdef __cplusplus
extern "C" {
#endif

sys_status_t streetlight_fsm_init(const streetlight_config_t *config);
void streetlight_fsm_update(float dt_seconds);
void streetlight_fsm_set_mode(system_mode_t mode);
void streetlight_fsm_get_telemetry(streetlight_telemetry_t *out_telemetry);
void streetlight_fsm_set_config(const streetlight_config_t *config);
void streetlight_fsm_get_config(streetlight_config_t *out_config);

#ifdef __cplusplus
}
#endif

#endif /* STREETLIGHT_FSM_H */
