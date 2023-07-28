module log_max(
    input [3:0] i_a,
    input [3:0] i_b,
    output      o_max,
    output [3:0] o_led
);
    assign o_max = (i_a > i_b)?1'b1:1'b0;
    assign o_led = (i_a > i_b)?i_a:i_b;
endmodule
