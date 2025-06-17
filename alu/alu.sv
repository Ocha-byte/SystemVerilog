`timescale 1 ns / 1 ps

module alu (
    input  wire [3:0] sel,
    input  wire [7:0] rs1,
    input  wire [7:0] rs2,
    output reg  [7:0] rd
);

    always @(sel, rs1, rs2) begin
        case (sel)
            4'b0000: rd = 8'b0;  // Do nothing
            4'b0001: rd = rs1 + rs2;  // addition
            4'b0010: rd = rs1 - rs2;  // subtract
            4'b0011: rd = rs1 & rs2;  // logical AND
            4'b0100: rd = rs1 | rs2;  // logical OR
            4'b0101: rd = ~(rs1 & rs2);  // logical NAND
            4'b0110: rd = ~(rs1 | rs2);  // logical NOR
            4'b0111: rd = rs1 ^ rs2;  // logical XOR
            4'b1000: rd = ~(rs1 ^ rs2);  // logical XNOR
            default: rd = 8'b0;
        endcase;
    end;
endmodule
