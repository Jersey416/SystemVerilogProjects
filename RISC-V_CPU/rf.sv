module rf(
    input logic clk,
    input logic rst,
    input logic wren,
    input rf_types::reg_addr_t waddr,
    input rf_types::reg_addr_t raddr0,
    input rf_types::reg_addr_t raddr1,
    input global_defs::word_t wdata,
    output global_defs::word_t rdata0,
    output global_defs::word_t rdata1
);

    import global_defs::*;
    import rf_types::*;

    word_t r[32];

    always_comb begin               //combinational reads

        rdata1 = r[raddr1];
        rdata0 = r[raddr0];
    end

    always_ff @(posedge clk) begin  //sequential writes
        
        if(! rst) begin
            r <= '{default: '0};    
        end
        else if (wren && waddr != ZERO) begin
            r[waddr] <= wdata;
        end
    end
    
endmodule
