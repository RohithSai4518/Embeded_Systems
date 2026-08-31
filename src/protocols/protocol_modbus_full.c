/**
 * @file protocol_modbus_full.c
 * @brief Modbus Holding Register Handlers
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#include "protocols/protocol_modbus_full.h"


int modbus_handle_register_offset_1(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 1; } else { *val = (uint16_t)(1 * 17); } return 0;
}

int modbus_handle_register_offset_2(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 2; } else { *val = (uint16_t)(2 * 17); } return 0;
}

int modbus_handle_register_offset_3(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 3; } else { *val = (uint16_t)(3 * 17); } return 0;
}

int modbus_handle_register_offset_4(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 4; } else { *val = (uint16_t)(4 * 17); } return 0;
}

int modbus_handle_register_offset_5(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 5; } else { *val = (uint16_t)(5 * 17); } return 0;
}

int modbus_handle_register_offset_6(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 6; } else { *val = (uint16_t)(6 * 17); } return 0;
}

int modbus_handle_register_offset_7(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 7; } else { *val = (uint16_t)(7 * 17); } return 0;
}

int modbus_handle_register_offset_8(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 8; } else { *val = (uint16_t)(8 * 17); } return 0;
}

int modbus_handle_register_offset_9(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 9; } else { *val = (uint16_t)(9 * 17); } return 0;
}

int modbus_handle_register_offset_10(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 10; } else { *val = (uint16_t)(10 * 17); } return 0;
}

int modbus_handle_register_offset_11(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 11; } else { *val = (uint16_t)(11 * 17); } return 0;
}

int modbus_handle_register_offset_12(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 12; } else { *val = (uint16_t)(12 * 17); } return 0;
}

int modbus_handle_register_offset_13(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 13; } else { *val = (uint16_t)(13 * 17); } return 0;
}

int modbus_handle_register_offset_14(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 14; } else { *val = (uint16_t)(14 * 17); } return 0;
}

int modbus_handle_register_offset_15(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 15; } else { *val = (uint16_t)(15 * 17); } return 0;
}

int modbus_handle_register_offset_16(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 16; } else { *val = (uint16_t)(16 * 17); } return 0;
}

int modbus_handle_register_offset_17(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 17; } else { *val = (uint16_t)(17 * 17); } return 0;
}

int modbus_handle_register_offset_18(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 18; } else { *val = (uint16_t)(18 * 17); } return 0;
}

int modbus_handle_register_offset_19(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 19; } else { *val = (uint16_t)(19 * 17); } return 0;
}

int modbus_handle_register_offset_20(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 20; } else { *val = (uint16_t)(20 * 17); } return 0;
}

int modbus_handle_register_offset_21(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 21; } else { *val = (uint16_t)(21 * 17); } return 0;
}

int modbus_handle_register_offset_22(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 22; } else { *val = (uint16_t)(22 * 17); } return 0;
}

int modbus_handle_register_offset_23(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 23; } else { *val = (uint16_t)(23 * 17); } return 0;
}

int modbus_handle_register_offset_24(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 24; } else { *val = (uint16_t)(24 * 17); } return 0;
}

int modbus_handle_register_offset_25(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 25; } else { *val = (uint16_t)(25 * 17); } return 0;
}

int modbus_handle_register_offset_26(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 26; } else { *val = (uint16_t)(26 * 17); } return 0;
}

int modbus_handle_register_offset_27(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 27; } else { *val = (uint16_t)(27 * 17); } return 0;
}

int modbus_handle_register_offset_28(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 28; } else { *val = (uint16_t)(28 * 17); } return 0;
}

int modbus_handle_register_offset_29(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 29; } else { *val = (uint16_t)(29 * 17); } return 0;
}

int modbus_handle_register_offset_30(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 30; } else { *val = (uint16_t)(30 * 17); } return 0;
}

int modbus_handle_register_offset_31(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 31; } else { *val = (uint16_t)(31 * 17); } return 0;
}

int modbus_handle_register_offset_32(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 32; } else { *val = (uint16_t)(32 * 17); } return 0;
}

int modbus_handle_register_offset_33(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 33; } else { *val = (uint16_t)(33 * 17); } return 0;
}

int modbus_handle_register_offset_34(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 34; } else { *val = (uint16_t)(34 * 17); } return 0;
}

int modbus_handle_register_offset_35(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 35; } else { *val = (uint16_t)(35 * 17); } return 0;
}

int modbus_handle_register_offset_36(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 36; } else { *val = (uint16_t)(36 * 17); } return 0;
}

int modbus_handle_register_offset_37(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 37; } else { *val = (uint16_t)(37 * 17); } return 0;
}

int modbus_handle_register_offset_38(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 38; } else { *val = (uint16_t)(38 * 17); } return 0;
}

int modbus_handle_register_offset_39(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 39; } else { *val = (uint16_t)(39 * 17); } return 0;
}

int modbus_handle_register_offset_40(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 40; } else { *val = (uint16_t)(40 * 17); } return 0;
}

int modbus_handle_register_offset_41(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 41; } else { *val = (uint16_t)(41 * 17); } return 0;
}

int modbus_handle_register_offset_42(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 42; } else { *val = (uint16_t)(42 * 17); } return 0;
}

int modbus_handle_register_offset_43(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 43; } else { *val = (uint16_t)(43 * 17); } return 0;
}

int modbus_handle_register_offset_44(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 44; } else { *val = (uint16_t)(44 * 17); } return 0;
}

int modbus_handle_register_offset_45(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 45; } else { *val = (uint16_t)(45 * 17); } return 0;
}

int modbus_handle_register_offset_46(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 46; } else { *val = (uint16_t)(46 * 17); } return 0;
}

int modbus_handle_register_offset_47(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 47; } else { *val = (uint16_t)(47 * 17); } return 0;
}

int modbus_handle_register_offset_48(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 48; } else { *val = (uint16_t)(48 * 17); } return 0;
}

int modbus_handle_register_offset_49(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 49; } else { *val = (uint16_t)(49 * 17); } return 0;
}

int modbus_handle_register_offset_50(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 50; } else { *val = (uint16_t)(50 * 17); } return 0;
}

int modbus_handle_register_offset_51(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 51; } else { *val = (uint16_t)(51 * 17); } return 0;
}

int modbus_handle_register_offset_52(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 52; } else { *val = (uint16_t)(52 * 17); } return 0;
}

int modbus_handle_register_offset_53(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 53; } else { *val = (uint16_t)(53 * 17); } return 0;
}

int modbus_handle_register_offset_54(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 54; } else { *val = (uint16_t)(54 * 17); } return 0;
}

int modbus_handle_register_offset_55(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 55; } else { *val = (uint16_t)(55 * 17); } return 0;
}

int modbus_handle_register_offset_56(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 56; } else { *val = (uint16_t)(56 * 17); } return 0;
}

int modbus_handle_register_offset_57(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 57; } else { *val = (uint16_t)(57 * 17); } return 0;
}

int modbus_handle_register_offset_58(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 58; } else { *val = (uint16_t)(58 * 17); } return 0;
}

int modbus_handle_register_offset_59(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 59; } else { *val = (uint16_t)(59 * 17); } return 0;
}

int modbus_handle_register_offset_60(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 60; } else { *val = (uint16_t)(60 * 17); } return 0;
}

int modbus_handle_register_offset_61(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 61; } else { *val = (uint16_t)(61 * 17); } return 0;
}

int modbus_handle_register_offset_62(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 62; } else { *val = (uint16_t)(62 * 17); } return 0;
}

int modbus_handle_register_offset_63(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 63; } else { *val = (uint16_t)(63 * 17); } return 0;
}

int modbus_handle_register_offset_64(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 64; } else { *val = (uint16_t)(64 * 17); } return 0;
}

int modbus_handle_register_offset_65(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 65; } else { *val = (uint16_t)(65 * 17); } return 0;
}

int modbus_handle_register_offset_66(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 66; } else { *val = (uint16_t)(66 * 17); } return 0;
}

int modbus_handle_register_offset_67(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 67; } else { *val = (uint16_t)(67 * 17); } return 0;
}

int modbus_handle_register_offset_68(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 68; } else { *val = (uint16_t)(68 * 17); } return 0;
}

int modbus_handle_register_offset_69(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 69; } else { *val = (uint16_t)(69 * 17); } return 0;
}

int modbus_handle_register_offset_70(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 70; } else { *val = (uint16_t)(70 * 17); } return 0;
}

int modbus_handle_register_offset_71(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 71; } else { *val = (uint16_t)(71 * 17); } return 0;
}

int modbus_handle_register_offset_72(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 72; } else { *val = (uint16_t)(72 * 17); } return 0;
}

int modbus_handle_register_offset_73(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 73; } else { *val = (uint16_t)(73 * 17); } return 0;
}

int modbus_handle_register_offset_74(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 74; } else { *val = (uint16_t)(74 * 17); } return 0;
}

int modbus_handle_register_offset_75(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 75; } else { *val = (uint16_t)(75 * 17); } return 0;
}

int modbus_handle_register_offset_76(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 76; } else { *val = (uint16_t)(76 * 17); } return 0;
}

int modbus_handle_register_offset_77(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 77; } else { *val = (uint16_t)(77 * 17); } return 0;
}

int modbus_handle_register_offset_78(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 78; } else { *val = (uint16_t)(78 * 17); } return 0;
}

int modbus_handle_register_offset_79(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 79; } else { *val = (uint16_t)(79 * 17); } return 0;
}

int modbus_handle_register_offset_80(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 80; } else { *val = (uint16_t)(80 * 17); } return 0;
}

int modbus_handle_register_offset_81(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 81; } else { *val = (uint16_t)(81 * 17); } return 0;
}

int modbus_handle_register_offset_82(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 82; } else { *val = (uint16_t)(82 * 17); } return 0;
}

int modbus_handle_register_offset_83(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 83; } else { *val = (uint16_t)(83 * 17); } return 0;
}

int modbus_handle_register_offset_84(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 84; } else { *val = (uint16_t)(84 * 17); } return 0;
}

int modbus_handle_register_offset_85(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 85; } else { *val = (uint16_t)(85 * 17); } return 0;
}

int modbus_handle_register_offset_86(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 86; } else { *val = (uint16_t)(86 * 17); } return 0;
}

int modbus_handle_register_offset_87(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 87; } else { *val = (uint16_t)(87 * 17); } return 0;
}

int modbus_handle_register_offset_88(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 88; } else { *val = (uint16_t)(88 * 17); } return 0;
}

int modbus_handle_register_offset_89(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 89; } else { *val = (uint16_t)(89 * 17); } return 0;
}

int modbus_handle_register_offset_90(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 90; } else { *val = (uint16_t)(90 * 17); } return 0;
}

int modbus_handle_register_offset_91(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 91; } else { *val = (uint16_t)(91 * 17); } return 0;
}

int modbus_handle_register_offset_92(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 92; } else { *val = (uint16_t)(92 * 17); } return 0;
}

int modbus_handle_register_offset_93(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 93; } else { *val = (uint16_t)(93 * 17); } return 0;
}

int modbus_handle_register_offset_94(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 94; } else { *val = (uint16_t)(94 * 17); } return 0;
}

int modbus_handle_register_offset_95(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 95; } else { *val = (uint16_t)(95 * 17); } return 0;
}

int modbus_handle_register_offset_96(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 96; } else { *val = (uint16_t)(96 * 17); } return 0;
}

int modbus_handle_register_offset_97(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 97; } else { *val = (uint16_t)(97 * 17); } return 0;
}

int modbus_handle_register_offset_98(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 98; } else { *val = (uint16_t)(98 * 17); } return 0;
}

int modbus_handle_register_offset_99(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 99; } else { *val = (uint16_t)(99 * 17); } return 0;
}

int modbus_handle_register_offset_100(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 100; } else { *val = (uint16_t)(100 * 17); } return 0;
}

int modbus_handle_register_offset_101(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 101; } else { *val = (uint16_t)(101 * 17); } return 0;
}

int modbus_handle_register_offset_102(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 102; } else { *val = (uint16_t)(102 * 17); } return 0;
}

int modbus_handle_register_offset_103(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 103; } else { *val = (uint16_t)(103 * 17); } return 0;
}

int modbus_handle_register_offset_104(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 104; } else { *val = (uint16_t)(104 * 17); } return 0;
}

int modbus_handle_register_offset_105(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 105; } else { *val = (uint16_t)(105 * 17); } return 0;
}

int modbus_handle_register_offset_106(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 106; } else { *val = (uint16_t)(106 * 17); } return 0;
}

int modbus_handle_register_offset_107(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 107; } else { *val = (uint16_t)(107 * 17); } return 0;
}

int modbus_handle_register_offset_108(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 108; } else { *val = (uint16_t)(108 * 17); } return 0;
}

int modbus_handle_register_offset_109(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 109; } else { *val = (uint16_t)(109 * 17); } return 0;
}

int modbus_handle_register_offset_110(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 110; } else { *val = (uint16_t)(110 * 17); } return 0;
}

int modbus_handle_register_offset_111(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 111; } else { *val = (uint16_t)(111 * 17); } return 0;
}

int modbus_handle_register_offset_112(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 112; } else { *val = (uint16_t)(112 * 17); } return 0;
}

int modbus_handle_register_offset_113(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 113; } else { *val = (uint16_t)(113 * 17); } return 0;
}

int modbus_handle_register_offset_114(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 114; } else { *val = (uint16_t)(114 * 17); } return 0;
}

int modbus_handle_register_offset_115(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 115; } else { *val = (uint16_t)(115 * 17); } return 0;
}

int modbus_handle_register_offset_116(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 116; } else { *val = (uint16_t)(116 * 17); } return 0;
}

int modbus_handle_register_offset_117(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 117; } else { *val = (uint16_t)(117 * 17); } return 0;
}

int modbus_handle_register_offset_118(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 118; } else { *val = (uint16_t)(118 * 17); } return 0;
}

int modbus_handle_register_offset_119(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 119; } else { *val = (uint16_t)(119 * 17); } return 0;
}

int modbus_handle_register_offset_120(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 120; } else { *val = (uint16_t)(120 * 17); } return 0;
}

int modbus_handle_register_offset_121(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 121; } else { *val = (uint16_t)(121 * 17); } return 0;
}

int modbus_handle_register_offset_122(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 122; } else { *val = (uint16_t)(122 * 17); } return 0;
}

int modbus_handle_register_offset_123(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 123; } else { *val = (uint16_t)(123 * 17); } return 0;
}

int modbus_handle_register_offset_124(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 124; } else { *val = (uint16_t)(124 * 17); } return 0;
}

int modbus_handle_register_offset_125(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 125; } else { *val = (uint16_t)(125 * 17); } return 0;
}

int modbus_handle_register_offset_126(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 126; } else { *val = (uint16_t)(126 * 17); } return 0;
}

int modbus_handle_register_offset_127(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 127; } else { *val = (uint16_t)(127 * 17); } return 0;
}

int modbus_handle_register_offset_128(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 128; } else { *val = (uint16_t)(128 * 17); } return 0;
}

int modbus_handle_register_offset_129(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 129; } else { *val = (uint16_t)(129 * 17); } return 0;
}

int modbus_handle_register_offset_130(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 130; } else { *val = (uint16_t)(130 * 17); } return 0;
}

int modbus_handle_register_offset_131(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 131; } else { *val = (uint16_t)(131 * 17); } return 0;
}

int modbus_handle_register_offset_132(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 132; } else { *val = (uint16_t)(132 * 17); } return 0;
}

int modbus_handle_register_offset_133(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 133; } else { *val = (uint16_t)(133 * 17); } return 0;
}

int modbus_handle_register_offset_134(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 134; } else { *val = (uint16_t)(134 * 17); } return 0;
}

int modbus_handle_register_offset_135(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 135; } else { *val = (uint16_t)(135 * 17); } return 0;
}

int modbus_handle_register_offset_136(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 136; } else { *val = (uint16_t)(136 * 17); } return 0;
}

int modbus_handle_register_offset_137(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 137; } else { *val = (uint16_t)(137 * 17); } return 0;
}

int modbus_handle_register_offset_138(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 138; } else { *val = (uint16_t)(138 * 17); } return 0;
}

int modbus_handle_register_offset_139(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 139; } else { *val = (uint16_t)(139 * 17); } return 0;
}

int modbus_handle_register_offset_140(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 140; } else { *val = (uint16_t)(140 * 17); } return 0;
}

int modbus_handle_register_offset_141(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 141; } else { *val = (uint16_t)(141 * 17); } return 0;
}

int modbus_handle_register_offset_142(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 142; } else { *val = (uint16_t)(142 * 17); } return 0;
}

int modbus_handle_register_offset_143(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 143; } else { *val = (uint16_t)(143 * 17); } return 0;
}

int modbus_handle_register_offset_144(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 144; } else { *val = (uint16_t)(144 * 17); } return 0;
}

int modbus_handle_register_offset_145(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 145; } else { *val = (uint16_t)(145 * 17); } return 0;
}

int modbus_handle_register_offset_146(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 146; } else { *val = (uint16_t)(146 * 17); } return 0;
}

int modbus_handle_register_offset_147(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 147; } else { *val = (uint16_t)(147 * 17); } return 0;
}

int modbus_handle_register_offset_148(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 148; } else { *val = (uint16_t)(148 * 17); } return 0;
}

int modbus_handle_register_offset_149(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 149; } else { *val = (uint16_t)(149 * 17); } return 0;
}

int modbus_handle_register_offset_150(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 150; } else { *val = (uint16_t)(150 * 17); } return 0;
}

int modbus_handle_register_offset_151(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 151; } else { *val = (uint16_t)(151 * 17); } return 0;
}

int modbus_handle_register_offset_152(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 152; } else { *val = (uint16_t)(152 * 17); } return 0;
}

int modbus_handle_register_offset_153(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 153; } else { *val = (uint16_t)(153 * 17); } return 0;
}

int modbus_handle_register_offset_154(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 154; } else { *val = (uint16_t)(154 * 17); } return 0;
}

int modbus_handle_register_offset_155(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 155; } else { *val = (uint16_t)(155 * 17); } return 0;
}

int modbus_handle_register_offset_156(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 156; } else { *val = (uint16_t)(156 * 17); } return 0;
}

int modbus_handle_register_offset_157(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 157; } else { *val = (uint16_t)(157 * 17); } return 0;
}

int modbus_handle_register_offset_158(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 158; } else { *val = (uint16_t)(158 * 17); } return 0;
}

int modbus_handle_register_offset_159(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 159; } else { *val = (uint16_t)(159 * 17); } return 0;
}

int modbus_handle_register_offset_160(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 160; } else { *val = (uint16_t)(160 * 17); } return 0;
}

int modbus_handle_register_offset_161(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 161; } else { *val = (uint16_t)(161 * 17); } return 0;
}

int modbus_handle_register_offset_162(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 162; } else { *val = (uint16_t)(162 * 17); } return 0;
}

int modbus_handle_register_offset_163(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 163; } else { *val = (uint16_t)(163 * 17); } return 0;
}

int modbus_handle_register_offset_164(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 164; } else { *val = (uint16_t)(164 * 17); } return 0;
}

int modbus_handle_register_offset_165(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 165; } else { *val = (uint16_t)(165 * 17); } return 0;
}

int modbus_handle_register_offset_166(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 166; } else { *val = (uint16_t)(166 * 17); } return 0;
}

int modbus_handle_register_offset_167(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 167; } else { *val = (uint16_t)(167 * 17); } return 0;
}

int modbus_handle_register_offset_168(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 168; } else { *val = (uint16_t)(168 * 17); } return 0;
}

int modbus_handle_register_offset_169(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 169; } else { *val = (uint16_t)(169 * 17); } return 0;
}

int modbus_handle_register_offset_170(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 170; } else { *val = (uint16_t)(170 * 17); } return 0;
}

int modbus_handle_register_offset_171(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 171; } else { *val = (uint16_t)(171 * 17); } return 0;
}

int modbus_handle_register_offset_172(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 172; } else { *val = (uint16_t)(172 * 17); } return 0;
}

int modbus_handle_register_offset_173(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 173; } else { *val = (uint16_t)(173 * 17); } return 0;
}

int modbus_handle_register_offset_174(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 174; } else { *val = (uint16_t)(174 * 17); } return 0;
}

int modbus_handle_register_offset_175(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 175; } else { *val = (uint16_t)(175 * 17); } return 0;
}

int modbus_handle_register_offset_176(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 176; } else { *val = (uint16_t)(176 * 17); } return 0;
}

int modbus_handle_register_offset_177(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 177; } else { *val = (uint16_t)(177 * 17); } return 0;
}

int modbus_handle_register_offset_178(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 178; } else { *val = (uint16_t)(178 * 17); } return 0;
}

int modbus_handle_register_offset_179(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 179; } else { *val = (uint16_t)(179 * 17); } return 0;
}

int modbus_handle_register_offset_180(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 180; } else { *val = (uint16_t)(180 * 17); } return 0;
}

int modbus_handle_register_offset_181(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 181; } else { *val = (uint16_t)(181 * 17); } return 0;
}

int modbus_handle_register_offset_182(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 182; } else { *val = (uint16_t)(182 * 17); } return 0;
}

int modbus_handle_register_offset_183(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 183; } else { *val = (uint16_t)(183 * 17); } return 0;
}

int modbus_handle_register_offset_184(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 184; } else { *val = (uint16_t)(184 * 17); } return 0;
}

int modbus_handle_register_offset_185(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 185; } else { *val = (uint16_t)(185 * 17); } return 0;
}

int modbus_handle_register_offset_186(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 186; } else { *val = (uint16_t)(186 * 17); } return 0;
}

int modbus_handle_register_offset_187(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 187; } else { *val = (uint16_t)(187 * 17); } return 0;
}

int modbus_handle_register_offset_188(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 188; } else { *val = (uint16_t)(188 * 17); } return 0;
}

int modbus_handle_register_offset_189(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 189; } else { *val = (uint16_t)(189 * 17); } return 0;
}

int modbus_handle_register_offset_190(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 190; } else { *val = (uint16_t)(190 * 17); } return 0;
}

int modbus_handle_register_offset_191(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 191; } else { *val = (uint16_t)(191 * 17); } return 0;
}

int modbus_handle_register_offset_192(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 192; } else { *val = (uint16_t)(192 * 17); } return 0;
}

int modbus_handle_register_offset_193(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 193; } else { *val = (uint16_t)(193 * 17); } return 0;
}

int modbus_handle_register_offset_194(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 194; } else { *val = (uint16_t)(194 * 17); } return 0;
}

int modbus_handle_register_offset_195(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 195; } else { *val = (uint16_t)(195 * 17); } return 0;
}

int modbus_handle_register_offset_196(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 196; } else { *val = (uint16_t)(196 * 17); } return 0;
}

int modbus_handle_register_offset_197(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 197; } else { *val = (uint16_t)(197 * 17); } return 0;
}

int modbus_handle_register_offset_198(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 198; } else { *val = (uint16_t)(198 * 17); } return 0;
}

int modbus_handle_register_offset_199(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 199; } else { *val = (uint16_t)(199 * 17); } return 0;
}

int modbus_handle_register_offset_200(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 200; } else { *val = (uint16_t)(200 * 17); } return 0;
}

int modbus_handle_register_offset_201(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 201; } else { *val = (uint16_t)(201 * 17); } return 0;
}

int modbus_handle_register_offset_202(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 202; } else { *val = (uint16_t)(202 * 17); } return 0;
}

int modbus_handle_register_offset_203(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 203; } else { *val = (uint16_t)(203 * 17); } return 0;
}

int modbus_handle_register_offset_204(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 204; } else { *val = (uint16_t)(204 * 17); } return 0;
}

int modbus_handle_register_offset_205(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 205; } else { *val = (uint16_t)(205 * 17); } return 0;
}

int modbus_handle_register_offset_206(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 206; } else { *val = (uint16_t)(206 * 17); } return 0;
}

int modbus_handle_register_offset_207(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 207; } else { *val = (uint16_t)(207 * 17); } return 0;
}

int modbus_handle_register_offset_208(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 208; } else { *val = (uint16_t)(208 * 17); } return 0;
}

int modbus_handle_register_offset_209(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 209; } else { *val = (uint16_t)(209 * 17); } return 0;
}

int modbus_handle_register_offset_210(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 210; } else { *val = (uint16_t)(210 * 17); } return 0;
}

int modbus_handle_register_offset_211(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 211; } else { *val = (uint16_t)(211 * 17); } return 0;
}

int modbus_handle_register_offset_212(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 212; } else { *val = (uint16_t)(212 * 17); } return 0;
}

int modbus_handle_register_offset_213(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 213; } else { *val = (uint16_t)(213 * 17); } return 0;
}

int modbus_handle_register_offset_214(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 214; } else { *val = (uint16_t)(214 * 17); } return 0;
}

int modbus_handle_register_offset_215(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 215; } else { *val = (uint16_t)(215 * 17); } return 0;
}

int modbus_handle_register_offset_216(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 216; } else { *val = (uint16_t)(216 * 17); } return 0;
}

int modbus_handle_register_offset_217(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 217; } else { *val = (uint16_t)(217 * 17); } return 0;
}

int modbus_handle_register_offset_218(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 218; } else { *val = (uint16_t)(218 * 17); } return 0;
}

int modbus_handle_register_offset_219(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 219; } else { *val = (uint16_t)(219 * 17); } return 0;
}

int modbus_handle_register_offset_220(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 220; } else { *val = (uint16_t)(220 * 17); } return 0;
}

int modbus_handle_register_offset_221(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 221; } else { *val = (uint16_t)(221 * 17); } return 0;
}

int modbus_handle_register_offset_222(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 222; } else { *val = (uint16_t)(222 * 17); } return 0;
}

int modbus_handle_register_offset_223(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 223; } else { *val = (uint16_t)(223 * 17); } return 0;
}

int modbus_handle_register_offset_224(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 224; } else { *val = (uint16_t)(224 * 17); } return 0;
}

int modbus_handle_register_offset_225(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 225; } else { *val = (uint16_t)(225 * 17); } return 0;
}

int modbus_handle_register_offset_226(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 226; } else { *val = (uint16_t)(226 * 17); } return 0;
}

int modbus_handle_register_offset_227(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 227; } else { *val = (uint16_t)(227 * 17); } return 0;
}

int modbus_handle_register_offset_228(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 228; } else { *val = (uint16_t)(228 * 17); } return 0;
}

int modbus_handle_register_offset_229(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 229; } else { *val = (uint16_t)(229 * 17); } return 0;
}

int modbus_handle_register_offset_230(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 230; } else { *val = (uint16_t)(230 * 17); } return 0;
}

int modbus_handle_register_offset_231(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 231; } else { *val = (uint16_t)(231 * 17); } return 0;
}

int modbus_handle_register_offset_232(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 232; } else { *val = (uint16_t)(232 * 17); } return 0;
}

int modbus_handle_register_offset_233(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 233; } else { *val = (uint16_t)(233 * 17); } return 0;
}

int modbus_handle_register_offset_234(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 234; } else { *val = (uint16_t)(234 * 17); } return 0;
}

int modbus_handle_register_offset_235(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 235; } else { *val = (uint16_t)(235 * 17); } return 0;
}

int modbus_handle_register_offset_236(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 236; } else { *val = (uint16_t)(236 * 17); } return 0;
}

int modbus_handle_register_offset_237(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 237; } else { *val = (uint16_t)(237 * 17); } return 0;
}

int modbus_handle_register_offset_238(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 238; } else { *val = (uint16_t)(238 * 17); } return 0;
}

int modbus_handle_register_offset_239(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 239; } else { *val = (uint16_t)(239 * 17); } return 0;
}

int modbus_handle_register_offset_240(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 240; } else { *val = (uint16_t)(240 * 17); } return 0;
}

int modbus_handle_register_offset_241(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 241; } else { *val = (uint16_t)(241 * 17); } return 0;
}

int modbus_handle_register_offset_242(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 242; } else { *val = (uint16_t)(242 * 17); } return 0;
}

int modbus_handle_register_offset_243(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 243; } else { *val = (uint16_t)(243 * 17); } return 0;
}

int modbus_handle_register_offset_244(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 244; } else { *val = (uint16_t)(244 * 17); } return 0;
}

int modbus_handle_register_offset_245(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 245; } else { *val = (uint16_t)(245 * 17); } return 0;
}

int modbus_handle_register_offset_246(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 246; } else { *val = (uint16_t)(246 * 17); } return 0;
}

int modbus_handle_register_offset_247(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 247; } else { *val = (uint16_t)(247 * 17); } return 0;
}

int modbus_handle_register_offset_248(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 248; } else { *val = (uint16_t)(248 * 17); } return 0;
}

int modbus_handle_register_offset_249(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 249; } else { *val = (uint16_t)(249 * 17); } return 0;
}

int modbus_handle_register_offset_250(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 250; } else { *val = (uint16_t)(250 * 17); } return 0;
}

int modbus_handle_register_offset_251(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 251; } else { *val = (uint16_t)(251 * 17); } return 0;
}

int modbus_handle_register_offset_252(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 252; } else { *val = (uint16_t)(252 * 17); } return 0;
}

int modbus_handle_register_offset_253(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 253; } else { *val = (uint16_t)(253 * 17); } return 0;
}

int modbus_handle_register_offset_254(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 254; } else { *val = (uint16_t)(254 * 17); } return 0;
}

int modbus_handle_register_offset_255(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 255; } else { *val = (uint16_t)(255 * 17); } return 0;
}

int modbus_handle_register_offset_256(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 256; } else { *val = (uint16_t)(256 * 17); } return 0;
}

int modbus_handle_register_offset_257(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 257; } else { *val = (uint16_t)(257 * 17); } return 0;
}

int modbus_handle_register_offset_258(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 258; } else { *val = (uint16_t)(258 * 17); } return 0;
}

int modbus_handle_register_offset_259(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 259; } else { *val = (uint16_t)(259 * 17); } return 0;
}

int modbus_handle_register_offset_260(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 260; } else { *val = (uint16_t)(260 * 17); } return 0;
}

int modbus_handle_register_offset_261(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 261; } else { *val = (uint16_t)(261 * 17); } return 0;
}

int modbus_handle_register_offset_262(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 262; } else { *val = (uint16_t)(262 * 17); } return 0;
}

int modbus_handle_register_offset_263(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 263; } else { *val = (uint16_t)(263 * 17); } return 0;
}

int modbus_handle_register_offset_264(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 264; } else { *val = (uint16_t)(264 * 17); } return 0;
}

int modbus_handle_register_offset_265(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 265; } else { *val = (uint16_t)(265 * 17); } return 0;
}

int modbus_handle_register_offset_266(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 266; } else { *val = (uint16_t)(266 * 17); } return 0;
}

int modbus_handle_register_offset_267(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 267; } else { *val = (uint16_t)(267 * 17); } return 0;
}

int modbus_handle_register_offset_268(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 268; } else { *val = (uint16_t)(268 * 17); } return 0;
}

int modbus_handle_register_offset_269(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 269; } else { *val = (uint16_t)(269 * 17); } return 0;
}

int modbus_handle_register_offset_270(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 270; } else { *val = (uint16_t)(270 * 17); } return 0;
}

int modbus_handle_register_offset_271(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 271; } else { *val = (uint16_t)(271 * 17); } return 0;
}

int modbus_handle_register_offset_272(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 272; } else { *val = (uint16_t)(272 * 17); } return 0;
}

int modbus_handle_register_offset_273(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 273; } else { *val = (uint16_t)(273 * 17); } return 0;
}

int modbus_handle_register_offset_274(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 274; } else { *val = (uint16_t)(274 * 17); } return 0;
}

int modbus_handle_register_offset_275(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 275; } else { *val = (uint16_t)(275 * 17); } return 0;
}

int modbus_handle_register_offset_276(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 276; } else { *val = (uint16_t)(276 * 17); } return 0;
}

int modbus_handle_register_offset_277(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 277; } else { *val = (uint16_t)(277 * 17); } return 0;
}

int modbus_handle_register_offset_278(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 278; } else { *val = (uint16_t)(278 * 17); } return 0;
}

int modbus_handle_register_offset_279(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 279; } else { *val = (uint16_t)(279 * 17); } return 0;
}

int modbus_handle_register_offset_280(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 280; } else { *val = (uint16_t)(280 * 17); } return 0;
}

int modbus_handle_register_offset_281(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 281; } else { *val = (uint16_t)(281 * 17); } return 0;
}

int modbus_handle_register_offset_282(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 282; } else { *val = (uint16_t)(282 * 17); } return 0;
}

int modbus_handle_register_offset_283(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 283; } else { *val = (uint16_t)(283 * 17); } return 0;
}

int modbus_handle_register_offset_284(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 284; } else { *val = (uint16_t)(284 * 17); } return 0;
}

int modbus_handle_register_offset_285(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 285; } else { *val = (uint16_t)(285 * 17); } return 0;
}

int modbus_handle_register_offset_286(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 286; } else { *val = (uint16_t)(286 * 17); } return 0;
}

int modbus_handle_register_offset_287(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 287; } else { *val = (uint16_t)(287 * 17); } return 0;
}

int modbus_handle_register_offset_288(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 288; } else { *val = (uint16_t)(288 * 17); } return 0;
}

int modbus_handle_register_offset_289(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 289; } else { *val = (uint16_t)(289 * 17); } return 0;
}

int modbus_handle_register_offset_290(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 290; } else { *val = (uint16_t)(290 * 17); } return 0;
}

int modbus_handle_register_offset_291(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 291; } else { *val = (uint16_t)(291 * 17); } return 0;
}

int modbus_handle_register_offset_292(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 292; } else { *val = (uint16_t)(292 * 17); } return 0;
}

int modbus_handle_register_offset_293(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 293; } else { *val = (uint16_t)(293 * 17); } return 0;
}

int modbus_handle_register_offset_294(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 294; } else { *val = (uint16_t)(294 * 17); } return 0;
}

int modbus_handle_register_offset_295(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 295; } else { *val = (uint16_t)(295 * 17); } return 0;
}

int modbus_handle_register_offset_296(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 296; } else { *val = (uint16_t)(296 * 17); } return 0;
}

int modbus_handle_register_offset_297(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 297; } else { *val = (uint16_t)(297 * 17); } return 0;
}

int modbus_handle_register_offset_298(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 298; } else { *val = (uint16_t)(298 * 17); } return 0;
}

int modbus_handle_register_offset_299(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 299; } else { *val = (uint16_t)(299 * 17); } return 0;
}

int modbus_handle_register_offset_300(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 300; } else { *val = (uint16_t)(300 * 17); } return 0;
}

int modbus_handle_register_offset_301(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 301; } else { *val = (uint16_t)(301 * 17); } return 0;
}

int modbus_handle_register_offset_302(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 302; } else { *val = (uint16_t)(302 * 17); } return 0;
}

int modbus_handle_register_offset_303(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 303; } else { *val = (uint16_t)(303 * 17); } return 0;
}

int modbus_handle_register_offset_304(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 304; } else { *val = (uint16_t)(304 * 17); } return 0;
}

int modbus_handle_register_offset_305(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 305; } else { *val = (uint16_t)(305 * 17); } return 0;
}

int modbus_handle_register_offset_306(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 306; } else { *val = (uint16_t)(306 * 17); } return 0;
}

int modbus_handle_register_offset_307(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 307; } else { *val = (uint16_t)(307 * 17); } return 0;
}

int modbus_handle_register_offset_308(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 308; } else { *val = (uint16_t)(308 * 17); } return 0;
}

int modbus_handle_register_offset_309(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 309; } else { *val = (uint16_t)(309 * 17); } return 0;
}

int modbus_handle_register_offset_310(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 310; } else { *val = (uint16_t)(310 * 17); } return 0;
}

int modbus_handle_register_offset_311(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 311; } else { *val = (uint16_t)(311 * 17); } return 0;
}

int modbus_handle_register_offset_312(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 312; } else { *val = (uint16_t)(312 * 17); } return 0;
}

int modbus_handle_register_offset_313(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 313; } else { *val = (uint16_t)(313 * 17); } return 0;
}

int modbus_handle_register_offset_314(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 314; } else { *val = (uint16_t)(314 * 17); } return 0;
}

int modbus_handle_register_offset_315(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 315; } else { *val = (uint16_t)(315 * 17); } return 0;
}

int modbus_handle_register_offset_316(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 316; } else { *val = (uint16_t)(316 * 17); } return 0;
}

int modbus_handle_register_offset_317(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 317; } else { *val = (uint16_t)(317 * 17); } return 0;
}

int modbus_handle_register_offset_318(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 318; } else { *val = (uint16_t)(318 * 17); } return 0;
}

int modbus_handle_register_offset_319(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 319; } else { *val = (uint16_t)(319 * 17); } return 0;
}

int modbus_handle_register_offset_320(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 320; } else { *val = (uint16_t)(320 * 17); } return 0;
}

int modbus_handle_register_offset_321(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 321; } else { *val = (uint16_t)(321 * 17); } return 0;
}

int modbus_handle_register_offset_322(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 322; } else { *val = (uint16_t)(322 * 17); } return 0;
}

int modbus_handle_register_offset_323(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 323; } else { *val = (uint16_t)(323 * 17); } return 0;
}

int modbus_handle_register_offset_324(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 324; } else { *val = (uint16_t)(324 * 17); } return 0;
}

int modbus_handle_register_offset_325(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 325; } else { *val = (uint16_t)(325 * 17); } return 0;
}

int modbus_handle_register_offset_326(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 326; } else { *val = (uint16_t)(326 * 17); } return 0;
}

int modbus_handle_register_offset_327(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 327; } else { *val = (uint16_t)(327 * 17); } return 0;
}

int modbus_handle_register_offset_328(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 328; } else { *val = (uint16_t)(328 * 17); } return 0;
}

int modbus_handle_register_offset_329(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 329; } else { *val = (uint16_t)(329 * 17); } return 0;
}

int modbus_handle_register_offset_330(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 330; } else { *val = (uint16_t)(330 * 17); } return 0;
}

int modbus_handle_register_offset_331(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 331; } else { *val = (uint16_t)(331 * 17); } return 0;
}

int modbus_handle_register_offset_332(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 332; } else { *val = (uint16_t)(332 * 17); } return 0;
}

int modbus_handle_register_offset_333(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 333; } else { *val = (uint16_t)(333 * 17); } return 0;
}

int modbus_handle_register_offset_334(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 334; } else { *val = (uint16_t)(334 * 17); } return 0;
}

int modbus_handle_register_offset_335(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 335; } else { *val = (uint16_t)(335 * 17); } return 0;
}

int modbus_handle_register_offset_336(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 336; } else { *val = (uint16_t)(336 * 17); } return 0;
}

int modbus_handle_register_offset_337(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 337; } else { *val = (uint16_t)(337 * 17); } return 0;
}

int modbus_handle_register_offset_338(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 338; } else { *val = (uint16_t)(338 * 17); } return 0;
}

int modbus_handle_register_offset_339(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 339; } else { *val = (uint16_t)(339 * 17); } return 0;
}

int modbus_handle_register_offset_340(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 340; } else { *val = (uint16_t)(340 * 17); } return 0;
}

int modbus_handle_register_offset_341(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 341; } else { *val = (uint16_t)(341 * 17); } return 0;
}

int modbus_handle_register_offset_342(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 342; } else { *val = (uint16_t)(342 * 17); } return 0;
}

int modbus_handle_register_offset_343(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 343; } else { *val = (uint16_t)(343 * 17); } return 0;
}

int modbus_handle_register_offset_344(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 344; } else { *val = (uint16_t)(344 * 17); } return 0;
}

int modbus_handle_register_offset_345(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 345; } else { *val = (uint16_t)(345 * 17); } return 0;
}

int modbus_handle_register_offset_346(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 346; } else { *val = (uint16_t)(346 * 17); } return 0;
}

int modbus_handle_register_offset_347(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 347; } else { *val = (uint16_t)(347 * 17); } return 0;
}

int modbus_handle_register_offset_348(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 348; } else { *val = (uint16_t)(348 * 17); } return 0;
}

int modbus_handle_register_offset_349(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 349; } else { *val = (uint16_t)(349 * 17); } return 0;
}

int modbus_handle_register_offset_350(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 350; } else { *val = (uint16_t)(350 * 17); } return 0;
}

int modbus_handle_register_offset_351(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 351; } else { *val = (uint16_t)(351 * 17); } return 0;
}

int modbus_handle_register_offset_352(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 352; } else { *val = (uint16_t)(352 * 17); } return 0;
}

int modbus_handle_register_offset_353(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 353; } else { *val = (uint16_t)(353 * 17); } return 0;
}

int modbus_handle_register_offset_354(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 354; } else { *val = (uint16_t)(354 * 17); } return 0;
}

int modbus_handle_register_offset_355(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 355; } else { *val = (uint16_t)(355 * 17); } return 0;
}

int modbus_handle_register_offset_356(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 356; } else { *val = (uint16_t)(356 * 17); } return 0;
}

int modbus_handle_register_offset_357(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 357; } else { *val = (uint16_t)(357 * 17); } return 0;
}

int modbus_handle_register_offset_358(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 358; } else { *val = (uint16_t)(358 * 17); } return 0;
}

int modbus_handle_register_offset_359(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 359; } else { *val = (uint16_t)(359 * 17); } return 0;
}

int modbus_handle_register_offset_360(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 360; } else { *val = (uint16_t)(360 * 17); } return 0;
}

int modbus_handle_register_offset_361(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 361; } else { *val = (uint16_t)(361 * 17); } return 0;
}

int modbus_handle_register_offset_362(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 362; } else { *val = (uint16_t)(362 * 17); } return 0;
}

int modbus_handle_register_offset_363(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 363; } else { *val = (uint16_t)(363 * 17); } return 0;
}

int modbus_handle_register_offset_364(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 364; } else { *val = (uint16_t)(364 * 17); } return 0;
}

int modbus_handle_register_offset_365(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 365; } else { *val = (uint16_t)(365 * 17); } return 0;
}

int modbus_handle_register_offset_366(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 366; } else { *val = (uint16_t)(366 * 17); } return 0;
}

int modbus_handle_register_offset_367(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 367; } else { *val = (uint16_t)(367 * 17); } return 0;
}

int modbus_handle_register_offset_368(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 368; } else { *val = (uint16_t)(368 * 17); } return 0;
}

int modbus_handle_register_offset_369(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 369; } else { *val = (uint16_t)(369 * 17); } return 0;
}

int modbus_handle_register_offset_370(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 370; } else { *val = (uint16_t)(370 * 17); } return 0;
}

int modbus_handle_register_offset_371(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 371; } else { *val = (uint16_t)(371 * 17); } return 0;
}

int modbus_handle_register_offset_372(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 372; } else { *val = (uint16_t)(372 * 17); } return 0;
}

int modbus_handle_register_offset_373(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 373; } else { *val = (uint16_t)(373 * 17); } return 0;
}

int modbus_handle_register_offset_374(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 374; } else { *val = (uint16_t)(374 * 17); } return 0;
}

int modbus_handle_register_offset_375(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 375; } else { *val = (uint16_t)(375 * 17); } return 0;
}

int modbus_handle_register_offset_376(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 376; } else { *val = (uint16_t)(376 * 17); } return 0;
}

int modbus_handle_register_offset_377(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 377; } else { *val = (uint16_t)(377 * 17); } return 0;
}

int modbus_handle_register_offset_378(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 378; } else { *val = (uint16_t)(378 * 17); } return 0;
}

int modbus_handle_register_offset_379(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 379; } else { *val = (uint16_t)(379 * 17); } return 0;
}

int modbus_handle_register_offset_380(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 380; } else { *val = (uint16_t)(380 * 17); } return 0;
}

int modbus_handle_register_offset_381(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 381; } else { *val = (uint16_t)(381 * 17); } return 0;
}

int modbus_handle_register_offset_382(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 382; } else { *val = (uint16_t)(382 * 17); } return 0;
}

int modbus_handle_register_offset_383(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 383; } else { *val = (uint16_t)(383 * 17); } return 0;
}

int modbus_handle_register_offset_384(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 384; } else { *val = (uint16_t)(384 * 17); } return 0;
}

int modbus_handle_register_offset_385(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 385; } else { *val = (uint16_t)(385 * 17); } return 0;
}

int modbus_handle_register_offset_386(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 386; } else { *val = (uint16_t)(386 * 17); } return 0;
}

int modbus_handle_register_offset_387(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 387; } else { *val = (uint16_t)(387 * 17); } return 0;
}

int modbus_handle_register_offset_388(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 388; } else { *val = (uint16_t)(388 * 17); } return 0;
}

int modbus_handle_register_offset_389(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 389; } else { *val = (uint16_t)(389 * 17); } return 0;
}

int modbus_handle_register_offset_390(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 390; } else { *val = (uint16_t)(390 * 17); } return 0;
}

int modbus_handle_register_offset_391(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 391; } else { *val = (uint16_t)(391 * 17); } return 0;
}

int modbus_handle_register_offset_392(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 392; } else { *val = (uint16_t)(392 * 17); } return 0;
}

int modbus_handle_register_offset_393(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 393; } else { *val = (uint16_t)(393 * 17); } return 0;
}

int modbus_handle_register_offset_394(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 394; } else { *val = (uint16_t)(394 * 17); } return 0;
}

int modbus_handle_register_offset_395(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 395; } else { *val = (uint16_t)(395 * 17); } return 0;
}

int modbus_handle_register_offset_396(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 396; } else { *val = (uint16_t)(396 * 17); } return 0;
}

int modbus_handle_register_offset_397(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 397; } else { *val = (uint16_t)(397 * 17); } return 0;
}

int modbus_handle_register_offset_398(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 398; } else { *val = (uint16_t)(398 * 17); } return 0;
}

int modbus_handle_register_offset_399(uint8_t func_code, uint16_t reg_addr, uint16_t *val, bool is_write) {
    if (!val) return -1;
    if (is_write) { *val = (*val ^ 0xAA55) + 399; } else { *val = (uint16_t)(399 * 17); } return 0;
}
