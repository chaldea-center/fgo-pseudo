void __fastcall ClassRelationEntity___ctor(ClassRelationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B079F & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B079F = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ClassRelationEntity__CreatePK(int32_t atkClass, int32_t defClass, const MethodInfo *method)
{
  if ( (byte_42B079E & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B079E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           atkClass,
           defClass,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ClassRelationEntity__CreatePrimaryKey(
        ClassRelationEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ClassRelationEntity__CreatePK(this->fields.atkClass, this->fields.defClass, v2);
}


float __fastcall ClassRelationEntity__getRate(ClassRelationEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.attackRate / 1000.0;
}