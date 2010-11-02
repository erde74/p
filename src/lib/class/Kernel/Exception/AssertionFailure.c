#include <lib/class/Kernel/Exception/AssertionFailure.h>


Optr layout_Kernel_Exception_AssertionFailure_Class_class;
Optr slot_Kernel_Exception_AssertionFailure_message;
Optr layout_Kernel_Exception_AssertionFailure;


static void init_SMB_message_() {
    Symbol SMB_message_ = new_Symbol(L"message:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray937 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign939 = new_Assign((Optr)slot_Kernel_Exception_AssertionFailure_message, (Optr)VAR_anObject_0_0);
    Array PThreadedCode938 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign939, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod936 = new_Method_with(PArray937, empty_Array, empty_Array, PThreadedCode938, 2, PAssign939, self);
    
    MethodClosure MC_SMB_message_ = new_MethodClosure((Method)PMethod936, AssertionFailure_Class);
    store_method(AssertionFailure_Class, SMB_message_, MC_SMB_message_);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray941 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_943 = new_String(L"Assertion failed");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_943_Const = new_Constant((Optr)string_943);
    // <<. 
    Send PSend944 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_943_Const);
    String string_947 = new_String(L": ");
    Constant string_947_Const = new_Constant((Optr)string_947);
    // <<. 
    Send PSend948 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_947_Const);
    // <<. 
    Send PSend949 = new_Send((Optr)PSend948, SMB__shiftLeft_, 1, (Optr)slot_Kernel_Exception_AssertionFailure_message);
    Array PThreadedCode946 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_947, (Optr)&t_send1, (Optr)PSend948, (Optr)&t_push_slot, (Optr)slot_Kernel_Exception_AssertionFailure_message, (Optr)&t_send1, (Optr)PSend949, (Optr)&t_block_return);
    Block PBlock945 = new_Block_with(empty_Array, empty_Array, PThreadedCode946, 1, PSend949);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend950 = new_Send((Optr)slot_Kernel_Exception_AssertionFailure_message, SMB_ifNotNil_, 1, (Optr)PBlock945);
    Array PThreadedCode942 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_943, (Optr)&t_send1, (Optr)PSend944, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Exception_AssertionFailure_message, (Optr)&t_push_closure, (Optr)PBlock945, (Optr)&t_send1, (Optr)PSend950, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod940 = new_Method_with(PArray941, empty_Array, empty_Array, PThreadedCode942, 3, PSend944, PSend950, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod940, AssertionFailure_Class);
    store_method(AssertionFailure_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    Array PThreadedCode952 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Exception_AssertionFailure_message, (Optr)&t_method_return);
    Method PMethod951 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode952, 1, slot_Kernel_Exception_AssertionFailure_message);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod951, AssertionFailure_Class);
    store_method(AssertionFailure_Class, SMB_message, MC_SMB_message);
}

void init_Kernel_Exception_PAssertionFailure_layout() {
    layout_Kernel_Exception_AssertionFailure_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Exception_AssertionFailure_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Exception_AssertionFailure_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Exception_AssertionFailure_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Exception_AssertionFailure_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Exception_AssertionFailure_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_AssertionFailure = new_Symbol(L"AssertionFailure");
    slot_Kernel_Exception_AssertionFailure_message = (Optr)new_Slot(1, L"message");
    layout_Kernel_Exception_AssertionFailure = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Kernel_Exception_AssertionFailure)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    ((Array)layout_Kernel_Exception_AssertionFailure)->values[1] = slot_Kernel_Exception_AssertionFailure_message; // message 
    AssertionFailure_Class = (Class)new_Class(Kernel_Exception_Exception_Class, layout_Kernel_Exception_AssertionFailure_Class_class);
    AssertionFailure_Class->layout = layout_Kernel_Exception_AssertionFailure;
    AssertionFailure_Class->name = SMB_AssertionFailure;
    
}

void init_Kernel_Exception_PAssertionFailure_methods() {
    init_SMB_message_();
    init_SMB_warnOn_();
    init_SMB_message();
    
}