module mux241(x0,x1,x2,x3,y,f);
    input [1:0] x0,x1,x2,x3;
    input [1:0] y;
    output [1:0] f;

    MuxKey #(4,2,2) i0(f, y, {
        2'b00, x0,
        2'b01, x1,
        2'b10, x2,
        2'b11, x3
    });
endmodule
