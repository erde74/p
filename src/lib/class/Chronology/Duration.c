#include <lib/class/Chronology/Duration.h>


Optr layout_Chronology_Duration_Class_class;
Optr slot_Chronology_Duration_seconds;
Optr layout_Chronology_Duration;


static void init_SMB_minutes() {
    Symbol SMB_minutes = new_Symbol(L"minutes");
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20093 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20094 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20093);
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20095 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20096 = new_Send((Optr)PSend20094, SMB_quo_, 1, (Optr)PSend20095);
    Array PThreadedCode20092 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20093, (Optr)&t_send1, (Optr)PSend20094, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20095, (Optr)&t_send1, (Optr)PSend20096, (Optr)&t_method_return);
    Method PMethod20091 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20092, 1, PSend20096);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20091, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_asSeconds() {
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    Array PThreadedCode20098 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_method_return);
    Method PMethod20097 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20098, 1, slot_Chronology_Duration_seconds);
    
    MethodClosure MC_SMB_asSeconds = new_MethodClosure((Method)PMethod20097, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_asSeconds, MC_SMB_asSeconds);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20101 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20102 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20101);
    Array PThreadedCode20100 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20101, (Optr)&t_send1, (Optr)PSend20102, (Optr)&t_method_return);
    Method PMethod20099 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20100, 1, PSend20102);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20099, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Array PThreadedCode20104 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20103 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20104, 1, self);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20103, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_negated() {
    Symbol SMB_negated = new_Symbol(L"negated");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20107 = new_Send((Optr)self, SMB_class, 0);
    // negated. 
    Send PSend20108 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_negated, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20109 = new_Send((Optr)PSend20107, SMB_seconds_, 1, (Optr)PSend20108);
    Array PThreadedCode20106 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20107, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_send0, (Optr)PSend20108, (Optr)&t_send1, (Optr)PSend20109, (Optr)&t_method_return);
    Method PMethod20105 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20106, 1, PSend20109);
    
    MethodClosure MC_SMB_negated = new_MethodClosure((Method)PMethod20105, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_negated, MC_SMB_negated);
}


static void init_SMB_negative() {
    Symbol SMB_negative = new_Symbol(L"negative");
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend20112 = new_Send((Optr)self, SMB_positive, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend20113 = new_Send((Optr)PSend20112, SMB_not, 0);
    Array PThreadedCode20111 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20112, (Optr)&t_send0, (Optr)PSend20113, (Optr)&t_method_return);
    Method PMethod20110 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20111, 1, PSend20113);
    
    MethodClosure MC_SMB_negative = new_MethodClosure((Method)PMethod20110, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_negative, MC_SMB_negative);
}


static void init_SMB_positive() {
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend20116 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_positive, 0);
    Array PThreadedCode20115 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_send0, (Optr)PSend20116, (Optr)&t_method_return);
    Method PMethod20114 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20115, 1, PSend20116);
    
    MethodClosure MC_SMB_positive = new_MethodClosure((Method)PMethod20114, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_positive, MC_SMB_positive);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20118 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20120 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20121 = new_Send((Optr)VAR_operand_0_0, SMB_asSeconds, 0);
    // +. 
    Send PSend20122 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__plus_, 1, (Optr)PSend20121);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20123 = new_Send((Optr)PSend20120, SMB_seconds_, 1, (Optr)PSend20122);
    Array PThreadedCode20119 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20120, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20121, (Optr)&t_send1, (Optr)PSend20122, (Optr)&t_send1, (Optr)PSend20123, (Optr)&t_method_return);
    Method PMethod20117 = new_Method_with(PArray20118, empty_Array, empty_Array, PThreadedCode20119, 1, PSend20123);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PMethod20117, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20125 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend20127 = new_Send((Optr)VAR_operand_0_0, SMB_negated, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20128 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend20127);
    Array PThreadedCode20126 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20127, (Optr)&t_send1, (Optr)PSend20128, (Optr)&t_method_return);
    Method PMethod20124 = new_Method_with(PArray20125, empty_Array, empty_Array, PThreadedCode20126, 1, PSend20128);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PMethod20124, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB_seconds_() {
    /*
    seconds: seconds
// 	^ self basicNew seconds: seconds
    */
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_secondCount_0_0 = new_Variable_named(L"secondCount", 0);
    Array PArray20130 = new_Array_with(1, (Optr)VAR_secondCount_0_0);
    Assign PAssign20132 = new_Assign((Optr)slot_Chronology_Duration_seconds, (Optr)VAR_secondCount_0_0);
    Array PThreadedCode20131 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20132, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20129 = new_Method_with(PArray20130, empty_Array, empty_Array, PThreadedCode20131, 2, PAssign20132, self);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20129, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_seconds_, MC_SMB_seconds_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_comparand_0_0 = new_Variable_named(L"comparand", 0);
    Array PArray20134 = new_Array_with(1, (Optr)VAR_comparand_0_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend20136 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_comparand_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode20139 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_true);
    Block PBlock20138 = new_Block_with(empty_Array, empty_Array, PThreadedCode20139, 1, true_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20142 = new_Send((Optr)self, SMB_class, 0);
    // class. 
    Send PSend20143 = new_Send((Optr)VAR_comparand_0_0, SMB_class, 0);
    // =. 
    Send PSend20144 = new_Send((Optr)PSend20142, SMB__equals_, 1, (Optr)PSend20143);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20148 = new_Send((Optr)self, SMB_asSeconds, 0);
    // asSeconds. 
    Send PSend20149 = new_Send((Optr)VAR_comparand_0_0, SMB_asSeconds, 0);
    // =. 
    Send PSend20150 = new_Send((Optr)PSend20148, SMB__equals_, 1, (Optr)PSend20149);
    Array PThreadedCode20147 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20148, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend20149, (Optr)&t_send1, (Optr)PSend20150, (Optr)&t_block_return);
    Block PBlock20146 = new_Block_with(empty_Array, empty_Array, PThreadedCode20147, 1, PSend20150);
    Array PThreadedCode20152 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock20151 = new_Block_with(empty_Array, empty_Array, PThreadedCode20152, 1, false_Const);
    // ifTrue:ifFalse:. 
    Send PSend20145 = new_Send((Optr)PSend20144, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20146, (Optr)PBlock20151);
    Array PThreadedCode20141 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20142, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend20143, (Optr)&t_send1, (Optr)PSend20144, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20145, (Optr)PBlock20146, (Optr)PBlock20151, (Optr)&t_block_return);
    Block PBlock20140 = new_Block_with(empty_Array, empty_Array, PThreadedCode20141, 1, PSend20145);
    // ifTrue:ifFalse:. 
    Send PSend20137 = new_Send((Optr)PSend20136, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20138, (Optr)PBlock20140);
    Array PThreadedCode20135 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send1, (Optr)PSend20136, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20137, (Optr)PBlock20138, (Optr)PBlock20140, (Optr)&t_method_return);
    Method PMethod20133 = new_Method_with(PArray20134, empty_Array, empty_Array, PThreadedCode20135, 1, PSend20137);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod20133, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20154 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_d_0_1 = new_Variable_named(L"d", 0);
    Variable VAR_h_0_2 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_3 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_4 = new_Variable_named(L"s", 0);
    Array PArray20155 = new_Array_with(4, (Optr)VAR_d_0_1, (Optr)VAR_h_0_2, (Optr)VAR_m_0_3, (Optr)VAR_s_0_4);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20159 = new_Send((Optr)self, SMB_days, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend20158 = new_Send((Optr)PSend20159, SMB_abs, 0);
    Assign PAssign20157 = new_Assign((Optr)VAR_d_0_1, (Optr)PSend20158);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20162 = new_Send((Optr)self, SMB_hours, 0);
    // abs. 
    Send PSend20161 = new_Send((Optr)PSend20162, SMB_abs, 0);
    Assign PAssign20160 = new_Assign((Optr)VAR_h_0_2, (Optr)PSend20161);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20165 = new_Send((Optr)self, SMB_minutes, 0);
    // abs. 
    Send PSend20164 = new_Send((Optr)PSend20165, SMB_abs, 0);
    Assign PAssign20163 = new_Assign((Optr)VAR_m_0_3, (Optr)PSend20164);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20168 = new_Send((Optr)self, SMB_seconds, 0);
    // abs. 
    Send PSend20167 = new_Send((Optr)PSend20168, SMB_abs, 0);
    Assign PAssign20166 = new_Assign((Optr)VAR_s_0_4, (Optr)PSend20167);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend20169 = new_Send((Optr)self, SMB_negative, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_2173 = new_Character(L'-');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2173_Const = new_Constant((Optr)char_2173);
    // <<. 
    Send PSend20173 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2173_Const);
    Array PThreadedCode20172 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2173, (Optr)&t_send1, (Optr)PSend20173, (Optr)&t_block_return);
    Block PBlock20171 = new_Block_with(empty_Array, empty_Array, PThreadedCode20172, 1, PSend20173);
    // ifTrue:. 
    Send PSend20170 = new_Send((Optr)PSend20169, SMB_ifTrue_, 1, (Optr)PBlock20171);
    // printOn:. 
    Send PSend20174 = new_Send((Optr)VAR_d_0_1, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_435 = new_Character(L':');
    Constant char_435_Const = new_Constant((Optr)char_435);
    // <<. 
    Send PSend20175 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20176 = new_Send((Optr)VAR_h_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    Character char_9197 = new_Character(L'0');
    Constant char_9197_Const = new_Constant((Optr)char_9197);
    // <<. 
    Send PSend20180 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20179 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20180, (Optr)&t_block_return);
    Block PBlock20178 = new_Block_with(empty_Array, empty_Array, PThreadedCode20179, 1, PSend20180);
    // ifTrue:. 
    Send PSend20177 = new_Send((Optr)PSend20176, SMB_ifTrue_, 1, (Optr)PBlock20178);
    // printOn:. 
    Send PSend20181 = new_Send((Optr)VAR_h_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20182 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend20183 = new_Send((Optr)VAR_m_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20187 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20186 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20187, (Optr)&t_block_return);
    Block PBlock20185 = new_Block_with(empty_Array, empty_Array, PThreadedCode20186, 1, PSend20187);
    // ifTrue:. 
    Send PSend20184 = new_Send((Optr)PSend20183, SMB_ifTrue_, 1, (Optr)PBlock20185);
    // printOn:. 
    Send PSend20188 = new_Send((Optr)VAR_m_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20189 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend20190 = new_Send((Optr)VAR_s_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20194 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20193 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20194, (Optr)&t_block_return);
    Block PBlock20192 = new_Block_with(empty_Array, empty_Array, PThreadedCode20193, 1, PSend20194);
    // ifTrue:. 
    Send PSend20191 = new_Send((Optr)PSend20190, SMB_ifTrue_, 1, (Optr)PBlock20192);
    // printOn:. 
    Send PSend20195 = new_Send((Optr)VAR_s_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20156 = instantiate_Array_with(ThreadedCode_Class, 0, 123, (Optr)&t_push1, (Optr)PAssign20157, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20159, (Optr)&t_send0, (Optr)PSend20158, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20160, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20162, (Optr)&t_send0, (Optr)PSend20161, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20163, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20165, (Optr)&t_send0, (Optr)PSend20164, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20166, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20168, (Optr)&t_send0, (Optr)PSend20167, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20169, (Optr)&t_send_ifTrue_, (Optr)PSend20170, (Optr)PBlock20171, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_d_0_1, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20174, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20175, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20176, (Optr)&t_send_ifTrue_, (Optr)PSend20177, (Optr)PBlock20178, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20181, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20182, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20183, (Optr)&t_send_ifTrue_, (Optr)PSend20184, (Optr)PBlock20185, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20188, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20189, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20190, (Optr)&t_send_ifTrue_, (Optr)PSend20191, (Optr)PBlock20192, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20195, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20153 = new_Method_with(PArray20154, PArray20155, empty_Array, PThreadedCode20156, 16, PAssign20157, PAssign20160, PAssign20163, PAssign20166, PSend20170, PSend20174, PSend20175, PSend20177, PSend20181, PSend20182, PSend20184, PSend20188, PSend20189, PSend20191, PSend20195, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20153, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Variable VAR_days_0_0 = new_Variable_named(L"days", 0);
    Array PArray20197 = new_Array_with(1, (Optr)VAR_days_0_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20200 = new_Send((Optr)self, SMB_days, 0);
    Assign PAssign20199 = new_Assign((Optr)VAR_days_0_0, (Optr)PSend20200);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20201 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20202 = new_Send((Optr)VAR_days_0_0, SMB__times_, 1, (Optr)PSend20201);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20203 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__minus_, 1, (Optr)PSend20202);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend20204 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_days_0_0, (Optr)PSend20203);
    Array PThreadedCode20198 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign20199, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20200, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_days_0_0, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_variable, (Optr)VAR_days_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20201, (Optr)&t_send1, (Optr)PSend20202, (Optr)&t_send1, (Optr)PSend20203, (Optr)&t_send2, (Optr)PSend20204, (Optr)&t_method_return);
    Method PMethod20196 = new_Method_with(empty_Array, PArray20197, empty_Array, PThreadedCode20198, 2, PAssign20199, PSend20204);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod20196, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20207 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20208 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20207);
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20209 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20210 = new_Send((Optr)PSend20208, SMB_quo_, 1, (Optr)PSend20209);
    Array PThreadedCode20206 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20207, (Optr)&t_send1, (Optr)PSend20208, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20209, (Optr)&t_send1, (Optr)PSend20210, (Optr)&t_method_return);
    Method PMethod20205 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20206, 1, PSend20210);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20205, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_days() {
    Symbol SMB_days = new_Symbol(L"days");
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20213 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20214 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_quo_, 1, (Optr)PSend20213);
    Array PThreadedCode20212 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20213, (Optr)&t_send1, (Optr)PSend20214, (Optr)&t_method_return);
    Method PMethod20211 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20212, 1, PSend20214);
    
    MethodClosure MC_SMB_days = new_MethodClosure((Method)PMethod20211, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_days, MC_SMB_days);
}


static void init_SMB__times_() {
    Symbol SMB__times_ = new_Symbol(L"*");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20216 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20218 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20219 = new_Send((Optr)self, SMB_asSeconds, 0);
    // *. 
    Send PSend20220 = new_Send((Optr)PSend20219, SMB__times_, 1, (Optr)VAR_operand_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20221 = new_Send((Optr)PSend20220, SMB_asInteger, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20222 = new_Send((Optr)PSend20218, SMB_seconds_, 1, (Optr)PSend20221);
    Array PThreadedCode20217 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20218, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20219, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send1, (Optr)PSend20220, (Optr)&t_send0, (Optr)PSend20221, (Optr)&t_send1, (Optr)PSend20222, (Optr)&t_method_return);
    Method PMethod20215 = new_Method_with(PArray20216, empty_Array, empty_Array, PThreadedCode20217, 1, PSend20222);
    
    MethodClosure MC_SMB__times_ = new_MethodClosure((Method)PMethod20215, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__times_, MC_SMB__times_);
}


static void init_SMB__divide_() {
    Symbol SMB__divide_ = new_Symbol(L"/");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20224 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_isNumber = new_Symbol(L"isNumber");
    // isNumber. 
    Send PSend20226 = new_Send((Optr)VAR_operand_0_0, SMB_isNumber, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20230 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20231 = new_Send((Optr)self, SMB_asSeconds, 0);
    // /. 
    Send PSend20232 = new_Send((Optr)PSend20231, SMB__divide_, 1, (Optr)VAR_operand_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20233 = new_Send((Optr)PSend20232, SMB_asInteger, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20234 = new_Send((Optr)PSend20230, SMB_seconds_, 1, (Optr)PSend20233);
    Array PThreadedCode20229 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20230, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20231, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send1, (Optr)PSend20232, (Optr)&t_send0, (Optr)PSend20233, (Optr)&t_send1, (Optr)PSend20234, (Optr)&t_block_return);
    Block PBlock20228 = new_Block_with(empty_Array, empty_Array, PThreadedCode20229, 1, PSend20234);
    // asSeconds. 
    Send PSend20237 = new_Send((Optr)self, SMB_asSeconds, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20238 = new_Send((Optr)VAR_operand_0_0, SMB_asDuration, 0);
    // asSeconds. 
    Send PSend20239 = new_Send((Optr)PSend20238, SMB_asSeconds, 0);
    // /. 
    Send PSend20240 = new_Send((Optr)PSend20237, SMB__divide_, 1, (Optr)PSend20239);
    Array PThreadedCode20236 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20237, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20238, (Optr)&t_send0, (Optr)PSend20239, (Optr)&t_send1, (Optr)PSend20240, (Optr)&t_block_return);
    Block PBlock20235 = new_Block_with(empty_Array, empty_Array, PThreadedCode20236, 1, PSend20240);
    // ifTrue:ifFalse:. 
    Send PSend20227 = new_Send((Optr)PSend20226, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20228, (Optr)PBlock20235);
    Array PThreadedCode20225 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20226, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20227, (Optr)PBlock20228, (Optr)PBlock20235, (Optr)&t_method_return);
    Method PMethod20223 = new_Method_with(PArray20224, empty_Array, empty_Array, PThreadedCode20225, 1, PSend20227);
    
    MethodClosure MC_SMB__divide_ = new_MethodClosure((Method)PMethod20223, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__divide_, MC_SMB__divide_);
}


static void init_SMB_isZero() {
    Symbol SMB_isZero = new_Symbol(L"isZero");
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend20243 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode20242 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20243, (Optr)&t_method_return);
    Method PMethod20241 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20242, 1, PSend20243);
    
    MethodClosure MC_SMB_isZero = new_MethodClosure((Method)PMethod20241, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_isZero, MC_SMB_isZero);
}


static void init_class_SMB_minutes_() {
    Symbol SMB_minutes_ = new_Symbol(L"minutes:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20245 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20247 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20248 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20247);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20249 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20248);
    Array PThreadedCode20246 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20247, (Optr)&t_send1, (Optr)PSend20248, (Optr)&t_send1, (Optr)PSend20249, (Optr)&t_method_return);
    Method PMethod20244 = new_Method_with(PArray20245, empty_Array, empty_Array, PThreadedCode20246, 1, PSend20249);
    
    MethodClosure MC_SMB_minutes_ = new_MethodClosure((Method)PMethod20244, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_minutes_, MC_SMB_minutes_);
}


static void init_class_SMB_seconds_() {
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20251 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20253 = new_Send((Optr)self, SMB_basicNew, 0);
    // seconds:. 
    Send PSend20254 = new_Send((Optr)PSend20253, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode20252 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20253, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20254, (Optr)&t_method_return);
    Method PMethod20250 = new_Method_with(PArray20251, empty_Array, empty_Array, PThreadedCode20252, 1, PSend20254);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20250, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_seconds_, MC_SMB_seconds_);
}


static void init_class_SMB_zero() {
    Symbol SMB_zero = new_Symbol(L"zero");
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20257 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // seconds:. 
    Send PSend20258 = new_Send((Optr)PSend20257, SMB_seconds_, 1, (Optr)int_0_Const);
    Array PThreadedCode20256 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20257, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20258, (Optr)&t_method_return);
    Method PMethod20255 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20256, 1, PSend20258);
    
    MethodClosure MC_SMB_zero = new_MethodClosure((Method)PMethod20255, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_zero, MC_SMB_zero);
}


static void init_class_SMB_hours_() {
    Symbol SMB_hours_ = new_Symbol(L"hours:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20260 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20262 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20263 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20262);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20264 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20263);
    Array PThreadedCode20261 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20262, (Optr)&t_send1, (Optr)PSend20263, (Optr)&t_send1, (Optr)PSend20264, (Optr)&t_method_return);
    Method PMethod20259 = new_Method_with(PArray20260, empty_Array, empty_Array, PThreadedCode20261, 1, PSend20264);
    
    MethodClosure MC_SMB_hours_ = new_MethodClosure((Method)PMethod20259, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_hours_, MC_SMB_hours_);
}


static void init_class_SMB_days_() {
    Symbol SMB_days_ = new_Symbol(L"days:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20266 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20268 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20269 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20268);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20270 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20269);
    Array PThreadedCode20267 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20268, (Optr)&t_send1, (Optr)PSend20269, (Optr)&t_send1, (Optr)PSend20270, (Optr)&t_method_return);
    Method PMethod20265 = new_Method_with(PArray20266, empty_Array, empty_Array, PThreadedCode20267, 1, PSend20270);
    
    MethodClosure MC_SMB_days_ = new_MethodClosure((Method)PMethod20265, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_days_, MC_SMB_days_);
}

void init_Chronology_Duration_layout() {
    layout_Chronology_Duration_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Chronology_Duration_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Chronology_Duration_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Chronology_Duration_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Chronology_Duration_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Chronology_Duration_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Duration = new_Symbol(L"Duration");
    slot_Chronology_Duration_seconds = (Optr)new_Slot(0, L"seconds");
    layout_Chronology_Duration = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Chronology_Duration)->values[0] = slot_Chronology_Duration_seconds; // seconds 
    Chronology_Duration_Class = (Class)new_Class(Object_Class, layout_Chronology_Duration_Class_class);
    Class_set_superclass(Chronology_Duration_Class, Object_Class);
    Chronology_Duration_Class->layout = layout_Chronology_Duration;
    HEADER(Chronology_Duration_Class)->layout = layout_Chronology_Duration_Class_class;
    Chronology_Duration_Class->name = SMB_Duration;
    
}

void init_Chronology_Duration_methods() {
    init_SMB_minutes();
    init_SMB_asSeconds();
    init_SMB_seconds();
    init_SMB_asDuration();
    init_SMB_negated();
    init_SMB_negative();
    init_SMB_positive();
    init_SMB__plus_();
    init_SMB__minus_();
    init_SMB_seconds_();
    init_SMB__equals_();
    init_SMB_printOn_();
    init_SMB_ticks();
    init_SMB_hours();
    init_SMB_days();
    init_SMB__times_();
    init_SMB__divide_();
    init_SMB_isZero();
    init_class_SMB_minutes_();
    init_class_SMB_seconds_();
    init_class_SMB_zero();
    init_class_SMB_hours_();
    init_class_SMB_days_();
    
}