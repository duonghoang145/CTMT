#define MAX_SIM 1000

void set_random(Vtop *dut, vluint64_t sim_unit) {
	dut->rst_ni = 0b1;
}
