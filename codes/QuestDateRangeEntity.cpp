void __fastcall QuestDateRangeEntity___ctor(QuestDateRangeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438BC23 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438BC23 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestDateRangeEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_438BC22 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438BC22 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestDateRangeEntity__CreatePrimaryKey(
        QuestDateRangeEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestDateRangeEntity__CreatePK(this->fields.id, this->fields.idx, v2);
}


int64_t __fastcall QuestDateRangeEntity__getClosedAt(QuestDateRangeEntity_o *this, const MethodInfo *method)
{
  return this->fields.closedAt;
}


int32_t __fastcall QuestDateRangeEntity__getIndex(QuestDateRangeEntity_o *this, const MethodInfo *method)
{
  return this->fields.idx;
}


int64_t __fastcall QuestDateRangeEntity__getOpenedAt(QuestDateRangeEntity_o *this, const MethodInfo *method)
{
  return this->fields.openedAt;
}


int32_t __fastcall QuestDateRangeEntity__getQuestDateRangeId(QuestDateRangeEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}