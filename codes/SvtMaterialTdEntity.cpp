void SvtMaterialTdEntity___ctor(SvtMaterialTdEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27F56 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27F56 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *SvtMaterialTdEntity__CreatePK(int32_t baseSvtId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4C27F55 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C27F55 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           baseSvtId,
           idx,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *SvtMaterialTdEntity__CreatePrimaryKey(SvtMaterialTdEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SvtMaterialTdEntity__CreatePK(this->fields.baseSvtId, this->fields.idx, v2);
}