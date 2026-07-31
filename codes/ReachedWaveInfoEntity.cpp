void ReachedWaveInfoEntity___ctor(ReachedWaveInfoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938EBC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938EBC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ReachedWaveInfoEntity__CreatePK(int32_t questId, const MethodInfo *method)
{
  if ( (byte_5938EBB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_5938EBB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           questId,
           (const MethodInfo_3820DF8 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *ReachedWaveInfoEntity__CreatePrimaryKey(ReachedWaveInfoEntity_o *this, const MethodInfo *method)
{
  return ReachedWaveInfoEntity__CreatePK(this->fields.questId, method);
}