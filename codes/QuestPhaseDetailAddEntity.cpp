void __fastcall QuestPhaseDetailAddEntity___ctor(QuestPhaseDetailAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB367 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BB367 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseDetailAddEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_49BB366 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&phase);
    byte_49BB366 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           phase,
           priority,
           (const MethodInfo_2F0013C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall QuestPhaseDetailAddEntity__CreatePrimaryKey(
        QuestPhaseDetailAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestPhaseDetailAddEntity__CreatePK(this->fields.questId, this->fields.phase, this->fields.priority, v2);
}