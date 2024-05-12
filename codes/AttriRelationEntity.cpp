void __fastcall AttriRelationEntity___ctor(AttriRelationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4388BD0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_4388BD0 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall AttriRelationEntity__CreatePK(int32_t atkAttri, int32_t defAttri, const MethodInfo *method)
{
  if ( (byte_4388BCF & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4388BCF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           atkAttri,
           defAttri,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall AttriRelationEntity__CreatePrimaryKey(
        AttriRelationEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AttriRelationEntity__CreatePK(this->fields.atkAttri, this->fields.defAttri, v2);
}


float __fastcall AttriRelationEntity__getRate(AttriRelationEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.attackRate / 1000.0;
}