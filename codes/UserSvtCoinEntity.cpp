void __fastcall UserSvtCoinEntity___ctor(UserSvtCoinEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418D291 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418D291 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserSvtCoinEntity__CreatePK(int64_t userId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_418D290 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&svtId);
    byte_418D290 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_1732A38 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserSvtCoinEntity__CreatePrimaryKey(UserSvtCoinEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserSvtCoinEntity__CreatePK(this->fields.userId, this->fields.svtId, v2);
}