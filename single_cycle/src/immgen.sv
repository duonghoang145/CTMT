/* verilator lint_off UNUSED */
module immgen (
	input logic [31:0] instr_i,
	output logic [31:0] imm_o );
	
	always_latch begin 
	       case(instr_i[6:2])
		       5'b00100: if (instr_i[31] == 1'b0) begin
			       	 	imm_o = {20'b00000000000000000000, instr_i[31:20]};
				 end
				else if (instr_i[31] == 1'b1) begin
				    	imm_o = {20'b11111111111111111111, instr_i[31:20]};
				end
			5'b01000: if (instr_i[31] == 1'b0) begin
		   			imm_o = {20'b00000000000000000000, instr_i[31:25],instr_i[11:7]};
		    		end
	 			else if (instr_i[31] == 1'b1) begin
					imm_o = {20'b11111111111111111111, instr_i[31:25],instr_i[11:7]};
				end
			5'b00000:	imm_o = {20'b00000000000000000000, instr_i[31:20]};
			5'b11000: if (instr_i[31] == 1'b0) begin
					imm_o = {19'b0000000000000000000, instr_i[31],instr_i[7],instr_i[30:25], instr_i[11:8], 1'b0};
		    		end
				else if (instr_i[31] == 1'b1) begin
				 	imm_o = {19'b1111111111111111111, instr_i[31],instr_i[7],instr_i[30:25], instr_i[11:8], 1'b0};
				end
			5'b11001: if (instr_i[31] == 1'b0) begin
			       	 	imm_o = {20'b00000000000000000000, instr_i[31:20]};
				 end
				else if (instr_i[31] == 1'b1) begin
				    	imm_o = {20'b11111111111111111111, instr_i[31:20]};
				end
			5'b11011: if (instr_i[31] == 1'b0) begin
					imm_o = {11'b00000000000, instr_i[31],instr_i[19:12],instr_i[20], instr_i[30:21], 1'b0};
				end
				else if (instr_i[31] == 1'b1) begin
					imm_o = {11'b11111111111, instr_i[31],instr_i[19:12],instr_i[20], instr_i[30:21], 1'b0};
				end
			5'b00101:	imm_o = {instr_i[31:12], 12'b000000000000};
			5'b01101:	imm_o = {instr_i[31:12], 12'b000000000000};
			default : 	imm_o = 32'b0;
		endcase	
	end
endmodule : immgen
/* verilator lint_off UNUSED */

