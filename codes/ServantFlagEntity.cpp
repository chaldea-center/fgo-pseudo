void ServantFlagEntity___ctor(ServantFlagEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593902A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_593902A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantFlagEntity__CreatePK(int32_t svtId, int32_t flagId, const MethodInfo *method)
{
  if ( (byte_5939029 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5939029 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           flagId,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantFlagEntity__CreatePrimaryKey(ServantFlagEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantFlagEntity__CreatePK(this->fields.svtId, this->fields.flagId, v2);
}