void __fastcall EventMissionGroupEntity___ctor(EventMissionGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438B4B4 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438B4B4 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventMissionGroupEntity__CreatePK(int32_t id, int32_t missionId, const MethodInfo *method)
{
  if ( (byte_438B4B3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438B4B3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           missionId,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventMissionGroupEntity__CreatePrimaryKey(
        EventMissionGroupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventMissionGroupEntity__CreatePK(this->fields.id, this->fields.missionId, v2);
}