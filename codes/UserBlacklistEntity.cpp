void __fastcall UserBlacklistEntity___ctor(UserBlacklistEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA158 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EA158 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserBlacklistEntity__CreatePK(
        int64_t userId,
        int64_t targetUserId,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EA156 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_long__long___, targetUserId, (_DWORD)method, v3);
    byte_42EA156 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           userId,
           targetUserId,
           (const MethodInfo_1AE31E0 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
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
  int v2; // w2
  __int64 v3; // x3
  int64_t userId; // x20
  int64_t v6; // x0
  __int64 v7; // x8

  if ( (byte_42EA157 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA157 = 1;
  }
  userId = this->fields.userId;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v6 = NetworkManager__get_UserId(0LL);
  v7 = 16LL;
  if ( userId == v6 )
    v7 = 24LL;
  return *(int64_t *)((char *)&this->klass + v7);
}