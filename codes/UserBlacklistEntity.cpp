void UserBlacklistEntity___ctor(UserBlacklistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971611 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5971611 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserBlacklistEntity__CreatePK(int64_t userId, int64_t targetUserId, const MethodInfo *method)
{
  if ( (byte_597160F & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_long__long___);
    byte_597160F = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           userId,
           targetUserId,
           (const MethodInfo_38545BC *)Method_DataEntityBase_CreateMultiplePK_long__long___);
}


System_String_o *UserBlacklistEntity__CreatePrimaryKey(UserBlacklistEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserBlacklistEntity__CreatePK(this->fields.userId, this->fields.targetUserId, v2);
}


int64_t UserBlacklistEntity__getOtherUserId(UserBlacklistEntity_o *this, const MethodInfo *method)
{
  int64_t userId; // x21
  NetworkManager_c *v4; // x0
  __int64 v5; // x8

  if ( (byte_5971610 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5971610 = 1;
  }
  userId = this->fields.userId;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    v4 = NetworkManager_TypeInfo;
  }
  v5 = 16;
  if ( userId == v4->static_fields->userIdNumber )
    v5 = 24;
  return *(int64_t *)((char *)&this->klass + v5);
}