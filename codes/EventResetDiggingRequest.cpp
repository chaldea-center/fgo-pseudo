// local variable allocation has failed, the output may be wrong!
void __fastcall EventResetDiggingRequest__beginRequest(
        EventResetDiggingRequest_o *this,
        int32_t eventId,
        int32_t areaNum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1

  if ( (byte_49BC839 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_18824/*"eventId"*/, *(_QWORD *)&eventId);
    sub_1B4CF90(&StringLiteral_16580/*"areaNum"*/, v7);
    byte_49BC839 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18824/*"eventId"*/, eventId, method);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16580/*"areaNum"*/, areaNum, v8);
  RequestBase__beginRequest((RequestBase_o *)this, v9);
}


System_String_o *__fastcall EventResetDiggingRequest__getURL(
        EventResetDiggingRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49BC838 & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_18814/*"event/resetDigging"*/, v2);
    byte_49BC838 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61093468(BaseUrl, (System_String_o *)StringLiteral_18814/*"event/resetDigging"*/, 0LL);
}


void __fastcall EventResetDiggingRequest__requestCompleted(
        EventResetDiggingRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ResponseData_o *v6; // x0
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  System_String_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v11; // x8

  if ( (byte_49BC83A & 1) == 0 )
  {
    sub_1B4CF90(&JsonManager_TypeInfo, responseList);
    sub_1B4CF90(&ResponseCommandKind_TypeInfo, v5);
    byte_49BC83A = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v6 = ResponseCommandKind__SearchData(115, responseList, 0LL);
  if ( v6 && (v7 = v6, ResponseData__checkError_41839176(v6, 0LL)) )
  {
    success = (Il2CppObject *)v7->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v9,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v11 = this->fields.CallBack;
    if ( v11 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v11->fields.m_target)(
        v11->fields.original_method_info,
        0LL,
        *(_QWORD *)&v11->fields.extra_arg);
  }
}