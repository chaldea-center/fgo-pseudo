void __fastcall QuestDateRangeEntity___ctor(QuestDateRangeEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8A92 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E8A92 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestDateRangeEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E8A91 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, idx, (_DWORD)method, v3);
    byte_42E8A91 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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