void UserFriendRequestHistoryEntity___ctor(UserFriendRequestHistoryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59395A3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_59395A3 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t UserFriendRequestHistoryEntity__CreatePrimaryKey(
        UserFriendRequestHistoryEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


int64_t UserFriendRequestHistoryEntity__getOtherUserId(
        UserFriendRequestHistoryEntity_o *this,
        const MethodInfo *method)
{
  int64_t userId; // x21
  NetworkManager_c *v4; // x0
  __int64 v5; // x8

  if ( (byte_59395A2 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_59395A2 = 1;
  }
  userId = this->fields.userId;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    v4 = NetworkManager_TypeInfo;
  }
  v5 = 24;
  if ( userId == v4->static_fields->userIdNumber )
    v5 = 32;
  return *(int64_t *)((char *)&this->klass + v5);
}