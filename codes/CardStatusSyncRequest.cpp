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

  if ( (byte_418A0BE & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, changeUserSvtIds);
    sub_B2C35C(&StringLiteral_19957/*"isStorage"*/, v13);
    sub_B2C35C(&StringLiteral_17282/*"changeUserSvtIds"*/, v14);
    sub_B2C35C(&StringLiteral_19939/*"isLock"*/, v15);
    sub_B2C35C(&StringLiteral_19925/*"isChoice"*/, v16);
    sub_B2C35C(&StringLiteral_21819/*"revokeUserSvtIds"*/, v17);
    byte_418A0BE = 1;
  }
  if ( changeUserSvtIds && *(_QWORD *)&changeUserSvtIds->max_length )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v18 = JsonManager__toJson(&changeUserSvtIds->obj, 0, 0, 0LL);
    RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_17282/*"changeUserSvtIds"*/, v18, 0LL);
  }
  if ( revokeUserSvtIds && *(_QWORD *)&revokeUserSvtIds->max_length )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v19 = JsonManager__toJson(&revokeUserSvtIds->obj, 0, 0, 0LL);
    RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_21819/*"revokeUserSvtIds"*/, v19, 0LL);
  }
  if ( !isStorage )
  {
    if ( !isLock )
      goto LABEL_17;
LABEL_21:
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19939/*"isLock"*/, 1, 0LL);
    if ( !isChoice )
      goto LABEL_19;
    goto LABEL_18;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19957/*"isStorage"*/, 1, 0LL);
  if ( isLock )
    goto LABEL_21;
LABEL_17:
  if ( isChoice )
LABEL_18:
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19925/*"isChoice"*/, 1, 0LL);
LABEL_19:
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CardStatusSyncRequest__getMockData(CardStatusSyncRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_418A0BD & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v2);
    byte_418A0BD = 1;
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
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_418A0BC & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17225/*"card/statusSync"*/, v2);
    byte_418A0BC = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_17225/*"card/statusSync"*/, 0LL);
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

  if ( (byte_418A0BF & 1) == 0 )
  {
    sub_B2C35C(&ResponseCommandKind_TypeInfo, responseList);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_418A0BF = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(69, responseList, 0LL);
  if ( v7 && ResponseData__checkError_31019724(v7, 0LL) )
    v8 = &StringLiteral_21218/*"ok"*/;
  else
    v8 = &StringLiteral_21068/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}