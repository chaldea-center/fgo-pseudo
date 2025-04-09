void __fastcall UserFriendRequestHistoryEntity___ctor(UserFriendRequestHistoryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BBC38 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_int___ctor__, method);
    byte_49BBC38 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_319B4B8 *)Method_DataEntityBase_int___ctor__);
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
  int64_t userId; // x21
  NetworkManager_c *v4; // x0
  __int64 v5; // x8

  if ( (byte_49BBC37 & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    byte_49BBC37 = 1;
  }
  userId = this->fields.userId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    byte_49B57A5 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  v5 = 32LL;
  if ( userId != v4->static_fields->userIdNumber )
    v5 = 24LL;
  return *(int64_t *)((char *)&this->klass + v5);
}