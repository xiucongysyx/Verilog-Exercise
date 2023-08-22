#include <verilated.h>
#include "verilated_vcd_c.h"
#include "Vfsm.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vfsm* top;

void step_and_dump_wave() {
    top->clk = !top->clk;
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}

void sim_init() {
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vfsm;
    contextp->traceEverOn(true);
    top->trace(tfp,10);
    tfp->open("fsm.vcd");
    top->clk = 1;
}

void sim_exit() {
    step_and_dump_wave();
    tfp->close();
}

int main() {
    sim_init();

    int i = 0;
    while(i<5) {
        i++;
        top->reset = 0;
        sleep(1);
        step_and_dump_wave();
    }
    top->reset = 1;
    while(i<200) {
        i++;
        step_and_dump_wave();
        top->in = rand() & 1;
    }
    sim_exit();
}
