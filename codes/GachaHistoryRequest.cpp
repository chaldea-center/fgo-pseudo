// local variable allocation has failed, the output may be wrong!
void __fastcall GachaHistoryRequest__beginRequest(
        GachaHistoryRequest_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_49BC88D & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_19391/*"gachaId"*/, *(_QWORD *)&gachaId);
    byte_49BC88D = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19391/*"gachaId"*/, gachaId, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *__fastcall GachaHistoryRequest__getMockData(GachaHistoryRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_49BC88C & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_1/*""*/, v2);
    byte_49BC88C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall GachaHistoryRequest__getURL(GachaHistoryRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49BC88B & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_19390/*"gacha/drawHistory"*/, v2);
    byte_49BC88B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61093468(BaseUrl, (System_String_o *)StringLiteral_19390/*"gacha/drawHistory"*/, 0LL);
}


void __fastcall GachaHistoryRequest__requestCompleted(
        GachaHistoryRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  if ( (byte_49BC88E & 1) == 0 )
  {
    sub_1B4CF90(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B4CF90(&StringLiteral_21947/*"ok"*/, v5);
    sub_1B4CF90(&StringLiteral_21779/*"ng"*/, v6);
    byte_49BC88E = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(70, responseList, 0LL);
  if ( v7 && ResponseData__checkError_41839176(v7, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_21947/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_21779/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}