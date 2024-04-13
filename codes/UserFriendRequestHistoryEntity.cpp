void __fastcall UserFriendRequestHistoryEntity___ctor(UserFriendRequestHistoryEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E710B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42E710B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall UserFriendRequestHistoryEntity__CreatePrimaryKey(
        UserFriendRequestHistoryEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


int64_t __fastcall UserFriendRequestHistoryEntity__getOtherUserId(
        UserFriendRequestHistoryEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int64_t userId; // x20
  int64_t v6; // x0
  __int64 v7; // x8

  if ( (byte_42E710A & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E710A = 1;
  }
  userId = this->fields.userId;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v6 = NetworkManager__get_UserId(0LL);
  v7 = 24LL;
  if ( userId == v6 )
    v7 = 32LL;
  return *(int64_t *)((char *)&this->klass + v7);
}