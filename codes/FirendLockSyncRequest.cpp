void __fastcall FirendLockSyncRequest__AddField(
        FirendLockSyncRequest_o *this,
        System_String_o *fieldName,
        System_Int64_array *data,
        const MethodInfo *method)
{
  if ( (byte_4A5CA07 & 1) == 0 )
  {
    sub_1B885B0(&long___TypeInfo);
    byte_4A5CA07 = 1;
  }
  if ( !data )
    data = (System_Int64_array *)sub_1B88658(long___TypeInfo, 0LL);
  RequestBase__addField_41136012((RequestBase_o *)this, fieldName, &data->obj, method);
}


void __fastcall FirendLockSyncRequest__beginRequest(
        FirendLockSyncRequest_o *this,
        System_Int64_array *lockFriendUserIds,
        System_Int64_array *unlockFriendUserIds,
        System_Int64_array *lockFollowUserIds,
        System_Int64_array *unlockFollowUserIds,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1

  if ( (byte_4A5CA06 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21190/*"lockFriendUserIds"*/);
    sub_1B885B0(&StringLiteral_24290/*"unlockFriendUserIds"*/);
    sub_1B885B0(&StringLiteral_24289/*"unlockFollowUserIds"*/);
    sub_1B885B0(&StringLiteral_21189/*"lockFollowUserIds"*/);
    byte_4A5CA06 = 1;
  }
  FirendLockSyncRequest__AddField(
    this,
    (System_String_o *)StringLiteral_21190/*"lockFriendUserIds"*/,
    lockFriendUserIds,
    (const MethodInfo *)lockFollowUserIds);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_24290/*"unlockFriendUserIds"*/, unlockFriendUserIds, v11);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_21189/*"lockFollowUserIds"*/, lockFollowUserIds, v12);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_24289/*"unlockFollowUserIds"*/, unlockFollowUserIds, v13);
  RequestBase__beginRequest((RequestBase_o *)this, v14);
}


System_String_o *__fastcall FirendLockSyncRequest__getURL(FirendLockSyncRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CA05 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_19636/*"friend/lockSync"*/);
    byte_4A5CA05 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_19636/*"friend/lockSync"*/, 0LL);
}


void __fastcall FirendLockSyncRequest__requestCompleted(
        FirendLockSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4A5CA08 & 1) == 0 )
  {
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5CA08 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(87, responseList, 0LL);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22225/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22055/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v8,
    *(_QWORD *)&CallBack->fields.extra_arg);
}