// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->io_sw = VL_RAND_RESET_I(18);
    vlSelf->io_lcd = VL_RAND_RESET_I(32);
    vlSelf->io_ledg = VL_RAND_RESET_I(32);
    vlSelf->io_ledr = VL_RAND_RESET_I(32);
    vlSelf->io_hex0 = VL_RAND_RESET_I(32);
    vlSelf->io_hex1 = VL_RAND_RESET_I(32);
    vlSelf->io_hex2 = VL_RAND_RESET_I(32);
    vlSelf->io_hex3 = VL_RAND_RESET_I(32);
    vlSelf->io_hex4 = VL_RAND_RESET_I(32);
    vlSelf->io_hex5 = VL_RAND_RESET_I(32);
    vlSelf->io_hex6 = VL_RAND_RESET_I(32);
    vlSelf->io_hex7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sc__DOT__nxt_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sc__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sc__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sc__DOT__operand_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sc__DOT__operand_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sc__DOT__alu_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sc__DOT__wb_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sc__DOT__br_less = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sc__DOT__br_equal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sc__DOT__instmem__DOT__wren_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sc__DOT__instmem__DOT__wdata_i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        vlSelf->top__DOT__sc__DOT__instmem__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sc__DOT__regf__DOT____Vxrand_h96fd10a2__1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sc__DOT__regf__DOT____Vxrand_h96fd10a2__0 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__sc__DOT__regf__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sc__DOT__regf__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sc__DOT__regf__DOT____Vlvbound_hf4fd0708__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sc__DOT__brc__DOT__sub_temp = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__sc__DOT__alu1__DOT__subtemp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sc__DOT__lsu1__DOT__input_peri_out = VL_RAND_RESET_I(18);
    vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__sc__DOT__lsu1__DOT__input_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__sc__DOT__lsu1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus = VL_RAND_RESET_I(15);
    vlSelf->__Vchglast__TOP__top__DOT__sc__DOT__ctrl__DOT__bus = VL_RAND_RESET_I(15);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
