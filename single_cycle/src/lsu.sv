module lsu (
//Input
input logic clk_i,
input logic rst_ni,
input logic st_en_i,
input logic [2:0] width_i,
input logic [11:0] addr_i,
input logic [17:0] io_sw_i,
input logic [31:0] st_data_i,
//Output
output logic [3:0][7:0] ld_data_o,
output logic [31:0] io_lcd_o,
output logic [31:0] io_ledg_o,
output logic [31:0] io_ledr_o,
output logic [31:0] io_hex0_o,
output logic [31:0] io_hex1_o,
output logic [31:0] io_hex2_o,
output logic [31:0] io_hex3_o,
output logic [31:0] io_hex4_o,
output logic [31:0] io_hex5_o,
output logic [31:0] io_hex6_o,
output logic [31:0] io_hex7_o
);

logic [3:0] addr_sel;
logic [7:0] addr_peri;
logic [9:0] addr_data;
logic [17:0] input_peri_in, input_peri_out;
logic [31:0] output_peri_in, output_peri_out;
logic [3:0][7:0] data_in;
logic [3:0][7:0] data_out;
logic [7:0] input_mem [255:0];
logic [7:0] output_mem [255:0];
logic [7:0] data_mem [1023:0];

assign input_peri_in = io_sw_i; 
assign addr_sel = addr_i[11:8]; //0 - 4 - 5
assign addr_peri = addr_i[7:0]; //00 - FF
assign addr_data = addr_i[9:0]; //000 - 3FF

always_latch begin: proc_sel
	if (addr_sel == 4'h5)
		ld_data_o[3:0] = {14'd0,input_peri_out};
	else if (addr_sel == 4'h4)
	begin
		output_peri_in = st_data_i;
		ld_data_o[3:0] = output_peri_out;
	end
	else
	begin
		data_in = st_data_i;
		ld_data_o = data_out;
	end
end
		
always_ff @(posedge clk_i) begin : proc_inputperiph_write
	if (rst_ni)
		if (st_en_i)
		begin
			input_mem[addr_peri] <= input_peri_in[7:0];
			input_mem[addr_peri+1] <= input_peri_in[15:8];
			input_mem[addr_peri+2] <= {6'b000000,input_peri_in[17:16]};		
		end
end

always_comb begin : proc_inputperiph_read
	input_peri_out = 18'd0;
	if (~st_en_i)
	begin
		input_peri_out[7:0] = input_mem[addr_peri];
		input_peri_out[15:8] = input_mem[addr_peri+1];
		input_peri_out[17:16] = input_mem[addr_peri+2][1:0];
	end
end
	
always_ff @(posedge clk_i) begin : proc_outputperiph_write
	if (rst_ni)
		if (st_en_i)
		begin
			output_mem[addr_peri] <= output_peri_in[7:0];
			output_mem[addr_peri+1] <= output_peri_in[15:8];
			output_mem[addr_peri+2] <= output_peri_in[23:16];
			output_mem[addr_peri+3] <= output_peri_in[31:24];		
		end
end

always_comb begin : proc_outputperiph_read
	output_peri_out = 32'd0;
	if (~st_en_i)
	begin
		output_peri_out[7:0] = output_mem[addr_peri];
		output_peri_out[15:8] = output_mem[addr_peri+1];
		output_peri_out[23:16] = output_mem[addr_peri+2];
		output_peri_out[31:24] = output_mem[addr_peri+3];
	end
end

always_ff @(posedge clk_i) begin : proc_data_write
	if (rst_ni)
		if (st_en_i)
			case (width_i)
				3'b000: data_mem[addr_data] <= data_in[0]; // sb
				3'b001: begin 			   // sh
				data_mem[addr_data+1] <= data_in[1];
				data_mem[addr_data]   <= data_in[0];
				end	
				default: begin // sw 
				data_mem[addr_data+3] <= data_in[3];
				data_mem[addr_data+2] <= data_in[2];
				data_mem[addr_data+1] <= data_in[1];
				data_mem[addr_data]   <= data_in[0];
				end
			endcase
end

always_comb begin: proc_data_read
	data_out = 32'd0;
	if (~st_en_i)
		case (width_i)
			3'b000: begin // lb
				data_out[0] = data_mem[addr_data];
				if (data_mem[addr_data][7] == 1'b1)
					data_out[3:1] = 24'hffffff;
				else 
					data_out[3:1] = 24'h000000;
			end 
			3'b010: begin // lh	
				data_out[0] = data_mem[addr_data];
				data_out[1] = data_mem[addr_data+1];
				if (data_mem[addr_data+1][7] == 1'b1)
					data_out[3:2] = 16'hffff;
				else 
					data_out[3:2] = 16'h0000;	
			end
			3'b100: begin // lbu
				data_out[0] = data_mem[addr_data];
				data_out[3:1] = 24'h000000;
			end	
			3'b110: begin // lhu
				data_out[0] = data_mem[addr_data];
				data_out[1] = data_mem[addr_data+1];
				data_out[3:2] = 16'h0000;	
			end
			default: begin
				data_out[3] = data_mem[addr_data+3];
				data_out[2] = data_mem[addr_data+2];
				data_out[1] = data_mem[addr_data+1];
				data_out[0] = data_mem[addr_data];
			end
		endcase
end

always_latch begin : proc_io

	if (~st_en_i)	
		casez (addr_peri)
			8'h0?: io_hex0_o = output_peri_out;
			8'h1? : io_hex1_o = output_peri_out;
			8'h2? : io_hex2_o = output_peri_out;
			8'h3? : io_hex3_o = output_peri_out;
			8'h4? : io_hex4_o = output_peri_out;
			8'h5? : io_hex5_o = output_peri_out;
			8'h6? : io_hex6_o = output_peri_out;
			8'h7? : io_hex7_o = output_peri_out;
			8'h8? : io_ledr_o = output_peri_out;
			8'h9? : io_ledg_o = output_peri_out;
			8'ha? : io_lcd_o = output_peri_out;
			
			default: begin
				io_hex0_o = 32'd0;
				io_hex1_o = 32'd0;
				io_hex2_o = 32'd0;
				io_hex3_o = 32'd0;
				io_hex4_o = 32'd0;
				io_hex5_o = 32'd0;
				io_hex6_o = 32'd0;
				io_hex7_o = 32'd0;
				io_ledr_o = 32'd0;
				io_ledg_o = 32'd0;
				io_lcd_o  = 32'd0;
			end
		endcase

end			

endmodule
