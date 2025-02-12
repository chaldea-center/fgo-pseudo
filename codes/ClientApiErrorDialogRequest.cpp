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

  if ( (byte_4BB5F9D & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_19357/*"equals"*/, errorTitle);
    sub_1C13D24(&StringLiteral_21546/*"localtime"*/, v11);
    sub_1C13D24(&StringLiteral_19358/*"equipAddId"*/, v12);
    sub_1C13D24(&StringLiteral_1/*""*/, v13);
    byte_4BB5F9D = 1;
  }
  RequestBase__addField_42303556(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19358/*"equipAddId"*/,
    errorTitle,
    (const MethodInfo *)logDetail);
  RequestBase__addField_42303556((RequestBase_o *)this, (System_String_o *)StringLiteral_19357/*"equals"*/, errorMessage, v14);
  if ( !this )
    sub_1C13F80(v15, v16);
  if ( isSendLogDetail )
    v18 = logDetail;
  else
    v18 = (System_String_o *)StringLiteral_1/*""*/;
  RequestBase__addField_42303556((RequestBase_o *)this, (System_String_o *)StringLiteral_21546/*"localtime"*/, v18, v17);
  RequestBase__beginRequest((RequestBase_o *)this, v19);
}


System_String_o *__fastcall ClientApiErrorDialogRequest__getMockData(
        ClientApiErrorDialogRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB5F9C & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1/*""*/, method);
    byte_4BB5F9C = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ClientApiErrorDialogRequest__getURL(
        ClientApiErrorDialogRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BB5F9B & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_4612/*"ClearMatch"*/, v2);
    byte_4BB5F9B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62967944(BaseUrl, (System_String_o *)StringLiteral_4612/*"ClearMatch"*/, 0LL);
}


void __fastcall ClientApiErrorDialogRequest__requestCompleted(
        ClientApiErrorDialogRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  if ( (byte_4BB5F9E & 1) == 0 )
  {
    sub_1C13D24(&ResponseCommandKind_TypeInfo, responseList);
    sub_1C13D24(&StringLiteral_22595/*"offline"*/, v5);
    sub_1C13D24(&StringLiteral_22421/*"newAttributes"*/, v6);
    byte_4BB5F9E = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(118, responseList, 0LL);
  if ( v7 && ResponseData__checkError_42394144(v7, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22595/*"offline"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22421/*"newAttributes"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}