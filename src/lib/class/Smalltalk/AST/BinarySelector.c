#include <lib/class/Smalltalk/AST/BinarySelector.h>


Optr layout_Smalltalk_AST_BinarySelector_Class_class;
Optr layout_Smalltalk_AST_BinarySelector;


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
<<<<<<< HEAD
    Array PArray15653 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBinarySelector_ = new_Symbol(L"visitBinarySelector:");
    // visitBinarySelector:. 
    Send PSend15655 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBinarySelector_, 1, (Optr)self);
    Array PThreadedCode15654 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15655, (Optr)&t_method_return);
    Method PMethod15652 = new_Method_with(PArray15653, empty_Array, empty_Array, PThreadedCode15654, 1, PSend15655);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15652, Smalltalk_AST_BinarySelector_Class);
=======
    Array PArray15619 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBinarySelector_ = new_Symbol(L"visitBinarySelector:");
    // visitBinarySelector:. 
    Send PSend15621 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBinarySelector_, 1, (Optr)self);
    Array PThreadedCode15620 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15621, (Optr)&t_method_return);
    Method PMethod15618 = new_Method_with(PArray15619, empty_Array, empty_Array, PThreadedCode15620, 1, PSend15621);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15618, Smalltalk_AST_BinarySelector_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_BinarySelector_Class, SMB_accept_, MC_SMB_accept_);
}

void init_Smalltalk_AST_ASTBinarySelector_layout() {
    layout_Smalltalk_AST_BinarySelector_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_BinarySelector_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_BinarySelector_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_BinarySelector_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_BinarySelector_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_BinarySelector_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_BinarySelector = new_Symbol(L"BinarySelector");
    layout_Smalltalk_AST_BinarySelector = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Smalltalk_AST_BinarySelector)->values[0] = slot_Smalltalk_AST_Selector_selector; // selector 
    Smalltalk_AST_BinarySelector_Class = (Class)new_Class(Smalltalk_AST_Selector_Class, layout_Smalltalk_AST_BinarySelector_Class_class);
    Smalltalk_AST_BinarySelector_Class->layout = layout_Smalltalk_AST_BinarySelector;
    Smalltalk_AST_BinarySelector_Class->name = SMB_BinarySelector;
    
}

void init_Smalltalk_AST_ASTBinarySelector_methods() {
    init_SMB_accept_();
    
}