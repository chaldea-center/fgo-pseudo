// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionFinishRequest__beginRequest(
        EventExpeditionFinishRequest_o *this,
        int32_t eventId,
        System_Int32_array *expeditionIdxs,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1

  if ( (byte_4B17A9F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19329/*"eventId"*/, *(_QWORD *)&eventId, expeditionIdxs);
    sub_1BCA7E0(&StringLiteral_19512/*"expeditionIdxs"*/, v7, v8);
    byte_4B17A9F = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19329/*"eventId"*/, eventId, method);
  RequestBase__addField_41870840(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19512/*"expeditionIdxs"*/,
    &expeditionIdxs->obj,
    v9);
  RequestBase__beginRequest((RequestBase_o *)this, v10);
}


System_String_o *__fastcall EventExpeditionFinishRequest__getURL(
        EventExpeditionFinishRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17A9E & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19312/*"event/expeditionFinish"*/, v3, v4);
    byte_4B17A9E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_19312/*"event/expeditionFinish"*/, 0LL);
}


void __fastcall EventExpeditionFinishRequest__requestCompleted(
        EventExpeditionFinishRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  __int64 v9; // x1
  Il2CppObject *success; // x20
  System_String_o *v11; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v13; // x8

  if ( (byte_4B17AA0 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, responseList, method);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v5, v6);
    byte_4B17AA0 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v7 = ResponseCommandKind__SearchData(117, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_41952396(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v9);
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
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v13->fields.m_target)(
        v13->fields.original_method_info,
        0LL,
        *(_QWORD *)&v13->fields.extra_arg);
  }
}