void __fastcall EventRewardBgEntity___ctor(EventRewardBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4184845 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4184845 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventRewardBgEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4184844 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&slot);
    byte_4184844 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           slot,
           priority,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventRewardBgEntity__CreatePrimaryKey(
        EventRewardBgEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventRewardBgEntity__CreatePK(this->fields.eventId, this->fields.slot, this->fields.priority, v2);
}