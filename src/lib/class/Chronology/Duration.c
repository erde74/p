#include <lib/class/Chronology/Duration.h>


Optr layout_Chronology_Duration_Class_class;
Optr slot_Chronology_Duration_seconds;
Optr layout_Chronology_Duration;


static void init_SMB_minutes() {
    Symbol SMB_minutes = new_Symbol(L"minutes");
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
<<<<<<< HEAD
    Send PSend20325 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20326 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20325);
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20327 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20328 = new_Send((Optr)PSend20326, SMB_quo_, 1, (Optr)PSend20327);
    Array PThreadedCode20324 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20325, (Optr)&t_send1, (Optr)PSend20326, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20327, (Optr)&t_send1, (Optr)PSend20328, (Optr)&t_method_return);
    Method PMethod20323 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20324, 1, PSend20328);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20323, Chronology_Duration_Class);
=======
    Send PSend20291 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20292 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20291);
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20293 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20294 = new_Send((Optr)PSend20292, SMB_quo_, 1, (Optr)PSend20293);
    Array PThreadedCode20290 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20291, (Optr)&t_send1, (Optr)PSend20292, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20293, (Optr)&t_send1, (Optr)PSend20294, (Optr)&t_method_return);
    Method PMethod20289 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20290, 1, PSend20294);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20289, Chronology_Duration_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_Duration_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_asSeconds() {
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
<<<<<<< HEAD
    Array PThreadedCode20330 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_method_return);
    Method PMethod20329 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20330, 1, slot_Chronology_Duration_seconds);
    
    MethodClosure MC_SMB_asSeconds = new_MethodClosure((Method)PMethod20329, Chronology_Duration_Class);
=======
    Array PThreadedCode20296 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_method_return);
    Method PMethod20295 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20296, 1, slot_Chronology_Duration_seconds);
    
    MethodClosure MC_SMB_asSeconds = new_MethodClosure((Method)PMethod20295, Chronology_Duration_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_Duration_Class, SMB_asSeconds, MC_SMB_asSeconds);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
<<<<<<< HEAD
    Send PSend20333 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20334 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20333);
    Array PThreadedCode20332 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20333, (Optr)&t_send1, (Optr)PSend20334, (Optr)&t_method_return);
    Method PMethod20331 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20332, 1, PSend20334);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20331, Chronology_Duration_Class);
=======
    Send PSend20299 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20300 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20299);
    Array PThreadedCode20298 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20299, (Optr)&t_send1, (Optr)PSend20300, (Optr)&t_method_return);
    Method PMethod20297 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20298, 1, PSend20300);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20297, Chronology_Duration_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_Duration_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
<<<<<<< HEAD
    Array PThreadedCode20336 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20335 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20336, 1, self);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20335, Chronology_Duration_Class);
=======
    Array PThreadedCode20302 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20301 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20302, 1, self);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20301, Chronology_Duration_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_Duration_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_negated() {
    Symbol SMB_negated = new_Symbol(L"negated");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
<<<<<<< HEAD
    Send PSend20339 = new_Send((Optr)self, SMB_class, 0);
    // negated. 
    Send PSend20340 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_negated, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20341 = new_Send((Optr)PSend20339, SMB_seconds_, 1, (Optr)PSend20340);
    Array PThreadedCode20338 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20339, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_send0, (Optr)PSend20340, (Optr)&t_send1, (Optr)PSend20341, (Optr)&t_method_return);
    Method PMethod20337 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20338, 1, PSend20341);
    
    MethodClosure MC_SMB_negated = new_MethodClosure((Method)PMethod20337, Chronology_Duration_Class);
=======
    Send PSend20305 = new_Send((Optr)self, SMB_class, 0);
    // negated. 
    Send PSend20306 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_negated, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20307 = new_Send((Optr)PSend20305, SMB_seconds_, 1, (Optr)PSend20306);
    Array PThreadedCode20304 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20305, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_send0, (Optr)PSend20306, (Optr)&t_send1, (Optr)PSend20307, (Optr)&t_method_return);
    Method PMethod20303 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20304, 1, PSend20307);
    
    MethodClosure MC_SMB_negated = new_MethodClosure((Method)PMethod20303, Chronology_Duration_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_Duration_Class, SMB_negated, MC_SMB_negated);
}


static void init_SMB_negative() {
    Symbol SMB_negative = new_Symbol(L"negative");
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
<<<<<<< HEAD
    Send PSend20344 = new_Send((Optr)self, SMB_positive, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend20345 = new_Send((Optr)PSend20344, SMB_not, 0);
    Array PThreadedCode20343 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20344, (Optr)&t_send0, (Optr)PSend20345, (Optr)&t_method_return);
    Method PMethod20342 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20343, 1, PSend20345);
    
    MethodClosure MC_SMB_negative = new_MethodClosure((Method)PMethod20342, Chronology_Duration_Class);
=======
    Send PSend20310 = new_Send((Optr)self, SMB_positive, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend20311 = new_Send((Optr)PSend20310, SMB_not, 0);
    Array PThreadedCode20309 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20310, (Optr)&t_send0, (Optr)PSend20311, (Optr)&t_method_return);
    Method PMethod20308 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20309, 1, PSend20311);
    
    MethodClosure MC_SMB_negative = new_MethodClosure((Method)PMethod20308, Chronology_Duration_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_Duration_Class, SMB_negative, MC_SMB_negative);
}


static void init_SMB_positive() {
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
<<<<<<< HEAD
    Send PSend20348 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_positive, 0);
    Array PThreadedCode20347 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_send0, (Optr)PSend20348, (Optr)&t_method_return);
    Method PMethod20346 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20347, 1, PSend20348);
    
    MethodClosure MC_SMB_positive = new_MethodClosure((Method)PMethod20346, Chronology_Duration_Class);
=======
    Send PSend20314 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_positive, 0);
    Array PThreadedCode20313 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_send0, (Optr)PSend20314, (Optr)&t_method_return);
    Method PMethod20312 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20313, 1, PSend20314);
    
    MethodClosure MC_SMB_positive = new_MethodClosure((Method)PMethod20312, Chronology_Duration_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_Duration_Class, SMB_positive, MC_SMB_positive);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
<<<<<<< HEAD
    Array PArray20350 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20352 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20353 = new_Send((Optr)VAR_operand_0_0, SMB_asSeconds, 0);
    // +. 
    Send PSend20354 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__plus_, 1, (Optr)PSend20353);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20355 = new_Send((Optr)PSend20352, SMB_seconds_, 1, (Optr)PSend20354);
    Array PThreadedCode20351 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20352, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20353, (Optr)&t_send1, (Optr)PSend20354, (Optr)&t_send1, (Optr)PSend20355, (Optr)&t_method_return);
    Method PMethod20349 = new_Method_with(PArray20350, empty_Array, empty_Array, PThreadedCode20351, 1, PSend20355);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PMethod20349, Chronology_Duration_Class);
=======
    Array PArray20316 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20318 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20319 = new_Send((Optr)VAR_operand_0_0, SMB_asSeconds, 0);
    // +. 
    Send PSend20320 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__plus_, 1, (Optr)PSend20319);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20321 = new_Send((Optr)PSend20318, SMB_seconds_, 1, (Optr)PSend20320);
    Array PThreadedCode20317 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20318, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20319, (Optr)&t_send1, (Optr)PSend20320, (Optr)&t_send1, (Optr)PSend20321, (Optr)&t_method_return);
    Method PMethod20315 = new_Method_with(PArray20316, empty_Array, empty_Array, PThreadedCode20317, 1, PSend20321);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PMethod20315, Chronology_Duration_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_Duration_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
<<<<<<< HEAD
    Array PArray20357 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend20359 = new_Send((Optr)VAR_operand_0_0, SMB_negated, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20360 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend20359);
    Array PThreadedCode20358 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20359, (Optr)&t_send1, (Optr)PSend20360, (Optr)&t_method_return);
    Method PMethod20356 = new_Method_with(PArray20357, empty_Array, empty_Array, PThreadedCode20358, 1, PSend20360);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PMethod20356, Chronology_Duration_Class);
=======
    Array PArray20323 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend20325 = new_Send((Optr)VAR_operand_0_0, SMB_negated, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20326 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend20325);
    Array PThreadedCode20324 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20325, (Optr)&t_send1, (Optr)PSend20326, (Optr)&t_method_return);
    Method PMethod20322 = new_Method_with(PArray20323, empty_Array, empty_Array, PThreadedCode20324, 1, PSend20326);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PMethod20322, Chronology_Duration_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_Duration_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB_seconds_() {
    /*
    seconds: seconds
// 	^ self basicNew seconds: seconds
    */
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_secondCount_0_0 = new_Variable_named(L"secondCount", 0);
<<<<<<< HEAD
    Array PArray20362 = new_Array_with(1, (Optr)VAR_secondCount_0_0);
    Assign PAssign20364 = new_Assign((Optr)slot_Chronology_Duration_seconds, (Optr)VAR_secondCount_0_0);
    Array PThreadedCode20363 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20364, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20361 = new_Method_with(PArray20362, empty_Array, empty_Array, PThreadedCode20363, 2, PAssign20364, self);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20361, Chronology_Duration_Class);
=======
    Array PArray20328 = new_Array_with(1, (Optr)VAR_secondCount_0_0);
    Assign PAssign20330 = new_Assign((Optr)slot_Chronology_Duration_seconds, (Optr)VAR_secondCount_0_0);
    Array PThreadedCode20329 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20330, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20327 = new_Method_with(PArray20328, empty_Array, empty_Array, PThreadedCode20329, 2, PAssign20330, self);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20327, Chronology_Duration_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_Duration_Class, SMB_seconds_, MC_SMB_seconds_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_comparand_0_0 = new_Variable_named(L"comparand", 0);
<<<<<<< HEAD
    Array PArray20366 = new_Array_with(1, (Optr)VAR_comparand_0_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend20368 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_comparand_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode20371 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_true);
    Block PBlock20370 = new_Block_with(empty_Array, empty_Array, PThreadedCode20371, 1, true_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20374 = new_Send((Optr)self, SMB_class, 0);
    // class. 
    Send PSend20375 = new_Send((Optr)VAR_comparand_0_0, SMB_class, 0);
    // =. 
    Send PSend20376 = new_Send((Optr)PSend20374, SMB__equals_, 1, (Optr)PSend20375);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20380 = new_Send((Optr)self, SMB_asSeconds, 0);
    // asSeconds. 
    Send PSend20381 = new_Send((Optr)VAR_comparand_0_0, SMB_asSeconds, 0);
    // =. 
    Send PSend20382 = new_Send((Optr)PSend20380, SMB__equals_, 1, (Optr)PSend20381);
    Array PThreadedCode20379 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20380, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend20381, (Optr)&t_send1, (Optr)PSend20382, (Optr)&t_block_return);
    Block PBlock20378 = new_Block_with(empty_Array, empty_Array, PThreadedCode20379, 1, PSend20382);
    Array PThreadedCode20384 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock20383 = new_Block_with(empty_Array, empty_Array, PThreadedCode20384, 1, false_Const);
    // ifTrue:ifFalse:. 
    Send PSend20377 = new_Send((Optr)PSend20376, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20378, (Optr)PBlock20383);
    Array PThreadedCode20373 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20374, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend20375, (Optr)&t_send1, (Optr)PSend20376, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20377, (Optr)PBlock20378, (Optr)PBlock20383, (Optr)&t_block_return);
    Block PBlock20372 = new_Block_with(empty_Array, empty_Array, PThreadedCode20373, 1, PSend20377);
    // ifTrue:ifFalse:. 
    Send PSend20369 = new_Send((Optr)PSend20368, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20370, (Optr)PBlock20372);
    Array PThreadedCode20367 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send1, (Optr)PSend20368, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20369, (Optr)PBlock20370, (Optr)PBlock20372, (Optr)&t_method_return);
    Method PMethod20365 = new_Method_with(PArray20366, empty_Array, empty_Array, PThreadedCode20367, 1, PSend20369);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod20365, Chronology_Duration_Class);
=======
    Array PArray20332 = new_Array_with(1, (Optr)VAR_comparand_0_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend20334 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_comparand_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode20337 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_true);
    Block PBlock20336 = new_Block_with(empty_Array, empty_Array, PThreadedCode20337, 1, true_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20340 = new_Send((Optr)self, SMB_class, 0);
    // class. 
    Send PSend20341 = new_Send((Optr)VAR_comparand_0_0, SMB_class, 0);
    // =. 
    Send PSend20342 = new_Send((Optr)PSend20340, SMB__equals_, 1, (Optr)PSend20341);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20346 = new_Send((Optr)self, SMB_asSeconds, 0);
    // asSeconds. 
    Send PSend20347 = new_Send((Optr)VAR_comparand_0_0, SMB_asSeconds, 0);
    // =. 
    Send PSend20348 = new_Send((Optr)PSend20346, SMB__equals_, 1, (Optr)PSend20347);
    Array PThreadedCode20345 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20346, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend20347, (Optr)&t_send1, (Optr)PSend20348, (Optr)&t_block_return);
    Block PBlock20344 = new_Block_with(empty_Array, empty_Array, PThreadedCode20345, 1, PSend20348);
    Array PThreadedCode20350 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock20349 = new_Block_with(empty_Array, empty_Array, PThreadedCode20350, 1, false_Const);
    // ifTrue:ifFalse:. 
    Send PSend20343 = new_Send((Optr)PSend20342, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20344, (Optr)PBlock20349);
    Array PThreadedCode20339 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20340, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend20341, (Optr)&t_send1, (Optr)PSend20342, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20343, (Optr)PBlock20344, (Optr)PBlock20349, (Optr)&t_block_return);
    Block PBlock20338 = new_Block_with(empty_Array, empty_Array, PThreadedCode20339, 1, PSend20343);
    // ifTrue:ifFalse:. 
    Send PSend20335 = new_Send((Optr)PSend20334, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20336, (Optr)PBlock20338);
    Array PThreadedCode20333 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send1, (Optr)PSend20334, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20335, (Optr)PBlock20336, (Optr)PBlock20338, (Optr)&t_method_return);
    Method PMethod20331 = new_Method_with(PArray20332, empty_Array, empty_Array, PThreadedCode20333, 1, PSend20335);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod20331, Chronology_Duration_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_Duration_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
    Array PArray20386 = new_Array_with(1, (Optr)VAR_aStream_0_0);
=======
    Array PArray20352 = new_Array_with(1, (Optr)VAR_aStream_0_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Variable VAR_d_0_1 = new_Variable_named(L"d", 0);
    Variable VAR_h_0_2 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_3 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_4 = new_Variable_named(L"s", 0);
<<<<<<< HEAD
    Array PArray20387 = new_Array_with(4, (Optr)VAR_d_0_1, (Optr)VAR_h_0_2, (Optr)VAR_m_0_3, (Optr)VAR_s_0_4);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20391 = new_Send((Optr)self, SMB_days, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend20390 = new_Send((Optr)PSend20391, SMB_abs, 0);
    Assign PAssign20389 = new_Assign((Optr)VAR_d_0_1, (Optr)PSend20390);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20394 = new_Send((Optr)self, SMB_hours, 0);
    // abs. 
    Send PSend20393 = new_Send((Optr)PSend20394, SMB_abs, 0);
    Assign PAssign20392 = new_Assign((Optr)VAR_h_0_2, (Optr)PSend20393);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20397 = new_Send((Optr)self, SMB_minutes, 0);
    // abs. 
    Send PSend20396 = new_Send((Optr)PSend20397, SMB_abs, 0);
    Assign PAssign20395 = new_Assign((Optr)VAR_m_0_3, (Optr)PSend20396);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20400 = new_Send((Optr)self, SMB_seconds, 0);
    // abs. 
    Send PSend20399 = new_Send((Optr)PSend20400, SMB_abs, 0);
    Assign PAssign20398 = new_Assign((Optr)VAR_s_0_4, (Optr)PSend20399);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend20401 = new_Send((Optr)self, SMB_negative, 0);
=======
    Array PArray20353 = new_Array_with(4, (Optr)VAR_d_0_1, (Optr)VAR_h_0_2, (Optr)VAR_m_0_3, (Optr)VAR_s_0_4);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20357 = new_Send((Optr)self, SMB_days, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend20356 = new_Send((Optr)PSend20357, SMB_abs, 0);
    Assign PAssign20355 = new_Assign((Optr)VAR_d_0_1, (Optr)PSend20356);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20360 = new_Send((Optr)self, SMB_hours, 0);
    // abs. 
    Send PSend20359 = new_Send((Optr)PSend20360, SMB_abs, 0);
    Assign PAssign20358 = new_Assign((Optr)VAR_h_0_2, (Optr)PSend20359);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20363 = new_Send((Optr)self, SMB_minutes, 0);
    // abs. 
    Send PSend20362 = new_Send((Optr)PSend20363, SMB_abs, 0);
    Assign PAssign20361 = new_Assign((Optr)VAR_m_0_3, (Optr)PSend20362);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20366 = new_Send((Optr)self, SMB_seconds, 0);
    // abs. 
    Send PSend20365 = new_Send((Optr)PSend20366, SMB_abs, 0);
    Assign PAssign20364 = new_Assign((Optr)VAR_s_0_4, (Optr)PSend20365);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend20367 = new_Send((Optr)self, SMB_negative, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_2179 = new_Character(L'-');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2179_Const = new_Constant((Optr)char_2179);
    // <<. 
<<<<<<< HEAD
    Send PSend20405 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2182_Const);
    Array PThreadedCode20404 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_send1, (Optr)PSend20405, (Optr)&t_block_return);
    Block PBlock20403 = new_Block_with(empty_Array, empty_Array, PThreadedCode20404, 1, PSend20405);
    // ifTrue:. 
    Send PSend20402 = new_Send((Optr)PSend20401, SMB_ifTrue_, 1, (Optr)PBlock20403);
    // printOn:. 
    Send PSend20406 = new_Send((Optr)VAR_d_0_1, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend20407 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
=======
    Send PSend20371 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2179_Const);
    Array PThreadedCode20370 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2179, (Optr)&t_send1, (Optr)PSend20371, (Optr)&t_block_return);
    Block PBlock20369 = new_Block_with(empty_Array, empty_Array, PThreadedCode20370, 1, PSend20371);
    // ifTrue:. 
    Send PSend20368 = new_Send((Optr)PSend20367, SMB_ifTrue_, 1, (Optr)PBlock20369);
    // printOn:. 
    Send PSend20372 = new_Send((Optr)VAR_d_0_1, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend20373 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
<<<<<<< HEAD
    Send PSend20408 = new_Send((Optr)VAR_h_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    Character char_9429 = new_Character(L'0');
    Constant char_9429_Const = new_Constant((Optr)char_9429);
    // <<. 
    Send PSend20412 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9429_Const);
    Array PThreadedCode20411 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9429, (Optr)&t_send1, (Optr)PSend20412, (Optr)&t_block_return);
    Block PBlock20410 = new_Block_with(empty_Array, empty_Array, PThreadedCode20411, 1, PSend20412);
    // ifTrue:. 
    Send PSend20409 = new_Send((Optr)PSend20408, SMB_ifTrue_, 1, (Optr)PBlock20410);
    // printOn:. 
    Send PSend20413 = new_Send((Optr)VAR_h_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20414 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20415 = new_Send((Optr)VAR_m_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20419 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9429_Const);
    Array PThreadedCode20418 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9429, (Optr)&t_send1, (Optr)PSend20419, (Optr)&t_block_return);
    Block PBlock20417 = new_Block_with(empty_Array, empty_Array, PThreadedCode20418, 1, PSend20419);
    // ifTrue:. 
    Send PSend20416 = new_Send((Optr)PSend20415, SMB_ifTrue_, 1, (Optr)PBlock20417);
    // printOn:. 
    Send PSend20420 = new_Send((Optr)VAR_m_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20421 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20422 = new_Send((Optr)VAR_s_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20426 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9429_Const);
    Array PThreadedCode20425 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9429, (Optr)&t_send1, (Optr)PSend20426, (Optr)&t_block_return);
    Block PBlock20424 = new_Block_with(empty_Array, empty_Array, PThreadedCode20425, 1, PSend20426);
    // ifTrue:. 
    Send PSend20423 = new_Send((Optr)PSend20422, SMB_ifTrue_, 1, (Optr)PBlock20424);
    // printOn:. 
    Send PSend20427 = new_Send((Optr)VAR_s_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20388 = instantiate_Array_with(ThreadedCode_Class, 0, 123, (Optr)&t_push1, (Optr)PAssign20389, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20391, (Optr)&t_send0, (Optr)PSend20390, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20392, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20394, (Optr)&t_send0, (Optr)PSend20393, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20395, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20397, (Optr)&t_send0, (Optr)PSend20396, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20398, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20400, (Optr)&t_send0, (Optr)PSend20399, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20401, (Optr)&t_send_ifTrue_, (Optr)PSend20402, (Optr)PBlock20403, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_d_0_1, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20406, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20407, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20408, (Optr)&t_send_ifTrue_, (Optr)PSend20409, (Optr)PBlock20410, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20413, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20414, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20415, (Optr)&t_send_ifTrue_, (Optr)PSend20416, (Optr)PBlock20417, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20420, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20421, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20422, (Optr)&t_send_ifTrue_, (Optr)PSend20423, (Optr)PBlock20424, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20427, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20385 = new_Method_with(PArray20386, PArray20387, empty_Array, PThreadedCode20388, 16, PAssign20389, PAssign20392, PAssign20395, PAssign20398, PSend20402, PSend20406, PSend20407, PSend20409, PSend20413, PSend20414, PSend20416, PSend20420, PSend20421, PSend20423, PSend20427, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20385, Chronology_Duration_Class);
=======
    Send PSend20374 = new_Send((Optr)VAR_h_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    Character char_9395 = new_Character(L'0');
    Constant char_9395_Const = new_Constant((Optr)char_9395);
    // <<. 
    Send PSend20378 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9395_Const);
    Array PThreadedCode20377 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9395, (Optr)&t_send1, (Optr)PSend20378, (Optr)&t_block_return);
    Block PBlock20376 = new_Block_with(empty_Array, empty_Array, PThreadedCode20377, 1, PSend20378);
    // ifTrue:. 
    Send PSend20375 = new_Send((Optr)PSend20374, SMB_ifTrue_, 1, (Optr)PBlock20376);
    // printOn:. 
    Send PSend20379 = new_Send((Optr)VAR_h_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20380 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20381 = new_Send((Optr)VAR_m_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20385 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9395_Const);
    Array PThreadedCode20384 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9395, (Optr)&t_send1, (Optr)PSend20385, (Optr)&t_block_return);
    Block PBlock20383 = new_Block_with(empty_Array, empty_Array, PThreadedCode20384, 1, PSend20385);
    // ifTrue:. 
    Send PSend20382 = new_Send((Optr)PSend20381, SMB_ifTrue_, 1, (Optr)PBlock20383);
    // printOn:. 
    Send PSend20386 = new_Send((Optr)VAR_m_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20387 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20388 = new_Send((Optr)VAR_s_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20392 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9395_Const);
    Array PThreadedCode20391 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9395, (Optr)&t_send1, (Optr)PSend20392, (Optr)&t_block_return);
    Block PBlock20390 = new_Block_with(empty_Array, empty_Array, PThreadedCode20391, 1, PSend20392);
    // ifTrue:. 
    Send PSend20389 = new_Send((Optr)PSend20388, SMB_ifTrue_, 1, (Optr)PBlock20390);
    // printOn:. 
    Send PSend20393 = new_Send((Optr)VAR_s_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20354 = instantiate_Array_with(ThreadedCode_Class, 0, 123, (Optr)&t_push1, (Optr)PAssign20355, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20357, (Optr)&t_send0, (Optr)PSend20356, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20358, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20360, (Optr)&t_send0, (Optr)PSend20359, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20361, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20363, (Optr)&t_send0, (Optr)PSend20362, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20364, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20366, (Optr)&t_send0, (Optr)PSend20365, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20367, (Optr)&t_send_ifTrue_, (Optr)PSend20368, (Optr)PBlock20369, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_d_0_1, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20372, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20373, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20374, (Optr)&t_send_ifTrue_, (Optr)PSend20375, (Optr)PBlock20376, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20379, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20380, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20381, (Optr)&t_send_ifTrue_, (Optr)PSend20382, (Optr)PBlock20383, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20386, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20387, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20388, (Optr)&t_send_ifTrue_, (Optr)PSend20389, (Optr)PBlock20390, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20393, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20351 = new_Method_with(PArray20352, PArray20353, empty_Array, PThreadedCode20354, 16, PAssign20355, PAssign20358, PAssign20361, PAssign20364, PSend20368, PSend20372, PSend20373, PSend20375, PSend20379, PSend20380, PSend20382, PSend20386, PSend20387, PSend20389, PSend20393, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20351, Chronology_Duration_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_Duration_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Variable VAR_days_0_0 = new_Variable_named(L"days", 0);
<<<<<<< HEAD
    Array PArray20429 = new_Array_with(1, (Optr)VAR_days_0_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20432 = new_Send((Optr)self, SMB_days, 0);
    Assign PAssign20431 = new_Assign((Optr)VAR_days_0_0, (Optr)PSend20432);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20433 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20434 = new_Send((Optr)VAR_days_0_0, SMB__times_, 1, (Optr)PSend20433);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20435 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__minus_, 1, (Optr)PSend20434);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend20436 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_days_0_0, (Optr)PSend20435);
    Array PThreadedCode20430 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign20431, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20432, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_days_0_0, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_variable, (Optr)VAR_days_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20433, (Optr)&t_send1, (Optr)PSend20434, (Optr)&t_send1, (Optr)PSend20435, (Optr)&t_send2, (Optr)PSend20436, (Optr)&t_method_return);
    Method PMethod20428 = new_Method_with(empty_Array, PArray20429, empty_Array, PThreadedCode20430, 2, PAssign20431, PSend20436);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod20428, Chronology_Duration_Class);
=======
    Array PArray20395 = new_Array_with(1, (Optr)VAR_days_0_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20398 = new_Send((Optr)self, SMB_days, 0);
    Assign PAssign20397 = new_Assign((Optr)VAR_days_0_0, (Optr)PSend20398);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20399 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20400 = new_Send((Optr)VAR_days_0_0, SMB__times_, 1, (Optr)PSend20399);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20401 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__minus_, 1, (Optr)PSend20400);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend20402 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_days_0_0, (Optr)PSend20401);
    Array PThreadedCode20396 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign20397, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20398, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_days_0_0, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_variable, (Optr)VAR_days_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20399, (Optr)&t_send1, (Optr)PSend20400, (Optr)&t_send1, (Optr)PSend20401, (Optr)&t_send2, (Optr)PSend20402, (Optr)&t_method_return);
    Method PMethod20394 = new_Method_with(empty_Array, PArray20395, empty_Array, PThreadedCode20396, 2, PAssign20397, PSend20402);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod20394, Chronology_Duration_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_Duration_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
<<<<<<< HEAD
    Send PSend20439 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20440 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20439);
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20441 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20442 = new_Send((Optr)PSend20440, SMB_quo_, 1, (Optr)PSend20441);
    Array PThreadedCode20438 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20439, (Optr)&t_send1, (Optr)PSend20440, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20441, (Optr)&t_send1, (Optr)PSend20442, (Optr)&t_method_return);
    Method PMethod20437 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20438, 1, PSend20442);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20437, Chronology_Duration_Class);
=======
    Send PSend20405 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20406 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20405);
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20407 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20408 = new_Send((Optr)PSend20406, SMB_quo_, 1, (Optr)PSend20407);
    Array PThreadedCode20404 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20405, (Optr)&t_send1, (Optr)PSend20406, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20407, (Optr)&t_send1, (Optr)PSend20408, (Optr)&t_method_return);
    Method PMethod20403 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20404, 1, PSend20408);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20403, Chronology_Duration_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_Duration_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_days() {
    Symbol SMB_days = new_Symbol(L"days");
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
<<<<<<< HEAD
    Send PSend20445 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20446 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_quo_, 1, (Optr)PSend20445);
    Array PThreadedCode20444 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20445, (Optr)&t_send1, (Optr)PSend20446, (Optr)&t_method_return);
    Method PMethod20443 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20444, 1, PSend20446);
    
    MethodClosure MC_SMB_days = new_MethodClosure((Method)PMethod20443, Chronology_Duration_Class);
=======
    Send PSend20411 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20412 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_quo_, 1, (Optr)PSend20411);
    Array PThreadedCode20410 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20411, (Optr)&t_send1, (Optr)PSend20412, (Optr)&t_method_return);
    Method PMethod20409 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20410, 1, PSend20412);
    
    MethodClosure MC_SMB_days = new_MethodClosure((Method)PMethod20409, Chronology_Duration_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_Duration_Class, SMB_days, MC_SMB_days);
}


static void init_SMB__times_() {
    Symbol SMB__times_ = new_Symbol(L"*");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
<<<<<<< HEAD
    Array PArray20448 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20450 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20451 = new_Send((Optr)self, SMB_asSeconds, 0);
    // *. 
    Send PSend20452 = new_Send((Optr)PSend20451, SMB__times_, 1, (Optr)VAR_operand_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20453 = new_Send((Optr)PSend20452, SMB_asInteger, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20454 = new_Send((Optr)PSend20450, SMB_seconds_, 1, (Optr)PSend20453);
    Array PThreadedCode20449 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20450, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20451, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send1, (Optr)PSend20452, (Optr)&t_send0, (Optr)PSend20453, (Optr)&t_send1, (Optr)PSend20454, (Optr)&t_method_return);
    Method PMethod20447 = new_Method_with(PArray20448, empty_Array, empty_Array, PThreadedCode20449, 1, PSend20454);
    
    MethodClosure MC_SMB__times_ = new_MethodClosure((Method)PMethod20447, Chronology_Duration_Class);
=======
    Array PArray20414 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20416 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20417 = new_Send((Optr)self, SMB_asSeconds, 0);
    // *. 
    Send PSend20418 = new_Send((Optr)PSend20417, SMB__times_, 1, (Optr)VAR_operand_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20419 = new_Send((Optr)PSend20418, SMB_asInteger, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20420 = new_Send((Optr)PSend20416, SMB_seconds_, 1, (Optr)PSend20419);
    Array PThreadedCode20415 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20416, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20417, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send1, (Optr)PSend20418, (Optr)&t_send0, (Optr)PSend20419, (Optr)&t_send1, (Optr)PSend20420, (Optr)&t_method_return);
    Method PMethod20413 = new_Method_with(PArray20414, empty_Array, empty_Array, PThreadedCode20415, 1, PSend20420);
    
    MethodClosure MC_SMB__times_ = new_MethodClosure((Method)PMethod20413, Chronology_Duration_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_Duration_Class, SMB__times_, MC_SMB__times_);
}


static void init_SMB__divide_() {
    Symbol SMB__divide_ = new_Symbol(L"/");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
<<<<<<< HEAD
    Array PArray20456 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_isNumber = new_Symbol(L"isNumber");
    // isNumber. 
    Send PSend20458 = new_Send((Optr)VAR_operand_0_0, SMB_isNumber, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20462 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20463 = new_Send((Optr)self, SMB_asSeconds, 0);
    // /. 
    Send PSend20464 = new_Send((Optr)PSend20463, SMB__divide_, 1, (Optr)VAR_operand_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20465 = new_Send((Optr)PSend20464, SMB_asInteger, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20466 = new_Send((Optr)PSend20462, SMB_seconds_, 1, (Optr)PSend20465);
    Array PThreadedCode20461 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20462, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20463, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send1, (Optr)PSend20464, (Optr)&t_send0, (Optr)PSend20465, (Optr)&t_send1, (Optr)PSend20466, (Optr)&t_block_return);
    Block PBlock20460 = new_Block_with(empty_Array, empty_Array, PThreadedCode20461, 1, PSend20466);
    // asSeconds. 
    Send PSend20469 = new_Send((Optr)self, SMB_asSeconds, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20470 = new_Send((Optr)VAR_operand_0_0, SMB_asDuration, 0);
    // asSeconds. 
    Send PSend20471 = new_Send((Optr)PSend20470, SMB_asSeconds, 0);
    // /. 
    Send PSend20472 = new_Send((Optr)PSend20469, SMB__divide_, 1, (Optr)PSend20471);
    Array PThreadedCode20468 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20469, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20470, (Optr)&t_send0, (Optr)PSend20471, (Optr)&t_send1, (Optr)PSend20472, (Optr)&t_block_return);
    Block PBlock20467 = new_Block_with(empty_Array, empty_Array, PThreadedCode20468, 1, PSend20472);
    // ifTrue:ifFalse:. 
    Send PSend20459 = new_Send((Optr)PSend20458, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20460, (Optr)PBlock20467);
    Array PThreadedCode20457 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20458, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20459, (Optr)PBlock20460, (Optr)PBlock20467, (Optr)&t_method_return);
    Method PMethod20455 = new_Method_with(PArray20456, empty_Array, empty_Array, PThreadedCode20457, 1, PSend20459);
    
    MethodClosure MC_SMB__divide_ = new_MethodClosure((Method)PMethod20455, Chronology_Duration_Class);
=======
    Array PArray20422 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_isNumber = new_Symbol(L"isNumber");
    // isNumber. 
    Send PSend20424 = new_Send((Optr)VAR_operand_0_0, SMB_isNumber, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20428 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20429 = new_Send((Optr)self, SMB_asSeconds, 0);
    // /. 
    Send PSend20430 = new_Send((Optr)PSend20429, SMB__divide_, 1, (Optr)VAR_operand_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20431 = new_Send((Optr)PSend20430, SMB_asInteger, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20432 = new_Send((Optr)PSend20428, SMB_seconds_, 1, (Optr)PSend20431);
    Array PThreadedCode20427 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20428, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20429, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send1, (Optr)PSend20430, (Optr)&t_send0, (Optr)PSend20431, (Optr)&t_send1, (Optr)PSend20432, (Optr)&t_block_return);
    Block PBlock20426 = new_Block_with(empty_Array, empty_Array, PThreadedCode20427, 1, PSend20432);
    // asSeconds. 
    Send PSend20435 = new_Send((Optr)self, SMB_asSeconds, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20436 = new_Send((Optr)VAR_operand_0_0, SMB_asDuration, 0);
    // asSeconds. 
    Send PSend20437 = new_Send((Optr)PSend20436, SMB_asSeconds, 0);
    // /. 
    Send PSend20438 = new_Send((Optr)PSend20435, SMB__divide_, 1, (Optr)PSend20437);
    Array PThreadedCode20434 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20435, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20436, (Optr)&t_send0, (Optr)PSend20437, (Optr)&t_send1, (Optr)PSend20438, (Optr)&t_block_return);
    Block PBlock20433 = new_Block_with(empty_Array, empty_Array, PThreadedCode20434, 1, PSend20438);
    // ifTrue:ifFalse:. 
    Send PSend20425 = new_Send((Optr)PSend20424, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20426, (Optr)PBlock20433);
    Array PThreadedCode20423 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20424, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20425, (Optr)PBlock20426, (Optr)PBlock20433, (Optr)&t_method_return);
    Method PMethod20421 = new_Method_with(PArray20422, empty_Array, empty_Array, PThreadedCode20423, 1, PSend20425);
    
    MethodClosure MC_SMB__divide_ = new_MethodClosure((Method)PMethod20421, Chronology_Duration_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_Duration_Class, SMB__divide_, MC_SMB__divide_);
}


static void init_SMB_isZero() {
    Symbol SMB_isZero = new_Symbol(L"isZero");
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
<<<<<<< HEAD
    Send PSend20475 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode20474 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20475, (Optr)&t_method_return);
    Method PMethod20473 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20474, 1, PSend20475);
    
    MethodClosure MC_SMB_isZero = new_MethodClosure((Method)PMethod20473, Chronology_Duration_Class);
=======
    Send PSend20441 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode20440 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20441, (Optr)&t_method_return);
    Method PMethod20439 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20440, 1, PSend20441);
    
    MethodClosure MC_SMB_isZero = new_MethodClosure((Method)PMethod20439, Chronology_Duration_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_Duration_Class, SMB_isZero, MC_SMB_isZero);
}


static void init_class_SMB_minutes_() {
    Symbol SMB_minutes_ = new_Symbol(L"minutes:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
<<<<<<< HEAD
    Array PArray20477 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20479 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20480 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20479);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20481 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20480);
    Array PThreadedCode20478 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20479, (Optr)&t_send1, (Optr)PSend20480, (Optr)&t_send1, (Optr)PSend20481, (Optr)&t_method_return);
    Method PMethod20476 = new_Method_with(PArray20477, empty_Array, empty_Array, PThreadedCode20478, 1, PSend20481);
    
    MethodClosure MC_SMB_minutes_ = new_MethodClosure((Method)PMethod20476, HEADER(Chronology_Duration_Class));
=======
    Array PArray20443 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20445 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20446 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20445);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20447 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20446);
    Array PThreadedCode20444 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20445, (Optr)&t_send1, (Optr)PSend20446, (Optr)&t_send1, (Optr)PSend20447, (Optr)&t_method_return);
    Method PMethod20442 = new_Method_with(PArray20443, empty_Array, empty_Array, PThreadedCode20444, 1, PSend20447);
    
    MethodClosure MC_SMB_minutes_ = new_MethodClosure((Method)PMethod20442, HEADER(Chronology_Duration_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Chronology_Duration_Class), SMB_minutes_, MC_SMB_minutes_);
}


static void init_class_SMB_seconds_() {
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
<<<<<<< HEAD
    Array PArray20483 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20485 = new_Send((Optr)self, SMB_basicNew, 0);
    // seconds:. 
    Send PSend20486 = new_Send((Optr)PSend20485, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode20484 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20485, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20486, (Optr)&t_method_return);
    Method PMethod20482 = new_Method_with(PArray20483, empty_Array, empty_Array, PThreadedCode20484, 1, PSend20486);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20482, HEADER(Chronology_Duration_Class));
=======
    Array PArray20449 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20451 = new_Send((Optr)self, SMB_basicNew, 0);
    // seconds:. 
    Send PSend20452 = new_Send((Optr)PSend20451, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode20450 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20451, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20452, (Optr)&t_method_return);
    Method PMethod20448 = new_Method_with(PArray20449, empty_Array, empty_Array, PThreadedCode20450, 1, PSend20452);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20448, HEADER(Chronology_Duration_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Chronology_Duration_Class), SMB_seconds_, MC_SMB_seconds_);
}


static void init_class_SMB_zero() {
    Symbol SMB_zero = new_Symbol(L"zero");
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
<<<<<<< HEAD
    Send PSend20489 = new_Send((Optr)self, SMB_basicNew, 0);
=======
    Send PSend20455 = new_Send((Optr)self, SMB_basicNew, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // seconds:. 
<<<<<<< HEAD
    Send PSend20490 = new_Send((Optr)PSend20489, SMB_seconds_, 1, (Optr)int_0_Const);
    Array PThreadedCode20488 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20489, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20490, (Optr)&t_method_return);
    Method PMethod20487 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20488, 1, PSend20490);
    
    MethodClosure MC_SMB_zero = new_MethodClosure((Method)PMethod20487, HEADER(Chronology_Duration_Class));
=======
    Send PSend20456 = new_Send((Optr)PSend20455, SMB_seconds_, 1, (Optr)int_0_Const);
    Array PThreadedCode20454 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20455, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20456, (Optr)&t_method_return);
    Method PMethod20453 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20454, 1, PSend20456);
    
    MethodClosure MC_SMB_zero = new_MethodClosure((Method)PMethod20453, HEADER(Chronology_Duration_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Chronology_Duration_Class), SMB_zero, MC_SMB_zero);
}


static void init_class_SMB_hours_() {
    Symbol SMB_hours_ = new_Symbol(L"hours:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
<<<<<<< HEAD
    Array PArray20492 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20494 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20495 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20494);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20496 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20495);
    Array PThreadedCode20493 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20494, (Optr)&t_send1, (Optr)PSend20495, (Optr)&t_send1, (Optr)PSend20496, (Optr)&t_method_return);
    Method PMethod20491 = new_Method_with(PArray20492, empty_Array, empty_Array, PThreadedCode20493, 1, PSend20496);
    
    MethodClosure MC_SMB_hours_ = new_MethodClosure((Method)PMethod20491, HEADER(Chronology_Duration_Class));
=======
    Array PArray20458 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20460 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20461 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20460);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20462 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20461);
    Array PThreadedCode20459 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20460, (Optr)&t_send1, (Optr)PSend20461, (Optr)&t_send1, (Optr)PSend20462, (Optr)&t_method_return);
    Method PMethod20457 = new_Method_with(PArray20458, empty_Array, empty_Array, PThreadedCode20459, 1, PSend20462);
    
    MethodClosure MC_SMB_hours_ = new_MethodClosure((Method)PMethod20457, HEADER(Chronology_Duration_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Chronology_Duration_Class), SMB_hours_, MC_SMB_hours_);
}


static void init_class_SMB_days_() {
    Symbol SMB_days_ = new_Symbol(L"days:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
<<<<<<< HEAD
    Array PArray20498 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20500 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20501 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20500);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20502 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20501);
    Array PThreadedCode20499 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20500, (Optr)&t_send1, (Optr)PSend20501, (Optr)&t_send1, (Optr)PSend20502, (Optr)&t_method_return);
    Method PMethod20497 = new_Method_with(PArray20498, empty_Array, empty_Array, PThreadedCode20499, 1, PSend20502);
    
    MethodClosure MC_SMB_days_ = new_MethodClosure((Method)PMethod20497, HEADER(Chronology_Duration_Class));
=======
    Array PArray20464 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20466 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20467 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20466);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20468 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20467);
    Array PThreadedCode20465 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20466, (Optr)&t_send1, (Optr)PSend20467, (Optr)&t_send1, (Optr)PSend20468, (Optr)&t_method_return);
    Method PMethod20463 = new_Method_with(PArray20464, empty_Array, empty_Array, PThreadedCode20465, 1, PSend20468);
    
    MethodClosure MC_SMB_days_ = new_MethodClosure((Method)PMethod20463, HEADER(Chronology_Duration_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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