void UserClassStatisticsEntity___ctor(UserClassStatisticsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2DBA2 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2DBA2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserClassStatisticsEntity__CreatePK(
        int64_t userId,
        int32_t classId,
        int32_t type,
        const MethodInfo *method)
{
  if ( (byte_4D2DBA1 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4D2DBA1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           classId,
           type,
           (const MethodInfo_319A908 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *UserClassStatisticsEntity__CreatePrimaryKey(
        UserClassStatisticsEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserClassStatisticsEntity__CreatePK(this->fields.userId, this->fields.classId, this->fields.type, v2);
}