void UserSvtCoinEntity___ctor(UserSvtCoinEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59397B9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59397B9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserSvtCoinEntity__CreatePK(int64_t userId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_59397B8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_59397B8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_3821070 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserSvtCoinEntity__CreatePrimaryKey(UserSvtCoinEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserSvtCoinEntity__CreatePK(this->fields.userId, this->fields.svtId, v2);
}