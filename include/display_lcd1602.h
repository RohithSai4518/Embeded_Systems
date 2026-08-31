/**
 * @file display_lcd1602.h
 * @brief HD44780 16x2 Character LCD Driver with I2C PCF8574 Backpack
 * @author Embedded Systems Engineering Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef DISPLAY_LCD1602_H
#define DISPLAY_LCD1602_H

#include "streetlight_types.h"

#ifdef __cplusplus
extern "C" {
#endif

sys_status_t lcd1602_init(uint8_t i2c_addr);
sys_status_t lcd1602_clear(void);
sys_status_t lcd1602_set_cursor(uint8_t row, uint8_t col);
sys_status_t lcd1602_print(const char *str);
sys_status_t lcd1602_printf(uint8_t row, uint8_t col, const char *format, ...);
const char* lcd1602_get_line_buffer(uint8_t row);

#ifdef __cplusplus
}
#endif

#endif /* DISPLAY_LCD1602_H */
