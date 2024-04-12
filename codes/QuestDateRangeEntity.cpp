void __fastcall QuestDateRangeEntity___ctor(QuestDateRangeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B01A1 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B01A1 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestDateRangeEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_42B01A0 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B01A0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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