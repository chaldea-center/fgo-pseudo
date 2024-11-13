void __fastcall FirendLockSyncRequest__AddField(
        FirendLockSyncRequest_o *this,
        System_String_o *fieldName,
        System_Int64_array *data,
        const MethodInfo *method)
{
  System_Int64_array *v4; // x21

  v4 = data;
  if ( (byte_4B17AC8 & 1) == 0 )
  {
    sub_1BCA7E0(&long___TypeInfo, fieldName, data);
    byte_4B17AC8 = 1;
  }
  if ( !v4 )
    v4 = (System_Int64_array *)sub_1BCA888(long___TypeInfo, 0LL);
  RequestBase__addField_41870840((RequestBase_o *)this, fieldName, &v4->obj, method);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1

  if ( (byte_4B17AC7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21416/*"lockFriendUserIds"*/, lockFriendUserIds, unlockFriendUserIds);
    sub_1BCA7E0(&StringLiteral_24542/*"unlockFriendUserIds"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_24541/*"unlockFollowUserIds"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_21415/*"lockFollowUserIds"*/, v15, v16);
    byte_4B17AC7 = 1;
  }
  FirendLockSyncRequest__AddField(
    this,
    (System_String_o *)StringLiteral_21416/*"lockFriendUserIds"*/,
    lockFriendUserIds,
    (const MethodInfo *)lockFollowUserIds);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_24542/*"unlockFriendUserIds"*/, unlockFriendUserIds, v17);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_21415/*"lockFollowUserIds"*/, lockFollowUserIds, v18);
  FirendLockSyncRequest__AddField(this, (System_String_o *)StringLiteral_24541/*"unlockFollowUserIds"*/, unlockFollowUserIds, v19);
  RequestBase__beginRequest((RequestBase_o *)this, v20);
}


System_String_o *__fastcall FirendLockSyncRequest__getURL(FirendLockSyncRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17AC6 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19838/*"friend/lockSync"*/, v3, v4);
    byte_4B17AC6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_19838/*"friend/lockSync"*/, 0LL);
}


void __fastcall FirendLockSyncRequest__requestCompleted(
        FirendLockSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ResponseData_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v11; // x9

  if ( (byte_4B17AC9 & 1) == 0 )
  {
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, responseList, method);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B17AC9 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(87, responseList, 0LL);
  if ( v9 && ResponseData__checkError_41952396(v9, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v11 = &StringLiteral_22465/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v11 = &StringLiteral_22292/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v11,
    *(_QWORD *)&CallBack->fields.extra_arg);
}