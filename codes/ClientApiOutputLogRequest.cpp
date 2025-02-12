// local variable allocation has failed, the output may be wrong!
void __fastcall ClientApiOutputLogRequest__beginRequest(
        ClientApiOutputLogRequest_o *this,
        System_String_o *title,
        System_String_o *message,
        int32_t code,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1

  if ( (byte_4BC9383 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_18325/*"code"*/, title);
    sub_1C1ABD4(&StringLiteral_24369/*"title"*/, v9);
    sub_1C1ABD4(&StringLiteral_21914/*"msg"*/, v10);
    byte_4BC9383 = 1;
  }
  RequestBase__addField_42362156(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24369/*"title"*/,
    title,
    *(const MethodInfo **)&code);
  RequestBase__addField_42362156((RequestBase_o *)this, (System_String_o *)StringLiteral_21914/*"msg"*/, message, v11);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18325/*"code"*/, code, v12);
  RequestBase__beginRequest((RequestBase_o *)this, v13);
}


System_String_o *__fastcall ClientApiOutputLogRequest__getMockData(
        ClientApiOutputLogRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC9382 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_1/*""*/, method);
    byte_4BC9382 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ClientApiOutputLogRequest__getURL(
        ClientApiOutputLogRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BC9381 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_4616/*"ClientApi/OutputLog"*/, v2);
    byte_4BC9381 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63040368(BaseUrl, (System_String_o *)StringLiteral_4616/*"ClientApi/OutputLog"*/, 0LL);
}


void __fastcall ClientApiOutputLogRequest__requestCompleted(
        ClientApiOutputLogRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  if ( (byte_4BC9384 & 1) == 0 )
  {
    sub_1C1ABD4(&ResponseCommandKind_TypeInfo, responseList);
    sub_1C1ABD4(&StringLiteral_22613/*"ok"*/, v5);
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, v6);
    byte_4BC9384 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(30, responseList, 0LL);
  if ( v7 && ResponseData__checkError_42452820(v7, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22613/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22437/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}