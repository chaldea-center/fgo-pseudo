void __fastcall ReprintStageEntity___ctor(ReprintStageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC561 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EC561 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall ReprintStageEntity___ctor_32358792(
        ReprintStageEntity_o *this,
        ReprintStageEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42EC562 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)cSrc, (_DWORD)method, v3);
    byte_42EC562 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B5D69C(v6, v7);
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
  if ( (byte_42EC560 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, questPhase, wave, method);
    byte_42EC560 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           questPhase,
           wave,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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