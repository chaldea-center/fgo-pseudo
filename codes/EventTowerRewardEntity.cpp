void __fastcall EventTowerRewardEntity___ctor(EventTowerRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B66D48 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B66D48 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventTowerRewardEntity__CreatePK(
        int32_t eventId,
        int32_t towerId,
        int32_t floor,
        const MethodInfo *method)
{
  if ( (byte_4B66D47 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&towerId);
    byte_4B66D47 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           towerId,
           floor,
           (const MethodInfo_2F577C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventTowerRewardEntity__CreatePrimaryKey(
        EventTowerRewardEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventTowerRewardEntity__CreatePK(this->fields.eventId, this->fields.towerId, this->fields.floor, v2);
}