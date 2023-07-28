module log_or(
    input [3:0] i_a,
    input [3:0] i_b,
    output [3:0] o_led
);
    or(o_led,i_a,i_b);
endmodule
