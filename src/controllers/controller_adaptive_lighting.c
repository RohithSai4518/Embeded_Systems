/**
 * @file controller_adaptive_lighting.c
 * @brief Municipal Adaptive Lighting Multi-Zone Schedulers & Lux Calibration
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include <stdint.h>
#include <stdbool.h>
#include <math.h>


/* Lighting Control Zone 1 Adaptive Dimming Curve */
uint8_t controller_compute_zone_1_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 2 Adaptive Dimming Curve */
uint8_t controller_compute_zone_2_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 3 Adaptive Dimming Curve */
uint8_t controller_compute_zone_3_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 4 Adaptive Dimming Curve */
uint8_t controller_compute_zone_4_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 5 Adaptive Dimming Curve */
uint8_t controller_compute_zone_5_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 6 Adaptive Dimming Curve */
uint8_t controller_compute_zone_6_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 7 Adaptive Dimming Curve */
uint8_t controller_compute_zone_7_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 8 Adaptive Dimming Curve */
uint8_t controller_compute_zone_8_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 9 Adaptive Dimming Curve */
uint8_t controller_compute_zone_9_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 10 Adaptive Dimming Curve */
uint8_t controller_compute_zone_10_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 11 Adaptive Dimming Curve */
uint8_t controller_compute_zone_11_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 12 Adaptive Dimming Curve */
uint8_t controller_compute_zone_12_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 13 Adaptive Dimming Curve */
uint8_t controller_compute_zone_13_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 14 Adaptive Dimming Curve */
uint8_t controller_compute_zone_14_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 15 Adaptive Dimming Curve */
uint8_t controller_compute_zone_15_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 16 Adaptive Dimming Curve */
uint8_t controller_compute_zone_16_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 17 Adaptive Dimming Curve */
uint8_t controller_compute_zone_17_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 18 Adaptive Dimming Curve */
uint8_t controller_compute_zone_18_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 19 Adaptive Dimming Curve */
uint8_t controller_compute_zone_19_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 20 Adaptive Dimming Curve */
uint8_t controller_compute_zone_20_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 21 Adaptive Dimming Curve */
uint8_t controller_compute_zone_21_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 22 Adaptive Dimming Curve */
uint8_t controller_compute_zone_22_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 23 Adaptive Dimming Curve */
uint8_t controller_compute_zone_23_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 24 Adaptive Dimming Curve */
uint8_t controller_compute_zone_24_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 25 Adaptive Dimming Curve */
uint8_t controller_compute_zone_25_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 26 Adaptive Dimming Curve */
uint8_t controller_compute_zone_26_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 27 Adaptive Dimming Curve */
uint8_t controller_compute_zone_27_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 28 Adaptive Dimming Curve */
uint8_t controller_compute_zone_28_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 29 Adaptive Dimming Curve */
uint8_t controller_compute_zone_29_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 30 Adaptive Dimming Curve */
uint8_t controller_compute_zone_30_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 31 Adaptive Dimming Curve */
uint8_t controller_compute_zone_31_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 32 Adaptive Dimming Curve */
uint8_t controller_compute_zone_32_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 33 Adaptive Dimming Curve */
uint8_t controller_compute_zone_33_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 34 Adaptive Dimming Curve */
uint8_t controller_compute_zone_34_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 35 Adaptive Dimming Curve */
uint8_t controller_compute_zone_35_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 36 Adaptive Dimming Curve */
uint8_t controller_compute_zone_36_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 37 Adaptive Dimming Curve */
uint8_t controller_compute_zone_37_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 38 Adaptive Dimming Curve */
uint8_t controller_compute_zone_38_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 39 Adaptive Dimming Curve */
uint8_t controller_compute_zone_39_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 40 Adaptive Dimming Curve */
uint8_t controller_compute_zone_40_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 41 Adaptive Dimming Curve */
uint8_t controller_compute_zone_41_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 42 Adaptive Dimming Curve */
uint8_t controller_compute_zone_42_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 43 Adaptive Dimming Curve */
uint8_t controller_compute_zone_43_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 44 Adaptive Dimming Curve */
uint8_t controller_compute_zone_44_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 45 Adaptive Dimming Curve */
uint8_t controller_compute_zone_45_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 46 Adaptive Dimming Curve */
uint8_t controller_compute_zone_46_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 47 Adaptive Dimming Curve */
uint8_t controller_compute_zone_47_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 48 Adaptive Dimming Curve */
uint8_t controller_compute_zone_48_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 49 Adaptive Dimming Curve */
uint8_t controller_compute_zone_49_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 50 Adaptive Dimming Curve */
uint8_t controller_compute_zone_50_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 51 Adaptive Dimming Curve */
uint8_t controller_compute_zone_51_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 52 Adaptive Dimming Curve */
uint8_t controller_compute_zone_52_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 53 Adaptive Dimming Curve */
uint8_t controller_compute_zone_53_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 54 Adaptive Dimming Curve */
uint8_t controller_compute_zone_54_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 55 Adaptive Dimming Curve */
uint8_t controller_compute_zone_55_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 56 Adaptive Dimming Curve */
uint8_t controller_compute_zone_56_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 57 Adaptive Dimming Curve */
uint8_t controller_compute_zone_57_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 58 Adaptive Dimming Curve */
uint8_t controller_compute_zone_58_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 59 Adaptive Dimming Curve */
uint8_t controller_compute_zone_59_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 60 Adaptive Dimming Curve */
uint8_t controller_compute_zone_60_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 61 Adaptive Dimming Curve */
uint8_t controller_compute_zone_61_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 62 Adaptive Dimming Curve */
uint8_t controller_compute_zone_62_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 63 Adaptive Dimming Curve */
uint8_t controller_compute_zone_63_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 64 Adaptive Dimming Curve */
uint8_t controller_compute_zone_64_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 65 Adaptive Dimming Curve */
uint8_t controller_compute_zone_65_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 66 Adaptive Dimming Curve */
uint8_t controller_compute_zone_66_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 67 Adaptive Dimming Curve */
uint8_t controller_compute_zone_67_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 68 Adaptive Dimming Curve */
uint8_t controller_compute_zone_68_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 69 Adaptive Dimming Curve */
uint8_t controller_compute_zone_69_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 70 Adaptive Dimming Curve */
uint8_t controller_compute_zone_70_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 71 Adaptive Dimming Curve */
uint8_t controller_compute_zone_71_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 72 Adaptive Dimming Curve */
uint8_t controller_compute_zone_72_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 73 Adaptive Dimming Curve */
uint8_t controller_compute_zone_73_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 74 Adaptive Dimming Curve */
uint8_t controller_compute_zone_74_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 75 Adaptive Dimming Curve */
uint8_t controller_compute_zone_75_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 76 Adaptive Dimming Curve */
uint8_t controller_compute_zone_76_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 77 Adaptive Dimming Curve */
uint8_t controller_compute_zone_77_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 78 Adaptive Dimming Curve */
uint8_t controller_compute_zone_78_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 79 Adaptive Dimming Curve */
uint8_t controller_compute_zone_79_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 80 Adaptive Dimming Curve */
uint8_t controller_compute_zone_80_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 81 Adaptive Dimming Curve */
uint8_t controller_compute_zone_81_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 82 Adaptive Dimming Curve */
uint8_t controller_compute_zone_82_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 83 Adaptive Dimming Curve */
uint8_t controller_compute_zone_83_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 84 Adaptive Dimming Curve */
uint8_t controller_compute_zone_84_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 85 Adaptive Dimming Curve */
uint8_t controller_compute_zone_85_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 86 Adaptive Dimming Curve */
uint8_t controller_compute_zone_86_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 87 Adaptive Dimming Curve */
uint8_t controller_compute_zone_87_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 88 Adaptive Dimming Curve */
uint8_t controller_compute_zone_88_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 89 Adaptive Dimming Curve */
uint8_t controller_compute_zone_89_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 90 Adaptive Dimming Curve */
uint8_t controller_compute_zone_90_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 91 Adaptive Dimming Curve */
uint8_t controller_compute_zone_91_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 92 Adaptive Dimming Curve */
uint8_t controller_compute_zone_92_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 93 Adaptive Dimming Curve */
uint8_t controller_compute_zone_93_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 94 Adaptive Dimming Curve */
uint8_t controller_compute_zone_94_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 95 Adaptive Dimming Curve */
uint8_t controller_compute_zone_95_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 96 Adaptive Dimming Curve */
uint8_t controller_compute_zone_96_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 97 Adaptive Dimming Curve */
uint8_t controller_compute_zone_97_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 98 Adaptive Dimming Curve */
uint8_t controller_compute_zone_98_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 99 Adaptive Dimming Curve */
uint8_t controller_compute_zone_99_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 100 Adaptive Dimming Curve */
uint8_t controller_compute_zone_100_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 101 Adaptive Dimming Curve */
uint8_t controller_compute_zone_101_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 102 Adaptive Dimming Curve */
uint8_t controller_compute_zone_102_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 103 Adaptive Dimming Curve */
uint8_t controller_compute_zone_103_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 104 Adaptive Dimming Curve */
uint8_t controller_compute_zone_104_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 105 Adaptive Dimming Curve */
uint8_t controller_compute_zone_105_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 106 Adaptive Dimming Curve */
uint8_t controller_compute_zone_106_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 107 Adaptive Dimming Curve */
uint8_t controller_compute_zone_107_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 108 Adaptive Dimming Curve */
uint8_t controller_compute_zone_108_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 109 Adaptive Dimming Curve */
uint8_t controller_compute_zone_109_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 110 Adaptive Dimming Curve */
uint8_t controller_compute_zone_110_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 111 Adaptive Dimming Curve */
uint8_t controller_compute_zone_111_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 112 Adaptive Dimming Curve */
uint8_t controller_compute_zone_112_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 113 Adaptive Dimming Curve */
uint8_t controller_compute_zone_113_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 114 Adaptive Dimming Curve */
uint8_t controller_compute_zone_114_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 115 Adaptive Dimming Curve */
uint8_t controller_compute_zone_115_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 116 Adaptive Dimming Curve */
uint8_t controller_compute_zone_116_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 117 Adaptive Dimming Curve */
uint8_t controller_compute_zone_117_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 118 Adaptive Dimming Curve */
uint8_t controller_compute_zone_118_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 119 Adaptive Dimming Curve */
uint8_t controller_compute_zone_119_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 120 Adaptive Dimming Curve */
uint8_t controller_compute_zone_120_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 121 Adaptive Dimming Curve */
uint8_t controller_compute_zone_121_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 122 Adaptive Dimming Curve */
uint8_t controller_compute_zone_122_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 123 Adaptive Dimming Curve */
uint8_t controller_compute_zone_123_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 124 Adaptive Dimming Curve */
uint8_t controller_compute_zone_124_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 125 Adaptive Dimming Curve */
uint8_t controller_compute_zone_125_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 126 Adaptive Dimming Curve */
uint8_t controller_compute_zone_126_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 127 Adaptive Dimming Curve */
uint8_t controller_compute_zone_127_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 128 Adaptive Dimming Curve */
uint8_t controller_compute_zone_128_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 129 Adaptive Dimming Curve */
uint8_t controller_compute_zone_129_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 130 Adaptive Dimming Curve */
uint8_t controller_compute_zone_130_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 131 Adaptive Dimming Curve */
uint8_t controller_compute_zone_131_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 132 Adaptive Dimming Curve */
uint8_t controller_compute_zone_132_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 133 Adaptive Dimming Curve */
uint8_t controller_compute_zone_133_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 134 Adaptive Dimming Curve */
uint8_t controller_compute_zone_134_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 135 Adaptive Dimming Curve */
uint8_t controller_compute_zone_135_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 136 Adaptive Dimming Curve */
uint8_t controller_compute_zone_136_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 137 Adaptive Dimming Curve */
uint8_t controller_compute_zone_137_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 138 Adaptive Dimming Curve */
uint8_t controller_compute_zone_138_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 139 Adaptive Dimming Curve */
uint8_t controller_compute_zone_139_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 140 Adaptive Dimming Curve */
uint8_t controller_compute_zone_140_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 141 Adaptive Dimming Curve */
uint8_t controller_compute_zone_141_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 142 Adaptive Dimming Curve */
uint8_t controller_compute_zone_142_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 143 Adaptive Dimming Curve */
uint8_t controller_compute_zone_143_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 144 Adaptive Dimming Curve */
uint8_t controller_compute_zone_144_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 145 Adaptive Dimming Curve */
uint8_t controller_compute_zone_145_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 146 Adaptive Dimming Curve */
uint8_t controller_compute_zone_146_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 147 Adaptive Dimming Curve */
uint8_t controller_compute_zone_147_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 148 Adaptive Dimming Curve */
uint8_t controller_compute_zone_148_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 149 Adaptive Dimming Curve */
uint8_t controller_compute_zone_149_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 150 Adaptive Dimming Curve */
uint8_t controller_compute_zone_150_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 151 Adaptive Dimming Curve */
uint8_t controller_compute_zone_151_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 152 Adaptive Dimming Curve */
uint8_t controller_compute_zone_152_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 153 Adaptive Dimming Curve */
uint8_t controller_compute_zone_153_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 154 Adaptive Dimming Curve */
uint8_t controller_compute_zone_154_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 155 Adaptive Dimming Curve */
uint8_t controller_compute_zone_155_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 156 Adaptive Dimming Curve */
uint8_t controller_compute_zone_156_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 157 Adaptive Dimming Curve */
uint8_t controller_compute_zone_157_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 158 Adaptive Dimming Curve */
uint8_t controller_compute_zone_158_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 159 Adaptive Dimming Curve */
uint8_t controller_compute_zone_159_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 160 Adaptive Dimming Curve */
uint8_t controller_compute_zone_160_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 161 Adaptive Dimming Curve */
uint8_t controller_compute_zone_161_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 162 Adaptive Dimming Curve */
uint8_t controller_compute_zone_162_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 163 Adaptive Dimming Curve */
uint8_t controller_compute_zone_163_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 164 Adaptive Dimming Curve */
uint8_t controller_compute_zone_164_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 165 Adaptive Dimming Curve */
uint8_t controller_compute_zone_165_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 166 Adaptive Dimming Curve */
uint8_t controller_compute_zone_166_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 167 Adaptive Dimming Curve */
uint8_t controller_compute_zone_167_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 168 Adaptive Dimming Curve */
uint8_t controller_compute_zone_168_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 169 Adaptive Dimming Curve */
uint8_t controller_compute_zone_169_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 170 Adaptive Dimming Curve */
uint8_t controller_compute_zone_170_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 171 Adaptive Dimming Curve */
uint8_t controller_compute_zone_171_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 172 Adaptive Dimming Curve */
uint8_t controller_compute_zone_172_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 173 Adaptive Dimming Curve */
uint8_t controller_compute_zone_173_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 174 Adaptive Dimming Curve */
uint8_t controller_compute_zone_174_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 175 Adaptive Dimming Curve */
uint8_t controller_compute_zone_175_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 176 Adaptive Dimming Curve */
uint8_t controller_compute_zone_176_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 177 Adaptive Dimming Curve */
uint8_t controller_compute_zone_177_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 178 Adaptive Dimming Curve */
uint8_t controller_compute_zone_178_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 179 Adaptive Dimming Curve */
uint8_t controller_compute_zone_179_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 180 Adaptive Dimming Curve */
uint8_t controller_compute_zone_180_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 181 Adaptive Dimming Curve */
uint8_t controller_compute_zone_181_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 182 Adaptive Dimming Curve */
uint8_t controller_compute_zone_182_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 183 Adaptive Dimming Curve */
uint8_t controller_compute_zone_183_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 184 Adaptive Dimming Curve */
uint8_t controller_compute_zone_184_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 185 Adaptive Dimming Curve */
uint8_t controller_compute_zone_185_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 186 Adaptive Dimming Curve */
uint8_t controller_compute_zone_186_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 187 Adaptive Dimming Curve */
uint8_t controller_compute_zone_187_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 188 Adaptive Dimming Curve */
uint8_t controller_compute_zone_188_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 189 Adaptive Dimming Curve */
uint8_t controller_compute_zone_189_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 190 Adaptive Dimming Curve */
uint8_t controller_compute_zone_190_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 191 Adaptive Dimming Curve */
uint8_t controller_compute_zone_191_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 192 Adaptive Dimming Curve */
uint8_t controller_compute_zone_192_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 193 Adaptive Dimming Curve */
uint8_t controller_compute_zone_193_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 194 Adaptive Dimming Curve */
uint8_t controller_compute_zone_194_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 195 Adaptive Dimming Curve */
uint8_t controller_compute_zone_195_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 196 Adaptive Dimming Curve */
uint8_t controller_compute_zone_196_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 197 Adaptive Dimming Curve */
uint8_t controller_compute_zone_197_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 198 Adaptive Dimming Curve */
uint8_t controller_compute_zone_198_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 199 Adaptive Dimming Curve */
uint8_t controller_compute_zone_199_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 200 Adaptive Dimming Curve */
uint8_t controller_compute_zone_200_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 201 Adaptive Dimming Curve */
uint8_t controller_compute_zone_201_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 202 Adaptive Dimming Curve */
uint8_t controller_compute_zone_202_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 203 Adaptive Dimming Curve */
uint8_t controller_compute_zone_203_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 204 Adaptive Dimming Curve */
uint8_t controller_compute_zone_204_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 205 Adaptive Dimming Curve */
uint8_t controller_compute_zone_205_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 206 Adaptive Dimming Curve */
uint8_t controller_compute_zone_206_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 207 Adaptive Dimming Curve */
uint8_t controller_compute_zone_207_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 208 Adaptive Dimming Curve */
uint8_t controller_compute_zone_208_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 209 Adaptive Dimming Curve */
uint8_t controller_compute_zone_209_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 210 Adaptive Dimming Curve */
uint8_t controller_compute_zone_210_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 211 Adaptive Dimming Curve */
uint8_t controller_compute_zone_211_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 212 Adaptive Dimming Curve */
uint8_t controller_compute_zone_212_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 213 Adaptive Dimming Curve */
uint8_t controller_compute_zone_213_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 214 Adaptive Dimming Curve */
uint8_t controller_compute_zone_214_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 215 Adaptive Dimming Curve */
uint8_t controller_compute_zone_215_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 216 Adaptive Dimming Curve */
uint8_t controller_compute_zone_216_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 217 Adaptive Dimming Curve */
uint8_t controller_compute_zone_217_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 218 Adaptive Dimming Curve */
uint8_t controller_compute_zone_218_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 219 Adaptive Dimming Curve */
uint8_t controller_compute_zone_219_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 220 Adaptive Dimming Curve */
uint8_t controller_compute_zone_220_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 221 Adaptive Dimming Curve */
uint8_t controller_compute_zone_221_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 222 Adaptive Dimming Curve */
uint8_t controller_compute_zone_222_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 223 Adaptive Dimming Curve */
uint8_t controller_compute_zone_223_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 224 Adaptive Dimming Curve */
uint8_t controller_compute_zone_224_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 225 Adaptive Dimming Curve */
uint8_t controller_compute_zone_225_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 226 Adaptive Dimming Curve */
uint8_t controller_compute_zone_226_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 227 Adaptive Dimming Curve */
uint8_t controller_compute_zone_227_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 228 Adaptive Dimming Curve */
uint8_t controller_compute_zone_228_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 229 Adaptive Dimming Curve */
uint8_t controller_compute_zone_229_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 230 Adaptive Dimming Curve */
uint8_t controller_compute_zone_230_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 231 Adaptive Dimming Curve */
uint8_t controller_compute_zone_231_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 232 Adaptive Dimming Curve */
uint8_t controller_compute_zone_232_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 233 Adaptive Dimming Curve */
uint8_t controller_compute_zone_233_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 234 Adaptive Dimming Curve */
uint8_t controller_compute_zone_234_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 235 Adaptive Dimming Curve */
uint8_t controller_compute_zone_235_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 236 Adaptive Dimming Curve */
uint8_t controller_compute_zone_236_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 237 Adaptive Dimming Curve */
uint8_t controller_compute_zone_237_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 238 Adaptive Dimming Curve */
uint8_t controller_compute_zone_238_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 239 Adaptive Dimming Curve */
uint8_t controller_compute_zone_239_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 240 Adaptive Dimming Curve */
uint8_t controller_compute_zone_240_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 241 Adaptive Dimming Curve */
uint8_t controller_compute_zone_241_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 242 Adaptive Dimming Curve */
uint8_t controller_compute_zone_242_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 243 Adaptive Dimming Curve */
uint8_t controller_compute_zone_243_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 244 Adaptive Dimming Curve */
uint8_t controller_compute_zone_244_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 245 Adaptive Dimming Curve */
uint8_t controller_compute_zone_245_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 246 Adaptive Dimming Curve */
uint8_t controller_compute_zone_246_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 247 Adaptive Dimming Curve */
uint8_t controller_compute_zone_247_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 248 Adaptive Dimming Curve */
uint8_t controller_compute_zone_248_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 249 Adaptive Dimming Curve */
uint8_t controller_compute_zone_249_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 250 Adaptive Dimming Curve */
uint8_t controller_compute_zone_250_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 251 Adaptive Dimming Curve */
uint8_t controller_compute_zone_251_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 252 Adaptive Dimming Curve */
uint8_t controller_compute_zone_252_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 253 Adaptive Dimming Curve */
uint8_t controller_compute_zone_253_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 254 Adaptive Dimming Curve */
uint8_t controller_compute_zone_254_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 255 Adaptive Dimming Curve */
uint8_t controller_compute_zone_255_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 256 Adaptive Dimming Curve */
uint8_t controller_compute_zone_256_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 257 Adaptive Dimming Curve */
uint8_t controller_compute_zone_257_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 258 Adaptive Dimming Curve */
uint8_t controller_compute_zone_258_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 259 Adaptive Dimming Curve */
uint8_t controller_compute_zone_259_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 260 Adaptive Dimming Curve */
uint8_t controller_compute_zone_260_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 261 Adaptive Dimming Curve */
uint8_t controller_compute_zone_261_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 262 Adaptive Dimming Curve */
uint8_t controller_compute_zone_262_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 263 Adaptive Dimming Curve */
uint8_t controller_compute_zone_263_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 264 Adaptive Dimming Curve */
uint8_t controller_compute_zone_264_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 265 Adaptive Dimming Curve */
uint8_t controller_compute_zone_265_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 266 Adaptive Dimming Curve */
uint8_t controller_compute_zone_266_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 267 Adaptive Dimming Curve */
uint8_t controller_compute_zone_267_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 268 Adaptive Dimming Curve */
uint8_t controller_compute_zone_268_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 269 Adaptive Dimming Curve */
uint8_t controller_compute_zone_269_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 270 Adaptive Dimming Curve */
uint8_t controller_compute_zone_270_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 271 Adaptive Dimming Curve */
uint8_t controller_compute_zone_271_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 272 Adaptive Dimming Curve */
uint8_t controller_compute_zone_272_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 273 Adaptive Dimming Curve */
uint8_t controller_compute_zone_273_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 274 Adaptive Dimming Curve */
uint8_t controller_compute_zone_274_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 275 Adaptive Dimming Curve */
uint8_t controller_compute_zone_275_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 276 Adaptive Dimming Curve */
uint8_t controller_compute_zone_276_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 277 Adaptive Dimming Curve */
uint8_t controller_compute_zone_277_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 278 Adaptive Dimming Curve */
uint8_t controller_compute_zone_278_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 279 Adaptive Dimming Curve */
uint8_t controller_compute_zone_279_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 280 Adaptive Dimming Curve */
uint8_t controller_compute_zone_280_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 281 Adaptive Dimming Curve */
uint8_t controller_compute_zone_281_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 282 Adaptive Dimming Curve */
uint8_t controller_compute_zone_282_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 283 Adaptive Dimming Curve */
uint8_t controller_compute_zone_283_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 284 Adaptive Dimming Curve */
uint8_t controller_compute_zone_284_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 285 Adaptive Dimming Curve */
uint8_t controller_compute_zone_285_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 286 Adaptive Dimming Curve */
uint8_t controller_compute_zone_286_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 287 Adaptive Dimming Curve */
uint8_t controller_compute_zone_287_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 288 Adaptive Dimming Curve */
uint8_t controller_compute_zone_288_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 289 Adaptive Dimming Curve */
uint8_t controller_compute_zone_289_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 290 Adaptive Dimming Curve */
uint8_t controller_compute_zone_290_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 291 Adaptive Dimming Curve */
uint8_t controller_compute_zone_291_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 292 Adaptive Dimming Curve */
uint8_t controller_compute_zone_292_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 293 Adaptive Dimming Curve */
uint8_t controller_compute_zone_293_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 294 Adaptive Dimming Curve */
uint8_t controller_compute_zone_294_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 295 Adaptive Dimming Curve */
uint8_t controller_compute_zone_295_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 296 Adaptive Dimming Curve */
uint8_t controller_compute_zone_296_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 297 Adaptive Dimming Curve */
uint8_t controller_compute_zone_297_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 298 Adaptive Dimming Curve */
uint8_t controller_compute_zone_298_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}

/* Lighting Control Zone 299 Adaptive Dimming Curve */
uint8_t controller_compute_zone_299_dimming(float ambient_lux, bool motion_detected, float battery_soc_pct) {
    if (ambient_lux > 250.0f) return 0; /* Daytime off */
    if (motion_detected) {
        if (battery_soc_pct < 20.0f) return 60; /* Low battery conservation */
        return 100; /* Full illumination */
    }
    float baseline = 25.0f * (battery_soc_pct / 100.0f);
    return (uint8_t)(baseline > 10.0f ? baseline : 10.0f);
}
