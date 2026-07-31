void QuestPhaseDetailAddEntity___ctor(QuestPhaseDetailAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938D35 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938D35 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestPhaseDetailAddEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_5938D34 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5938D34 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           phase,
           priority,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *QuestPhaseDetailAddEntity__CreatePrimaryKey(
        QuestPhaseDetailAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestPhaseDetailAddEntity__CreatePK(this->fields.questId, this->fields.phase, this->fields.priority, v2);
}