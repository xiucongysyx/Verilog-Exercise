#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->a, BIND_RATE_SCR, BIND_DIR_IN , 4, SW0, SW4, SW8, SW12);
	nvboard_bind_pin( &top->b, BIND_RATE_SCR, BIND_DIR_IN , 4, SW1, SW5, SW9, SW13);
	nvboard_bind_pin( &top->f, BIND_RATE_SCR, BIND_DIR_OUT, 4, LD0, LD4, LD8, LD12);
}
