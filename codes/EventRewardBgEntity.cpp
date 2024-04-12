void __fastcall EventRewardBgEntity___ctor(EventRewardBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42ACB04 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42ACB04 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventRewardBgEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_42ACB03 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42ACB03 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           slot,
           priority,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventRewardBgEntity__CreatePrimaryKey(
        EventRewardBgEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventRewardBgEntity__CreatePK(this->fields.eventId, this->fields.slot, this->fields.priority, v2);
}