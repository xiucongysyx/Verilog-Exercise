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
    output reg state_error,
    output overflow
);

wire [7:0] data;

reg ready;
wire ready_p1,ready_p2;
reg ready_d1,ready_d2;

reg nextdata_n;

reg [7:0] data_d1;
reg [7:0] seg_data_0;
reg [7:0] seg_data_1;
reg [7:0] seg_data_2;

reg [7:0] key_value;
reg [7:0] key_count;
reg [2:0] key_current,key_next;

parameter [2:0] key_press = 3'b100,key_loosen = 3'b010,key_loosen_previous = 3'b001;

assign ready_p1 = ready & !ready_d1;
assign ready_p2 = ready_d1 & !ready_d2;

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
    .i_seg(8'h00),
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

rom rom_u1(
    .key_value(key_value),
    .ascii_value(seg_data_1)
);
    
always @(*) begin
    seg_data_0 = key_value;
    seg_data_2 = key_count;
end
   
always @(posedge clk or posedge rst) begin
    if(rst) begin 
        ready_d1 <= 1'd0;
        ready_d2 <= 1'b0;
    end
    else begin
        ready_d1 <= ready;
        ready_d2 <= ready_d1;
    end
end

always @(posedge clk or posedge rst) begin
    if(rst) begin
        data_d1 <= 8'b0;
        nextdata_n <= 1'b1;
    end
    else if(ready_p1) begin
        nextdata_n <= 1'b0;
        data_d1 <= data;
    end
    else begin
        data_d1 <= 8'b0;
        nextdata_n <= 1'b1;
    end
end

always @(posedge clk or posedge rst) begin
    if(rst) key_current <= key_loosen;
    else key_current <= key_next;
end 

always @(negedge clk or posedge rst) begin
    if(rst) begin
        key_count <= 8'b0;
        key_value <= 8'b0;
        key_next <= key_loosen;
        state_error <= 1'b0;
    end
    else if(ready_p2) begin
        case(key_current)
            key_loosen: begin
                if(data_d1 == key_value) begin
                    key_value <= key_value;
                    key_next <= key_current;
                    key_count <= key_count;
                    state_error <= state_error;
                end
                else begin 
                    key_value <= data_d1;
                    key_next <= key_press;
                    key_count <= key_count;
                    state_error <= state_error;
                end
            end
            key_press: begin 
                if(data_d1 == 8'hf0) begin
                    key_value <= key_value;
                    key_next <= key_loosen_previous;
                    key_count <= key_count + 1'b1;
                    state_error <= state_error;
                end
                else if(data_d1 == key_value) begin
                    key_value <= key_value;
                    key_next <= key_press;
                    key_count <= key_count;
                    state_error <= state_error;
                end
                else begin
                    key_value <= 8'h00;
                    key_next <= key_loosen;
                    key_count <= 8'b0;
                    state_error <= 1'b1;
                end
            end
            key_loosen_previous: begin
                if(data_d1 == key_value) begin
                    key_value <= 8'h00;
                    key_next <= key_loosen;
                    key_count <= key_count;
                    state_error <= state_error;
                end
                else begin 
                    key_value <= 8'b0;
                    key_next <= key_loosen;
                    key_count <= key_count;
                    state_error <= 1'b1;
                end
            end
            default: begin
                key_value <= 8'b0;
                key_next <= key_current;
                key_count <= key_count;
                state_error <= 1'b1;
            end
        endcase
    end
    else begin
        key_count <= key_count;
        key_value <= key_value;
        state_error <= state_error;
        case(key_current)
            key_loosen: key_next <= key_loosen;
            key_press: key_next <= key_press;
            key_loosen_previous: key_next <= key_loosen_previous;
            default: key_next <= key_loosen;
        endcase
    end
end
endmodule
