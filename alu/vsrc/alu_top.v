module alu_top(
    input [3:0] i_a,
    input [3:0] i_b,
    input [2:0] i_op,
    output [3:0] o_led,
    output          o_carry,
    output [7:0]    o_seg,
    output [7:0]    o_minus,
    output          o_overflow,
    output          o_max,
    output          o_equ
);
    wire [3:0] i_a_2,i_b_2,sub_i_b,sub_i_b_2;
    wire [3:0] led_0,led_1,led_2,led_3,led_4,led_5,led_6,led_7,o_led_0;
    wire carry_0,carry_1;
    wire overflow_0,overflow_1;
    wire max_0,equ_0;
    assign o_max = (i_op == 3'b110)?max_0:1'b0;
    assign o_equ = (i_op == 3'b111)?equ_0:1'b0;
    assign o_led = o_overflow?4'b0:o_led_0;
    assign sub_i_b = {~i_b[3],i_b[2:0]};
    assign i_a_2 = i_a[3]?({i_a[3],~i_a[2:0]}+1'b1):i_a;
    assign i_b_2 = i_b[3]?({i_b[3],~i_b[2:0]}+1'b1):i_b;
    assign sub_i_b_2 = sub_i_b[3]?({sub_i_b[3],~sub_i_b[2:0]}+1'b1):sub_i_b;
    assign o_minus = o_led[3]?8'b11111101:8'b11111111;
    adder u0_adder(.i_a(i_a_2), .i_b(i_b_2), .o_led(led_0), .o_carry(carry_0), .o_overflow(overflow_0));
    adder u1_adder(.i_a(i_a_2), .i_b(sub_i_b_2), .o_led(led_1), .o_carry(carry_1), .o_overflow(overflow_1));
    log_nor u0_log_nor(.i_a(i_a), .o_led(led_2));
    log_and u0_log_and(.i_a(i_a), .i_b(i_b), .o_led(led_3));
    log_or u0_log_or(.i_a(i_a), .i_b(i_b), .o_led(led_4));
    log_xor u0_log_xor(.i_a(i_a), .i_b(i_b), .o_led(led_5));
    log_max u0_log_max(.i_a(i_a), .i_b(i_b), .o_max(max_0), .o_led(led_6));
    log_equ u0_log_equ(.i_a(i_a), .i_b(i_b), .o_equ(equ_0), .o_led(led_7));
    seg u0_seg(.i_minus(o_led[3]), .i_seg(o_led[2:0]), .o_seg(o_seg));
    MuxKey #(8,3,4) i0(o_led_0, i_op, {
        3'b000, led_0,
        3'b001, led_1,
        3'b010, led_2,
        3'b011, led_3,
        3'b100, led_4,
        3'b101, led_5,
        3'b110, led_6,
        3'b111, led_7
    });
    MuxKey #(2,3,1) i2(o_carry, i_op, {
        3'b000, carry_0,
        3'b001, carry_1
    });
    MuxKey #(2,3,1) i3(o_overflow, i_op, {
        3'b000, overflow_0,
        3'b001, overflow_1
    });
endmodule
