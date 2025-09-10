void GachaStoryAdjustEntity___ctor(GachaStoryAdjustEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C275B0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C275B0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GachaStoryAdjustEntity__CreatePK(int32_t gachaId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4C275AF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C275AF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           gachaId,
           idx,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *GachaStoryAdjustEntity__CreatePrimaryKey(GachaStoryAdjustEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GachaStoryAdjustEntity__CreatePK(this->fields.gachaId, this->fields.idx, v2);
}