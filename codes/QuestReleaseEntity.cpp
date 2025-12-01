void QuestReleaseEntity___ctor(QuestReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7B3C & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC7B3C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestReleaseEntity__CreatePK(
        int32_t questId,
        int32_t type,
        int32_t targetId,
        int64_t value,
        const MethodInfo *method)
{
  if ( (byte_4CC7B3B & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int__long___);
    byte_4CC7B3B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__long_(
           questId,
           type,
           targetId,
           value,
           (const MethodInfo_3149C80 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__long___);
}


System_String_o *QuestReleaseEntity__CreatePrimaryKey(QuestReleaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return QuestReleaseEntity__CreatePK(
           this->fields.questId,
           this->fields.type,
           this->fields.targetId,
           this->fields.value,
           v2);
}


int32_t QuestReleaseEntity__getClosedMessageId(QuestReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.closedMessageId;
}


int32_t QuestReleaseEntity__getImagePriority(QuestReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.imagePriority;
}


int32_t QuestReleaseEntity__getQuestId(QuestReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


int32_t QuestReleaseEntity__getTargetId(QuestReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.targetId;
}


int32_t QuestReleaseEntity__getType(QuestReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


int64_t QuestReleaseEntity__getValue(QuestReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.value;
}


int32_t QuestReleaseEntity__getValueInt(QuestReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.value;
}