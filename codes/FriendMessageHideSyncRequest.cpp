void __fastcall FriendMessageHideSyncRequest__beginRequest(
        FriendMessageHideSyncRequest_o *this,
        System_Int64_array *hideUserIds,
        System_Int64_array *unHideUserIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1

  if ( (byte_4BC9430 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_20254/*"hideUserIds"*/, hideUserIds);
    sub_1C1ABD4(&StringLiteral_24568/*"unHideUserIds"*/, v7);
    byte_4BC9430 = 1;
  }
  RequestBase__addField_42370648(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_20254/*"hideUserIds"*/,
    &hideUserIds->obj,
    method);
  RequestBase__addField_42370648((RequestBase_o *)this, (System_String_o *)StringLiteral_24568/*"unHideUserIds"*/, &unHideUserIds->obj, v8);
  RequestBase__beginRequest((RequestBase_o *)this, v9);
}


System_String_o *__fastcall FriendMessageHideSyncRequest__getURL(
        FriendMessageHideSyncRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BC942F & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_19956/*"friend/messageHideSync"*/, v2);
    byte_4BC942F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63040368(BaseUrl, (System_String_o *)StringLiteral_19956/*"friend/messageHideSync"*/, 0LL);
}


void __fastcall FriendMessageHideSyncRequest__requestCompleted(
        FriendMessageHideSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  if ( (byte_4BC9431 & 1) == 0 )
  {
    sub_1C1ABD4(&ResponseCommandKind_TypeInfo, responseList);
    sub_1C1ABD4(&StringLiteral_22613/*"ok"*/, v5);
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, v6);
    byte_4BC9431 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(66, responseList, 0LL);
  if ( v7 && ResponseData__checkError_42452820(v7, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22613/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22437/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}