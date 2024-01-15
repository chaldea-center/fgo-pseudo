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
  if ( (byte_40F8E9E & 1) == 0 )
  {
    sub_B16FFC(&long___TypeInfo, fieldName);
    byte_40F8E9E = 1;
  }
  if ( !v4 )
    v4 = (System_Int64_array *)sub_B17014(long___TypeInfo, 0LL, data);
  RequestBase__addField_30957272((RequestBase_o *)this, fieldName, &v4->obj, 0LL);
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

  if ( (byte_40F8E9D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20217/*"lockFriendUserIds"*/, lockFriendUserIds);
    sub_B16FFC(&StringLiteral_22829/*"unlockFriendUserIds"*/, v11);
    sub_B16FFC(&StringLiteral_22828/*"unlockFollowUserIds"*/, v12);
    sub_B16FFC(&StringLiteral_20216/*"lockFollowUserIds"*/, v13);
    byte_40F8E9D = 1;
  }
  FirendLockSyncRequest__AddField(
    this,
    (System_String_o *)StringLiteral_20217/*"lockFriendUserIds"*/,
    lockFriendUserIds,
    (const MethodInfo *)lockFollowUserIds);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_22829/*"unlockFriendUserIds"*/, unlockFriendUserIds, v14);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_20216/*"lockFollowUserIds"*/, lockFollowUserIds, v15);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_22828/*"unlockFollowUserIds"*/, unlockFollowUserIds, v16);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall FirendLockSyncRequest__getURL(FirendLockSyncRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40F8E9C & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_18823/*"friend/lockSync"*/, v2);
    byte_40F8E9C = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_18823/*"friend/lockSync"*/, 0LL);
}


void __fastcall FirendLockSyncRequest__requestCompleted(
        FirendLockSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  System_String_o **v8; // x8

  if ( (byte_40F8E9F & 1) == 0 )
  {
    sub_B16FFC(&ResponseCommandKind_TypeInfo, responseList);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v5);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v6);
    byte_40F8E9F = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(86, responseList, 0LL);
  if ( v7 && ResponseData__checkError_30924960(v7, 0LL) )
    v8 = (System_String_o **)&StringLiteral_21129/*"ok"*/;
  else
    v8 = (System_String_o **)&StringLiteral_20980/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, *v8, 0LL);
}