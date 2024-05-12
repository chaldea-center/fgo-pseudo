void __fastcall EventRewardBgEntity___ctor(EventRewardBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4387EAF & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_4387EAF = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventRewardBgEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4387EAE & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4387EAE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           slot,
           priority,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventRewardBgEntity__CreatePrimaryKey(
        EventRewardBgEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventRewardBgEntity__CreatePK(this->fields.eventId, this->fields.slot, this->fields.priority, v2);
}