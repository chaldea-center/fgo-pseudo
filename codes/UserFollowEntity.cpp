void __fastcall UserFollowEntity___ctor(UserFollowEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AEEFF & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AEEFF = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserFollowEntity__CreatePK(int64_t userId, int64_t followId, const MethodInfo *method)
{
  if ( (byte_42AEEFE & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_long__long___);
    byte_42AEEFE = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           userId,
           followId,
           (const MethodInfo_1A4E118 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
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