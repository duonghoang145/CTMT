/*verilator lint_off UNUSED */
module brcomp (
	input logic [15:0] rs1_data_i,
	input logic [15:0] rs2_data_i,
	input logic br_unsigned_i,

	output logic br_less_o,
	output logic br_equal_o
);
    logic [15:0] sub_temp;
    assign sub_temp = rs1_data_i + ~rs2_data_i + 1;
	always_comb begin
		case(br_unsigned_i) 
			1'b1:br_less_o = (sub_temp[15])?1:0; // unsign
			1'b0: begin// sign
    				br_equal_o=(rs1_data_i==rs2_data_i)?1:0; 
    				if(rs1_data_i[15]==1 && rs2_data_i[15]==0) br_less_o = 1;
				else if((rs1_data_i[15]==1 && rs2_data_i[15]==1)|(rs1_data_i[15]==0 && rs2_data_i[15]==0)) begin
	    			if(sub_temp[15]) br_less_o=1;
				else br_less_o=0;
				end
				else br_less_o = 0;
  			end
		endcase
	end

	


endmodule : brcomp
