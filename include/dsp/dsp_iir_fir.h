/**
 * @file dsp_iir_fir.h
 * @brief Advanced IIR Butterworth, Chebyshev, and FIR Polyphase Filters
 * @copyright Clean-room proprietary implementation. Zero GPL/Apache code.
 */

#ifndef DSP_IIR_FIR_H
#define DSP_IIR_FIR_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void dsp_filter_iir_biquad_cascade_1(const float *in, float *out, size_t len, const float coeffs[1 * 5]);
void dsp_filter_fir_polyphase_decimate_1(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_2(const float *in, float *out, size_t len, const float coeffs[2 * 5]);
void dsp_filter_fir_polyphase_decimate_2(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_3(const float *in, float *out, size_t len, const float coeffs[3 * 5]);
void dsp_filter_fir_polyphase_decimate_3(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_4(const float *in, float *out, size_t len, const float coeffs[4 * 5]);
void dsp_filter_fir_polyphase_decimate_4(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_5(const float *in, float *out, size_t len, const float coeffs[5 * 5]);
void dsp_filter_fir_polyphase_decimate_5(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_6(const float *in, float *out, size_t len, const float coeffs[6 * 5]);
void dsp_filter_fir_polyphase_decimate_6(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_7(const float *in, float *out, size_t len, const float coeffs[7 * 5]);
void dsp_filter_fir_polyphase_decimate_7(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_8(const float *in, float *out, size_t len, const float coeffs[8 * 5]);
void dsp_filter_fir_polyphase_decimate_8(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_9(const float *in, float *out, size_t len, const float coeffs[9 * 5]);
void dsp_filter_fir_polyphase_decimate_9(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_10(const float *in, float *out, size_t len, const float coeffs[10 * 5]);
void dsp_filter_fir_polyphase_decimate_10(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_11(const float *in, float *out, size_t len, const float coeffs[11 * 5]);
void dsp_filter_fir_polyphase_decimate_11(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_12(const float *in, float *out, size_t len, const float coeffs[12 * 5]);
void dsp_filter_fir_polyphase_decimate_12(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_13(const float *in, float *out, size_t len, const float coeffs[13 * 5]);
void dsp_filter_fir_polyphase_decimate_13(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_14(const float *in, float *out, size_t len, const float coeffs[14 * 5]);
void dsp_filter_fir_polyphase_decimate_14(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_15(const float *in, float *out, size_t len, const float coeffs[15 * 5]);
void dsp_filter_fir_polyphase_decimate_15(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_16(const float *in, float *out, size_t len, const float coeffs[16 * 5]);
void dsp_filter_fir_polyphase_decimate_16(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_17(const float *in, float *out, size_t len, const float coeffs[17 * 5]);
void dsp_filter_fir_polyphase_decimate_17(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_18(const float *in, float *out, size_t len, const float coeffs[18 * 5]);
void dsp_filter_fir_polyphase_decimate_18(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_19(const float *in, float *out, size_t len, const float coeffs[19 * 5]);
void dsp_filter_fir_polyphase_decimate_19(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_20(const float *in, float *out, size_t len, const float coeffs[20 * 5]);
void dsp_filter_fir_polyphase_decimate_20(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_21(const float *in, float *out, size_t len, const float coeffs[21 * 5]);
void dsp_filter_fir_polyphase_decimate_21(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_22(const float *in, float *out, size_t len, const float coeffs[22 * 5]);
void dsp_filter_fir_polyphase_decimate_22(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_23(const float *in, float *out, size_t len, const float coeffs[23 * 5]);
void dsp_filter_fir_polyphase_decimate_23(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_24(const float *in, float *out, size_t len, const float coeffs[24 * 5]);
void dsp_filter_fir_polyphase_decimate_24(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_25(const float *in, float *out, size_t len, const float coeffs[25 * 5]);
void dsp_filter_fir_polyphase_decimate_25(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_26(const float *in, float *out, size_t len, const float coeffs[26 * 5]);
void dsp_filter_fir_polyphase_decimate_26(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_27(const float *in, float *out, size_t len, const float coeffs[27 * 5]);
void dsp_filter_fir_polyphase_decimate_27(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_28(const float *in, float *out, size_t len, const float coeffs[28 * 5]);
void dsp_filter_fir_polyphase_decimate_28(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_29(const float *in, float *out, size_t len, const float coeffs[29 * 5]);
void dsp_filter_fir_polyphase_decimate_29(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_30(const float *in, float *out, size_t len, const float coeffs[30 * 5]);
void dsp_filter_fir_polyphase_decimate_30(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_31(const float *in, float *out, size_t len, const float coeffs[31 * 5]);
void dsp_filter_fir_polyphase_decimate_31(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_32(const float *in, float *out, size_t len, const float coeffs[32 * 5]);
void dsp_filter_fir_polyphase_decimate_32(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_33(const float *in, float *out, size_t len, const float coeffs[33 * 5]);
void dsp_filter_fir_polyphase_decimate_33(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_34(const float *in, float *out, size_t len, const float coeffs[34 * 5]);
void dsp_filter_fir_polyphase_decimate_34(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_35(const float *in, float *out, size_t len, const float coeffs[35 * 5]);
void dsp_filter_fir_polyphase_decimate_35(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_36(const float *in, float *out, size_t len, const float coeffs[36 * 5]);
void dsp_filter_fir_polyphase_decimate_36(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_37(const float *in, float *out, size_t len, const float coeffs[37 * 5]);
void dsp_filter_fir_polyphase_decimate_37(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_38(const float *in, float *out, size_t len, const float coeffs[38 * 5]);
void dsp_filter_fir_polyphase_decimate_38(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_39(const float *in, float *out, size_t len, const float coeffs[39 * 5]);
void dsp_filter_fir_polyphase_decimate_39(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_40(const float *in, float *out, size_t len, const float coeffs[40 * 5]);
void dsp_filter_fir_polyphase_decimate_40(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_41(const float *in, float *out, size_t len, const float coeffs[41 * 5]);
void dsp_filter_fir_polyphase_decimate_41(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_42(const float *in, float *out, size_t len, const float coeffs[42 * 5]);
void dsp_filter_fir_polyphase_decimate_42(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_43(const float *in, float *out, size_t len, const float coeffs[43 * 5]);
void dsp_filter_fir_polyphase_decimate_43(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_44(const float *in, float *out, size_t len, const float coeffs[44 * 5]);
void dsp_filter_fir_polyphase_decimate_44(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_45(const float *in, float *out, size_t len, const float coeffs[45 * 5]);
void dsp_filter_fir_polyphase_decimate_45(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_46(const float *in, float *out, size_t len, const float coeffs[46 * 5]);
void dsp_filter_fir_polyphase_decimate_46(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_47(const float *in, float *out, size_t len, const float coeffs[47 * 5]);
void dsp_filter_fir_polyphase_decimate_47(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_48(const float *in, float *out, size_t len, const float coeffs[48 * 5]);
void dsp_filter_fir_polyphase_decimate_48(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_49(const float *in, float *out, size_t len, const float coeffs[49 * 5]);
void dsp_filter_fir_polyphase_decimate_49(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_50(const float *in, float *out, size_t len, const float coeffs[50 * 5]);
void dsp_filter_fir_polyphase_decimate_50(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_51(const float *in, float *out, size_t len, const float coeffs[51 * 5]);
void dsp_filter_fir_polyphase_decimate_51(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_52(const float *in, float *out, size_t len, const float coeffs[52 * 5]);
void dsp_filter_fir_polyphase_decimate_52(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_53(const float *in, float *out, size_t len, const float coeffs[53 * 5]);
void dsp_filter_fir_polyphase_decimate_53(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_54(const float *in, float *out, size_t len, const float coeffs[54 * 5]);
void dsp_filter_fir_polyphase_decimate_54(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_55(const float *in, float *out, size_t len, const float coeffs[55 * 5]);
void dsp_filter_fir_polyphase_decimate_55(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_56(const float *in, float *out, size_t len, const float coeffs[56 * 5]);
void dsp_filter_fir_polyphase_decimate_56(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_57(const float *in, float *out, size_t len, const float coeffs[57 * 5]);
void dsp_filter_fir_polyphase_decimate_57(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_58(const float *in, float *out, size_t len, const float coeffs[58 * 5]);
void dsp_filter_fir_polyphase_decimate_58(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_59(const float *in, float *out, size_t len, const float coeffs[59 * 5]);
void dsp_filter_fir_polyphase_decimate_59(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_60(const float *in, float *out, size_t len, const float coeffs[60 * 5]);
void dsp_filter_fir_polyphase_decimate_60(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_61(const float *in, float *out, size_t len, const float coeffs[61 * 5]);
void dsp_filter_fir_polyphase_decimate_61(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_62(const float *in, float *out, size_t len, const float coeffs[62 * 5]);
void dsp_filter_fir_polyphase_decimate_62(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_63(const float *in, float *out, size_t len, const float coeffs[63 * 5]);
void dsp_filter_fir_polyphase_decimate_63(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_64(const float *in, float *out, size_t len, const float coeffs[64 * 5]);
void dsp_filter_fir_polyphase_decimate_64(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_65(const float *in, float *out, size_t len, const float coeffs[65 * 5]);
void dsp_filter_fir_polyphase_decimate_65(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_66(const float *in, float *out, size_t len, const float coeffs[66 * 5]);
void dsp_filter_fir_polyphase_decimate_66(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_67(const float *in, float *out, size_t len, const float coeffs[67 * 5]);
void dsp_filter_fir_polyphase_decimate_67(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_68(const float *in, float *out, size_t len, const float coeffs[68 * 5]);
void dsp_filter_fir_polyphase_decimate_68(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_69(const float *in, float *out, size_t len, const float coeffs[69 * 5]);
void dsp_filter_fir_polyphase_decimate_69(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_70(const float *in, float *out, size_t len, const float coeffs[70 * 5]);
void dsp_filter_fir_polyphase_decimate_70(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_71(const float *in, float *out, size_t len, const float coeffs[71 * 5]);
void dsp_filter_fir_polyphase_decimate_71(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_72(const float *in, float *out, size_t len, const float coeffs[72 * 5]);
void dsp_filter_fir_polyphase_decimate_72(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_73(const float *in, float *out, size_t len, const float coeffs[73 * 5]);
void dsp_filter_fir_polyphase_decimate_73(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_74(const float *in, float *out, size_t len, const float coeffs[74 * 5]);
void dsp_filter_fir_polyphase_decimate_74(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_75(const float *in, float *out, size_t len, const float coeffs[75 * 5]);
void dsp_filter_fir_polyphase_decimate_75(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_76(const float *in, float *out, size_t len, const float coeffs[76 * 5]);
void dsp_filter_fir_polyphase_decimate_76(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_77(const float *in, float *out, size_t len, const float coeffs[77 * 5]);
void dsp_filter_fir_polyphase_decimate_77(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_78(const float *in, float *out, size_t len, const float coeffs[78 * 5]);
void dsp_filter_fir_polyphase_decimate_78(const float *in, float *out, size_t len, uint8_t factor);
void dsp_filter_iir_biquad_cascade_79(const float *in, float *out, size_t len, const float coeffs[79 * 5]);
void dsp_filter_fir_polyphase_decimate_79(const float *in, float *out, size_t len, uint8_t factor);

#ifdef __cplusplus
}
#endif
#endif
