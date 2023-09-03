module rom(
    input      [7:0] key_value,
    output reg [7:0] ascii_value
);

reg [5:0] count;
reg [7:0] ascii [35:0][1:0];
reg flag;

initial begin
    ascii[0][0] = 8'h1c; ascii[0][1] = 8'h61;
    ascii[1][0] = 8'h32; ascii[1][1] = 8'h62;
    ascii[2][0] = 8'h21; ascii[2][1] = 8'h63;
    ascii[3][0] = 8'h23; ascii[3][1] = 8'h64;
    ascii[4][0] = 8'h24; ascii[4][1] = 8'h65;
    ascii[5][0] = 8'h2b; ascii[5][1] = 8'h66;
    ascii[6][0] = 8'h34; ascii[6][1] = 8'h67;
    ascii[7][0] = 8'h33; ascii[7][1] = 8'h68;
    ascii[8][0] = 8'h43; ascii[8][1] = 8'h69;
    ascii[9][0] = 8'h3b; ascii[9][1] = 8'h6a;
    ascii[10][0] = 8'h42; ascii[10][1] = 8'h6b;
    ascii[11][0] = 8'h4b; ascii[11][1] = 8'h6c;
    ascii[12][0] = 8'h3a; ascii[12][1] = 8'h6d;
    ascii[13][0] = 8'h31; ascii[13][1] = 8'h6e;
    ascii[14][0] = 8'h44; ascii[14][1] = 8'h6f;
    ascii[15][0] = 8'h4d; ascii[15][1] = 8'h70;
    ascii[16][0] = 8'h15; ascii[16][1] = 8'h71;
    ascii[17][0] = 8'h1d; ascii[17][1] = 8'h72;
    ascii[18][0] = 8'h2b; ascii[18][1] = 8'h73;
    ascii[19][0] = 8'h2c; ascii[19][1] = 8'h74;
    ascii[20][0] = 8'h3c; ascii[20][1] = 8'h75;
    ascii[21][0] = 8'h2a; ascii[21][1] = 8'h76;
    ascii[22][0] = 8'h1d; ascii[22][1] = 8'h77;
    ascii[23][0] = 8'h22; ascii[23][1] = 8'h78;
    ascii[24][0] = 8'h35; ascii[24][1] = 8'h79;
    ascii[25][0] = 8'h1a; ascii[25][1] = 8'h70;
    ascii[26][0] = 8'h45; ascii[26][1] = 8'h7a;
    ascii[27][0] = 8'h16; ascii[27][1] = 8'h30;
    ascii[28][0] = 8'h1e; ascii[28][1] = 8'h31;
    ascii[29][0] = 8'h26; ascii[29][1] = 8'h32;
    ascii[30][0] = 8'h25; ascii[30][1] = 8'h33;
    ascii[31][0] = 8'h2e; ascii[31][1] = 8'h34;
    ascii[32][0] = 8'h36; ascii[31][1] = 8'h35;
    ascii[33][0] = 8'h3d; ascii[31][1] = 8'h36;
    ascii[34][0] = 8'h3e; ascii[31][1] = 8'h37;
    ascii[35][0] = 8'h46; ascii[31][1] = 8'h38;
end

initial begin
    count = 6'b0;
    flag = 1'b0;
    while (count < 36 || key_value != ascii[count][0]) begin
        count = count + 1'b1;
    end
    flag = 1'b1;
end

always@ (posedge flag) begin
    if(count < 36) ascii_value <= ascii[count][1];
    else ascii_value <= 8'b0;
end

endmodule