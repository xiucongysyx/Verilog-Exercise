module log_equ(
    input [3:0] i_a,
    input [3:0] i_b,
    output      o_equ,
    output [3:0] o_led
);
    assign o_equ = (i_a == i_b)?1'b1:1'b0;
    assign o_led = i_a;
endmodule
