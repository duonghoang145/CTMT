/* verilator lint_off UNUSED */
module alu 

	(
	//inputs
	input logic [31:0] operand_a_i,
	input logic [31:0] operand_b_i,
	input logic [3:0] alu_op_i,
	//outputs
	output logic [31:0] alu_data_o);

    logic [31:0] subtemp;
    assign subtemp = operand_a_i + ~operand_b_i+1;
	always_comb begin
		case(alu_op_i)
			4'b0000: alu_data_o = operand_a_i + operand_b_i;
			4'b0001: alu_data_o = operand_a_i + ~operand_b_i+1;
			4'b0010: if(operand_a_i[31]==1 && operand_b_i[31]==0) 
					alu_data_o = 1;
				else begin
					if((operand_a_i[31]==1 && operand_b_i[31]==1)||(operand_a_i[31]==0 && operand_b_i[31]==0)) 
						begin
				    		if(subtemp[31]) 
								alu_data_o = 1;
							else 
								alu_data_o = 0;
						end
					else 
						alu_data_o = 0;
				end
			4'b0011: 
			if(subtemp[31]) 
					alu_data_o = 1;
				else 
					alu_data_o = 0;
			4'b0100: alu_data_o = operand_a_i^operand_b_i;
			4'b0101:  alu_data_o = operand_a_i|operand_b_i;
			4'b0110: alu_data_o = operand_a_i&operand_b_i;
			4'b0111: alu_data_o = operand_a_i<<operand_b_i;
			4'b1000: alu_data_o = operand_a_i>>operand_b_i;
			4'b1001: alu_data_o = operand_a_i>>>operand_b_i;
			default: alu_data_o = 0;
		endcase
	end
endmodule : alu
	
