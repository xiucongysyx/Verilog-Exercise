#include <nvboard.h>
#include "Valu_top.h"

static TOP_NAME dut;

void nvboard_bind_all_pins(Valu_top* top);

int main() {
    nvboard_bind_all_pins(&dut);
    nvboard_init();

    while(1) {
        dut.eval();
        nvboard_update();
    }
}
