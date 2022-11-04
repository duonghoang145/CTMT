/* verilator lint_off PINCONNECTEMPTY */
/* verilator lint_off UNOPTFLAT */
/* verilator lint_off WIDTH */
module singlecycle (
	input logic clk_i,
	input logic rst_ni,
	input logic [17:0] io_sw,
	output logic [31:0] io_lcd,
	output logic [31:0] io_ledg,
	output logic [31:0] io_ledr,
	output logic [31:0] io_hex0,
	output logic [31:0] io_hex1,
	output logic [31:0] io_hex2,
	output logic [31:0] io_hex3,
	output logic [31:0] io_hex4,
	output logic [31:0] io_hex5,
	output logic [31:0] io_hex6,
	output logic [31:0] io_hex7);

	logic [31:0] nxt_pc,pc,instr,pc_four,imm,rs1_data,rs2_data,operand_a,operand_b,alu_data,ld_data,wb_data;
	logic br_less, br_equal, br_sel, br_unsigned, rd_wren, op_a_sel, op_b_sel, mem_wren;
	logic [3:0] alu_op;
	logic [2:0] width;
	logic [1:0] wb_sel;
//	logic [14:0] bus;

	mux brmux (.in1(pc_four),
		   .in2(alu_data),
		   .sel(br_sel),
		   .out(nxt_pc));
	pc pc1 (.nxt_pc_i(nxt_pc),
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.pc_o(pc));
	add add1 (.pc_i(pc),
		  .pc_four_o(pc_four));
	inst_memory instmem (.clk_i(clk_i),
			  .rst_ni(rst_ni),
			  .wren_i(),
			  .addr_i(pc),
			  .wdata_i(),
			  .rdata_o(instr));
	regfile regf (.clk_i(clk_i),
		      .rst_ni(rst_ni),
		      .rs1_addr_i(instr[19:15]),
		      .rs2_addr_i(instr[24:20]),
		      .rd_addr_i(instr[11:7]),
		      .rd_wren_i(rd_wren),
		      .rd_data_i(wb_data),
		      .rs1_data_o(rs1_data),
		      .rs2_data_o(rs2_data));
	immgen imm1 (.instr_i(instr),
		    .imm_o(imm));
	brcomp brc (.rs1_data_i(rs1_data),
		    .rs2_data_i(rs2_data),
		    .br_unsigned_i(br_unsigned),
		    .br_less_o(br_less),
		    .br_equal_o(br_equal));
	mux muxa (.in1(rs1_data),
		  .in2(pc),
		  .sel(op_a_sel),
		  .out(operand_a));
 	mux muxb (.in1(rs2_data),
		  .in2(imm),
		  .sel(op_b_sel),
		  .out(operand_b));
	alu alu1 (.operand_a_i(operand_a),
		  .operand_b_i(operand_b),
		  .alu_op_i(alu_op),
		  .alu_data_o(alu_data));
	lsu lsu1 (.clk_i(clk_i),
		  .rst_ni(rst_ni),
		  .st_data_i(rs2_data),
		  .addr_i(alu_data),
		  .st_en_i(mem_wren),
		  .ld_data_o(ld_data),
		  .width_i(width),
		  .io_sw_i(io_sw),
		  .io_lcd_o(io_lcd),
		  .io_ledg_o(io_ledg),
		  .io_ledr_o(io_ledr),
		  .io_hex0_o(io_hex0),
		  .io_hex1_o(io_hex1),
		  .io_hex2_o(io_hex2),
		  .io_hex3_o(io_hex3),
		  .io_hex4_o(io_hex4),
		  .io_hex5_o(io_hex5),
		  .io_hex6_o(io_hex6),
		  .io_hex7_o(io_hex7));
	wbmux wbm (.ld_data_i(ld_data),
		   .alu_data_i(alu_data),
		   .pc_four_i(pc_four),
		   .wb_sel_i(wb_sel),
		   .wb_data_o(wb_data));
	ctrl_unit ctrl (.instr_i(instr),
			.br_less_i(br_less),
			.br_equal_i(br_equal),
			.br_sel_o(br_sel),
			.br_unsigned_o(br_unsigned),
			.rd_wren_o(rd_wren),
			.op_a_sel_o(op_a_sel),
			.op_b_sel_o(op_b_sel),
			.alu_op_o(alu_op),
			.mem_wren_o(mem_wren),
			.width_o(width),
			.wb_sel_o(wb_sel));
//			.bus({br_sel, rd_wren, br_unsigned, op_a_sel, op_b_sel, alu_op, mem_wren, width, wb_sel}));
/*	assign br_sel = bus[14];
	assign rd_wren = bus[13];
	assign br_unsigned = bus[12];
	assign op_a_sel = bus[11];
	assign op_b_sel = bus[10];
	assign alu_op = bus[9:6];
	assign mem_wren = bus[5];
	assign width = bus[4:2];
	assign wb_sel = bus[1:0];
*/

endmodule
	
/* verilator lint_off PINCONNECTEMPTY */
/* verilator lint_off UNOPTFLAT */
/* verilator lint_off WIDTH */

