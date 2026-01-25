void CommandCodeAttachRequest___ctor(CommandCodeAttachRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void CommandCodeAttachRequest__beginRequest(
        CommandCodeAttachRequest_o *this,
        int32_t servantId,
        int32_t idx,
        int64_t userCommandCodeId,
        int64_t attachedUserCommandCodeId,
        const MethodInfo *method)
{
  if ( (byte_4CF00F2 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_24099/*"svtId"*/);
    sub_1C7BAE8(&StringLiteral_24754/*"userCommandCodeId"*/);
    sub_1C7BAE8(&StringLiteral_20433/*"idx"*/);
    sub_1C7BAE8(&StringLiteral_17008/*"attachedUserCommandCodeId"*/);
    byte_4CF00F2 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24099/*"svtId"*/, servantId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20433/*"idx"*/, idx, 0);
  RequestBase__addField_44745468((RequestBase_o *)this, (System_String_o *)StringLiteral_24754/*"userCommandCodeId"*/, userCommandCodeId, 0);
  RequestBase__addField_44745468(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17008/*"attachedUserCommandCodeId"*/,
    attachedUserCommandCodeId,
    0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CommandCodeAttachRequest__getURL(CommandCodeAttachRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CF00F1 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_18250/*"commandCode/attach"*/);
    byte_4CF00F1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64176912(BaseUrl, (System_String_o *)StringLiteral_18250/*"commandCode/attach"*/, 0);
}


void CommandCodeAttachRequest__requestCompleted(
        CommandCodeAttachRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4CF00F3 & 1) == 0 )
  {
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&ResponseCommandKind_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22419/*"ng"*/);
    byte_4CF00F3 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(77, responseList, 0);
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