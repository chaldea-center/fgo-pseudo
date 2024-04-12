void __fastcall TblFriendEntity___ctor(TblFriendEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AD004 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AD004 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall TblFriendEntity__CreatePK(int64_t userId, int64_t friendId, const MethodInfo *method)
{
  if ( (byte_42AD003 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_long__long___);
    byte_42AD003 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           userId,
           friendId,
           (const MethodInfo_1A4E118 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
}


System_String_o *__fastcall TblFriendEntity__CreatePrimaryKey(TblFriendEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TblFriendEntity__CreatePK(this->fields.userId, this->fields.friendId, v2);
}


bool __fastcall TblFriendEntity__HasFlag(TblFriendEntity_o *this, int32_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}