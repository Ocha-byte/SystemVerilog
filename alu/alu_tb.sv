`timescale 1 ns / 1 ps

module alu_tb;
    reg  [3:0] sel;
    reg  [7:0] rs1;
    reg  [7:0] rs2;
    // verilator lint_off UNUSED
    wire [7:0] rd;
    // verilator lint_on UNUSED

    alu uut (
        .sel(sel),
        .rs1(rs1),
        .rs2(rs2),
        .rd (rd)
    );

    initial begin
        sel = 4'b0;  // Do nothing
        rs1 = 8'b0;
        rs2 = 8'b0;
        #1
        sel = 4'b0001;  // addition
        rs1 = 8'b10000000;
        rs2 = 8'b10000000;
        #1
        sel = 4'b0010;  // subtract
        rs1 = 8'b10000000;
        rs2 = 8'b10000000;
        #1
        sel = 4'b0011;  // logical AND
        rs1 = 8'b10000000;
        rs2 = 8'b10000000;
        #1
        sel = 4'b0100;  // logical OR
        rs1 = 8'b10000000;
        rs2 = 8'b10000000;
        #1
        sel = 4'b0101;  // logical NAND
        rs1 = 8'b10000000;
        rs2 = 8'b10000000;
        #1
        sel = 4'b0110;  // logical NOR
        rs1 = 8'b10000000;
        rs2 = 8'b10000000;
        #1
        sel = 4'b0111;  // logical XOR
        rs1 = 8'b10000000;
        rs2 = 8'b10000000;
        #1
        sel = 4'b1000;  // logical XNOR
        rs1 = 8'b10000000;
        rs2 = 8'b10000000;
        #1

        $finish;
        $dumpfile("waveform.fst");
        $dumpvars;
    end

endmodule
