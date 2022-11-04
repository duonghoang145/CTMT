module regfile (
//Input
input logic clk_i,
input logic rst_ni,
input logic rd_wren_i,
input logic [4:0] rs1_addr_i,
input logic [4:0] rs2_addr_i,
input logic [4:0] rd_addr_i,
input logic [31:0] rd_data_i,
//Output
output logic [31:0] rs1_data_o,
output logic [31:0] rs2_data_o
);

/* verilator lint_off MULTIDRIVEN */
logic [31:0] reg_array [31:1];
/* verilator lint_on MULTIDRIVEN */

always_ff @(posedge clk_i) begin : proc_write
	if (~rst_ni)
	begin
		reg_array[1] <= 32'd0;
		reg_array[2] <= 32'd0;
		reg_array[3] <= 32'd0;
		reg_array[4] <= 32'd0;
		reg_array[5] <= 32'd0;
		reg_array[6] <= 32'd0;
		reg_array[7] <= 32'd0;
		reg_array[8] <= 32'd0;
		reg_array[9] <= 32'd0;
		reg_array[10] <= 32'd0;
		reg_array[11] <= 32'd0;
		reg_array[12] <= 32'd0;
		reg_array[13] <= 32'd0;
		reg_array[14] <= 32'd0;
		reg_array[15] <= 32'd0;
		reg_array[16] <= 32'd0;
		reg_array[17] <= 32'd0;
		reg_array[18] <= 32'd0;
		reg_array[19] <= 32'd0;
		reg_array[20] <= 32'd0;
		reg_array[21] <= 32'd0;
		reg_array[22] <= 32'd0;
		reg_array[23] <= 32'd0;
		reg_array[24] <= 32'd0;
		reg_array[25] <= 32'd0;
		reg_array[26] <= 32'd0;
		reg_array[27] <= 32'd0;
		reg_array[28] <= 32'd0;
		reg_array[29] <= 32'd0;
		reg_array[30] <= 32'd0;
		reg_array[31] <= 32'd0;
	end
	else
		if (rd_wren_i)
			if (rd_addr_i != 0)
			reg_array[rd_addr_i] <= rd_data_i;
end

logic [31:0] rs1_data, rs2_data;

always_comb begin : proc_read
	begin
		if (rs1_addr_i != 5'd0)
			rs1_data = reg_array[rs1_addr_i];
		else 
			rs1_data = 32'd0;
		if (rs2_addr_i != 5'd0)
			rs2_data = reg_array[rs2_addr_i];
		else 
			rs2_data = 32'd0;
	end
end

assign rs1_data_o = rs1_data;
assign rs2_data_o = rs2_data;

initial
begin
	$writememh("./memory/regfile.data", reg_array);
end

endmodule
