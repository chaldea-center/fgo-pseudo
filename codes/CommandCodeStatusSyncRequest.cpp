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
  System_String_o *v11; // x0
  System_String_o *v12; // x0

  v10 = (RequestBase_o *)this;
  if ( (byte_42B012F & 1) == 0 )
  {
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&StringLiteral_17393/*"changeCommandCodeIds"*/);
    sub_B52984(&StringLiteral_22000/*"revokeCommandCodeIds"*/);
    sub_B52984(&StringLiteral_20089/*"isLock"*/);
    this = (CommandCodeStatusSyncRequest_o *)sub_B52984(&StringLiteral_20074/*"isChoice"*/);
    byte_42B012F = 1;
  }
  if ( changeCommandCodeIds && *(_QWORD *)&changeCommandCodeIds->max_length )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(&changeCommandCodeIds->obj, 0, 0, 0LL);
    RequestBase__addField_32020920(v10, (System_String_o *)StringLiteral_17393/*"changeCommandCodeIds"*/, v11, 0LL);
  }
  if ( revokeCommandCodeIds && *(_QWORD *)&revokeCommandCodeIds->max_length )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v12 = JsonManager__toJson(&revokeCommandCodeIds->obj, 0, 0, 0LL);
    RequestBase__addField_32020920(v10, (System_String_o *)StringLiteral_22000/*"revokeCommandCodeIds"*/, v12, 0LL);
  }
  if ( !v10 )
    sub_B52A5C(this, changeCommandCodeIds);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_20089/*"isLock"*/, isLock, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_20074/*"isChoice"*/, isChoice, 0LL);
  RequestBase__beginRequest(v10, 0LL);
}


System_String_o *__fastcall CommandCodeStatusSyncRequest__getMockData(
        CommandCodeStatusSyncRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B012E & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B012E = 1;
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
  System_String_o *BaseUrl; // x0

  if ( (byte_42B012D & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_17722/*"commandCode/statusSync"*/);
    byte_42B012D = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_17722/*"commandCode/statusSync"*/, 0LL);
}


void __fastcall CommandCodeStatusSyncRequest__requestCompleted(
        CommandCodeStatusSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_42B0130 & 1) == 0 )
  {
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_21388/*"ok"*/);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42B0130 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(72, responseList, 0LL);
  if ( v5 && ResponseData__checkError_29724768(v5, 0LL) )
    v6 = &StringLiteral_21388/*"ok"*/;
  else
    v6 = &StringLiteral_21239/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}