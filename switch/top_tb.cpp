#include "verilated.h"
#include "Vtop.h"
#include "verilated_vcd_c.h"

int main(int argc, char *argv[])
{
    int i = 0;
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc,argv);
    Vtop* top = new Vtop{contextp};
    

    VerilatedVcdC* tfp = new VerilatedVcdC;
    contextp->traceEverOn(true);
    Verilated::mkdir("logs");
    top->trace(tfp,10);
    tfp->open("logs/top.vcd");

    while(i < 25){
        contextp->timeInc(2);
        int a = rand() & 1;
        int b = rand() & 1;
        top->a = a;
        top->b = b;
        top->eval();
        printf("a = %d, b = %d, f = %d\n", a, b, top->f);
        assert(top->f == (a ^ b));
        tfp->dump(contextp->time());
        i++;
    }
    delete top;
    tfp->close();
    delete contextp;
    return 0;
}
