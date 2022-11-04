// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
class Vtop___024unit;


class Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    CData/*0:0*/ top__DOT__sc__DOT__br_less;
    CData/*0:0*/ top__DOT__sc__DOT__br_equal;
    CData/*0:0*/ top__DOT__sc__DOT__instmem__DOT__wren_i;
    IData/*31:0*/ top__DOT__sc__DOT__instmem__DOT__wdata_i;
    IData/*31:0*/ top__DOT__sc__DOT__instmem__DOT__ram_read;
    IData/*31:0*/ top__DOT__sc__DOT__lsu1__DOT__data_in;
    IData/*31:0*/ top__DOT__sc__DOT__lsu1__DOT__data_out;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    SData/*15:0*/ top__DOT__sc__DOT__brc__DOT__sub_temp;
    SData/*14:0*/ top__DOT__sc__DOT__ctrl__DOT__bus;
    SData/*14:0*/ __Vchglast__TOP__top__DOT__sc__DOT__ctrl__DOT__bus;
    VL_IN(io_sw,17,0);
    VL_OUT(io_lcd,31,0);
    VL_OUT(io_ledg,31,0);
    VL_OUT(io_ledr,31,0);
    VL_OUT(io_hex0,31,0);
    VL_OUT(io_hex1,31,0);
    VL_OUT(io_hex2,31,0);
    VL_OUT(io_hex3,31,0);
    VL_OUT(io_hex4,31,0);
    VL_OUT(io_hex5,31,0);
    VL_OUT(io_hex6,31,0);
    VL_OUT(io_hex7,31,0);
    IData/*31:0*/ top__DOT__sc__DOT__nxt_pc;
    IData/*31:0*/ top__DOT__sc__DOT__pc;
    IData/*31:0*/ top__DOT__sc__DOT__imm;
    IData/*31:0*/ top__DOT__sc__DOT__operand_a;
    IData/*31:0*/ top__DOT__sc__DOT__operand_b;
    IData/*31:0*/ top__DOT__sc__DOT__alu_data;
    IData/*31:0*/ top__DOT__sc__DOT__wb_data;
    IData/*31:0*/ top__DOT__sc__DOT__regf__DOT____Vxrand_h96fd10a2__1;
    IData/*31:0*/ top__DOT__sc__DOT__regf__DOT____Vxrand_h96fd10a2__0;
    IData/*31:0*/ top__DOT__sc__DOT__regf__DOT__rs1_data;
    IData/*31:0*/ top__DOT__sc__DOT__regf__DOT__rs2_data;
    IData/*31:0*/ top__DOT__sc__DOT__regf__DOT____Vlvbound_hf4fd0708__0;
    IData/*31:0*/ top__DOT__sc__DOT__alu1__DOT__subtemp;
    IData/*17:0*/ top__DOT__sc__DOT__lsu1__DOT__input_peri_out;
    IData/*31:0*/ top__DOT__sc__DOT__lsu1__DOT__output_peri_in;
    IData/*31:0*/ top__DOT__sc__DOT__lsu1__DOT__output_peri_out;
    IData/*31:0*/ top__DOT__sc__DOT__lsu1__DOT__i;
    VlUnpacked<CData/*7:0*/, 16384> top__DOT__sc__DOT__instmem__DOT__mem;
    VlUnpacked<IData/*31:0*/, 31> top__DOT__sc__DOT__regf__DOT__reg_array;
    VlUnpacked<CData/*7:0*/, 256> top__DOT__sc__DOT__lsu1__DOT__input_mem;
    VlUnpacked<CData/*7:0*/, 256> top__DOT__sc__DOT__lsu1__DOT__output_mem;
    VlUnpacked<CData/*7:0*/, 1024> top__DOT__sc__DOT__lsu1__DOT__data_mem;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
