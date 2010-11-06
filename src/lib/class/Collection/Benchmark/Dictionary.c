#include <lib/class/Collection/Benchmark/Dictionary.h>


Optr layout_Collection_Benchmark_Dictionary_Class_class;
Optr layout_Collection_Benchmark_Dictionary;


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Super PSuper7363 = new_Super(SMB_setUp, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend7366 = new_Send((Optr)self, SMB_dictSize, 0);
    // new:. 
    Send PSend7365 = new_Send((Optr)Dictionary_classReference, SMB_new_, 1, (Optr)PSend7366);
    Assign PAssign7364 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)PSend7365);
    // dictSize. 
    Send PSend7367 = new_Send((Optr)self, SMB_dictSize, 0);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7369 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7371 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7372 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7373 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_put_, 2, (Optr)PSend7371, (Optr)PSend7372);
    Array PThreadedCode7370 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7371, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7372, (Optr)&t_send2, (Optr)PSend7373, (Optr)&t_method_return);
    Block PBlock7368 = new_Block_with(PArray7369, empty_Array, PThreadedCode7370, 1, PSend7373);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7374 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7367, (Optr)PBlock7368);
    Array PThreadedCode7362 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper7363, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7364, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7366, (Optr)&t_send1, (Optr)PSend7365, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7367, (Optr)&t_push_closure, (Optr)PBlock7368, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7374, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7361 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7362, 4, PSuper7363, PAssign7364, PSend7374, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod7361, Collection_Benchmark_Dictionary_Class);
    store_method(Collection_Benchmark_Dictionary_Class, SMB_setUp, MC_SMB_setUp);
}

void init_Collection_Benchmark_PBDictionary_layout() {
    layout_Collection_Benchmark_Dictionary_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_Benchmark_Dictionary_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_Benchmark_Dictionary_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_Benchmark_Dictionary_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_Benchmark_Dictionary_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_Benchmark_Dictionary_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Dictionary = new_Symbol(L"Dictionary");
    layout_Collection_Benchmark_Dictionary = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Collection_Benchmark_Dictionary)->values[0] = slot_PBenchmark_AbstractBenchmark_probeCount; // probeCount 
    ((Array)layout_Collection_Benchmark_Dictionary)->values[1] = slot_PBenchmark_BenchmarkSuite_runs; // runs 
    ((Array)layout_Collection_Benchmark_Dictionary)->values[2] = slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict; // dict 
    ((Array)layout_Collection_Benchmark_Dictionary)->values[3] = slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dictSize; // dictSize 
    ((Array)layout_Collection_Benchmark_Dictionary)->values[4] = slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock; // keyBlock 
    ((Array)layout_Collection_Benchmark_Dictionary)->values[5] = slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock; // valueBlock 
    Collection_Benchmark_Dictionary_Class = (Class)new_Class(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, layout_Collection_Benchmark_Dictionary_Class_class);
    Collection_Benchmark_Dictionary_Class->layout = layout_Collection_Benchmark_Dictionary;
    Collection_Benchmark_Dictionary_Class->name = SMB_Dictionary;
    
}

void init_Collection_Benchmark_PBDictionary_methods() {
    init_SMB_setUp();
    
}