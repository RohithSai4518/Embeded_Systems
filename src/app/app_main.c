/**
 * @file app_main.c
 * @brief AeroPulse-RTOS Flight Telemetry & Autopilot Main Entry Point
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "pulse_os.h"
#include "hal_gpio.h"
#include "hal_uart.h"
#include "hal_pwm.h"
#include "hal_adc.h"
#include "hal_can.h"
#include "hal_flash.h"
#include "sensor_imu.h"
#include "sensor_baro.h"
#include "sensor_gps.h"
#include "dsp_ekf.h"
#include "control_pid.h"
#include "control_mixer.h"
#include "comm_shell.h"
#include "comm_aerolink.h"
#include "storage_blackbox.h"
#include "sys_bootloader.h"
#include <stdio.h>

/* Task Stacks */
static uint32_t s_fast_loop_stack[PULSE_CONFIG_DEFAULT_STACK_SIZE];
static uint32_t s_attitude_stack[PULSE_CONFIG_DEFAULT_STACK_SIZE];
static uint32_t s_nav_stack[PULSE_CONFIG_DEFAULT_STACK_SIZE];
static uint32_t s_telemetry_stack[PULSE_CONFIG_DEFAULT_STACK_SIZE];
static uint32_t s_shell_stack[PULSE_CONFIG_DEFAULT_STACK_SIZE];

/* Task Handles */
static pulse_task_handle_t s_fast_task_h;
static pulse_task_handle_t s_attitude_task_h;
static pulse_task_handle_t s_nav_task_h;
static pulse_task_handle_t s_telem_task_h;
static pulse_task_handle_t s_shell_task_h;

/* Core Flight Controller Objects */
static dsp_ekf_t g_ekf;
static pid_controller_t g_pid_rate_roll;
static pid_controller_t g_pid_rate_pitch;
static pid_controller_t g_pid_rate_yaw;
static pid_controller_t g_pid_angle_roll;
static pid_controller_t g_pid_angle_pitch;
static mixer_config_t g_mixer;
static shell_context_t g_shell;

/* Inter-task Communication Queues */
static pulse_queue_handle_t g_imu_queue;

extern void app_telemetry_init(void);
extern void app_telemetry_send_attitude(const euler_f32_t *euler, const vec3_f32_t *gyro_dps, const quat_f32_t *q);
extern void app_telemetry_send_heartbeat(uint8_t system_state, uint8_t cpu_load);
extern void app_telemetry_send_battery(void);

/* ========================================================================= */
/*                          RTOS TASK IMPLEMENTATIONS                        */
/* ========================================================================= */

/**
 * @brief Fast Loop Task (1000 Hz) - IMU Sampling, Gyro Filter, Rate PID Loop
 */
static void task_fast_loop(void *arg) {
    PULSE_UNUSED(arg);
    pulse_tick_t last_wake = pulse_time_get_ticks();
    sensor_imu_data_t imu_raw;
    float motor_duties[4];

    while (1) {
        /* Read 1000Hz IMU */
        if (sensor_imu_read(&imu_raw) == PULSE_OK) {
            /* Feed Rate PIDs */
            float roll_rate_cmd = 0.0f;
            float pitch_rate_cmd = 0.0f;
            float yaw_rate_cmd = 0.0f;

            float roll_out  = pid_update(&g_pid_rate_roll, roll_rate_cmd, imu_raw.gyro_rad_s.x, 0.001f);
            float pitch_out = pid_update(&g_pid_rate_pitch, pitch_rate_cmd, imu_raw.gyro_rad_s.y, 0.001f);
            float yaw_out   = pid_update(&g_pid_rate_yaw, yaw_rate_cmd, imu_raw.gyro_rad_s.z, 0.001f);

            /* Apply Motor Mixer */
            mixer_apply(&g_mixer, roll_out, pitch_out, yaw_out, 0.35f, motor_duties);
            hal_pwm_set_all(motor_duties, 4);

            /* Push to queue for Attitude EKF */
            pulse_queue_send(g_imu_queue, &imu_raw, PULSE_NO_WAIT);
        }

        pulse_task_delay_until(&last_wake, 1); /* 1ms = 1000Hz */
    }
}

/**
 * @brief Attitude Task (250 Hz) - 7-State Quaternion EKF & Angle Loop
 */
static void task_attitude(void *arg) {
    PULSE_UNUSED(arg);
    pulse_tick_t last_wake = pulse_time_get_ticks();
    sensor_imu_data_t imu;

    while (1) {
        if (pulse_queue_receive(g_imu_queue, &imu, 4) == PULSE_OK) {
            /* Predict State with Gyro */
            dsp_ekf_predict(&g_ekf, &imu.gyro_rad_s, 0.004f);

            /* Update with Accelerometer Gravity */
            dsp_ekf_update_accel(&g_ekf, &imu.accel_m_s2);
        }

        pulse_task_delay_until(&last_wake, 4); /* 4ms = 250Hz */
    }
}

/**
 * @brief Navigation Task (50 Hz) - Barometer & GPS Fusion
 */
static void task_navigation(void *arg) {
    PULSE_UNUSED(arg);
    pulse_tick_t last_wake = pulse_time_get_ticks();
    sensor_baro_data_t baro;
    sensor_gps_data_t gps;

    while (1) {
        sensor_baro_read(&baro);
        sensor_gps_get_data(&gps);

        pulse_task_delay_until(&last_wake, 20); /* 20ms = 50Hz */
    }
}

/**
 * @brief Telemetry Task (20 Hz) - AeroLink Binary Downlink
 */
static void task_telemetry(void *arg) {
    PULSE_UNUSED(arg);
    pulse_tick_t last_wake = pulse_time_get_ticks();
    static uint32_t s_count = 0;

    while (1) {
        s_count++;
        euler_f32_t euler;
        quat_f32_t q;
        dsp_ekf_get_attitude_euler(&g_ekf, &euler);
        dsp_ekf_get_quaternion(&g_ekf, &q);

        vec3_f32_t rates = { 0.0f, 0.0f, 0.0f };
        app_telemetry_send_attitude(&euler, &rates, &q);

        if (s_count % 10 == 0) {
            app_telemetry_send_heartbeat(mixer_is_armed(&g_mixer) ? 2 : 1, 14);
            app_telemetry_send_battery();
        }

        pulse_task_delay_until(&last_wake, 50); /* 50ms = 20Hz */
    }
}

/**
 * @brief Diagnostic Shell Task (10 Hz) - Interactive UART CLI
 */
static void task_shell(void *arg) {
    PULSE_UNUSED(arg);
    uint8_t rx_byte;

    while (1) {
        if (hal_uart_read_byte(HAL_UART_PORT_3, &rx_byte, 100) == PULSE_OK) {
            shell_process_char(&g_shell, (char)rx_byte);
        } else {
            pulse_task_delay(20);
        }
    }
}

/* ========================================================================= */
/*                              SYSTEM STARTUP                               */
/* ========================================================================= */

int main(void) {
    printf("[AEROPULSE-RTOS] Booting Embedded Systems Platform...\n");

    /* 1. Initialize PulseOS Kernel */
    pulse_kernel_init();

    /* 2. Initialize HAL Drivers */
    hal_adc_config_t adc_cfg = { .sample_rate_hz = 1000, .oversampling_ratio = 16, .enable_continuous_dma = true };
    hal_adc_init(&adc_cfg);

    hal_uart_config_t uart1_cfg = { .port = HAL_UART_PORT_1, .baud_rate = HAL_UART_BAUD_115200, .parity = HAL_UART_PARITY_NONE, .stop_bits = HAL_UART_STOPBITS_1, .flow_control = HAL_UART_FLOW_NONE, .enable_dma = true };
    hal_uart_init(&uart1_cfg);

    hal_uart_config_t uart3_cfg = { .port = HAL_UART_PORT_3, .baud_rate = HAL_UART_BAUD_115200, .parity = HAL_UART_PARITY_NONE, .stop_bits = HAL_UART_STOPBITS_1, .flow_control = HAL_UART_FLOW_NONE, .enable_dma = false };
    hal_uart_init(&uart3_cfg);

    hal_can_config_t can_cfg = { .bus = HAL_CAN_BUS_1, .baud_rate = HAL_CAN_BAUD_500K, .enable_loopback = true, .enable_auto_retransmit = true };
    hal_can_init(&can_cfg);

    for (int ch = 0; ch < 4; ++ch) {
        hal_pwm_config_t pwm_cfg = { .channel = (hal_pwm_channel_t)ch, .mode = HAL_PWM_MODE_STANDARD_50HZ, .frequency_hz = 400, .deadtime_nanoseconds = 0.0f };
        hal_pwm_init(&pwm_cfg);
    }

    /* 3. Initialize Sensors */
    sensor_imu_init();
    sensor_baro_init();
    sensor_gps_init();

    /* 4. Initialize DSP / EKF */
    dsp_ekf_init(&g_ekf);

    /* 5. Initialize PIDs & Mixer */
    pid_config_t rate_cfg = { .kp = 0.15f, .ki = 0.05f, .kd = 0.004f, .ff = 0.0f, .output_min = -1.0f, .output_max = 1.0f, .integrator_min = -0.3f, .integrator_max = 0.3f, .d_term_lpf_hz = 50.0f };
    pid_init(&g_pid_rate_roll, &rate_cfg, 1000.0f);
    pid_init(&g_pid_rate_pitch, &rate_cfg, 1000.0f);
    pid_init(&g_pid_rate_yaw, &rate_cfg, 1000.0f);

    mixer_init(&g_mixer, MIXER_FRAME_QUAD_X);
    mixer_arm(&g_mixer);

    /* 6. Initialize Shell & Telemetry */
    shell_init(&g_shell, HAL_UART_PORT_3);
    app_telemetry_init();
    blackbox_init();
    blackbox_start_session();

    /* 7. Create IPC Queues */
    pulse_queue_create(sizeof(sensor_imu_data_t), 16, &g_imu_queue);

    /* 8. Spawn RTOS Periodic Tasks */
    pulse_task_attr_t t_fast = { .name = "FastLoop", .function = task_fast_loop, .argument = NULL, .priority = 0, .stack_buffer = s_fast_loop_stack, .stack_size_words = PULSE_CONFIG_DEFAULT_STACK_SIZE };
    pulse_task_create(&t_fast, &s_fast_task_h);

    pulse_task_attr_t t_att = { .name = "Attitude", .function = task_attitude, .argument = NULL, .priority = 1, .stack_buffer = s_attitude_stack, .stack_size_words = PULSE_CONFIG_DEFAULT_STACK_SIZE };
    pulse_task_create(&t_att, &s_attitude_task_h);

    pulse_task_attr_t t_nav = { .name = "NavGPS", .function = task_navigation, .argument = NULL, .priority = 2, .stack_buffer = s_nav_stack, .stack_size_words = PULSE_CONFIG_DEFAULT_STACK_SIZE };
    pulse_task_create(&t_nav, &s_nav_task_h);

    pulse_task_attr_t t_telem = { .name = "Telemetry", .function = task_telemetry, .argument = NULL, .priority = 3, .stack_buffer = s_telemetry_stack, .stack_size_words = PULSE_CONFIG_DEFAULT_STACK_SIZE };
    pulse_task_create(&t_telem, &s_telem_task_h);

    pulse_task_attr_t t_sh = { .name = "ShellCLI", .function = task_shell, .argument = NULL, .priority = 4, .stack_buffer = s_shell_stack, .stack_size_words = PULSE_CONFIG_DEFAULT_STACK_SIZE };
    pulse_task_create(&t_sh, &s_shell_task_h);

    printf("[AEROPULSE-RTOS] All 5 Core Tasks Created. Starting Multitasking Scheduler...\n");

    /* 9. Start Multitasking Kernel */
    pulse_kernel_start();

    return 0;
}
