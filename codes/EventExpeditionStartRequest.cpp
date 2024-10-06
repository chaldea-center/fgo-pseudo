// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionStartRequest__beginRequest(
        EventExpeditionStartRequest_o *this,
        int32_t eventId,
        int32_t expeditionIdx,
        int32_t pieceIdx,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1

  if ( (byte_4A716F8 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_19159/*"eventId"*/, *(_QWORD *)&eventId);
    sub_1B90010(&StringLiteral_19336/*"expeditionIdx"*/, v9);
    sub_1B90010(&StringLiteral_22565/*"pieceIdx"*/, v10);
    byte_4A716F8 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19159/*"eventId"*/,
    eventId,
    *(const MethodInfo **)&pieceIdx);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19336/*"expeditionIdx"*/, expeditionIdx, v11);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22565/*"pieceIdx"*/, pieceIdx, v12);
  RequestBase__beginRequest((RequestBase_o *)this, v13);
}


System_String_o *__fastcall EventExpeditionStartRequest__getURL(
        EventExpeditionStartRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A716F7 & 1) == 0 )
  {
    sub_1B90010(&NetworkManager_TypeInfo, method);
    sub_1B90010(&StringLiteral_19143/*"event/expeditionStart"*/, v2);
    byte_4A716F7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61787092(BaseUrl, (System_String_o *)StringLiteral_19143/*"event/expeditionStart"*/, 0LL);
}


void __fastcall EventExpeditionStartRequest__requestCompleted(
        EventExpeditionStartRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ResponseData_o *v6; // x0
  const MethodInfo *v7; // x2
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v12; // x8

  if ( (byte_4A716F9 & 1) == 0 )
  {
    sub_1B90010(&JsonManager_TypeInfo, responseList);
    sub_1B90010(&ResponseCommandKind_TypeInfo, v5);
    byte_4A716F9 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v6 = ResponseCommandKind__SearchData(116, responseList, 0LL);
  if ( v6 && (v8 = v6, ResponseData__checkError(v6, v6->fields.resCode, v7)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v10,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v12 = this->fields.CallBack;
    if ( v12 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v12->fields.m_target)(
        v12->fields.original_method_info,
        0LL,
        *(_QWORD *)&v12->fields.extra_arg);
  }
}