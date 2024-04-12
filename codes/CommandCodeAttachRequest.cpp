void __fastcall CommandCodeAttachRequest___ctor(CommandCodeAttachRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall CommandCodeAttachRequest__beginRequest(
        CommandCodeAttachRequest_o *this,
        int32_t servantId,
        int32_t idx,
        int64_t userCommandCodeId,
        int64_t attachedUserCommandCodeId,
        const MethodInfo *method)
{
  if ( (byte_42B00F9 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22657/*"svtId"*/);
    sub_B52984(&StringLiteral_23190/*"userCommandCodeId"*/);
    sub_B52984(&StringLiteral_19540/*"idx"*/);
    sub_B52984(&StringLiteral_16621/*"attachedUserCommandCodeId"*/);
    byte_42B00F9 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22657/*"svtId"*/, servantId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19540/*"idx"*/, idx, 0LL);
  RequestBase__addField_32020452((RequestBase_o *)this, (System_String_o *)StringLiteral_23190/*"userCommandCodeId"*/, userCommandCodeId, 0LL);
  RequestBase__addField_32020452(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_16621/*"attachedUserCommandCodeId"*/,
    attachedUserCommandCodeId,
    0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CommandCodeAttachRequest__getURL(
        CommandCodeAttachRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42B00F8 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_17718/*"commandCode/attach"*/);
    byte_42B00F8 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_17718/*"commandCode/attach"*/, 0LL);
}


void __fastcall CommandCodeAttachRequest__requestCompleted(
        CommandCodeAttachRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_42B00FA & 1) == 0 )
  {
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42B00FA = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(77, responseList, 0LL);
  if ( v5 && (v6 = v5, ResponseData__checkError_29724768(v5, 0LL)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_21239/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0LL);
}