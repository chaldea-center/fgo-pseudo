void QuestAddEntity___ctor(QuestAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27884 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27884 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestAddEntity__CreatePK(int32_t questId, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4C27883 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C27883 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           priority,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *QuestAddEntity__CreatePrimaryKey(QuestAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestAddEntity__CreatePK(this->fields.questId, this->fields.priority, v2);
}