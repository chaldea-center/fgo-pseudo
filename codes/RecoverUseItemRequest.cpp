void __fastcall RecoverUseItemRequest__beginRequest(
        RecoverUseItemRequest_o *this,
        int32_t recoverId,
        int32_t num,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_42B3A22 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21341/*"num"*/);
    sub_B52984(&StringLiteral_21905/*"recoverId"*/);
    byte_42B3A22 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21905/*"recoverId"*/, recoverId, method);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21341/*"num"*/, num, v7);
  RequestBase__beginRequest((RequestBase_o *)this, v8);
}


System_String_o *__fastcall RecoverUseItemRequest__getURL(RecoverUseItemRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42B3A21 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_20163/*"item/recover"*/);
    byte_42B3A21 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_20163/*"item/recover"*/, 0LL);
}


void __fastcall RecoverUseItemRequest__requestCompleted(
        RecoverUseItemRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  NetworkManager_ResultCallbackFunc_o *CallBack; // x0
  __int64 *v7; // x8

  if ( (byte_42B3A23 & 1) == 0 )
  {
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_21388/*"ok"*/);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42B3A23 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(45, responseList, 0LL);
  if ( v5 && ResponseData__checkError_29724768(v5, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v7 = &StringLiteral_21388/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v7 = &StringLiteral_21239/*"ng"*/;
  }
  NetworkManager_ResultCallbackFunc__Invoke(CallBack, (System_String_o *)*v7, 0LL);
}