#include <lib/class/Inspector/Void.h>


Optr layout_Inspector_Void_Class_class;


static void init_SMB_inspect() {
    /*
    inspect
    */
    Symbol SMB_inspect = new_Symbol(L"inspect");
<<<<<<< HEAD
    Array PThreadedCode12387 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod12386 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12387, 1, self);
    
    MethodClosure MC_SMB_inspect = new_MethodClosure((Method)PMethod12386, Inspector_Void_Class);
=======
    Array PThreadedCode12353 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod12352 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12353, 1, self);
    
    MethodClosure MC_SMB_inspect = new_MethodClosure((Method)PMethod12352, Inspector_Void_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Inspector_Void_Class, SMB_inspect, MC_SMB_inspect);
}


static void init_SMB_doesNotUnderstand_() {
    Symbol SMB_doesNotUnderstand_ = new_Symbol(L"doesNotUnderstand:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
<<<<<<< HEAD
    Array PArray12389 = new_Array_with(1, (Optr)VAR_aMessage_0_0);
    Array PThreadedCode12390 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod12388 = new_Method_with(PArray12389, empty_Array, empty_Array, PThreadedCode12390, 1, self);
    
    MethodClosure MC_SMB_doesNotUnderstand_ = new_MethodClosure((Method)PMethod12388, Inspector_Void_Class);
=======
    Array PArray12355 = new_Array_with(1, (Optr)VAR_aMessage_0_0);
    Array PThreadedCode12356 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod12354 = new_Method_with(PArray12355, empty_Array, empty_Array, PThreadedCode12356, 1, self);
    
    MethodClosure MC_SMB_doesNotUnderstand_ = new_MethodClosure((Method)PMethod12354, Inspector_Void_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Inspector_Void_Class, SMB_doesNotUnderstand_, MC_SMB_doesNotUnderstand_);
}


static void init_class_SMB_inspect() {
    Symbol SMB_inspect = new_Symbol(L"inspect");
<<<<<<< HEAD
    Array PThreadedCode12392 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod12391 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12392, 1, self);
    
    MethodClosure MC_SMB_inspect = new_MethodClosure((Method)PMethod12391, HEADER(Inspector_Void_Class));
=======
    Array PThreadedCode12358 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod12357 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12358, 1, self);
    
    MethodClosure MC_SMB_inspect = new_MethodClosure((Method)PMethod12357, HEADER(Inspector_Void_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Inspector_Void_Class), SMB_inspect, MC_SMB_inspect);
}

void init_Inspector_PVoid_layout() {
    layout_Inspector_Void_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Inspector_Void_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Inspector_Void_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Inspector_Void_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Inspector_Void_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Inspector_Void_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Void = new_Symbol(L"Void");
    Inspector_Void_Class = (Class)new_Class(Object_Class, layout_Inspector_Void_Class_class);
    Inspector_Void_Class->layout = empty_object_layout;
    Inspector_Void_Class->name = SMB_Void;
    
}

void init_Inspector_PVoid_methods() {
    init_SMB_inspect();
    init_SMB_doesNotUnderstand_();
    init_class_SMB_inspect();
    
}