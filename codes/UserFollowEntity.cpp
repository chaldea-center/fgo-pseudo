void __fastcall UserFollowEntity___ctor(UserFollowEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16F01 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16F01 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserFollowEntity__CreatePK(int64_t userId, int64_t followId, const MethodInfo *method)
{
  if ( (byte_4B16F00 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_long__long___, followId, method);
    byte_4B16F00 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           userId,
           followId,
           (const MethodInfo_2F11040 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
}


System_String_o *__fastcall UserFollowEntity__CreatePrimaryKey(UserFollowEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserFollowEntity__CreatePK(this->fields.userId, this->fields.followId, v2);
}


bool __fastcall UserFollowEntity__HasFlag(UserFollowEntity_o *this, int32_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


bool __fastcall UserFollowEntity__IsLock(UserFollowEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}