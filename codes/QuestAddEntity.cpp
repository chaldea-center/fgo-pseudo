void __fastcall QuestAddEntity___ctor(QuestAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B57E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B57E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestAddEntity__CreatePK(int32_t questId, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4A5B57D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B57D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           priority,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestAddEntity__CreatePrimaryKey(QuestAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestAddEntity__CreatePK(this->fields.questId, this->fields.priority, v2);
}