void __fastcall EventTowerRewardEntity___ctor(EventTowerRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B2F0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B2F0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventTowerRewardEntity__CreatePK(
        int32_t eventId,
        int32_t towerId,
        int32_t floor,
        const MethodInfo *method)
{
  if ( (byte_4A5B2EF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4A5B2EF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           towerId,
           floor,
           (const MethodInfo_2E7DFBC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventTowerRewardEntity__CreatePrimaryKey(
        EventTowerRewardEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventTowerRewardEntity__CreatePK(this->fields.eventId, this->fields.towerId, this->fields.floor, v2);
}