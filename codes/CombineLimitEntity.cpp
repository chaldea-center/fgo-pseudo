void CombineLimitEntity___ctor(CombineLimitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938417 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938417 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *CombineLimitEntity__CreatePK(int32_t id, int32_t svtLimit, const MethodInfo *method)
{
  if ( (byte_5938416 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938416 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           svtLimit,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *CombineLimitEntity__CreatePrimaryKey(CombineLimitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineLimitEntity__CreatePK(this->fields.id, this->fields.svtLimit, v2);
}