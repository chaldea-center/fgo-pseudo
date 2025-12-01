void FirendLockSyncRequest__AddField(
        FirendLockSyncRequest_o *this,
        System_String_o *fieldName,
        System_Int64_array *data,
        const MethodInfo *method)
{
  if ( (byte_4CC8F54 & 1) == 0 )
  {
    sub_1C713B0(&long___TypeInfo);
    byte_4CC8F54 = 1;
  }
  if ( !data )
    data = (System_Int64_array *)sub_1C71458(long___TypeInfo, 0);
  RequestBase__addField_44516316((RequestBase_o *)this, fieldName, &data->obj, method);
}


void FirendLockSyncRequest__beginRequest(
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

  if ( (byte_4CC8F53 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_21428/*"lockFriendUserIds"*/);
    sub_1C713B0(&StringLiteral_24541/*"unlockFriendUserIds"*/);
    sub_1C713B0(&StringLiteral_24540/*"unlockFollowUserIds"*/);
    sub_1C713B0(&StringLiteral_21427/*"lockFollowUserIds"*/);
    byte_4CC8F53 = 1;
  }
  FirendLockSyncRequest__AddField(
    this,
    (System_String_o *)StringLiteral_21428/*"lockFriendUserIds"*/,
    lockFriendUserIds,
    (const MethodInfo *)lockFollowUserIds);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_24541/*"unlockFriendUserIds"*/, unlockFriendUserIds, v11);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_21427/*"lockFollowUserIds"*/, lockFollowUserIds, v12);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_24540/*"unlockFollowUserIds"*/, unlockFollowUserIds, v13);
  RequestBase__beginRequest((RequestBase_o *)this, v14);
}


System_String_o *FirendLockSyncRequest__getURL(FirendLockSyncRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CC8F52 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_19746/*"friend/lockSync"*/);
    byte_4CC8F52 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64031724(BaseUrl, (System_String_o *)StringLiteral_19746/*"friend/lockSync"*/, 0);
}


void FirendLockSyncRequest__requestCompleted(
        FirendLockSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4CC8F55 & 1) == 0 )
  {
    sub_1C713B0(&ResponseCommandKind_TypeInfo);
    sub_1C713B0(&StringLiteral_22486/*"ok"*/);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    byte_4CC8F55 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(87, responseList, 0);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22486/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22316/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v8,
    CallBack->fields.method);
}