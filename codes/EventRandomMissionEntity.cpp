void __fastcall EventRandomMissionEntity___ctor(EventRandomMissionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438BD68 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438BD68 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventRandomMissionEntity__CreatePK(int32_t missionId, const MethodInfo *method)
{
  if ( (byte_438BD67 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_438BD67 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           missionId,
           (const MethodInfo_1D17150 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *__fastcall EventRandomMissionEntity__CreatePrimaryKey(
        EventRandomMissionEntity_o *this,
        const MethodInfo *method)
{
  return EventRandomMissionEntity__CreatePK(this->fields.missionId, method);
}