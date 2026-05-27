
import alu::*;

module alu( 
    input logic clk, 
    input logic[31:0] rd, 
    input logic[31:0] rs1, 
    input logic[31:0] rs2_imm,
    input alu_flags_t alu_flags;
);

typedef struct packed{
    logic[31:0] result;
    alu_flags_t flags;
} alu_return_t;

function alu_return_t and ; endfunction
function alu_return_t or  ; endfunction
function alu_return_t not ; endfunction
function alu_return_t nand; endfunction
function alu_return_t nor ; endfunction
function alu_return_t xor ; endfunction
function alu_return_t add ; endfunction
function alu_return_t sub ; endfunction
function alu_return_t mul ; endfunction
function alu_return_t div ; endfunction
function alu_return_t lsl ; endfunction
function alu_return_t lsr ; endfunction
function alu_return_t asl ; endfunction
function alu_return_t asr ; endfunction
function alu_return_t foo0; endfunction
function alu_return_t foo1; endfunction


always_ff @(posedge clk) begin
    
end


function alu_return_t and(
    logic[31:0] rs1, rs2,
    alu_flags_t curr_flags
);  
    logic[31:0] tmp = rs1 & rs2;
    
    return
endfunction

function alu_return_t or(
    logic[31:0] rs1, rs2
); 
    
    return
endfunction

function alu_return_t not(
    logic[31:0] rs1, rs2
); 
    
    return
endfunction

function alu_return_t nan(
    logic[31:0] rs1, rs2
); 
    
    return
endfunction

function alu_return_t nor(
    logic[31:0] rs1, rs2
); 
    
    return
endfunction

function alu_return_t xor(
    logic[31:0] rs1, rs2
); 
    
    return
endfunction


function alu_return_t add(      //32-b return + 4 bit flags
    logic[31:0] rs1, rs2 
);
    alu_flags_t flags = '0;
    logic[32:0] tmp = {1'b0, rs1} + {1'b0, rs2};

        flags.n = tmp[31];                                      //if MSB active activate N flag
        flags.c = tmp[32];                                      //if carry occured activate C flag
        flags.v = rs1[31]==rs2[31]) && (rs1[31] != tmp[31]);    //if signed overflow occured activate V flag
        flags.z = (tmp[31:0] == 32'b0);                         //if 0 activate Z flag

    return {flags.n,flags.c,flags.v,flags.z,tmp[31:0]};

endfunction

function alu_return_t sub(
    logic[31:0] rs1, rs2 
);
    return add(rs1, (~rs2 + 1'b1));                             //use 2's comp and add
endfunction



endmodule

