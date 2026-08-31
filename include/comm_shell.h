/**
 * @file comm_shell.h
 * @brief Interactive Diagnostic Shell / CLI Console for Embedded Debugging
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef COMM_SHELL_H
#define COMM_SHELL_H

#include "pulse_types.h"
#include "hal_uart.h"

#ifdef __cplusplus
extern "C" {
#endif

#define SHELL_MAX_LINE_LEN      128
#define SHELL_MAX_ARGS          16
#define SHELL_MAX_COMMANDS      32
#define SHELL_PROMPT            "AeroPulse> "

typedef int (*shell_cmd_func_t)(int argc, char *argv[]);

typedef struct {
    const char *name;
    const char *help;
    shell_cmd_func_t handler;
} shell_command_t;

typedef struct {
    hal_uart_port_t uart_port;
    char line_buffer[SHELL_MAX_LINE_LEN];
    uint16_t line_idx;
    bool echo_enabled;
    const shell_command_t *commands[SHELL_MAX_COMMANDS];
    uint8_t command_count;
} shell_context_t;

pulse_status_t shell_init(shell_context_t *shell, hal_uart_port_t uart_port);
pulse_status_t shell_register_command(shell_context_t *shell, const shell_command_t *cmd);
void shell_process_char(shell_context_t *shell, char c);
void shell_printf(shell_context_t *shell, const char *format, ...);
void shell_print_prompt(shell_context_t *shell);

#ifdef __cplusplus
}
#endif

#endif /* COMM_SHELL_H */
