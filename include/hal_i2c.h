/**
 * @file hal_i2c.h
 * @brief Hardware Abstraction Layer - I2C Master Bus Controller
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef HAL_I2C_H
#define HAL_I2C_H

#include "pulse_types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    HAL_I2C_BUS_1 = 0,      /**< Primary Onboard I2C (Baro, Mag) */
    HAL_I2C_BUS_2,          /**< External Expansion I2C */
    HAL_I2C_BUS_COUNT
} hal_i2c_bus_t;

typedef enum {
    HAL_I2C_SPEED_STANDARD = 100000,    /**< 100 kHz */
    HAL_I2C_SPEED_FAST     = 400000,    /**< 400 kHz */
    HAL_I2C_SPEED_FAST_PLUS= 1000000    /**< 1 MHz */
} hal_i2c_speed_t;

typedef struct {
    hal_i2c_bus_t bus;
    hal_i2c_speed_t clock_speed;
    bool enable_dma;
} hal_i2c_config_t;

pulse_status_t hal_i2c_init(const hal_i2c_config_t *config);
pulse_status_t hal_i2c_write(hal_i2c_bus_t bus, uint8_t dev_addr, const uint8_t *data, size_t len, pulse_tick_t timeout);
pulse_status_t hal_i2c_read(hal_i2c_bus_t bus, uint8_t dev_addr, uint8_t *buffer, size_t len, pulse_tick_t timeout);
pulse_status_t hal_i2c_write_reg(hal_i2c_bus_t bus, uint8_t dev_addr, uint8_t reg_addr, const uint8_t *data, size_t len, pulse_tick_t timeout);
pulse_status_t hal_i2c_read_reg(hal_i2c_bus_t bus, uint8_t dev_addr, uint8_t reg_addr, uint8_t *buffer, size_t len, pulse_tick_t timeout);
pulse_status_t hal_i2c_probe(hal_i2c_bus_t bus, uint8_t dev_addr, pulse_tick_t timeout);

#ifdef __cplusplus
}
#endif

#endif /* HAL_I2C_H */
