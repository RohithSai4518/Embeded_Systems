/**
 * @file comm_cli.c
 * @brief Serial Command-Line Interface Implementation
 * @author Embedded Systems Engineering Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "comm_cli.h"
#include "streetlight_fsm.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

sys_status_t cli_init(void) {
    return SYS_OK;
}

void cli_process_input(const char *cmd_line, char *out_response, size_t max_len) {
    if (!cmd_line || !out_response || max_len == 0) return;

    if (strncmp(cmd_line, "help", 4) == 0) {
        snprintf(out_response, max_len,
                 "Commands:\r\n"
                 "  help                 - Display help menu\r\n"
                 "  status               - Print live sensor & FSM state\r\n"
                 "  mode <auto|on|off>   - Set operating mode\r\n"
                 "  set lux <val>        - Set night lux threshold\r\n"
                 "  set hold <sec>       - Set motion hold timer duration\r\n"
                 "  set dim <pct>        - Set standby dimming percentage\r\n");
    } else if (strncmp(cmd_line, "status", 6) == 0) {
        streetlight_telemetry_t telem;
        streetlight_fsm_get_telemetry(&telem);

        const char *state_str = (telem.state == STATE_DAY_IDLE) ? "DAY_IDLE" :
                                (telem.state == STATE_NIGHT_STANDBY) ? "NIGHT_STANDBY" : "NIGHT_ACTIVE";
        const char *mode_str = (telem.mode == MODE_AUTO) ? "AUTO" :
                               (telem.mode == MODE_MANUAL_FORCE_ON) ? "MANUAL_ON" : "MANUAL_OFF";

        snprintf(out_response, max_len,
                 "[STATUS]\r\n"
                 "  Mode:         %s\r\n"
                 "  State:        %s\r\n"
                 "  Ambient Lux:  %.1f Lux\r\n"
                 "  Motion:       %s (Timer: %u s)\r\n"
                 "  Brightness:   %u %%\r\n"
                 "  Relay:        %s\r\n"
                 "  Energy Saved: %.2f kWh (%.1f %%)\r\n",
                 mode_str, state_str, telem.ambient_lux,
                 telem.motion_detected ? "DETECTED" : "CLEAR",
                 telem.motion_timer_remaining,
                 telem.current_pwm_duty_pct,
                 telem.relay_energized ? "ON (CLOSED)" : "OFF (OPEN)",
                 telem.energy_saved_kwh, telem.energy_savings_percent);
    } else if (strncmp(cmd_line, "mode auto", 9) == 0) {
        streetlight_fsm_set_mode(MODE_AUTO);
        snprintf(out_response, max_len, "[OK] Mode set to AUTO.\r\n");
    } else if (strncmp(cmd_line, "mode on", 7) == 0) {
        streetlight_fsm_set_mode(MODE_MANUAL_FORCE_ON);
        snprintf(out_response, max_len, "[OK] Mode set to MANUAL_FORCE_ON.\r\n");
    } else if (strncmp(cmd_line, "mode off", 8) == 0) {
        streetlight_fsm_set_mode(MODE_MANUAL_FORCE_OFF);
        snprintf(out_response, max_len, "[OK] Mode set to MANUAL_FORCE_OFF.\r\n");
    } else if (strncmp(cmd_line, "set lux", 7) == 0) {
        float val = (float)atof(cmd_line + 7);
        if (val > 0.0f) {
            streetlight_config_t cfg;
            streetlight_fsm_get_config(&cfg);
            cfg.lux_night_threshold = val;
            cfg.lux_day_threshold = val + 100.0f;
            streetlight_fsm_set_config(&cfg);
            snprintf(out_response, max_len, "[OK] Night Lux threshold set to %.1f Lux.\r\n", val);
        } else {
            snprintf(out_response, max_len, "[ERR] Invalid Lux value.\r\n");
        }
    } else if (strncmp(cmd_line, "set hold", 8) == 0) {
        int sec = atoi(cmd_line + 8);
        if (sec > 0 && sec <= 300) {
            streetlight_config_t cfg;
            streetlight_fsm_get_config(&cfg);
            cfg.motion_hold_seconds = (uint16_t)sec;
            streetlight_fsm_set_config(&cfg);
            snprintf(out_response, max_len, "[OK] Motion hold duration set to %d seconds.\r\n", sec);
        } else {
            snprintf(out_response, max_len, "[ERR] Invalid seconds (1-300).\r\n");
        }
    } else {
        snprintf(out_response, max_len, "[ERR] Unknown command. Type 'help'.\r\n");
    }
}
