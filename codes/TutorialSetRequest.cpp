void TutorialSetRequest__beginRequest(TutorialSetRequest_o *this, int32_t flagId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_593A33F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20350/*"flagId"*/);
    byte_593A33F = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20350/*"flagId"*/, flagId, v3);
  *((_DWORD *)&this->fields.shouldShowConnect + 1) = flagId;
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *TutorialSetRequest__getMockData(TutorialSetRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A33E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A33E = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *TutorialSetRequest__getURL(TutorialSetRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A33D & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_25498/*"tutorial/set"*/);
    byte_593A33D = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_25498/*"tutorial/set"*/, 0);
}


void TutorialSetRequest__requestCompleted(
        TutorialSetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseCommandKind_c *v5; // x0
  int v6; // w9
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v10; // x9

  if ( (byte_593A340 & 1) == 0 )
  {
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A340 = 1;
  }
  if ( (byte_593A313 & 1) == 0 )
  {
    sub_21FFC50(&TopHomeRequest_TypeInfo);
    byte_593A313 = 1;
  }
  v5 = ResponseCommandKind_TypeInfo;
  v6 = *(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1);
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(v5, responseList);
  v7 = ResponseCommandKind__SearchData(36, responseList, 0);
  if ( v7 && ResponseData__checkError(v7, v7->fields.resCode, v8) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_23468/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_23290/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v10,
    CallBack->fields.method);
}