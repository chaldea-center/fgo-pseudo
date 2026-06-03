void TblFriendEntity___ctor(TblFriendEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E78379 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_string___ctor__);
    byte_4E78379 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_35334BC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *TblFriendEntity__CreatePK(int64_t userId, int64_t friendId, const MethodInfo *method)
{
  if ( (byte_4E78378 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_CreateMultiplePK_long__long___);
    byte_4E78378 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           userId,
           friendId,
           (const MethodInfo_324D4CC *)Method_DataEntityBase_CreateMultiplePK_long__long___);
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