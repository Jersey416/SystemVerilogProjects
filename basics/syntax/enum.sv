module EnumTest;

typedef enum {RED, GREEN, BLUE, ALPHA} RGBA_mode;

function automatic bit[31:0] set_brightness(RGBA_mode mode, bit[7:0] level);
    int unsigned ret = '0;
    case(mode)
        RED:    return (ret | (32'(level) << 'd24)  );
        GREEN:  return (ret | (32'(level) << 'd16)  );
        BLUE:   return (ret | (32'(level) << 'd8)   );
        ALPHA:  return (ret | 32'(level) );
    endcase
endfunction

initial begin
    
    $display("RED 1: 0x%h", set_brightness(RED, 1));
    $display("GREEN 25: 0x%h", set_brightness(GREEN, 25));
    $display("BLUE 100: 0x%h", set_brightness(BLUE, 100));
    $display("ALPHA 255: 0x%h", set_brightness(ALPHA, 255));

end

endmodule