#include <lib/class/WebClient/Core/WebResponse.h>


Optr layout_WebClient_Core_WebResponse_Class_class;
Optr slot_WebClient_Core_WebResponse_request;
Optr slot_WebClient_Core_WebResponse_status;
Optr slot_WebClient_Core_WebResponse_code;
Optr slot_WebClient_Core_WebResponse_url;
Optr layout_WebClient_Core_WebResponse;


static void init_SMB_code() {
    Symbol SMB_code = new_Symbol(L"code");
<<<<<<< HEAD
    Array PThreadedCode24638 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_method_return);
    Method PMethod24637 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24638, 1, slot_WebClient_Core_WebResponse_code);
    
    MethodClosure MC_SMB_code = new_MethodClosure((Method)PMethod24637, WebClient_Core_WebResponse_Class);
=======
    Array PThreadedCode24455 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_method_return);
    Method PMethod24454 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24455, 1, slot_WebClient_Core_WebResponse_code);
    
    MethodClosure MC_SMB_code = new_MethodClosure((Method)PMethod24454, WebClient_Core_WebResponse_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebResponse_Class, SMB_code, MC_SMB_code);
}


static void init_SMB_isSuccess() {
    Symbol SMB_isSuccess = new_Symbol(L"isSuccess");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
<<<<<<< HEAD
    Send PSend24641 = new_Send((Optr)self, SMB_code, 0);
=======
    Send PSend24458 = new_Send((Optr)self, SMB_code, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_200 = new_SmallInt(200);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_200_Const = new_Constant((Optr)int_200);
    // >=. 
<<<<<<< HEAD
    Send PSend24642 = new_Send((Optr)PSend24641, SMB__gt__equals_, 1, (Optr)int_200_Const);
    // code. 
    Send PSend24645 = new_Send((Optr)self, SMB_code, 0);
=======
    Send PSend24459 = new_Send((Optr)PSend24458, SMB__gt__equals_, 1, (Optr)int_200_Const);
    // code. 
    Send PSend24462 = new_Send((Optr)self, SMB_code, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_299 = new_SmallInt(299);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_299_Const = new_Constant((Optr)int_299);
    // <=. 
<<<<<<< HEAD
    Send PSend24646 = new_Send((Optr)PSend24645, SMB__lt__equals_, 1, (Optr)int_299_Const);
    Array PThreadedCode24644 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24645, (Optr)&t_push1, (Optr)int_299, (Optr)&t_send1, (Optr)PSend24646, (Optr)&t_block_return);
    Block PBlock24643 = new_Block_with(empty_Array, empty_Array, PThreadedCode24644, 1, PSend24646);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24647 = new_Send((Optr)PSend24642, SMB_and_, 1, (Optr)PBlock24643);
    Array PThreadedCode24640 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24641, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend24642, (Optr)&t_push_closure, (Optr)PBlock24643, (Optr)&t_send1, (Optr)PSend24647, (Optr)&t_method_return);
    Method PMethod24639 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24640, 1, PSend24647);
    
    MethodClosure MC_SMB_isSuccess = new_MethodClosure((Method)PMethod24639, WebClient_Core_WebResponse_Class);
=======
    Send PSend24463 = new_Send((Optr)PSend24462, SMB__lt__equals_, 1, (Optr)int_299_Const);
    Array PThreadedCode24461 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24462, (Optr)&t_push1, (Optr)int_299, (Optr)&t_send1, (Optr)PSend24463, (Optr)&t_block_return);
    Block PBlock24460 = new_Block_with(empty_Array, empty_Array, PThreadedCode24461, 1, PSend24463);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24464 = new_Send((Optr)PSend24459, SMB_and_, 1, (Optr)PBlock24460);
    Array PThreadedCode24457 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24458, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend24459, (Optr)&t_push_closure, (Optr)PBlock24460, (Optr)&t_send1, (Optr)PSend24464, (Optr)&t_method_return);
    Method PMethod24456 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24457, 1, PSend24464);
    
    MethodClosure MC_SMB_isSuccess = new_MethodClosure((Method)PMethod24456, WebClient_Core_WebResponse_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebResponse_Class, SMB_isSuccess, MC_SMB_isSuccess);
}


<<<<<<< HEAD
static void init_SMB_isRedirect() {
    Symbol SMB_isRedirect = new_Symbol(L"isRedirect");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24650 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_300 = new_SmallInt(300);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_300_Const = new_Constant((Optr)int_300);
    // >=. 
    Send PSend24651 = new_Send((Optr)PSend24650, SMB__gt__equals_, 1, (Optr)int_300_Const);
    // code. 
    Send PSend24654 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_399 = new_SmallInt(399);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_399_Const = new_Constant((Optr)int_399);
    // <=. 
    Send PSend24655 = new_Send((Optr)PSend24654, SMB__lt__equals_, 1, (Optr)int_399_Const);
    Array PThreadedCode24653 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24654, (Optr)&t_push1, (Optr)int_399, (Optr)&t_send1, (Optr)PSend24655, (Optr)&t_block_return);
    Block PBlock24652 = new_Block_with(empty_Array, empty_Array, PThreadedCode24653, 1, PSend24655);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24656 = new_Send((Optr)PSend24651, SMB_and_, 1, (Optr)PBlock24652);
    Array PThreadedCode24649 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24650, (Optr)&t_push1, (Optr)int_300, (Optr)&t_send1, (Optr)PSend24651, (Optr)&t_push_closure, (Optr)PBlock24652, (Optr)&t_send1, (Optr)PSend24656, (Optr)&t_method_return);
    Method PMethod24648 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24649, 1, PSend24656);
    
    MethodClosure MC_SMB_isRedirect = new_MethodClosure((Method)PMethod24648, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isRedirect, MC_SMB_isRedirect);
}


static void init_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24658 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray24659 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24662 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign24664 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24667 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend24666 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend24667);
    Assign PAssign24665 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24666);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_24670 = new_String(L" ");
    Constant string_24670_Const = new_Constant((Optr)string_24670);
    // findTokens:. 
    Send PSend24669 = new_Send((Optr)slot_WebClient_Core_WebResponse_status, SMB_findTokens_, 1, (Optr)string_24670_Const);
    Assign PAssign24668 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend24669);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24671 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
=======
static void init_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24466 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray24467 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24470 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign24472 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24475 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend24474 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend24475);
    Assign PAssign24473 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24474);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_24478 = new_String(L" ");
    Constant string_24478_Const = new_Constant((Optr)string_24478);
    // findTokens:. 
    Send PSend24477 = new_Send((Optr)slot_WebClient_Core_WebResponse_status, SMB_findTokens_, 1, (Optr)string_24478_Const);
    Assign PAssign24476 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend24477);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24479 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
<<<<<<< HEAD
    Send PSend24672 = new_Send((Optr)PSend24671, SMB__lt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24676 = new_String(L"Invalid response: ");
    Constant string_24676_Const = new_Constant((Optr)string_24676);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24677 = new_Send((Optr)string_24676_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend24678 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend24677);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend24679 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend24678);
    Array PThreadedCode24675 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24676, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24677, (Optr)&t_send1, (Optr)PSend24678, (Optr)&t_send1, (Optr)PSend24679, (Optr)&t_block_return);
    Block PBlock24674 = new_Block_with(empty_Array, empty_Array, PThreadedCode24675, 1, PSend24679);
    // ifTrue:. 
    Send PSend24673 = new_Send((Optr)PSend24672, SMB_ifTrue_, 1, (Optr)PBlock24674);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend24681 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign24680 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend24681);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend24684 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend24683 = new_Send((Optr)PSend24684, SMB_asInteger, 0);
    Assign PAssign24682 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)PSend24683);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24686 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign24685 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24686);
    Array PThreadedCode24663 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign24664, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24665, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24667, (Optr)&t_send1, (Optr)PSend24666, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24668, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_push1, (Optr)string_24670, (Optr)&t_send1, (Optr)PSend24669, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24671, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24672, (Optr)&t_send_ifTrue_, (Optr)PSend24673, (Optr)PBlock24674, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24680, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24681, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24682, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24684, (Optr)&t_send0, (Optr)PSend24683, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24685, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend24686, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock24661 = new_Block_with(PArray24662, empty_Array, PThreadedCode24663, 8, PAssign24664, PAssign24665, PAssign24668, PSend24673, PAssign24680, PAssign24682, PAssign24685, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24687 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24661);
    Array PThreadedCode24660 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24661, (Optr)&t_send1, (Optr)PSend24687, (Optr)&t_method_return);
    Method PMethod24657 = new_Method_with(PArray24658, PArray24659, empty_Array, PThreadedCode24660, 1, PSend24687);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod24657, WebClient_Core_WebResponse_Class);
=======
    Send PSend24480 = new_Send((Optr)PSend24479, SMB__lt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24484 = new_String(L"Invalid response: ");
    Constant string_24484_Const = new_Constant((Optr)string_24484);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24485 = new_Send((Optr)string_24484_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend24486 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend24485);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend24487 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend24486);
    Array PThreadedCode24483 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24484, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24485, (Optr)&t_send1, (Optr)PSend24486, (Optr)&t_send1, (Optr)PSend24487, (Optr)&t_block_return);
    Block PBlock24482 = new_Block_with(empty_Array, empty_Array, PThreadedCode24483, 1, PSend24487);
    // ifTrue:. 
    Send PSend24481 = new_Send((Optr)PSend24480, SMB_ifTrue_, 1, (Optr)PBlock24482);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend24489 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign24488 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend24489);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend24492 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend24491 = new_Send((Optr)PSend24492, SMB_asInteger, 0);
    Assign PAssign24490 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)PSend24491);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24494 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign24493 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24494);
    Array PThreadedCode24471 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign24472, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24473, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24475, (Optr)&t_send1, (Optr)PSend24474, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24476, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_push1, (Optr)string_24478, (Optr)&t_send1, (Optr)PSend24477, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24479, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24480, (Optr)&t_send_ifTrue_, (Optr)PSend24481, (Optr)PBlock24482, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24488, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24489, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24490, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24492, (Optr)&t_send0, (Optr)PSend24491, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24493, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend24494, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock24469 = new_Block_with(PArray24470, empty_Array, PThreadedCode24471, 8, PAssign24472, PAssign24473, PAssign24476, PSend24481, PAssign24488, PAssign24490, PAssign24493, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24495 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24469);
    Array PThreadedCode24468 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24469, (Optr)&t_send1, (Optr)PSend24495, (Optr)&t_method_return);
    Method PMethod24465 = new_Method_with(PArray24466, PArray24467, empty_Array, PThreadedCode24468, 1, PSend24495);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod24465, WebClient_Core_WebResponse_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebResponse_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_request_() {
    Symbol SMB_request_ = new_Symbol(L"request:");
    Variable VAR_aRequest_0_0 = new_Variable_named(L"aRequest", 0);
<<<<<<< HEAD
    Array PArray24689 = new_Array_with(1, (Optr)VAR_aRequest_0_0);
    Assign PAssign24691 = new_Assign((Optr)slot_WebClient_Core_WebResponse_request, (Optr)VAR_aRequest_0_0);
    Array PThreadedCode24690 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24691, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24688 = new_Method_with(PArray24689, empty_Array, empty_Array, PThreadedCode24690, 2, PAssign24691, self);
    
    MethodClosure MC_SMB_request_ = new_MethodClosure((Method)PMethod24688, WebClient_Core_WebResponse_Class);
=======
    Array PArray24497 = new_Array_with(1, (Optr)VAR_aRequest_0_0);
    Assign PAssign24499 = new_Assign((Optr)slot_WebClient_Core_WebResponse_request, (Optr)VAR_aRequest_0_0);
    Array PThreadedCode24498 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24499, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24496 = new_Method_with(PArray24497, empty_Array, empty_Array, PThreadedCode24498, 2, PAssign24499, self);
    
    MethodClosure MC_SMB_request_ = new_MethodClosure((Method)PMethod24496, WebClient_Core_WebResponse_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebResponse_Class, SMB_request_, MC_SMB_request_);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
    Array PArray24693 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    // writeStatusOn:. 
    Send PSend24695 = new_Send((Optr)self, SMB_writeStatusOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper24696 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24694 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24695, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24696, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24692 = new_Method_with(PArray24693, empty_Array, empty_Array, PThreadedCode24694, 3, PSend24695, PSuper24696, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod24692, WebClient_Core_WebResponse_Class);
=======
    Array PArray24501 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    // writeStatusOn:. 
    Send PSend24503 = new_Send((Optr)self, SMB_writeStatusOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper24504 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24502 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24503, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24504, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24500 = new_Method_with(PArray24501, empty_Array, empty_Array, PThreadedCode24502, 3, PSend24503, PSuper24504, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod24500, WebClient_Core_WebResponse_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebResponse_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


<<<<<<< HEAD
static void init_SMB_writeStatusOn_() {
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24698 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray24701 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24703 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24704 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode24702 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24703, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24704, (Optr)&t_method_return);
    Block PBlock24700 = new_Block_with(PArray24701, empty_Array, PThreadedCode24702, 2, PSend24703, PSend24704);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24705 = new_Send((Optr)PBlock24700, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24699 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock24700, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24705, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24697 = new_Method_with(PArray24698, empty_Array, empty_Array, PThreadedCode24699, 2, PSend24705, self);
    
    MethodClosure MC_SMB_writeStatusOn_ = new_MethodClosure((Method)PMethod24697, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_writeStatusOn_, MC_SMB_writeStatusOn_);
}


static void init_SMB_url() {
    Symbol SMB_url = new_Symbol(L"url");
    Array PThreadedCode24707 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_url, (Optr)&t_method_return);
    Method PMethod24706 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24707, 1, slot_WebClient_Core_WebResponse_url);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod24706, WebClient_Core_WebResponse_Class);
=======
static void init_SMB_url() {
    Symbol SMB_url = new_Symbol(L"url");
    Array PThreadedCode24506 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_url, (Optr)&t_method_return);
    Method PMethod24505 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24506, 1, slot_WebClient_Core_WebResponse_url);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod24505, WebClient_Core_WebResponse_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebResponse_Class, SMB_url, MC_SMB_url);
}


static void init_SMB_status_() {
    Symbol SMB_status_ = new_Symbol(L"status:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
<<<<<<< HEAD
    Array PArray24709 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24711 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)VAR_aString_0_0);
    Array PThreadedCode24710 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24711, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24708 = new_Method_with(PArray24709, empty_Array, empty_Array, PThreadedCode24710, 2, PAssign24711, self);
    
    MethodClosure MC_SMB_status_ = new_MethodClosure((Method)PMethod24708, WebClient_Core_WebResponse_Class);
=======
    Array PArray24508 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24510 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)VAR_aString_0_0);
    Array PThreadedCode24509 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24510, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24507 = new_Method_with(PArray24508, empty_Array, empty_Array, PThreadedCode24509, 2, PAssign24510, self);
    
    MethodClosure MC_SMB_status_ = new_MethodClosure((Method)PMethod24507, WebClient_Core_WebResponse_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebResponse_Class, SMB_status_, MC_SMB_status_);
}


static void init_SMB_url_() {
    Symbol SMB_url_ = new_Symbol(L"url:");
    Variable VAR_urlString_0_0 = new_Variable_named(L"urlString", 0);
    Array PArray24512 = new_Array_with(1, (Optr)VAR_urlString_0_0);
    Assign PAssign24514 = new_Assign((Optr)slot_WebClient_Core_WebResponse_url, (Optr)VAR_urlString_0_0);
    Array PThreadedCode24513 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24514, (Optr)&t_push_variable, (Optr)VAR_urlString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24511 = new_Method_with(PArray24512, empty_Array, empty_Array, PThreadedCode24513, 2, PAssign24514, self);
    
    MethodClosure MC_SMB_url_ = new_MethodClosure((Method)PMethod24511, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_url_, MC_SMB_url_);
}


static void init_SMB_isInformational() {
    Symbol SMB_isInformational = new_Symbol(L"isInformational");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
<<<<<<< HEAD
    Send PSend24714 = new_Send((Optr)self, SMB_code, 0);
=======
    Send PSend24517 = new_Send((Optr)self, SMB_code, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_100 = new_SmallInt(100);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_100_Const = new_Constant((Optr)int_100);
    // >=. 
<<<<<<< HEAD
    Send PSend24715 = new_Send((Optr)PSend24714, SMB__gt__equals_, 1, (Optr)int_100_Const);
    // code. 
    Send PSend24718 = new_Send((Optr)self, SMB_code, 0);
=======
    Send PSend24518 = new_Send((Optr)PSend24517, SMB__gt__equals_, 1, (Optr)int_100_Const);
    // code. 
    Send PSend24521 = new_Send((Optr)self, SMB_code, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_199 = new_SmallInt(199);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_199_Const = new_Constant((Optr)int_199);
    // <=. 
<<<<<<< HEAD
    Send PSend24719 = new_Send((Optr)PSend24718, SMB__lt__equals_, 1, (Optr)int_199_Const);
    Array PThreadedCode24717 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24718, (Optr)&t_push1, (Optr)int_199, (Optr)&t_send1, (Optr)PSend24719, (Optr)&t_block_return);
    Block PBlock24716 = new_Block_with(empty_Array, empty_Array, PThreadedCode24717, 1, PSend24719);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24720 = new_Send((Optr)PSend24715, SMB_and_, 1, (Optr)PBlock24716);
    Array PThreadedCode24713 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24714, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend24715, (Optr)&t_push_closure, (Optr)PBlock24716, (Optr)&t_send1, (Optr)PSend24720, (Optr)&t_method_return);
    Method PMethod24712 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24713, 1, PSend24720);
    
    MethodClosure MC_SMB_isInformational = new_MethodClosure((Method)PMethod24712, WebClient_Core_WebResponse_Class);
=======
    Send PSend24522 = new_Send((Optr)PSend24521, SMB__lt__equals_, 1, (Optr)int_199_Const);
    Array PThreadedCode24520 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24521, (Optr)&t_push1, (Optr)int_199, (Optr)&t_send1, (Optr)PSend24522, (Optr)&t_block_return);
    Block PBlock24519 = new_Block_with(empty_Array, empty_Array, PThreadedCode24520, 1, PSend24522);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24523 = new_Send((Optr)PSend24518, SMB_and_, 1, (Optr)PBlock24519);
    Array PThreadedCode24516 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24517, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend24518, (Optr)&t_push_closure, (Optr)PBlock24519, (Optr)&t_send1, (Optr)PSend24523, (Optr)&t_method_return);
    Method PMethod24515 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24516, 1, PSend24523);
    
    MethodClosure MC_SMB_isInformational = new_MethodClosure((Method)PMethod24515, WebClient_Core_WebResponse_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebResponse_Class, SMB_isInformational, MC_SMB_isInformational);
}


<<<<<<< HEAD
static void init_SMB_url_() {
    Symbol SMB_url_ = new_Symbol(L"url:");
    Variable VAR_urlString_0_0 = new_Variable_named(L"urlString", 0);
    Array PArray24722 = new_Array_with(1, (Optr)VAR_urlString_0_0);
    Assign PAssign24724 = new_Assign((Optr)slot_WebClient_Core_WebResponse_url, (Optr)VAR_urlString_0_0);
    Array PThreadedCode24723 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24724, (Optr)&t_push_variable, (Optr)VAR_urlString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24721 = new_Method_with(PArray24722, empty_Array, empty_Array, PThreadedCode24723, 2, PAssign24724, self);
    
    MethodClosure MC_SMB_url_ = new_MethodClosure((Method)PMethod24721, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_url_, MC_SMB_url_);
}


=======
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
static void init_SMB_content() {
    Symbol SMB_content = new_Symbol(L"content");
    Symbol SMB_getContent = new_Symbol(L"getContent");
    // getContent. 
<<<<<<< HEAD
    Send PSend24730 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign24729 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend24730);
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    // closeIfTransient. 
    Send PSend24731 = new_Send((Optr)self, SMB_closeIfTransient, 0);
    Array PThreadedCode24728 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign24729, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24730, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24731, (Optr)&t_block_return);
    Block PBlock24727 = new_Block_with(empty_Array, empty_Array, PThreadedCode24728, 2, PAssign24729, PSend24731);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24732 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock24727);
    Array PThreadedCode24726 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock24727, (Optr)&t_send1, (Optr)PSend24732, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_method_return);
    Method PMethod24725 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24726, 2, PSend24732, slot_WebClient_Core_WebMessage_content);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod24725, WebClient_Core_WebResponse_Class);
=======
    Send PSend24529 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign24528 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend24529);
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    // closeIfTransient. 
    Send PSend24530 = new_Send((Optr)self, SMB_closeIfTransient, 0);
    Array PThreadedCode24527 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign24528, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24529, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24530, (Optr)&t_block_return);
    Block PBlock24526 = new_Block_with(empty_Array, empty_Array, PThreadedCode24527, 2, PAssign24528, PSend24530);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24531 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock24526);
    Array PThreadedCode24525 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock24526, (Optr)&t_send1, (Optr)PSend24531, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_method_return);
    Method PMethod24524 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24525, 2, PSend24531, slot_WebClient_Core_WebMessage_content);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod24524, WebClient_Core_WebResponse_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebResponse_Class, SMB_content, MC_SMB_content);
}


static void init_SMB_getContent() {
    Symbol SMB_getContent = new_Symbol(L"getContent");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
<<<<<<< HEAD
    Array PArray24736 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24738 = new_Send((Optr)slot_WebClient_Core_WebResponse_request, SMB_method, 0);
    String string_24739 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24739_Const = new_Constant((Optr)string_24739);
    // =. 
    Send PSend24740 = new_Send((Optr)PSend24738, SMB__equals_, 1, (Optr)string_24739_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24744 = new_String(L"");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_24744_Const = new_Constant((Optr)string_24744);
    // escape:. 
    Send PSend24745 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_24744_Const);
    Array PThreadedCode24743 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_24744, (Optr)&t_send1, (Optr)PSend24745, (Optr)&t_block_return);
    Block PBlock24742 = new_Block_with(empty_Array, empty_Array, PThreadedCode24743, 1, PSend24745);
    // ifTrue:. 
    Send PSend24741 = new_Send((Optr)PSend24740, SMB_ifTrue_, 1, (Optr)PBlock24742);
    Super PSuper24746 = new_Super(SMB_getContent, 0);
    Array PThreadedCode24737 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_send0, (Optr)PSend24738, (Optr)&t_push1, (Optr)string_24739, (Optr)&t_send1, (Optr)PSend24740, (Optr)&t_send_ifTrue_, (Optr)PSend24741, (Optr)PBlock24742, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper24746, (Optr)&t_method_return);
    Block PBlock24735 = new_Block_with(PArray24736, empty_Array, PThreadedCode24737, 2, PSend24741, PSuper24746);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24747 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24735);
    Array PThreadedCode24734 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24735, (Optr)&t_send1, (Optr)PSend24747, (Optr)&t_method_return);
    Method PMethod24733 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24734, 1, PSend24747);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod24733, WebClient_Core_WebResponse_Class);
=======
    Array PArray24535 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24537 = new_Send((Optr)slot_WebClient_Core_WebResponse_request, SMB_method, 0);
    String string_24538 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24538_Const = new_Constant((Optr)string_24538);
    // =. 
    Send PSend24539 = new_Send((Optr)PSend24537, SMB__equals_, 1, (Optr)string_24538_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24543 = new_String(L"");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_24543_Const = new_Constant((Optr)string_24543);
    // escape:. 
    Send PSend24544 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_24543_Const);
    Array PThreadedCode24542 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_24543, (Optr)&t_send1, (Optr)PSend24544, (Optr)&t_block_return);
    Block PBlock24541 = new_Block_with(empty_Array, empty_Array, PThreadedCode24542, 1, PSend24544);
    // ifTrue:. 
    Send PSend24540 = new_Send((Optr)PSend24539, SMB_ifTrue_, 1, (Optr)PBlock24541);
    Super PSuper24545 = new_Super(SMB_getContent, 0);
    Array PThreadedCode24536 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_send0, (Optr)PSend24537, (Optr)&t_push1, (Optr)string_24538, (Optr)&t_send1, (Optr)PSend24539, (Optr)&t_send_ifTrue_, (Optr)PSend24540, (Optr)PBlock24541, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper24545, (Optr)&t_method_return);
    Block PBlock24534 = new_Block_with(PArray24535, empty_Array, PThreadedCode24536, 2, PSend24540, PSuper24545);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24546 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24534);
    Array PThreadedCode24533 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24534, (Optr)&t_send1, (Optr)PSend24546, (Optr)&t_method_return);
    Method PMethod24532 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24533, 1, PSend24546);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod24532, WebClient_Core_WebResponse_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebResponse_Class, SMB_getContent, MC_SMB_getContent);
}


static void init_SMB_status() {
    Symbol SMB_status = new_Symbol(L"status");
<<<<<<< HEAD
    Array PThreadedCode24749 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_method_return);
    Method PMethod24748 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24749, 1, slot_WebClient_Core_WebResponse_status);
    
    MethodClosure MC_SMB_status = new_MethodClosure((Method)PMethod24748, WebClient_Core_WebResponse_Class);
=======
    Array PThreadedCode24548 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_method_return);
    Method PMethod24547 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24548, 1, slot_WebClient_Core_WebResponse_status);
    
    MethodClosure MC_SMB_status = new_MethodClosure((Method)PMethod24547, WebClient_Core_WebResponse_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebResponse_Class, SMB_status, MC_SMB_status);
}


static void init_SMB_request() {
    Symbol SMB_request = new_Symbol(L"request");
<<<<<<< HEAD
    Array PThreadedCode24751 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_method_return);
    Method PMethod24750 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24751, 1, slot_WebClient_Core_WebResponse_request);
    
    MethodClosure MC_SMB_request = new_MethodClosure((Method)PMethod24750, WebClient_Core_WebResponse_Class);
=======
    Array PThreadedCode24550 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_method_return);
    Method PMethod24549 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24550, 1, slot_WebClient_Core_WebResponse_request);
    
    MethodClosure MC_SMB_request = new_MethodClosure((Method)PMethod24549, WebClient_Core_WebResponse_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebResponse_Class, SMB_request, MC_SMB_request);
}


static void init_SMB_protocol_code_() {
    /*
    protocol: protocol code: code
// 	"Create a response using the given protocol / code"
// 
// 	^self new protocol: protocol code: code
    */
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    Variable VAR_respProtocol_0_0 = new_Variable_named(L"respProtocol", 0);
    Variable VAR_respCode_0_1 = new_Variable_named(L"respCode", 0);
<<<<<<< HEAD
    Array PArray24753 = new_Array_with(2, (Optr)VAR_respProtocol_0_0, (Optr)VAR_respCode_0_1);
    Assign PAssign24755 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)VAR_respCode_0_1);
    Assign PAssign24756 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_respProtocol_0_0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_24762 = new_String(L" ");
    Constant string_24762_Const = new_Constant((Optr)string_24762);
    // ,. 
    Send PSend24761 = new_Send((Optr)slot_WebClient_Core_WebMessage_protocol, SMB__append_, 1, (Optr)string_24762_Const);
    // ,. 
    Send PSend24760 = new_Send((Optr)PSend24761, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    String string_24763 = new_String(L" ");
    Constant string_24763_Const = new_Constant((Optr)string_24763);
    // ,. 
    Send PSend24759 = new_Send((Optr)PSend24760, SMB__append_, 1, (Optr)string_24763_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend24765 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    // statusCodeAt:. 
    Send PSend24764 = new_Send((Optr)PSend24765, SMB_statusCodeAt_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    // ,. 
    Send PSend24758 = new_Send((Optr)PSend24759, SMB__append_, 1, (Optr)PSend24764);
    Assign PAssign24757 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24758);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24767 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24766 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24767);
    Array PThreadedCode24754 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign24755, (Optr)&t_push_variable, (Optr)VAR_respCode_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24756, (Optr)&t_push_variable, (Optr)VAR_respProtocol_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24757, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_push1, (Optr)string_24762, (Optr)&t_send1, (Optr)PSend24761, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24760, (Optr)&t_push1, (Optr)string_24763, (Optr)&t_send1, (Optr)PSend24759, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24765, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24764, (Optr)&t_send1, (Optr)PSend24758, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24766, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24767, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24752 = new_Method_with(PArray24753, empty_Array, empty_Array, PThreadedCode24754, 5, PAssign24755, PAssign24756, PAssign24757, PAssign24766, self);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24752, WebClient_Core_WebResponse_Class);
=======
    Array PArray24552 = new_Array_with(2, (Optr)VAR_respProtocol_0_0, (Optr)VAR_respCode_0_1);
    Assign PAssign24554 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)VAR_respCode_0_1);
    Assign PAssign24555 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_respProtocol_0_0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_24561 = new_String(L" ");
    Constant string_24561_Const = new_Constant((Optr)string_24561);
    // ,. 
    Send PSend24560 = new_Send((Optr)slot_WebClient_Core_WebMessage_protocol, SMB__append_, 1, (Optr)string_24561_Const);
    // ,. 
    Send PSend24559 = new_Send((Optr)PSend24560, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    String string_24562 = new_String(L" ");
    Constant string_24562_Const = new_Constant((Optr)string_24562);
    // ,. 
    Send PSend24558 = new_Send((Optr)PSend24559, SMB__append_, 1, (Optr)string_24562_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend24564 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    // statusCodeAt:. 
    Send PSend24563 = new_Send((Optr)PSend24564, SMB_statusCodeAt_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    // ,. 
    Send PSend24557 = new_Send((Optr)PSend24558, SMB__append_, 1, (Optr)PSend24563);
    Assign PAssign24556 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24557);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24566 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24565 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24566);
    Array PThreadedCode24553 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign24554, (Optr)&t_push_variable, (Optr)VAR_respCode_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24555, (Optr)&t_push_variable, (Optr)VAR_respProtocol_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24556, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_push1, (Optr)string_24561, (Optr)&t_send1, (Optr)PSend24560, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24559, (Optr)&t_push1, (Optr)string_24562, (Optr)&t_send1, (Optr)PSend24558, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24564, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24563, (Optr)&t_send1, (Optr)PSend24557, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24565, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24566, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24551 = new_Method_with(PArray24552, empty_Array, empty_Array, PThreadedCode24553, 5, PAssign24554, PAssign24555, PAssign24556, PAssign24565, self);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24551, WebClient_Core_WebResponse_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebResponse_Class, SMB_protocol_code_, MC_SMB_protocol_code_);
}


static void init_SMB_writeStatusOn_() {
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24568 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray24571 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24573 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24574 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode24572 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24573, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24574, (Optr)&t_method_return);
    Block PBlock24570 = new_Block_with(PArray24571, empty_Array, PThreadedCode24572, 2, PSend24573, PSend24574);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24575 = new_Send((Optr)PBlock24570, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24569 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock24570, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24575, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24567 = new_Method_with(PArray24568, empty_Array, empty_Array, PThreadedCode24569, 2, PSend24575, self);
    
    MethodClosure MC_SMB_writeStatusOn_ = new_MethodClosure((Method)PMethod24567, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_writeStatusOn_, MC_SMB_writeStatusOn_);
}


static void init_SMB_isRedirect() {
    Symbol SMB_isRedirect = new_Symbol(L"isRedirect");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24578 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_300 = new_SmallInt(300);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_300_Const = new_Constant((Optr)int_300);
    // >=. 
    Send PSend24579 = new_Send((Optr)PSend24578, SMB__gt__equals_, 1, (Optr)int_300_Const);
    // code. 
    Send PSend24582 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_399 = new_SmallInt(399);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_399_Const = new_Constant((Optr)int_399);
    // <=. 
    Send PSend24583 = new_Send((Optr)PSend24582, SMB__lt__equals_, 1, (Optr)int_399_Const);
    Array PThreadedCode24581 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24582, (Optr)&t_push1, (Optr)int_399, (Optr)&t_send1, (Optr)PSend24583, (Optr)&t_block_return);
    Block PBlock24580 = new_Block_with(empty_Array, empty_Array, PThreadedCode24581, 1, PSend24583);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24584 = new_Send((Optr)PSend24579, SMB_and_, 1, (Optr)PBlock24580);
    Array PThreadedCode24577 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24578, (Optr)&t_push1, (Optr)int_300, (Optr)&t_send1, (Optr)PSend24579, (Optr)&t_push_closure, (Optr)PBlock24580, (Optr)&t_send1, (Optr)PSend24584, (Optr)&t_method_return);
    Method PMethod24576 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24577, 1, PSend24584);
    
    MethodClosure MC_SMB_isRedirect = new_MethodClosure((Method)PMethod24576, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isRedirect, MC_SMB_isRedirect);
}


static void init_class_SMB_protocol_code_() {
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    Variable VAR_protocol_0_0 = new_Variable_named(L"protocol", 0);
    Variable VAR_code_0_1 = new_Variable_named(L"code", 0);
<<<<<<< HEAD
    Array PArray24769 = new_Array_with(2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24771 = new_Send((Optr)self, SMB_new, 0);
    // protocol:code:. 
    Send PSend24772 = new_Send((Optr)PSend24771, SMB_protocol_code_, 2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Array PThreadedCode24770 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24771, (Optr)&t_push_variable, (Optr)VAR_protocol_0_0, (Optr)&t_push_variable, (Optr)VAR_code_0_1, (Optr)&t_send2, (Optr)PSend24772, (Optr)&t_method_return);
    Method PMethod24768 = new_Method_with(PArray24769, empty_Array, empty_Array, PThreadedCode24770, 1, PSend24772);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24768, HEADER(WebClient_Core_WebResponse_Class));
=======
    Array PArray24586 = new_Array_with(2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24588 = new_Send((Optr)self, SMB_new, 0);
    // protocol:code:. 
    Send PSend24589 = new_Send((Optr)PSend24588, SMB_protocol_code_, 2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Array PThreadedCode24587 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24588, (Optr)&t_push_variable, (Optr)VAR_protocol_0_0, (Optr)&t_push_variable, (Optr)VAR_code_0_1, (Optr)&t_send2, (Optr)PSend24589, (Optr)&t_method_return);
    Method PMethod24585 = new_Method_with(PArray24586, empty_Array, empty_Array, PThreadedCode24587, 1, PSend24589);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24585, HEADER(WebClient_Core_WebResponse_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(WebClient_Core_WebResponse_Class), SMB_protocol_code_, MC_SMB_protocol_code_);
}

void init_WebClient_Core_PWebResponse_layout() {
    layout_WebClient_Core_WebResponse_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_WebClient_Core_WebResponse_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_WebClient_Core_WebResponse_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_WebClient_Core_WebResponse_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_WebClient_Core_WebResponse_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_WebClient_Core_WebResponse_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_WebClient_Core_WebResponse_Class_class)->values[5] = slot_WebClient_Core_WebMessage_Class_class_statusCodes; // statusCodes 
    
    Symbol  SMB_WebResponse = new_Symbol(L"WebResponse");
    slot_WebClient_Core_WebResponse_request = (Optr)new_Slot(4, L"request");
    slot_WebClient_Core_WebResponse_status = (Optr)new_Slot(5, L"status");
    slot_WebClient_Core_WebResponse_code = (Optr)new_Slot(6, L"code");
    slot_WebClient_Core_WebResponse_url = (Optr)new_Slot(7, L"url");
    layout_WebClient_Core_WebResponse = (Optr)create_layout_with_vars(ObjectLayout_Class, 8);
    ((Array)layout_WebClient_Core_WebResponse)->values[0] = slot_WebClient_Core_WebMessage_stream; // stream 
    ((Array)layout_WebClient_Core_WebResponse)->values[1] = slot_WebClient_Core_WebMessage_protocol; // protocol 
    ((Array)layout_WebClient_Core_WebResponse)->values[2] = slot_WebClient_Core_WebMessage_headers; // headers 
    ((Array)layout_WebClient_Core_WebResponse)->values[3] = slot_WebClient_Core_WebMessage_content; // content 
    ((Array)layout_WebClient_Core_WebResponse)->values[4] = slot_WebClient_Core_WebResponse_request; // request 
    ((Array)layout_WebClient_Core_WebResponse)->values[5] = slot_WebClient_Core_WebResponse_status; // status 
    ((Array)layout_WebClient_Core_WebResponse)->values[6] = slot_WebClient_Core_WebResponse_code; // code 
    ((Array)layout_WebClient_Core_WebResponse)->values[7] = slot_WebClient_Core_WebResponse_url; // url 
    WebClient_Core_WebResponse_Class = (Class)new_Class(WebClient_Core_WebMessage_Class, layout_WebClient_Core_WebResponse_Class_class);
    WebClient_Core_WebResponse_Class->layout = layout_WebClient_Core_WebResponse;
    WebClient_Core_WebResponse_Class->name = SMB_WebResponse;
    
}

void init_WebClient_Core_PWebResponse_methods() {
    init_SMB_code();
    init_SMB_isSuccess();
    init_SMB_readFrom_();
    init_SMB_request_();
    init_SMB_writeOn_();
    init_SMB_url();
    init_SMB_status_();
    init_SMB_url_();
    init_SMB_isInformational();
    init_SMB_content();
    init_SMB_getContent();
    init_SMB_status();
    init_SMB_request();
    init_SMB_protocol_code_();
    init_SMB_writeStatusOn_();
    init_SMB_isRedirect();
    init_class_SMB_protocol_code_();
    
}