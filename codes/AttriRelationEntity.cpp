void __fastcall AttriRelationEntity___ctor(AttriRelationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B1D46 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B1D46 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall AttriRelationEntity__CreatePK(int32_t atkAttri, int32_t defAttri, const MethodInfo *method)
{
  if ( (byte_42B1D45 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B1D45 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           atkAttri,
           defAttri,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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