#include <lib/class/Smalltalk/Compiler/CompilationFailure.h>


Optr layout_Smalltalk_Compiler_CompilationFailure_Class_class;
Optr slot_Smalltalk_Compiler_CompilationFailure_message;
Optr layout_Smalltalk_Compiler_CompilationFailure;


static void init_SMB_message_() {
    Symbol SMB_message_ = new_Symbol(L"message:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray13546 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13548 = new_Assign((Optr)slot_Smalltalk_Compiler_CompilationFailure_message, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13547 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13548, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13545 = new_Method_with(PArray13546, empty_Array, empty_Array, PThreadedCode13547, 2, PAssign13548, self);
    
    MethodClosure MC_SMB_message_ = new_MethodClosure((Method)PMethod13545, Smalltalk_Compiler_CompilationFailure_Class);
=======
    Array PArray13512 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13514 = new_Assign((Optr)slot_Smalltalk_Compiler_CompilationFailure_message, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13513 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13514, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13511 = new_Method_with(PArray13512, empty_Array, empty_Array, PThreadedCode13513, 2, PAssign13514, self);
    
    MethodClosure MC_SMB_message_ = new_MethodClosure((Method)PMethod13511, Smalltalk_Compiler_CompilationFailure_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_CompilationFailure_Class, SMB_message_, MC_SMB_message_);
}


static void init_SMB_warnMessageOn_() {
    Symbol SMB_warnMessageOn_ = new_Symbol(L"warnMessageOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
    Array PArray13550 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend13552 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_Compiler_CompilationFailure_message);
    Array PThreadedCode13551 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilationFailure_message, (Optr)&t_send1, (Optr)PSend13552, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13549 = new_Method_with(PArray13550, empty_Array, empty_Array, PThreadedCode13551, 2, PSend13552, self);
    
    MethodClosure MC_SMB_warnMessageOn_ = new_MethodClosure((Method)PMethod13549, Smalltalk_Compiler_CompilationFailure_Class);
=======
    Array PArray13516 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend13518 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_Compiler_CompilationFailure_message);
    Array PThreadedCode13517 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilationFailure_message, (Optr)&t_send1, (Optr)PSend13518, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13515 = new_Method_with(PArray13516, empty_Array, empty_Array, PThreadedCode13517, 2, PSend13518, self);
    
    MethodClosure MC_SMB_warnMessageOn_ = new_MethodClosure((Method)PMethod13515, Smalltalk_Compiler_CompilationFailure_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_CompilationFailure_Class, SMB_warnMessageOn_, MC_SMB_warnMessageOn_);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
<<<<<<< HEAD
    Array PThreadedCode13554 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilationFailure_message, (Optr)&t_method_return);
    Method PMethod13553 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13554, 1, slot_Smalltalk_Compiler_CompilationFailure_message);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod13553, Smalltalk_Compiler_CompilationFailure_Class);
=======
    Array PThreadedCode13520 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilationFailure_message, (Optr)&t_method_return);
    Method PMethod13519 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13520, 1, slot_Smalltalk_Compiler_CompilationFailure_message);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod13519, Smalltalk_Compiler_CompilationFailure_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_CompilationFailure_Class, SMB_message, MC_SMB_message);
}

void init_Smalltalk_Compiler_PCompilationFailure_layout() {
    layout_Smalltalk_Compiler_CompilationFailure_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_Compiler_CompilationFailure_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_Compiler_CompilationFailure_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_Compiler_CompilationFailure_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_Compiler_CompilationFailure_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_Compiler_CompilationFailure_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_CompilationFailure = new_Symbol(L"CompilationFailure");
    slot_Smalltalk_Compiler_CompilationFailure_message = (Optr)new_Slot(3, L"message");
    layout_Smalltalk_Compiler_CompilationFailure = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Smalltalk_Compiler_CompilationFailure)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    ((Array)layout_Smalltalk_Compiler_CompilationFailure)->values[1] = slot_Smalltalk_Compiler_CompilerException_target; // target 
    ((Array)layout_Smalltalk_Compiler_CompilationFailure)->values[2] = slot_Smalltalk_Compiler_CompilerException_method; // method 
    ((Array)layout_Smalltalk_Compiler_CompilationFailure)->values[3] = slot_Smalltalk_Compiler_CompilationFailure_message; // message 
    Smalltalk_Compiler_CompilationFailure_Class = (Class)new_Class(Smalltalk_Compiler_CompilerException_Class, layout_Smalltalk_Compiler_CompilationFailure_Class_class);
    Smalltalk_Compiler_CompilationFailure_Class->layout = layout_Smalltalk_Compiler_CompilationFailure;
    Smalltalk_Compiler_CompilationFailure_Class->name = SMB_CompilationFailure;
    
}

void init_Smalltalk_Compiler_PCompilationFailure_methods() {
    init_SMB_message_();
    init_SMB_warnMessageOn_();
    init_SMB_message();
    
}