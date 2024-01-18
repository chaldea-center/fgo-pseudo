void __fastcall UserQuestRouteEntity___ctor(UserQuestRouteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4185E14 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4185E14 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserQuestRouteEntity__CreatePK(
        int64_t userId,
        int32_t questId,
        int32_t routeId,
        const MethodInfo *method)
{
  if ( (byte_4185E13 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&questId);
    byte_4185E13 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           questId,
           routeId,
           (const MethodInfo_1732E80 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserQuestRouteEntity__CreatePrimaryKey(
        UserQuestRouteEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserQuestRouteEntity__CreatePK(this->fields.userId, this->fields.questId, this->fields.routeId, v2);
}