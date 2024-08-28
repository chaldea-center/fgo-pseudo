// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRecoverySyncRequest__beginRequest(
        ServantRecoverySyncRequest_o *this,
        int32_t eventId,
        int32_t index,
        int64_t inUserSvtId,
        int64_t outUserSvtId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1

  if ( (byte_4A2141A & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_20567/*"index"*/, *(_QWORD *)&eventId);
    sub_1B715CC(&StringLiteral_19081/*"eventId"*/, v11);
    sub_1B715CC(&StringLiteral_18980/*"enterUserSvtId"*/, v12);
    sub_1B715CC(&StringLiteral_22296/*"outUserSvtId"*/, v13);
    byte_4A2141A = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19081/*"eventId"*/,
    eventId,
    (const MethodInfo *)inUserSvtId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20567/*"index"*/, index, v14);
  RequestBase__addField_40922716((RequestBase_o *)this, (System_String_o *)StringLiteral_18980/*"enterUserSvtId"*/, inUserSvtId, v15);
  RequestBase__addField_40922716((RequestBase_o *)this, (System_String_o *)StringLiteral_22296/*"outUserSvtId"*/, outUserSvtId, v16);
  RequestBase__beginRequest((RequestBase_o *)this, v17);
}


System_String_o *__fastcall ServantRecoverySyncRequest__getURL(
        ServantRecoverySyncRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A21419 & 1) == 0 )
  {
    sub_1B715CC(&NetworkManager_TypeInfo, method);
    sub_1B715CC(&StringLiteral_19069/*"event/recoverySync"*/, v2);
    byte_4A21419 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61505504(BaseUrl, (System_String_o *)StringLiteral_19069/*"event/recoverySync"*/, 0LL);
}


void __fastcall ServantRecoverySyncRequest__requestCompleted(
        ServantRecoverySyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  ResponseData_o *v9; // x20
  Il2CppObject *success; // x20
  System_String_o *v11; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v13; // x8

  if ( (byte_4A2141B & 1) == 0 )
  {
    sub_1B715CC(&JsonManager_TypeInfo, responseList);
    sub_1B715CC(&ResponseCommandKind_TypeInfo, v5);
    sub_1B715CC(&StringLiteral_22000/*"ng"*/, v6);
    byte_4A2141B = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(73, responseList, 0LL);
  if ( v7 && (v9 = v7, ResponseData__checkError(v7, v7->fields.resCode, v8)) )
  {
    success = (Il2CppObject *)v9->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v11,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v13 = this->fields.CallBack;
    if ( v13 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v13->fields.m_target)(
        v13->fields.original_method_info,
        StringLiteral_22000/*"ng"*/,
        *(_QWORD *)&v13->fields.extra_arg);
  }
}