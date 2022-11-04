// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+73,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+75,"io_sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBus(c+76,"io_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"io_ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"io_ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+79,"io_hex0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+80,"io_hex1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+81,"io_hex2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+82,"io_hex3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+83,"io_hex4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+84,"io_hex5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+85,"io_hex6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+86,"io_hex7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+73,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+75,"io_sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBus(c+76,"io_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"io_ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"io_ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+79,"io_hex0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+80,"io_hex1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+81,"io_hex2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+82,"io_hex3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+83,"io_hex4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+84,"io_hex5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+85,"io_hex6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+86,"io_hex7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("sc ");
    tracep->declBit(c+73,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+75,"io_sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBus(c+76,"io_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"io_ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"io_ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+79,"io_hex0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+80,"io_hex1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+81,"io_hex2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+82,"io_hex3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+83,"io_hex4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+84,"io_hex5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+85,"io_hex6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+86,"io_hex7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+45,"nxt_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,"pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,"imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,"operand_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,"operand_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,"alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,"ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+51,"br_less",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+52,"br_equal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+53,"br_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+54,"br_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+55,"rd_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+56,"op_a_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+57,"op_b_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+58,"mem_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+59,"alu_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+60,"width",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+61,"wb_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("add1 ");
    tracep->declBus(c+2,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"pc_four_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu1 ");
    tracep->declBus(c+46,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+59,"alu_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+48,"alu_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+62,"subtemp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("brc ");
    tracep->declBus(c+8,"rs1_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+9,"rs2_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+54,"br_unsigned_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"br_less_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"br_equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"sub_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("brmux ");
    tracep->declBus(c+4,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"in2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+53,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+45,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ctrl ");
    tracep->declBus(c+3,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+51,"br_less_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"br_equal_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"br_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"br_unsigned_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"op_a_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+57,"op_b_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+59,"alu_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+58,"mem_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+60,"width_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+61,"wb_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+63,"bus",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 14,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm1 ");
    tracep->declBus(c+3,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instmem ");
    tracep->declBus(c+87,"Column",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+73,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+89,"wdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"ram_read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu1 ");
    tracep->declBit(c+73,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"st_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+60,"width_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+64,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+75,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBus(c+7,"st_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"ld_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+79,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+80,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+81,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+82,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+83,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+84,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+85,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+86,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+65,"addr_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+66,"addr_peri",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+67,"addr_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+75,"input_peri_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 17,0);
    tracep->declBus(c+68,"input_peri_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 17,0);
    tracep->declBus(c+69,"output_peri_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,"output_peri_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,"data_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,"data_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("muxa ");
    tracep->declBus(c+6,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2,"in2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+56,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("muxb ");
    tracep->declBus(c+7,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"in2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+57,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+47,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc1 ");
    tracep->declBus(c+45,"nxt_pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+73,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regf ");
    tracep->declBit(c+73,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+11,"rs1_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+12,"rs2_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+13,"rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+50,"rd_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"rs1_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"rs2_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 31; ++i) {
        tracep->declBus(c+14+i*1,"reg_array",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 31,0);
    }
    tracep->declBus(c+6,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbm ");
    tracep->declBus(c+49,"ld_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"alu_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"pc_four_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+61,"wb_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+50,"wb_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__sc__DOT__lsu1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__sc__DOT__pc),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read),32);
    bufp->fullIData(oldp+4,(((IData)(4U) + vlSelf->top__DOT__sc__DOT__pc)),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__sc__DOT__imm),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__sc__DOT__regf__DOT__rs1_data),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__sc__DOT__regf__DOT__rs2_data),32);
    bufp->fullSData(oldp+8,((0xffffU & vlSelf->top__DOT__sc__DOT__regf__DOT__rs1_data)),16);
    bufp->fullSData(oldp+9,((0xffffU & vlSelf->top__DOT__sc__DOT__regf__DOT__rs2_data)),16);
    bufp->fullSData(oldp+10,(vlSelf->top__DOT__sc__DOT__brc__DOT__sub_temp),16);
    bufp->fullCData(oldp+11,((0x1fU & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+12,((0x1fU & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+13,((0x1fU & (vlSelf->top__DOT__sc__DOT__instmem__DOT__ram_read 
                                       >> 7U))),5);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[0]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[1]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[2]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[3]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[4]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[5]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[6]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[7]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[8]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[9]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[10]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[11]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[12]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[13]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[14]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[15]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[16]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[17]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[18]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[19]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[20]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[21]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[22]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[23]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[24]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[25]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[26]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[27]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[28]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[29]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__sc__DOT__regf__DOT__reg_array[30]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__sc__DOT__nxt_pc),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__sc__DOT__operand_a),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__sc__DOT__operand_b),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__sc__DOT__alu_data),32);
    bufp->fullIData(oldp+49,(((5U == (0xfU & (vlSelf->top__DOT__sc__DOT__alu_data 
                                              >> 8U)))
                               ? vlSelf->top__DOT__sc__DOT__lsu1__DOT__input_peri_out
                               : ((4U == (0xfU & (vlSelf->top__DOT__sc__DOT__alu_data 
                                                  >> 8U)))
                                   ? vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_out
                                   : vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out))),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__sc__DOT__wb_data),32);
    bufp->fullBit(oldp+51,(vlSelf->top__DOT__sc__DOT__br_less));
    bufp->fullBit(oldp+52,(vlSelf->top__DOT__sc__DOT__br_equal));
    bufp->fullBit(oldp+53,((1U & ((IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus) 
                                  >> 0xeU))));
    bufp->fullBit(oldp+54,((1U & ((IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus) 
                                  >> 0xcU))));
    bufp->fullBit(oldp+55,((1U & ((IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus) 
                                  >> 0xdU))));
    bufp->fullBit(oldp+56,((1U & ((IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus) 
                                  >> 0xbU))));
    bufp->fullBit(oldp+57,((1U & ((IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus) 
                                  >> 0xaU))));
    bufp->fullBit(oldp+58,((1U & ((IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus) 
                                  >> 5U))));
    bufp->fullCData(oldp+59,((0xfU & ((IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus) 
                                      >> 6U))),4);
    bufp->fullCData(oldp+60,((7U & ((IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus) 
                                    >> 2U))),3);
    bufp->fullCData(oldp+61,((3U & (IData)(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus))),2);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__sc__DOT__alu1__DOT__subtemp),32);
    bufp->fullSData(oldp+63,(vlSelf->top__DOT__sc__DOT__ctrl__DOT__bus),15);
    bufp->fullSData(oldp+64,((0xfffU & vlSelf->top__DOT__sc__DOT__alu_data)),12);
    bufp->fullCData(oldp+65,((0xfU & (vlSelf->top__DOT__sc__DOT__alu_data 
                                      >> 8U))),4);
    bufp->fullCData(oldp+66,((0xffU & vlSelf->top__DOT__sc__DOT__alu_data)),8);
    bufp->fullSData(oldp+67,((0x3ffU & vlSelf->top__DOT__sc__DOT__alu_data)),10);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__sc__DOT__lsu1__DOT__input_peri_out),18);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_in),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__sc__DOT__lsu1__DOT__output_peri_out),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_in),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__sc__DOT__lsu1__DOT__data_out),32);
    bufp->fullBit(oldp+73,(vlSelf->clk_i));
    bufp->fullBit(oldp+74,(vlSelf->rst_ni));
    bufp->fullIData(oldp+75,(vlSelf->io_sw),18);
    bufp->fullIData(oldp+76,(vlSelf->io_lcd),32);
    bufp->fullIData(oldp+77,(vlSelf->io_ledg),32);
    bufp->fullIData(oldp+78,(vlSelf->io_ledr),32);
    bufp->fullIData(oldp+79,(vlSelf->io_hex0),32);
    bufp->fullIData(oldp+80,(vlSelf->io_hex1),32);
    bufp->fullIData(oldp+81,(vlSelf->io_hex2),32);
    bufp->fullIData(oldp+82,(vlSelf->io_hex3),32);
    bufp->fullIData(oldp+83,(vlSelf->io_hex4),32);
    bufp->fullIData(oldp+84,(vlSelf->io_hex5),32);
    bufp->fullIData(oldp+85,(vlSelf->io_hex6),32);
    bufp->fullIData(oldp+86,(vlSelf->io_hex7),32);
    bufp->fullIData(oldp+87,(0x4000U),32);
    bufp->fullBit(oldp+88,(vlSelf->top__DOT__sc__DOT__instmem__DOT__wren_i));
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__sc__DOT__instmem__DOT__wdata_i),32);
}
