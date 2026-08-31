/**
 * @file comm_aerolink.h
 * @brief High-Throughput Binary Telemetry Protocol Framing & Packet Parser
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef COMM_AEROLINK_H
#define COMM_AEROLINK_H

#include "pulse_types.h"
#include "pulse_config.h"

#ifdef __cplusplus
extern "C" {
#endif

#define AEROLINK_MAGIC_BYTE_1   0xAA
#define AEROLINK_MAGIC_BYTE_2   0x55

typedef enum {
    AEROLINK_MSG_HEARTBEAT      = 0x01,
    AEROLINK_MSG_ATTITUDE       = 0x02,
    AEROLINK_MSG_IMU_RAW        = 0x03,
    AEROLINK_MSG_ALTITUDE_BARO  = 0x04,
    AEROLINK_MSG_GPS_NAV        = 0x05,
    AEROLINK_MSG_BATTERY_STATUS = 0x06,
    AEROLINK_MSG_MOTOR_OUTPUTS  = 0x07,
    AEROLINK_MSG_TASK_STATS     = 0x08,
    AEROLINK_MSG_COMMAND_ACK    = 0x09,
    AEROLINK_MSG_PARAM_SET      = 0x10,
    AEROLINK_MSG_PARAM_GET      = 0x11,
    AEROLINK_MSG_PARAM_VALUE    = 0x12,
    AEROLINK_MSG_REBOOT         = 0xFE,
    AEROLINK_MSG_DEBUG_LOG      = 0xFF
} aerolink_msg_id_t;

#pragma pack(push, 1)
typedef struct {
    uint8_t magic1;             /**< 0xAA */
    uint8_t magic2;             /**< 0x55 */
    uint8_t sequence_num;       /**< 0-255 wrapping packet counter */
    uint8_t system_id;          /**< Vehicle ID (e.g. 1) */
    uint8_t component_id;       /**< Autopilot component ID (e.g. 1) */
    uint8_t message_id;         /**< aerolink_msg_id_t */
    uint16_t payload_len;       /**< Length of payload (0 - 256) */
} aerolink_header_t;

/* Telemetry Payload Structs */
typedef struct {
    uint32_t uptime_ms;
    uint8_t system_state;       /**< 0=Init, 1=Standby, 2=Armed, 3=Failsafe */
    uint8_t arming_flags;
    uint8_t cpu_load_percent;
    uint8_t error_code;
} aerolink_payload_heartbeat_t;

typedef struct {
    uint32_t timestamp_ms;
    float roll_deg;
    float pitch_deg;
    float yaw_deg;
    float roll_rate_dps;
    float pitch_rate_dps;
    float yaw_rate_dps;
    float q[4];
} aerolink_payload_attitude_t;

typedef struct {
    uint32_t timestamp_ms;
    float voltage_v;
    float current_a;
    float consumed_mah;
    uint8_t remaining_percent;
    int8_t temperature_c;
} aerolink_payload_battery_t;

typedef struct {
    uint32_t timestamp_ms;
    float motor_duties[8];      /**< 0.0 to 1.0 */
} aerolink_payload_motors_t;

typedef struct {
    uint32_t timestamp_ms;
    double lat;
    double lon;
    float alt_msl_m;
    float ground_speed_ms;
    float heading_deg;
    uint8_t satellites;
    uint8_t fix_type;
} aerolink_payload_gps_t;
#pragma pack(pop)

typedef void (*aerolink_rx_cb_t)(const aerolink_header_t *header, const uint8_t *payload, void *user_data);

typedef struct {
    uint8_t rx_state;
    uint16_t rx_idx;
    aerolink_header_t current_header;
    uint8_t payload_buffer[PULSE_CONFIG_AEROLINK_MAX_PAYLOAD];
    uint32_t rx_crc;
    uint8_t sequence_tx;
    aerolink_rx_cb_t rx_callback;
    void *user_data;
    uint32_t packets_received;
    uint32_t packets_dropped_crc;
} aerolink_parser_t;

void aerolink_init(aerolink_parser_t *parser, aerolink_rx_cb_t cb, void *user_data);
pulse_status_t aerolink_process_byte(aerolink_parser_t *parser, uint8_t byte);
size_t aerolink_encode_packet(uint8_t msg_id, const void *payload, uint16_t payload_len,
                              uint8_t sys_id, uint8_t comp_id, uint8_t *out_buffer, size_t max_buf_len);

#ifdef __cplusplus
}
#endif

#endif /* COMM_AEROLINK_H */
