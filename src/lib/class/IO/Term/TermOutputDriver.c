#include <lib/class/IO/Term/TermOutputDriver.h>


Optr slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance;
Optr slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance;
Optr layout_IO_Term_TermOutputDriver_Class_class;
Optr slot_IO_Term_TermOutputDriver_termcap;
Optr slot_IO_Term_TermOutputDriver_outStream;
Optr slot_IO_Term_TermOutputDriver_currentBackground;
Optr slot_IO_Term_TermOutputDriver_currentColor;
Optr slot_IO_Term_TermOutputDriver_light;
Optr slot_IO_Term_TermOutputDriver_blink;
Optr slot_IO_Term_TermOutputDriver_shouldEcho;
Optr layout_IO_Term_TermOutputDriver;


static void init_SMB_csiEscape() {
    Symbol SMB_csiEscape = new_Symbol(L"csiEscape");
    Symbol SMB_escape = new_Symbol(L"escape");
    // escape. 
<<<<<<< HEAD
    Send PSend8676 = new_Send((Optr)Character_classReference, SMB_escape, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8677 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8676);
    Character char_8678 = new_Character(L'[');
    Constant char_8678_Const = new_Constant((Optr)char_8678);
    // <<. 
    Send PSend8679 = new_Send((Optr)PSend8677, SMB__shiftLeft_, 1, (Optr)char_8678_Const);
    Array PThreadedCode8675 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend8676, (Optr)&t_send1, (Optr)PSend8677, (Optr)&t_push1, (Optr)char_8678, (Optr)&t_send1, (Optr)PSend8679, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8674 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8675, 2, PSend8679, self);
    
    MethodClosure MC_SMB_csiEscape = new_MethodClosure((Method)PMethod8674, IO_Term_TermOutputDriver_Class);
=======
    Send PSend8642 = new_Send((Optr)Character_classReference, SMB_escape, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8643 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8642);
    Character char_8644 = new_Character(L'[');
    Constant char_8644_Const = new_Constant((Optr)char_8644);
    // <<. 
    Send PSend8645 = new_Send((Optr)PSend8643, SMB__shiftLeft_, 1, (Optr)char_8644_Const);
    Array PThreadedCode8641 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend8642, (Optr)&t_send1, (Optr)PSend8643, (Optr)&t_push1, (Optr)char_8644, (Optr)&t_send1, (Optr)PSend8645, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8640 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8641, 2, PSend8645, self);
    
    MethodClosure MC_SMB_csiEscape = new_MethodClosure((Method)PMethod8640, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_csiEscape, MC_SMB_csiEscape);
}


static void init_SMB_outStream_() {
    Symbol SMB_outStream_ = new_Symbol(L"outStream:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
<<<<<<< HEAD
    Array PArray8681 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Assign PAssign8683 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)VAR_stream_0_0);
    Array PThreadedCode8682 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8683, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8680 = new_Method_with(PArray8681, empty_Array, empty_Array, PThreadedCode8682, 2, PAssign8683, self);
    
    MethodClosure MC_SMB_outStream_ = new_MethodClosure((Method)PMethod8680, IO_Term_TermOutputDriver_Class);
=======
    Array PArray8647 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Assign PAssign8649 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)VAR_stream_0_0);
    Array PThreadedCode8648 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8649, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8646 = new_Method_with(PArray8647, empty_Array, empty_Array, PThreadedCode8648, 2, PAssign8649, self);
    
    MethodClosure MC_SMB_outStream_ = new_MethodClosure((Method)PMethod8646, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_outStream_, MC_SMB_outStream_);
}


static void init_SMB_escape() {
    Symbol SMB_escape = new_Symbol(L"escape");
    // escape. 
<<<<<<< HEAD
    Send PSend8686 = new_Send((Optr)Character_classReference, SMB_escape, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8687 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8686);
    Array PThreadedCode8685 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend8686, (Optr)&t_send1, (Optr)PSend8687, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8684 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8685, 2, PSend8687, self);
    
    MethodClosure MC_SMB_escape = new_MethodClosure((Method)PMethod8684, IO_Term_TermOutputDriver_Class);
=======
    Send PSend8652 = new_Send((Optr)Character_classReference, SMB_escape, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8653 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8652);
    Array PThreadedCode8651 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend8652, (Optr)&t_send1, (Optr)PSend8653, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8650 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8651, 2, PSend8653, self);
    
    MethodClosure MC_SMB_escape = new_MethodClosure((Method)PMethod8650, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_escape, MC_SMB_escape);
}


static void init_SMB_light() {
    Symbol SMB_light = new_Symbol(L"light");
<<<<<<< HEAD
    Assign PAssign8690 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_light, (Optr)true_Const);
    Array PThreadedCode8689 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign8690, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8688 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8689, 2, PAssign8690, self);
    
    MethodClosure MC_SMB_light = new_MethodClosure((Method)PMethod8688, IO_Term_TermOutputDriver_Class);
=======
    Assign PAssign8656 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_light, (Optr)true_Const);
    Array PThreadedCode8655 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign8656, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8654 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8655, 2, PAssign8656, self);
    
    MethodClosure MC_SMB_light = new_MethodClosure((Method)PMethod8654, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_light, MC_SMB_light);
}


static void init_SMB_normal() {
    Symbol SMB_normal = new_Symbol(L"normal");
<<<<<<< HEAD
    String string_8693 = new_String(L"me");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8693_Const = new_Constant((Optr)string_8693);
    // getstr:. 
    Send PSend8694 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8693_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8695 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8694);
    Array PThreadedCode8692 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8693, (Optr)&t_send1, (Optr)PSend8694, (Optr)&t_send1, (Optr)PSend8695, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8691 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8692, 2, PSend8695, self);
    
    MethodClosure MC_SMB_normal = new_MethodClosure((Method)PMethod8691, IO_Term_TermOutputDriver_Class);
=======
    String string_8659 = new_String(L"me");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8659_Const = new_Constant((Optr)string_8659);
    // getstr:. 
    Send PSend8660 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8659_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8661 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8660);
    Array PThreadedCode8658 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8659, (Optr)&t_send1, (Optr)PSend8660, (Optr)&t_send1, (Optr)PSend8661, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8657 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8658, 2, PSend8661, self);
    
    MethodClosure MC_SMB_normal = new_MethodClosure((Method)PMethod8657, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_normal, MC_SMB_normal);
}


static void init_SMB_color_() {
    Symbol SMB_color_ = new_Symbol(L"color:");
    Variable VAR_aColor_0_0 = new_Variable_named(L"aColor", 0);
<<<<<<< HEAD
    Array PArray8697 = new_Array_with(1, (Optr)VAR_aColor_0_0);
    Assign PAssign8699 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_currentColor, (Optr)VAR_aColor_0_0);
    Symbol SMB_colorEscape = new_Symbol(L"colorEscape");
    // colorEscape. 
    Send PSend8700 = new_Send((Optr)self, SMB_colorEscape, 0);
    Array PThreadedCode8698 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign8699, (Optr)&t_push_variable, (Optr)VAR_aColor_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8700, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8696 = new_Method_with(PArray8697, empty_Array, empty_Array, PThreadedCode8698, 3, PAssign8699, PSend8700, self);
    
    MethodClosure MC_SMB_color_ = new_MethodClosure((Method)PMethod8696, IO_Term_TermOutputDriver_Class);
=======
    Array PArray8663 = new_Array_with(1, (Optr)VAR_aColor_0_0);
    Assign PAssign8665 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_currentColor, (Optr)VAR_aColor_0_0);
    Symbol SMB_colorEscape = new_Symbol(L"colorEscape");
    // colorEscape. 
    Send PSend8666 = new_Send((Optr)self, SMB_colorEscape, 0);
    Array PThreadedCode8664 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign8665, (Optr)&t_push_variable, (Optr)VAR_aColor_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8666, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8662 = new_Method_with(PArray8663, empty_Array, empty_Array, PThreadedCode8664, 3, PAssign8665, PSend8666, self);
    
    MethodClosure MC_SMB_color_ = new_MethodClosure((Method)PMethod8662, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_color_, MC_SMB_color_);
}


static void init_SMB_underlineOff() {
    Symbol SMB_underlineOff = new_Symbol(L"underlineOff");
<<<<<<< HEAD
    String string_8703 = new_String(L"ue");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8703_Const = new_Constant((Optr)string_8703);
    // getstr:. 
    Send PSend8704 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8703_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8705 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8704);
    Array PThreadedCode8702 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8703, (Optr)&t_send1, (Optr)PSend8704, (Optr)&t_send1, (Optr)PSend8705, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8701 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8702, 2, PSend8705, self);
    
    MethodClosure MC_SMB_underlineOff = new_MethodClosure((Method)PMethod8701, IO_Term_TermOutputDriver_Class);
=======
    String string_8669 = new_String(L"ue");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8669_Const = new_Constant((Optr)string_8669);
    // getstr:. 
    Send PSend8670 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8669_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8671 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8670);
    Array PThreadedCode8668 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8669, (Optr)&t_send1, (Optr)PSend8670, (Optr)&t_send1, (Optr)PSend8671, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8667 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8668, 2, PSend8671, self);
    
    MethodClosure MC_SMB_underlineOff = new_MethodClosure((Method)PMethod8667, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_underlineOff, MC_SMB_underlineOff);
}


static void init_SMB_bold() {
    Symbol SMB_bold = new_Symbol(L"bold");
<<<<<<< HEAD
    String string_8708 = new_String(L"md");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8708_Const = new_Constant((Optr)string_8708);
    // getstr:. 
    Send PSend8709 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8708_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8710 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8709);
    Array PThreadedCode8707 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8708, (Optr)&t_send1, (Optr)PSend8709, (Optr)&t_send1, (Optr)PSend8710, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8706 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8707, 2, PSend8710, self);
    
    MethodClosure MC_SMB_bold = new_MethodClosure((Method)PMethod8706, IO_Term_TermOutputDriver_Class);
=======
    String string_8674 = new_String(L"md");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8674_Const = new_Constant((Optr)string_8674);
    // getstr:. 
    Send PSend8675 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8674_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8676 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8675);
    Array PThreadedCode8673 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8674, (Optr)&t_send1, (Optr)PSend8675, (Optr)&t_send1, (Optr)PSend8676, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8672 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8673, 2, PSend8676, self);
    
    MethodClosure MC_SMB_bold = new_MethodClosure((Method)PMethod8672, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_bold, MC_SMB_bold);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
<<<<<<< HEAD
    Super PSuper8713 = new_Super(SMB_initialize, 0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend8715 = new_Send((Optr)PTermcap_classReference, SMB_instance, 0);
    Assign PAssign8714 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)PSend8715);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend8717 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Assign PAssign8716 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)PSend8717);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend8718 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode8712 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8713, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8714, (Optr)&t_push_class_reference, (Optr)PTermcap_classReference, (Optr)&t_send0, (Optr)PSend8715, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8716, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend8717, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8718, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8711 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8712, 5, PSuper8713, PAssign8714, PAssign8716, PSend8718, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8711, IO_Term_TermOutputDriver_Class);
=======
    Super PSuper8679 = new_Super(SMB_initialize, 0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend8681 = new_Send((Optr)PTermcap_classReference, SMB_instance, 0);
    Assign PAssign8680 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)PSend8681);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend8683 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Assign PAssign8682 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)PSend8683);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend8684 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode8678 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8679, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8680, (Optr)&t_push_class_reference, (Optr)PTermcap_classReference, (Optr)&t_send0, (Optr)PSend8681, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8682, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend8683, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8684, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8677 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8678, 5, PSuper8679, PAssign8680, PAssign8682, PSend8684, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8677, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_insertCharacter() {
    Symbol SMB_insertCharacter = new_Symbol(L"insertCharacter");
<<<<<<< HEAD
    String string_8721 = new_String(L"ic");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8721_Const = new_Constant((Optr)string_8721);
    // getstr:. 
    Send PSend8722 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8721_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8723 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8722);
    Array PThreadedCode8720 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8721, (Optr)&t_send1, (Optr)PSend8722, (Optr)&t_send1, (Optr)PSend8723, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8719 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8720, 2, PSend8723, self);
    
    MethodClosure MC_SMB_insertCharacter = new_MethodClosure((Method)PMethod8719, IO_Term_TermOutputDriver_Class);
=======
    String string_8687 = new_String(L"ic");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8687_Const = new_Constant((Optr)string_8687);
    // getstr:. 
    Send PSend8688 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8687_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8689 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8688);
    Array PThreadedCode8686 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8687, (Optr)&t_send1, (Optr)PSend8688, (Optr)&t_send1, (Optr)PSend8689, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8685 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8686, 2, PSend8689, self);
    
    MethodClosure MC_SMB_insertCharacter = new_MethodClosure((Method)PMethod8685, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_insertCharacter, MC_SMB_insertCharacter);
}


static void init_SMB_cursorInvisible() {
    Symbol SMB_cursorInvisible = new_Symbol(L"cursorInvisible");
<<<<<<< HEAD
    String string_8726 = new_String(L"vi");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8726_Const = new_Constant((Optr)string_8726);
    // getstr:. 
    Send PSend8727 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8726_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8728 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8727);
    Array PThreadedCode8725 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8726, (Optr)&t_send1, (Optr)PSend8727, (Optr)&t_send1, (Optr)PSend8728, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8724 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8725, 2, PSend8728, self);
    
    MethodClosure MC_SMB_cursorInvisible = new_MethodClosure((Method)PMethod8724, IO_Term_TermOutputDriver_Class);
=======
    String string_8692 = new_String(L"vi");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8692_Const = new_Constant((Optr)string_8692);
    // getstr:. 
    Send PSend8693 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8692_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8694 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8693);
    Array PThreadedCode8691 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8692, (Optr)&t_send1, (Optr)PSend8693, (Optr)&t_send1, (Optr)PSend8694, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8690 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8691, 2, PSend8694, self);
    
    MethodClosure MC_SMB_cursorInvisible = new_MethodClosure((Method)PMethod8690, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_cursorInvisible, MC_SMB_cursorInvisible);
}


static void init_SMB_here() {
    Symbol SMB_here = new_Symbol(L"here");
    Symbol SMB_csiEscape = new_Symbol(L"csiEscape");
    // csiEscape. 
<<<<<<< HEAD
    Send PSend8731 = new_Send((Optr)self, SMB_csiEscape, 0);
    Character char_8732 = new_Character(L'E');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8732_Const = new_Constant((Optr)char_8732);
    // <<. 
    Send PSend8733 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8732_Const);
    Array PThreadedCode8730 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8731, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8732, (Optr)&t_send1, (Optr)PSend8733, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8729 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8730, 3, PSend8731, PSend8733, self);
    
    MethodClosure MC_SMB_here = new_MethodClosure((Method)PMethod8729, IO_Term_TermOutputDriver_Class);
=======
    Send PSend8697 = new_Send((Optr)self, SMB_csiEscape, 0);
    Character char_8698 = new_Character(L'E');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8698_Const = new_Constant((Optr)char_8698);
    // <<. 
    Send PSend8699 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8698_Const);
    Array PThreadedCode8696 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8697, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8698, (Optr)&t_send1, (Optr)PSend8699, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8695 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8696, 3, PSend8697, PSend8699, self);
    
    MethodClosure MC_SMB_here = new_MethodClosure((Method)PMethod8695, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_here, MC_SMB_here);
}


static void init_SMB_home() {
    Symbol SMB_home = new_Symbol(L"home");
<<<<<<< HEAD
    String string_8736 = new_String(L"ho");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8736_Const = new_Constant((Optr)string_8736);
    // getstr:. 
    Send PSend8737 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8736_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8738 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8737);
    Array PThreadedCode8735 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8736, (Optr)&t_send1, (Optr)PSend8737, (Optr)&t_send1, (Optr)PSend8738, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8734 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8735, 2, PSend8738, self);
    
    MethodClosure MC_SMB_home = new_MethodClosure((Method)PMethod8734, IO_Term_TermOutputDriver_Class);
=======
    String string_8702 = new_String(L"ho");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8702_Const = new_Constant((Optr)string_8702);
    // getstr:. 
    Send PSend8703 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8702_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8704 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8703);
    Array PThreadedCode8701 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8702, (Optr)&t_send1, (Optr)PSend8703, (Optr)&t_send1, (Optr)PSend8704, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8700 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8701, 2, PSend8704, self);
    
    MethodClosure MC_SMB_home = new_MethodClosure((Method)PMethod8700, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_home, MC_SMB_home);
}


static void init_SMB_yellow() {
    Symbol SMB_yellow = new_Symbol(L"yellow");
    SmallInt int_33 = new_SmallInt(33);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_33_Const = new_Constant((Optr)int_33);
    // color:. 
<<<<<<< HEAD
    Send PSend8741 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_33_Const);
    Array PThreadedCode8740 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_33, (Optr)&t_send1, (Optr)PSend8741, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8739 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8740, 2, PSend8741, self);
    
    MethodClosure MC_SMB_yellow = new_MethodClosure((Method)PMethod8739, IO_Term_TermOutputDriver_Class);
=======
    Send PSend8707 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_33_Const);
    Array PThreadedCode8706 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_33, (Optr)&t_send1, (Optr)PSend8707, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8705 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8706, 2, PSend8707, self);
    
    MethodClosure MC_SMB_yellow = new_MethodClosure((Method)PMethod8705, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_yellow, MC_SMB_yellow);
}


static void init_SMB_colorEscape() {
    Symbol SMB_colorEscape = new_Symbol(L"colorEscape");
    Symbol SMB_csiEscape = new_Symbol(L"csiEscape");
    // csiEscape. 
<<<<<<< HEAD
    Send PSend8744 = new_Send((Optr)self, SMB_csiEscape, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_8748 = new_String(L"5;");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_8748_Const = new_Constant((Optr)string_8748);
    // <<. 
    Send PSend8749 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)string_8748_Const);
    Array PThreadedCode8747 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)string_8748, (Optr)&t_send1, (Optr)PSend8749, (Optr)&t_block_return);
    Block PBlock8746 = new_Block_with(empty_Array, empty_Array, PThreadedCode8747, 1, PSend8749);
    // ifTrue:. 
    Send PSend8745 = new_Send((Optr)slot_IO_Term_TermOutputDriver_blink, SMB_ifTrue_, 1, (Optr)PBlock8746);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend8750 = new_Send((Optr)slot_IO_Term_TermOutputDriver_currentColor, SMB_asString, 0);
    // <<. 
    Send PSend8751 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8750);
=======
    Send PSend8710 = new_Send((Optr)self, SMB_csiEscape, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_8714 = new_String(L"5;");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_8714_Const = new_Constant((Optr)string_8714);
    // <<. 
    Send PSend8715 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)string_8714_Const);
    Array PThreadedCode8713 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)string_8714, (Optr)&t_send1, (Optr)PSend8715, (Optr)&t_block_return);
    Block PBlock8712 = new_Block_with(empty_Array, empty_Array, PThreadedCode8713, 1, PSend8715);
    // ifTrue:. 
    Send PSend8711 = new_Send((Optr)slot_IO_Term_TermOutputDriver_blink, SMB_ifTrue_, 1, (Optr)PBlock8712);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend8716 = new_Send((Optr)slot_IO_Term_TermOutputDriver_currentColor, SMB_asString, 0);
    // <<. 
    Send PSend8717 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8716);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__pequals_ = new_Symbol(L"==");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ==. 
<<<<<<< HEAD
    Send PSend8752 = new_Send((Optr)slot_IO_Term_TermOutputDriver_currentBackground, SMB__pequals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Character char_8756 = new_Character(L';');
    Constant char_8756_Const = new_Constant((Optr)char_8756);
    // <<. 
    Send PSend8757 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8756_Const);
    // asString. 
    Send PSend8758 = new_Send((Optr)slot_IO_Term_TermOutputDriver_currentBackground, SMB_asString, 0);
    // <<. 
    Send PSend8759 = new_Send((Optr)PSend8757, SMB__shiftLeft_, 1, (Optr)PSend8758);
    Array PThreadedCode8755 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8756, (Optr)&t_send1, (Optr)PSend8757, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_currentBackground, (Optr)&t_send0, (Optr)PSend8758, (Optr)&t_send1, (Optr)PSend8759, (Optr)&t_block_return);
    Block PBlock8754 = new_Block_with(empty_Array, empty_Array, PThreadedCode8755, 1, PSend8759);
    // ifFalse:. 
    Send PSend8753 = new_Send((Optr)PSend8752, SMB_ifFalse_, 1, (Optr)PBlock8754);
    Character char_8760 = new_Character(L'm');
    Constant char_8760_Const = new_Constant((Optr)char_8760);
    // <<. 
    Send PSend8761 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8760_Const);
    Array PThreadedCode8743 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8744, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_blink, (Optr)&t_send_ifTrue_, (Optr)PSend8745, (Optr)PBlock8746, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_currentColor, (Optr)&t_send0, (Optr)PSend8750, (Optr)&t_send1, (Optr)PSend8751, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_currentBackground, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8752, (Optr)&t_send_ifFalse_, (Optr)PSend8753, (Optr)PBlock8754, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8760, (Optr)&t_send1, (Optr)PSend8761, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8742 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8743, 6, PSend8744, PSend8745, PSend8751, PSend8753, PSend8761, self);
    
    MethodClosure MC_SMB_colorEscape = new_MethodClosure((Method)PMethod8742, IO_Term_TermOutputDriver_Class);
=======
    Send PSend8718 = new_Send((Optr)slot_IO_Term_TermOutputDriver_currentBackground, SMB__pequals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Character char_8722 = new_Character(L';');
    Constant char_8722_Const = new_Constant((Optr)char_8722);
    // <<. 
    Send PSend8723 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8722_Const);
    // asString. 
    Send PSend8724 = new_Send((Optr)slot_IO_Term_TermOutputDriver_currentBackground, SMB_asString, 0);
    // <<. 
    Send PSend8725 = new_Send((Optr)PSend8723, SMB__shiftLeft_, 1, (Optr)PSend8724);
    Array PThreadedCode8721 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8722, (Optr)&t_send1, (Optr)PSend8723, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_currentBackground, (Optr)&t_send0, (Optr)PSend8724, (Optr)&t_send1, (Optr)PSend8725, (Optr)&t_block_return);
    Block PBlock8720 = new_Block_with(empty_Array, empty_Array, PThreadedCode8721, 1, PSend8725);
    // ifFalse:. 
    Send PSend8719 = new_Send((Optr)PSend8718, SMB_ifFalse_, 1, (Optr)PBlock8720);
    Character char_8726 = new_Character(L'm');
    Constant char_8726_Const = new_Constant((Optr)char_8726);
    // <<. 
    Send PSend8727 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8726_Const);
    Array PThreadedCode8709 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8710, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_blink, (Optr)&t_send_ifTrue_, (Optr)PSend8711, (Optr)PBlock8712, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_currentColor, (Optr)&t_send0, (Optr)PSend8716, (Optr)&t_send1, (Optr)PSend8717, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_currentBackground, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8718, (Optr)&t_send_ifFalse_, (Optr)PSend8719, (Optr)PBlock8720, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8726, (Optr)&t_send1, (Optr)PSend8727, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8708 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8709, 6, PSend8710, PSend8711, PSend8717, PSend8719, PSend8727, self);
    
    MethodClosure MC_SMB_colorEscape = new_MethodClosure((Method)PMethod8708, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_colorEscape, MC_SMB_colorEscape);
}


static void init_SMB_noEcho() {
    Symbol SMB_noEcho = new_Symbol(L"noEcho");
    Symbol SMB_echo_ = new_Symbol(L"echo:");
    // echo:. 
<<<<<<< HEAD
    Send PSend8764 = new_Send((Optr)self, SMB_echo_, 1, (Optr)false_Const);
    Array PThreadedCode8763 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend8764, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8762 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8763, 2, PSend8764, self);
    
    MethodClosure MC_SMB_noEcho = new_MethodClosure((Method)PMethod8762, IO_Term_TermOutputDriver_Class);
=======
    Send PSend8730 = new_Send((Optr)self, SMB_echo_, 1, (Optr)false_Const);
    Array PThreadedCode8729 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend8730, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8728 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8729, 2, PSend8730, self);
    
    MethodClosure MC_SMB_noEcho = new_MethodClosure((Method)PMethod8728, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_noEcho, MC_SMB_noEcho);
}


static void init_SMB_black() {
    Symbol SMB_black = new_Symbol(L"black");
    SmallInt int_30 = new_SmallInt(30);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_30_Const = new_Constant((Optr)int_30);
    // color:. 
<<<<<<< HEAD
    Send PSend8767 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_30_Const);
    Array PThreadedCode8766 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send1, (Optr)PSend8767, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8765 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8766, 2, PSend8767, self);
    
    MethodClosure MC_SMB_black = new_MethodClosure((Method)PMethod8765, IO_Term_TermOutputDriver_Class);
=======
    Send PSend8733 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_30_Const);
    Array PThreadedCode8732 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send1, (Optr)PSend8733, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8731 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8732, 2, PSend8733, self);
    
    MethodClosure MC_SMB_black = new_MethodClosure((Method)PMethod8731, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_black, MC_SMB_black);
}


static void init_SMB_green() {
    Symbol SMB_green = new_Symbol(L"green");
    SmallInt int_32 = new_SmallInt(32);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_32_Const = new_Constant((Optr)int_32);
    // color:. 
<<<<<<< HEAD
    Send PSend8770 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_32_Const);
    Array PThreadedCode8769 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_32, (Optr)&t_send1, (Optr)PSend8770, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8768 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8769, 2, PSend8770, self);
    
    MethodClosure MC_SMB_green = new_MethodClosure((Method)PMethod8768, IO_Term_TermOutputDriver_Class);
=======
    Send PSend8736 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_32_Const);
    Array PThreadedCode8735 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_32, (Optr)&t_send1, (Optr)PSend8736, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8734 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8735, 2, PSend8736, self);
    
    MethodClosure MC_SMB_green = new_MethodClosure((Method)PMethod8734, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_green, MC_SMB_green);
}


static void init_SMB_underline() {
    Symbol SMB_underline = new_Symbol(L"underline");
<<<<<<< HEAD
    String string_8773 = new_String(L"us");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8773_Const = new_Constant((Optr)string_8773);
    // getstr:. 
    Send PSend8774 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8773_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8775 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8774);
    Array PThreadedCode8772 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8773, (Optr)&t_send1, (Optr)PSend8774, (Optr)&t_send1, (Optr)PSend8775, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8771 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8772, 2, PSend8775, self);
    
    MethodClosure MC_SMB_underline = new_MethodClosure((Method)PMethod8771, IO_Term_TermOutputDriver_Class);
=======
    String string_8739 = new_String(L"us");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8739_Const = new_Constant((Optr)string_8739);
    // getstr:. 
    Send PSend8740 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8739_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8741 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8740);
    Array PThreadedCode8738 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8739, (Optr)&t_send1, (Optr)PSend8740, (Optr)&t_send1, (Optr)PSend8741, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8737 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8738, 2, PSend8741, self);
    
    MethodClosure MC_SMB_underline = new_MethodClosure((Method)PMethod8737, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_underline, MC_SMB_underline);
}


static void init_SMB_invisible() {
    Symbol SMB_invisible = new_Symbol(L"invisible");
<<<<<<< HEAD
    String string_8778 = new_String(L"mk");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8778_Const = new_Constant((Optr)string_8778);
    // getstr:. 
    Send PSend8779 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8778_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8780 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8779);
    Array PThreadedCode8777 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8778, (Optr)&t_send1, (Optr)PSend8779, (Optr)&t_send1, (Optr)PSend8780, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8776 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8777, 2, PSend8780, self);
    
    MethodClosure MC_SMB_invisible = new_MethodClosure((Method)PMethod8776, IO_Term_TermOutputDriver_Class);
=======
    String string_8744 = new_String(L"mk");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8744_Const = new_Constant((Optr)string_8744);
    // getstr:. 
    Send PSend8745 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8744_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8746 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8745);
    Array PThreadedCode8743 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8744, (Optr)&t_send1, (Optr)PSend8745, (Optr)&t_send1, (Optr)PSend8746, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8742 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8743, 2, PSend8746, self);
    
    MethodClosure MC_SMB_invisible = new_MethodClosure((Method)PMethod8742, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_invisible, MC_SMB_invisible);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
<<<<<<< HEAD
    Assign PAssign8783 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_currentColor, (Optr)int_0_Const);
    Assign PAssign8784 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_currentBackground, (Optr)int_0_Const);
    Assign PAssign8785 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_light, (Optr)false_Const);
    Assign PAssign8786 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_blink, (Optr)false_Const);
    Array PThreadedCode8782 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign8783, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8784, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8785, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8786, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8781 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8782, 5, PAssign8783, PAssign8784, PAssign8785, PAssign8786, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod8781, IO_Term_TermOutputDriver_Class);
=======
    Assign PAssign8749 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_currentColor, (Optr)int_0_Const);
    Assign PAssign8750 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_currentBackground, (Optr)int_0_Const);
    Assign PAssign8751 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_light, (Optr)false_Const);
    Assign PAssign8752 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_blink, (Optr)false_Const);
    Array PThreadedCode8748 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign8749, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8750, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8751, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8752, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8747 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8748, 5, PAssign8749, PAssign8750, PAssign8751, PAssign8752, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod8747, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_yellow_() {
    Symbol SMB_yellow_ = new_Symbol(L"yellow:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
<<<<<<< HEAD
    Array PArray8788 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8791 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_yellow = new_Symbol(L"yellow");
    // yellow. 
    Send PSend8793 = new_Send((Optr)VAR__receiver__1_0, SMB_yellow, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8794 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8795 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8796 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8792 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8793, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8794, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8795, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8796, (Optr)&t_method_return);
    Block PBlock8790 = new_Block_with(PArray8791, empty_Array, PThreadedCode8792, 4, PSend8793, PSend8794, PSend8795, PSend8796);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8797 = new_Send((Optr)PBlock8790, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8789 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8790, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8797, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8787 = new_Method_with(PArray8788, empty_Array, empty_Array, PThreadedCode8789, 2, PSend8797, self);
    
    MethodClosure MC_SMB_yellow_ = new_MethodClosure((Method)PMethod8787, IO_Term_TermOutputDriver_Class);
=======
    Array PArray8754 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8757 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_yellow = new_Symbol(L"yellow");
    // yellow. 
    Send PSend8759 = new_Send((Optr)VAR__receiver__1_0, SMB_yellow, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8760 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8761 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8762 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8758 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8759, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8760, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8761, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8762, (Optr)&t_method_return);
    Block PBlock8756 = new_Block_with(PArray8757, empty_Array, PThreadedCode8758, 4, PSend8759, PSend8760, PSend8761, PSend8762);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8763 = new_Send((Optr)PBlock8756, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8755 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8756, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8763, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8753 = new_Method_with(PArray8754, empty_Array, empty_Array, PThreadedCode8755, 2, PSend8763, self);
    
    MethodClosure MC_SMB_yellow_ = new_MethodClosure((Method)PMethod8753, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_yellow_, MC_SMB_yellow_);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Symbol SMB_csiEscape = new_Symbol(L"csiEscape");
    // csiEscape. 
<<<<<<< HEAD
    Send PSend8800 = new_Send((Optr)self, SMB_csiEscape, 0);
    Character char_8801 = new_Character(L'B');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8801_Const = new_Constant((Optr)char_8801);
    // <<. 
    Send PSend8802 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8801_Const);
    Array PThreadedCode8799 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8800, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8801, (Optr)&t_send1, (Optr)PSend8802, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8798 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8799, 3, PSend8800, PSend8802, self);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod8798, IO_Term_TermOutputDriver_Class);
=======
    Send PSend8766 = new_Send((Optr)self, SMB_csiEscape, 0);
    Character char_8767 = new_Character(L'B');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8767_Const = new_Constant((Optr)char_8767);
    // <<. 
    Send PSend8768 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8767_Const);
    Array PThreadedCode8765 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8766, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8767, (Optr)&t_send1, (Optr)PSend8768, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8764 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8765, 3, PSend8766, PSend8768, self);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod8764, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_columns() {
    Symbol SMB_columns = new_Symbol(L"columns");
<<<<<<< HEAD
    String string_8805 = new_String(L"co");
    Symbol SMB_getnum_ = new_Symbol(L"getnum:");
    Constant string_8805_Const = new_Constant((Optr)string_8805);
    // getnum:. 
    Send PSend8806 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getnum_, 1, (Optr)string_8805_Const);
    Array PThreadedCode8804 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8805, (Optr)&t_send1, (Optr)PSend8806, (Optr)&t_method_return);
    Method PMethod8803 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8804, 1, PSend8806);
    
    MethodClosure MC_SMB_columns = new_MethodClosure((Method)PMethod8803, IO_Term_TermOutputDriver_Class);
=======
    String string_8771 = new_String(L"co");
    Symbol SMB_getnum_ = new_Symbol(L"getnum:");
    Constant string_8771_Const = new_Constant((Optr)string_8771);
    // getnum:. 
    Send PSend8772 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getnum_, 1, (Optr)string_8771_Const);
    Array PThreadedCode8770 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8771, (Optr)&t_send1, (Optr)PSend8772, (Optr)&t_method_return);
    Method PMethod8769 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8770, 1, PSend8772);
    
    MethodClosure MC_SMB_columns = new_MethodClosure((Method)PMethod8769, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_columns, MC_SMB_columns);
}


static void init_SMB_cyan_() {
    Symbol SMB_cyan_ = new_Symbol(L"cyan:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
<<<<<<< HEAD
    Array PArray8808 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8811 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_cyan = new_Symbol(L"cyan");
    // cyan. 
    Send PSend8813 = new_Send((Optr)VAR__receiver__1_0, SMB_cyan, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8814 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8815 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8816 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8812 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8813, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8814, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8815, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8816, (Optr)&t_method_return);
    Block PBlock8810 = new_Block_with(PArray8811, empty_Array, PThreadedCode8812, 4, PSend8813, PSend8814, PSend8815, PSend8816);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8817 = new_Send((Optr)PBlock8810, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8809 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8810, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8817, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8807 = new_Method_with(PArray8808, empty_Array, empty_Array, PThreadedCode8809, 2, PSend8817, self);
    
    MethodClosure MC_SMB_cyan_ = new_MethodClosure((Method)PMethod8807, IO_Term_TermOutputDriver_Class);
=======
    Array PArray8774 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8777 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_cyan = new_Symbol(L"cyan");
    // cyan. 
    Send PSend8779 = new_Send((Optr)VAR__receiver__1_0, SMB_cyan, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8780 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8781 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8782 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8778 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8779, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8780, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8781, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8782, (Optr)&t_method_return);
    Block PBlock8776 = new_Block_with(PArray8777, empty_Array, PThreadedCode8778, 4, PSend8779, PSend8780, PSend8781, PSend8782);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8783 = new_Send((Optr)PBlock8776, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8775 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8776, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8783, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8773 = new_Method_with(PArray8774, empty_Array, empty_Array, PThreadedCode8775, 2, PSend8783, self);
    
    MethodClosure MC_SMB_cyan_ = new_MethodClosure((Method)PMethod8773, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_cyan_, MC_SMB_cyan_);
}


static void init_SMB_red() {
    Symbol SMB_red = new_Symbol(L"red");
    SmallInt int_31 = new_SmallInt(31);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_31_Const = new_Constant((Optr)int_31);
    // color:. 
<<<<<<< HEAD
    Send PSend8820 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_31_Const);
    Array PThreadedCode8819 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send1, (Optr)PSend8820, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8818 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8819, 2, PSend8820, self);
    
    MethodClosure MC_SMB_red = new_MethodClosure((Method)PMethod8818, IO_Term_TermOutputDriver_Class);
=======
    Send PSend8786 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_31_Const);
    Array PThreadedCode8785 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send1, (Optr)PSend8786, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8784 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8785, 2, PSend8786, self);
    
    MethodClosure MC_SMB_red = new_MethodClosure((Method)PMethod8784, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_red, MC_SMB_red);
}


static void init_SMB_insertLine() {
    Symbol SMB_insertLine = new_Symbol(L"insertLine");
<<<<<<< HEAD
    String string_8823 = new_String(L"al");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8823_Const = new_Constant((Optr)string_8823);
    // getstr:. 
    Send PSend8824 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8823_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8825 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8824);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend8826 = new_Send((Optr)self, SMB_cr, 0);
    Array PThreadedCode8822 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8823, (Optr)&t_send1, (Optr)PSend8824, (Optr)&t_send1, (Optr)PSend8825, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8826, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8821 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8822, 3, PSend8825, PSend8826, self);
    
    MethodClosure MC_SMB_insertLine = new_MethodClosure((Method)PMethod8821, IO_Term_TermOutputDriver_Class);
=======
    String string_8789 = new_String(L"al");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8789_Const = new_Constant((Optr)string_8789);
    // getstr:. 
    Send PSend8790 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8789_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8791 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8790);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend8792 = new_Send((Optr)self, SMB_cr, 0);
    Array PThreadedCode8788 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8789, (Optr)&t_send1, (Optr)PSend8790, (Optr)&t_send1, (Optr)PSend8791, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8792, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8787 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8788, 3, PSend8791, PSend8792, self);
    
    MethodClosure MC_SMB_insertLine = new_MethodClosure((Method)PMethod8787, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_insertLine, MC_SMB_insertLine);
}


static void init_SMB_blinking() {
    Symbol SMB_blinking = new_Symbol(L"blinking");
<<<<<<< HEAD
    String string_8829 = new_String(L"mb");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8829_Const = new_Constant((Optr)string_8829);
    // getstr:. 
    Send PSend8830 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8829_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8831 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8830);
    Array PThreadedCode8828 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8829, (Optr)&t_send1, (Optr)PSend8830, (Optr)&t_send1, (Optr)PSend8831, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8827 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8828, 2, PSend8831, self);
    
    MethodClosure MC_SMB_blinking = new_MethodClosure((Method)PMethod8827, IO_Term_TermOutputDriver_Class);
=======
    String string_8795 = new_String(L"mb");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8795_Const = new_Constant((Optr)string_8795);
    // getstr:. 
    Send PSend8796 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8795_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8797 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8796);
    Array PThreadedCode8794 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8795, (Optr)&t_send1, (Optr)PSend8796, (Optr)&t_send1, (Optr)PSend8797, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8793 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8794, 2, PSend8797, self);
    
    MethodClosure MC_SMB_blinking = new_MethodClosure((Method)PMethod8793, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_blinking, MC_SMB_blinking);
}


static void init_SMB_clearToEnd() {
    Symbol SMB_clearToEnd = new_Symbol(L"clearToEnd");
<<<<<<< HEAD
    String string_8834 = new_String(L"ce");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8834_Const = new_Constant((Optr)string_8834);
    // getstr:. 
    Send PSend8835 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8834_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8836 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8835);
    Array PThreadedCode8833 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8834, (Optr)&t_send1, (Optr)PSend8835, (Optr)&t_send1, (Optr)PSend8836, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8832 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8833, 2, PSend8836, self);
    
    MethodClosure MC_SMB_clearToEnd = new_MethodClosure((Method)PMethod8832, IO_Term_TermOutputDriver_Class);
=======
    String string_8800 = new_String(L"ce");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8800_Const = new_Constant((Optr)string_8800);
    // getstr:. 
    Send PSend8801 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8800_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8802 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8801);
    Array PThreadedCode8799 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8800, (Optr)&t_send1, (Optr)PSend8801, (Optr)&t_send1, (Optr)PSend8802, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8798 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8799, 2, PSend8802, self);
    
    MethodClosure MC_SMB_clearToEnd = new_MethodClosure((Method)PMethod8798, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_clearToEnd, MC_SMB_clearToEnd);
}


static void init_SMB_pink_() {
    Symbol SMB_pink_ = new_Symbol(L"pink:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
<<<<<<< HEAD
    Array PArray8838 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8841 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_pink = new_Symbol(L"pink");
    // pink. 
    Send PSend8843 = new_Send((Optr)VAR__receiver__1_0, SMB_pink, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8844 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8845 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8846 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8842 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8843, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8844, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8845, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8846, (Optr)&t_method_return);
    Block PBlock8840 = new_Block_with(PArray8841, empty_Array, PThreadedCode8842, 4, PSend8843, PSend8844, PSend8845, PSend8846);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8847 = new_Send((Optr)PBlock8840, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8839 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8840, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8847, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8837 = new_Method_with(PArray8838, empty_Array, empty_Array, PThreadedCode8839, 2, PSend8847, self);
    
    MethodClosure MC_SMB_pink_ = new_MethodClosure((Method)PMethod8837, IO_Term_TermOutputDriver_Class);
=======
    Array PArray8804 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8807 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_pink = new_Symbol(L"pink");
    // pink. 
    Send PSend8809 = new_Send((Optr)VAR__receiver__1_0, SMB_pink, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8810 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8811 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8812 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8808 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8809, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8810, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8811, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8812, (Optr)&t_method_return);
    Block PBlock8806 = new_Block_with(PArray8807, empty_Array, PThreadedCode8808, 4, PSend8809, PSend8810, PSend8811, PSend8812);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8813 = new_Send((Optr)PBlock8806, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8805 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8806, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8813, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8803 = new_Method_with(PArray8804, empty_Array, empty_Array, PThreadedCode8805, 2, PSend8813, self);
    
    MethodClosure MC_SMB_pink_ = new_MethodClosure((Method)PMethod8803, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_pink_, MC_SMB_pink_);
}


static void init_SMB_deleteLine() {
    Symbol SMB_deleteLine = new_Symbol(L"deleteLine");
<<<<<<< HEAD
    String string_8850 = new_String(L"dl");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8850_Const = new_Constant((Optr)string_8850);
    // getstr:. 
    Send PSend8851 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8850_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8852 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8851);
    Array PThreadedCode8849 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8850, (Optr)&t_send1, (Optr)PSend8851, (Optr)&t_send1, (Optr)PSend8852, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8848 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8849, 2, PSend8852, self);
    
    MethodClosure MC_SMB_deleteLine = new_MethodClosure((Method)PMethod8848, IO_Term_TermOutputDriver_Class);
=======
    String string_8816 = new_String(L"dl");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8816_Const = new_Constant((Optr)string_8816);
    // getstr:. 
    Send PSend8817 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8816_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8818 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8817);
    Array PThreadedCode8815 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8816, (Optr)&t_send1, (Optr)PSend8817, (Optr)&t_send1, (Optr)PSend8818, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8814 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8815, 2, PSend8818, self);
    
    MethodClosure MC_SMB_deleteLine = new_MethodClosure((Method)PMethod8814, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_deleteLine, MC_SMB_deleteLine);
}


static void init_SMB_white() {
    Symbol SMB_white = new_Symbol(L"white");
    SmallInt int_37 = new_SmallInt(37);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_37_Const = new_Constant((Optr)int_37);
    // color:. 
<<<<<<< HEAD
    Send PSend8855 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_37_Const);
    Array PThreadedCode8854 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_37, (Optr)&t_send1, (Optr)PSend8855, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8853 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8854, 2, PSend8855, self);
    
    MethodClosure MC_SMB_white = new_MethodClosure((Method)PMethod8853, IO_Term_TermOutputDriver_Class);
=======
    Send PSend8821 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_37_Const);
    Array PThreadedCode8820 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_37, (Optr)&t_send1, (Optr)PSend8821, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8819 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8820, 2, PSend8821, self);
    
    MethodClosure MC_SMB_white = new_MethodClosure((Method)PMethod8819, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_white, MC_SMB_white);
}


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
<<<<<<< HEAD
    String string_8858 = new_String(L"le");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8858_Const = new_Constant((Optr)string_8858);
    // getstr:. 
    Send PSend8859 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8858_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8860 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8859);
    Array PThreadedCode8857 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8858, (Optr)&t_send1, (Optr)PSend8859, (Optr)&t_send1, (Optr)PSend8860, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8856 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8857, 2, PSend8860, self);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod8856, IO_Term_TermOutputDriver_Class);
=======
    String string_8824 = new_String(L"le");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8824_Const = new_Constant((Optr)string_8824);
    // getstr:. 
    Send PSend8825 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8824_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8826 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8825);
    Array PThreadedCode8823 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8824, (Optr)&t_send1, (Optr)PSend8825, (Optr)&t_send1, (Optr)PSend8826, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8822 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8823, 2, PSend8826, self);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod8822, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_deleteCharacter() {
    Symbol SMB_deleteCharacter = new_Symbol(L"deleteCharacter");
<<<<<<< HEAD
    String string_8863 = new_String(L"dc");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8863_Const = new_Constant((Optr)string_8863);
    // getstr:. 
    Send PSend8864 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8863_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8865 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8864);
    Array PThreadedCode8862 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8863, (Optr)&t_send1, (Optr)PSend8864, (Optr)&t_send1, (Optr)PSend8865, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8861 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8862, 2, PSend8865, self);
    
    MethodClosure MC_SMB_deleteCharacter = new_MethodClosure((Method)PMethod8861, IO_Term_TermOutputDriver_Class);
=======
    String string_8829 = new_String(L"dc");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8829_Const = new_Constant((Optr)string_8829);
    // getstr:. 
    Send PSend8830 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8829_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8831 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8830);
    Array PThreadedCode8828 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8829, (Optr)&t_send1, (Optr)PSend8830, (Optr)&t_send1, (Optr)PSend8831, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8827 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8828, 2, PSend8831, self);
    
    MethodClosure MC_SMB_deleteCharacter = new_MethodClosure((Method)PMethod8827, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_deleteCharacter, MC_SMB_deleteCharacter);
}


static void init_SMB_lines() {
    Symbol SMB_lines = new_Symbol(L"lines");
<<<<<<< HEAD
    String string_8868 = new_String(L"li");
    Symbol SMB_getnum_ = new_Symbol(L"getnum:");
    Constant string_8868_Const = new_Constant((Optr)string_8868);
    // getnum:. 
    Send PSend8869 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getnum_, 1, (Optr)string_8868_Const);
    Array PThreadedCode8867 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8868, (Optr)&t_send1, (Optr)PSend8869, (Optr)&t_method_return);
    Method PMethod8866 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8867, 1, PSend8869);
    
    MethodClosure MC_SMB_lines = new_MethodClosure((Method)PMethod8866, IO_Term_TermOutputDriver_Class);
=======
    String string_8834 = new_String(L"li");
    Symbol SMB_getnum_ = new_Symbol(L"getnum:");
    Constant string_8834_Const = new_Constant((Optr)string_8834);
    // getnum:. 
    Send PSend8835 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getnum_, 1, (Optr)string_8834_Const);
    Array PThreadedCode8833 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8834, (Optr)&t_send1, (Optr)PSend8835, (Optr)&t_method_return);
    Method PMethod8832 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8833, 1, PSend8835);
    
    MethodClosure MC_SMB_lines = new_MethodClosure((Method)PMethod8832, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_lines, MC_SMB_lines);
}


static void init_SMB_echo() {
    Symbol SMB_echo = new_Symbol(L"echo");
    Symbol SMB_echo_ = new_Symbol(L"echo:");
    // echo:. 
<<<<<<< HEAD
    Send PSend8872 = new_Send((Optr)self, SMB_echo_, 1, (Optr)true_Const);
    Array PThreadedCode8871 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend8872, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8870 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8871, 2, PSend8872, self);
    
    MethodClosure MC_SMB_echo = new_MethodClosure((Method)PMethod8870, IO_Term_TermOutputDriver_Class);
=======
    Send PSend8838 = new_Send((Optr)self, SMB_echo_, 1, (Optr)true_Const);
    Array PThreadedCode8837 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend8838, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8836 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8837, 2, PSend8838, self);
    
    MethodClosure MC_SMB_echo = new_MethodClosure((Method)PMethod8836, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_echo, MC_SMB_echo);
}


static void init_SMB_cursorNormal() {
    Symbol SMB_cursorNormal = new_Symbol(L"cursorNormal");
<<<<<<< HEAD
    String string_8875 = new_String(L"ve");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8875_Const = new_Constant((Optr)string_8875);
    // getstr:. 
    Send PSend8876 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8875_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8877 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8876);
    Array PThreadedCode8874 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8875, (Optr)&t_send1, (Optr)PSend8876, (Optr)&t_send1, (Optr)PSend8877, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8873 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8874, 2, PSend8877, self);
    
    MethodClosure MC_SMB_cursorNormal = new_MethodClosure((Method)PMethod8873, IO_Term_TermOutputDriver_Class);
=======
    String string_8841 = new_String(L"ve");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8841_Const = new_Constant((Optr)string_8841);
    // getstr:. 
    Send PSend8842 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8841_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8843 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8842);
    Array PThreadedCode8840 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8841, (Optr)&t_send1, (Optr)PSend8842, (Optr)&t_send1, (Optr)PSend8843, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8839 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8840, 2, PSend8843, self);
    
    MethodClosure MC_SMB_cursorNormal = new_MethodClosure((Method)PMethod8839, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_cursorNormal, MC_SMB_cursorNormal);
}


static void init_SMB__shiftLeft_() {
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
<<<<<<< HEAD
    Array PArray8879 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_insertMode = new_Symbol(L"insertMode");
    // insertMode. 
    Send PSend8881 = new_Send((Optr)self, SMB_insertMode, 0);
    // <<. 
    Send PSend8882 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_endInsertMode = new_Symbol(L"endInsertMode");
    // endInsertMode. 
    Send PSend8883 = new_Send((Optr)self, SMB_endInsertMode, 0);
    Array PThreadedCode8880 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8881, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8882, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8883, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8878 = new_Method_with(PArray8879, empty_Array, empty_Array, PThreadedCode8880, 4, PSend8881, PSend8882, PSend8883, self);
    
    MethodClosure MC_SMB__shiftLeft_ = new_MethodClosure((Method)PMethod8878, IO_Term_TermOutputDriver_Class);
=======
    Array PArray8845 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_insertMode = new_Symbol(L"insertMode");
    // insertMode. 
    Send PSend8847 = new_Send((Optr)self, SMB_insertMode, 0);
    // <<. 
    Send PSend8848 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_endInsertMode = new_Symbol(L"endInsertMode");
    // endInsertMode. 
    Send PSend8849 = new_Send((Optr)self, SMB_endInsertMode, 0);
    Array PThreadedCode8846 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8847, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8848, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8849, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8844 = new_Method_with(PArray8845, empty_Array, empty_Array, PThreadedCode8846, 4, PSend8847, PSend8848, PSend8849, self);
    
    MethodClosure MC_SMB__shiftLeft_ = new_MethodClosure((Method)PMethod8844, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB__shiftLeft_, MC_SMB__shiftLeft_);
}


static void init_SMB_outStream() {
    Symbol SMB_outStream = new_Symbol(L"outStream");
<<<<<<< HEAD
    Array PThreadedCode8885 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_method_return);
    Method PMethod8884 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8885, 1, slot_IO_Term_TermOutputDriver_outStream);
    
    MethodClosure MC_SMB_outStream = new_MethodClosure((Method)PMethod8884, IO_Term_TermOutputDriver_Class);
=======
    Array PThreadedCode8851 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_method_return);
    Method PMethod8850 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8851, 1, slot_IO_Term_TermOutputDriver_outStream);
    
    MethodClosure MC_SMB_outStream = new_MethodClosure((Method)PMethod8850, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_outStream, MC_SMB_outStream);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
<<<<<<< HEAD
    String string_8888 = new_String(L"nd");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8888_Const = new_Constant((Optr)string_8888);
    // getstr:. 
    Send PSend8889 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8888_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8890 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8889);
    Array PThreadedCode8887 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8888, (Optr)&t_send1, (Optr)PSend8889, (Optr)&t_send1, (Optr)PSend8890, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8886 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8887, 2, PSend8890, self);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod8886, IO_Term_TermOutputDriver_Class);
=======
    String string_8854 = new_String(L"nd");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8854_Const = new_Constant((Optr)string_8854);
    // getstr:. 
    Send PSend8855 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8854_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8856 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8855);
    Array PThreadedCode8853 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8854, (Optr)&t_send1, (Optr)PSend8855, (Optr)&t_send1, (Optr)PSend8856, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8852 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8853, 2, PSend8856, self);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod8852, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_right, MC_SMB_right);
}


static void init_SMB_insertMode() {
    Symbol SMB_insertMode = new_Symbol(L"insertMode");
<<<<<<< HEAD
    String string_8893 = new_String(L"im");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8893_Const = new_Constant((Optr)string_8893);
    // getstr:. 
    Send PSend8894 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8893_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8895 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8894);
    Array PThreadedCode8892 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8893, (Optr)&t_send1, (Optr)PSend8894, (Optr)&t_send1, (Optr)PSend8895, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8891 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8892, 2, PSend8895, self);
    
    MethodClosure MC_SMB_insertMode = new_MethodClosure((Method)PMethod8891, IO_Term_TermOutputDriver_Class);
=======
    String string_8859 = new_String(L"im");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8859_Const = new_Constant((Optr)string_8859);
    // getstr:. 
    Send PSend8860 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8859_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8861 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8860);
    Array PThreadedCode8858 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8859, (Optr)&t_send1, (Optr)PSend8860, (Optr)&t_send1, (Optr)PSend8861, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8857 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8858, 2, PSend8861, self);
    
    MethodClosure MC_SMB_insertMode = new_MethodClosure((Method)PMethod8857, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_insertMode, MC_SMB_insertMode);
}


static void init_SMB_scrollBackward() {
    Symbol SMB_scrollBackward = new_Symbol(L"scrollBackward");
<<<<<<< HEAD
    String string_8898 = new_String(L"sr");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8898_Const = new_Constant((Optr)string_8898);
    // getstr:. 
    Send PSend8899 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8898_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8900 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8899);
    Array PThreadedCode8897 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8898, (Optr)&t_send1, (Optr)PSend8899, (Optr)&t_send1, (Optr)PSend8900, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8896 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8897, 2, PSend8900, self);
    
    MethodClosure MC_SMB_scrollBackward = new_MethodClosure((Method)PMethod8896, IO_Term_TermOutputDriver_Class);
=======
    String string_8864 = new_String(L"sr");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8864_Const = new_Constant((Optr)string_8864);
    // getstr:. 
    Send PSend8865 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8864_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8866 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8865);
    Array PThreadedCode8863 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8864, (Optr)&t_send1, (Optr)PSend8865, (Optr)&t_send1, (Optr)PSend8866, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8862 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8863, 2, PSend8866, self);
    
    MethodClosure MC_SMB_scrollBackward = new_MethodClosure((Method)PMethod8862, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_scrollBackward, MC_SMB_scrollBackward);
}


static void init_SMB_black_() {
    Symbol SMB_black_ = new_Symbol(L"black:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
<<<<<<< HEAD
    Array PArray8902 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8905 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_black = new_Symbol(L"black");
    // black. 
    Send PSend8907 = new_Send((Optr)VAR__receiver__1_0, SMB_black, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8908 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8909 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8910 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8906 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8907, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8908, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8909, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8910, (Optr)&t_method_return);
    Block PBlock8904 = new_Block_with(PArray8905, empty_Array, PThreadedCode8906, 4, PSend8907, PSend8908, PSend8909, PSend8910);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8911 = new_Send((Optr)PBlock8904, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8903 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8904, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8911, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8901 = new_Method_with(PArray8902, empty_Array, empty_Array, PThreadedCode8903, 2, PSend8911, self);
    
    MethodClosure MC_SMB_black_ = new_MethodClosure((Method)PMethod8901, IO_Term_TermOutputDriver_Class);
=======
    Array PArray8868 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8871 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_black = new_Symbol(L"black");
    // black. 
    Send PSend8873 = new_Send((Optr)VAR__receiver__1_0, SMB_black, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8874 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8875 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8876 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8872 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8873, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8874, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8875, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8876, (Optr)&t_method_return);
    Block PBlock8870 = new_Block_with(PArray8871, empty_Array, PThreadedCode8872, 4, PSend8873, PSend8874, PSend8875, PSend8876);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8877 = new_Send((Optr)PBlock8870, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8869 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8870, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8877, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8867 = new_Method_with(PArray8868, empty_Array, empty_Array, PThreadedCode8869, 2, PSend8877, self);
    
    MethodClosure MC_SMB_black_ = new_MethodClosure((Method)PMethod8867, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_black_, MC_SMB_black_);
}


static void init_SMB_green_() {
    Symbol SMB_green_ = new_Symbol(L"green:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
<<<<<<< HEAD
    Array PArray8913 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8916 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_green = new_Symbol(L"green");
    // green. 
    Send PSend8918 = new_Send((Optr)VAR__receiver__1_0, SMB_green, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8919 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8920 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8921 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8917 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8918, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8919, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8920, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8921, (Optr)&t_method_return);
    Block PBlock8915 = new_Block_with(PArray8916, empty_Array, PThreadedCode8917, 4, PSend8918, PSend8919, PSend8920, PSend8921);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8922 = new_Send((Optr)PBlock8915, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8914 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8915, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8922, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8912 = new_Method_with(PArray8913, empty_Array, empty_Array, PThreadedCode8914, 2, PSend8922, self);
    
    MethodClosure MC_SMB_green_ = new_MethodClosure((Method)PMethod8912, IO_Term_TermOutputDriver_Class);
=======
    Array PArray8879 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8882 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_green = new_Symbol(L"green");
    // green. 
    Send PSend8884 = new_Send((Optr)VAR__receiver__1_0, SMB_green, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8885 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8886 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8887 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8883 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8884, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8885, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8886, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8887, (Optr)&t_method_return);
    Block PBlock8881 = new_Block_with(PArray8882, empty_Array, PThreadedCode8883, 4, PSend8884, PSend8885, PSend8886, PSend8887);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8888 = new_Send((Optr)PBlock8881, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8880 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8881, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8888, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8878 = new_Method_with(PArray8879, empty_Array, empty_Array, PThreadedCode8880, 2, PSend8888, self);
    
    MethodClosure MC_SMB_green_ = new_MethodClosure((Method)PMethod8878, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_green_, MC_SMB_green_);
}


static void init_SMB_scrollForward() {
    Symbol SMB_scrollForward = new_Symbol(L"scrollForward");
<<<<<<< HEAD
    String string_8925 = new_String(L"sf");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8925_Const = new_Constant((Optr)string_8925);
    // getstr:. 
    Send PSend8926 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8925_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8927 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8926);
    Array PThreadedCode8924 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8925, (Optr)&t_send1, (Optr)PSend8926, (Optr)&t_send1, (Optr)PSend8927, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8923 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8924, 2, PSend8927, self);
    
    MethodClosure MC_SMB_scrollForward = new_MethodClosure((Method)PMethod8923, IO_Term_TermOutputDriver_Class);
=======
    String string_8891 = new_String(L"sf");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8891_Const = new_Constant((Optr)string_8891);
    // getstr:. 
    Send PSend8892 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8891_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8893 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8892);
    Array PThreadedCode8890 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8891, (Optr)&t_send1, (Optr)PSend8892, (Optr)&t_send1, (Optr)PSend8893, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8889 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8890, 2, PSend8893, self);
    
    MethodClosure MC_SMB_scrollForward = new_MethodClosure((Method)PMethod8889, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_scrollForward, MC_SMB_scrollForward);
}


static void init_SMB_overwrite_() {
    Symbol SMB_overwrite_ = new_Symbol(L"overwrite:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
<<<<<<< HEAD
    Array PArray8929 = new_Array_with(1, (Optr)VAR_char_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8931 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)VAR_char_0_0);
    Array PThreadedCode8930 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_send1, (Optr)PSend8931, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8928 = new_Method_with(PArray8929, empty_Array, empty_Array, PThreadedCode8930, 2, PSend8931, self);
    
    MethodClosure MC_SMB_overwrite_ = new_MethodClosure((Method)PMethod8928, IO_Term_TermOutputDriver_Class);
=======
    Array PArray8895 = new_Array_with(1, (Optr)VAR_char_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8897 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)VAR_char_0_0);
    Array PThreadedCode8896 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_send1, (Optr)PSend8897, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8894 = new_Method_with(PArray8895, empty_Array, empty_Array, PThreadedCode8896, 2, PSend8897, self);
    
    MethodClosure MC_SMB_overwrite_ = new_MethodClosure((Method)PMethod8894, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_overwrite_, MC_SMB_overwrite_);
}


static void init_SMB_pink() {
    Symbol SMB_pink = new_Symbol(L"pink");
    SmallInt int_35 = new_SmallInt(35);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_35_Const = new_Constant((Optr)int_35);
    // color:. 
<<<<<<< HEAD
    Send PSend8934 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_35_Const);
    Array PThreadedCode8933 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_35, (Optr)&t_send1, (Optr)PSend8934, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8932 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8933, 2, PSend8934, self);
    
    MethodClosure MC_SMB_pink = new_MethodClosure((Method)PMethod8932, IO_Term_TermOutputDriver_Class);
=======
    Send PSend8900 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_35_Const);
    Array PThreadedCode8899 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_35, (Optr)&t_send1, (Optr)PSend8900, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8898 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8899, 2, PSend8900, self);
    
    MethodClosure MC_SMB_pink = new_MethodClosure((Method)PMethod8898, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_pink, MC_SMB_pink);
}


static void init_SMB_reverse() {
    Symbol SMB_reverse = new_Symbol(L"reverse");
<<<<<<< HEAD
    String string_8937 = new_String(L"mr");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8937_Const = new_Constant((Optr)string_8937);
    // getstr:. 
    Send PSend8938 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8937_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8939 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8938);
    Array PThreadedCode8936 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8937, (Optr)&t_send1, (Optr)PSend8938, (Optr)&t_send1, (Optr)PSend8939, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8935 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8936, 2, PSend8939, self);
    
    MethodClosure MC_SMB_reverse = new_MethodClosure((Method)PMethod8935, IO_Term_TermOutputDriver_Class);
=======
    String string_8903 = new_String(L"mr");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8903_Const = new_Constant((Optr)string_8903);
    // getstr:. 
    Send PSend8904 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8903_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8905 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8904);
    Array PThreadedCode8902 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8903, (Optr)&t_send1, (Optr)PSend8904, (Optr)&t_send1, (Optr)PSend8905, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8901 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8902, 2, PSend8905, self);
    
    MethodClosure MC_SMB_reverse = new_MethodClosure((Method)PMethod8901, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_reverse, MC_SMB_reverse);
}


static void init_SMB_cr() {
    Symbol SMB_cr = new_Symbol(L"cr");
<<<<<<< HEAD
    String string_8942 = new_String(L"cr");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8942_Const = new_Constant((Optr)string_8942);
    // getstr:. 
    Send PSend8943 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8942_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8944 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8943);
    Array PThreadedCode8941 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8942, (Optr)&t_send1, (Optr)PSend8943, (Optr)&t_send1, (Optr)PSend8944, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8940 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8941, 2, PSend8944, self);
    
    MethodClosure MC_SMB_cr = new_MethodClosure((Method)PMethod8940, IO_Term_TermOutputDriver_Class);
=======
    String string_8908 = new_String(L"cr");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8908_Const = new_Constant((Optr)string_8908);
    // getstr:. 
    Send PSend8909 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8908_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8910 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8909);
    Array PThreadedCode8907 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8908, (Optr)&t_send1, (Optr)PSend8909, (Optr)&t_send1, (Optr)PSend8910, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8906 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8907, 2, PSend8910, self);
    
    MethodClosure MC_SMB_cr = new_MethodClosure((Method)PMethod8906, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_cr, MC_SMB_cr);
}


static void init_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
<<<<<<< HEAD
    Send PSend8947 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_tab, 0);
    Array PThreadedCode8946 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8947, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8945 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8946, 2, PSend8947, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod8945, IO_Term_TermOutputDriver_Class);
=======
    Send PSend8913 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_tab, 0);
    Array PThreadedCode8912 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8913, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8911 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8912, 2, PSend8913, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod8911, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_tab, MC_SMB_tab);
}


static void init_SMB_erase() {
    Symbol SMB_erase = new_Symbol(L"erase");
<<<<<<< HEAD
    String string_8950 = new_String(L"1");
    String string_8951 = new_String(L"ec");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8951_Const = new_Constant((Optr)string_8951);
    // getstr:. 
    Send PSend8952 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8951_Const);
    Symbol SMB_parm_in_ = new_Symbol(L"parm:in:");
    Constant string_8950_Const = new_Constant((Optr)string_8950);
    // parm:in:. 
    Send PSend8953 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_parm_in_, 2, (Optr)string_8950_Const, (Optr)PSend8952);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8954 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8953);
    Array PThreadedCode8949 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8950, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8951, (Optr)&t_send1, (Optr)PSend8952, (Optr)&t_send2, (Optr)PSend8953, (Optr)&t_send1, (Optr)PSend8954, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8948 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8949, 2, PSend8954, self);
    
    MethodClosure MC_SMB_erase = new_MethodClosure((Method)PMethod8948, IO_Term_TermOutputDriver_Class);
=======
    String string_8916 = new_String(L"1");
    String string_8917 = new_String(L"ec");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8917_Const = new_Constant((Optr)string_8917);
    // getstr:. 
    Send PSend8918 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8917_Const);
    Symbol SMB_parm_in_ = new_Symbol(L"parm:in:");
    Constant string_8916_Const = new_Constant((Optr)string_8916);
    // parm:in:. 
    Send PSend8919 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_parm_in_, 2, (Optr)string_8916_Const, (Optr)PSend8918);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8920 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8919);
    Array PThreadedCode8915 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8916, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8917, (Optr)&t_send1, (Optr)PSend8918, (Optr)&t_send2, (Optr)PSend8919, (Optr)&t_send1, (Optr)PSend8920, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8914 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8915, 2, PSend8920, self);
    
    MethodClosure MC_SMB_erase = new_MethodClosure((Method)PMethod8914, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_erase, MC_SMB_erase);
}


static void init_SMB_blue() {
    Symbol SMB_blue = new_Symbol(L"blue");
    SmallInt int_34 = new_SmallInt(34);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_34_Const = new_Constant((Optr)int_34);
    // color:. 
<<<<<<< HEAD
    Send PSend8957 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_34_Const);
    Array PThreadedCode8956 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_34, (Optr)&t_send1, (Optr)PSend8957, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8955 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8956, 2, PSend8957, self);
    
    MethodClosure MC_SMB_blue = new_MethodClosure((Method)PMethod8955, IO_Term_TermOutputDriver_Class);
=======
    Send PSend8923 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_34_Const);
    Array PThreadedCode8922 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_34, (Optr)&t_send1, (Optr)PSend8923, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8921 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8922, 2, PSend8923, self);
    
    MethodClosure MC_SMB_blue = new_MethodClosure((Method)PMethod8921, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_blue, MC_SMB_blue);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
<<<<<<< HEAD
    Send PSend8960 = new_Send((Optr)self, SMB_reset, 0);
    Symbol SMB_colorEscape = new_Symbol(L"colorEscape");
    // colorEscape. 
    Send PSend8961 = new_Send((Optr)self, SMB_colorEscape, 0);
    Array PThreadedCode8959 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8960, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8961, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8958 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8959, 3, PSend8960, PSend8961, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod8958, IO_Term_TermOutputDriver_Class);
=======
    Send PSend8926 = new_Send((Optr)self, SMB_reset, 0);
    Symbol SMB_colorEscape = new_Symbol(L"colorEscape");
    // colorEscape. 
    Send PSend8927 = new_Send((Optr)self, SMB_colorEscape, 0);
    Array PThreadedCode8925 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8926, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8927, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8924 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8925, 3, PSend8926, PSend8927, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod8924, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
<<<<<<< HEAD
    Send PSend8964 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_lf, 0);
    Array PThreadedCode8963 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8964, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8962 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8963, 2, PSend8964, self);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod8962, IO_Term_TermOutputDriver_Class);
=======
    Send PSend8930 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_lf, 0);
    Array PThreadedCode8929 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8930, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8928 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8929, 2, PSend8930, self);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod8928, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_lf, MC_SMB_lf);
}


static void init_SMB_width() {
    Symbol SMB_width = new_Symbol(L"width");
<<<<<<< HEAD
    Array PThreadedCode8966 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod8965 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8966, 1, self);
    
    MethodClosure MC_SMB_width = new_MethodClosure((Method)PMethod8965, IO_Term_TermOutputDriver_Class);
=======
    Array PThreadedCode8932 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod8931 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8932, 1, self);
    
    MethodClosure MC_SMB_width = new_MethodClosure((Method)PMethod8931, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_width, MC_SMB_width);
}


static void init_SMB_white_() {
    Symbol SMB_white_ = new_Symbol(L"white:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
<<<<<<< HEAD
    Array PArray8968 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8971 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_white = new_Symbol(L"white");
    // white. 
    Send PSend8973 = new_Send((Optr)VAR__receiver__1_0, SMB_white, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8974 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8975 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8976 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8972 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8973, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8974, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8975, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8976, (Optr)&t_method_return);
    Block PBlock8970 = new_Block_with(PArray8971, empty_Array, PThreadedCode8972, 4, PSend8973, PSend8974, PSend8975, PSend8976);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8977 = new_Send((Optr)PBlock8970, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8969 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8970, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8977, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8967 = new_Method_with(PArray8968, empty_Array, empty_Array, PThreadedCode8969, 2, PSend8977, self);
    
    MethodClosure MC_SMB_white_ = new_MethodClosure((Method)PMethod8967, IO_Term_TermOutputDriver_Class);
=======
    Array PArray8934 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8937 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_white = new_Symbol(L"white");
    // white. 
    Send PSend8939 = new_Send((Optr)VAR__receiver__1_0, SMB_white, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8940 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8941 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8942 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8938 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8939, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8940, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8941, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8942, (Optr)&t_method_return);
    Block PBlock8936 = new_Block_with(PArray8937, empty_Array, PThreadedCode8938, 4, PSend8939, PSend8940, PSend8941, PSend8942);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8943 = new_Send((Optr)PBlock8936, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8935 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8936, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8943, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8933 = new_Method_with(PArray8934, empty_Array, empty_Array, PThreadedCode8935, 2, PSend8943, self);
    
    MethodClosure MC_SMB_white_ = new_MethodClosure((Method)PMethod8933, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_white_, MC_SMB_white_);
}


static void init_SMB_cursorEnhanced() {
    Symbol SMB_cursorEnhanced = new_Symbol(L"cursorEnhanced");
<<<<<<< HEAD
    String string_8980 = new_String(L"vs");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8980_Const = new_Constant((Optr)string_8980);
    // getstr:. 
    Send PSend8981 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8980_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8982 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8981);
    Array PThreadedCode8979 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8980, (Optr)&t_send1, (Optr)PSend8981, (Optr)&t_send1, (Optr)PSend8982, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8978 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8979, 2, PSend8982, self);
    
    MethodClosure MC_SMB_cursorEnhanced = new_MethodClosure((Method)PMethod8978, IO_Term_TermOutputDriver_Class);
=======
    String string_8946 = new_String(L"vs");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8946_Const = new_Constant((Optr)string_8946);
    // getstr:. 
    Send PSend8947 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8946_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8948 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8947);
    Array PThreadedCode8945 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8946, (Optr)&t_send1, (Optr)PSend8947, (Optr)&t_send1, (Optr)PSend8948, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8944 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8945, 2, PSend8948, self);
    
    MethodClosure MC_SMB_cursorEnhanced = new_MethodClosure((Method)PMethod8944, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_cursorEnhanced, MC_SMB_cursorEnhanced);
}


static void init_SMB_endInsertMode() {
    Symbol SMB_endInsertMode = new_Symbol(L"endInsertMode");
<<<<<<< HEAD
    String string_8985 = new_String(L"ei");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8985_Const = new_Constant((Optr)string_8985);
    // getstr:. 
    Send PSend8986 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8985_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8987 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8986);
    Array PThreadedCode8984 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8985, (Optr)&t_send1, (Optr)PSend8986, (Optr)&t_send1, (Optr)PSend8987, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8983 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8984, 2, PSend8987, self);
    
    MethodClosure MC_SMB_endInsertMode = new_MethodClosure((Method)PMethod8983, IO_Term_TermOutputDriver_Class);
=======
    String string_8951 = new_String(L"ei");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8951_Const = new_Constant((Optr)string_8951);
    // getstr:. 
    Send PSend8952 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8951_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8953 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8952);
    Array PThreadedCode8950 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8951, (Optr)&t_send1, (Optr)PSend8952, (Optr)&t_send1, (Optr)PSend8953, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8949 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8950, 2, PSend8953, self);
    
    MethodClosure MC_SMB_endInsertMode = new_MethodClosure((Method)PMethod8949, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_endInsertMode, MC_SMB_endInsertMode);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
<<<<<<< HEAD
    String string_8990 = new_String(L"up");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8990_Const = new_Constant((Optr)string_8990);
    // getstr:. 
    Send PSend8991 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8990_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8992 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8991);
    Array PThreadedCode8989 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8990, (Optr)&t_send1, (Optr)PSend8991, (Optr)&t_send1, (Optr)PSend8992, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8988 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8989, 2, PSend8992, self);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod8988, IO_Term_TermOutputDriver_Class);
=======
    String string_8956 = new_String(L"up");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8956_Const = new_Constant((Optr)string_8956);
    // getstr:. 
    Send PSend8957 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8956_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8958 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8957);
    Array PThreadedCode8955 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8956, (Optr)&t_send1, (Optr)PSend8957, (Optr)&t_send1, (Optr)PSend8958, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8954 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8955, 2, PSend8958, self);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod8954, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_blue_() {
    Symbol SMB_blue_ = new_Symbol(L"blue:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
<<<<<<< HEAD
    Array PArray8994 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8997 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_blue = new_Symbol(L"blue");
    // blue. 
    Send PSend8999 = new_Send((Optr)VAR__receiver__1_0, SMB_blue, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend9000 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend9001 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend9002 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8998 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8999, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9000, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9001, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9002, (Optr)&t_method_return);
    Block PBlock8996 = new_Block_with(PArray8997, empty_Array, PThreadedCode8998, 4, PSend8999, PSend9000, PSend9001, PSend9002);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend9003 = new_Send((Optr)PBlock8996, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8995 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8996, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend9003, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8993 = new_Method_with(PArray8994, empty_Array, empty_Array, PThreadedCode8995, 2, PSend9003, self);
    
    MethodClosure MC_SMB_blue_ = new_MethodClosure((Method)PMethod8993, IO_Term_TermOutputDriver_Class);
=======
    Array PArray8960 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8963 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_blue = new_Symbol(L"blue");
    // blue. 
    Send PSend8965 = new_Send((Optr)VAR__receiver__1_0, SMB_blue, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8966 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8967 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8968 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8964 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8965, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8966, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8967, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8968, (Optr)&t_method_return);
    Block PBlock8962 = new_Block_with(PArray8963, empty_Array, PThreadedCode8964, 4, PSend8965, PSend8966, PSend8967, PSend8968);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8969 = new_Send((Optr)PBlock8962, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8961 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8962, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8969, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8959 = new_Method_with(PArray8960, empty_Array, empty_Array, PThreadedCode8961, 2, PSend8969, self);
    
    MethodClosure MC_SMB_blue_ = new_MethodClosure((Method)PMethod8959, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_blue_, MC_SMB_blue_);
}


static void init_SMB_clearFromBeginning() {
    Symbol SMB_clearFromBeginning = new_Symbol(L"clearFromBeginning");
<<<<<<< HEAD
    String string_9006 = new_String(L"cb");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_9006_Const = new_Constant((Optr)string_9006);
    // getstr:. 
    Send PSend9007 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_9006_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend9008 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend9007);
    Array PThreadedCode9005 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_9006, (Optr)&t_send1, (Optr)PSend9007, (Optr)&t_send1, (Optr)PSend9008, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9004 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9005, 2, PSend9008, self);
    
    MethodClosure MC_SMB_clearFromBeginning = new_MethodClosure((Method)PMethod9004, IO_Term_TermOutputDriver_Class);
=======
    String string_8972 = new_String(L"cb");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8972_Const = new_Constant((Optr)string_8972);
    // getstr:. 
    Send PSend8973 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8972_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8974 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8973);
    Array PThreadedCode8971 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8972, (Optr)&t_send1, (Optr)PSend8973, (Optr)&t_send1, (Optr)PSend8974, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8970 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8971, 2, PSend8974, self);
    
    MethodClosure MC_SMB_clearFromBeginning = new_MethodClosure((Method)PMethod8970, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_clearFromBeginning, MC_SMB_clearFromBeginning);
}


static void init_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
<<<<<<< HEAD
    Send PSend9011 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_space, 0);
    Array PThreadedCode9010 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend9011, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9009 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9010, 2, PSend9011, self);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod9009, IO_Term_TermOutputDriver_Class);
=======
    Send PSend8977 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_space, 0);
    Array PThreadedCode8976 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8977, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8975 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8976, 2, PSend8977, self);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod8975, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_space, MC_SMB_space);
}


static void init_SMB_echo_() {
    Symbol SMB_echo_ = new_Symbol(L"echo:");
    Variable VAR_aBool_0_0 = new_Variable_named(L"aBool", 0);
<<<<<<< HEAD
    Array PArray9013 = new_Array_with(1, (Optr)VAR_aBool_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9016 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend9018 = new_Send((Optr)slot_IO_Term_TermOutputDriver_shouldEcho, SMB__equals_, 1, (Optr)VAR_aBool_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9022 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode9021 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend9022, (Optr)&t_block_return);
    Block PBlock9020 = new_Block_with(empty_Array, empty_Array, PThreadedCode9021, 1, PSend9022);
    // ifTrue:. 
    Send PSend9019 = new_Send((Optr)PSend9018, SMB_ifTrue_, 1, (Optr)PBlock9020);
    Assign PAssign9023 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_shouldEcho, (Optr)VAR_aBool_0_0);
=======
    Array PArray8979 = new_Array_with(1, (Optr)VAR_aBool_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8982 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend8984 = new_Send((Optr)slot_IO_Term_TermOutputDriver_shouldEcho, SMB__equals_, 1, (Optr)VAR_aBool_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8988 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode8987 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8988, (Optr)&t_block_return);
    Block PBlock8986 = new_Block_with(empty_Array, empty_Array, PThreadedCode8987, 1, PSend8988);
    // ifTrue:. 
    Send PSend8985 = new_Send((Optr)PSend8984, SMB_ifTrue_, 1, (Optr)PBlock8986);
    Assign PAssign8989 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_shouldEcho, (Optr)VAR_aBool_0_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol  SMB_echo = new_Symbol(L"echo");
    Symbol SMB_enable_ = new_Symbol(L"enable:");
    Constant SMB_echo_Const = new_Constant((Optr)SMB_echo);
    // enable:. 
<<<<<<< HEAD
    Send PSend9024 = new_Send((Optr)self, SMB_enable_, 1, (Optr)SMB_echo_Const);
    Array PThreadedCode9017 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_shouldEcho, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_send1, (Optr)PSend9018, (Optr)&t_send_ifTrue_, (Optr)PSend9019, (Optr)PBlock9020, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9023, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_echo, (Optr)&t_send1, (Optr)PSend9024, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock9015 = new_Block_with(PArray9016, empty_Array, PThreadedCode9017, 4, PSend9019, PAssign9023, PSend9024, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9025 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9015);
    Array PThreadedCode9014 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9015, (Optr)&t_send1, (Optr)PSend9025, (Optr)&t_method_return);
    Method PMethod9012 = new_Method_with(PArray9013, empty_Array, empty_Array, PThreadedCode9014, 1, PSend9025);
    
    MethodClosure MC_SMB_echo_ = new_MethodClosure((Method)PMethod9012, IO_Term_TermOutputDriver_Class);
=======
    Send PSend8990 = new_Send((Optr)self, SMB_enable_, 1, (Optr)SMB_echo_Const);
    Array PThreadedCode8983 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_shouldEcho, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_send1, (Optr)PSend8984, (Optr)&t_send_ifTrue_, (Optr)PSend8985, (Optr)PBlock8986, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8989, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_echo, (Optr)&t_send1, (Optr)PSend8990, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock8981 = new_Block_with(PArray8982, empty_Array, PThreadedCode8983, 4, PSend8985, PAssign8989, PSend8990, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8991 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8981);
    Array PThreadedCode8980 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8981, (Optr)&t_send1, (Optr)PSend8991, (Optr)&t_method_return);
    Method PMethod8978 = new_Method_with(PArray8979, empty_Array, empty_Array, PThreadedCode8980, 1, PSend8991);
    
    MethodClosure MC_SMB_echo_ = new_MethodClosure((Method)PMethod8978, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_echo_, MC_SMB_echo_);
}


static void init_SMB_flush() {
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
<<<<<<< HEAD
    Send PSend9028 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_flush, 0);
    Array PThreadedCode9027 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend9028, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9026 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9027, 2, PSend9028, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PMethod9026, IO_Term_TermOutputDriver_Class);
=======
    Send PSend8994 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_flush, 0);
    Array PThreadedCode8993 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8994, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8992 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8993, 2, PSend8994, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PMethod8992, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_flush, MC_SMB_flush);
}


static void init_SMB_cyan() {
    Symbol SMB_cyan = new_Symbol(L"cyan");
    SmallInt int_36 = new_SmallInt(36);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_36_Const = new_Constant((Optr)int_36);
    // color:. 
<<<<<<< HEAD
    Send PSend9031 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_36_Const);
    Array PThreadedCode9030 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_36, (Optr)&t_send1, (Optr)PSend9031, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9029 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9030, 2, PSend9031, self);
    
    MethodClosure MC_SMB_cyan = new_MethodClosure((Method)PMethod9029, IO_Term_TermOutputDriver_Class);
=======
    Send PSend8997 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_36_Const);
    Array PThreadedCode8996 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_36, (Optr)&t_send1, (Optr)PSend8997, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8995 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8996, 2, PSend8997, self);
    
    MethodClosure MC_SMB_cyan = new_MethodClosure((Method)PMethod8995, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_cyan, MC_SMB_cyan);
}


static void init_SMB_red_() {
    Symbol SMB_red_ = new_Symbol(L"red:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
<<<<<<< HEAD
    Array PArray9033 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray9036 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend9038 = new_Send((Optr)VAR__receiver__1_0, SMB_red, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend9039 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend9040 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend9041 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode9037 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9038, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9039, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9040, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9041, (Optr)&t_method_return);
    Block PBlock9035 = new_Block_with(PArray9036, empty_Array, PThreadedCode9037, 4, PSend9038, PSend9039, PSend9040, PSend9041);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend9042 = new_Send((Optr)PBlock9035, SMB_value_, 1, (Optr)self);
    Array PThreadedCode9034 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock9035, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend9042, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9032 = new_Method_with(PArray9033, empty_Array, empty_Array, PThreadedCode9034, 2, PSend9042, self);
    
    MethodClosure MC_SMB_red_ = new_MethodClosure((Method)PMethod9032, IO_Term_TermOutputDriver_Class);
=======
    Array PArray8999 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray9002 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend9004 = new_Send((Optr)VAR__receiver__1_0, SMB_red, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend9005 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend9006 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend9007 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode9003 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9004, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9005, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9006, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9007, (Optr)&t_method_return);
    Block PBlock9001 = new_Block_with(PArray9002, empty_Array, PThreadedCode9003, 4, PSend9004, PSend9005, PSend9006, PSend9007);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend9008 = new_Send((Optr)PBlock9001, SMB_value_, 1, (Optr)self);
    Array PThreadedCode9000 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock9001, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend9008, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8998 = new_Method_with(PArray8999, empty_Array, empty_Array, PThreadedCode9000, 2, PSend9008, self);
    
    MethodClosure MC_SMB_red_ = new_MethodClosure((Method)PMethod8998, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_red_, MC_SMB_red_);
}


static void init_SMB_errorColor() {
    Symbol SMB_errorColor = new_Symbol(L"errorColor");
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
<<<<<<< HEAD
    Send PSend9045 = new_Send((Optr)self, SMB_red, 0);
    Symbol SMB_reverse = new_Symbol(L"reverse");
    // reverse. 
    Send PSend9046 = new_Send((Optr)self, SMB_reverse, 0);
    Array PThreadedCode9044 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9045, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9046, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9043 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9044, 3, PSend9045, PSend9046, self);
    
    MethodClosure MC_SMB_errorColor = new_MethodClosure((Method)PMethod9043, IO_Term_TermOutputDriver_Class);
=======
    Send PSend9011 = new_Send((Optr)self, SMB_red, 0);
    Symbol SMB_reverse = new_Symbol(L"reverse");
    // reverse. 
    Send PSend9012 = new_Send((Optr)self, SMB_reverse, 0);
    Array PThreadedCode9010 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9011, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9012, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9009 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9010, 3, PSend9011, PSend9012, self);
    
    MethodClosure MC_SMB_errorColor = new_MethodClosure((Method)PMethod9009, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_errorColor, MC_SMB_errorColor);
}


static void init_SMB_ss3Escape() {
    Symbol SMB_ss3Escape = new_Symbol(L"ss3Escape");
    Symbol SMB_escape = new_Symbol(L"escape");
    // escape. 
<<<<<<< HEAD
    Send PSend9049 = new_Send((Optr)Character_classReference, SMB_escape, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend9050 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend9049);
    Character char_9051 = new_Character(L'O');
    Constant char_9051_Const = new_Constant((Optr)char_9051);
    // <<. 
    Send PSend9052 = new_Send((Optr)PSend9050, SMB__shiftLeft_, 1, (Optr)char_9051_Const);
    Array PThreadedCode9048 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend9049, (Optr)&t_send1, (Optr)PSend9050, (Optr)&t_push1, (Optr)char_9051, (Optr)&t_send1, (Optr)PSend9052, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9047 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9048, 2, PSend9052, self);
    
    MethodClosure MC_SMB_ss3Escape = new_MethodClosure((Method)PMethod9047, IO_Term_TermOutputDriver_Class);
=======
    Send PSend9015 = new_Send((Optr)Character_classReference, SMB_escape, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend9016 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend9015);
    Character char_9017 = new_Character(L'O');
    Constant char_9017_Const = new_Constant((Optr)char_9017);
    // <<. 
    Send PSend9018 = new_Send((Optr)PSend9016, SMB__shiftLeft_, 1, (Optr)char_9017_Const);
    Array PThreadedCode9014 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend9015, (Optr)&t_send1, (Optr)PSend9016, (Optr)&t_push1, (Optr)char_9017, (Optr)&t_send1, (Optr)PSend9018, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9013 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9014, 2, PSend9018, self);
    
    MethodClosure MC_SMB_ss3Escape = new_MethodClosure((Method)PMethod9013, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_ss3Escape, MC_SMB_ss3Escape);
}


static void init_SMB_backspace() {
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
<<<<<<< HEAD
    Send PSend9055 = new_Send((Optr)Character_classReference, SMB_backspace, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend9056 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend9055);
    Symbol SMB_deleteCharacter = new_Symbol(L"deleteCharacter");
    // deleteCharacter. 
    Send PSend9057 = new_Send((Optr)self, SMB_deleteCharacter, 0);
    Array PThreadedCode9054 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend9055, (Optr)&t_send1, (Optr)PSend9056, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9057, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9053 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9054, 3, PSend9056, PSend9057, self);
    
    MethodClosure MC_SMB_backspace = new_MethodClosure((Method)PMethod9053, IO_Term_TermOutputDriver_Class);
=======
    Send PSend9021 = new_Send((Optr)Character_classReference, SMB_backspace, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend9022 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend9021);
    Symbol SMB_deleteCharacter = new_Symbol(L"deleteCharacter");
    // deleteCharacter. 
    Send PSend9023 = new_Send((Optr)self, SMB_deleteCharacter, 0);
    Array PThreadedCode9020 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend9021, (Optr)&t_send1, (Optr)PSend9022, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9023, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9019 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9020, 3, PSend9022, PSend9023, self);
    
    MethodClosure MC_SMB_backspace = new_MethodClosure((Method)PMethod9019, IO_Term_TermOutputDriver_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_Term_TermOutputDriver_Class, SMB_backspace, MC_SMB_backspace);
}


static void init_class_SMB_stderr() {
    Symbol SMB_stderr = new_Symbol(L"stderr");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
<<<<<<< HEAD
    Send PSend9063 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_new, 0);
    Assign PAssign9062 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)PSend9063);
    // stderr. 
    Send PSend9064 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_outStream_ = new_Symbol(L"outStream:");
    // outStream:. 
    Send PSend9065 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, SMB_outStream_, 1, (Optr)PSend9064);
    Array PThreadedCode9061 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign9062, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend9063, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend9064, (Optr)&t_send1, (Optr)PSend9065, (Optr)&t_block_return);
    Block PBlock9060 = new_Block_with(empty_Array, empty_Array, PThreadedCode9061, 2, PAssign9062, PSend9065);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9066 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, SMB_ifNil_, 1, (Optr)PBlock9060);
    Array PThreadedCode9059 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)&t_push_closure, (Optr)PBlock9060, (Optr)&t_send1, (Optr)PSend9066, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)&t_method_return);
    Method PMethod9058 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9059, 2, PSend9066, slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance);
    
    MethodClosure MC_SMB_stderr = new_MethodClosure((Method)PMethod9058, HEADER(IO_Term_TermOutputDriver_Class));
=======
    Send PSend9029 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_new, 0);
    Assign PAssign9028 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)PSend9029);
    // stderr. 
    Send PSend9030 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_outStream_ = new_Symbol(L"outStream:");
    // outStream:. 
    Send PSend9031 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, SMB_outStream_, 1, (Optr)PSend9030);
    Array PThreadedCode9027 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign9028, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend9029, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend9030, (Optr)&t_send1, (Optr)PSend9031, (Optr)&t_block_return);
    Block PBlock9026 = new_Block_with(empty_Array, empty_Array, PThreadedCode9027, 2, PAssign9028, PSend9031);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9032 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, SMB_ifNil_, 1, (Optr)PBlock9026);
    Array PThreadedCode9025 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)&t_push_closure, (Optr)PBlock9026, (Optr)&t_send1, (Optr)PSend9032, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)&t_method_return);
    Method PMethod9024 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9025, 2, PSend9032, slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance);
    
    MethodClosure MC_SMB_stderr = new_MethodClosure((Method)PMethod9024, HEADER(IO_Term_TermOutputDriver_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(IO_Term_TermOutputDriver_Class), SMB_stderr, MC_SMB_stderr);
}


static void init_class_SMB_stdout() {
    Symbol SMB_stdout = new_Symbol(L"stdout");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
<<<<<<< HEAD
    Send PSend9072 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_new, 0);
    Assign PAssign9071 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)PSend9072);
    // stdout. 
    Send PSend9073 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Symbol SMB_outStream_ = new_Symbol(L"outStream:");
    // outStream:. 
    Send PSend9074 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, SMB_outStream_, 1, (Optr)PSend9073);
    Array PThreadedCode9070 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign9071, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend9072, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend9073, (Optr)&t_send1, (Optr)PSend9074, (Optr)&t_block_return);
    Block PBlock9069 = new_Block_with(empty_Array, empty_Array, PThreadedCode9070, 2, PAssign9071, PSend9074);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9075 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, SMB_ifNil_, 1, (Optr)PBlock9069);
    Array PThreadedCode9068 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)&t_push_closure, (Optr)PBlock9069, (Optr)&t_send1, (Optr)PSend9075, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)&t_method_return);
    Method PMethod9067 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9068, 2, PSend9075, slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance);
    
    MethodClosure MC_SMB_stdout = new_MethodClosure((Method)PMethod9067, HEADER(IO_Term_TermOutputDriver_Class));
=======
    Send PSend9038 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_new, 0);
    Assign PAssign9037 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)PSend9038);
    // stdout. 
    Send PSend9039 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Symbol SMB_outStream_ = new_Symbol(L"outStream:");
    // outStream:. 
    Send PSend9040 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, SMB_outStream_, 1, (Optr)PSend9039);
    Array PThreadedCode9036 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign9037, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend9038, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend9039, (Optr)&t_send1, (Optr)PSend9040, (Optr)&t_block_return);
    Block PBlock9035 = new_Block_with(empty_Array, empty_Array, PThreadedCode9036, 2, PAssign9037, PSend9040);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9041 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, SMB_ifNil_, 1, (Optr)PBlock9035);
    Array PThreadedCode9034 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)&t_push_closure, (Optr)PBlock9035, (Optr)&t_send1, (Optr)PSend9041, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)&t_method_return);
    Method PMethod9033 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9034, 2, PSend9041, slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance);
    
    MethodClosure MC_SMB_stdout = new_MethodClosure((Method)PMethod9033, HEADER(IO_Term_TermOutputDriver_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(IO_Term_TermOutputDriver_Class), SMB_stdout, MC_SMB_stdout);
}

void init_IO_Term_PVTermOutputDriver_layout() {
    slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance = (Optr)new_Slot(5, L"stdoutTerminalInstance");
    slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance = (Optr)new_Slot(6, L"stderrTerminalInstance");
    layout_IO_Term_TermOutputDriver_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 7);
    ((Array)layout_IO_Term_TermOutputDriver_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_IO_Term_TermOutputDriver_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_IO_Term_TermOutputDriver_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_IO_Term_TermOutputDriver_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_IO_Term_TermOutputDriver_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_IO_Term_TermOutputDriver_Class_class)->values[5] = slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance; // stdoutTerminalInstance 
    ((Array)layout_IO_Term_TermOutputDriver_Class_class)->values[6] = slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance; // stderrTerminalInstance 
    
    Symbol  SMB_TermOutputDriver = new_Symbol(L"TermOutputDriver");
    slot_IO_Term_TermOutputDriver_termcap = (Optr)new_Slot(0, L"termcap");
    slot_IO_Term_TermOutputDriver_outStream = (Optr)new_Slot(1, L"outStream");
    slot_IO_Term_TermOutputDriver_currentBackground = (Optr)new_Slot(2, L"currentBackground");
    slot_IO_Term_TermOutputDriver_currentColor = (Optr)new_Slot(3, L"currentColor");
    slot_IO_Term_TermOutputDriver_light = (Optr)new_Slot(4, L"light");
    slot_IO_Term_TermOutputDriver_blink = (Optr)new_Slot(5, L"blink");
    slot_IO_Term_TermOutputDriver_shouldEcho = (Optr)new_Slot(6, L"shouldEcho");
    layout_IO_Term_TermOutputDriver = (Optr)create_layout_with_vars(ObjectLayout_Class, 7);
    ((Array)layout_IO_Term_TermOutputDriver)->values[0] = slot_IO_Term_TermOutputDriver_termcap; // termcap 
    ((Array)layout_IO_Term_TermOutputDriver)->values[1] = slot_IO_Term_TermOutputDriver_outStream; // outStream 
    ((Array)layout_IO_Term_TermOutputDriver)->values[2] = slot_IO_Term_TermOutputDriver_currentBackground; // currentBackground 
    ((Array)layout_IO_Term_TermOutputDriver)->values[3] = slot_IO_Term_TermOutputDriver_currentColor; // currentColor 
    ((Array)layout_IO_Term_TermOutputDriver)->values[4] = slot_IO_Term_TermOutputDriver_light; // light 
    ((Array)layout_IO_Term_TermOutputDriver)->values[5] = slot_IO_Term_TermOutputDriver_blink; // blink 
    ((Array)layout_IO_Term_TermOutputDriver)->values[6] = slot_IO_Term_TermOutputDriver_shouldEcho; // shouldEcho 
    IO_Term_TermOutputDriver_Class = (Class)new_Class(Object_Class, layout_IO_Term_TermOutputDriver_Class_class);
    IO_Term_TermOutputDriver_Class->layout = layout_IO_Term_TermOutputDriver;
    IO_Term_TermOutputDriver_Class->name = SMB_TermOutputDriver;
    
}

void init_IO_Term_PVTermOutputDriver_methods() {
    init_SMB_csiEscape();
    init_SMB_outStream_();
    init_SMB_escape();
    init_SMB_light();
    init_SMB_normal();
    init_SMB_color_();
    init_SMB_underlineOff();
    init_SMB_bold();
    init_SMB_initialize();
    init_SMB_insertCharacter();
    init_SMB_cursorInvisible();
    init_SMB_here();
    init_SMB_home();
    init_SMB_yellow();
    init_SMB_colorEscape();
    init_SMB_noEcho();
    init_SMB_black();
    init_SMB_green();
    init_SMB_underline();
    init_SMB_invisible();
    init_SMB_reset();
    init_SMB_yellow_();
    init_SMB_down();
    init_SMB_columns();
    init_SMB_cyan_();
    init_SMB_red();
    init_SMB_insertLine();
    init_SMB_blinking();
    init_SMB_clearToEnd();
    init_SMB_pink_();
    init_SMB_deleteLine();
    init_SMB_white();
    init_SMB_left();
    init_SMB_deleteCharacter();
    init_SMB_lines();
    init_SMB_echo();
    init_SMB_cursorNormal();
    init_SMB__shiftLeft_();
    init_SMB_outStream();
    init_SMB_right();
    init_SMB_insertMode();
    init_SMB_scrollBackward();
    init_SMB_black_();
    init_SMB_green_();
    init_SMB_scrollForward();
    init_SMB_overwrite_();
    init_SMB_pink();
    init_SMB_reverse();
    init_SMB_cr();
    init_SMB_tab();
    init_SMB_erase();
    init_SMB_blue();
    init_SMB_clear();
    init_SMB_lf();
    init_SMB_width();
    init_SMB_white_();
    init_SMB_cursorEnhanced();
    init_SMB_endInsertMode();
    init_SMB_up();
    init_SMB_blue_();
    init_SMB_clearFromBeginning();
    init_SMB_space();
    init_SMB_echo_();
    init_SMB_flush();
    init_SMB_cyan();
    init_SMB_red_();
    init_SMB_errorColor();
    init_SMB_ss3Escape();
    init_SMB_backspace();
    init_class_SMB_stderr();
    init_class_SMB_stdout();
    
}