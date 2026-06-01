
module rf_tb;

    import globat_defs::*;
    import  rf_types::*;
    
    logic clk, rst, wren;
    word_t waddr,raddr0,raddr1,wdata,rdata0,rdata1;

    word_t rd0 = '0;               
    word_t rd1 = '0;

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

    always #5 clk = ~clk;

    task rf_test(
        input logic clk,
        input logic rs,
        input logic we,
        input reg_addr_t wa,
        input reg_addr_t ra0,
        input reg_addr_t ra1,
        input word_t wd
    );
        
        rst = rs;
        wren = re;

        always_ff @(posedge clk); begin
            
            waddr <= wa;
            raddr0 <= ra0;
            raddr1 <= ra1;
            wdata <= wd;
            rd0 <= rdata0;
            rd1 <= rdata1;
            
            $display("%s: %0h   %s: %0h   %s: %0h   %s: %0h", 
                    waddr.name(), wdata, 
                    raddr0.name(), rd0, 
                    raddr1.name(), rd1);
        end

    endtask

    initial begin

        rf_test(clk, '0, '0, '0, '0, '0, '0);
        rf_test(clk, '1, '1, T0, '0, '0, 32'hFEDC_BA98);
        rf_test(clk, '1, '0, '0, '0, T0, T0);

    end

endmodule
