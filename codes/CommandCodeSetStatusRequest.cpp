// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCodeSetStatusRequest__beginRequest(
        CommandCodeSetStatusRequest_o *this,
        int64_t userCommandCodeId,
        bool isLock,
        bool isChoice,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1

  if ( (byte_4BB5FB8 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_18435/*"combine_fodder01"*/, userCommandCodeId);
    sub_1C13D24(&StringLiteral_21144/*"isEnabled"*/, v9);
    sub_1C13D24(&StringLiteral_21127/*"iris-ansi"*/, v10);
    byte_4BB5FB8 = 1;
  }
  RequestBase__addField_42309896(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_18435/*"combine_fodder01"*/,
    userCommandCodeId,
    (const MethodInfo *)isChoice);
  if ( !this )
    sub_1C13F80(v11, v12);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21144/*"isEnabled"*/, isLock, v13);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21127/*"iris-ansi"*/, isChoice, v14);
  RequestBase__beginRequest((RequestBase_o *)this, v15);
}


System_String_o *__fastcall CommandCodeSetStatusRequest__getMockData(
        CommandCodeSetStatusRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4BB5FB7 & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_1/*""*/, v2);
    byte_4BB5FB7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CommandCodeSetStatusRequest__getURL(
        CommandCodeSetStatusRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BB5FB6 & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_18432/*"combine_18"*/, v2);
    byte_4BB5FB6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62967944(BaseUrl, (System_String_o *)StringLiteral_18432/*"combine_18"*/, 0LL);
}


void __fastcall CommandCodeSetStatusRequest__requestCompleted(
        CommandCodeSetStatusRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  if ( (byte_4BB5FB9 & 1) == 0 )
  {
    sub_1C13D24(&ResponseCommandKind_TypeInfo, responseList);
    sub_1C13D24(&StringLiteral_22595/*"offline"*/, v5);
    sub_1C13D24(&StringLiteral_22421/*"newAttributes"*/, v6);
    byte_4BB5FB9 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(71, responseList, 0LL);
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