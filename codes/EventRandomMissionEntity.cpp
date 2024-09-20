void __fastcall EventRandomMissionEntity___ctor(EventRandomMissionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B249 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B249 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventRandomMissionEntity__CreatePK(int32_t missionId, const MethodInfo *method)
{
  if ( (byte_4A5B248 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_4A5B248 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           missionId,
           (const MethodInfo_2E7D9C0 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *__fastcall EventRandomMissionEntity__CreatePrimaryKey(
        EventRandomMissionEntity_o *this,
        const MethodInfo *method)
{
  return EventRandomMissionEntity__CreatePK(this->fields.missionId, method);
}