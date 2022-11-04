// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    if ((0x800U & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))) {
        if ((0x800U & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))) {
            vlSelf->top__DOT__sc__DOT__operand_a = vlSelf->top__DOT__sc__DOT__pc;
        }
    } else {
        vlSelf->top__DOT__sc__DOT__operand_a = vlSelf->top__DOT__sc__DOT__regf__DOT__rs1_data;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus) 
                  >> 0xcU)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus) 
                      >> 0xcU)))) {
            vlSelf->top__DOT__sc__DOT__br_equal = (
                                                   ((0xffffU 
                                                     & vlSelf->top__DOT__sc__DOT__regf__DOT__rs1_data) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSelf->top__DOT__sc__DOT__regf__DOT__rs2_data))
                                                    ? 1U
                                                    : 0U);
        }
    }
    if ((0x400U & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))) {
        if ((0x400U & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))) {
            vlSelf->top__DOT__sc__DOT__operand_b = vlSelf->top__DOT__sc__DOT__imm;
        }
    } else {
        vlSelf->top__DOT__sc__DOT__operand_b = vlSelf->top__DOT__sc__DOT__regf__DOT__rs2_data;
    }
    if ((0x1000U & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))) {
        vlSelf->top__DOT__sc__DOT__br_less = ((0x8000U 
                                               & (IData)(vlSelf->top__DOT__sc__DOT__brc__DOT__sub_temp))
                                               ? 1U
                                               : 0U);
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus) 
                         >> 0xcU)))) {
        vlSelf->top__DOT__sc__DOT__br_less = (1U & 
                                              (((vlSelf->top__DOT__sc__DOT__regf__DOT__rs1_data 
                                                 >> 0xfU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__sc__DOT__regf__DOT__rs2_data 
                                                    >> 0xfU))) 
                                               | ((((vlSelf->top__DOT__sc__DOT__regf__DOT__rs1_data 
                                                     & vlSelf->top__DOT__sc__DOT__regf__DOT__rs2_data) 
                                                    >> 0xfU) 
                                                   | ((~ 
                                                       (vlSelf->top__DOT__sc__DOT__regf__DOT__rs1_data 
                                                        >> 0xfU)) 
                                                      & (~ 
                                                         (vlSelf->top__DOT__sc__DOT__regf__DOT__rs2_data 
                                                          >> 0xfU)))) 
                                                  & ((IData)(vlSelf->top__DOT__sc__DOT__brc__DOT__sub_temp) 
                                                     >> 0xfU))));
    }
    vlSelf->top__DOT__sc__DOT__alu1__DOT__subtemp = 
        ((IData)(1U) + (vlSelf->top__DOT__sc__DOT__operand_a 
                        + (~ vlSelf->top__DOT__sc__DOT__operand_b)));
    if ((0x40U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)) {
        if ((0x20U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)) {
            if ((0x10U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)) {
                vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus = 0U;
            } else if ((8U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)) {
                vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus 
                    = ((4U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                        ? 0x6c02U : 0U);
            } else if ((4U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)) {
                if ((0U == (7U & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                  >> 0xcU)))) {
                    vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus = 0x6402U;
                }
            } else {
                vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus 
                    = ((0x4000U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                        ? ((0x2000U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                            ? ((0x1000U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                ? ((IData)(vlSelf->top__DOT__sc__DOT__br_less)
                                    ? 0x1c00U : 0x5c00U)
                                : ((IData)(vlSelf->top__DOT__sc__DOT__br_less)
                                    ? 0x5c00U : 0x1c00U))
                            : ((0x1000U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                ? ((IData)(vlSelf->top__DOT__sc__DOT__br_less)
                                    ? 0xc00U : 0x4c00U)
                                : ((IData)(vlSelf->top__DOT__sc__DOT__br_less)
                                    ? 0x4c00U : 0xc00U)))
                        : ((0x2000U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                            ? 0U : ((0x1000U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                     ? ((IData)(vlSelf->top__DOT__sc__DOT__br_equal)
                                         ? 0x2c00U : 0x4c00U)
                                     : ((IData)(vlSelf->top__DOT__sc__DOT__br_equal)
                                         ? 0x4c00U : 0x2c00U))));
            }
        } else {
            vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus = 0U;
        }
    } else {
        vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus = 
            ((0x20U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
              ? ((0x10U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                  ? ((8U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                      ? 0U : ((4U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                               ? 0x27c1U : ((0x40000000U 
                                             & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                             ? ((0x4000U 
                                                 & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                 ? 0U
                                                 : 
                                                ((0x2000U 
                                                  & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                   ? 0U
                                                   : 0x2241U)
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                   ? 0U
                                                   : 0x2041U)))
                                             : ((0x4000U 
                                                 & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                 ? 
                                                ((0x2000U 
                                                  & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                   ? 0x2181U
                                                   : 0x2141U)
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                   ? 0x2201U
                                                   : 0x2101U))
                                                 : 
                                                ((0x2000U 
                                                  & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                   ? 0x20c1U
                                                   : 0x2081U)
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                   ? 0x21c1U
                                                   : 0x2001U))))))
                  : ((8U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                      ? 0U : ((4U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                               ? 0U : ((0U == (7U & 
                                               (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                                >> 0xcU)))
                                        ? 0x420U : 
                                       ((1U == (7U 
                                                & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                                   >> 0xcU)))
                                         ? 0x424U : 
                                        ((2U == (7U 
                                                 & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                                    >> 0xcU)))
                                          ? 0x43cU : 0U))))))
              : ((0x10U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                  ? ((8U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                      ? 0U : ((4U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                               ? 0x2c01U : ((0x40000000U 
                                             & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                             ? ((0x4000U 
                                                 & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                 ? 
                                                ((0x2000U 
                                                  & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                   ? 0x2581U
                                                   : 0x2541U)
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                   ? 0x2641U
                                                   : 0x2501U))
                                                 : 
                                                ((0x2000U 
                                                  & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                   ? 0x24c1U
                                                   : 0x2481U)
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                   ? 0U
                                                   : 0x2401U)))
                                             : ((0x4000U 
                                                 & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                 ? 
                                                ((0x2000U 
                                                  & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                   ? 0x2581U
                                                   : 0x2541U)
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                   ? 0x2601U
                                                   : 0x2501U))
                                                 : 
                                                ((0x2000U 
                                                  & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                   ? 0x24c1U
                                                   : 0x2481U)
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                   ? 0x25c1U
                                                   : 0x2401U))))))
                  : ((8U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                      ? 0U : ((4U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                               ? 0U : ((0x4000U & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                        ? ((0x2000U 
                                            & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                            ? 0U : 
                                           ((0x1000U 
                                             & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                             ? 0x2418U
                                             : 0x2410U))
                                        : ((0x2000U 
                                            & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                            ? ((0x1000U 
                                                & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                ? 0U
                                                : 0x241cU)
                                            : ((0x1000U 
                                                & vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read)
                                                ? 0x2408U
                                                : 0x2400U)))))));
    }
    vlSelf->top__DOT__sc__DOT__alu_data = ((0x200U 
                                            & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))
                                            ? ((0x100U 
                                                & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))
                                                ? 0U
                                                : (
                                                   (0x80U 
                                                    & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))
                                                    ? 0U
                                                    : 
                                                   ((0x40U 
                                                     & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))
                                                     ? 
                                                    ((0x1fU 
                                                      >= vlSelf->top__DOT__sc__DOT__operand_b)
                                                      ? 
                                                     (vlSelf->top__DOT__sc__DOT__operand_a 
                                                      >> vlSelf->top__DOT__sc__DOT__operand_b)
                                                      : 0U)
                                                     : 
                                                    ((0x1fU 
                                                      >= vlSelf->top__DOT__sc__DOT__operand_b)
                                                      ? 
                                                     (vlSelf->top__DOT__sc__DOT__operand_a 
                                                      >> vlSelf->top__DOT__sc__DOT__operand_b)
                                                      : 0U))))
                                            : ((0x100U 
                                                & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))
                                                ? (
                                                   (0x80U 
                                                    & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))
                                                    ? 
                                                   ((0x40U 
                                                     & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))
                                                     ? 
                                                    ((0x1fU 
                                                      >= vlSelf->top__DOT__sc__DOT__operand_b)
                                                      ? 
                                                     (vlSelf->top__DOT__sc__DOT__operand_a 
                                                      << vlSelf->top__DOT__sc__DOT__operand_b)
                                                      : 0U)
                                                     : 
                                                    (vlSelf->top__DOT__sc__DOT__operand_a 
                                                     & vlSelf->top__DOT__sc__DOT__operand_b))
                                                    : 
                                                   ((0x40U 
                                                     & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))
                                                     ? 
                                                    (vlSelf->top__DOT__sc__DOT__operand_a 
                                                     | vlSelf->top__DOT__sc__DOT__operand_b)
                                                     : 
                                                    (vlSelf->top__DOT__sc__DOT__operand_a 
                                                     ^ vlSelf->top__DOT__sc__DOT__operand_b)))
                                                : (
                                                   (0x80U 
                                                    & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))
                                                    ? 
                                                   ((0x40U 
                                                     & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))
                                                     ? 
                                                    ((vlSelf->top__DOT__sc__DOT__alu1__DOT__subtemp 
                                                      >> 0x1fU)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    (((vlSelf->top__DOT__sc__DOT__operand_a 
                                                       >> 0x1fU) 
                                                      & (~ 
                                                         (vlSelf->top__DOT__sc__DOT__operand_b 
                                                          >> 0x1fU)))
                                                      ? 1U
                                                      : 
                                                     ((1U 
                                                       & (((vlSelf->top__DOT__sc__DOT__operand_a 
                                                            & vlSelf->top__DOT__sc__DOT__operand_b) 
                                                           >> 0x1fU) 
                                                          | ((~ 
                                                              (vlSelf->top__DOT__sc__DOT__operand_a 
                                                               >> 0x1fU)) 
                                                             & (~ 
                                                                (vlSelf->top__DOT__sc__DOT__operand_b 
                                                                 >> 0x1fU)))))
                                                       ? 
                                                      ((vlSelf->top__DOT__sc__DOT__alu1__DOT__subtemp 
                                                        >> 0x1fU)
                                                        ? 1U
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((0x40U 
                                                     & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + 
                                                     (vlSelf->top__DOT__sc__DOT__operand_a 
                                                      + 
                                                      (~ vlSelf->top__DOT__sc__DOT__operand_b)))
                                                     : 
                                                    (vlSelf->top__DOT__sc__DOT__operand_a 
                                                     + vlSelf->top__DOT__sc__DOT__operand_b)))));
    if ((5U != (0xfU & (vlSelf->top__DOT__sc__DOT__alu_data 
                        >> 8U)))) {
        if ((4U == (0xfU & (vlSelf->top__DOT__sc__DOT__alu_data 
                            >> 8U)))) {
            vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_in 
                = vlSelf->top__DOT__sc__DOT__regf__DOT__rs2_data;
        }
        if ((4U != (0xfU & (vlSelf->top__DOT__sc__DOT__alu_data 
                            >> 8U)))) {
            vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_in 
                = vlSelf->top__DOT__sc__DOT__regf__DOT__rs2_data;
        }
    }
    if ((0x4000U & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))) {
        if ((0x4000U & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))) {
            vlSelf->top__DOT__sc__DOT__nxt_pc = vlSelf->top__DOT__sc__DOT__alu_data;
        }
    } else {
        vlSelf->top__DOT__sc__DOT__nxt_pc = ((IData)(4U) 
                                             + vlSelf->top__DOT__sc__DOT__pc);
    }
    vlSelf->top__DOT__sc__DOT__lsu1__DOT__input_peri_out = 0U;
    vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out = 0U;
    vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_out = 0U;
    if ((1U & (~ ((IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus) 
                  >> 5U)))) {
        vlSelf->top__DOT__sc__DOT__lsu1__DOT__input_peri_out 
            = ((0x30000U & vlSelf->top__DOT__sc__DOT__lsu1__DOT__input_peri_out) 
               | ((vlSelf->top__DOT__sc__DOT__lsu1__DOT__input_mem
                   [(0xffU & ((IData)(1U) + vlSelf->top__DOT__sc__DOT__alu_data))] 
                   << 8U) | vlSelf->top__DOT__sc__DOT__lsu1__DOT__input_mem
                  [(0xffU & vlSelf->top__DOT__sc__DOT__alu_data)]));
        vlSelf->top__DOT__sc__DOT__lsu1__DOT__input_peri_out 
            = ((0xffffU & vlSelf->top__DOT__sc__DOT__lsu1__DOT__input_peri_out) 
               | (0x30000U & (vlSelf->top__DOT__sc__DOT__lsu1__DOT__input_mem
                              [(0xffU & ((IData)(2U) 
                                         + vlSelf->top__DOT__sc__DOT__alu_data))] 
                              << 0x10U)));
        if ((0x10U & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))) {
            if ((8U & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))) {
                if ((4U & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))) {
                    vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out 
                        = ((0xffffU & vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out) 
                           | ((vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                               [(0x3ffU & ((IData)(3U) 
                                           + vlSelf->top__DOT__sc__DOT__alu_data))] 
                               << 0x18U) | (vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                                            [(0x3ffU 
                                              & ((IData)(2U) 
                                                 + vlSelf->top__DOT__sc__DOT__alu_data))] 
                                            << 0x10U)));
                    vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out 
                        = ((0xffff0000U & vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out) 
                           | ((vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                               [(0x3ffU & ((IData)(1U) 
                                           + vlSelf->top__DOT__sc__DOT__alu_data))] 
                               << 8U) | vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                              [(0x3ffU & vlSelf->top__DOT__sc__DOT__alu_data)]));
                } else {
                    vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out 
                        = ((0xffffff00U & vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out) 
                           | vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                           [(0x3ffU & vlSelf->top__DOT__sc__DOT__alu_data)]);
                    vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out 
                        = ((0xffU & vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out) 
                           | (vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                              [(0x3ffU & ((IData)(1U) 
                                          + vlSelf->top__DOT__sc__DOT__alu_data))] 
                              << 8U));
                }
            } else if ((4U & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))) {
                vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out 
                    = ((0xffffU & vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out) 
                       | ((vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                           [(0x3ffU & ((IData)(3U) 
                                       + vlSelf->top__DOT__sc__DOT__alu_data))] 
                           << 0x18U) | (vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                                        [(0x3ffU & 
                                          ((IData)(2U) 
                                           + vlSelf->top__DOT__sc__DOT__alu_data))] 
                                        << 0x10U)));
                vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out 
                    = ((0xffff0000U & vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out) 
                       | ((vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                           [(0x3ffU & ((IData)(1U) 
                                       + vlSelf->top__DOT__sc__DOT__alu_data))] 
                           << 8U) | vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                          [(0x3ffU & vlSelf->top__DOT__sc__DOT__alu_data)]));
            } else {
                vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out 
                    = vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                    [(0x3ffU & vlSelf->top__DOT__sc__DOT__alu_data)];
            }
        } else if ((8U & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))) {
            if ((4U & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))) {
                vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out 
                    = ((0xffffU & vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out) 
                       | ((vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                           [(0x3ffU & ((IData)(3U) 
                                       + vlSelf->top__DOT__sc__DOT__alu_data))] 
                           << 0x18U) | (vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                                        [(0x3ffU & 
                                          ((IData)(2U) 
                                           + vlSelf->top__DOT__sc__DOT__alu_data))] 
                                        << 0x10U)));
                vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out 
                    = ((0xffff0000U & vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out) 
                       | ((vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                           [(0x3ffU & ((IData)(1U) 
                                       + vlSelf->top__DOT__sc__DOT__alu_data))] 
                           << 8U) | vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                          [(0x3ffU & vlSelf->top__DOT__sc__DOT__alu_data)]));
            } else {
                vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out 
                    = ((0xffff0000U & vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out) 
                       | ((vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                           [(0x3ffU & ((IData)(1U) 
                                       + vlSelf->top__DOT__sc__DOT__alu_data))] 
                           << 8U) | vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                          [(0x3ffU & vlSelf->top__DOT__sc__DOT__alu_data)]));
                vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out 
                    = ((0x80U & vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                        [(0x3ffU & ((IData)(1U) + vlSelf->top__DOT__sc__DOT__alu_data))])
                        ? (0xffff0000U | vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out)
                        : (0xffffU & vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out));
            }
        } else if ((4U & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))) {
            vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out 
                = ((0xffffU & vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out) 
                   | ((vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                       [(0x3ffU & ((IData)(3U) + vlSelf->top__DOT__sc__DOT__alu_data))] 
                       << 0x18U) | (vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                                    [(0x3ffU & ((IData)(2U) 
                                                + vlSelf->top__DOT__sc__DOT__alu_data))] 
                                    << 0x10U)));
            vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out 
                = ((0xffff0000U & vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out) 
                   | ((vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                       [(0x3ffU & ((IData)(1U) + vlSelf->top__DOT__sc__DOT__alu_data))] 
                       << 8U) | vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                      [(0x3ffU & vlSelf->top__DOT__sc__DOT__alu_data)]));
        } else {
            vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out 
                = ((0xffffff00U & vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out) 
                   | vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                   [(0x3ffU & vlSelf->top__DOT__sc__DOT__alu_data)]);
            vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out 
                = ((0x80U & vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_mem
                    [(0x3ffU & vlSelf->top__DOT__sc__DOT__alu_data)])
                    ? (0xffffff00U | vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out)
                    : (0xffU & vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out));
        }
        vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_out 
            = ((0xffff0000U & vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_out) 
               | ((vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_mem
                   [(0xffU & ((IData)(1U) + vlSelf->top__DOT__sc__DOT__alu_data))] 
                   << 8U) | vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_mem
                  [(0xffU & vlSelf->top__DOT__sc__DOT__alu_data)]));
        vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_out 
            = ((0xffffU & vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_out) 
               | ((vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_mem
                   [(0xffU & ((IData)(3U) + vlSelf->top__DOT__sc__DOT__alu_data))] 
                   << 0x18U) | (vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_mem
                                [(0xffU & ((IData)(2U) 
                                           + vlSelf->top__DOT__sc__DOT__alu_data))] 
                                << 0x10U)));
        if ((0x80U & vlSelf->top__DOT__sc__DOT__alu_data)) {
            if ((0x40U & vlSelf->top__DOT__sc__DOT__alu_data)) {
                vlSelf->io_hex1 = 0U;
                vlSelf->io_ledr = 0U;
                vlSelf->io_hex5 = 0U;
                vlSelf->io_hex0 = 0U;
                vlSelf->io_ledg = 0U;
                vlSelf->io_hex3 = 0U;
                vlSelf->io_lcd = 0U;
                vlSelf->io_hex4 = 0U;
                vlSelf->io_hex2 = 0U;
                vlSelf->io_hex6 = 0U;
                vlSelf->io_hex7 = 0U;
            } else if ((0x20U & vlSelf->top__DOT__sc__DOT__alu_data)) {
                if ((0x10U & vlSelf->top__DOT__sc__DOT__alu_data)) {
                    vlSelf->io_hex1 = 0U;
                    vlSelf->io_ledr = 0U;
                    vlSelf->io_hex5 = 0U;
                    vlSelf->io_hex0 = 0U;
                    vlSelf->io_ledg = 0U;
                    vlSelf->io_hex3 = 0U;
                    vlSelf->io_lcd = 0U;
                    vlSelf->io_hex4 = 0U;
                    vlSelf->io_hex2 = 0U;
                    vlSelf->io_hex6 = 0U;
                    vlSelf->io_hex7 = 0U;
                } else {
                    vlSelf->io_lcd = vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_out;
                }
            } else {
                if ((1U & (~ (vlSelf->top__DOT__sc__DOT__alu_data 
                              >> 4U)))) {
                    vlSelf->io_ledr = vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_out;
                }
                if ((0x10U & vlSelf->top__DOT__sc__DOT__alu_data)) {
                    vlSelf->io_ledg = vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_out;
                }
            }
        } else {
            if ((1U & (~ (vlSelf->top__DOT__sc__DOT__alu_data 
                          >> 6U)))) {
                if ((1U & (~ (vlSelf->top__DOT__sc__DOT__alu_data 
                              >> 5U)))) {
                    if ((0x10U & vlSelf->top__DOT__sc__DOT__alu_data)) {
                        vlSelf->io_hex1 = vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_out;
                    }
                    if ((1U & (~ (vlSelf->top__DOT__sc__DOT__alu_data 
                                  >> 4U)))) {
                        vlSelf->io_hex0 = vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_out;
                    }
                }
                if ((0x20U & vlSelf->top__DOT__sc__DOT__alu_data)) {
                    if ((0x10U & vlSelf->top__DOT__sc__DOT__alu_data)) {
                        vlSelf->io_hex3 = vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_out;
                    }
                    if ((1U & (~ (vlSelf->top__DOT__sc__DOT__alu_data 
                                  >> 4U)))) {
                        vlSelf->io_hex2 = vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_out;
                    }
                }
            }
            if ((0x40U & vlSelf->top__DOT__sc__DOT__alu_data)) {
                if ((1U & (~ (vlSelf->top__DOT__sc__DOT__alu_data 
                              >> 5U)))) {
                    if ((0x10U & vlSelf->top__DOT__sc__DOT__alu_data)) {
                        vlSelf->io_hex5 = vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_out;
                    }
                    if ((1U & (~ (vlSelf->top__DOT__sc__DOT__alu_data 
                                  >> 4U)))) {
                        vlSelf->io_hex4 = vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_out;
                    }
                }
                if ((0x20U & vlSelf->top__DOT__sc__DOT__alu_data)) {
                    if ((1U & (~ (vlSelf->top__DOT__sc__DOT__alu_data 
                                  >> 4U)))) {
                        vlSelf->io_hex6 = vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_out;
                    }
                    if ((0x10U & vlSelf->top__DOT__sc__DOT__alu_data)) {
                        vlSelf->io_hex7 = vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_out;
                    }
                }
            }
        }
    }
    if ((0U == (3U & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus)))) {
        vlSelf->top__DOT__sc__DOT__wb_data = ((5U == 
                                               (0xfU 
                                                & (vlSelf->top__DOT__sc__DOT__alu_data 
                                                   >> 8U)))
                                               ? vlSelf->top__DOT__sc__DOT__lsu1__DOT__input_peri_out
                                               : ((4U 
                                                   == 
                                                   (0xfU 
                                                    & (vlSelf->top__DOT__sc__DOT__alu_data 
                                                       >> 8U)))
                                                   ? vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_out
                                                   : vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out));
    } else if ((1U == (3U & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus)))) {
        vlSelf->top__DOT__sc__DOT__wb_data = vlSelf->top__DOT__sc__DOT__alu_data;
    } else if ((2U == (3U & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus)))) {
        vlSelf->top__DOT__sc__DOT__wb_data = ((IData)(4U) 
                                              + vlSelf->top__DOT__sc__DOT__pc);
    }
}

void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus ^ vlSelf->__Vchglast__TOP__top__DOT__sc__DOT__ctrl__DOT__bus));
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus ^ vlSelf->__Vchglast__TOP__top__DOT__sc__DOT__ctrl__DOT__bus))) VL_DBG_MSGF("        CHANGE: src/ctrl_unit.sv:19: top.sc.ctrl.bus\n"); );
    // Final
    vlSelf->__Vchglast__TOP__top__DOT__sc__DOT__ctrl__DOT__bus 
        = vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus;
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelf->io_sw & 0xfffc0000U))) {
        Verilated::overWidthError("io_sw");}
}
#endif  // VL_DEBUG
