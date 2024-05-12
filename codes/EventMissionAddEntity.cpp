void __fastcall EventMissionAddEntity___ctor(EventMissionAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438C6C7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438C6C7 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventMissionAddEntity__CreatePK(
        int32_t missionId,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_438C6C6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438C6C6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           missionId,
           priority,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventMissionAddEntity__CreatePrimaryKey(
        EventMissionAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventMissionAddEntity__CreatePK(this->fields.missionId, this->fields.priority, v2);
}