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

  if ( (byte_4C2388B & 1) == 0 )
  {
    sub_1C3B764(&JsonManager_TypeInfo, changeUserSvtIds);
    sub_1C3B764(&StringLiteral_21246/*"mstBoost"*/, v13);
    sub_1C3B764(&StringLiteral_18167/*"debug_server_time"*/, v14);
    sub_1C3B764(&StringLiteral_21221/*"mstArea"*/, v15);
    sub_1C3B764(&StringLiteral_21204/*"ms-BN"*/, v16);
    sub_1C3B764(&StringLiteral_23409/*"synthesis_notice_"*/, v17);
    byte_4C2388B = 1;
  }
  if ( changeUserSvtIds && *(_QWORD *)&changeUserSvtIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v18 = JsonManager__toJson(&changeUserSvtIds->obj, 0, 0, 0LL);
    RequestBase__addField_42621852((RequestBase_o *)this, (System_String_o *)StringLiteral_18167/*"debug_server_time"*/, v18, v19);
  }
  if ( revokeUserSvtIds && *(_QWORD *)&revokeUserSvtIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v20 = JsonManager__toJson(&revokeUserSvtIds->obj, 0, 0, 0LL);
    RequestBase__addField_42621852((RequestBase_o *)this, (System_String_o *)StringLiteral_23409/*"synthesis_notice_"*/, v20, v21);
  }
  if ( !isStorage )
  {
    if ( !isLock )
      goto LABEL_15;
LABEL_19:
    RequestBase__addField(
      (RequestBase_o *)this,
      (System_String_o *)StringLiteral_21221/*"mstArea"*/,
      1,
      (const MethodInfo *)isStorage);
    if ( !isChoice )
      goto LABEL_17;
    goto LABEL_16;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21246/*"mstBoost"*/, 1, (const MethodInfo *)isStorage);
  if ( isLock )
    goto LABEL_19;
LABEL_15:
  if ( isChoice )
LABEL_16:
    RequestBase__addField(
      (RequestBase_o *)this,
      (System_String_o *)StringLiteral_21204/*"ms-BN"*/,
      1,
      (const MethodInfo *)isStorage);
LABEL_17:
  RequestBase__beginRequest((RequestBase_o *)this, (const MethodInfo *)changeUserSvtIds);
}


System_String_o *__fastcall CardStatusSyncRequest__getMockData(CardStatusSyncRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4C2388A & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v2);
    byte_4C2388A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CardStatusSyncRequest__getURL(CardStatusSyncRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4C23889 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_18104/*"darkgrey"*/, v2);
    byte_4C23889 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_18104/*"darkgrey"*/, 0LL);
}


void __fastcall CardStatusSyncRequest__requestCompleted(
        CardStatusSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  if ( (byte_4C2388C & 1) == 0 )
  {
    sub_1C3B764(&ResponseCommandKind_TypeInfo, responseList);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v5);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v6);
    byte_4C2388C = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(70, responseList, 0LL);
  if ( v7 && ResponseData__checkError_42712632(v7, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22683/*"sandboxSeurity"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22507/*"referrerMapId"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}