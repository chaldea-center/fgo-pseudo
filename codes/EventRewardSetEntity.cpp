void __fastcall EventRewardSetEntity___ctor(EventRewardSetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B344B & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B344B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventRewardSetEntity__CreatePK(
        int32_t rewardSetType,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_42B344A & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42B344A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           rewardSetType,
           eventId,
           id,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventRewardSetEntity__CreatePrimaryKey(
        EventRewardSetEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventRewardSetEntity__CreatePK(this->fields.rewardSetType, this->fields.eventId, this->fields.id, v2);
}