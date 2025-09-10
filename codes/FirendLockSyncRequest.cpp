void FirendLockSyncRequest___ctor(FirendLockSyncRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void FirendLockSyncRequest__AddField(
        FirendLockSyncRequest_o *this,
        System_String_o *fieldName,
        System_Int64_array *data,
        const MethodInfo *method)
{
  if ( (byte_4C28DE2 & 1) == 0 )
  {
    sub_1C2D490(&long___TypeInfo);
    byte_4C28DE2 = 1;
  }
  if ( !data )
    data = (System_Int64_array *)sub_1C2D538(long___TypeInfo, 0);
  RequestBase__addField_44009168((RequestBase_o *)this, fieldName, &data->obj, 0);
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

  if ( (byte_4C28DE1 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21314/*"lockFriendUserIds"*/);
    sub_1C2D490(&StringLiteral_24397/*"unlockFriendUserIds"*/);
    sub_1C2D490(&StringLiteral_24396/*"unlockFollowUserIds"*/);
    sub_1C2D490(&StringLiteral_21313/*"lockFollowUserIds"*/);
    byte_4C28DE1 = 1;
  }
  FirendLockSyncRequest__AddField(
    this,
    (System_String_o *)StringLiteral_21314/*"lockFriendUserIds"*/,
    lockFriendUserIds,
    (const MethodInfo *)lockFollowUserIds);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_24397/*"unlockFriendUserIds"*/, unlockFriendUserIds, v11);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_21313/*"lockFollowUserIds"*/, lockFollowUserIds, v12);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_24396/*"unlockFollowUserIds"*/, unlockFollowUserIds, v13);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *FirendLockSyncRequest__getURL(FirendLockSyncRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28DE0 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_19657/*"friend/lockSync"*/);
    byte_4C28DE0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_19657/*"friend/lockSync"*/, 0);
}


void FirendLockSyncRequest__requestCompleted(
        FirendLockSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4C28DE3 & 1) == 0 )
  {
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&StringLiteral_22362/*"ok"*/);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28DE3 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(87, responseList, 0);
  if ( v5 && ResponseData__checkError_44004292(v5, 0) )
    v6 = &StringLiteral_22362/*"ok"*/;
  else
    v6 = &StringLiteral_22195/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}