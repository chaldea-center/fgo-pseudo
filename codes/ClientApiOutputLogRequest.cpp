// local variable allocation has failed, the output may be wrong!
void __fastcall ClientApiOutputLogRequest__beginRequest(
        ClientApiOutputLogRequest_o *this,
        System_String_o *title,
        System_String_o *message,
        int32_t code,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1

  if ( (byte_4A5C98C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18035/*"code"*/);
    sub_1B885B0(&StringLiteral_23957/*"title"*/);
    sub_1B885B0(&StringLiteral_21546/*"msg"*/);
    byte_4A5C98C = 1;
  }
  RequestBase__addField_41126952(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23957/*"title"*/,
    title,
    *(const MethodInfo **)&code);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_21546/*"msg"*/, message, v9);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18035/*"code"*/, code, v10);
  RequestBase__beginRequest((RequestBase_o *)this, v11);
}


System_String_o *__fastcall ClientApiOutputLogRequest__getMockData(
        ClientApiOutputLogRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5C98B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C98B = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ClientApiOutputLogRequest__getURL(
        ClientApiOutputLogRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C98A & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_4531/*"ClientApi/OutputLog"*/);
    byte_4A5C98A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_4531/*"ClientApi/OutputLog"*/, 0LL);
}


void __fastcall ClientApiOutputLogRequest__requestCompleted(
        ClientApiOutputLogRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4A5C98D & 1) == 0 )
  {
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5C98D = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(30, responseList, 0LL);
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