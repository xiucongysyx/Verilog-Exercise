module ps2_top(
    input clk,
    input rst,
    input ps2_clk,
    input ps2_data,
    output [7:0] seg1,
    output [7:0] seg2,
    output [7:0] seg3,
    output [7:0] seg4,
    output [7:0] seg5,
    output [7:0] seg6,
    output [7:0] seg7,
    output [7:0] seg8,
    output overflow
);

wire [7:0] data;

wire ready;
wire ready_p1;
reg ready_d1;

reg nextdata_n;

reg [7:0] seg_data_0;
reg [7:0] seg_data_1;
reg [7:0] seg_data_2;


assign ready_p1 = ready & !ready_d1;

seg_hex seg_hex_u0(
    .i_seg(seg_data_0),
    .o_seg_0(seg1),
    .o_seg_1(seg2)
);

seg_hex seg_hex_u1(
    .i_seg(seg_data_1),
    .o_seg_0(seg3),
    .o_seg_1(seg4)
);

seg_hex seg_hex_u2(
    .i_seg(seg_data_2),
    .o_seg_0(seg5),
    .o_seg_1(seg6)
);

seg_hex seg_hex_u3(
    .i_seg(8'b00),
    .o_seg_0(seg7),
    .o_seg_1(seg8)
);
ps2 ps2_u1(
    .clk(clk),
    .clrn(!rst),
    .ps2_clk(ps2_clk),
    .ps2_data(ps2_data),
    .nextdata_n(nextdata_n),
    .data(data),
    .ready(ready),
    .overflow(overflow)
);

always @(posedge clk,rst) begin
    if(rst) ready_d1 <= 1'd0;
    else ready_d1 <= ready;
end

always @(posedge clk,rst) begin
    if(rst) begin
        nextdata_n <= 1'b1;
        seg_data_0 <= 8'b0;
        seg_data_1 <= 8'b0;
        seg_data_2 <= 8'b0;
    end
    else if(ready_p1) begin
        nextdata_n <= 1'b0;
        seg_data_2 <= seg_data_1;
        seg_data_1 <= seg_data_0;
        seg_data_0 <= data;
    end
    else begin
        nextdata_n <= 1'b1;
        seg_data_2 <= seg_data_2; 
        seg_data_1 <= seg_data_1;
        seg_data_0 <= seg_data_0;
    end
end

endmodule
