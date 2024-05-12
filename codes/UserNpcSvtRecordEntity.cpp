void __fastcall UserNpcSvtRecordEntity___ctor(UserNpcSvtRecordEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4389DBC & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_4389DBC = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserNpcSvtRecordEntity__CreatePK(int64_t userId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_4389DBB & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4389DBB = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_1D172EC *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserNpcSvtRecordEntity__CreatePrimaryKey(
        UserNpcSvtRecordEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserNpcSvtRecordEntity__CreatePK(this->fields.userId, this->fields.svtId, v2);
}


System_Int32_array *__fastcall UserNpcSvtRecordEntity__GetTdPlayed(
        UserNpcSvtRecordEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.tdPlayed;
}