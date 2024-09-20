void __fastcall UserBlacklistEntity___ctor(UserBlacklistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BD10 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BD10 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserBlacklistEntity__CreatePK(
        int64_t userId,
        int64_t targetUserId,
        const MethodInfo *method)
{
  if ( (byte_4A5BD0E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_long__long___);
    byte_4A5BD0E = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           userId,
           targetUserId,
           (const MethodInfo_2E7DCB8 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
}


System_String_o *__fastcall UserBlacklistEntity__CreatePrimaryKey(
        UserBlacklistEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserBlacklistEntity__CreatePK(this->fields.userId, this->fields.targetUserId, v2);
}


int64_t __fastcall UserBlacklistEntity__getOtherUserId(UserBlacklistEntity_o *this, const MethodInfo *method)
{
  int64_t userId; // x20
  int64_t v4; // x0
  __int64 v5; // x8

  if ( (byte_4A5BD0F & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5BD0F = 1;
  }
  userId = this->fields.userId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v4 = NetworkManager__get_UserId(0LL);
  v5 = 16LL;
  if ( userId == v4 )
    v5 = 24LL;
  return *(int64_t *)((char *)&this->klass + v5);
}