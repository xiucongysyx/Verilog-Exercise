#include <nvboard.h>
#include "Vtop.h"
#include "verilated_vcd_c.h"

static TOP_NAME dut;

void nvboard_bind_all_pins(Vtop* top);

int main() {
    nvboard_bind_all_pins(&dut);
    nvboard_init();

    while(1) {
        dut.eval();
        nvboard_update();
    }
}
