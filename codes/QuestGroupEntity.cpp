void __fastcall QuestGroupEntity___ctor(QuestGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B01CE & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B01CE = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestGroupEntity__CreatePK(
        int32_t questId,
        int32_t type,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_42B01CD & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42B01CD = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           type,
           groupId,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall QuestGroupEntity__CreatePrimaryKey(QuestGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestGroupEntity__CreatePK(this->fields.questId, this->fields.type, this->fields.groupId, v2);
}