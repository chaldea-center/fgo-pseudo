// local variable allocation has failed, the output may be wrong!
void __fastcall CardLockSyncRequest__beginRequest(
        CardLockSyncRequest_o *this,
        System_Int64_array *lockUserSvtIds,
        System_Int64_array *unlockUserSvtIds,
        bool isStorage,
        const MethodInfo *method)
{
  System_String_o *v9; // x0
  const MethodInfo *v10; // x3
  System_String_o *v11; // x0
  const MethodInfo *v12; // x3

  if ( (byte_4BDDE15 & 1) == 0 )
  {
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&StringLiteral_21200/*"isStorage"*/);
    sub_1C21E38(&StringLiteral_21570/*"lockUserSvtIds"*/);
    sub_1C21E38(&StringLiteral_24726/*"unlockUserSvtIds"*/);
    byte_4BDDE15 = 1;
  }
  if ( lockUserSvtIds && *(_QWORD *)&lockUserSvtIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(&lockUserSvtIds->obj, 0, 0, 0LL);
    RequestBase__addField_42414744((RequestBase_o *)this, (System_String_o *)StringLiteral_21570/*"lockUserSvtIds"*/, v9, v10);
  }
  if ( unlockUserSvtIds && *(_QWORD *)&unlockUserSvtIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(&unlockUserSvtIds->obj, 0, 0, 0LL);
    RequestBase__addField_42414744((RequestBase_o *)this, (System_String_o *)StringLiteral_24726/*"unlockUserSvtIds"*/, v11, v12);
  }
  if ( isStorage )
    RequestBase__addField(
      (RequestBase_o *)this,
      (System_String_o *)StringLiteral_21200/*"isStorage"*/,
      1,
      (const MethodInfo *)isStorage);
  RequestBase__beginRequest((RequestBase_o *)this, (const MethodInfo *)lockUserSvtIds);
}


System_String_o *__fastcall CardLockSyncRequest__getMockData(CardLockSyncRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4BDDE14 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDDE14 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CardLockSyncRequest__getURL(CardLockSyncRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDE13 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_18058/*"card/lockSync"*/);
    byte_4BDDE13 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_18058/*"card/lockSync"*/, 0LL);
}


void __fastcall CardLockSyncRequest__requestCompleted(
        CardLockSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v7; // x9

  if ( (byte_4BDDE16 & 1) == 0 )
  {
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&StringLiteral_22632/*"ok"*/);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BDDE16 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(56, responseList, 0LL);
  if ( v5 && ResponseData__checkError_42505456(v5, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v7 = &StringLiteral_22632/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v7 = &StringLiteral_22456/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v7,
    *(_QWORD *)&CallBack->fields.extra_arg);
}