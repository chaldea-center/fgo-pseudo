void __fastcall FirendLockSyncRequest___ctor(FirendLockSyncRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall FirendLockSyncRequest__AddField(
        FirendLockSyncRequest_o *this,
        System_String_o *fieldName,
        System_Int64_array *data,
        const MethodInfo *method)
{
  if ( (byte_42AE9D3 & 1) == 0 )
  {
    sub_B52984(&long___TypeInfo);
    byte_42AE9D3 = 1;
  }
  if ( !data )
    data = (System_Int64_array *)sub_B5299C(long___TypeInfo, 0LL);
  RequestBase__addField_32021028((RequestBase_o *)this, fieldName, &data->obj, 0LL);
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

  if ( (byte_42AE9D2 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20454/*"lockFriendUserIds"*/);
    sub_B52984(&StringLiteral_23112/*"unlockFriendUserIds"*/);
    sub_B52984(&StringLiteral_23111/*"unlockFollowUserIds"*/);
    sub_B52984(&StringLiteral_20453/*"lockFollowUserIds"*/);
    byte_42AE9D2 = 1;
  }
  FirendLockSyncRequest__AddField(
    this,
    (System_String_o *)StringLiteral_20454/*"lockFriendUserIds"*/,
    lockFriendUserIds,
    (const MethodInfo *)lockFollowUserIds);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_23112/*"unlockFriendUserIds"*/, unlockFriendUserIds, v11);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_20453/*"lockFollowUserIds"*/, lockFollowUserIds, v12);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_23111/*"unlockFollowUserIds"*/, unlockFollowUserIds, v13);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall FirendLockSyncRequest__getURL(FirendLockSyncRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42AE9D1 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_19036/*"friend/lockSync"*/);
    byte_42AE9D1 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_19036/*"friend/lockSync"*/, 0LL);
}


void __fastcall FirendLockSyncRequest__requestCompleted(
        FirendLockSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_42AE9D4 & 1) == 0 )
  {
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_21388/*"ok"*/);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42AE9D4 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(87, responseList, 0LL);
  if ( v5 && ResponseData__checkError_29724768(v5, 0LL) )
    v6 = &StringLiteral_21388/*"ok"*/;
  else
    v6 = &StringLiteral_21239/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}