void __fastcall EventExpeditionStartRequest___ctor(EventExpeditionStartRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


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

  if ( (byte_418A3C9 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18472/*"eventId"*/, *(_QWORD *)&eventId);
    sub_B2C35C(&StringLiteral_18632/*"expeditionIdx"*/, v9);
    sub_B2C35C(&StringLiteral_21473/*"pieceIdx"*/, v10);
    byte_418A3C9 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18472/*"eventId"*/, eventId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18632/*"expeditionIdx"*/, expeditionIdx, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21473/*"pieceIdx"*/, pieceIdx, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventExpeditionStartRequest__getURL(
        EventExpeditionStartRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_418A3C8 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_18458/*"event/expeditionStart"*/, v2);
    byte_418A3C8 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_18458/*"event/expeditionStart"*/, 0LL);
}


void __fastcall EventExpeditionStartRequest__requestCompleted(
        EventExpeditionStartRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ResponseData_o *v6; // x0
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  System_String_o *v9; // x1
  RequestBase_o *v10; // x0

  if ( (byte_418A3CA & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, responseList);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v5);
    byte_418A3CA = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v6 = ResponseCommandKind__SearchData(115, responseList, 0LL);
  if ( v6 && (v7 = v6, ResponseData__checkError_31019724(v6, 0LL)) )
  {
    success = (Il2CppObject *)v7->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0LL);
    v10 = (RequestBase_o *)this;
  }
  else
  {
    v10 = (RequestBase_o *)this;
    v9 = 0LL;
  }
  RequestBase__completed(v10, v9, 0LL);
}