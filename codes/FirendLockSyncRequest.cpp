void __fastcall FirendLockSyncRequest__AddField(
        FirendLockSyncRequest_o *this,
        System_String_o *fieldName,
        System_Int64_array *data,
        const MethodInfo *method)
{
  if ( (byte_4B684E6 & 1) == 0 )
  {
    sub_1BE4ACC(&long___TypeInfo, fieldName);
    byte_4B684E6 = 1;
  }
  if ( !data )
    data = (System_Int64_array *)sub_1BE4B74(long___TypeInfo, 0LL);
  RequestBase__addField_42112900((RequestBase_o *)this, fieldName, &data->obj, method);
}


void __fastcall FirendLockSyncRequest__beginRequest(
        FirendLockSyncRequest_o *this,
        System_Int64_array *lockFriendUserIds,
        System_Int64_array *unlockFriendUserIds,
        System_Int64_array *lockFollowUserIds,
        System_Int64_array *unlockFollowUserIds,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1

  if ( (byte_4B684E5 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_21487/*"lockFriendUserIds"*/, lockFriendUserIds);
    sub_1BE4ACC(&StringLiteral_24630/*"unlockFriendUserIds"*/, v11);
    sub_1BE4ACC(&StringLiteral_24629/*"unlockFollowUserIds"*/, v12);
    sub_1BE4ACC(&StringLiteral_21486/*"lockFollowUserIds"*/, v13);
    byte_4B684E5 = 1;
  }
  FirendLockSyncRequest__AddField(
    this,
    (System_String_o *)StringLiteral_21487/*"lockFriendUserIds"*/,
    lockFriendUserIds,
    (const MethodInfo *)lockFollowUserIds);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_24630/*"unlockFriendUserIds"*/, unlockFriendUserIds, v14);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_21486/*"lockFollowUserIds"*/, lockFollowUserIds, v15);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_24629/*"unlockFollowUserIds"*/, unlockFollowUserIds, v16);
  RequestBase__beginRequest((RequestBase_o *)this, v17);
}


System_String_o *__fastcall FirendLockSyncRequest__getURL(FirendLockSyncRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B684E4 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_19897/*"friend/lockSync"*/, v2);
    byte_4B684E4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62698808(BaseUrl, (System_String_o *)StringLiteral_19897/*"friend/lockSync"*/, 0LL);
}


void __fastcall FirendLockSyncRequest__requestCompleted(
        FirendLockSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  if ( (byte_4B684E7 & 1) == 0 )
  {
    sub_1BE4ACC(&ResponseCommandKind_TypeInfo, responseList);
    sub_1BE4ACC(&StringLiteral_22543/*"ok"*/, v5);
    sub_1BE4ACC(&StringLiteral_22370/*"ng"*/, v6);
    byte_4B684E7 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(87, responseList, 0LL);
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