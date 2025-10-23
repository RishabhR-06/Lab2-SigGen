// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsinegen.h"
#include "Vsinegen__Syms.h"

//============================================================
// Constructors

Vsinegen::Vsinegen(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsinegen__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , incr{vlSymsp->TOP.incr}
    , dout1{vlSymsp->TOP.dout1}
    , dout2{vlSymsp->TOP.dout2}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsinegen::Vsinegen(const char* _vcname__)
    : Vsinegen(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsinegen::~Vsinegen() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vsinegen___024root___eval_initial(Vsinegen___024root* vlSelf);
void Vsinegen___024root___eval_settle(Vsinegen___024root* vlSelf);
void Vsinegen___024root___eval(Vsinegen___024root* vlSelf);
#ifdef VL_DEBUG
void Vsinegen___024root___eval_debug_assertions(Vsinegen___024root* vlSelf);
#endif  // VL_DEBUG
void Vsinegen___024root___final(Vsinegen___024root* vlSelf);

static void _eval_initial_loop(Vsinegen__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vsinegen___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vsinegen___024root___eval_settle(&(vlSymsp->TOP));
        Vsinegen___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vsinegen::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsinegen::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsinegen___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vsinegen___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vsinegen::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vsinegen::final() {
    Vsinegen___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsinegen::hierName() const { return vlSymsp->name(); }
const char* Vsinegen::modelName() const { return "Vsinegen"; }
unsigned Vsinegen::threads() const { return 1; }
