// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__sc__DOT__lsu1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__sc__DOT__pc),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read),32);
        bufp->chgIData(oldp+3,(((IData)(4U) + vlSelf->top__DOT__sc__DOT__pc)),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__sc__DOT__imm),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__sc__DOT__regf__DOT__rs1_data),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__sc__DOT__regf__DOT__rs2_data),32);
        bufp->chgSData(oldp+7,((0xffffU & vlSelf->top__DOT__sc__DOT__regf__DOT__rs1_data)),16);
        bufp->chgSData(oldp+8,((0xffffU & vlSelf->top__DOT__sc__DOT__regf__DOT__rs2_data)),16);
        bufp->chgSData(oldp+9,(vlSelf->top__DOT__sc__DOT__brc__DOT__sub_temp),16);
        bufp->chgCData(oldp+10,((0x1fU & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+11,((0x1fU & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+12,((0x1fU & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                          >> 7U))),5);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[1]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[2]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[3]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[4]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[5]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[6]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[7]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[8]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[9]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[10]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[11]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[12]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[13]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[14]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[15]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[16]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[17]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[18]),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[19]),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[20]),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[21]),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[22]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[23]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[24]),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[25]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[26]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[27]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[28]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[29]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[30]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__sc__DOT__nxt_pc),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__sc__DOT__operand_a),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__sc__DOT__operand_b),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__sc__DOT__alu_data),32);
        bufp->chgIData(oldp+48,(((5U == (0xfU & (vlSelf->top__DOT__sc__DOT__alu_data 
                                                 >> 8U)))
                                  ? vlSelf->top__DOT__sc__DOT__lsu1__DOT__input_peri_out
                                  : ((4U == (0xfU & 
                                             (vlSelf->top__DOT__sc__DOT__alu_data 
                                              >> 8U)))
                                      ? vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_out
                                      : vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out))),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__sc__DOT__wb_data),32);
        bufp->chgBit(oldp+50,(vlSelf->top__DOT__sc__DOT__br_less));
        bufp->chgBit(oldp+51,(vlSelf->top__DOT__sc__DOT__br_equal));
        bufp->chgBit(oldp+52,((1U & ((IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus) 
                                     >> 0xeU))));
        bufp->chgBit(oldp+53,((1U & ((IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus) 
                                     >> 0xcU))));
        bufp->chgBit(oldp+54,((1U & ((IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus) 
                                     >> 0xdU))));
        bufp->chgBit(oldp+55,((1U & ((IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus) 
                                     >> 0xbU))));
        bufp->chgBit(oldp+56,((1U & ((IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus) 
                                     >> 0xaU))));
        bufp->chgBit(oldp+57,((1U & ((IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus) 
                                     >> 5U))));
        bufp->chgCData(oldp+58,((0xfU & ((IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus) 
                                         >> 6U))),4);
        bufp->chgCData(oldp+59,((7U & ((IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus) 
                                       >> 2U))),3);
        bufp->chgCData(oldp+60,((3U & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))),2);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__sc__DOT__alu1__DOT__subtemp),32);
        bufp->chgSData(oldp+62,(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus),15);
        bufp->chgSData(oldp+63,((0xfffU & vlSelf->top__DOT__sc__DOT__alu_data)),12);
        bufp->chgCData(oldp+64,((0xfU & (vlSelf->top__DOT__sc__DOT__alu_data 
                                         >> 8U))),4);
        bufp->chgCData(oldp+65,((0xffU & vlSelf->top__DOT__sc__DOT__alu_data)),8);
        bufp->chgSData(oldp+66,((0x3ffU & vlSelf->top__DOT__sc__DOT__alu_data)),10);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__sc__DOT__lsu1__DOT__input_peri_out),18);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_in),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_out),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_in),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out),32);
    }
    bufp->chgBit(oldp+72,(vlSelf->clk_i));
    bufp->chgBit(oldp+73,(vlSelf->rst_ni));
    bufp->chgIData(oldp+74,(vlSelf->io_sw),18);
    bufp->chgIData(oldp+75,(vlSelf->io_lcd),32);
    bufp->chgIData(oldp+76,(vlSelf->io_ledg),32);
    bufp->chgIData(oldp+77,(vlSelf->io_ledr),32);
    bufp->chgIData(oldp+78,(vlSelf->io_hex0),32);
    bufp->chgIData(oldp+79,(vlSelf->io_hex1),32);
    bufp->chgIData(oldp+80,(vlSelf->io_hex2),32);
    bufp->chgIData(oldp+81,(vlSelf->io_hex3),32);
    bufp->chgIData(oldp+82,(vlSelf->io_hex4),32);
    bufp->chgIData(oldp+83,(vlSelf->io_hex5),32);
    bufp->chgIData(oldp+84,(vlSelf->io_hex6),32);
    bufp->chgIData(oldp+85,(vlSelf->io_hex7),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
