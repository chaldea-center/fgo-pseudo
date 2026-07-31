void ServantLimitSpoilerProtectionEntity___ctor(ServantLimitSpoilerProtectionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593909C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_593909C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantLimitSpoilerProtectionEntity__CreatePK(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  if ( (byte_593909B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_593909B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           limitCount,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantLimitSpoilerProtectionEntity__CreatePrimaryKey(
        ServantLimitSpoilerProtectionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantLimitSpoilerProtectionEntity__CreatePK(this->fields.svtId, this->fields.limitCount, v2);
}