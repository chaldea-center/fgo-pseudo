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

  if ( (byte_4A5C988 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19058/*"errorMessage"*/);
    sub_1B885B0(&StringLiteral_21200/*"logDetail"*/);
    sub_1B885B0(&StringLiteral_19059/*"errorTitle"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C988 = 1;
  }
  RequestBase__addField_41126952(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19059/*"errorTitle"*/,
    errorTitle,
    (const MethodInfo *)logDetail);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_19058/*"errorMessage"*/, errorMessage, v11);
  if ( !this )
    sub_1B8880C(v12, v13);
  if ( isSendLogDetail )
    v15 = logDetail;
  else
    v15 = (System_String_o *)StringLiteral_1/*""*/;
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_21200/*"logDetail"*/, v15, v14);
  RequestBase__beginRequest((RequestBase_o *)this, v16);
}


System_String_o *__fastcall ClientApiErrorDialogRequest__getMockData(
        ClientApiErrorDialogRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5C987 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C987 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ClientApiErrorDialogRequest__getURL(
        ClientApiErrorDialogRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C986 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_4530/*"ClientApi/ErrorDialog"*/);
    byte_4A5C986 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_4530/*"ClientApi/ErrorDialog"*/, 0LL);
}


void __fastcall ClientApiErrorDialogRequest__requestCompleted(
        ClientApiErrorDialogRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4A5C989 & 1) == 0 )
  {
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5C989 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(118, responseList, 0LL);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22225/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22055/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v8,
    *(_QWORD *)&CallBack->fields.extra_arg);
}