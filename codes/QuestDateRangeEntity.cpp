void QuestDateRangeEntity___ctor(QuestDateRangeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEC6E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEEC6E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestDateRangeEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4CEEC6D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEEC6D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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


int64_t QuestDateRangeEntity__getOpenedAt(QuestDateRangeEntity_o *this, const MethodInfo *method)
{
  return this->fields.openedAt;
}


int32_t QuestDateRangeEntity__getQuestDateRangeId(QuestDateRangeEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}