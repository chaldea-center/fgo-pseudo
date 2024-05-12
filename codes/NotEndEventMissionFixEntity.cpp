void __fastcall NotEndEventMissionFixEntity___ctor(NotEndEventMissionFixEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438BA82 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438BA82 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall NotEndEventMissionFixEntity__CreatePK(
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  if ( (byte_438BA81 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438BA81 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           missionId,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall NotEndEventMissionFixEntity__CreatePrimaryKey(
        NotEndEventMissionFixEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return NotEndEventMissionFixEntity__CreatePK(this->fields.eventId, this->fields.missionId, v2);
}