#include <nvboard.h>
#include <verilated.h>
#include "Vps2_top.h"
#include "verilated_vcd_c.h"

static Vps2_top* top;
VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

void step_and_dump_wave() {
    top->clk = !top->clk;
    top->eval();
    contextp->timeInc(10);
    tfp->dump(contextp->time());
}

void sim_init() {
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vps2_top;
    contextp->traceEverOn(true);
    top->trace(tfp,10);
    tfp->open("ps2_top.vcd");
}

void sim_exit() {
    step_and_dump_wave();
    tfp->close();
}

void nvboard_bind_all_pins(Vps2_top* top);

int main() {
    sim_init();
    nvboard_bind_all_pins(top);
    nvboard_init();
    top->rst = 1;
    step_and_dump_wave();
    step_and_dump_wave();
    top->rst = 0;
    
    

    while(1) {
        top->eval();
        nvboard_update();
        step_and_dump_wave();
    }

    sim_exit();
}
