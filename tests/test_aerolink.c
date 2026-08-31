/**
 * @file test_aerolink.c
 * @brief Unit & Fuzz Tests for AeroLink Binary Protocol
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "comm_aerolink.h"
#include <stdio.h>
#include <assert.h>
#include <string.h>

static bool s_packet_received = false;
static uint8_t s_received_msg_id = 0;

static void test_rx_cb(const aerolink_header_t *hdr, const uint8_t *payload, void *user_data) {
    PULSE_UNUSED(user_data);
    PULSE_UNUSED(payload);
    s_packet_received = true;
    s_received_msg_id = hdr->message_id;
}

void test_aerolink_protocol(void) {
    printf("[TEST] Running AeroLink Protocol Encoding/Decoding Tests...\n");

    aerolink_parser_t parser;
    aerolink_init(&parser, test_rx_cb, NULL);

    aerolink_payload_heartbeat_t hb = {
        .uptime_ms = 12345,
        .system_state = 2,
        .arming_flags = 1,
        .cpu_load_percent = 15,
        .error_code = 0
    };

    uint8_t buffer[128];
    size_t encoded_len = aerolink_encode_packet(AEROLINK_MSG_HEARTBEAT, &hb, sizeof(hb), 1, 1, buffer, sizeof(buffer));
    assert(encoded_len > 0);

    /* Stream byte-by-byte into parser */
    s_packet_received = false;
    for (size_t i = 0; i < encoded_len; ++i) {
        aerolink_process_byte(&parser, buffer[i]);
    }

    assert(s_packet_received == true);
    assert(s_received_msg_id == AEROLINK_MSG_HEARTBEAT);
    assert(parser.packets_received == 1);
    assert(parser.packets_dropped_crc == 0);

    /* Corrupt byte test */
    buffer[4] ^= 0xFF; /* Corrupt header */
    s_packet_received = false;
    for (size_t i = 0; i < encoded_len; ++i) {
        aerolink_process_byte(&parser, buffer[i]);
    }
    assert(s_packet_received == false);
    assert(parser.packets_dropped_crc == 1);

    printf("[PASS] AeroLink Protocol Tests Completed Successfully.\n");
}
