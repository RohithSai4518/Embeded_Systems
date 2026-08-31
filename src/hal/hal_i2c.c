/**
 * @file hal_i2c.c
 * @brief Hardware Abstraction Layer - I2C Master Implementation
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "hal_i2c.h"
#include <string.h>

typedef struct {
    hal_i2c_config_t config;
    bool is_initialized;
} i2c_bus_internal_t;

static i2c_bus_internal_t g_i2c_buses[HAL_I2C_BUS_COUNT];

/* Mock I2C device registers for BMP388 (0x76/0x77), Magnetometer (0x1E), etc. */
static uint8_t g_mock_i2c_devs[128][256];

pulse_status_t hal_i2c_init(const hal_i2c_config_t *config) {
    if (!config || config->bus >= HAL_I2C_BUS_COUNT) {
        return PULSE_ERROR_INVALID_PARAM;
    }

    g_i2c_buses[config->bus].config = *config;
    g_i2c_buses[config->bus].is_initialized = true;

    /* Initialize Mock Sensor Device Registers */
    g_mock_i2c_devs[0x76][0x00] = 0x50; /* BMP388 Chip ID */
    g_mock_i2c_devs[0x77][0x00] = 0x50;
    g_mock_i2c_devs[0x1E][0x0F] = 0x3D; /* LIS3MDL Mag Chip ID */

    return PULSE_OK;
}

pulse_status_t hal_i2c_write(hal_i2c_bus_t bus, uint8_t dev_addr, const uint8_t *data, size_t len, pulse_tick_t timeout) {
    if (bus >= HAL_I2C_BUS_COUNT || dev_addr > 0x7F || !data || len == 0) {
        return PULSE_ERROR_INVALID_PARAM;
    }
    if (!g_i2c_buses[bus].is_initialized) return PULSE_ERROR_NOT_INITIALIZED;

    PULSE_UNUSED(timeout);

    /* Emulate writing to register map */
    if (len >= 2) {
        uint8_t reg = data[0];
        for (size_t i = 1; i < len; ++i) {
            g_mock_i2c_devs[dev_addr][(uint8_t)(reg + i - 1)] = data[i];
        }
    }

    return PULSE_OK;
}

pulse_status_t hal_i2c_read(hal_i2c_bus_t bus, uint8_t dev_addr, uint8_t *buffer, size_t len, pulse_tick_t timeout) {
    if (bus >= HAL_I2C_BUS_COUNT || dev_addr > 0x7F || !buffer || len == 0) {
        return PULSE_ERROR_INVALID_PARAM;
    }
    if (!g_i2c_buses[bus].is_initialized) return PULSE_ERROR_NOT_INITIALIZED;

    PULSE_UNUSED(timeout);

    for (size_t i = 0; i < len; ++i) {
        buffer[i] = g_mock_i2c_devs[dev_addr][(uint8_t)i];
    }

    return PULSE_OK;
}

pulse_status_t hal_i2c_write_reg(hal_i2c_bus_t bus, uint8_t dev_addr, uint8_t reg_addr, const uint8_t *data, size_t len, pulse_tick_t timeout) {
    if (bus >= HAL_I2C_BUS_COUNT || !data || len == 0) return PULSE_ERROR_INVALID_PARAM;

    uint8_t temp[len + 1];
    temp[0] = reg_addr;
    memcpy(&temp[1], data, len);

    return hal_i2c_write(bus, dev_addr, temp, len + 1, timeout);
}

pulse_status_t hal_i2c_read_reg(hal_i2c_bus_t bus, uint8_t dev_addr, uint8_t reg_addr, uint8_t *buffer, size_t len, pulse_tick_t timeout) {
    if (bus >= HAL_I2C_BUS_COUNT || dev_addr > 0x7F || !buffer || len == 0) {
        return PULSE_ERROR_INVALID_PARAM;
    }
    if (!g_i2c_buses[bus].is_initialized) return PULSE_ERROR_NOT_INITIALIZED;

    PULSE_UNUSED(timeout);

    for (size_t i = 0; i < len; ++i) {
        buffer[i] = g_mock_i2c_devs[dev_addr][(uint8_t)(reg_addr + i)];
    }

    return PULSE_OK;
}

pulse_status_t hal_i2c_probe(hal_i2c_bus_t bus, uint8_t dev_addr, pulse_tick_t timeout) {
    if (bus >= HAL_I2C_BUS_COUNT || dev_addr > 0x7F) return PULSE_ERROR_INVALID_PARAM;
    PULSE_UNUSED(timeout);

    /* Acknowledge known mock devices */
    if (dev_addr == 0x76 || dev_addr == 0x77 || dev_addr == 0x1E || dev_addr == 0x68) {
        return PULSE_OK;
    }
    return PULSE_ERROR_NOT_FOUND;
}
