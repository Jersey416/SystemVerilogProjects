
module core (
    input logic clk,
    output word_t memaddr,
    input word_t memdata
);

    pc_t        pc;
    ir_u        ir;
    logic       pcwren;
    logic       irwren;
    reg_addr_t  waddr;
    word_t      wdata;
    reg_addr_t  raddr0;
    reg_addr_t  raddr1;

    cu cu_d (
        .clk(clk),
        .pc_in(pc),
        .ir_in(ir),
        .w_pc(pcwren),
        .w_ir(irwren),
        .waddr(),
        .wdata(),
        .raddr0(),
        .raddr1()
    );
    


endmodule