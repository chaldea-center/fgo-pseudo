void __fastcall UserQuestInfoEntity___ctor(UserQuestInfoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AE144 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AE144 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserQuestInfoEntity__CreatePK(int64_t userId, int32_t questId, const MethodInfo *method)
{
  if ( (byte_42AE143 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_42AE143 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           questId,
           (const MethodInfo_1A4E080 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserQuestInfoEntity__CreatePrimaryKey(
        UserQuestInfoEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserQuestInfoEntity__CreatePK(this->fields.userId, this->fields.questId, v2);
}