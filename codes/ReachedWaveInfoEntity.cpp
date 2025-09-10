void ReachedWaveInfoEntity___ctor(ReachedWaveInfoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27A7F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27A7F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ReachedWaveInfoEntity__CreatePK(int32_t questId, const MethodInfo *method)
{
  if ( (byte_4C27A7E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_4C27A7E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           questId,
           (const MethodInfo_30CC96C *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *ReachedWaveInfoEntity__CreatePrimaryKey(ReachedWaveInfoEntity_o *this, const MethodInfo *method)
{
  return ReachedWaveInfoEntity__CreatePK(this->fields.questId, method);
}