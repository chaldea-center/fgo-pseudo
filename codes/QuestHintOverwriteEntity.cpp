void __fastcall QuestHintOverwriteEntity___ctor(QuestHintOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BC045 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BC045 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestHintOverwriteEntity__CreatePK(
        int32_t questId,
        int32_t questPhase,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_49BC044 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&questPhase);
    byte_49BC044 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           questPhase,
           priority,
           (const MethodInfo_2F0013C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall QuestHintOverwriteEntity__CreatePrimaryKey(
        QuestHintOverwriteEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestHintOverwriteEntity__CreatePK(this->fields.questId, this->fields.questPhase, this->fields.priority, v2);
}