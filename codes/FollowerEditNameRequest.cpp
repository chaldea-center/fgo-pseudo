void FollowerEditNameRequest__beginRequest(
        FollowerEditNameRequest_o *this,
        int64_t supportDeckId,
        System_String_o *deckName,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4CF016C & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_24080/*"supportDeckId"*/);
    sub_1C7BAE8(&StringLiteral_18634/*"deckName"*/);
    byte_4CF016C = 1;
  }
  RequestBase__addField_44745468((RequestBase_o *)this, (System_String_o *)StringLiteral_24080/*"supportDeckId"*/, supportDeckId, method);
  RequestBase__addField_44748720((RequestBase_o *)this, (System_String_o *)StringLiteral_18634/*"deckName"*/, deckName, v7);
  RequestBase__beginRequest((RequestBase_o *)this, v8);
}


System_String_o *FollowerEditNameRequest__getMockData(FollowerEditNameRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4CF016B & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF016B = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *FollowerEditNameRequest__getURL(FollowerEditNameRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CF016A & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_19677/*"follower/editName"*/);
    byte_4CF016A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64176912(BaseUrl, (System_String_o *)StringLiteral_19677/*"follower/editName"*/, 0);
}


void FollowerEditNameRequest__requestCompleted(
        FollowerEditNameRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4CF016D & 1) == 0 )
  {
    sub_1C7BAE8(&ResponseCommandKind_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22590/*"ok"*/);
    sub_1C7BAE8(&StringLiteral_22419/*"ng"*/);
    byte_4CF016D = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(60, responseList, 0);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22590/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22419/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v8,
    CallBack->fields.method);
}