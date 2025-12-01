void GachaHistoryRequest__beginRequest(GachaHistoryRequest_o *this, int32_t gachaId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4CC8F9B & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19808/*"gachaId"*/);
    byte_4CC8F9B = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19808/*"gachaId"*/, gachaId, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *GachaHistoryRequest__getMockData(GachaHistoryRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8F9A & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8F9A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *GachaHistoryRequest__getURL(GachaHistoryRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CC8F99 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_19807/*"gacha/drawHistory"*/);
    byte_4CC8F99 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64031724(BaseUrl, (System_String_o *)StringLiteral_19807/*"gacha/drawHistory"*/, 0);
}


void GachaHistoryRequest__requestCompleted(
        GachaHistoryRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4CC8F9C & 1) == 0 )
  {
    sub_1C713B0(&ResponseCommandKind_TypeInfo);
    sub_1C713B0(&StringLiteral_22486/*"ok"*/);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    byte_4CC8F9C = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(70, responseList, 0);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22486/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22316/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v8,
    CallBack->fields.method);
}