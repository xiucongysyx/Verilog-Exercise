#include <verilated.h>
#include "verilated_vcd_c.h"
#include "Vrom.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vrom* top;
int key[25] = {0x1c, 0x32, 0x21, 0x23, 0x24, 0x2b, 0x34, 0x33, 0x43, 0x3b, 0x42, 0x4b, 0x3a, 0x31, 0x44, 0x4d, 0x15, 0x1d, 0x2b, 0x2c, 0x3c, 0x2a, 0x1d, 0x22, 0x35};

void step_and_dump_wave() {
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}

void sim_init() {
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vrom;
    contextp->traceEverOn(true);
    top->trace(tfp,10);
    tfp->open("rom.vcd");
}

void sim_exit() {
    step_and_dump_wave();
    tfp->close();
}

int main() {
    sim_init();
    step_and_dump_wave();
    int i = 0;

    while(i<200) {
        i++;
        step_and_dump_wave();
        top->key_value = key[rand() % 25];
        step_and_dump_wave();
    }
    sim_exit();
}
