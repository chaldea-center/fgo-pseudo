void __fastcall ReachedWaveInfoEntity___ctor(ReachedWaveInfoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB4D0 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BB4D0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ReachedWaveInfoEntity__CreatePK(int32_t questId, const MethodInfo *method)
{
  if ( (byte_49BB4CF & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int___, method);
    byte_49BB4CF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           questId,
           (const MethodInfo_2EFFB40 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *__fastcall ReachedWaveInfoEntity__CreatePrimaryKey(
        ReachedWaveInfoEntity_o *this,
        const MethodInfo *method)
{
  return ReachedWaveInfoEntity__CreatePK(this->fields.questId, method);
}