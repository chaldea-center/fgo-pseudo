void __fastcall EventRandomMissionEntity___ctor(EventRandomMissionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418873B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418873B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventRandomMissionEntity__CreatePK(int32_t missionId, const MethodInfo *method)
{
  if ( (byte_418873A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int___, method);
    byte_418873A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           missionId,
           (const MethodInfo_173289C *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *__fastcall EventRandomMissionEntity__CreatePrimaryKey(
        EventRandomMissionEntity_o *this,
        const MethodInfo *method)
{
  return EventRandomMissionEntity__CreatePK(this->fields.missionId, method);
}