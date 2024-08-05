void __fastcall QuestSpotReleaseEntity___ctor(QuestSpotReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FEACB & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FEACB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestSpotReleaseEntity__CreatePK(
        int32_t questId,
        int32_t spotId,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_49FEACA & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&spotId);
    byte_49FEACA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           spotId,
           priority,
           (const MethodInfo_2E39D7C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall QuestSpotReleaseEntity__CreatePrimaryKey(
        QuestSpotReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestSpotReleaseEntity__CreatePK(this->fields.questId, this->fields.spotId, this->fields.priority, v2);
}


int32_t __fastcall QuestSpotReleaseEntity__get_CondType(QuestSpotReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}