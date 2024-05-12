void __fastcall ReprintStageEntity___ctor(ReprintStageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438EF5E & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438EF5E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall ReprintStageEntity___ctor_32561924(
        ReprintStageEntity_o *this,
        ReprintStageEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438EF5F & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438EF5F = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B7769C(v5, v6);
  this->fields.questId = cSrc->fields.questId;
  this->fields.questPhase = cSrc->fields.questPhase;
  this->fields.wave = cSrc->fields.wave;
  this->fields.remapQuestId = cSrc->fields.remapQuestId;
  this->fields.remapPhase = cSrc->fields.remapPhase;
  this->fields.remapWave = cSrc->fields.remapWave;
}


System_String_o *__fastcall ReprintStageEntity__CreatePK(
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  if ( (byte_438EF5D & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_438EF5D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           questPhase,
           wave,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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