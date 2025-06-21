void __fastcall UserClassStatisticsEntity___ctor(UserClassStatisticsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D7AB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, method);
    byte_4B1D7AB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserClassStatisticsEntity__CreatePK(
        int64_t userId,
        int32_t classId,
        int32_t type,
        const MethodInfo *method)
{
  if ( (byte_4B1D7AA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&classId);
    byte_4B1D7AA = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           classId,
           type,
           (const MethodInfo_3019278 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserClassStatisticsEntity__CreatePrimaryKey(
        UserClassStatisticsEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserClassStatisticsEntity__CreatePK(this->fields.userId, this->fields.classId, this->fields.type, v2);
}