#include <verilated.h>
#include "verilated_vcd_c.h"
#include "Vreg_top.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vreg_top* top;

void step_and_dump_wave() {
    top->eval();
    contextp->timeInc(1);
    top->clk = !top->clk;
    tfp->dump(contextp->time());
}

void sim_init() {
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vreg_top;
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
    while(i<5) {
        i++;
        top->rst = 1;
        sleep(1);
    }
    top->i_sed = 0b10011001;
    while(i<50) {
        i++;
        step_and_dump_wave();
        if(i==20) top->i_rand_flag = 1;
        else if(i==40) top->i_rand_flag = 0;
    }
    sim_exit();
}
