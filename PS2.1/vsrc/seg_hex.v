module seg_hex(
    input [7:0] i_seg,
    output [7:0] o_seg_0,o_seg_1
);
    reg blank_flag;
    always@ (i_seg) begin
        if(i_seg == 8'h00) blank_flag = 1'b1;
        else blank_flag = 1'b0;
    end

    seg u0_seg(.i_seg(i_seg[3:0]), .blank_flag(blank_flag), .o_seg(o_seg_0));
    seg u1_seg(.i_seg(i_seg[7:4]), .blank_flag(blank_flag), .o_seg(o_seg_1));
endmodule

