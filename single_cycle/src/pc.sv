module pc(
	input logic [31:0] nxt_pc_i,
	input logic clk_i,
	input logic rst_ni,
	output logic [31:0] pc_o);
	
	always_ff @(posedge clk_i) begin
		if(!rst_ni) 
			pc_o <= 32'b0;
		else
			pc_o <= nxt_pc_i;
	end
endmodule
