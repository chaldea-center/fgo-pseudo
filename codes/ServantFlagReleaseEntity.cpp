void ServantFlagReleaseEntity___ctor(ServantFlagReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939030 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939030 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantFlagReleaseEntity__CreatePK(
        int32_t svtId,
        int32_t flagId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_593902F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_593902F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           flagId,
           idx,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *ServantFlagReleaseEntity__CreatePrimaryKey(ServantFlagReleaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantFlagReleaseEntity__CreatePK(this->fields.svtId, this->fields.flagId, this->fields.idx, v2);
}