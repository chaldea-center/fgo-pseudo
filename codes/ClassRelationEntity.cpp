void ClassRelationEntity___ctor(ClassRelationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2704E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C2704E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ClassRelationEntity__CreatePK(int32_t atkClass, int32_t defClass, const MethodInfo *method)
{
  if ( (byte_4C2704D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C2704D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           atkClass,
           defClass,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ClassRelationEntity__CreatePrimaryKey(ClassRelationEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ClassRelationEntity__CreatePK(this->fields.atkClass, this->fields.defClass, v2);
}


float ClassRelationEntity__getRate(ClassRelationEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.attackRate / 1000.0;
}