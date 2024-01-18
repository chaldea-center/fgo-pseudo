void __fastcall ReprintStageEntity___ctor(ReprintStageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418AD80 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418AD80 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall ReprintStageEntity___ctor_31048460(
        ReprintStageEntity_o *this,
        ReprintStageEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_418AD81 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, cSrc);
    byte_418AD81 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B2C434(v5, v6);
  this->fields.questId = cSrc->fields.questId;
  this->fields.questPhase = cSrc->fields.questPhase;
  this->fields.wave = cSrc->fields.wave;
  this->fields.remapQuestId = cSrc->fields.remapQuestId;
  this->fields.remapPhase = cSrc->fields.remapPhase;
  this->fields.remapWave = cSrc->fields.remapWave;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ReprintStageEntity__CreatePK(
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  if ( (byte_418AD7F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&questPhase);
    byte_418AD7F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           questPhase,
           wave,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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