void __fastcall CommandCodeStatusSyncRequest___ctor(CommandCodeStatusSyncRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall CommandCodeStatusSyncRequest__beginRequest(
        CommandCodeStatusSyncRequest_o *this,
        System_Int64_array *changeCommandCodeIds,
        System_Int64_array *revokeCommandCodeIds,
        bool isLock,
        bool isChoice,
        const MethodInfo *method)
{
  RequestBase_o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *v15; // x0
  System_String_o *v16; // x0

  v10 = (RequestBase_o *)this;
  if ( (byte_4188122 & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, changeCommandCodeIds);
    sub_B2C35C(&StringLiteral_17272/*"changeCommandCodeIds"*/, v11);
    sub_B2C35C(&StringLiteral_21818/*"revokeCommandCodeIds"*/, v12);
    sub_B2C35C(&StringLiteral_19939/*"isLock"*/, v13);
    this = (CommandCodeStatusSyncRequest_o *)sub_B2C35C(&StringLiteral_19925/*"isChoice"*/, v14);
    byte_4188122 = 1;
  }
  if ( changeCommandCodeIds && *(_QWORD *)&changeCommandCodeIds->max_length )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson(&changeCommandCodeIds->obj, 0, 0, 0LL);
    RequestBase__addField_31051928(v10, (System_String_o *)StringLiteral_17272/*"changeCommandCodeIds"*/, v15, 0LL);
  }
  if ( revokeCommandCodeIds && *(_QWORD *)&revokeCommandCodeIds->max_length )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = JsonManager__toJson(&revokeCommandCodeIds->obj, 0, 0, 0LL);
    RequestBase__addField_31051928(v10, (System_String_o *)StringLiteral_21818/*"revokeCommandCodeIds"*/, v16, 0LL);
  }
  if ( !v10 )
    sub_B2C434(this, changeCommandCodeIds);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_19939/*"isLock"*/, isLock, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_19925/*"isChoice"*/, isChoice, 0LL);
  RequestBase__beginRequest(v10, 0LL);
}


System_String_o *__fastcall CommandCodeStatusSyncRequest__getMockData(
        CommandCodeStatusSyncRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4188121 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v2);
    byte_4188121 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CommandCodeStatusSyncRequest__getURL(
        CommandCodeStatusSyncRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4188120 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17597/*"commandCode/statusSync"*/, v2);
    byte_4188120 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_17597/*"commandCode/statusSync"*/, 0LL);
}


void __fastcall CommandCodeStatusSyncRequest__requestCompleted(
        CommandCodeStatusSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4188123 & 1) == 0 )
  {
    sub_B2C35C(&ResponseCommandKind_TypeInfo, responseList);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_4188123 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(71, responseList, 0LL);
  if ( v7 && ResponseData__checkError_31019724(v7, 0LL) )
    v8 = &StringLiteral_21218/*"ok"*/;
  else
    v8 = &StringLiteral_21068/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}