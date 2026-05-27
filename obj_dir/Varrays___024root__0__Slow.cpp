// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varrays.h for the primary calling header

#include "Varrays__pch.h"

VL_ATTR_COLD void Varrays___024root___eval_static(Varrays___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varrays___024root___eval_static\n"); );
    Varrays__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Varrays___024root___eval_initial__TOP(Varrays___024root* vlSelf);

VL_ATTR_COLD void Varrays___024root___eval_initial(Varrays___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varrays___024root___eval_initial\n"); );
    Varrays__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Varrays___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Varrays___024root___eval_initial__TOP(Varrays___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varrays___024root___eval_initial__TOP\n"); );
    Varrays__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    vlSelfRef.arrs__DOT__iarr0[0U] = 1U;
    vlSelfRef.arrs__DOT__iarr0[1U] = 2U;
    vlSelfRef.arrs__DOT__iarr0[2U] = 3U;
    vlSelfRef.arrs__DOT__iarr0[3U] = 4U;
    vlSelfRef.arrs__DOT__iarr1[4U] = 0xababf1f1U;
    vlSelfRef.arrs__DOT__iarr2[0U] = 0x00000010U;
    vlSelfRef.arrs__DOT__iarr2[1U] = 0x00000010U;
    vlSelfRef.arrs__DOT__iarr2[2U] = 0x00000010U;
    vlSelfRef.arrs__DOT__iarr2[3U] = 0x00000010U;
    vlSelfRef.arrs__DOT__iarr2[4U] = 0x00000010U;
    vlSelfRef.arrs__DOT__iarr2[5U] = 0x00000010U;
    vlSelfRef.arrs__DOT__iarr2[6U] = 0x00000010U;
    vlSelfRef.arrs__DOT__imtx[0U][0U] = 0U;
    vlSelfRef.arrs__DOT__imtx[0U][1U] = 0U;
    vlSelfRef.arrs__DOT__imtx[0U][2U] = 0U;
    vlSelfRef.arrs__DOT__imtx[0U][3U] = 0U;
    vlSelfRef.arrs__DOT__imtx[1U][0U] = 0U;
    vlSelfRef.arrs__DOT__imtx[1U][1U] = 0U;
    vlSelfRef.arrs__DOT__imtx[1U][2U] = 0U;
    vlSelfRef.arrs__DOT__imtx[1U][3U] = 0U;
    vlSelfRef.arrs__DOT__imtx[1U][0U] = 1U;
    vlSelfRef.arrs__DOT__imtx[1U][1U] = 2U;
    vlSelfRef.arrs__DOT__imtx[1U][2U] = 3U;
    vlSelfRef.arrs__DOT__imtx[1U][3U] = 4U;
    VL_WRITEF_NX("iarr0[1] = 0x0%0h\niarr0[2] = 0x0%0h\niarr0[3] = 0x0%0h\niarr0[4] = 0x0%0h\n\niarr1[5] = 0x0%0h\niarr1[4] = 0x0%0h\niarr1[3] = 0x0%0h\niarr1[2] = 0x0%0h\niarr1[1] = 0x0%0h\niarr1[0] = 0x0%0h\n\niarr2[0] = 0x0%0d\niarr2[1] = 0x0%0d\niarr2[2] = 0x0%0d\niarr2[3] = 0x0%0d\niarr2[4] = 0x0%0d\niarr2[5] = 0x0%0d\niarr2[6] = 0x0%0d\n\n",17
                 , '~',32,vlSelfRef.arrs__DOT__iarr0[0U]
                 , '~',32,vlSelfRef.arrs__DOT__iarr0[1U]
                 , '~',32,vlSelfRef.arrs__DOT__iarr0[2U]
                 , '~',32,vlSelfRef.arrs__DOT__iarr0[3U]
                 , '~',32,vlSelfRef.arrs__DOT__iarr1[5U]
                 , '~',32,vlSelfRef.arrs__DOT__iarr1[4U]
                 , '~',32,vlSelfRef.arrs__DOT__iarr1[3U]
                 , '~',32,vlSelfRef.arrs__DOT__iarr1[2U]
                 , '~',32,vlSelfRef.arrs__DOT__iarr1[1U]
                 , '~',32,vlSelfRef.arrs__DOT__iarr1[0U]
                 , '~',32,vlSelfRef.arrs__DOT__iarr2[0U]
                 , '~',32,vlSelfRef.arrs__DOT__iarr2[1U]
                 , '~',32,vlSelfRef.arrs__DOT__iarr2[2U]
                 , '~',32,vlSelfRef.arrs__DOT__iarr2[3U]
                 , '~',32,vlSelfRef.arrs__DOT__iarr2[4U]
                 , '~',32,vlSelfRef.arrs__DOT__iarr2[5U]
                 , '~',32,vlSelfRef.arrs__DOT__iarr2[6U]);
    __Vtemp_1 = VL_TO_STRING_DEREF(vlSelfRef.arrs__DOT__imtx[0U]);
    VL_WRITEF_NX("imtx[0] = %0h\nimtx[0][1] = 0x0%0h\nimtx[0][2] = 0x0%0h\nimtx[0][3] = 0x0%0h\nimtx[0][4] = 0x0%0h\n",5
                 , '!',&(__Vtemp_1), '~',32,vlSelfRef.arrs__DOT__imtx[0U][0U]
                 , '~',32,vlSelfRef.arrs__DOT__imtx[0U][1U]
                 , '~',32,vlSelfRef.arrs__DOT__imtx[0U][2U]
                 , '~',32,vlSelfRef.arrs__DOT__imtx[0U][3U]);
    __Vtemp_2 = VL_TO_STRING_DEREF(vlSelfRef.arrs__DOT__imtx[1U]);
    VL_WRITEF_NX("imtx[1] = %0h\nimtx[1][1] = 0x0%0h\nimtx[1][2] = 0x0%0h\nimtx[1][3] = 0x0%0h\nimtx[1][4] = 0x0%0h\n",5
                 , '!',&(__Vtemp_2), '~',32,vlSelfRef.arrs__DOT__imtx[1U][0U]
                 , '~',32,vlSelfRef.arrs__DOT__imtx[1U][1U]
                 , '~',32,vlSelfRef.arrs__DOT__imtx[1U][2U]
                 , '~',32,vlSelfRef.arrs__DOT__imtx[1U][3U]);
}

VL_ATTR_COLD void Varrays___024root___eval_final(Varrays___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varrays___024root___eval_final\n"); );
    Varrays__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Varrays___024root___eval_settle(Varrays___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varrays___024root___eval_settle\n"); );
    Varrays__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Varrays___024root___ctor_var_reset(Varrays___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varrays___024root___ctor_var_reset\n"); );
    Varrays__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->arrs__DOT__iarr0[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->arrs__DOT__iarr1[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->arrs__DOT__iarr2[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->arrs__DOT__imtx[__Vi0][__Vi1] = 0;
        }
    }
}
