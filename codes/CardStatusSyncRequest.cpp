void __fastcall CardStatusSyncRequest___ctor(CardStatusSyncRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall CardStatusSyncRequest__beginRequest(
        CardStatusSyncRequest_o *this,
        System_Int64_array *changeUserSvtIds,
        System_Int64_array *revokeUserSvtIds,
        bool isStorage,
        bool isLock,
        bool isChoice,
        const MethodInfo *method)
{
  System_String_o *v13; // x0
  System_String_o *v14; // x0

  if ( (byte_42B16B2 & 1) == 0 )
  {
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&StringLiteral_20108/*"isStorage"*/);
    sub_B52984(&StringLiteral_17405/*"changeUserSvtIds"*/);
    sub_B52984(&StringLiteral_20089/*"isLock"*/);
    sub_B52984(&StringLiteral_20074/*"isChoice"*/);
    sub_B52984(&StringLiteral_22001/*"revokeUserSvtIds"*/);
    byte_42B16B2 = 1;
  }
  if ( changeUserSvtIds && *(_QWORD *)&changeUserSvtIds->max_length )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v13 = JsonManager__toJson(&changeUserSvtIds->obj, 0, 0, 0LL);
    RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_17405/*"changeUserSvtIds"*/, v13, 0LL);
  }
  if ( revokeUserSvtIds && *(_QWORD *)&revokeUserSvtIds->max_length )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v14 = JsonManager__toJson(&revokeUserSvtIds->obj, 0, 0, 0LL);
    RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_22001/*"revokeUserSvtIds"*/, v14, 0LL);
  }
  if ( !isStorage )
  {
    if ( !isLock )
      goto LABEL_17;
LABEL_21:
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20089/*"isLock"*/, 1, 0LL);
    if ( !isChoice )
      goto LABEL_19;
    goto LABEL_18;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20108/*"isStorage"*/, 1, 0LL);
  if ( isLock )
    goto LABEL_21;
LABEL_17:
  if ( isChoice )
LABEL_18:
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20074/*"isChoice"*/, 1, 0LL);
LABEL_19:
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CardStatusSyncRequest__getMockData(CardStatusSyncRequest_o *this, const MethodInfo *method)
{
  if ( (byte_42B16B1 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B16B1 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CardStatusSyncRequest__getURL(CardStatusSyncRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42B16B0 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_17345/*"card/statusSync"*/);
    byte_42B16B0 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_17345/*"card/statusSync"*/, 0LL);
}


void __fastcall CardStatusSyncRequest__requestCompleted(
        CardStatusSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_42B16B3 & 1) == 0 )
  {
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_21388/*"ok"*/);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42B16B3 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(70, responseList, 0LL);
  if ( v5 && ResponseData__checkError_29724768(v5, 0LL) )
    v6 = &StringLiteral_21388/*"ok"*/;
  else
    v6 = &StringLiteral_21239/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}