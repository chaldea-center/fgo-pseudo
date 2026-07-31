void UserClassStatisticsEntity___ctor(UserClassStatisticsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939AD3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939AD3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserClassStatisticsEntity__CreatePK(
        int64_t userId,
        int32_t classId,
        int32_t type,
        const MethodInfo *method)
{
  if ( (byte_5939AD2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_5939AD2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           classId,
           type,
           (const MethodInfo_38215B8 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *UserClassStatisticsEntity__CreatePrimaryKey(
        UserClassStatisticsEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserClassStatisticsEntity__CreatePK(this->fields.userId, this->fields.classId, this->fields.type, v2);
}