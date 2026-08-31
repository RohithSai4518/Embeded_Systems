/**
 * @file pulse_config.h
 * @brief AeroPulse-RTOS Static Configuration & Dimension Limits
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef PULSE_CONFIG_H
#define PULSE_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif

/* System Clock & Timing Limits */
#define PULSE_CONFIG_CPU_CLOCK_HZ           168000000UL     /**< 168 MHz System Core Clock */
#define PULSE_CONFIG_TICK_RATE_HZ           1000UL          /**< 1 kHz (1ms) RTOS Tick Resolution */
#define PULSE_CONFIG_TICKS_PER_SEC          (PULSE_CONFIG_TICK_RATE_HZ)

/* Task & Priority Limits */
#define PULSE_CONFIG_MAX_TASKS              16              /**< Max concurrently schedulable tasks */
#define PULSE_CONFIG_MAX_PRIORITIES         8               /**< Priority levels: 0 (Highest) to 7 (Idle) */
#define PULSE_CONFIG_IDLE_PRIORITY          (PULSE_CONFIG_MAX_PRIORITIES - 1)
#define PULSE_CONFIG_DEFAULT_STACK_SIZE     1024            /**< Default task stack words (4KB) */
#define PULSE_CONFIG_IDLE_STACK_SIZE        512             /**< Idle task stack words (2KB) */

/* Synchronization Primitives Limits */
#define PULSE_CONFIG_MAX_QUEUES             12              /**< Maximum active message queues */
#define PULSE_CONFIG_MAX_MUTEXES            16              /**< Maximum active mutexes */
#define PULSE_CONFIG_MAX_SEMAPHORES         16              /**< Maximum active semaphores */
#define PULSE_CONFIG_MAX_EVENT_GROUPS       8               /**< Maximum active event groups */
#define PULSE_CONFIG_MAX_TIMERS             16              /**< Maximum software timers */

/* Fixed-Size Memory Pool Sizing */
#define PULSE_CONFIG_POOL_SMALL_BLOCK_SIZE  32              /**< Small payload pool block size (bytes) */
#define PULSE_CONFIG_POOL_SMALL_BLOCKS      64              /**< Number of small blocks */
#define PULSE_CONFIG_POOL_MEDIUM_BLOCK_SIZE 128             /**< Medium payload pool block size (bytes) */
#define PULSE_CONFIG_POOL_MEDIUM_BLOCKS     32              /**< Number of medium blocks */
#define PULSE_CONFIG_POOL_LARGE_BLOCK_SIZE  512             /**< Large telemetry/stream block size */
#define PULSE_CONFIG_POOL_LARGE_BLOCKS      16              /**< Number of large blocks */

/* Communication & Buffer Sizing */
#define PULSE_CONFIG_UART_TX_BUFFER_SIZE    2048            /**< UART DMA TX circular ring size */
#define PULSE_CONFIG_UART_RX_BUFFER_SIZE    2048            /**< UART DMA RX circular ring size */
#define PULSE_CONFIG_CAN_TX_MAILBOXES       8               /**< Outbound CAN mailbox queue depth */
#define PULSE_CONFIG_CAN_RX_FIFO_SIZE       32              /**< Inbound CAN message FIFO depth */
#define PULSE_CONFIG_AEROLINK_MAX_PAYLOAD   256             /**< AeroLink Max Packet Length */
#define PULSE_CONFIG_BLACKBOX_PAGE_SIZE     4096            /**< Flash logging page size */
#define PULSE_CONFIG_BLACKBOX_MAX_PAGES     256             /**< Flash ring buffer log pages (1MB total) */

/* Control Loop & Sensor Sampling Frequencies */
#define PULSE_CONFIG_FAST_LOOP_FREQ_HZ      1000            /**< IMU Sampling & Rate PID (1 kHz) */
#define PULSE_CONFIG_ATTITUDE_LOOP_FREQ_HZ  250             /**< Attitude EKF & Angle PID (250 Hz) */
#define PULSE_CONFIG_NAV_LOOP_FREQ_HZ       50              /**< Position / Altitude Hold (50 Hz) */
#define PULSE_CONFIG_TELEMETRY_FREQ_HZ      20              /**< Downlink Telemetry Stream (20 Hz) */
#define PULSE_CONFIG_STATUS_LED_FREQ_HZ     2               /**< Heartbeat visual toggle (2 Hz) */

#ifdef __cplusplus
}
#endif

#endif /* PULSE_CONFIG_H */
