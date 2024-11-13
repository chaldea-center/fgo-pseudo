void __fastcall UserBlacklistEntity___ctor(UserBlacklistEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16DC5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16DC5 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserBlacklistEntity__CreatePK(
        int64_t userId,
        int64_t targetUserId,
        const MethodInfo *method)
{
  if ( (byte_4B16DC3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_long__long___, targetUserId, method);
    byte_4B16DC3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           userId,
           targetUserId,
           (const MethodInfo_2F11040 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
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
  __int64 v2; // x2
  int64_t userId; // x20
  int64_t v5; // x0
  __int64 v6; // x8

  if ( (byte_4B16DC4 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B16DC4 = 1;
  }
  userId = this->fields.userId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  v5 = NetworkManager__get_UserId(0LL);
  v6 = 16LL;
  if ( userId == v5 )
    v6 = 24LL;
  return *(int64_t *)((char *)&this->klass + v6);
}