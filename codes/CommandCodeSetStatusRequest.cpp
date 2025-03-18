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

  if ( (byte_4C238B2 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_18509/*"ef_special_invincible01"*/, userCommandCodeId);
    sub_1C3B764(&StringLiteral_21221/*"mstArea"*/, v9);
    sub_1C3B764(&StringLiteral_21204/*"ms-BN"*/, v10);
    byte_4C238B2 = 1;
  }
  RequestBase__addField_42628192(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_18509/*"ef_special_invincible01"*/,
    userCommandCodeId,
    (const MethodInfo *)isChoice);
  if ( !this )
    sub_1C3B9C0(v11, v12);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21221/*"mstArea"*/, isLock, v13);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21204/*"ms-BN"*/, isChoice, v14);
  RequestBase__beginRequest((RequestBase_o *)this, v15);
}


System_String_o *__fastcall CommandCodeSetStatusRequest__getMockData(
        CommandCodeSetStatusRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4C238B1 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v2);
    byte_4C238B1 = 1;
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

  if ( (byte_4C238B0 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_18506/*"ef_soundopen"*/, v2);
    byte_4C238B0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_18506/*"ef_soundopen"*/, 0LL);
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

  if ( (byte_4C238B3 & 1) == 0 )
  {
    sub_1C3B764(&ResponseCommandKind_TypeInfo, responseList);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v5);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v6);
    byte_4C238B3 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(71, responseList, 0LL);
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