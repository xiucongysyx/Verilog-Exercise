#include <nvboard.h>
#include "Vmux241.h"

static TOP_NAME dut;

void nvboard_bind_all_pins(Vmux241* top);

int main() {
    nvboard_bind_all_pins(&dut);
    nvboard_init();

    while(1) {
        dut.eval();
        nvboard_update();
    }
}
