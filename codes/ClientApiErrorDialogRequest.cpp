void __fastcall ClientApiErrorDialogRequest__beginRequest(
        ClientApiErrorDialogRequest_o *this,
        System_String_o *errorTitle,
        System_String_o *errorMessage,
        System_String_o *logDetail,
        bool isSendLogDetail,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  const MethodInfo *v17; // x3
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  System_String_o *v21; // x2
  const MethodInfo *v22; // x1

  if ( (byte_4B17A46 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19255/*"errorMessage"*/, errorTitle, errorMessage);
    sub_1BCA7E0(&StringLiteral_21426/*"logDetail"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_19256/*"errorTitle"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B17A46 = 1;
  }
  RequestBase__addField_41862348(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19256/*"errorTitle"*/,
    errorTitle,
    (const MethodInfo *)logDetail);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_19255/*"errorMessage"*/, errorMessage, v17);
  if ( !this )
    sub_1BCAA3C(v18, v19);
  if ( isSendLogDetail )
    v21 = logDetail;
  else
    v21 = (System_String_o *)StringLiteral_1/*""*/;
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_21426/*"logDetail"*/, v21, v20);
  RequestBase__beginRequest((RequestBase_o *)this, v22);
}


System_String_o *__fastcall ClientApiErrorDialogRequest__getMockData(
        ClientApiErrorDialogRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17A45 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B17A45 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ClientApiErrorDialogRequest__getURL(
        ClientApiErrorDialogRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17A44 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_4598/*"ClientApi/ErrorDialog"*/, v3, v4);
    byte_4B17A44 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_4598/*"ClientApi/ErrorDialog"*/, 0LL);
}


void __fastcall ClientApiErrorDialogRequest__requestCompleted(
        ClientApiErrorDialogRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ResponseData_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v11; // x9

  if ( (byte_4B17A47 & 1) == 0 )
  {
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, responseList, method);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B17A47 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(118, responseList, 0LL);
  if ( v9 && ResponseData__checkError_41952396(v9, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v11 = &StringLiteral_22465/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v11 = &StringLiteral_22292/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v11,
    *(_QWORD *)&CallBack->fields.extra_arg);
}