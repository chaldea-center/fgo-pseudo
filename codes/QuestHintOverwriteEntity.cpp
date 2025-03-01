void __fastcall QuestHintOverwriteEntity___ctor(QuestHintOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BFE8EC & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataEntityBase_string___ctor__, method);
    byte_4BFE8EC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3278D14 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestHintOverwriteEntity__CreatePK(
        int32_t questId,
        int32_t questPhase,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4BFE8EB & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&questPhase);
    byte_4BFE8EB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           questPhase,
           priority,
           (const MethodInfo_2FCFEE4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall QuestHintOverwriteEntity__CreatePrimaryKey(
        QuestHintOverwriteEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestHintOverwriteEntity__CreatePK(this->fields.questId, this->fields.questPhase, this->fields.priority, v2);
}