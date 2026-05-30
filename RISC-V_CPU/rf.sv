module rf(
    input logic clk,
    input logic rst,
    input logic write_enable,
    input rf_types::reg_addr_t waddr,
    input rf_types::reg_addr_t raddr0,
    input rf_types::reg_addr_t raddr1,
    input global_defs::word_t wdata,
    output global_defs::word_t rdata0,
    output global_defs::word_t rdata1
);

    import rf_types::*;

    word_t r[32];

    always_ff @(posedge clk) begin
        
        assign rdata1 = r[raddr1];
        assign rdata0 = r[raddr0];
        
        if(! rst) begin
            r <= '{default: '0};    
        end
        else if (wren && waddr != ZERO) begin
            r[waddr] <= wdata;
        end
    end
    
endmodule
