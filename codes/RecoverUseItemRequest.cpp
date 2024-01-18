// attributes: thunk
void __fastcall RecoverUseItemRequest___ctor(RecoverUseItemRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverUseItemRequest__beginRequest(
        RecoverUseItemRequest_o *this,
        int32_t recoverId,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1

  if ( (byte_418AD31 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21171/*"num"*/, *(_QWORD *)&recoverId);
    sub_B2C35C(&StringLiteral_21724/*"recoverId"*/, v7);
    byte_418AD31 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21724/*"recoverId"*/, recoverId, method);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21171/*"num"*/, num, v8);
  RequestBase__beginRequest((RequestBase_o *)this, v9);
}


System_String_o *__fastcall RecoverUseItemRequest__getURL(RecoverUseItemRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_418AD30 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_20012/*"item/recover"*/, v2);
    byte_418AD30 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_20012/*"item/recover"*/, 0LL);
}


void __fastcall RecoverUseItemRequest__requestCompleted(
        RecoverUseItemRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  NetworkManager_ResultCallbackFunc_o *CallBack; // x0
  __int64 *v10; // x8

  if ( (byte_418AD32 & 1) == 0 )
  {
    sub_B2C35C(&ResponseCommandKind_TypeInfo, responseList);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_418AD32 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(44, responseList, method);
  if ( v7 && ResponseData__checkError(v7, v7->fields.resCode, v8) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_21218/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_21068/*"ng"*/;
  }
  NetworkManager_ResultCallbackFunc__Invoke(CallBack, (System_String_o *)*v10, 0LL);
}