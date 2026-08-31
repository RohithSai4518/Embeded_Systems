/**
 * @file hal_can.h
 * @brief Hardware Abstraction Layer - CAN 2.0B / CAN-FD Bus Controller
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef HAL_CAN_H
#define HAL_CAN_H

#include "pulse_types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    HAL_CAN_BUS_1 = 0,      /**< Primary Power & Actuator CAN Bus */
    HAL_CAN_BUS_2,          /**< Secondary Mission Payload CAN Bus */
    HAL_CAN_BUS_COUNT
} hal_can_bus_t;

typedef enum {
    HAL_CAN_BAUD_125K = 125000,
    HAL_CAN_BAUD_250K = 250000,
    HAL_CAN_BAUD_500K = 500000,
    HAL_CAN_BAUD_1M   = 1000000
} hal_can_baud_t;

typedef struct {
    uint32_t id;            /**< 11-bit standard or 29-bit extended ID */
    bool is_extended;       /**< True if 29-bit identifier */
    bool is_remote_frame;   /**< True if RTR frame */
    uint8_t dlc;            /**< Data Length Code (0 to 8 bytes) */
    uint8_t data[8];        /**< Message payload */
    uint32_t timestamp_us;  /**< Reception timestamp in microseconds */
} hal_can_frame_t;

typedef struct {
    hal_can_bus_t bus;
    hal_can_baud_t baud_rate;
    bool enable_loopback;
    bool enable_auto_retransmit;
} hal_can_config_t;

typedef void (*hal_can_rx_cb_t)(hal_can_bus_t bus, const hal_can_frame_t *frame, void *user_data);

pulse_status_t hal_can_init(const hal_can_config_t *config);
pulse_status_t hal_can_transmit(hal_can_bus_t bus, const hal_can_frame_t *frame, pulse_tick_t timeout);
pulse_status_t hal_can_receive(hal_can_bus_t bus, hal_can_frame_t *frame, pulse_tick_t timeout);
pulse_status_t hal_can_register_rx_callback(hal_can_bus_t bus, hal_can_rx_cb_t callback, void *user_data);
pulse_status_t hal_can_set_filter(hal_can_bus_t bus, uint32_t filter_id, uint32_t mask, bool is_extended);

#ifdef __cplusplus
}
#endif

#endif /* HAL_CAN_H */
