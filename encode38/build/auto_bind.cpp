#include <nvboard.h>
#include "Vencode38.h"

void nvboard_bind_all_pins(Vencode38* top) {
	nvboard_bind_pin( &top->i_code, BIND_RATE_SCR, BIND_DIR_IN , 8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->i_en, BIND_RATE_SCR, BIND_DIR_IN , 1, SW15);
	nvboard_bind_pin( &top->o_code, BIND_RATE_SCR, BIND_DIR_OUT, 3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->o_seg, BIND_RATE_SCR, BIND_DIR_OUT, 8, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G, DEC0P);
	nvboard_bind_pin( &top->o_en_flag, BIND_RATE_SCR, BIND_DIR_OUT, 1, LD15);
}
