module seg(
    input [3:0] i_seg,
    input blank_flag,
    output reg [7:0] o_seg
);
    parameter blank_value = 8'b0000_0000;
    parameter num0 = 8'b1111_1100;
    parameter num1 = 8'b0110_0000;
    parameter num2 = 8'b1101_1010;
    parameter num3 = 8'b1111_0010;
    parameter num4 = 8'b0110_0110;
    parameter num5 = 8'b1011_0110;
    parameter num6 = 8'b1011_1110;
    parameter num7 = 8'b1110_0000;
    parameter num8 = 8'b1111_1110;
    parameter num9 = 8'b1110_0110;
    parameter numa = 8'b1110_1110;
    parameter numb = 8'b0011_1110;
    parameter numc = 8'b1001_1100;
    parameter numd = 8'b0111_1010;
    parameter nume = 8'b1001_1110;
    parameter numf = 8'b1000_1110;
    
    always @(i_seg) begin
        if(blank_flag) o_seg =  ~blank_value;
        else begin
            case(i_seg)
                4'd0 : o_seg = ~num0;
                4'd1 : o_seg = ~num1;
                4'd2 : o_seg = ~num2;
                4'd3 : o_seg = ~num3;
                4'd4 : o_seg = ~num4;
                4'd5 : o_seg = ~num5;
                4'd6 : o_seg = ~num6;
                4'd7 : o_seg = ~num7;
                4'd8 : o_seg = ~num8;
                4'd9 : o_seg = ~num9;
                4'd10: o_seg = ~numa;
                4'd11: o_seg = ~numb;
                4'd12: o_seg = ~numc;
                4'd13: o_seg = ~numd;
                4'd14: o_seg = ~nume;
                4'd15: o_seg = ~numf;
            endcase
        end
    end
endmodule

