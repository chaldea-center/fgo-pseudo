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
  if ( (byte_4B1DFD0 & 1) == 0 )
  {
    sub_1BCAFF8(&long___TypeInfo, fieldName);
    byte_4B1DFD0 = 1;
  }
  if ( !data )
    data = (System_Int64_array *)sub_1BCB0A0(long___TypeInfo, 0LL);
  RequestBase__addField_43356652((RequestBase_o *)this, fieldName, &data->obj, 0LL);
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

  if ( (byte_4B1DFCF & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_21137/*"lockFriendUserIds"*/, lockFriendUserIds);
    sub_1BCAFF8(&StringLiteral_24203/*"unlockFriendUserIds"*/, v11);
    sub_1BCAFF8(&StringLiteral_24202/*"unlockFollowUserIds"*/, v12);
    sub_1BCAFF8(&StringLiteral_21136/*"lockFollowUserIds"*/, v13);
    byte_4B1DFCF = 1;
  }
  FirendLockSyncRequest__AddField(
    this,
    (System_String_o *)StringLiteral_21137/*"lockFriendUserIds"*/,
    lockFriendUserIds,
    (const MethodInfo *)lockFollowUserIds);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_24203/*"unlockFriendUserIds"*/, unlockFriendUserIds, v14);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_21136/*"lockFollowUserIds"*/, lockFollowUserIds, v15);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_24202/*"unlockFollowUserIds"*/, unlockFollowUserIds, v16);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall FirendLockSyncRequest__getURL(FirendLockSyncRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B1DFCE & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_19498/*"friend/lockSync"*/, v2);
    byte_4B1DFCE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62450424(BaseUrl, (System_String_o *)StringLiteral_19498/*"friend/lockSync"*/, 0LL);
}


void __fastcall FirendLockSyncRequest__requestCompleted(
        FirendLockSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4B1DFD1 & 1) == 0 )
  {
    sub_1BCAFF8(&ResponseCommandKind_TypeInfo, responseList);
    sub_1BCAFF8(&StringLiteral_22181/*"ok"*/, v5);
    sub_1BCAFF8(&StringLiteral_22015/*"ng"*/, v6);
    byte_4B1DFD1 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(87, responseList, 0LL);
  if ( v7 && ResponseData__checkError_43347888(v7, 0LL) )
    v8 = &StringLiteral_22181/*"ok"*/;
  else
    v8 = &StringLiteral_22015/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}