void __fastcall CardLockSyncRequest___ctor(CardLockSyncRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall CardLockSyncRequest__beginRequest(
        CardLockSyncRequest_o *this,
        System_Int64_array *lockUserSvtIds,
        System_Int64_array *unlockUserSvtIds,
        bool isStorage,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *v12; // x0
  System_String_o *v13; // x0

  if ( (byte_4B1DF3A & 1) == 0 )
  {
    sub_1BCAFF8(&JsonManager_TypeInfo, lockUserSvtIds);
    sub_1BCAFF8(&StringLiteral_20770/*"isStorage"*/, v9);
    sub_1BCAFF8(&StringLiteral_21139/*"lockUserSvtIds"*/, v10);
    sub_1BCAFF8(&StringLiteral_24204/*"unlockUserSvtIds"*/, v11);
    byte_4B1DF3A = 1;
  }
  if ( lockUserSvtIds && *(_QWORD *)&lockUserSvtIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v12 = JsonManager__toJson(&lockUserSvtIds->obj, 0, 0, 0LL);
    RequestBase__addField_43348616((RequestBase_o *)this, (System_String_o *)StringLiteral_21139/*"lockUserSvtIds"*/, v12, 0LL);
  }
  if ( unlockUserSvtIds && *(_QWORD *)&unlockUserSvtIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v13 = JsonManager__toJson(&unlockUserSvtIds->obj, 0, 0, 0LL);
    RequestBase__addField_43348616((RequestBase_o *)this, (System_String_o *)StringLiteral_24204/*"unlockUserSvtIds"*/, v13, 0LL);
  }
  if ( isStorage )
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20770/*"isStorage"*/, 1, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CardLockSyncRequest__getMockData(CardLockSyncRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4B1DF39 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v2);
    byte_4B1DF39 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CardLockSyncRequest__getURL(CardLockSyncRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B1DF38 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_17607/*"card/lockSync"*/, v2);
    byte_4B1DF38 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62450424(BaseUrl, (System_String_o *)StringLiteral_17607/*"card/lockSync"*/, 0LL);
}


void __fastcall CardLockSyncRequest__requestCompleted(
        CardLockSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4B1DF3B & 1) == 0 )
  {
    sub_1BCAFF8(&ResponseCommandKind_TypeInfo, responseList);
    sub_1BCAFF8(&StringLiteral_22181/*"ok"*/, v5);
    sub_1BCAFF8(&StringLiteral_22015/*"ng"*/, v6);
    byte_4B1DF3B = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(56, responseList, 0LL);
  if ( v7 && ResponseData__checkError_43347888(v7, 0LL) )
    v8 = &StringLiteral_22181/*"ok"*/;
  else
    v8 = &StringLiteral_22015/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}