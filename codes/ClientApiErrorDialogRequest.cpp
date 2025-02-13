void __fastcall ClientApiErrorDialogRequest__beginRequest(
        ClientApiErrorDialogRequest_o *this,
        System_String_o *errorTitle,
        System_String_o *errorMessage,
        System_String_o *logDetail,
        bool isSendLogDetail,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_String_o *v15; // x2
  const MethodInfo *v16; // x1

  if ( (byte_4BDDE29 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_19386/*"errorMessage"*/);
    sub_1C21E38(&StringLiteral_21578/*"logDetail"*/);
    sub_1C21E38(&StringLiteral_19387/*"errorTitle"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDDE29 = 1;
  }
  RequestBase__addField_42414744(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19387/*"errorTitle"*/,
    errorTitle,
    (const MethodInfo *)logDetail);
  RequestBase__addField_42414744((RequestBase_o *)this, (System_String_o *)StringLiteral_19386/*"errorMessage"*/, errorMessage, v11);
  if ( !this )
    sub_1C22094(v12, v13);
  if ( isSendLogDetail )
    v15 = logDetail;
  else
    v15 = (System_String_o *)StringLiteral_1/*""*/;
  RequestBase__addField_42414744((RequestBase_o *)this, (System_String_o *)StringLiteral_21578/*"logDetail"*/, v15, v14);
  RequestBase__beginRequest((RequestBase_o *)this, v16);
}


System_String_o *__fastcall ClientApiErrorDialogRequest__getMockData(
        ClientApiErrorDialogRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDDE28 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDDE28 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ClientApiErrorDialogRequest__getURL(
        ClientApiErrorDialogRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDE27 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_4624/*"ClientApi/ErrorDialog"*/);
    byte_4BDDE27 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_4624/*"ClientApi/ErrorDialog"*/, 0LL);
}


void __fastcall ClientApiErrorDialogRequest__requestCompleted(
        ClientApiErrorDialogRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v7; // x9

  if ( (byte_4BDDE2A & 1) == 0 )
  {
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&StringLiteral_22632/*"ok"*/);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BDDE2A = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(118, responseList, 0LL);
  if ( v5 && ResponseData__checkError_42505456(v5, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v7 = &StringLiteral_22632/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v7 = &StringLiteral_22456/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v7,
    *(_QWORD *)&CallBack->fields.extra_arg);
}