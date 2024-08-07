void __fastcall EventRandomMissionEntity___ctor(EventRandomMissionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FEC12 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FEC12 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventRandomMissionEntity__CreatePK(int32_t missionId, const MethodInfo *method)
{
  if ( (byte_49FEC11 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int___, method);
    byte_49FEC11 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           missionId,
           (const MethodInfo_2E39D98 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *__fastcall EventRandomMissionEntity__CreatePrimaryKey(
        EventRandomMissionEntity_o *this,
        const MethodInfo *method)
{
  return EventRandomMissionEntity__CreatePK(this->fields.missionId, method);
}