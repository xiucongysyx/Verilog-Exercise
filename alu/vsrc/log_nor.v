module log_nor(
    input [3:0] i_a,
    output [3:0] o_led
);
    nor(o_led,i_a);
endmodule
