void __fastcall EventTowerRewardEntity___ctor(EventTowerRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AF883 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AF883 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventTowerRewardEntity__CreatePK(
        int32_t eventId,
        int32_t towerId,
        int32_t floor,
        const MethodInfo *method)
{
  if ( (byte_42AF882 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42AF882 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           towerId,
           floor,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventTowerRewardEntity__CreatePrimaryKey(
        EventTowerRewardEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventTowerRewardEntity__CreatePK(this->fields.eventId, this->fields.towerId, this->fields.floor, v2);
}