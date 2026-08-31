/**
 * @file comm_modbus.h
 * @brief Industrial Modbus RTU / TCP Slave Protocol Engine
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef COMM_MODBUS_H
#define COMM_MODBUS_H

#include "pulse_types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define MODBUS_HOLDING_REGS_COUNT   64
#define MODBUS_INPUT_REGS_COUNT     64
#define MODBUS_COILS_COUNT          64
#define MODBUS_DISCRETE_INPUTS_COUNT 64

typedef enum {
    MODBUS_FC_READ_COILS            = 0x01,
    MODBUS_FC_READ_DISCRETE_INPUTS  = 0x02,
    MODBUS_FC_READ_HOLDING_REGISTERS= 0x03,
    MODBUS_FC_READ_INPUT_REGISTERS  = 0x04,
    MODBUS_FC_WRITE_SINGLE_COIL     = 0x05,
    MODBUS_FC_WRITE_SINGLE_REGISTER = 0x06,
    MODBUS_FC_WRITE_MULTIPLE_COILS  = 0x0F,
    MODBUS_FC_WRITE_MULTIPLE_REGS   = 0x10
} modbus_function_code_t;

typedef enum {
    MODBUS_EX_NONE                  = 0x00,
    MODBUS_EX_ILLEGAL_FUNCTION      = 0x01,
    MODBUS_EX_ILLEGAL_DATA_ADDRESS  = 0x02,
    MODBUS_EX_ILLEGAL_DATA_VALUE    = 0x03,
    MODBUS_EX_SERVER_DEVICE_FAILURE = 0x04
} modbus_exception_t;

typedef struct {
    uint8_t slave_address;
    uint16_t holding_registers[MODBUS_HOLDING_REGS_COUNT];
    uint16_t input_registers[MODBUS_INPUT_REGS_COUNT];
    uint8_t coils[MODBUS_COILS_COUNT / 8];
    uint8_t discrete_inputs[MODBUS_DISCRETE_INPUTS_COUNT / 8];
    uint32_t requests_processed;
    uint32_t crc_errors;
} modbus_slave_t;

void modbus_slave_init(modbus_slave_t *slave, uint8_t slave_addr);
size_t modbus_slave_process_frame(modbus_slave_t *slave, const uint8_t *rx_buf, size_t rx_len, uint8_t *tx_buf, size_t max_tx_len);
void modbus_set_holding_reg(modbus_slave_t *slave, uint16_t address, uint16_t value);
uint16_t modbus_get_holding_reg(const modbus_slave_t *slave, uint16_t address);
void modbus_set_input_reg(modbus_slave_t *slave, uint16_t address, uint16_t value);

#ifdef __cplusplus
}
#endif

#endif /* COMM_MODBUS_H */
