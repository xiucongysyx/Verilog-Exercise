module d_reg(
    input clk,
    input i_d,
    output reg o_q
);

    always @(posedge clk) begin
        o_q <= i_d;
    end
endmodule
