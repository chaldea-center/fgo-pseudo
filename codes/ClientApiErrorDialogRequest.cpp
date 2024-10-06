void __fastcall ClientApiErrorDialogRequest__beginRequest(
        ClientApiErrorDialogRequest_o *this,
        System_String_o *errorTitle,
        System_String_o *errorMessage,
        System_String_o *logDetail,
        bool isSendLogDetail,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  System_String_o *v18; // x2
  const MethodInfo *v19; // x1

  if ( (byte_4A7169C & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_19085/*"errorMessage"*/, errorTitle);
    sub_1B90010(&StringLiteral_21229/*"logDetail"*/, v11);
    sub_1B90010(&StringLiteral_19086/*"errorTitle"*/, v12);
    sub_1B90010(&StringLiteral_1/*""*/, v13);
    byte_4A7169C = 1;
  }
  RequestBase__addField_41181164(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19086/*"errorTitle"*/,
    errorTitle,
    (const MethodInfo *)logDetail);
  RequestBase__addField_41181164((RequestBase_o *)this, (System_String_o *)StringLiteral_19085/*"errorMessage"*/, errorMessage, v14);
  if ( !this )
    sub_1B9026C(v15, v16);
  if ( isSendLogDetail )
    v18 = logDetail;
  else
    v18 = (System_String_o *)StringLiteral_1/*""*/;
  RequestBase__addField_41181164((RequestBase_o *)this, (System_String_o *)StringLiteral_21229/*"logDetail"*/, v18, v17);
  RequestBase__beginRequest((RequestBase_o *)this, v19);
}


System_String_o *__fastcall ClientApiErrorDialogRequest__getMockData(
        ClientApiErrorDialogRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A7169B & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_1/*""*/, method);
    byte_4A7169B = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ClientApiErrorDialogRequest__getURL(
        ClientApiErrorDialogRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A7169A & 1) == 0 )
  {
    sub_1B90010(&NetworkManager_TypeInfo, method);
    sub_1B90010(&StringLiteral_4531/*"ClientApi/ErrorDialog"*/, v2);
    byte_4A7169A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61787092(BaseUrl, (System_String_o *)StringLiteral_4531/*"ClientApi/ErrorDialog"*/, 0LL);
}


void __fastcall ClientApiErrorDialogRequest__requestCompleted(
        ClientApiErrorDialogRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v10; // x9

  if ( (byte_4A7169D & 1) == 0 )
  {
    sub_1B90010(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B90010(&StringLiteral_22258/*"ok"*/, v5);
    sub_1B90010(&StringLiteral_22088/*"ng"*/, v6);
    byte_4A7169D = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(118, responseList, 0LL);
  if ( v7 && ResponseData__checkError(v7, v7->fields.resCode, v8) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_22258/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_22088/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v10,
    *(_QWORD *)&CallBack->fields.extra_arg);
}