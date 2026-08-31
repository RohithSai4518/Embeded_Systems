/**
 * @file comm_aerolink.c
 * @brief High-Throughput Binary Telemetry Protocol Framing & Parsing Implementation
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "comm_aerolink.h"
#include "sys_bootloader.h"
#include <string.h>

typedef enum {
    STATE_WAIT_MAGIC1 = 0,
    STATE_WAIT_MAGIC2,
    STATE_HEADER,
    STATE_PAYLOAD,
    STATE_CRC
} parse_state_t;

void aerolink_init(aerolink_parser_t *parser, aerolink_rx_cb_t cb, void *user_data) {
    if (!parser) return;
    memset(parser, 0, sizeof(*parser));
    parser->rx_state = STATE_WAIT_MAGIC1;
    parser->rx_callback = cb;
    parser->user_data = user_data;
    parser->sequence_tx = 0;
}

pulse_status_t aerolink_process_byte(aerolink_parser_t *parser, uint8_t byte) {
    if (!parser) return PULSE_ERROR_NULL_POINTER;

    switch (parser->rx_state) {
        case STATE_WAIT_MAGIC1:
            if (byte == AEROLINK_MAGIC_BYTE_1) {
                parser->rx_state = STATE_WAIT_MAGIC2;
            }
            break;

        case STATE_WAIT_MAGIC2:
            if (byte == AEROLINK_MAGIC_BYTE_2) {
                parser->rx_state = STATE_HEADER;
                parser->rx_idx = 2; /* Already have magic 1 and 2 */
                parser->current_header.magic1 = AEROLINK_MAGIC_BYTE_1;
                parser->current_header.magic2 = AEROLINK_MAGIC_BYTE_2;
            } else {
                parser->rx_state = STATE_WAIT_MAGIC1;
            }
            break;

        case STATE_HEADER: {
            uint8_t *hdr_ptr = (uint8_t *)&parser->current_header;
            hdr_ptr[parser->rx_idx++] = byte;

            if (parser->rx_idx >= sizeof(aerolink_header_t)) {
                if (parser->current_header.payload_len > PULSE_CONFIG_AEROLINK_MAX_PAYLOAD) {
                    /* Payload too big - reset */
                    parser->rx_state = STATE_WAIT_MAGIC1;
                } else if (parser->current_header.payload_len == 0) {
                    parser->rx_state = STATE_CRC;
                    parser->rx_idx = 0;
                } else {
                    parser->rx_state = STATE_PAYLOAD;
                    parser->rx_idx = 0;
                }
            }
            break;
        }

        case STATE_PAYLOAD:
            parser->payload_buffer[parser->rx_idx++] = byte;
            if (parser->rx_idx >= parser->current_header.payload_len) {
                parser->rx_state = STATE_CRC;
                parser->rx_idx = 0;
            }
            break;

        case STATE_CRC: {
            uint8_t *crc_ptr = (uint8_t *)&parser->rx_crc;
            crc_ptr[parser->rx_idx++] = byte;

            if (parser->rx_idx >= 4) {
                /* Validate CRC-32 */
                uint32_t calc_crc = sys_crc32_calculate((const uint8_t *)&parser->current_header, sizeof(aerolink_header_t));
                if (parser->current_header.payload_len > 0) {
                    calc_crc = sys_crc32_update(calc_crc, parser->payload_buffer, parser->current_header.payload_len);
                }

                if (calc_crc == parser->rx_crc) {
                    parser->packets_received++;
                    if (parser->rx_callback) {
                        parser->rx_callback(&parser->current_header, parser->payload_buffer, parser->user_data);
                    }
                } else {
                    parser->packets_dropped_crc++;
                }

                parser->rx_state = STATE_WAIT_MAGIC1;
            }
            break;
        }

        default:
            parser->rx_state = STATE_WAIT_MAGIC1;
            break;
    }

    return PULSE_OK;
}

size_t aerolink_encode_packet(uint8_t msg_id, const void *payload, uint16_t payload_len,
                              uint8_t sys_id, uint8_t comp_id, uint8_t *out_buffer, size_t max_buf_len) {
    size_t total_len = sizeof(aerolink_header_t) + payload_len + 4;
    if (!out_buffer || total_len > max_buf_len) return 0;

    static uint8_t s_seq = 0;
    aerolink_header_t hdr = {
        .magic1 = AEROLINK_MAGIC_BYTE_1,
        .magic2 = AEROLINK_MAGIC_BYTE_2,
        .sequence_num = s_seq++,
        .system_id = sys_id,
        .component_id = comp_id,
        .message_id = msg_id,
        .payload_len = payload_len
    };

    /* Copy Header */
    memcpy(out_buffer, &hdr, sizeof(hdr));

    /* Copy Payload */
    if (payload && payload_len > 0) {
        memcpy(out_buffer + sizeof(hdr), payload, payload_len);
    }

    /* Compute CRC32 */
    uint32_t crc = sys_crc32_calculate(out_buffer, sizeof(hdr) + payload_len);
    memcpy(out_buffer + sizeof(hdr) + payload_len, &crc, 4);

    return total_len;
}
