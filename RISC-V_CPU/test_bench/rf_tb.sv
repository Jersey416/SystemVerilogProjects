
module rf_tb;

    import globat_defs::*;
    import  rf_types::*;
    
    logic clk, rst, wren;
    word_t waddr,raddr0,raddr1,wdata,rdata0,rdata1;

    rf reg_file(
        .clk(clk),
        .rst(rst),
        .wren(wren),
        .waddr(waddr),
        .raddr0(raddr0),
        .raddr1(raddr1),
        .wdata(wdata),
        .rdata0(rdata0),
        .rdata1(rdata1),
    );

    task rf_test(
        input logic clk,
        input logic rs,
        input logic we,
        input reg_addr_t wa,
        input reg_addr_t ra0,
        input reg_addr_t ra1,
        input word_t wd,
        output word_t rd0,
        output word_t rd1,
    );
        
        rst = rs;
        wren = re;
        
        always_ff @(posedge clk); begin
            
            waddr <= wa;
            raddr0 <= ra0;
            raddr1 <= ra1;
            wdata <= wd;
            rdata0 <= rd0;
            rdata1 <= rd1;
            
            $display("%s: %0h   %s: %0h   %s: %0h   %s: %0h", 
                    waddr.name(), wdata, 
                    raddr0.name(), rdata0, 
                    raddr1.name(), rdata1 );
        end

    endtask



    initial begin
        
        always #5 clk = ~clk;

        rf_test('0)

    end

endmodule
