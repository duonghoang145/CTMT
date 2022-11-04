/* verilator lint_off UNUSED */
/* verilator lint_off UNOPTFLAT */
module ctrl_unit (
	input logic [31:0] instr_i,
	input logic br_less_i,
	input logic br_equal_i,
	output logic br_sel_o,
	output logic br_unsigned_o,
	output logic rd_wren_o,
	output logic op_a_sel_o,
	output logic op_b_sel_o,
	output logic [3:0] alu_op_o,
	output logic mem_wren_o,
	output logic [2:0] width_o,
	output logic [1:0] wb_sel_o);
//	output logic [14:0] bus);
		

	logic [14:0] bus;

	assign {br_sel_o, rd_wren_o, br_unsigned_o, op_a_sel_o, op_b_sel_o, alu_op_o, mem_wren_o, width_o, wb_sel_o} = bus;
/*	always_comb begin	
		br_sel_o = bus[14];
		rd_wren_o = bus[13];
		br_unsigned_o = bus[12];
		op_a_sel_o = bus[11];
		op_b_sel_o = bus[10];
		alu_op_o = bus[9:6];
		mem_wren_o = bus[5];
		width_o = bus[4:2];
		wb_sel_o = bus[1:0];
	end
*/
	always_comb begin
		case(instr_i[6:2]) 
			5'b01100: begin case({instr_i[30],instr_i[14:12]}) //R-type
					4'b0000: bus = 15'b0_1_0_0_0_0000_0_000_01; //ADD
					4'b1000: bus = 15'b0_1_0_0_0_0001_0_000_01; //SUB
					4'b0001: bus = 15'b0_1_0_0_0_0111_0_000_01;//SLL
					4'b0010: bus = 15'b0_1_0_0_0_0010_0_000_01;//SLT
					4'b0011: bus = 15'b0_1_0_0_0_0011_0_000_01;//SLTU
					4'b0100: bus = 15'b0_1_0_0_0_0100_0_000_01;//XOR
					4'b0101: bus = 15'b0_1_0_0_0_1000_0_000_01;//SRL
					4'b1010: bus = 15'b0_1_0_0_0_1001_0_000_01;//SRA
					4'b0110: bus = 15'b0_1_0_0_0_0101_0_000_01;//OR
					4'b0111: bus = 15'b0_1_0_0_0_0110_0_000_01;//AND
					default: bus = 15'b0_0_0_0_0_0000_0_000_00;
				endcase
				end
			5'b00100: begin casez({instr_i[30],instr_i[14:12]})  //I-type
					4'b?000: bus = 15'b0_1_0_0_1_0000_0_000_01;//ADDI
					4'b?010: bus = 15'b0_1_0_0_1_0010_0_000_01;//SLTI
			       		4'b?011: bus = 15'b0_1_0_0_1_0011_0_000_01;//SLTIU
					4'b?100: bus = 15'b0_1_0_0_1_0100_0_000_01;//XORI
					4'b?110: bus = 15'b0_1_0_0_1_0101_0_000_01;//ORI
					4'b?111: bus = 15'b0_1_0_0_1_0110_0_000_01;//ANDI
					4'b0001: bus = 15'b0_1_0_0_1_0111_0_000_01;//SLLI
					4'b0101: bus = 15'b0_1_0_0_1_1000_0_000_01;//SRLI
					4'b1101: bus = 15'b0_1_0_0_1_1001_0_000_01;//SRAI
					default: bus = 15'b0_0_0_0_0_0000_0_000_00;
				endcase
				end
			5'b00000: begin case(instr_i[14:12])  		//I-type
					3'b000: bus = 15'b0_1_0_0_1_0000_0_000_00;//LB 
					3'b001: bus = 15'b0_1_0_0_1_0000_0_010_00;//LH
					3'b010: bus = 15'b0_1_0_0_1_0000_0_111_00;//LW
					3'b100: bus = 15'b0_1_0_0_1_0000_0_100_00;//LBU
					3'b101:	bus = 15'b0_1_0_0_1_0000_0_110_00;//LHU
					default: bus = 15'b0_0_0_0_0_0000_0_000_00;
				endcase
				end
			5'b01000: begin case(instr_i[14:12])             //S-type
					3'b000: bus = 15'b0_0_0_0_1_0000_1_000_00;//SB
					3'b001: bus = 15'b0_0_0_0_1_0000_1_001_00;//SH
					3'b010: bus = 15'b0_0_0_0_1_0000_1_111_00;//SW
					default: bus = 15'b0_0_0_0_0_0000_0_000_00;
				endcase
				end
			5'b11000: begin case(instr_i[14:12])           //B-type
					3'b000: if(br_equal_i) begin 
						bus = 15'b1_0_0_1_1_0000_0_000_00;//BEQ
					end
					else begin 
						bus = 15'b0_1_0_1_1_0000_0_000_00;//BEQ
					end
					3'b001: if(br_equal_i) begin
						bus = 15'b0_1_0_1_1_0000_0_000_00;//BNE
					end
					else begin
						bus = 15'b1_0_0_1_1_0000_0_000_00;//BNE
					end
					3'b100: if(br_less_i) begin
						bus = 15'b1_0_0_1_1_0000_0_000_00;//BLT
					end
					else begin						
						bus = 15'b0_0_0_1_1_0000_0_000_00;//BLT
					end
					3'b101: if(br_less_i) begin
						bus = 15'b0_0_0_1_1_0000_0_000_00;//BGE
					end
					else begin
						bus = 15'b1_0_0_1_1_0000_0_000_00;//BGE
					end
					3'b110: if(br_less_i) begin
						bus = 15'b1_0_1_1_1_0000_0_000_00;//BLTU
					end
					else begin
						bus = 15'b0_0_1_1_1_0000_0_000_00;//BLTU
					end
					3'b111: if(br_less_i) begin
						bus = 15'b0_0_1_1_1_0000_0_000_00;//BGEU
					end
					else begin
						bus = 15'b1_0_1_1_1_0000_0_000_00;//BGEU
					end 
					default: bus = 15'b0_0_0_0_0_0000_0_000_00;
				endcase
				end
			5'b01101: begin                               //U-type
						bus = 15'b0_1_0_0_1_1111_0_000_01;//LUI
				end
			5'b00101: begin					//U-type
						bus = 15'b0_1_0_1_1_0000_0_000_01;//AUIPC
				end
			5'b11001: if(instr_i[14:12] == 3'b000) begin
						bus = 15'b1_1_0_0_1_0000_0_000_10;//JALR
				end
			5'b11011: begin
						bus = 15'b1_1_0_1_1_0000_0_000_10;//JAL
				end
			default:		bus = 15'b0_0_0_0_0_0000_0_000_00;
		endcase
	end
endmodule
/* verilator lint_off UNUSED */
/* verilator lint_off UNOPTFLAT */


