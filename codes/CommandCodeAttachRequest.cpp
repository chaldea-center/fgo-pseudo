void __fastcall CommandCodeAttachRequest___ctor(CommandCodeAttachRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCodeAttachRequest__beginRequest(
        CommandCodeAttachRequest_o *this,
        int32_t servantId,
        int32_t idx,
        int64_t userCommandCodeId,
        int64_t attachedUserCommandCodeId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1

  if ( (byte_41880EF & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22468/*"svtId"*/, *(_QWORD *)&servantId);
    sub_B2C35C(&StringLiteral_23000/*"userCommandCodeId"*/, v11);
    sub_B2C35C(&StringLiteral_19393/*"idx"*/, v12);
    sub_B2C35C(&StringLiteral_16508/*"attachedUserCommandCodeId"*/, v13);
    byte_41880EF = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22468/*"svtId"*/, servantId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19393/*"idx"*/, idx, 0LL);
  RequestBase__addField_31051460((RequestBase_o *)this, (System_String_o *)StringLiteral_23000/*"userCommandCodeId"*/, userCommandCodeId, 0LL);
  RequestBase__addField_31051460(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_16508/*"attachedUserCommandCodeId"*/,
    attachedUserCommandCodeId,
    0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CommandCodeAttachRequest__getURL(
        CommandCodeAttachRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_41880EE & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17593/*"commandCode/attach"*/, v2);
    byte_41880EE = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_17593/*"commandCode/attach"*/, 0LL);
}


void __fastcall CommandCodeAttachRequest__requestCompleted(
        CommandCodeAttachRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_41880F0 & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, responseList);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_41880F0 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(76, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_31019724(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21068/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}