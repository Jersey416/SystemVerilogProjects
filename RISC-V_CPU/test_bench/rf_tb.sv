
module rf_tb;

    import global_defs::*;
    import rf_types::*;
    
    logic clk, rst, wren;
    reg_addr_t waddr,raddr0,raddr1;
    word_t wdata,rdata0,rdata1;

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
        .rdata1(rdata1)
    );

    always #5 clk = ~clk;



    task rf_test(
        input logic rs,
        input logic we,
        input reg_addr_t wa,
        input reg_addr_t ra0,
        input reg_addr_t ra1,
        input word_t wd
    );
        
        rst = rs;
        wren = we;
        waddr = wa;
        raddr0 = ra0;
        raddr1 = ra1;
        wdata = wd;
        
        @(posedge clk);
        
        rd0 = rdata0;
        rd1 = rdata1;
        
        $display("%s: %0h   %s: %0h   %s: %0h", 
                waddr.name(), wdata, 
                raddr0.name(), rd0, 
                raddr1.name(), rd1);

    endtask

    reg_addr_t i;

    initial begin

        rf_test('0, '0, ZERO, ZERO, ZERO, '0);
        for (i = i.first(); i < i.last(); i = i.next())
            rf_test('1, '1, i, ZERO, ZERO, 32'(i));
        
        rf_test('1, '1, T6, ZERO, ZERO, 32'h1f);


        for (i = i.first(); i < i.last(); i = i.next())
            rf_test('1, '0, ZERO, i, i.next(), '0);

        rf_test('1, '0, ZERO, T6, ZERO, '0);
        $finish;
    end

endmodule

/*
        rf_test('0, '0, ZERO, ZERO, ZERO, '0);
        rf_test('1, '1, T0,   ZERO, ZERO, 32'hFEDC_BA98);
        rf_test('1, '0, ZERO, ZERO, T0,   '0);
        rf_test('1, '0, ZERO, ZERO, T0,   '0);
        rf_test('1, '1, T0,   ZERO, ZERO, 32'h7654_3210);
        rf_test('1, '0, ZERO, ZERO, T0,   '0);
        rf_test('1, '1, T1,   ZERO, ZERO, 32'hFEDC_BA98);
        rf_test('1, '0, ZERO, T0,   T1,   '0);
*/
