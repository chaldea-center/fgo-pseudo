void __fastcall ClassRelationEntity___ctor(ClassRelationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41887E5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41887E5 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassRelationEntity__CreatePK(int32_t atkClass, int32_t defClass, const MethodInfo *method)
{
  if ( (byte_41887E4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&defClass);
    byte_41887E4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           atkClass,
           defClass,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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