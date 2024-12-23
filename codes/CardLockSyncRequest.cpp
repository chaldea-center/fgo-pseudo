// local variable allocation has failed, the output may be wrong!
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
  const MethodInfo *v13; // x3
  System_String_o *v14; // x0
  const MethodInfo *v15; // x3

  if ( (byte_4B68450 & 1) == 0 )
  {
    sub_1BE4ACC(&JsonManager_TypeInfo, lockUserSvtIds);
    sub_1BE4ACC(&StringLiteral_21120/*"isStorage"*/, v9);
    sub_1BE4ACC(&StringLiteral_21489/*"lockUserSvtIds"*/, v10);
    sub_1BE4ACC(&StringLiteral_24631/*"unlockUserSvtIds"*/, v11);
    byte_4B68450 = 1;
  }
  if ( lockUserSvtIds && *(_QWORD *)&lockUserSvtIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v12 = JsonManager__toJson(&lockUserSvtIds->obj, 0, 0, 0LL);
    RequestBase__addField_42104408((RequestBase_o *)this, (System_String_o *)StringLiteral_21489/*"lockUserSvtIds"*/, v12, v13);
  }
  if ( unlockUserSvtIds && *(_QWORD *)&unlockUserSvtIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v14 = JsonManager__toJson(&unlockUserSvtIds->obj, 0, 0, 0LL);
    RequestBase__addField_42104408((RequestBase_o *)this, (System_String_o *)StringLiteral_24631/*"unlockUserSvtIds"*/, v14, v15);
  }
  if ( isStorage )
    RequestBase__addField(
      (RequestBase_o *)this,
      (System_String_o *)StringLiteral_21120/*"isStorage"*/,
      1,
      (const MethodInfo *)isStorage);
  RequestBase__beginRequest((RequestBase_o *)this, (const MethodInfo *)lockUserSvtIds);
}


System_String_o *__fastcall CardLockSyncRequest__getMockData(CardLockSyncRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4B6844F & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v2);
    byte_4B6844F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CardLockSyncRequest__getURL(CardLockSyncRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B6844E & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_17989/*"card/lockSync"*/, v2);
    byte_4B6844E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62698808(BaseUrl, (System_String_o *)StringLiteral_17989/*"card/lockSync"*/, 0LL);
}


void __fastcall CardLockSyncRequest__requestCompleted(
        CardLockSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  if ( (byte_4B68451 & 1) == 0 )
  {
    sub_1BE4ACC(&ResponseCommandKind_TypeInfo, responseList);
    sub_1BE4ACC(&StringLiteral_22543/*"ok"*/, v5);
    sub_1BE4ACC(&StringLiteral_22370/*"ng"*/, v6);
    byte_4B68451 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(56, responseList, 0LL);
  if ( v7 && ResponseData__checkError_42194996(v7, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22543/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22370/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}