// local variable allocation has failed, the output may be wrong!
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
  const MethodInfo *v19; // x3
  System_String_o *v20; // x0
  const MethodInfo *v21; // x3

  if ( (byte_4A2F748 & 1) == 0 )
  {
    sub_1B761C0(&JsonManager_TypeInfo, changeUserSvtIds);
    sub_1B761C0(&StringLiteral_20813/*"isStorage"*/, v13);
    sub_1B761C0(&StringLiteral_17813/*"changeUserSvtIds"*/, v14);
    sub_1B761C0(&StringLiteral_20792/*"isLock"*/, v15);
    sub_1B761C0(&StringLiteral_20776/*"isChoice"*/, v16);
    sub_1B761C0(&StringLiteral_22916/*"revokeUserSvtIds"*/, v17);
    byte_4A2F748 = 1;
  }
  if ( changeUserSvtIds && *(_QWORD *)&changeUserSvtIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v18 = JsonManager__toJson(&changeUserSvtIds->obj, 0, 0, 0LL);
    RequestBase__addField_40941128((RequestBase_o *)this, (System_String_o *)StringLiteral_17813/*"changeUserSvtIds"*/, v18, v19);
  }
  if ( revokeUserSvtIds && *(_QWORD *)&revokeUserSvtIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v20 = JsonManager__toJson(&revokeUserSvtIds->obj, 0, 0, 0LL);
    RequestBase__addField_40941128((RequestBase_o *)this, (System_String_o *)StringLiteral_22916/*"revokeUserSvtIds"*/, v20, v21);
  }
  if ( !isStorage )
  {
    if ( !isLock )
      goto LABEL_15;
LABEL_19:
    RequestBase__addField(
      (RequestBase_o *)this,
      (System_String_o *)StringLiteral_20792/*"isLock"*/,
      1,
      (const MethodInfo *)isStorage);
    if ( !isChoice )
      goto LABEL_17;
    goto LABEL_16;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20813/*"isStorage"*/, 1, (const MethodInfo *)isStorage);
  if ( isLock )
    goto LABEL_19;
LABEL_15:
  if ( isChoice )
LABEL_16:
    RequestBase__addField(
      (RequestBase_o *)this,
      (System_String_o *)StringLiteral_20776/*"isChoice"*/,
      1,
      (const MethodInfo *)isStorage);
LABEL_17:
  RequestBase__beginRequest((RequestBase_o *)this, (const MethodInfo *)changeUserSvtIds);
}


System_String_o *__fastcall CardStatusSyncRequest__getMockData(CardStatusSyncRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A2F747 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_1/*""*/, v2);
    byte_4A2F747 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CardStatusSyncRequest__getURL(CardStatusSyncRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A2F746 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_17751/*"card/statusSync"*/, v2);
    byte_4A2F746 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61535060(BaseUrl, (System_String_o *)StringLiteral_17751/*"card/statusSync"*/, 0LL);
}


void __fastcall CardStatusSyncRequest__requestCompleted(
        CardStatusSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v10; // x9

  if ( (byte_4A2F749 & 1) == 0 )
  {
    sub_1B761C0(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B761C0(&StringLiteral_22216/*"ok"*/, v5);
    sub_1B761C0(&StringLiteral_22046/*"ng"*/, v6);
    byte_4A2F749 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(70, responseList, 0LL);
  if ( v7 && ResponseData__checkError(v7, v7->fields.resCode, v8) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_22216/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_22046/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v10,
    *(_QWORD *)&CallBack->fields.extra_arg);
}