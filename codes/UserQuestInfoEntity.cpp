void __fastcall UserQuestInfoEntity___ctor(UserQuestInfoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4185DF8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4185DF8 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserQuestInfoEntity__CreatePK(int64_t userId, int32_t questId, const MethodInfo *method)
{
  if ( (byte_4185DF7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&questId);
    byte_4185DF7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           questId,
           (const MethodInfo_1732A38 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserQuestInfoEntity__CreatePrimaryKey(
        UserQuestInfoEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserQuestInfoEntity__CreatePK(this->fields.userId, this->fields.questId, v2);
}