`timescale 1ns/1ps

module cu_tb;
    import cu_types::*;
    import rf_types::*;
    import global_defs::*;

    logic clk;
    word_t instr;
    reg_addr_t waddr;
    word_t wdata;

    cu dut (
        .clk(clk),
        .instr(instr),
        .waddr(waddr),
        .wdata(wdata)
    );

    always #5 clk = ~clk;

    task cu_test(       //test ir to ensure correct
        input word_t i, //output based on opcode
    );
        instr = i;

        @(posedge clk);

        $display("%s: %0h", 
                 waddr.name(),
                 wdata);

    endtask

    initial begin
        clk = 0;
        waddr = ZERO;
        wdata = 0;
        @(posedge clk); //initialize

        cu_test({20'h000FF, T0, OP_LUI});
        cu_test({20'hBCDEF, T1, OP_LUI});
        cu_test({20'h11111, T2, OP_LUI});
        cu_test({20'h00000, T3, OP_LUI});
        $finish;
    end

endmodule
