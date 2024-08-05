void __fastcall ReprintStageEntity___ctor(ReprintStageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FEAE6 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FEAE6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall ReprintStageEntity___ctor_39254772(
        ReprintStageEntity_o *this,
        ReprintStageEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_49FEAE7 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, cSrc);
    byte_49FEAE7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1B64ACC(v5, v6);
  *(_OWORD *)&this->fields.questId = *(_OWORD *)&cSrc->fields.questId;
  *(_QWORD *)&this->fields.remapPhase = *(_QWORD *)&cSrc->fields.remapPhase;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ReprintStageEntity__CreatePK(
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  if ( (byte_49FEAE5 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&questPhase);
    byte_49FEAE5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           questPhase,
           wave,
           (const MethodInfo_2E39D7C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ReprintStageEntity__CreatePrimaryKey(ReprintStageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ReprintStageEntity__CreatePK(this->fields.questId, this->fields.questPhase, this->fields.wave, v2);
}


int32_t __fastcall ReprintStageEntity__getPhase(ReprintStageEntity_o *this, const MethodInfo *method)
{
  return this->fields.questPhase;
}


int32_t __fastcall ReprintStageEntity__getQuestId(ReprintStageEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


int32_t __fastcall ReprintStageEntity__getWave(ReprintStageEntity_o *this, const MethodInfo *method)
{
  return this->fields.wave;
}