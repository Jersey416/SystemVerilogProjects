`timescale 1ns/1ps

module alu_tb;

    import alu_types::*;
    import global_defs::*;
    
    // DUT inputs
    logic clk;
    logic [3:0] mode;
    word_t rs1, rs2_imm;

    // DUT outputs
    word_t rd;
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

            $display("OP=%0h a=%0h b=%0h result=%0h flags: n=%0h c=%0h v=%0h z=%0h",
                     $unsigned(op), a, b, $signed(rd), sr_alu_flags.n, 
                     sr_alu_flags.c, sr_alu_flags.v, sr_alu_flags.z);

            if (rd !== expected) begin
                $error("FAIL: expected %0h got %0h", expected, rd);
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

        run_test(LSL, 32'hFFFF_FFFF, 32'h1 , 32'hFFFF_FFFE);
        run_test(ASL, 32'hFFFF_FFFF, 32'h4 , 32'hFFFF_FFF0);
        run_test(LSL, 32'h1, 32'hFFFF_FFFF , 32'h8000_0000);
        run_test(ASL, 32'h3, 32'hFFFF_FFFE , 32'hC000_0000);
        run_test(LSR, 32'hFFFF_FFFF, 32'h1 , 32'h7FFF_FFFF);
        run_test(LSR, 32'hFFFF_FFFF, 32'h4 , 32'h0FFF_FFFF);
        run_test(LSR, 32'h8000_0000, 32'hFFFF_FFFF , 32'h1);
        run_test(LSR, 32'h8000_0000, 32'hFFFF_FFFE , 32'h2);
        run_test(ASR, 32'hFFEF_FFFF, 32'h1 , 32'hFFF7_FFFF);
        run_test(ASR, 32'hFFFF_FF0F, 32'h4 , 32'hFFFF_FFF0);
        run_test(ASR, 32'h8000_0000, 32'hFFFF_FFFF , 32'hFFFF_FFFF);
        run_test(ASR, 32'h8000_0000, 32'hFFFF_FFFE , 32'hFFFF_FFFE);
        run_test(MUL, 32'hFFFF_FFFF, 32'h1 , 32'hFFFF_FFFF);
        run_test(MUL, 32'hFFFF_FFFF, 32'h0 , 32'h0);
        run_test(MUL, 2, 1, 2);
        run_test(MUL, 2, 2, 4);
        run_test(MUL, 2, -5, -10);
        run_test(MUL, -5, -5, 25);
        run_test(MUL, -1239, 215, -266385);
        run_test(OR, 32'hFFFF_FFFF, 32'hF000_000F , 32'hFFFF_FFFF);
        run_test(OR, 32'hF0F0_F0F0, 32'hF000_000F , 32'hF0F0_F0FF);
        run_test(OR, 32'h0, 32'hF0F0, 32'hF0F0);
        run_test(OR, 32'h0, 32'h0, 32'h0);
        run_test(XOR, 32'hFFFF_FFFF, 32'hF000_000F , 32'h0FFF_FFF0);
        run_test(XOR, 32'hF0F0_F0F0, 32'hF000_000F , 32'h00F0_F0FF);
        run_test(XOR, 32'h0, 32'hF0F0, 32'hF0F0);
        run_test(XOR, 32'h0, 32'h0, 32'h0);
        run_test(XOR, 32'hFFFF_FFFF, 32'hFFFF_FFFF, 32'h0);
        run_test(NOT, 32'hFFFF_FFFF, 32'h0, 32'h0);
        run_test(NOT, 32'h0, 32'h0, 32'hFFFF_FFFF);
        run_test(NOT, 32'hF0F0_F0F0, 32'h0, 32'h0F0F_0F0F);
        run_test(AND, 32'hF0F0_F0F0, 32'hFFFF_FFFF, 32'hF0F0_F0F0);   // ADD
        run_test(ADD, 32'h7FFF_FFFF, 32'h1, 32'h8000_0000);   // ADD
        run_test(ADD, 32'hFFFF_FFFF, 32'h1, 0);   // MUL (example)
        run_test(SUB, 10, 9, 1);    // SUB (example)
        run_test(SUB, 10, 10, 0);    // SUB (example)
        run_test(SUB, 10, 11, -1);    // SUB (example)
        run_test(SUB, 32'h8000_0000, 32'h1, 32'h7FFF_FFFF);    // SUB (example)


        $display("All tests done.");
        $finish;
    end

endmodule
