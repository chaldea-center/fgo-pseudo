void __fastcall UserEventRaceEntity___ctor(UserEventRaceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4389CA6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_4389CA6 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventRaceEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  if ( (byte_4389CA5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4389CA5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           termId,
           (const MethodInfo_1D17884 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserEventRaceEntity__CreatePrimaryKey(
        UserEventRaceEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventRaceEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.termId, v2);
}