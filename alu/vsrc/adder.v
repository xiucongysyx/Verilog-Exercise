module adder(
    input [3:0] i_a,
    input [3:0] i_b,
    
    output [3:0] o_led,
    output       o_carry,
    output       o_overflow
);
    wire [3:0] led;
    assign {o_carry,led[3:0]} = i_a + i_b;
    assign o_led = led[3]?{led[3],~led[2:0]}:led;
    assign o_overflow = (i_a[3] == i_b[3])&&(led[3] != i_a[3]);
    
endmodule
    
