/**
 * @file comm_modbus.c
 * @brief Industrial Modbus RTU / TCP Slave Protocol Engine Implementation
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "comm_modbus.h"
#include <string.h>

/* Modbus CRC-16 Calculation */
static uint16_t modbus_crc16(const uint8_t *buffer, size_t length) {
    uint16_t crc = 0xFFFF;
    for (size_t pos = 0; pos < length; pos++) {
        crc ^= (uint16_t)buffer[pos];
        for (int i = 8; i != 0; i--) {
            if ((crc & 0x0001) != 0) {
                crc >>= 1;
                crc ^= 0xA001;
            } else {
                crc >>= 1;
            }
        }
    }
    return crc;
}

void modbus_slave_init(modbus_slave_t *slave, uint8_t slave_addr) {
    if (!slave) return;
    memset(slave, 0, sizeof(*slave));
    slave->slave_address = slave_addr;
}

size_t modbus_slave_process_frame(modbus_slave_t *slave, const uint8_t *rx_buf, size_t rx_len, uint8_t *tx_buf, size_t max_tx_len) {
    if (!slave || !rx_buf || rx_len < 4 || !tx_buf) return 0;

    /* Verify CRC16 */
    uint16_t received_crc = (uint16_t)rx_buf[rx_len - 2] | ((uint16_t)rx_buf[rx_len - 1] << 8);
    uint16_t computed_crc = modbus_crc16(rx_buf, rx_len - 2);

    if (received_crc != computed_crc) {
        slave->crc_errors++;
        return 0;
    }

    uint8_t dev_addr = rx_buf[0];
    if (dev_addr != slave->slave_address && dev_addr != 0) {
        return 0; /* Not for this slave */
    }

    uint8_t func_code = rx_buf[1];
    size_t tx_len = 0;

    switch (func_code) {
        case MODBUS_FC_READ_HOLDING_REGISTERS: {
            uint16_t start_reg = ((uint16_t)rx_buf[2] << 8) | rx_buf[3];
            uint16_t reg_count = ((uint16_t)rx_buf[4] << 8) | rx_buf[5];

            if ((start_reg + reg_count) > MODBUS_HOLDING_REGS_COUNT || (reg_count * 2 + 5) > max_tx_len) {
                /* Exception 0x02: Illegal Data Address */
                tx_buf[0] = slave->slave_address;
                tx_buf[1] = func_code | 0x80;
                tx_buf[2] = MODBUS_EX_ILLEGAL_DATA_ADDRESS;
                tx_len = 3;
            } else {
                tx_buf[0] = slave->slave_address;
                tx_buf[1] = func_code;
                tx_buf[2] = (uint8_t)(reg_count * 2);
                tx_len = 3;

                for (uint16_t i = 0; i < reg_count; ++i) {
                    uint16_t val = slave->holding_registers[start_reg + i];
                    tx_buf[tx_len++] = (uint8_t)(val >> 8);
                    tx_buf[tx_len++] = (uint8_t)(val & 0xFF);
                }
            }
            break;
        }

        case MODBUS_FC_WRITE_SINGLE_REGISTER: {
            uint16_t reg_addr = ((uint16_t)rx_buf[2] << 8) | rx_buf[3];
            uint16_t reg_val  = ((uint16_t)rx_buf[4] << 8) | rx_buf[5];

            if (reg_addr >= MODBUS_HOLDING_REGS_COUNT) {
                tx_buf[0] = slave->slave_address;
                tx_buf[1] = func_code | 0x80;
                tx_buf[2] = MODBUS_EX_ILLEGAL_DATA_ADDRESS;
                tx_len = 3;
            } else {
                slave->holding_registers[reg_addr] = reg_val;
                memcpy(tx_buf, rx_buf, 6);
                tx_len = 6;
            }
            break;
        }

        default:
            /* Illegal Function */
            tx_buf[0] = slave->slave_address;
            tx_buf[1] = func_code | 0x80;
            tx_buf[2] = MODBUS_EX_ILLEGAL_FUNCTION;
            tx_len = 3;
            break;
    }

    /* Append CRC-16 */
    uint16_t resp_crc = modbus_crc16(tx_buf, tx_len);
    tx_buf[tx_len++] = (uint8_t)(resp_crc & 0xFF);
    tx_buf[tx_len++] = (uint8_t)(resp_crc >> 8);

    slave->requests_processed++;
    return tx_len;
}

void modbus_set_holding_reg(modbus_slave_t *slave, uint16_t address, uint16_t value) {
    if (slave && address < MODBUS_HOLDING_REGS_COUNT) {
        slave->holding_registers[address] = value;
    }
}

uint16_t modbus_get_holding_reg(const modbus_slave_t *slave, uint16_t address) {
    if (slave && address < MODBUS_HOLDING_REGS_COUNT) {
        return slave->holding_registers[address];
    }
    return 0;
}

void modbus_set_input_reg(modbus_slave_t *slave, uint16_t address, uint16_t value) {
    if (slave && address < MODBUS_INPUT_REGS_COUNT) {
        slave->input_registers[address] = value;
    }
}
