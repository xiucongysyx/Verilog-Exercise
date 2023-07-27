#include <nvboard.h>
#include "Vencode38.h"

static TOP_NAME dut;

void nvboard_bind_all_pins(Vencode38* top);

int main() {
    nvboard_bind_all_pins(&dut);
    nvboard_init();

    while(1) {
        dut.eval();
        nvboard_update();
    }
}
