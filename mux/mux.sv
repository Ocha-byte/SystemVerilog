`timescale 1 ns / 1ns

module mux (
    input sel, in1,
    in2,
    output reg out1
);

    always @(in1, in2, sel) begin
        case (sel)
            1'b0: out1 <= in1;
            1'b1: out1 <= in2;
        endcase
    end

endmodule
