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

  if ( (byte_4C2389B & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_18385/*"easeInOutCubic"*/, title);
    sub_1C3B764(&StringLiteral_24457/*"x-mac-turkish"*/, v9);
    sub_1C3B764(&StringLiteral_21979/*"op_LogicalNot"*/, v10);
    byte_4C2389B = 1;
  }
  RequestBase__addField_42621852(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24457/*"x-mac-turkish"*/,
    title,
    *(const MethodInfo **)&code);
  RequestBase__addField_42621852((RequestBase_o *)this, (System_String_o *)StringLiteral_21979/*"op_LogicalNot"*/, message, v11);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18385/*"easeInOutCubic"*/, code, v12);
  RequestBase__beginRequest((RequestBase_o *)this, v13);
}


System_String_o *__fastcall ClientApiOutputLogRequest__getMockData(
        ClientApiOutputLogRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2389A & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C2389A = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ClientApiOutputLogRequest__getURL(
        ClientApiOutputLogRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4C23899 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_4613/*"Container_"*/, v2);
    byte_4C23899 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_4613/*"Container_"*/, 0LL);
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

  if ( (byte_4C2389C & 1) == 0 )
  {
    sub_1C3B764(&ResponseCommandKind_TypeInfo, responseList);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v5);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v6);
    byte_4C2389C = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(30, responseList, 0LL);
  if ( v7 && ResponseData__checkError_42712632(v7, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22683/*"sandboxSeurity"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22507/*"referrerMapId"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}