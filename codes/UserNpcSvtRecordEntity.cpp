void UserNpcSvtRecordEntity___ctor(UserNpcSvtRecordEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939602 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939602 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserNpcSvtRecordEntity__CreatePK(int64_t userId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_5939601 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_5939601 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_3821070 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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