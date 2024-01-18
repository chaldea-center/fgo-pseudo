void __fastcall EventTowerRewardEntity___ctor(EventTowerRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188255 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4188255 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventTowerRewardEntity__CreatePK(
        int32_t eventId,
        int32_t towerId,
        int32_t floor,
        const MethodInfo *method)
{
  if ( (byte_4188254 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&towerId);
    byte_4188254 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           towerId,
           floor,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventTowerRewardEntity__CreatePrimaryKey(
        EventTowerRewardEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventTowerRewardEntity__CreatePK(this->fields.eventId, this->fields.towerId, this->fields.floor, v2);
}