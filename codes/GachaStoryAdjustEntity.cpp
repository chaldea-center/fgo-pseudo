void GachaStoryAdjustEntity___ctor(GachaStoryAdjustEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CC42 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2CC42 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GachaStoryAdjustEntity__CreatePK(int32_t gachaId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4D2CC41 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D2CC41 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           gachaId,
           idx,
           (const MethodInfo_319A2BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *GachaStoryAdjustEntity__CreatePrimaryKey(GachaStoryAdjustEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GachaStoryAdjustEntity__CreatePK(this->fields.gachaId, this->fields.idx, v2);
}