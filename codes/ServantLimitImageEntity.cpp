void ServantLimitImageEntity___ctor(ServantLimitImageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593908A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_593908A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantLimitImageEntity__CreatePK(
        int32_t svtId,
        int32_t limitCount,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_5939089 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5939089 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           limitCount,
           priority,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *ServantLimitImageEntity__CreatePrimaryKey(ServantLimitImageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantLimitImageEntity__CreatePK(this->fields.svtId, this->fields.limitCount, this->fields.priority, v2);
}