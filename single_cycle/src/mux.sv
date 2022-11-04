module mux (
	input logic [31:0] in1,
	input logic [31:0] in2,
	input logic sel,
	output logic [31:0] out);

	always_comb begin
		case(sel)
			1'b0: out = in1;
			1'b1: out = in2;
			default: out = out;
		endcase
	end
endmodule

