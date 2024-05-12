void __fastcall EventExpeditionStartRequest___ctor(EventExpeditionStartRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall EventExpeditionStartRequest__beginRequest(
        EventExpeditionStartRequest_o *this,
        int32_t eventId,
        int32_t expeditionIdx,
        int32_t pieceIdx,
        const MethodInfo *method)
{
  if ( (byte_438DE68 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18839/*"eventId"*/);
    sub_B775C4(&StringLiteral_19003/*"expeditionIdx"*/);
    sub_B775C4(&StringLiteral_21925/*"pieceIdx"*/);
    byte_438DE68 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18839/*"eventId"*/, eventId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19003/*"expeditionIdx"*/, expeditionIdx, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21925/*"pieceIdx"*/, pieceIdx, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventExpeditionStartRequest__getURL(
        EventExpeditionStartRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438DE67 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_18825/*"event/expeditionStart"*/);
    byte_438DE67 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_18825/*"event/expeditionStart"*/, 0LL);
}


void __fastcall EventExpeditionStartRequest__requestCompleted(
        EventExpeditionStartRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1
  RequestBase_o *v9; // x0

  if ( (byte_438DE69 & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    byte_438DE69 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(116, responseList, 0LL);
  if ( v5 && (v6 = v5, ResponseData__checkError_30128096(v5, 0LL)) )
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