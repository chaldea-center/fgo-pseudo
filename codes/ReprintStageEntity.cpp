void ReprintStageEntity___ctor(ReprintStageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEE60 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEEE60 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ReprintStageEntity__CreatePK(
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  if ( (byte_4CEEE5F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CEEE5F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           questPhase,
           wave,
           (const MethodInfo_316EA0C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *ReprintStageEntity__CreatePrimaryKey(ReprintStageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ReprintStageEntity__CreatePK(this->fields.questId, this->fields.questPhase, this->fields.wave, v2);
}


int32_t ReprintStageEntity__getPhase(ReprintStageEntity_o *this, const MethodInfo *method)
{
  return this->fields.questPhase;
}


int32_t ReprintStageEntity__getQuestId(ReprintStageEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


int32_t ReprintStageEntity__getWave(ReprintStageEntity_o *this, const MethodInfo *method)
{
  return this->fields.wave;
}