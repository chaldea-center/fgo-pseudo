void __fastcall EventRewardSetEntity___ctor(EventRewardSetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5E78 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB5E78 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventRewardSetEntity__CreatePK(
        int32_t rewardSetType,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4AB5E77 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&eventId);
    byte_4AB5E77 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           rewardSetType,
           eventId,
           id,
           (const MethodInfo_2EC2A28 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventRewardSetEntity__CreatePrimaryKey(
        EventRewardSetEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventRewardSetEntity__CreatePK(this->fields.rewardSetType, this->fields.eventId, this->fields.id, v2);
}