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
  System_Int64_array *v4; // x21

  v4 = data;
  if ( (byte_42E69E3 & 1) == 0 )
  {
    sub_B5D5C4(&long___TypeInfo, (_DWORD)fieldName, (_DWORD)data, method);
    byte_42E69E3 = 1;
  }
  if ( !v4 )
    v4 = (System_Int64_array *)sub_B5D5DC(long___TypeInfo, 0LL);
  RequestBase__addField_32362368((RequestBase_o *)this, fieldName, &v4->obj, 0LL);
}


void __fastcall FirendLockSyncRequest__beginRequest(
        FirendLockSyncRequest_o *this,
        System_Int64_array *lockFriendUserIds,
        System_Int64_array *unlockFriendUserIds,
        System_Int64_array *lockFollowUserIds,
        System_Int64_array *unlockFollowUserIds,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3

  if ( (byte_42E69E2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20559/*"lockFriendUserIds"*/, (_DWORD)lockFriendUserIds, (_DWORD)unlockFriendUserIds, lockFollowUserIds);
    sub_B5D5C4(&StringLiteral_23227/*"unlockFriendUserIds"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_23226/*"unlockFollowUserIds"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_20558/*"lockFollowUserIds"*/, v17, v18, v19);
    byte_42E69E2 = 1;
  }
  FirendLockSyncRequest__AddField(
    this,
    (System_String_o *)StringLiteral_20559/*"lockFriendUserIds"*/,
    lockFriendUserIds,
    (const MethodInfo *)lockFollowUserIds);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_23227/*"unlockFriendUserIds"*/, unlockFriendUserIds, v20);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_20558/*"lockFollowUserIds"*/, lockFollowUserIds, v21);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_23226/*"unlockFollowUserIds"*/, unlockFollowUserIds, v22);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall FirendLockSyncRequest__getURL(FirendLockSyncRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42E69E1 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_19133/*"friend/lockSync"*/, v4, v5, v6);
    byte_42E69E1 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_19133/*"friend/lockSync"*/, 0LL);
}


void __fastcall FirendLockSyncRequest__requestCompleted(
        FirendLockSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ResponseData_o *v12; // x0
  __int64 *v13; // x8

  if ( (byte_42E69E4 & 1) == 0 )
  {
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v9, v10, v11);
    byte_42E69E4 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v12 = ResponseCommandKind__SearchData(87, responseList, 0LL);
  if ( v12 && ResponseData__checkError_29500464(v12, 0LL) )
    v13 = &StringLiteral_21497/*"ok"*/;
  else
    v13 = &StringLiteral_21345/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v13, 0LL);
}