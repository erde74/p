#include <lib/class/Kernel/AST/AssignmentFailure.h>


Optr layout_Kernel_AST_AssignmentFailure_Class_class;
Optr slot_Kernel_AST_AssignmentFailure_constant;
Optr slot_Kernel_AST_AssignmentFailure_object;
Optr layout_Kernel_AST_AssignmentFailure;


static void init_SMB_object_() {
    Symbol SMB_object_ = new_Symbol(L"object:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4866 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4868 = new_Assign((Optr)slot_Kernel_AST_AssignmentFailure_object, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4867 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4868, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4865 = new_Method_with(PArray4866, empty_Array, empty_Array, PThreadedCode4867, 2, PAssign4868, self);
    
    MethodClosure MC_SMB_object_ = new_MethodClosure((Method)PMethod4865, Kernel_AST_AssignmentFailure_Class);
    store_method(Kernel_AST_AssignmentFailure_Class, SMB_object_, MC_SMB_object_);
}


static void init_SMB_object() {
    Symbol SMB_object = new_Symbol(L"object");
    Array PThreadedCode4870 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AssignmentFailure_object, (Optr)&t_method_return);
    Method PMethod4869 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4870, 1, slot_Kernel_AST_AssignmentFailure_object);
    
    MethodClosure MC_SMB_object = new_MethodClosure((Method)PMethod4869, Kernel_AST_AssignmentFailure_Class);
    store_method(Kernel_AST_AssignmentFailure_Class, SMB_object, MC_SMB_object);
}


static void init_SMB_constant() {
    Symbol SMB_constant = new_Symbol(L"constant");
    Array PThreadedCode4872 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AssignmentFailure_constant, (Optr)&t_method_return);
    Method PMethod4871 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4872, 1, slot_Kernel_AST_AssignmentFailure_constant);
    
    MethodClosure MC_SMB_constant = new_MethodClosure((Method)PMethod4871, Kernel_AST_AssignmentFailure_Class);
    store_method(Kernel_AST_AssignmentFailure_Class, SMB_constant, MC_SMB_constant);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray4874 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_4876 = new_String(L"Failed assigning to ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_4876_Const = new_Constant((Optr)string_4876);
    // <<. 
    Send PSend4877 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_4876_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend4878 = new_Send((Optr)slot_Kernel_AST_AssignmentFailure_constant, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_4879 = new_String(L": ");
    Constant string_4879_Const = new_Constant((Optr)string_4879);
    // <<. 
    Send PSend4880 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_4879_Const);
    // printOn:. 
    Send PSend4881 = new_Send((Optr)slot_Kernel_AST_AssignmentFailure_object, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode4875 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_4876, (Optr)&t_send1, (Optr)PSend4877, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AssignmentFailure_constant, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend4878, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_4879, (Optr)&t_send1, (Optr)PSend4880, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AssignmentFailure_object, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend4881, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4873 = new_Method_with(PArray4874, empty_Array, empty_Array, PThreadedCode4875, 5, PSend4877, PSend4878, PSend4880, PSend4881, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod4873, Kernel_AST_AssignmentFailure_Class);
    store_method(Kernel_AST_AssignmentFailure_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_constant_() {
    Symbol SMB_constant_ = new_Symbol(L"constant:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4883 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4885 = new_Assign((Optr)slot_Kernel_AST_AssignmentFailure_constant, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4884 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4885, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4882 = new_Method_with(PArray4883, empty_Array, empty_Array, PThreadedCode4884, 2, PAssign4885, self);
    
    MethodClosure MC_SMB_constant_ = new_MethodClosure((Method)PMethod4882, Kernel_AST_AssignmentFailure_Class);
    store_method(Kernel_AST_AssignmentFailure_Class, SMB_constant_, MC_SMB_constant_);
}

void init_Kernel_AST_PAssignmentFailure_layout() {
    layout_Kernel_AST_AssignmentFailure_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_AST_AssignmentFailure_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_AST_AssignmentFailure_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_AST_AssignmentFailure_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_AST_AssignmentFailure_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_AST_AssignmentFailure_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_AssignmentFailure = new_Symbol(L"AssignmentFailure");
    slot_Kernel_AST_AssignmentFailure_constant = (Optr)new_Slot(1, L"constant");
    slot_Kernel_AST_AssignmentFailure_object = (Optr)new_Slot(2, L"object");
    layout_Kernel_AST_AssignmentFailure = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Kernel_AST_AssignmentFailure)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    ((Array)layout_Kernel_AST_AssignmentFailure)->values[1] = slot_Kernel_AST_AssignmentFailure_constant; // constant 
    ((Array)layout_Kernel_AST_AssignmentFailure)->values[2] = slot_Kernel_AST_AssignmentFailure_object; // object 
    Kernel_AST_AssignmentFailure_Class = (Class)new_Class(Kernel_Exception_Exception_Class, layout_Kernel_AST_AssignmentFailure_Class_class);
    Kernel_AST_AssignmentFailure_Class->layout = layout_Kernel_AST_AssignmentFailure;
    Kernel_AST_AssignmentFailure_Class->name = SMB_AssignmentFailure;
    
}

void init_Kernel_AST_PAssignmentFailure_methods() {
    init_SMB_object_();
    init_SMB_object();
    init_SMB_constant();
    init_SMB_warnOn_();
    init_SMB_constant_();
    
}