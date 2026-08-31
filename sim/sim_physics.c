/**
 * @file sim_physics.c
 * @brief 6-DoF Rigid Body Flight Dynamics & Aerodynamics Simulator
 * @author AeroPulse Core Systems Team
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "pulse_types.h"
#include <math.h>
#include <string.h>

typedef struct {
    vec3_f32_t position_ned_m;
    vec3_f32_t velocity_ned_m_s;
    vec3_f32_t accel_body_m_s2;
    vec3_f32_t omega_body_rad_s;
    euler_f32_t attitude_deg;
    float vehicle_mass_kg;
    float arm_length_m;
    float motor_thrust_coef;
    float drag_coef;
    float motor_speeds_rad_s[4];
} sim_physics_state_t;

static sim_physics_state_t g_sim_phys;

void sim_physics_init(void) {
    memset(&g_sim_phys, 0, sizeof(g_sim_phys));
    g_sim_phys.position_ned_m.z = -145.0f; /* 145m altitude */
    g_sim_phys.vehicle_mass_kg = 1.25f;    /* 1.25 kg Quadcopter */
    g_sim_phys.arm_length_m = 0.225f;      /* 450mm wheelbase */
    g_sim_phys.motor_thrust_coef = 1.5e-5f;
    g_sim_phys.drag_coef = 0.08f;
}

void sim_physics_step(float dt_seconds, const float motor_duties[4]) {
    if (dt_seconds <= 0.0f) return;

    /* Calculate total vertical thrust from 4 rotors */
    float total_thrust_n = 0.0f;
    for (int i = 0; i < 4; ++i) {
        float rpm = motor_duties[i] * 12000.0f;
        float thrust = g_sim_phys.motor_thrust_coef * (rpm * rpm * 0.001f);
        total_thrust_n += thrust;
    }

    /* Net Z-acceleration: Gravity (9.81 m/s^2 down) - Thrust / Mass */
    float net_accel_z = 9.80665f - (total_thrust_n / g_sim_phys.vehicle_mass_kg);

    /* Integrate velocity and position */
    g_sim_phys.velocity_ned_m_s.z += net_accel_z * dt_seconds;
    g_sim_phys.position_ned_m.z += g_sim_phys.velocity_ned_m_s.z * dt_seconds;

    /* Clamp ground contact */
    if (g_sim_phys.position_ned_m.z > 0.0f) {
        g_sim_phys.position_ned_m.z = 0.0f;
        g_sim_phys.velocity_ned_m_s.z = 0.0f;
    }
}

float sim_physics_get_altitude(void) {
    return -g_sim_phys.position_ned_m.z;
}
