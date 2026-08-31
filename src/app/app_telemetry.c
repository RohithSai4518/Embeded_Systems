/**
 * @file app_telemetry.c
 * @brief Telemetry Streaming Task & Command Dispatcher
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "pulse_os.h"
#include "comm_aerolink.h"
#include "hal_uart.h"
#include "dsp_ekf.h"
#include "sensor_imu.h"
#include "sensor_baro.h"
#include "sensor_gps.h"
#include "hal_adc.h"
#include "hal_pwm.h"
#include <string.h>

static aerolink_parser_t g_aerolink_parser;
static uint8_t g_tx_buffer[512];

static void on_aerolink_packet_received(const aerolink_header_t *hdr, const uint8_t *payload, void *user_data) {
    PULSE_UNUSED(user_data);
    if (!hdr) return;

    if (hdr->message_id == AEROLINK_MSG_REBOOT) {
        /* Trigger reboot */
    } else if (hdr->message_id == AEROLINK_MSG_PARAM_SET && payload) {
        /* Set parameter */
    }
}

void app_telemetry_init(void) {
    aerolink_init(&g_aerolink_parser, on_aerolink_packet_received, NULL);
}

void app_telemetry_send_attitude(const euler_f32_t *euler, const vec3_f32_t *gyro_dps, const quat_f32_t *q) {
    aerolink_payload_attitude_t att;
    att.timestamp_ms = (uint32_t)pulse_time_get_ticks();
    att.roll_deg = euler ? euler->roll : 0.0f;
    att.pitch_deg = euler ? euler->pitch : 0.0f;
    att.yaw_deg = euler ? euler->yaw : 0.0f;
    att.roll_rate_dps = gyro_dps ? gyro_dps->x : 0.0f;
    att.pitch_rate_dps = gyro_dps ? gyro_dps->y : 0.0f;
    att.yaw_rate_dps = gyro_dps ? gyro_dps->z : 0.0f;
    if (q) {
        att.q[0] = q->w; att.q[1] = q->x; att.q[2] = q->y; att.q[3] = q->z;
    }

    size_t len = aerolink_encode_packet(AEROLINK_MSG_ATTITUDE, &att, sizeof(att), 1, 1, g_tx_buffer, sizeof(g_tx_buffer));
    if (len > 0) {
        hal_uart_write(HAL_UART_PORT_1, g_tx_buffer, len, 50);
    }
}

void app_telemetry_send_heartbeat(uint8_t system_state, uint8_t cpu_load) {
    aerolink_payload_heartbeat_t hb;
    hb.uptime_ms = (uint32_t)pulse_time_get_ticks();
    hb.system_state = system_state;
    hb.arming_flags = 0x01;
    hb.cpu_load_percent = cpu_load;
    hb.error_code = 0;

    size_t len = aerolink_encode_packet(AEROLINK_MSG_HEARTBEAT, &hb, sizeof(hb), 1, 1, g_tx_buffer, sizeof(g_tx_buffer));
    if (len > 0) {
        hal_uart_write(HAL_UART_PORT_1, g_tx_buffer, len, 50);
    }
}

void app_telemetry_send_battery(void) {
    aerolink_payload_battery_t bat;
    bat.timestamp_ms = (uint32_t)pulse_time_get_ticks();
    bat.voltage_v = hal_adc_get_battery_voltage();
    bat.current_a = hal_adc_get_battery_current();
    bat.consumed_mah = (bat.current_a * (float)bat.timestamp_ms) / 3600.0f;
    bat.remaining_percent = (uint8_t)PULSE_CLAMP(((bat.voltage_v - 14.0f) / (16.8f - 14.0f)) * 100.0f, 0.0f, 100.0f);
    bat.temperature_c = 34;

    size_t len = aerolink_encode_packet(AEROLINK_MSG_BATTERY_STATUS, &bat, sizeof(bat), 1, 1, g_tx_buffer, sizeof(g_tx_buffer));
    if (len > 0) {
        hal_uart_write(HAL_UART_PORT_1, g_tx_buffer, len, 50);
    }
}
