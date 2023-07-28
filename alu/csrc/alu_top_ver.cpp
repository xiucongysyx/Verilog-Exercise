#include <verilated.h>
#include "verilated_vcd_c.h"
#include "Valu_top.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Valu_top* top;

void step_and_dump_wave() {
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}

void sim_init() {
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Valu_top;
    contextp->traceEverOn(true);
    top->trace(tfp,10);
    tfp->open("alu_top.vcd");
}

void sim_exit() {
    step_and_dump_wave();
    tfp->close();
}

int main() {
    sim_init();

    int i = 0;
    top->i_op = 0b001;
    top->i_a = 0b1011;
    top->i_b = 0b1011;
    step_and_dump_wave();
    sim_exit();
}
