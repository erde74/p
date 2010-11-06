#include <lib/class/Shell/ReadLine/DoubleLink.h>


Optr layout_Shell_ReadLine_DoubleLink_Class_class;
Optr slot_Shell_ReadLine_DoubleLink_value;
Optr slot_Shell_ReadLine_DoubleLink_previous;
Optr layout_Shell_ReadLine_DoubleLink;


static void init_SMB_previous_() {
    Symbol SMB_previous_ = new_Symbol(L"previous:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray18381 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign18383 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLink_previous, (Optr)VAR_anObject_0_0);
    Array PThreadedCode18382 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign18383, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18380 = new_Method_with(PArray18381, empty_Array, empty_Array, PThreadedCode18382, 2, PAssign18383, self);
    
    MethodClosure MC_SMB_previous_ = new_MethodClosure((Method)PMethod18380, Shell_ReadLine_DoubleLink_Class);
    store_method(Shell_ReadLine_DoubleLink_Class, SMB_previous_, MC_SMB_previous_);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    Array PThreadedCode18385 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLink_value, (Optr)&t_method_return);
    Method PMethod18384 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18385, 1, slot_Shell_ReadLine_DoubleLink_value);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PMethod18384, Shell_ReadLine_DoubleLink_Class);
    store_method(Shell_ReadLine_DoubleLink_Class, SMB_value, MC_SMB_value);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_v_0_0 = new_Variable_named(L"v", 0);
    Array PArray18387 = new_Array_with(1, (Optr)VAR_v_0_0);
    Assign PAssign18389 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLink_value, (Optr)VAR_v_0_0);
    Array PThreadedCode18388 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign18389, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18386 = new_Method_with(PArray18387, empty_Array, empty_Array, PThreadedCode18388, 2, PAssign18389, self);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod18386, Shell_ReadLine_DoubleLink_Class);
    store_method(Shell_ReadLine_DoubleLink_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_previous() {
    Symbol SMB_previous = new_Symbol(L"previous");
    Array PThreadedCode18391 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLink_previous, (Optr)&t_method_return);
    Method PMethod18390 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18391, 1, slot_Shell_ReadLine_DoubleLink_previous);
    
    MethodClosure MC_SMB_previous = new_MethodClosure((Method)PMethod18390, Shell_ReadLine_DoubleLink_Class);
    store_method(Shell_ReadLine_DoubleLink_Class, SMB_previous, MC_SMB_previous);
}

void init_Shell_ReadLine_PDoubleLink_layout() {
    layout_Shell_ReadLine_DoubleLink_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Shell_ReadLine_DoubleLink_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Shell_ReadLine_DoubleLink_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Shell_ReadLine_DoubleLink_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Shell_ReadLine_DoubleLink_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Shell_ReadLine_DoubleLink_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_DoubleLink = new_Symbol(L"DoubleLink");
    slot_Shell_ReadLine_DoubleLink_value = (Optr)new_Slot(1, L"value");
    slot_Shell_ReadLine_DoubleLink_previous = (Optr)new_Slot(2, L"previous");
    layout_Shell_ReadLine_DoubleLink = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Shell_ReadLine_DoubleLink)->values[0] = slot_Shell_ReadLine_StartLink_next; // next 
    ((Array)layout_Shell_ReadLine_DoubleLink)->values[1] = slot_Shell_ReadLine_DoubleLink_value; // value 
    ((Array)layout_Shell_ReadLine_DoubleLink)->values[2] = slot_Shell_ReadLine_DoubleLink_previous; // previous 
    Shell_ReadLine_DoubleLink_Class = (Class)new_Class(Shell_ReadLine_StartLink_Class, layout_Shell_ReadLine_DoubleLink_Class_class);
    Shell_ReadLine_DoubleLink_Class->layout = layout_Shell_ReadLine_DoubleLink;
    Shell_ReadLine_DoubleLink_Class->name = SMB_DoubleLink;
    
}

void init_Shell_ReadLine_PDoubleLink_methods() {
    init_SMB_previous_();
    init_SMB_value();
    init_SMB_value_();
    init_SMB_previous();
    
}