/**
 * @file hal_spi.c
 * @brief Hardware Abstraction Layer - SPI Bus Implementation
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "hal_spi.h"
#include <string.h>

typedef struct {
    hal_spi_config_t config;
    bool is_initialized;
} spi_bus_internal_t;

static spi_bus_internal_t g_spi_buses[HAL_SPI_BUS_COUNT];

/* Mock SPI register map for simulation / hardware memory map */
static uint8_t g_mock_spi_regs[HAL_SPI_BUS_COUNT][256];

pulse_status_t hal_spi_init(const hal_spi_config_t *config) {
    if (!config || config->bus >= HAL_SPI_BUS_COUNT) {
        return PULSE_ERROR_INVALID_PARAM;
    }

    g_spi_buses[config->bus].config = *config;
    g_spi_buses[config->bus].is_initialized = true;

    /* Initialize mock sensor registers for IMU WHO_AM_I, etc. */
    g_mock_spi_regs[config->bus][0x00] = 0x1E; /* BMI088 Accel Chip ID */
    g_mock_spi_regs[config->bus][0x0F] = 0x0F; /* BMI088 Gyro Chip ID */

    return PULSE_OK;
}

pulse_status_t hal_spi_transfer(const hal_spi_device_t *dev, const uint8_t *tx_buf, uint8_t *rx_buf, size_t len, pulse_tick_t timeout) {
    if (!dev || dev->bus >= HAL_SPI_BUS_COUNT || len == 0) {
        return PULSE_ERROR_INVALID_PARAM;
    }
    if (!g_spi_buses[dev->bus].is_initialized) return PULSE_ERROR_NOT_INITIALIZED;

    PULSE_UNUSED(timeout);

    /* Assert Chip Select (Active Low) */
    hal_gpio_write(dev->cs_port, dev->cs_pin, false);

    for (size_t i = 0; i < len; ++i) {
        uint8_t tx = tx_buf ? tx_buf[i] : 0xFF;
        uint8_t rx = 0x00;

        /* Emulate SPI peripheral exchange */
        if (i == 0) {
            rx = 0x00; /* Address phase */
        } else if (tx_buf && (tx_buf[0] & 0x80)) {
            /* Read transaction with address in first byte */
            uint8_t reg_addr = (tx_buf[0] & 0x7F) + (uint8_t)(i - 1);
            rx = g_mock_spi_regs[dev->bus][reg_addr];
        }

        if (rx_buf) {
            rx_buf[i] = rx;
        }
    }

    /* De-assert Chip Select (Active High) */
    hal_gpio_write(dev->cs_port, dev->cs_pin, true);

    return PULSE_OK;
}

pulse_status_t hal_spi_write(const hal_spi_device_t *dev, const uint8_t *tx_buf, size_t len, pulse_tick_t timeout) {
    return hal_spi_transfer(dev, tx_buf, NULL, len, timeout);
}

pulse_status_t hal_spi_read(const hal_spi_device_t *dev, uint8_t *rx_buf, size_t len, pulse_tick_t timeout) {
    return hal_spi_transfer(dev, NULL, rx_buf, len, timeout);
}

pulse_status_t hal_spi_read_reg(const hal_spi_device_t *dev, uint8_t reg_addr, uint8_t *data, size_t len, pulse_tick_t timeout) {
    if (!dev || !data || len == 0) return PULSE_ERROR_INVALID_PARAM;

    uint8_t tx_cmd[len + 1];
    uint8_t rx_cmd[len + 1];
    memset(tx_cmd, 0, sizeof(tx_cmd));
    tx_cmd[0] = reg_addr | 0x80; /* Set MSB for Read in standard SPI sensors */

    pulse_status_t status = hal_spi_transfer(dev, tx_cmd, rx_cmd, len + 1, timeout);
    if (status == PULSE_OK) {
        memcpy(data, &rx_cmd[1], len);
    }
    return status;
}

pulse_status_t hal_spi_write_reg(const hal_spi_device_t *dev, uint8_t reg_addr, const uint8_t *data, size_t len, pulse_tick_t timeout) {
    if (!dev || !data || len == 0) return PULSE_ERROR_INVALID_PARAM;

    uint8_t tx_buf[len + 1];
    tx_buf[0] = reg_addr & 0x7F; /* Clear MSB for Write */
    memcpy(&tx_buf[1], data, len);

    /* Update internal simulated register store */
    for (size_t i = 0; i < len; ++i) {
        g_mock_spi_regs[dev->bus][(reg_addr & 0x7F) + i] = data[i];
    }

    return hal_spi_transfer(dev, tx_buf, NULL, len + 1, timeout);
}
