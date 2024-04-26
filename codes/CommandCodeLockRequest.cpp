void __fastcall CommandCodeLockRequest___ctor(CommandCodeLockRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall CommandCodeLockRequest__beginRequest(
        CommandCodeLockRequest_o *this,
        int32_t servantId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4354695 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_22843/*"svtId"*/);
    sub_B70694(&StringLiteral_19697/*"idx"*/);
    byte_4354695 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22843/*"svtId"*/, servantId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19697/*"idx"*/, idx, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CommandCodeLockRequest__getURL(CommandCodeLockRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4354694 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&StringLiteral_17861/*"commandCode/lock"*/);
    byte_4354694 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44758168(BaseUrl, (System_String_o *)StringLiteral_17861/*"commandCode/lock"*/, 0LL);
}


void __fastcall CommandCodeLockRequest__requestCompleted(
        CommandCodeLockRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4354696 & 1) == 0 )
  {
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&ResponseCommandKind_TypeInfo);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    byte_4354696 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(89, responseList, 0LL);
  if ( v5 && (v6 = v5, ResponseData__checkError_29653500(v5, 0LL)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_21408/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0LL);
}