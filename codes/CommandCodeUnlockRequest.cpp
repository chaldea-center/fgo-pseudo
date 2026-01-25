void CommandCodeUnlockRequest___ctor(CommandCodeUnlockRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void CommandCodeUnlockRequest__beginRequest(
        CommandCodeUnlockRequest_o *this,
        int32_t servantId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4CF0103 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_24099/*"svtId"*/);
    sub_1C7BAE8(&StringLiteral_20433/*"idx"*/);
    byte_4CF0103 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24099/*"svtId"*/, servantId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20433/*"idx"*/, idx, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CommandCodeUnlockRequest__getURL(CommandCodeUnlockRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CF0102 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_18255/*"commandCode/unlock"*/);
    byte_4CF0102 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64176912(BaseUrl, (System_String_o *)StringLiteral_18255/*"commandCode/unlock"*/, 0);
}


void CommandCodeUnlockRequest__requestCompleted(
        CommandCodeUnlockRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4CF0104 & 1) == 0 )
  {
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&ResponseCommandKind_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22419/*"ng"*/);
    byte_4CF0104 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(79, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_44743216(v5, 0)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22419/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}