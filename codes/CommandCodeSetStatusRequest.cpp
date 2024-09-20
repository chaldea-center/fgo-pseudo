// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCodeSetStatusRequest__beginRequest(
        CommandCodeSetStatusRequest_o *this,
        int64_t userCommandCodeId,
        bool isLock,
        bool isChoice,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1

  if ( (byte_4A5C9A3 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18154/*"commandCodeId"*/);
    sub_1B885B0(&StringLiteral_20799/*"isLock"*/);
    sub_1B885B0(&StringLiteral_20783/*"isChoice"*/);
    byte_4A5C9A3 = 1;
  }
  RequestBase__addField_41133280(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_18154/*"commandCodeId"*/,
    userCommandCodeId,
    (const MethodInfo *)isChoice);
  if ( !this )
    sub_1B8880C(v9, v10);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20799/*"isLock"*/, isLock, v11);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20783/*"isChoice"*/, isChoice, v12);
  RequestBase__beginRequest((RequestBase_o *)this, v13);
}


System_String_o *__fastcall CommandCodeSetStatusRequest__getMockData(
        CommandCodeSetStatusRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5C9A2 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C9A2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CommandCodeSetStatusRequest__getURL(
        CommandCodeSetStatusRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C9A1 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_18151/*"commandCode/setStatus"*/);
    byte_4A5C9A1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_18151/*"commandCode/setStatus"*/, 0LL);
}


void __fastcall CommandCodeSetStatusRequest__requestCompleted(
        CommandCodeSetStatusRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4A5C9A4 & 1) == 0 )
  {
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5C9A4 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(71, responseList, 0LL);
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