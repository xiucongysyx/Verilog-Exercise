module seg_hex(
    input [7:0] i_seg,
    output [7:0] o_seg_0,o_seg_1
);

    seg u0_seg(.i_seg(i_seg[3:0]), .o_seg(o_seg_0));
    seg u1_seg(.i_seg(i_seg[7:4]), .o_seg(o_seg_1));
endmodule

