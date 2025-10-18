void UserFollowEntity___ctor(UserFollowEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C43E42 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_string___ctor__);
    byte_4C43E42 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_339EC34 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserFollowEntity__CreatePK(int64_t userId, int64_t followId, const MethodInfo *method)
{
  if ( (byte_4C43E41 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_CreateMultiplePK_long__long___);
    byte_4C43E41 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           userId,
           followId,
           (const MethodInfo_30E5F6C *)Method_DataEntityBase_CreateMultiplePK_long__long___);
}


System_String_o *UserFollowEntity__CreatePrimaryKey(UserFollowEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserFollowEntity__CreatePK(this->fields.userId, this->fields.followId, v2);
}


bool UserFollowEntity__HasFlag(UserFollowEntity_o *this, int32_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


bool UserFollowEntity__IsLock(UserFollowEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}