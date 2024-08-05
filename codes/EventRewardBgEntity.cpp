void __fastcall EventRewardBgEntity___ctor(EventRewardBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE601 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FE601 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventRewardBgEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_49FE600 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&slot);
    byte_49FE600 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           slot,
           priority,
           (const MethodInfo_2E39D7C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventRewardBgEntity__CreatePrimaryKey(
        EventRewardBgEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventRewardBgEntity__CreatePK(this->fields.eventId, this->fields.slot, this->fields.priority, v2);
}