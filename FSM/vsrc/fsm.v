module fsm(
    input clk,in,reset,
    output out
);

    parameter [2:0] S0 = 0, S1 = 1, S2 = 2, S3 = 3, S4 = 4;
    reg [2:0] state_din, state_dout;
    reg in_d1,in_d2;
    wire in_flag_p,in_flag_n,in_flag;

    assign in_flag_p = (in == in_d1)?1'b1:1'b0;
    assign in_flag_n = (in == in_d2)?1'b1:1'b0;
    assign in_flag = in_flag_p & in_flag_n;

    always @(posedge clk or negedge reset) begin
        if(!reset) in_d1 <= 1'b0;
        else in_d1 <= in;
    end

    always @(negedge clk,reset) begin
        if(!reset) in_d2 <= 1'b0;
        else in_d2 <= in;
    end
    
    always @(negedge clk,reset) begin
        if(!reset)
            state_din <= S0;
        else
            state_din <= state_dout;
    end

    always @(posedge clk or negedge reset) begin
        case(state_din)
            S0: begin
                if(in_flag) state_dout <= S1;
                else state_dout <= S0;
            end
            S1: begin
                if(in_flag) state_dout <= S2;
                else state_dout <= S0;
            end
            S2: begin
                if(in_flag) state_dout <= S3;
                else state_dout <= S0;
            end
            S3: begin
                if(in_flag) state_dout <= S4;
                else state_dout <= S0;
            end
            S4: begin
                if(in_flag) state_dout <= S4;
                else state_dout <= S0;
            end
            default: state_dout <= S0;
        endcase
    end

    assign out = (state_dout == S4)?1'b1:1'b0;
endmodule
