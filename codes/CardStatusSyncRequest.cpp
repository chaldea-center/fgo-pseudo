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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_String_o *v18; // x0
  System_String_o *v19; // x0

  if ( (byte_4B03A37 & 1) == 0 )
  {
    sub_1BC3008(&JsonManager_TypeInfo, changeUserSvtIds);
    sub_1BC3008(&StringLiteral_20754/*"isStorage"*/, v13);
    sub_1BC3008(&StringLiteral_17659/*"changeUserSvtIds"*/, v14);
    sub_1BC3008(&StringLiteral_20727/*"isLock"*/, v15);
    sub_1BC3008(&StringLiteral_20705/*"isChoice"*/, v16);
    sub_1BC3008(&StringLiteral_22876/*"revokeUserSvtIds"*/, v17);
    byte_4B03A37 = 1;
  }
  if ( changeUserSvtIds && *(_QWORD *)&changeUserSvtIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v18 = JsonManager__toJson(&changeUserSvtIds->obj, 0, 0, 0LL);
    RequestBase__addField_43185568((RequestBase_o *)this, (System_String_o *)StringLiteral_17659/*"changeUserSvtIds"*/, v18, 0LL);
  }
  if ( revokeUserSvtIds && *(_QWORD *)&revokeUserSvtIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v19 = JsonManager__toJson(&revokeUserSvtIds->obj, 0, 0, 0LL);
    RequestBase__addField_43185568((RequestBase_o *)this, (System_String_o *)StringLiteral_22876/*"revokeUserSvtIds"*/, v19, 0LL);
  }
  if ( !isStorage )
  {
    if ( !isLock )
      goto LABEL_15;
LABEL_19:
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20727/*"isLock"*/, 1, 0LL);
    if ( !isChoice )
      goto LABEL_17;
    goto LABEL_16;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20754/*"isStorage"*/, 1, 0LL);
  if ( isLock )
    goto LABEL_19;
LABEL_15:
  if ( isChoice )
LABEL_16:
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20705/*"isChoice"*/, 1, 0LL);
LABEL_17:
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CardStatusSyncRequest__getMockData(CardStatusSyncRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4B03A36 & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_1/*""*/, v2);
    byte_4B03A36 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CardStatusSyncRequest__getURL(CardStatusSyncRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B03A35 & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_17597/*"card/statusSync"*/, v2);
    byte_4B03A35 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62348648(BaseUrl, (System_String_o *)StringLiteral_17597/*"card/statusSync"*/, 0LL);
}


void __fastcall CardStatusSyncRequest__requestCompleted(
        CardStatusSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4B03A38 & 1) == 0 )
  {
    sub_1BC3008(&ResponseCommandKind_TypeInfo, responseList);
    sub_1BC3008(&StringLiteral_22163/*"ok"*/, v5);
    sub_1BC3008(&StringLiteral_21997/*"ng"*/, v6);
    byte_4B03A38 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(70, responseList, 0LL);
  if ( v7 && ResponseData__checkError_43184840(v7, 0LL) )
    v8 = &StringLiteral_22163/*"ok"*/;
  else
    v8 = &StringLiteral_21997/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}