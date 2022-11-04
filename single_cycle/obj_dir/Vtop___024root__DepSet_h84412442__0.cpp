// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    SData/*13:0*/ __Vdlyvdim0__top__DOT__sc__DOT__instmem__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__sc__DOT__instmem__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__sc__DOT__instmem__DOT__mem__v0;
    SData/*13:0*/ __Vdlyvdim0__top__DOT__sc__DOT__instmem__DOT__mem__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__sc__DOT__instmem__DOT__mem__v1;
    SData/*13:0*/ __Vdlyvdim0__top__DOT__sc__DOT__instmem__DOT__mem__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__sc__DOT__instmem__DOT__mem__v2;
    SData/*13:0*/ __Vdlyvdim0__top__DOT__sc__DOT__instmem__DOT__mem__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__sc__DOT__instmem__DOT__mem__v3;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__sc__DOT__regf__DOT__reg_array__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__sc__DOT__regf__DOT__reg_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__sc__DOT__regf__DOT__reg_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__sc__DOT__regf__DOT__reg_array__v1;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__input_mem__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__input_mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__sc__DOT__lsu1__DOT__input_mem__v0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__input_mem__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__input_mem__v1;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__input_mem__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__input_mem__v2;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__output_mem__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__output_mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__sc__DOT__lsu1__DOT__output_mem__v0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__output_mem__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__output_mem__v1;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__output_mem__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__output_mem__v2;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__output_mem__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__output_mem__v3;
    SData/*9:0*/ __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__data_mem__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__data_mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__sc__DOT__lsu1__DOT__data_mem__v0;
    SData/*9:0*/ __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__data_mem__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__data_mem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__sc__DOT__lsu1__DOT__data_mem__v1;
    SData/*9:0*/ __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__data_mem__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__data_mem__v2;
    SData/*9:0*/ __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__data_mem__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__data_mem__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__sc__DOT__lsu1__DOT__data_mem__v3;
    SData/*9:0*/ __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__data_mem__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__data_mem__v4;
    SData/*9:0*/ __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__data_mem__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__data_mem__v5;
    SData/*9:0*/ __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__data_mem__v6;
    CData/*7:0*/ __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__data_mem__v6;
    // Body
    __Vdlyvset__top__DOT__sc__DOT__lsu1__DOT__input_mem__v0 = 0U;
    __Vdlyvset__top__DOT__sc__DOT__lsu1__DOT__output_mem__v0 = 0U;
    __Vdlyvset__top__DOT__sc__DOT__lsu1__DOT__data_mem__v0 = 0U;
    __Vdlyvset__top__DOT__sc__DOT__lsu1__DOT__data_mem__v1 = 0U;
    __Vdlyvset__top__DOT__sc__DOT__lsu1__DOT__data_mem__v3 = 0U;
    __Vdlyvset__top__DOT__sc__DOT__regf__DOT__reg_array__v0 = 0U;
    __Vdlyvset__top__DOT__sc__DOT__regf__DOT__reg_array__v1 = 0U;
    __Vdlyvset__top__DOT__sc__DOT__instmem__DOT__mem__v0 = 0U;
    if (vlSelf->rst_ni) {
        if ((0x20U & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))) {
            __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__input_mem__v0 
                = (0xffU & vlSelf->io_sw);
            __Vdlyvset__top__DOT__sc__DOT__lsu1__DOT__input_mem__v0 = 1U;
            __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__input_mem__v0 
                = (0xffU & vlSelf->top__DOT__sc__DOT__alu_data);
            __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__input_mem__v1 
                = (0xffU & (vlSelf->io_sw >> 8U));
            __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__input_mem__v1 
                = (0xffU & ((IData)(1U) + vlSelf->top__DOT__sc__DOT__alu_data));
            __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__input_mem__v2 
                = (3U & (vlSelf->io_sw >> 0x10U));
            __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__input_mem__v2 
                = (0xffU & ((IData)(2U) + vlSelf->top__DOT__sc__DOT__alu_data));
            __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__output_mem__v0 
                = (0xffU & vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_in);
            __Vdlyvset__top__DOT__sc__DOT__lsu1__DOT__output_mem__v0 = 1U;
            __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__output_mem__v0 
                = (0xffU & vlSelf->top__DOT__sc__DOT__alu_data);
            __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__output_mem__v1 
                = (0xffU & (vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_in 
                            >> 8U));
            __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__output_mem__v1 
                = (0xffU & ((IData)(1U) + vlSelf->top__DOT__sc__DOT__alu_data));
            __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__output_mem__v2 
                = (0xffU & (vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_in 
                            >> 0x10U));
            __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__output_mem__v2 
                = (0xffU & ((IData)(2U) + vlSelf->top__DOT__sc__DOT__alu_data));
            __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__output_mem__v3 
                = (vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_in 
                   >> 0x18U);
            __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__output_mem__v3 
                = (0xffU & ((IData)(3U) + vlSelf->top__DOT__sc__DOT__alu_data));
            if ((0U == (7U & ((IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus) 
                              >> 2U)))) {
                __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__data_mem__v0 
                    = (0xffU & vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_in);
                __Vdlyvset__top__DOT__sc__DOT__lsu1__DOT__data_mem__v0 = 1U;
                __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__data_mem__v0 
                    = (0x3ffU & vlSelf->top__DOT__sc__DOT__alu_data);
            } else if ((1U == (7U & ((IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus) 
                                     >> 2U)))) {
                __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__data_mem__v1 
                    = (0xffU & (vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_in 
                                >> 8U));
                __Vdlyvset__top__DOT__sc__DOT__lsu1__DOT__data_mem__v1 = 1U;
                __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__data_mem__v1 
                    = (0x3ffU & ((IData)(1U) + vlSelf->top__DOT__sc__DOT__alu_data));
                __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__data_mem__v2 
                    = (0xffU & vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_in);
                __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__data_mem__v2 
                    = (0x3ffU & vlSelf->top__DOT__sc__DOT__alu_data);
            } else {
                __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__data_mem__v3 
                    = (vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_in 
                       >> 0x18U);
                __Vdlyvset__top__DOT__sc__DOT__lsu1__DOT__data_mem__v3 = 1U;
                __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__data_mem__v3 
                    = (0x3ffU & ((IData)(3U) + vlSelf->top__DOT__sc__DOT__alu_data));
                __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__data_mem__v4 
                    = (0xffU & (vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_in 
                                >> 0x10U));
                __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__data_mem__v4 
                    = (0x3ffU & ((IData)(2U) + vlSelf->top__DOT__sc__DOT__alu_data));
                __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__data_mem__v5 
                    = (0xffU & (vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_in 
                                >> 8U));
                __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__data_mem__v5 
                    = (0x3ffU & ((IData)(1U) + vlSelf->top__DOT__sc__DOT__alu_data));
                __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__data_mem__v6 
                    = (0xffU & vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_in);
                __Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__data_mem__v6 
                    = (0x3ffU & vlSelf->top__DOT__sc__DOT__alu_data);
            }
        }
        if ((0x2000U & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))) {
            if ((0U != (0x1fU & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                 >> 7U)))) {
                vlSelf->top__DOT__sc__DOT__regf__DOT____Vlvbound_hf4fd0708__0 
                    = vlSelf->top__DOT__sc__DOT__wb_data;
                if ((0x1eU >= (0x1fU & ((vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                         >> 7U) - (IData)(1U))))) {
                    __Vdlyvval__top__DOT__sc__DOT__regf__DOT__reg_array__v0 
                        = vlSelf->top__DOT__sc__DOT__regf__DOT____Vlvbound_hf4fd0708__0;
                    __Vdlyvset__top__DOT__sc__DOT__regf__DOT__reg_array__v0 = 1U;
                    __Vdlyvdim0__top__DOT__sc__DOT__regf__DOT__reg_array__v0 
                        = (0x1fU & ((vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                     >> 7U) - (IData)(1U)));
                }
            }
        }
        if (vlSelf->top__DOT__sc__DOT__instmem__DOT__wren_i) {
            __Vdlyvval__top__DOT__sc__DOT__instmem__DOT__mem__v0 
                = (vlSelf->top__DOT__sc__DOT__instmem__DOT__wdata_i 
                   >> 0x18U);
            __Vdlyvset__top__DOT__sc__DOT__instmem__DOT__mem__v0 = 1U;
            __Vdlyvdim0__top__DOT__sc__DOT__instmem__DOT__mem__v0 
                = (0x3fffU & ((IData)(3U) + vlSelf->top__DOT__sc__DOT__pc));
            __Vdlyvval__top__DOT__sc__DOT__instmem__DOT__mem__v1 
                = (0xffU & (vlSelf->top__DOT__sc__DOT__instmem__DOT__wdata_i 
                            >> 0x10U));
            __Vdlyvdim0__top__DOT__sc__DOT__instmem__DOT__mem__v1 
                = (0x3fffU & ((IData)(2U) + vlSelf->top__DOT__sc__DOT__pc));
            __Vdlyvval__top__DOT__sc__DOT__instmem__DOT__mem__v2 
                = (0xffU & (vlSelf->top__DOT__sc__DOT__instmem__DOT__wdata_i 
                            >> 8U));
            __Vdlyvdim0__top__DOT__sc__DOT__instmem__DOT__mem__v2 
                = (0x3fffU & ((IData)(1U) + vlSelf->top__DOT__sc__DOT__pc));
            __Vdlyvval__top__DOT__sc__DOT__instmem__DOT__mem__v3 
                = (0xffU & vlSelf->top__DOT__sc__DOT__instmem__DOT__wdata_i);
            __Vdlyvdim0__top__DOT__sc__DOT__instmem__DOT__mem__v3 
                = (0x3fffU & vlSelf->top__DOT__sc__DOT__pc);
        }
        vlSelf->top__DOT__sc__DOT__pc = vlSelf->top__DOT__sc__DOT__nxt_pc;
    } else {
        __Vdlyvset__top__DOT__sc__DOT__regf__DOT__reg_array__v1 = 1U;
        vlSelf->top__DOT__sc__DOT__pc = 0U;
    }
    if (__Vdlyvset__top__DOT__sc__DOT__lsu1__DOT__input_mem__v0) {
        vlSelf->top__DOT__sc__DOT__lsu1__DOT__input_mem[__Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__input_mem__v0] 
            = __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__input_mem__v0;
        vlSelf->top__DOT__sc__DOT__lsu1__DOT__input_mem[__Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__input_mem__v1] 
            = __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__input_mem__v1;
        vlSelf->top__DOT__sc__DOT__lsu1__DOT__input_mem[__Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__input_mem__v2] 
            = __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__input_mem__v2;
    }
    if (__Vdlyvset__top__DOT__sc__DOT__lsu1__DOT__output_mem__v0) {
        vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_mem[__Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__output_mem__v0] 
            = __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__output_mem__v0;
        vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_mem[__Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__output_mem__v1] 
            = __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__output_mem__v1;
        vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_mem[__Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__output_mem__v2] 
            = __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__output_mem__v2;
        vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_mem[__Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__output_mem__v3] 
            = __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__output_mem__v3;
    }
    if (__Vdlyvset__top__DOT__sc__DOT__lsu1__DOT__data_mem__v0) {
        vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem[__Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__data_mem__v0] 
            = __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__data_mem__v0;
    }
    if (__Vdlyvset__top__DOT__sc__DOT__lsu1__DOT__data_mem__v1) {
        vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem[__Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__data_mem__v1] 
            = __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__data_mem__v1;
        vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem[__Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__data_mem__v2] 
            = __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__data_mem__v2;
    }
    if (__Vdlyvset__top__DOT__sc__DOT__lsu1__DOT__data_mem__v3) {
        vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem[__Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__data_mem__v3] 
            = __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__data_mem__v3;
        vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem[__Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__data_mem__v4] 
            = __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__data_mem__v4;
        vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem[__Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__data_mem__v5] 
            = __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__data_mem__v5;
        vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem[__Vdlyvdim0__top__DOT__sc__DOT__lsu1__DOT__data_mem__v6] 
            = __Vdlyvval__top__DOT__sc__DOT__lsu1__DOT__data_mem__v6;
    }
    if (__Vdlyvset__top__DOT__sc__DOT__regf__DOT__reg_array__v0) {
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[__Vdlyvdim0__top__DOT__sc__DOT__regf__DOT__reg_array__v0] 
            = __Vdlyvval__top__DOT__sc__DOT__regf__DOT__reg_array__v0;
    }
    if (__Vdlyvset__top__DOT__sc__DOT__regf__DOT__reg_array__v1) {
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0U] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[1U] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[2U] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[3U] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[4U] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[5U] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[6U] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[7U] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[8U] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[9U] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0xaU] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0xbU] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0xcU] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0xdU] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0xeU] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0xfU] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0x10U] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0x11U] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0x12U] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0x13U] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0x14U] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0x15U] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0x16U] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0x17U] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0x18U] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0x19U] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0x1aU] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0x1bU] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0x1cU] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0x1dU] = 0U;
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0x1eU] = 0U;
    }
    if (__Vdlyvset__top__DOT__sc__DOT__instmem__DOT__mem__v0) {
        vlSelf->top__DOT__sc__DOT__instmem__DOT__mem[__Vdlyvdim0__top__DOT__sc__DOT__instmem__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__sc__DOT__instmem__DOT__mem__v0;
        vlSelf->top__DOT__sc__DOT__instmem__DOT__mem[__Vdlyvdim0__top__DOT__sc__DOT__instmem__DOT__mem__v1] 
            = __Vdlyvval__top__DOT__sc__DOT__instmem__DOT__mem__v1;
        vlSelf->top__DOT__sc__DOT__instmem__DOT__mem[__Vdlyvdim0__top__DOT__sc__DOT__instmem__DOT__mem__v2] 
            = __Vdlyvval__top__DOT__sc__DOT__instmem__DOT__mem__v2;
        vlSelf->top__DOT__sc__DOT__instmem__DOT__mem[__Vdlyvdim0__top__DOT__sc__DOT__instmem__DOT__mem__v3] 
            = __Vdlyvval__top__DOT__sc__DOT__instmem__DOT__mem__v3;
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("memory[%2#] = %x\n",32,vlSelf->top__DOT__sc__DOT__pc,
                  8,vlSelf->top__DOT__sc__DOT__instmem__DOT__mem
                  [(0x3fffU & vlSelf->top__DOT__sc__DOT__pc)]);
    }
    vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
        = ((0xffffff00U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read) 
           | vlSelf->top__DOT__sc__DOT__instmem__DOT__mem
           [(0x3fffU & ((IData)(3U) + vlSelf->top__DOT__sc__DOT__pc))]);
    vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
        = ((0xffff00ffU & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read) 
           | (vlSelf->top__DOT__sc__DOT__instmem__DOT__mem
              [(0x3fffU & ((IData)(2U) + vlSelf->top__DOT__sc__DOT__pc))] 
              << 8U));
    vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
        = ((0xff00ffffU & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read) 
           | (vlSelf->top__DOT__sc__DOT__instmem__DOT__mem
              [(0x3fffU & ((IData)(1U) + vlSelf->top__DOT__sc__DOT__pc))] 
              << 0x10U));
    vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
        = ((0xffffffU & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read) 
           | (vlSelf->top__DOT__sc__DOT__instmem__DOT__mem
              [(0x3fffU & vlSelf->top__DOT__sc__DOT__pc)] 
              << 0x18U));
    if ((0x40U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)) {
        if ((0x20U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)) {
            if ((0x10U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)) {
                vlSelf->top__DOT__sc__DOT__imm = 0U;
            } else if ((8U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)) {
                if ((4U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)) {
                    if ((vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                         >> 0x1fU)) {
                        if ((vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                             >> 0x1fU)) {
                            vlSelf->top__DOT__sc__DOT__imm 
                                = (0xffe00000U | ((0x100000U 
                                                   & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                                      >> 0xbU)) 
                                                  | ((0xff000U 
                                                      & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read) 
                                                     | ((0x800U 
                                                         & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                                              >> 0x14U))))));
                        }
                    } else {
                        vlSelf->top__DOT__sc__DOT__imm 
                            = ((0x100000U & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                             >> 0xbU)) 
                               | ((0xff000U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read) 
                                  | ((0x800U & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                                >> 9U)) 
                                     | (0x7feU & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                                  >> 0x14U)))));
                    }
                } else {
                    vlSelf->top__DOT__sc__DOT__imm = 0U;
                }
            } else if ((4U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)) {
                if ((vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                     >> 0x1fU)) {
                    if ((vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                         >> 0x1fU)) {
                        vlSelf->top__DOT__sc__DOT__imm 
                            = (0xfffff000U | (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                              >> 0x14U));
                    }
                } else {
                    vlSelf->top__DOT__sc__DOT__imm 
                        = (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                           >> 0x14U);
                }
            } else if ((vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                        >> 0x1fU)) {
                if ((vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                     >> 0x1fU)) {
                    vlSelf->top__DOT__sc__DOT__imm 
                        = (0xffffe000U | ((0x1000U 
                                           & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                              >> 0x13U)) 
                                          | ((0x800U 
                                              & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                                 << 4U)) 
                                             | ((0x7e0U 
                                                 & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                                      >> 7U))))));
                }
            } else {
                vlSelf->top__DOT__sc__DOT__imm = ((0x1000U 
                                                   & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                                      >> 0x13U)) 
                                                  | ((0x800U 
                                                      & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                                              >> 7U)))));
            }
        } else {
            vlSelf->top__DOT__sc__DOT__imm = 0U;
        }
    } else if ((0x20U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)) {
        if ((0x10U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)) {
            vlSelf->top__DOT__sc__DOT__imm = ((8U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                               ? 0U
                                               : ((4U 
                                                   & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                   : 0U));
        } else if ((8U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)) {
            vlSelf->top__DOT__sc__DOT__imm = 0U;
        } else if ((4U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)) {
            vlSelf->top__DOT__sc__DOT__imm = 0U;
        } else if ((vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                    >> 0x1fU)) {
            if ((vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                 >> 0x1fU)) {
                vlSelf->top__DOT__sc__DOT__imm = (0xfffff000U 
                                                  | ((0xfe0U 
                                                      & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                                           >> 7U))));
            }
        } else {
            vlSelf->top__DOT__sc__DOT__imm = ((0xfe0U 
                                               & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                                    >> 7U)));
        }
    } else if ((0x10U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)) {
        if ((8U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)) {
            vlSelf->top__DOT__sc__DOT__imm = 0U;
        } else if ((4U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)) {
            vlSelf->top__DOT__sc__DOT__imm = (0xfffff000U 
                                              & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read);
        } else if ((vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                    >> 0x1fU)) {
            if ((vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                 >> 0x1fU)) {
                vlSelf->top__DOT__sc__DOT__imm = (0xfffff000U 
                                                  | (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                                     >> 0x14U));
            }
        } else {
            vlSelf->top__DOT__sc__DOT__imm = (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                              >> 0x14U);
        }
    } else {
        vlSelf->top__DOT__sc__DOT__imm = ((8U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                           ? 0U : (
                                                   (4U 
                                                    & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                    ? 0U
                                                    : 
                                                   (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                                    >> 0x14U)));
    }
    vlSelf->top__DOT__sc__DOT__regf__DOT__rs1_data 
        = ((0U != (0x1fU & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                            >> 0xfU))) ? ((0x1eU >= 
                                           (0x1fU & 
                                            ((vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                              >> 0xfU) 
                                             - (IData)(1U))))
                                           ? vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array
                                          [(0x1fU & 
                                            ((vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                              >> 0xfU) 
                                             - (IData)(1U)))]
                                           : vlSelf->top__DOT__sc__DOT__regf__DOT____Vxrand_h96fd10a2__0)
            : 0U);
    vlSelf->top__DOT__sc__DOT__regf__DOT__rs2_data 
        = ((0U != (0x1fU & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                            >> 0x14U))) ? ((0x1eU >= 
                                            (0x1fU 
                                             & ((vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                                 >> 0x14U) 
                                                - (IData)(1U))))
                                            ? vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array
                                           [(0x1fU 
                                             & ((vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                                 >> 0x14U) 
                                                - (IData)(1U)))]
                                            : vlSelf->top__DOT__sc__DOT__regf__DOT____Vxrand_h96fd10a2__1)
            : 0U);
    vlSelf->top__DOT__sc__DOT__brc__DOT__sub_temp = 
        (0xffffU & ((IData)(1U) + (vlSelf->top__DOT__sc__DOT__regf__DOT__rs1_data 
                                   + (~ vlSelf->top__DOT__sc__DOT__regf__DOT__rs2_data))));
}
