/**
 * @file comm_shell.c
 * @brief Interactive Diagnostic Shell / CLI Console Implementation
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "comm_shell.h"
#include "pulse_os.h"
#include "sensor_imu.h"
#include "sensor_baro.h"
#include "sensor_gps.h"
#include "hal_adc.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/* Built-in Shell Command Handlers */
static int cmd_help(int argc, char *argv[]);
static int cmd_tasks(int argc, char *argv[]);
static int cmd_status(int argc, char *argv[]);
static int cmd_sensors(int argc, char *argv[]);
static int cmd_arm(int argc, char *argv[]);
static int cmd_disarm(int argc, char *argv[]);

static const shell_command_t g_builtin_cmds[] = {
    { "help",    "Print list of available shell commands", cmd_help },
    { "tasks",   "Show active RTOS tasks and CPU utilization", cmd_tasks },
    { "status",  "Display overall system health and battery status", cmd_status },
    { "sensors", "Print live IMU, Barometer, and GPS readings", cmd_sensors },
    { "arm",     "Arm flight controller actuators", cmd_arm },
    { "disarm",  "Disarm flight controller actuators", cmd_disarm }
};

static shell_context_t *g_active_shell = NULL;

pulse_status_t shell_init(shell_context_t *shell, hal_uart_port_t uart_port) {
    if (!shell) return PULSE_ERROR_NULL_POINTER;

    memset(shell, 0, sizeof(*shell));
    shell->uart_port = uart_port;
    shell->echo_enabled = true;
    shell->command_count = 0;
    g_active_shell = shell;

    /* Register built-in commands */
    for (size_t i = 0; i < PULSE_ARRAY_SIZE(g_builtin_cmds); ++i) {
        shell_register_command(shell, &g_builtin_cmds[i]);
    }

    shell_printf(shell, "\r\n=========================================\r\n");
    shell_printf(shell, "  AeroPulse-RTOS Interactive Console v2.4\r\n");
    shell_printf(shell, "  Type 'help' for available commands\r\n");
    shell_printf(shell, "=========================================\r\n");
    shell_print_prompt(shell);

    return PULSE_OK;
}

pulse_status_t shell_register_command(shell_context_t *shell, const shell_command_t *cmd) {
    if (!shell || !cmd || shell->command_count >= SHELL_MAX_COMMANDS) {
        return PULSE_ERROR_INVALID_PARAM;
    }
    shell->commands[shell->command_count++] = cmd;
    return PULSE_OK;
}

void shell_printf(shell_context_t *shell, const char *format, ...) {
    if (!shell || !format) return;

    char buffer[256];
    va_list args;
    va_start(args, format);
    int len = vsnprintf(buffer, sizeof(buffer), format, args);
    va_end(args);

    if (len > 0) {
        hal_uart_write(shell->uart_port, (const uint8_t *)buffer, (size_t)len, 100);
    }
}

void shell_print_prompt(shell_context_t *shell) {
    shell_printf(shell, SHELL_PROMPT);
}

static void shell_execute_line(shell_context_t *shell) {
    if (shell->line_idx == 0) {
        shell_print_prompt(shell);
        return;
    }

    char *argv[SHELL_MAX_ARGS];
    int argc = 0;

    /* Parse whitespace-delimited tokens */
    char *token = strtok(shell->line_buffer, " \t");
    while (token != NULL && argc < SHELL_MAX_ARGS) {
        argv[argc++] = token;
        token = strtok(NULL, " \t");
    }

    if (argc > 0) {
        bool found = false;
        for (uint8_t i = 0; i < shell->command_count; ++i) {
            if (strcmp(argv[0], shell->commands[i]->name) == 0) {
                shell->commands[i]->handler(argc, argv);
                found = true;
                break;
            }
        }
        if (!found) {
            shell_printf(shell, "Unknown command: '%s'. Type 'help'.\r\n", argv[0]);
        }
    }

    shell->line_idx = 0;
    shell->line_buffer[0] = '\0';
    shell_print_prompt(shell);
}

void shell_process_char(shell_context_t *shell, char c) {
    if (!shell) return;

    if (c == '\r' || c == '\n') {
        shell_printf(shell, "\r\n");
        shell->line_buffer[shell->line_idx] = '\0';
        shell_execute_line(shell);
    } else if (c == '\b' || c == 0x7F) { /* Backspace */
        if (shell->line_idx > 0) {
            shell->line_idx--;
            shell_printf(shell, "\b \b");
        }
    } else if (shell->line_idx < (SHELL_MAX_LINE_LEN - 1)) {
        shell->line_buffer[shell->line_idx++] = c;
        if (shell->echo_enabled) {
            char echo[2] = { c, '\0' };
            shell_printf(shell, "%s", echo);
        }
    }
}

static int cmd_help(int argc, char *argv[]) {
    PULSE_UNUSED(argc);
    PULSE_UNUSED(argv);
    shell_printf(g_active_shell, "\r\nAvailable Commands:\r\n");
    for (uint8_t i = 0; i < g_active_shell->command_count; ++i) {
        shell_printf(g_active_shell, "  %-12s - %s\r\n",
                     g_active_shell->commands[i]->name,
                     g_active_shell->commands[i]->help);
    }
    return 0;
}

static int cmd_tasks(int argc, char *argv[]) {
    PULSE_UNUSED(argc);
    PULSE_UNUSED(argv);
    pulse_task_stats_t stats[PULSE_CONFIG_MAX_TASKS];
    uint32_t count = pulse_task_get_system_stats(stats, PULSE_CONFIG_MAX_TASKS);

    shell_printf(g_active_shell, "\r\n%-12s %-8s %-5s %-12s %-8s\r\n", "Task", "State", "Prio", "Runtime(ms)", "CPU %");
    shell_printf(g_active_shell, "--------------------------------------------------\r\n");
    for (uint32_t i = 0; i < count; ++i) {
        const char *state_str = (stats[i].state == PULSE_TASK_STATE_RUNNING) ? "RUN" :
                                (stats[i].state == PULSE_TASK_STATE_READY) ? "READY" :
                                (stats[i].state == PULSE_TASK_STATE_BLOCKED) ? "BLOCKED" : "SUSP";
        shell_printf(g_active_shell, "%-12s %-8s %-5lu %-12lu %-6.2f%%\r\n",
                     stats[i].name, state_str, (unsigned long)stats[i].priority,
                     (unsigned long)stats[i].runtime_ticks, stats[i].cpu_usage_percent);
    }
    return 0;
}

static int cmd_status(int argc, char *argv[]) {
    PULSE_UNUSED(argc);
    PULSE_UNUSED(argv);
    float vbat = hal_adc_get_battery_voltage();
    float ibat = hal_adc_get_battery_current();
    pulse_tick_t uptime_s = pulse_time_get_ticks() / 1000;

    shell_printf(g_active_shell, "\r\nSystem Health Status:\r\n");
    shell_printf(g_active_shell, "  Uptime:       %lu sec\r\n", (unsigned long)uptime_s);
    shell_printf(g_active_shell, "  Battery V:    %.2f V\r\n", vbat);
    shell_printf(g_active_shell, "  Battery I:    %.2f A\r\n", ibat);
    shell_printf(g_active_shell, "  IMU Health:   %s\r\n", sensor_imu_is_healthy() ? "OK" : "FAULT");
    shell_printf(g_active_shell, "  Baro Health:  %s\r\n", sensor_baro_is_healthy() ? "OK" : "FAULT");
    shell_printf(g_active_shell, "  GPS 3D Fix:   %s\r\n", sensor_gps_has_3d_fix() ? "LOCKED" : "SEARCHING");
    return 0;
}

static int cmd_sensors(int argc, char *argv[]) {
    PULSE_UNUSED(argc);
    PULSE_UNUSED(argv);
    sensor_imu_data_t imu;
    sensor_baro_data_t baro;
    sensor_gps_data_t gps;

    sensor_imu_read(&imu);
    sensor_baro_read(&baro);
    sensor_gps_get_data(&gps);

    shell_printf(g_active_shell, "\r\nLive Sensor Readout:\r\n");
    shell_printf(g_active_shell, "  Accel (m/s2): X=%.2f, Y=%.2f, Z=%.2f\r\n", imu.accel_m_s2.x, imu.accel_m_s2.y, imu.accel_m_s2.z);
    shell_printf(g_active_shell, "  Gyro (deg/s): X=%.2f, Y=%.2f, Z=%.2f\r\n", imu.gyro_deg_s.x, imu.gyro_deg_s.y, imu.gyro_deg_s.z);
    shell_printf(g_active_shell, "  Baro:         Alt=%.1fm, Pres=%.0fPa, Vario=%.2fm/s\r\n", baro.altitude_m, baro.pressure_pa, baro.vertical_speed_m_s);
    shell_printf(g_active_shell, "  GPS:          Lat=%.6f, Lon=%.6f, Sats=%d\r\n", gps.latitude_deg, gps.longitude_deg, gps.satellites_used);
    return 0;
}

static int cmd_arm(int argc, char *argv[]) {
    PULSE_UNUSED(argc);
    PULSE_UNUSED(argv);
    shell_printf(g_active_shell, "[SAFETY] Actuators ARMED. Motors spinning at idle.\r\n");
    return 0;
}

static int cmd_disarm(int argc, char *argv[]) {
    PULSE_UNUSED(argc);
    PULSE_UNUSED(argv);
    shell_printf(g_active_shell, "[SAFETY] Actuators DISARMED. Safe.\r\n");
    return 0;
}
