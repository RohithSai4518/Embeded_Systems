/**
 * @file hal_uart.h
 * @brief Hardware Abstraction Layer - UART/USART with DMA Ring Buffering
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef HAL_UART_H
#define HAL_UART_H

#include "pulse_types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    HAL_UART_PORT_1 = 0,    /**< Primary Telemetry UART */
    HAL_UART_PORT_2,        /**< GNSS / GPS UART */
    HAL_UART_PORT_3,        /**< Debug / CLI Console UART */
    HAL_UART_PORT_COUNT
} hal_uart_port_t;

typedef enum {
    HAL_UART_BAUD_9600   = 9600,
    HAL_UART_BAUD_19200  = 19200,
    HAL_UART_BAUD_38400  = 38400,
    HAL_UART_BAUD_57600  = 57600,
    HAL_UART_BAUD_115200 = 115200,
    HAL_UART_BAUD_230400 = 230400,
    HAL_UART_BAUD_460800 = 460800,
    HAL_UART_BAUD_921600 = 921600
} hal_uart_baud_t;

typedef enum {
    HAL_UART_PARITY_NONE = 0,
    HAL_UART_PARITY_EVEN,
    HAL_UART_PARITY_ODD
} hal_uart_parity_t;

typedef enum {
    HAL_UART_STOPBITS_1 = 0,
    HAL_UART_STOPBITS_2
} hal_uart_stopbits_t;

typedef enum {
    HAL_UART_FLOW_NONE = 0,
    HAL_UART_FLOW_RTS_CTS
} hal_uart_flow_t;

typedef struct {
    hal_uart_port_t port;
    hal_uart_baud_t baud_rate;
    hal_uart_parity_t parity;
    hal_uart_stopbits_t stop_bits;
    hal_uart_flow_t flow_control;
    bool enable_dma;
} hal_uart_config_t;

typedef void (*hal_uart_rx_cb_t)(hal_uart_port_t port, uint8_t byte, void *user_data);

pulse_status_t hal_uart_init(const hal_uart_config_t *config);
pulse_status_t hal_uart_write(hal_uart_port_t port, const uint8_t *data, size_t length, pulse_tick_t timeout);
pulse_status_t hal_uart_read(hal_uart_port_t port, uint8_t *buffer, size_t max_len, size_t *bytes_read, pulse_tick_t timeout);
pulse_status_t hal_uart_write_byte(hal_uart_port_t port, uint8_t byte);
pulse_status_t hal_uart_read_byte(hal_uart_port_t port, uint8_t *out_byte, pulse_tick_t timeout);
pulse_status_t hal_uart_register_rx_callback(hal_uart_port_t port, hal_uart_rx_cb_t callback, void *user_data);
size_t hal_uart_get_available_rx(hal_uart_port_t port);
pulse_status_t hal_uart_flush(hal_uart_port_t port);

#ifdef __cplusplus
}
#endif

#endif /* HAL_UART_H */
