module add(
	input logic [31:0] pc_i,
	output logic [31:0] pc_four_o);

	always_comb begin
		pc_four_o = pc_i + 4;
	end
endmodule
