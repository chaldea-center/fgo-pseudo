void __fastcall QuestGroupEntity___ctor(QuestGroupEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8ABF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E8ABF = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestGroupEntity__CreatePK(
        int32_t questId,
        int32_t type,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_42E8ABE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, type, groupId, method);
    byte_42E8ABE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           type,
           groupId,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall QuestGroupEntity__CreatePrimaryKey(QuestGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestGroupEntity__CreatePK(this->fields.questId, this->fields.type, this->fields.groupId, v2);
}