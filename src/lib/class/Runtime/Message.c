#include <lib/class/Runtime/Message.h>


Optr layout_Runtime_Message_Class_class;
Optr slot_Runtime_Message_selector;
Optr layout_Runtime_Message;


static void init_SMB_selector() {
    Symbol SMB_selector = new_Symbol(L"selector");
    Array PThreadedCode7770 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_method_return);
    Method PMethod7769 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7770, 1, slot_Runtime_Message_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod7769, Message_Class);
    store_method(Message_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend7773 = new_Send((Optr)Array_classReference, SMB_newFrom_, 1, (Optr)self);
    Array PThreadedCode7772 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7773, (Optr)&t_method_return);
    Method PMethod7771 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7772, 1, PSend7773);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod7771, Message_Class);
    store_method(Message_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_sendTo_() {
    Symbol SMB_sendTo_ = new_Symbol(L"sendTo:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Array PArray7775 = new_Array_with(1, (Optr)VAR_receiver_0_0);
    Symbol SMB_perform_with_ = new_Symbol(L"perform:with:");
    // perform:with:. 
    Send PSend7777 = new_Send((Optr)VAR_receiver_0_0, SMB_perform_with_, 2, (Optr)slot_Runtime_Message_selector, (Optr)self);
    Array PThreadedCode7776 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend7777, (Optr)&t_method_return);
    Method PMethod7774 = new_Method_with(PArray7775, empty_Array, empty_Array, PThreadedCode7776, 1, PSend7777);
    
    MethodClosure MC_SMB_sendTo_ = new_MethodClosure((Method)PMethod7774, Message_Class);
    store_method(Message_Class, SMB_sendTo_, MC_SMB_sendTo_);
}


static void init_SMB_withIndexDo_() {
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    Variable VAR_elementAndIndexBlock_0_0 = new_Variable_named(L"elementAndIndexBlock", 0);
    Array PArray7779 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7781 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray7783 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7785 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend7786 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend7785, (Optr)VAR_index_1_0);
    Array PThreadedCode7784 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend7785, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend7786, (Optr)&t_method_return);
    Block PBlock7782 = new_Block_with(PArray7783, empty_Array, PThreadedCode7784, 1, PSend7786);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7787 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7781, (Optr)PBlock7782);
    Array PThreadedCode7780 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7781, (Optr)&t_push_closure, (Optr)PBlock7782, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7787, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7778 = new_Method_with(PArray7779, empty_Array, empty_Array, PThreadedCode7780, 2, PSend7787, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod7778, Message_Class);
    store_method(Message_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray7789 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Assign PAssign7791 = new_Assign((Optr)slot_Runtime_Message_selector, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode7790 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7791, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7788 = new_Method_with(PArray7789, empty_Array, empty_Array, PThreadedCode7790, 2, PAssign7791, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod7788, Message_Class);
    store_method(Message_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray7793 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7796 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7798 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend7799 = new_Send((Optr)VAR_other_0_0, SMB_species, 0);
    // =. 
    Send PSend7800 = new_Send((Optr)PSend7798, SMB__equals_, 1, (Optr)PSend7799);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7804 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7803 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7804, (Optr)&t_block_return);
    Block PBlock7802 = new_Block_with(empty_Array, empty_Array, PThreadedCode7803, 1, PSend7804);
    // ifFalse:. 
    Send PSend7801 = new_Send((Optr)PSend7800, SMB_ifFalse_, 1, (Optr)PBlock7802);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7805 = new_Send((Optr)self, SMB_size, 0);
    // size. 
    Send PSend7806 = new_Send((Optr)VAR_other_0_0, SMB_size, 0);
    // =. 
    Send PSend7807 = new_Send((Optr)PSend7805, SMB__equals_, 1, (Optr)PSend7806);
    // escape:. 
    Send PSend7811 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7810 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7811, (Optr)&t_block_return);
    Block PBlock7809 = new_Block_with(empty_Array, empty_Array, PThreadedCode7810, 1, PSend7811);
    // ifFalse:. 
    Send PSend7808 = new_Send((Optr)PSend7807, SMB_ifFalse_, 1, (Optr)PBlock7809);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend7812 = new_Send((Optr)self, SMB_selector, 0);
    // selector. 
    Send PSend7813 = new_Send((Optr)VAR_other_0_0, SMB_selector, 0);
    // =. 
    Send PSend7814 = new_Send((Optr)PSend7812, SMB__equals_, 1, (Optr)PSend7813);
    // escape:. 
    Send PSend7818 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7817 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7818, (Optr)&t_block_return);
    Block PBlock7816 = new_Block_with(empty_Array, empty_Array, PThreadedCode7817, 1, PSend7818);
    // ifFalse:. 
    Send PSend7815 = new_Send((Optr)PSend7814, SMB_ifFalse_, 1, (Optr)PBlock7816);
    Variable VAR_arg_2_0 = new_Variable_named(L"arg", 2);
    Variable VAR_index_2_1 = new_Variable_named(L"index", 2);
    Array PArray7820 = new_Array_with(2, (Optr)VAR_arg_2_0, (Optr)VAR_index_2_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7822 = new_Send((Optr)VAR_other_0_0, SMB_at_, 1, (Optr)VAR_index_2_1);
    // =. 
    Send PSend7823 = new_Send((Optr)VAR_arg_2_0, SMB__equals_, 1, (Optr)PSend7822);
    // escape:. 
    Send PSend7827 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7826 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7827, (Optr)&t_block_return);
    Block PBlock7825 = new_Block_with(empty_Array, empty_Array, PThreadedCode7826, 1, PSend7827);
    // ifFalse:. 
    Send PSend7824 = new_Send((Optr)PSend7823, SMB_ifFalse_, 1, (Optr)PBlock7825);
    Array PThreadedCode7821 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_arg_2_0, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_push_variable, (Optr)VAR_index_2_1, (Optr)&t_send1, (Optr)PSend7822, (Optr)&t_send1, (Optr)PSend7823, (Optr)&t_send_ifFalse_, (Optr)PSend7824, (Optr)PBlock7825, (Optr)&t_method_return);
    Block PBlock7819 = new_Block_with(PArray7820, empty_Array, PThreadedCode7821, 1, PSend7824);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend7828 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock7819);
    Array PThreadedCode7797 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7798, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend7799, (Optr)&t_send1, (Optr)PSend7800, (Optr)&t_send_ifFalse_, (Optr)PSend7801, (Optr)PBlock7802, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7805, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend7806, (Optr)&t_send1, (Optr)PSend7807, (Optr)&t_send_ifFalse_, (Optr)PSend7808, (Optr)PBlock7809, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7812, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend7813, (Optr)&t_send1, (Optr)PSend7814, (Optr)&t_send_ifFalse_, (Optr)PSend7815, (Optr)PBlock7816, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock7819, (Optr)&t_send1, (Optr)PSend7828, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock7795 = new_Block_with(PArray7796, empty_Array, PThreadedCode7797, 5, PSend7801, PSend7808, PSend7815, PSend7828, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7829 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7795);
    Array PThreadedCode7794 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7795, (Optr)&t_send1, (Optr)PSend7829, (Optr)&t_method_return);
    Method PMethod7792 = new_Method_with(PArray7793, empty_Array, empty_Array, PThreadedCode7794, 1, PSend7829);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7792, Message_Class);
    store_method(Message_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray7831 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Character char_2665 = new_Character(L'#');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2665_Const = new_Constant((Optr)char_2665);
    // <<. 
    Send PSend7833 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)char_2665_Const);
    // <<. 
    Send PSend7834 = new_Send((Optr)PSend7833, SMB__shiftLeft_, 1, (Optr)slot_Runtime_Message_selector);
    String string_7835 = new_String(L" (");
    Constant string_7835_Const = new_Constant((Optr)string_7835);
    // <<. 
    Send PSend7836 = new_Send((Optr)PSend7834, SMB__shiftLeft_, 1, (Optr)string_7835_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7837 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend7838 = new_Send((Optr)PSend7837, SMB_asString, 0);
    // <<. 
    Send PSend7839 = new_Send((Optr)PSend7836, SMB__shiftLeft_, 1, (Optr)PSend7838);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend7840 = new_Send((Optr)PSend7839, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode7832 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)char_2665, (Optr)&t_send1, (Optr)PSend7833, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_send1, (Optr)PSend7834, (Optr)&t_push1, (Optr)string_7835, (Optr)&t_send1, (Optr)PSend7836, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7837, (Optr)&t_send0, (Optr)PSend7838, (Optr)&t_send1, (Optr)PSend7839, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend7840, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7830 = new_Method_with(PArray7831, empty_Array, empty_Array, PThreadedCode7832, 2, PSend7840, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod7830, Message_Class);
    store_method(Message_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_argument() {
    Symbol SMB_argument = new_Symbol(L"argument");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend7843 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    Array PThreadedCode7842 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7843, (Optr)&t_method_return);
    Method PMethod7841 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7842, 1, PSend7843);
    
    MethodClosure MC_SMB_argument = new_MethodClosure((Method)PMethod7841, Message_Class);
    store_method(Message_Class, SMB_argument, MC_SMB_argument);
}


static void init_SMB_arguments() {
    Symbol SMB_arguments = new_Symbol(L"arguments");
    Array PThreadedCode7845 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7844 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7845, 1, self);
    
    MethodClosure MC_SMB_arguments = new_MethodClosure((Method)PMethod7844, Message_Class);
    store_method(Message_Class, SMB_arguments, MC_SMB_arguments);
}

void init_Runtime_PMessage_layout() {
    layout_Runtime_Message_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Runtime_Message_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Runtime_Message_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Runtime_Message_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Runtime_Message_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Runtime_Message_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Message = new_Symbol(L"Message");
    slot_Runtime_Message_selector = (Optr)new_Slot(0, L"selector");
    layout_Runtime_Message = (Optr)create_layout_with_vars(ArrayLayout_Class, 1);
    ((Array)layout_Runtime_Message)->values[0] = slot_Runtime_Message_selector;
    Message_Class = (Class)new_Class(Collections_Abstract_ArrayedCollection_Class, layout_Runtime_Message_Class_class);
    Message_Class->layout = layout_Runtime_Message;
    Message_Class->name = SMB_Message;
    
}

void init_Runtime_PMessage_methods() {
    init_SMB_selector();
    init_SMB_asArray();
    init_SMB_sendTo_();
    init_SMB_withIndexDo_();
    init_SMB_selector_();
    init_SMB__equals_();
    init_SMB_printOn_();
    init_SMB_argument();
    init_SMB_arguments();
    
}