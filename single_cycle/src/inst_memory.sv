module inst_memory #(parameter Column = 16384) (
//Input
input logic clk_i,
input logic rst_ni,
input logic wren_i,
input logic [31:0] addr_i,
input logic [31:0] wdata_i,
//Output
output logic [31:0] rdata_o 
);

logic [7:0] mem [Column-1:0];
logic [3:0][7:0] ram_write;

assign ram_write[3:0] = wdata_i;

always_ff @(posedge clk_i) begin : proc_write
	if (rst_ni)
		if (wren_i)
		begin
			mem[addr_i+3] <= ram_write[3];
			mem[addr_i+2] <= ram_write[2];
			mem[addr_i+1] <= ram_write[1];
			mem[addr_i]   <= ram_write[0];
		end
end

logic [3:0][7:0] ram_read;

always_comb begin: proc_read
	ram_read[0] = mem[addr_i+3];
	ram_read[1] = mem[addr_i+2];
	ram_read[2] = mem[addr_i+1];
	ram_read[3] = mem[addr_i];
end

assign rdata_o = ram_read[3:0];

initial
begin
	$readmemh("./memory/instmem.data", mem);
	$monitor("memory[%2d] = %h", addr_i, mem[addr_i]);	
end

endmodule
