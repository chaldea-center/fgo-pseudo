void TblFriendEntity___ctor(TblFriendEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27F5F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27F5F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *TblFriendEntity__CreatePK(int64_t userId, int64_t friendId, const MethodInfo *method)
{
  if ( (byte_4C27F5E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_long__long___);
    byte_4C27F5E = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           userId,
           friendId,
           (const MethodInfo_30CCC64 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
}


System_String_o *TblFriendEntity__CreatePrimaryKey(TblFriendEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TblFriendEntity__CreatePK(this->fields.userId, this->fields.friendId, v2);
}


bool TblFriendEntity__HasFlag(TblFriendEntity_o *this, int32_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}