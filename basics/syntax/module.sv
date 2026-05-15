module test;
    logic[7:0] r0;
    logic[15:0] r1;
    
    initial begin   //execute sequentially
        r0 = 8'h5a; //remember the 8 befor 'h, tells it to be an 8 bit literal; otherwise, error
        r1 = '0;    //this says "all bits become 0"

        $display("r0 = 0x%0h \nr1 = 0x%0h\n\n", r0,r1);

        r0 = '1;  //this says "all bits become 1"

        $display("r0 = 0x%0h \nr1 = 0x%0h", r0,r1);
        
    end

endmodule