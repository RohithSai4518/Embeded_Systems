/**
 * @file hal_spi.h
 * @brief Hardware Abstraction Layer - SPI Bus Controller
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef HAL_SPI_H
#define HAL_SPI_H

#include "pulse_types.h"
#include "hal_gpio.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    HAL_SPI_BUS_1 = 0,      /**< High-speed IMU Bus (up to 20 MHz) */
    HAL_SPI_BUS_2,          /**< Flash Memory Bus */
    HAL_SPI_BUS_3,          /**< Auxiliary Sensor Bus */
    HAL_SPI_BUS_COUNT
} hal_spi_bus_t;

typedef enum {
    HAL_SPI_MODE_0 = 0,     /**< CPOL = 0, CPHA = 0 */
    HAL_SPI_MODE_1,         /**< CPOL = 0, CPHA = 1 */
    HAL_SPI_MODE_2,         /**< CPOL = 1, CPHA = 0 */
    HAL_SPI_MODE_3          /**< CPOL = 1, CPHA = 1 */
} hal_spi_mode_t;

typedef enum {
    HAL_SPI_BITORDER_MSB_FIRST = 0,
    HAL_SPI_BITORDER_LSB_FIRST
} hal_spi_bitorder_t;

typedef struct {
    hal_spi_bus_t bus;
    uint32_t frequency_hz;
    hal_spi_mode_t mode;
    hal_spi_bitorder_t bit_order;
    bool enable_dma;
} hal_spi_config_t;

typedef struct {
    hal_spi_bus_t bus;
    hal_gpio_port_t cs_port;
    hal_gpio_pin_t cs_pin;
} hal_spi_device_t;

pulse_status_t hal_spi_init(const hal_spi_config_t *config);
pulse_status_t hal_spi_transfer(const hal_spi_device_t *dev, const uint8_t *tx_buf, uint8_t *rx_buf, size_t len, pulse_tick_t timeout);
pulse_status_t hal_spi_write(const hal_spi_device_t *dev, const uint8_t *tx_buf, size_t len, pulse_tick_t timeout);
pulse_status_t hal_spi_read(const hal_spi_device_t *dev, uint8_t *rx_buf, size_t len, pulse_tick_t timeout);
pulse_status_t hal_spi_read_reg(const hal_spi_device_t *dev, uint8_t reg_addr, uint8_t *data, size_t len, pulse_tick_t timeout);
pulse_status_t hal_spi_write_reg(const hal_spi_device_t *dev, uint8_t reg_addr, const uint8_t *data, size_t len, pulse_tick_t timeout);

#ifdef __cplusplus
}
#endif

#endif /* HAL_SPI_H */
