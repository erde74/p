#include <lib/class/PEG/OrderedChoiceExpression.h>


Optr layout_PEG_OrderedChoiceExpression_Class_class;
Optr slot_PEG_OrderedChoiceExpression_children;
Optr layout_PEG_OrderedChoiceExpression;


static void init_SMB_children() {
    Symbol SMB_children = new_Symbol(L"children");
    Array PThreadedCode19297 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_method_return);
    Method PMethod19296 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19297, 1, slot_PEG_OrderedChoiceExpression_children);
    
    MethodClosure MC_SMB_children = new_MethodClosure((Method)PMethod19296, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_children, MC_SMB_children);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19301 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asArray, 0);
    Assign PAssign19300 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19301);
    Array PThreadedCode19299 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19300, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19301, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19298 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19299, 2, PAssign19300, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod19298, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19305 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign19304 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19305);
    Array PThreadedCode19303 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19304, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend19305, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19302 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19303, 2, PAssign19304, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19302, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19307 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19310 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19312 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19314 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19316 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19317 = new_Send((Optr)PSend19316, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19321 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19320 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19321, (Optr)&t_block_return);
    Block PBlock19319 = new_Block_with(empty_Array, empty_Array, PThreadedCode19320, 1, PSend19321);
    // ifTrue:. 
    Send PSend19318 = new_Send((Optr)PSend19317, SMB_ifTrue_, 1, (Optr)PBlock19319);
    Array PThreadedCode19315 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19316, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19317, (Optr)&t_send_ifTrue_, (Optr)PSend19318, (Optr)PBlock19319, (Optr)&t_method_return);
    Block PBlock19313 = new_Block_with(PArray19314, empty_Array, PThreadedCode19315, 1, PSend19318);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19322 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend19312, (Optr)PBlock19313);
    Array PThreadedCode19311 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19312, (Optr)&t_push_closure, (Optr)PBlock19313, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19322, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock19309 = new_Block_with(PArray19310, empty_Array, PThreadedCode19311, 2, PSend19322, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19323 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19309);
    Array PThreadedCode19308 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19309, (Optr)&t_send1, (Optr)PSend19323, (Optr)&t_method_return);
    Method PMethod19306 = new_Method_with(PArray19307, empty_Array, empty_Array, PThreadedCode19308, 1, PSend19323);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19306, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19325 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19328 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19330 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19332 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19334 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19335 = new_Send((Optr)PSend19334, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19339 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19338 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19339, (Optr)&t_block_return);
    Block PBlock19337 = new_Block_with(empty_Array, empty_Array, PThreadedCode19338, 1, PSend19339);
    // ifTrue:. 
    Send PSend19336 = new_Send((Optr)PSend19335, SMB_ifTrue_, 1, (Optr)PBlock19337);
    Array PThreadedCode19333 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19334, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19335, (Optr)&t_send_ifTrue_, (Optr)PSend19336, (Optr)PBlock19337, (Optr)&t_method_return);
    Block PBlock19331 = new_Block_with(PArray19332, empty_Array, PThreadedCode19333, 1, PSend19336);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19340 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend19330, (Optr)PBlock19331);
    Array PThreadedCode19329 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19330, (Optr)&t_push_closure, (Optr)PBlock19331, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19340, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock19327 = new_Block_with(PArray19328, empty_Array, PThreadedCode19329, 2, PSend19340, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19341 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19327);
    Array PThreadedCode19326 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19327, (Optr)&t_send1, (Optr)PSend19341, (Optr)&t_method_return);
    Method PMethod19324 = new_Method_with(PArray19325, empty_Array, empty_Array, PThreadedCode19326, 1, PSend19341);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19324, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_child_0_0 = new_Variable_named(L"child", 0);
    Array PArray19343 = new_Array_with(1, (Optr)VAR_child_0_0);
    Variable VAR_new_0_1 = new_Variable_named(L"new", 0);
    Variable VAR_convert_0_2 = new_Variable_named(L"convert", 0);
    Array PArray19344 = new_Array_with(2, (Optr)VAR_new_0_1, (Optr)VAR_convert_0_2);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend19346 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_isKindOf_, 1, (Optr)Array_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend19351 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asOrderedCollection, 0);
    Assign PAssign19350 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19351);
    Assign PAssign19352 = new_Assign((Optr)VAR_convert_0_2, (Optr)true_Const);
    Array PThreadedCode19349 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign19350, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19351, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19352, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19348 = new_Block_with(empty_Array, empty_Array, PThreadedCode19349, 2, PAssign19350, PAssign19352);
    // ifTrue:. 
    Send PSend19347 = new_Send((Optr)PSend19346, SMB_ifTrue_, 1, (Optr)PBlock19348);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend19354 = new_Send((Optr)VAR_child_0_0, SMB_asParser, 0);
    Assign PAssign19353 = new_Assign((Optr)VAR_new_0_1, (Optr)PSend19354);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19355 = new_Send((Optr)VAR_new_0_1, SMB_class, 0);
    // class. 
    Send PSend19356 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19357 = new_Send((Optr)PSend19355, SMB__equals_, 1, (Optr)PSend19356);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_children = new_Symbol(L"children");
    // children. 
    Send PSend19361 = new_Send((Optr)VAR_new_0_1, SMB_children, 0);
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray19363 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19365 = new_Send((Optr)VAR_c_1_0, SMB_asChildParser, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend19366 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_add_, 1, (Optr)PSend19365);
    Array PThreadedCode19364 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_send0, (Optr)PSend19365, (Optr)&t_send1, (Optr)PSend19366, (Optr)&t_method_return);
    Block PBlock19362 = new_Block_with(PArray19363, empty_Array, PThreadedCode19364, 1, PSend19366);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend19367 = new_Send((Optr)PSend19361, SMB_do_, 1, (Optr)PBlock19362);
    Array PThreadedCode19360 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19361, (Optr)&t_push_closure, (Optr)PBlock19362, (Optr)&t_send1, (Optr)PSend19367, (Optr)&t_block_return);
    Block PBlock19359 = new_Block_with(empty_Array, empty_Array, PThreadedCode19360, 1, PSend19367);
    // asChildParser. 
    Send PSend19370 = new_Send((Optr)VAR_new_0_1, SMB_asChildParser, 0);
    // add:. 
    Send PSend19371 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_add_, 1, (Optr)PSend19370);
    Array PThreadedCode19369 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19370, (Optr)&t_send1, (Optr)PSend19371, (Optr)&t_block_return);
    Block PBlock19368 = new_Block_with(empty_Array, empty_Array, PThreadedCode19369, 1, PSend19371);
    // ifTrue:ifFalse:. 
    Send PSend19358 = new_Send((Optr)PSend19357, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19359, (Optr)PBlock19368);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend19372 = new_Send((Optr)VAR_convert_0_2, SMB_isNil, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19377 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asArray, 0);
    Assign PAssign19376 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19377);
    Array PThreadedCode19375 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign19376, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19377, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19374 = new_Block_with(empty_Array, empty_Array, PThreadedCode19375, 1, PAssign19376);
    // ifFalse:. 
    Send PSend19373 = new_Send((Optr)PSend19372, SMB_ifFalse_, 1, (Optr)PBlock19374);
    Array PThreadedCode19345 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send1, (Optr)PSend19346, (Optr)&t_send_ifTrue_, (Optr)PSend19347, (Optr)PBlock19348, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19353, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send0, (Optr)PSend19354, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19355, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19356, (Optr)&t_send1, (Optr)PSend19357, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19358, (Optr)PBlock19359, (Optr)PBlock19368, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_convert_0_2, (Optr)&t_send0, (Optr)PSend19372, (Optr)&t_send_ifFalse_, (Optr)PSend19373, (Optr)PBlock19374, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19342 = new_Method_with(PArray19343, PArray19344, empty_Array, PThreadedCode19345, 5, PSend19347, PAssign19353, PSend19358, PSend19373, self);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod19342, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}

void init_PEG_PEGOrderedChoiceExpression_layout() {
    layout_PEG_OrderedChoiceExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_OrderedChoiceExpression = new_Symbol(L"OrderedChoiceExpression");
    slot_PEG_OrderedChoiceExpression_children = (Optr)new_Slot(0, L"children");
    layout_PEG_OrderedChoiceExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_OrderedChoiceExpression)->values[0] = slot_PEG_OrderedChoiceExpression_children; // children 
    PEG_OrderedChoiceExpression_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_OrderedChoiceExpression_Class_class);
    PEG_OrderedChoiceExpression_Class->layout = layout_PEG_OrderedChoiceExpression;
    PEG_OrderedChoiceExpression_Class->name = SMB_OrderedChoiceExpression;
    
}

void init_PEG_PEGOrderedChoiceExpression_methods() {
    init_SMB_children();
    init_SMB_asChildParser();
    init_SMB_initialize();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    init_SMB__lt__equals_();
    
}