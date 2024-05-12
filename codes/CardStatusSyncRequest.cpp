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

  if ( (byte_438E416 & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&StringLiteral_20365/*"isStorage"*/);
    sub_B775C4(&StringLiteral_17629/*"changeUserSvtIds"*/);
    sub_B775C4(&StringLiteral_20346/*"isLock"*/);
    sub_B775C4(&StringLiteral_20331/*"isChoice"*/);
    sub_B775C4(&StringLiteral_22284/*"revokeUserSvtIds"*/);
    byte_438E416 = 1;
  }
  if ( changeUserSvtIds && *(_QWORD *)&changeUserSvtIds->max_length )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v13 = JsonManager__toJson(&changeUserSvtIds->obj, 0, 0, 0LL);
    RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_17629/*"changeUserSvtIds"*/, v13, 0LL);
  }
  if ( revokeUserSvtIds && *(_QWORD *)&revokeUserSvtIds->max_length )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v14 = JsonManager__toJson(&revokeUserSvtIds->obj, 0, 0, 0LL);
    RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_22284/*"revokeUserSvtIds"*/, v14, 0LL);
  }
  if ( !isStorage )
  {
    if ( !isLock )
      goto LABEL_17;
LABEL_21:
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20346/*"isLock"*/, 1, 0LL);
    if ( !isChoice )
      goto LABEL_19;
    goto LABEL_18;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20365/*"isStorage"*/, 1, 0LL);
  if ( isLock )
    goto LABEL_21;
LABEL_17:
  if ( isChoice )
LABEL_18:
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20331/*"isChoice"*/, 1, 0LL);
LABEL_19:
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CardStatusSyncRequest__getMockData(CardStatusSyncRequest_o *this, const MethodInfo *method)
{
  if ( (byte_438E415 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E415 = 1;
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

  if ( (byte_438E414 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_17569/*"card/statusSync"*/);
    byte_438E414 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_17569/*"card/statusSync"*/, 0LL);
}


void __fastcall CardStatusSyncRequest__requestCompleted(
        CardStatusSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_438E417 & 1) == 0 )
  {
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438E417 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(70, responseList, 0LL);
  if ( v5 && ResponseData__checkError_30128096(v5, 0LL) )
    v6 = &StringLiteral_21657/*"ok"*/;
  else
    v6 = &StringLiteral_21504/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}