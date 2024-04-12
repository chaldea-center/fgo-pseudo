void __fastcall EventScriptFlagRequest___ctor(EventScriptFlagRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall EventScriptFlagRequest__beginRequest(
        EventScriptFlagRequest_o *this,
        int32_t eventId,
        int32_t flagId,
        const MethodInfo *method)
{
  if ( (byte_42B3459 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18606/*"eventId"*/);
    sub_B52984(&StringLiteral_18898/*"flagId"*/);
    byte_42B3459 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18606/*"eventId"*/, eventId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18898/*"flagId"*/, flagId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventScriptFlagRequest__getURL(EventScriptFlagRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42B3458 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_18600/*"event/scriptFlag"*/);
    byte_42B3458 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_18600/*"event/scriptFlag"*/, 0LL);
}


void __fastcall EventScriptFlagRequest__requestCompleted(
        EventScriptFlagRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1
  RequestBase_o *v9; // x0

  if ( (byte_42B345A & 1) == 0 )
  {
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&ResponseCommandKind_TypeInfo);
    byte_42B345A = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(67, responseList, 0LL);
  if ( v5 && (v6 = v5, ResponseData__checkError_29724768(v5, 0LL)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
    v9 = (RequestBase_o *)this;
  }
  else
  {
    v9 = (RequestBase_o *)this;
    v8 = 0LL;
  }
  RequestBase__completed(v9, v8, 0LL);
}