// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __integrate_mul_32ncud__HH__
#define __integrate_mul_32ncud__HH__
#include "ACMP_mul_uu.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int dout_WIDTH>
SC_MODULE(integrate_mul_32ncud) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_mul_uu<ID, 2, din0_WIDTH, din1_WIDTH, dout_WIDTH> ACMP_mul_uu_U;

    SC_CTOR(integrate_mul_32ncud):  ACMP_mul_uu_U ("ACMP_mul_uu_U") {
        ACMP_mul_uu_U.clk(clk);
        ACMP_mul_uu_U.reset(reset);
        ACMP_mul_uu_U.ce(ce);
        ACMP_mul_uu_U.din0(din0);
        ACMP_mul_uu_U.din1(din1);
        ACMP_mul_uu_U.dout(dout);

    }

};

#endif //
