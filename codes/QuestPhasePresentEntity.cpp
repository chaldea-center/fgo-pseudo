void __fastcall QuestPhasePresentEntity___ctor(QuestPhasePresentEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B69E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B69E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestPhasePresentEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_4A5B69D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B69D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestPhasePresentEntity__CreatePrimaryKey(
        QuestPhasePresentEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestPhasePresentEntity__CreatePK(this->fields.questId, this->fields.phase, v2);
}


int32_t __fastcall QuestPhasePresentEntity__GetGiftIconId(QuestPhasePresentEntity_o *this, const MethodInfo *method)
{
  return this->fields.giftIconId;
}