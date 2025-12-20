void TutorialEventSetRequest__beginRequest(
        TutorialEventSetRequest_o *this,
        int32_t flagId,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4D2E4F8 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_19290/*"eventId"*/);
    sub_1C94098(&StringLiteral_19638/*"flagId"*/);
    byte_4D2E4F8 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19638/*"flagId"*/, flagId, method);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19290/*"eventId"*/, eventId, v7);
  RequestBase__beginRequest((RequestBase_o *)this, v8);
}


System_String_o *TutorialEventSetRequest__getMockData(TutorialEventSetRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4D2E4F7 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2E4F7 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *TutorialEventSetRequest__getURL(TutorialEventSetRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2E4F6 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_24475/*"tutorial/eventFlagSet"*/);
    byte_4D2E4F6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_24475/*"tutorial/eventFlagSet"*/, 0);
}


void TutorialEventSetRequest__requestCompleted(
        TutorialEventSetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4D2E4F9 & 1) == 0 )
  {
    sub_1C94098(&ResponseCommandKind_TypeInfo);
    sub_1C94098(&StringLiteral_22594/*"ok"*/);
    sub_1C94098(&StringLiteral_22424/*"ng"*/);
    byte_4D2E4F9 = 1;
  }
  if ( (byte_4D2E4D0 & 1) == 0 )
  {
    sub_1C94098(&TopHomeRequest_TypeInfo);
    byte_4D2E4D0 = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(57, responseList, 0);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22594/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22424/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v8,
    CallBack->fields.method);
}