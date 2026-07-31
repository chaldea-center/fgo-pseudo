void AttriRelationEntity___ctor(AttriRelationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938266 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938266 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *AttriRelationEntity__CreatePK(int32_t atkAttri, int32_t defAttri, const MethodInfo *method)
{
  if ( (byte_5938265 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938265 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           atkAttri,
           defAttri,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *AttriRelationEntity__CreatePrimaryKey(AttriRelationEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AttriRelationEntity__CreatePK(this->fields.atkAttri, this->fields.defAttri, v2);
}


float AttriRelationEntity__getRate(AttriRelationEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.attackRate / 1000.0;
}