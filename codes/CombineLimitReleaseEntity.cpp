void CombineLimitReleaseEntity___ctor(CombineLimitReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939A75 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939A75 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *CombineLimitReleaseEntity__CreatePK(int32_t svtId, int32_t svtLimit, const MethodInfo *method)
{
  if ( (byte_5939A74 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5939A74 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           svtLimit,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *CombineLimitReleaseEntity__CreatePrimaryKey(
        CombineLimitReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineLimitReleaseEntity__CreatePK(this->fields.combineLimitId, this->fields.svtLimit, v2);
}