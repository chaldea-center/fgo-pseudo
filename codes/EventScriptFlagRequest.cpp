// attributes: thunk
void EventScriptFlagRequest___ctor(EventScriptFlagRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, method);
}


void EventScriptFlagRequest__beginRequest(
        EventScriptFlagRequest_o *this,
        int32_t eventId,
        int32_t flagId,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4D2E3EC & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_19290/*"eventId"*/);
    sub_1C94098(&StringLiteral_19638/*"flagId"*/);
    byte_4D2E3EC = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19290/*"eventId"*/, eventId, method);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19638/*"flagId"*/, flagId, v7);
  RequestBase__beginRequest((RequestBase_o *)this, v8);
}


System_String_o *EventScriptFlagRequest__getURL(EventScriptFlagRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2E3EB & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_19282/*"event/scriptFlag"*/);
    byte_4D2E3EB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_19282/*"event/scriptFlag"*/, 0);
}


void EventScriptFlagRequest__requestCompleted(
        EventScriptFlagRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  System_String_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v11; // x8

  if ( (byte_4D2E3ED & 1) == 0 )
  {
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&ResponseCommandKind_TypeInfo);
    byte_4D2E3ED = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(67, responseList, 0);
  if ( v5 && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6)) )
  {
    success = (Il2CppObject *)v7->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        v9,
        CallBack->fields.method);
  }
  else
  {
    v11 = this->fields.CallBack;
    if ( v11 )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v11->fields.invoke_impl)(
        v11->fields.method_code,
        0,
        v11->fields.method);
  }
}