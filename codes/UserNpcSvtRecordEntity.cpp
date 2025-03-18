void __fastcall UserNpcSvtRecordEntity___ctor(UserNpcSvtRecordEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C22D68 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C22D68 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserNpcSvtRecordEntity__CreatePK(int64_t userId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_4C22D67 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&svtId);
    byte_4C22D67 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_2FEE494 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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