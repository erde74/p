#include <lib/class/PEG/Terminal.h>


Optr layout_PEG_Terminal_Class_class;
Optr slot_PEG_Terminal_terminal;
Optr layout_PEG_Terminal;


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_aTerminal_0_0 = new_Variable_named(L"aTerminal", 0);
    Array PArray18734 = new_Array_with(1, (Optr)VAR_aTerminal_0_0);
    Assign PAssign18736 = new_Assign((Optr)slot_PEG_Terminal_terminal, (Optr)VAR_aTerminal_0_0);
    Array PThreadedCode18735 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign18736, (Optr)&t_push_variable, (Optr)VAR_aTerminal_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18733 = new_Method_with(PArray18734, empty_Array, empty_Array, PThreadedCode18735, 2, PAssign18736, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod18733, PEG_Terminal_Class);
    store_method(PEG_Terminal_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18738 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_scanPush_ = new_Symbol(L"scanPush:");
    // scanPush:. 
    Send PSend18740 = new_Send((Optr)VAR_input_0_0, SMB_scanPush_, 1, (Optr)slot_PEG_Terminal_terminal);
    Array PThreadedCode18739 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send1, (Optr)PSend18740, (Optr)&t_method_return);
    Method PMethod18737 = new_Method_with(PArray18738, empty_Array, empty_Array, PThreadedCode18739, 1, PSend18740);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18737, PEG_Terminal_Class);
    store_method(PEG_Terminal_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18742 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_scan_ = new_Symbol(L"scan:");
    // scan:. 
    Send PSend18744 = new_Send((Optr)VAR_input_0_0, SMB_scan_, 1, (Optr)slot_PEG_Terminal_terminal);
    Array PThreadedCode18743 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send1, (Optr)PSend18744, (Optr)&t_method_return);
    Method PMethod18741 = new_Method_with(PArray18742, empty_Array, empty_Array, PThreadedCode18743, 1, PSend18744);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod18741, PEG_Terminal_Class);
    store_method(PEG_Terminal_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGTerminal_layout() {
    layout_PEG_Terminal_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_Terminal_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_Terminal_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_Terminal_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_Terminal_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_Terminal_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Terminal = new_Symbol(L"Terminal");
    slot_PEG_Terminal_terminal = (Optr)new_Slot(0, L"terminal");
    layout_PEG_Terminal = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_Terminal)->values[0] = slot_PEG_Terminal_terminal; // terminal 
    PEG_Terminal_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_Terminal_Class_class);
    PEG_Terminal_Class->layout = layout_PEG_Terminal;
    PEG_Terminal_Class->name = SMB_Terminal;
    
}

void init_PEG_PEGTerminal_methods() {
    init_SMB_initialize_();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    
}