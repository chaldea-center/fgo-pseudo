void QuestHintOverwriteEntity___ctor(QuestHintOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C38C96 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C38C96 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestHintOverwriteEntity__CreatePK(
        int32_t questId,
        int32_t questPhase,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4C38C95 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C38C95 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           questPhase,
           priority,
           (const MethodInfo_30DBA08 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *QuestHintOverwriteEntity__CreatePrimaryKey(QuestHintOverwriteEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestHintOverwriteEntity__CreatePK(this->fields.questId, this->fields.questPhase, this->fields.priority, v2);
}