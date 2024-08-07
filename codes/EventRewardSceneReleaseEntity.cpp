void __fastcall EventRewardSceneReleaseEntity___ctor(EventRewardSceneReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FEC4C & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FEC4C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventRewardSceneReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t condType,
        const MethodInfo *method)
{
  if ( (byte_49FEC4B & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&slot);
    byte_49FEC4B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           slot,
           condType,
           (const MethodInfo_2E3A394 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventRewardSceneReleaseEntity__CreatePrimaryKey(
        EventRewardSceneReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventRewardSceneReleaseEntity__CreatePK(this->fields.eventId, this->fields.slot, this->fields.condType, v2);
}