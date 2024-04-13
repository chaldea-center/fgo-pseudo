void __fastcall UserFollowEntity___ctor(UserFollowEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E70F7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E70F7 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserFollowEntity__CreatePK(int64_t userId, int64_t followId, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E70F6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_long__long___, followId, (_DWORD)method, v3);
    byte_42E70F6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           userId,
           followId,
           (const MethodInfo_1AE31E0 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
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