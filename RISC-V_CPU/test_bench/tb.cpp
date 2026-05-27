#include "Valu.h"
#include "verilated.h"
#include <iostream>
#include <cstdint>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    Valu* dut = new Valu;

    // helper lambda to toggle clock
    auto tick = [&]() {
        dut->clk = 0;
        dut->eval();

        dut->clk = 1;
        dut->eval();
    };

    // -----------------------------
    // INITIAL INPUTS
    // -----------------------------
    dut->clk = 0;
    dut->mode = 0;
    dut->rs1 = 0;
    dut->rs2_imm = 0;
    dut->sr_flags = 0;

    tick();

    // -----------------------------
    // TEST VECTOR 1: ADD
    // -----------------------------
    dut->mode = 0x0; // example: ADD
    dut->rs1 = 10;
    dut->rs2_imm = 20;

    tick();

    std::cout << "ADD result rd = " << dut->rd << std::endl;
    std::cout << "status = " << dut->status << std::endl;

    // -----------------------------
    // TEST VECTOR 2: AND
    // -----------------------------
    dut->mode = 0x1; // example: AND
    dut->rs1 = 0xFF00FF00;
    dut->rs2_imm = 0x0F0F0F0F;

    tick();

    std::cout << "AND result rd = " << std::hex << dut->rd << std::endl;

    // -----------------------------
    // TEST VECTOR 3: SHIFT TEST
    // -----------------------------
    dut->mode = 0x2; // example: LSR
    dut->rs1 = 0x80000000;
    dut->rs2_imm = 4;

    tick();

    std::cout << "SHIFT result rd = " << std::hex << dut->rd << std::endl;
    std::cout << "flags = " << dut->sr_flags << std::endl;

    // -----------------------------
    // FINISH
    // -----------------------------
    delete dut;
    return 0;
}