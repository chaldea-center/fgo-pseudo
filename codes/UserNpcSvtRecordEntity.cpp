void UserNpcSvtRecordEntity___ctor(UserNpcSvtRecordEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C281B7 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C281B7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserNpcSvtRecordEntity__CreatePK(int64_t userId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_4C281B6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4C281B6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_30CCBE0 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserNpcSvtRecordEntity__CreatePrimaryKey(UserNpcSvtRecordEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserNpcSvtRecordEntity__CreatePK(this->fields.userId, this->fields.svtId, v2);
}


System_Int32_array *UserNpcSvtRecordEntity__GetTdPlayed(UserNpcSvtRecordEntity_o *this, const MethodInfo *method)
{
  return this->fields.tdPlayed;
}