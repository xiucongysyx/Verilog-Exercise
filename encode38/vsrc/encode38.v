module encode38(
    input [7:0] i_code,
    input       i_en,
    output reg [2:0] o_code,
    output     [7:0] o_seg,
    output           o_en_flag
);
    integer i;
    always @(i_code or i_en) begin
        if(i_en) begin
            o_code = 3'd0;
            o_en_flag = 1'b1;
            for(i = 0; i <= 7; i = i+1)
                if(i_code[i] == 1) o_code = i[2:0];
        end
        else begin
            o_code = 3'd0;
            o_en_flag = 1'b0;
        end
    end

    seg seg_u1(
        .i_seg(o_code),
        .o_seg(o_seg)
    );
endmodule
