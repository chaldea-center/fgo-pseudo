void __fastcall UserSvtCoinEntity___ctor(UserSvtCoinEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B5E63 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B5E63 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserSvtCoinEntity__CreatePK(int64_t userId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_42B5E62 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_42B5E62 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_1A4E080 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserSvtCoinEntity__CreatePrimaryKey(UserSvtCoinEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserSvtCoinEntity__CreatePK(this->fields.userId, this->fields.svtId, v2);
}