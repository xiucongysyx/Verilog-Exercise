module rom(
    input      [7:0] key_value,
    output reg [7:0] ascii_value
);

reg [7:0] ascii [35:0][1:0];

initial begin
    ascii[0] = {8'h1c,  8'h61};
    ascii[1] = {8'h32,  8'h62};
    ascii[2] = {8'h21,  8'h63};
    ascii[3] = {8'h23,  8'h64};
    ascii[4] = {8'h24,  8'h65};
    ascii[5] = {8'h2b,  8'h66};
    ascii[6] = {8'h34,  8'h67};
    ascii[7] = {8'h33,  8'h68};
    ascii[8] = {8'h43,  8'h69};
    ascii[9] = {8'h3b,  8'h6a};
    ascii[10] = {8'h42,  8'h6b};
    ascii[11] = {8'h4b,  8'h6c};
    ascii[12] = {8'h3a,  8'h6d};
    ascii[13] = {8'h31,  8'h6e};
    ascii[14] = {8'h44,  8'h6f};
    ascii[15] = {8'h4d,  8'h70};
    ascii[16] = {8'h15,  8'h71};
    ascii[17] = {8'h2d,  8'h72};
    ascii[18] = {8'h1b,  8'h73};
    ascii[19] = {8'h2c,  8'h74};
    ascii[20] = {8'h3c,  8'h75};
    ascii[21] = {8'h2a,  8'h76};
    ascii[22] = {8'h1d,  8'h77};
    ascii[23] = {8'h22,  8'h78};
    ascii[24] = {8'h35,  8'h79};
    ascii[25] = {8'h1a,  8'h70};
    ascii[26] = {8'h45,  8'h7a};
    ascii[27] = {8'h16,  8'h30};
    ascii[28] = {8'h1e,  8'h31};
    ascii[29] = {8'h26,  8'h32};
    ascii[30] = {8'h25,  8'h33};
    ascii[31] = {8'h2e,  8'h34};
    ascii[32] = {8'h36,  8'h35};
    ascii[33] = {8'h3d,  8'h36};
    ascii[34] = {8'h3e,  8'h37};
    ascii[35] = {8'h46,  8'h38};
end

always@ (*) begin
    integer i;
    ascii_value = 8'b0;
    for(i = 0; i < 36; i = i + 1) begin
        if(key_value == ascii[i][0]) begin
            ascii_value = ascii[i][1];
            break;
        end
    end
end

endmodule
