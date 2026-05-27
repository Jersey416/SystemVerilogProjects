`timescale 1ns/1ps

module alu( 
    input   logic clk, 
    input   alu_running_mode_t mode,
    output  logic[31:0] rd, 
    input   logic[31:0] rs1, 
    input   logic[31:0] rs2_imm,
    output  alu_flags_t sr_alu_flags
);

    import alu_types::*;
    
    typedef struct packed{
        logic[31:0] result;
        alu_flags_t flags;
    } alu_return_t;
    
    always_ff @(posedge clk) begin

        alu_return_t ret;
        case(mode)
        
        NOT: begin
            ret = op_not(rs1);
        end
        AND: begin
            ret = op_and(rs1,rs2_imm);
        end
        OR: begin
            ret = op_or (rs1,rs2_imm);
        end
        XOR: begin
            ret = op_xor(rs1,rs2_imm);
        end
        ADD: begin
            ret = op_add(rs1,rs2_imm);
        end
        SUB: begin
            ret = op_sub(rs1,rs2_imm);
        end
        MUL: begin
            ret = op_mul(rs1,rs2_imm);
        end
        DIV: begin
            ret = no_op();
        end
        LSL: begin
            ret = op_sl (rs1,rs2_imm[4:0]);
        end
        LSR: begin
            ret = op_lsr(rs1,rs2_imm[4:0]);
        end
        ASL: begin
            ret = op_sl (rs1,rs2_imm[4:0]);
        end
        ASR: begin
            ret = op_asr(rs1,rs2_imm[4:0]);
        end
        default: begin
            ret = no_op();
        end
        endcase 

        rd              <= ret.result;
        sr_alu_flags    <= ret.flags;
        
    end

    function automatic alu_return_t no_op();
        alu_return_t ret = '0;
        return ret;
    endfunction

    function automatic alu_return_t op_not(                                      //no carry or ovfl for not
        logic[31:0] p_rs1
    ); 
        logic[31:0] ret = ~p_rs1;
        alu_flags_t flags = '0;
        flags.n = (ret[31]);
        flags.z = (ret == 0);
        return {ret, flags};
    endfunction

    function automatic alu_return_t op_and(                                      //no carry or ovfl for and
        logic[31:0] p_rs1, p_rs2
    );  
        logic[31:0] ret = p_rs1 & p_rs2; 
        alu_flags_t flags = '0;
        flags.n = (ret[31]);
        flags.z = (ret == 32'b0); 
        return {ret, flags};
    endfunction


    function automatic alu_return_t op_or(                                       //no carry or ovfl for or
        logic[31:0] p_rs1, p_rs2
    ); 
        logic[31:0] ret = p_rs1 | p_rs2;
        alu_flags_t flags = '0;
        flags.n = (ret[31]);
        flags.z = (ret == 0);
        return {ret, flags};
    endfunction

    function automatic alu_return_t op_xor(                                      //no carry or ovfl for xor
        logic[31:0] p_rs1, p_rs2
    ); 
        logic[31:0] ret = p_rs1 ^ p_rs2;
        alu_flags_t flags = '0;
        flags.n = (ret[31]);
        flags.z = (ret == 0);
        return {ret, flags};
    endfunction

    function automatic alu_return_t op_add(                                      //updates all flags
        logic[31:0] p_rs1, p_rs2 
    );
        alu_flags_t flags = '0;
        logic[32:0] tmp = {1'b0, p_rs1} + {1'b0, p_rs2};
        logic[31:0] ret = tmp[31:0];
        flags.n = ret[31];                                              //if MSB active activate N flag
        flags.c = tmp[32];                                              //if carry occured activate C flag
        flags.v = (p_rs1[31] == p_rs2[31]) && (p_rs1[31] != ret[31]);         //if signed overflow occured activate V flag
        flags.z = (ret == 32'b0);                                 //if 0 activate Z flag

        return {ret, flags};

    endfunction

    function automatic alu_return_t op_sub(                                      //2's comp and add
        logic[31:0] p_rs1, p_rs2 
    );
        return op_add(p_rs1, (~p_rs2 + 1'b1));                             //use 2's comp and add
    endfunction

    function automatic alu_return_t op_mul(                                      //no carry or ovfl for mul
        logic[31:0] p_rs1, p_rs2 
    );
        alu_flags_t flags = '0;
        logic[31:0] ret = p_rs1 * p_rs2;
        flags.n = ret[31];                                          //if MSB active activate N flag
        flags.z = (ret == 32'b0);                                   //if carry occured activate C flag

        return {ret, flags};

    endfunction

    // function automatic alu_return_t op_div (//does not work right now, will implement dividing micro-ops
    //     logic[31:0] p_rs1, p_rs2
    // ); 
    //     alu_flags_t flags = '0;
    //     logic[31:0] ret = '0;
    //     return {ret, flags};
    // endfunction

    function automatic alu_return_t op_sl (  //shifts left, c is carry out, V undefined
        logic[31:0] p_rs1, logic[4:0] shamt
    ); 
        alu_flags_t flags = '0;
        logic[31:0] ret = p_rs1 << shamt;
        flags.n = ret[31];
        flags.c = (shamt == 0) ?
            1'b0 : p_rs1[shamt - 1];
        flags.z = (ret == 32'b0);
        return {ret, flags};
    endfunction

    function automatic alu_return_t op_lsr ( //shifts right, for unsigned, c is last bit shifted out (shifted out of LSB)
        logic[31:0] p_rs1, logic[4:0] shamt
    ); 
        alu_flags_t flags = '0;
        logic[31:0] ret = p_rs1 >> shamt;
        flags.n = ret[31];
        flags.c = (shamt == 0) ?
            1'b0 : p_rs1[shamt - 1];
        flags.z = (ret == 32'b0);
        return {ret, flags};

    endfunction

    function automatic alu_return_t op_asr (  //shifts right, for signed, keeps sign c is last bit shifted out (shifted out of LSB)
        logic[31:0] p_rs1, logic[4:0] shamt
    ); 
        alu_flags_t flags = '0;
        logic[31:0] ret = $signed(p_rs1) >>> shamt;
        flags.n = ret[31];
        flags.c = (shamt == 0) ?
            1'b0 : p_rs1[shamt - 1];
        flags.z = (ret == 32'b0);
        return {ret, flags};
    endfunction


endmodule

/*
function alu_return_t div(      //32-b return + 4 bit flags
    logic[31:0] rs1, rs2 
);
    alu_flags_t flags = '0;
    logic[32:0] ret = {1'b0, rs1} + {1'b0, rs2};

        flags.n = ret[31];                                      //if MSB active activate N flag
        flags.c = ret[32];                                      //if carry occured activate C flag
        flags.v = rs1[31]==rs2[31]) && (rs1[31] != ret[31]);    //if signed overflow occured activate V flag
        flags.z = (ret[31:0] == 32'b0);                         //if 0 activate Z flag

    return {flags.n,flags.c,flags.v,flags.z,ret[31:0]};

endfunction
*/


// function alu_return_t nand; endfunction
// function alu_return_t nor ; endfunction

/*
function alu_return_t nan(
    logic[31:0] rs1, rs2
); 
    logic[31:0] ret = rs1 & rs2;
    alu_flags_t flags = '0;
    flags.n = (ret[31]);
    flags.z = (ret == 0);
    return {flags, ret};
endfunction

function alu_return_t nor(
    logic[31:0] rs1, rs2
); 
    logic[31:0] ret = rs1 & rs2;
    alu_flags_t flags = '0;
    flags.n = (ret[31]);
    flags.z = (ret == 0);
    return {flags, ret};
endfunction
*/

