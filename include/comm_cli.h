/**
 * @file comm_cli.h
 * @brief Serial UART Command-Line Interface for Streetlight Parameter Tuning
 * @author Embedded Systems Engineering Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef COMM_CLI_H
#define COMM_CLI_H

#include "streetlight_types.h"

#ifdef __cplusplus
extern "C" {
#endif

sys_status_t cli_init(void);
void cli_process_input(const char *cmd_line, char *out_response, size_t max_len);

#ifdef __cplusplus
}
#endif

#endif /* COMM_CLI_H */
