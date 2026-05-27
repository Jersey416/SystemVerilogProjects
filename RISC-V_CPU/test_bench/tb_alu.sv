`timescale 1ns/1ps

module tb_alu;

    import alu_types::*;

    // DUT inputs
    logic clk;
    logic [3:0] mode;
    logic [31:0] rs1, rs2_imm;

    // DUT outputs
    logic [31:0] rd;
    alu_flags_t sr_alu_flags;

    // Instantiate DUT
    alu dut (
        .clk(clk),
        .mode(mode),
        .rs1(rs1),
        .rs2_imm(rs2_imm),
        .rd(rd),
        .sr_alu_flags(sr_alu_flags)
    );

    // Clock generation
    always #5 clk = ~clk;

    // Simple task to run one operation
    task run_test(
        input [3:0] op,
        input [31:0] a,
        input [31:0] b,
        input [31:0] expected
    );
        begin
            mode = op;
            rs1 = a;
            rs2_imm = b;

            #1; // wait for combinational + posedge logic

            $display("OP=%0d a=%0d b=%0d result=%0d flags=%b",
                     $unsigned(op), a, b, rd, sr_alu_flags);

            if (rd !== expected) begin
                $error("FAIL: expected %0d got %0d", expected, rd);
            end
        end
    endtask

    initial begin
        // init
        clk = 0;
        rs1 = 0;
        rs2_imm = 0;
        mode = 0;

        #10;

        // TESTS
        run_test(ADD, 10, 5, 15);   // ADD
        run_test(SUB, 10, 5, 5);    // SUB (example)
        run_test(MUL, 10, 5, 50);   // MUL (example)

        $display("All tests done.");
        $finish;
    end

endmodule
