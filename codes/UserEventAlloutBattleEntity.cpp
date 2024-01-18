void __fastcall UserEventAlloutBattleEntity___ctor(UserEventAlloutBattleEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188B16 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4188B16 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventAlloutBattleEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t alloutBattleId,
        const MethodInfo *method)
{
  if ( (byte_4188B15 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&eventId);
    byte_4188B15 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           alloutBattleId,
           (const MethodInfo_1732E80 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserEventAlloutBattleEntity__CreatePrimaryKey(
        UserEventAlloutBattleEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventAlloutBattleEntity__CreatePK(
           this->fields.userId,
           this->fields.eventId,
           this->fields.alloutBattleId,
           v2);
}