/**
 * @file storage_blackbox.h
 * @brief High-Speed Circular Blackbox Flight Data Recorder & Crash Dump Storage
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef STORAGE_BLACKBOX_H
#define STORAGE_BLACKBOX_H

#include "pulse_types.h"
#include "sensor_imu.h"
#include "sensor_baro.h"

#ifdef __cplusplus
extern "C" {
#endif

#define BLACKBOX_HEADER_MAGIC 0x424C4143 /* 'BLAC' */

typedef enum {
    BLACKBOX_LOG_PERIODIC_FAST = 1,
    BLACKBOX_LOG_PERIODIC_SLOW = 2,
    BLACKBOX_LOG_EVENT_ARM     = 3,
    BLACKBOX_LOG_EVENT_DISARM  = 4,
    BLACKBOX_LOG_EVENT_ERROR   = 5,
    BLACKBOX_LOG_CRASH_DUMP    = 6
} blackbox_record_type_t;

#pragma pack(push, 1)
typedef struct {
    uint32_t magic;
    uint32_t session_id;
    uint32_t start_timestamp_ms;
    uint32_t write_pointer;
    uint32_t total_records;
    uint32_t crc32;
} blackbox_meta_header_t;

typedef struct {
    uint32_t timestamp_us;
    uint8_t record_type;
    int16_t gyro[3];            /**< Scaled * 16.4 */
    int16_t accel[3];           /**< Scaled * 2048 */
    int16_t attitude[3];        /**< Roll, Pitch, Yaw in 0.1 deg */
    uint16_t motor_duties[4];   /**< 0 - 1000 */
    uint16_t vbat_mv;
    uint16_t current_ma;
    uint32_t flags;
} blackbox_fast_entry_t;
#pragma pack(pop)

pulse_status_t blackbox_init(void);
pulse_status_t blackbox_start_session(void);
pulse_status_t blackbox_log_fast_entry(const blackbox_fast_entry_t *entry);
pulse_status_t blackbox_log_event(blackbox_record_type_t type, uint32_t data);
pulse_status_t blackbox_flush_to_flash(void);
uint32_t blackbox_get_record_count(void);
void blackbox_erase_all(void);

#ifdef __cplusplus
}
#endif

#endif /* STORAGE_BLACKBOX_H */
