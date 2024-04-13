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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3

  if ( (byte_42E8BDA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22772/*"svtId"*/, servantId, idx, userCommandCodeId);
    sub_B5D5C4(&StringLiteral_23305/*"userCommandCodeId"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_19638/*"idx"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_16707/*"attachedUserCommandCodeId"*/, v17, v18, v19);
    byte_42E8BDA = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22772/*"svtId"*/, servantId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19638/*"idx"*/, idx, 0LL);
  RequestBase__addField_32361792((RequestBase_o *)this, (System_String_o *)StringLiteral_23305/*"userCommandCodeId"*/, userCommandCodeId, 0LL);
  RequestBase__addField_32361792(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_16707/*"attachedUserCommandCodeId"*/,
    attachedUserCommandCodeId,
    0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CommandCodeAttachRequest__getURL(
        CommandCodeAttachRequest_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42E8BD9 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17812/*"commandCode/attach"*/, v4, v5, v6);
    byte_42E8BD9 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_17812/*"commandCode/attach"*/, 0LL);
}


void __fastcall CommandCodeAttachRequest__requestCompleted(
        CommandCodeAttachRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ResponseData_o *v12; // x0
  ResponseData_o *v13; // x20
  Il2CppObject *success; // x20
  System_String_o *v15; // x1

  if ( (byte_42E8BDB & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v9, v10, v11);
    byte_42E8BDB = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v12 = ResponseCommandKind__SearchData(77, responseList, 0LL);
  if ( v12 && (v13 = v12, ResponseData__checkError_29500464(v12, 0LL)) )
  {
    success = (Il2CppObject *)v13->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_21345/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v15, 0LL);
}