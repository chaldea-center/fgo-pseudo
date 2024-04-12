void __fastcall QuestPhaseDetailAddEntity___ctor(QuestPhaseDetailAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B4832 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B4832 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestPhaseDetailAddEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_42B4831 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42B4831 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           phase,
           priority,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall QuestPhaseDetailAddEntity__CreatePrimaryKey(
        QuestPhaseDetailAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestPhaseDetailAddEntity__CreatePK(this->fields.questId, this->fields.phase, this->fields.priority, v2);
}