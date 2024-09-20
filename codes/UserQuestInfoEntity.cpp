void __fastcall UserQuestInfoEntity___ctor(UserQuestInfoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BEDF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BEDF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserQuestInfoEntity__CreatePK(int64_t userId, int32_t questId, const MethodInfo *method)
{
  if ( (byte_4A5BEDE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4A5BEDE = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           questId,
           (const MethodInfo_2E7DC34 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserQuestInfoEntity__CreatePrimaryKey(
        UserQuestInfoEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserQuestInfoEntity__CreatePK(this->fields.userId, this->fields.questId, v2);
}