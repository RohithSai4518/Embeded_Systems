/**
 * @file display_lcd1602.c
 * @brief HD44780 16x2 Character LCD Driver Implementation
 * @author Embedded Systems Engineering Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "display_lcd1602.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

static char s_lcd_line1[17] = "                ";
static char s_lcd_line2[17] = "                ";
static uint8_t s_cursor_row = 0;
static uint8_t s_cursor_col = 0;

sys_status_t lcd1602_init(uint8_t i2c_addr) {
    (void)i2c_addr;
    lcd1602_clear();
    return SYS_OK;
}

sys_status_t lcd1602_clear(void) {
    memset(s_lcd_line1, ' ', 16);
    s_lcd_line1[16] = '\0';
    memset(s_lcd_line2, ' ', 16);
    s_lcd_line2[16] = '\0';
    s_cursor_row = 0;
    s_cursor_col = 0;
    return SYS_OK;
}

sys_status_t lcd1602_set_cursor(uint8_t row, uint8_t col) {
    s_cursor_row = (row > 1) ? 1 : row;
    s_cursor_col = (col > 15) ? 15 : col;
    return SYS_OK;
}

sys_status_t lcd1602_print(const char *str) {
    if (!str) return SYS_ERR_NULL_PTR;

    char *target = (s_cursor_row == 0) ? s_lcd_line1 : s_lcd_line2;
    size_t len = strlen(str);

    for (size_t i = 0; i < len && (s_cursor_col + i) < 16; ++i) {
        target[s_cursor_col + i] = str[i];
    }
    s_cursor_col = (uint8_t)(s_cursor_col + len);
    if (s_cursor_col > 15) s_cursor_col = 15;

    return SYS_OK;
}

sys_status_t lcd1602_printf(uint8_t row, uint8_t col, const char *format, ...) {
    if (!format) return SYS_ERR_NULL_PTR;

    char buffer[32];
    va_list args;
    va_start(args, format);
    vsnprintf(buffer, sizeof(buffer), format, args);
    va_end(args);

    lcd1602_set_cursor(row, col);
    return lcd1602_print(buffer);
}

const char* lcd1602_get_line_buffer(uint8_t row) {
    return (row == 0) ? s_lcd_line1 : s_lcd_line2;
}
