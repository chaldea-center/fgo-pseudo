void QuestDateRangeEntity___ctor(QuestDateRangeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC79E7 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC79E7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestDateRangeEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4CC79E6 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CC79E6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_3149294 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *QuestDateRangeEntity__CreatePrimaryKey(QuestDateRangeEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestDateRangeEntity__CreatePK(this->fields.id, this->fields.idx, v2);
}


int64_t QuestDateRangeEntity__getClosedAt(QuestDateRangeEntity_o *this, const MethodInfo *method)
{
  return this->fields.closedAt;
}


int32_t QuestDateRangeEntity__getIndex(QuestDateRangeEntity_o *this, const MethodInfo *method)
{
  return this->fields.idx;
}


int64_t QuestDateRangeEntity__getOpenedAt(QuestDateRangeEntity_o *this, const MethodInfo *method)
{
  return this->fields.openedAt;
}


int32_t QuestDateRangeEntity__getQuestDateRangeId(QuestDateRangeEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}