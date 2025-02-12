void __fastcall NotEndEventMissionFixEntity___ctor(NotEndEventMissionFixEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7E95 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_string___ctor__, method);
    byte_4BC7E95 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_324620C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall NotEndEventMissionFixEntity__CreatePK(
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  if ( (byte_4BC7E94 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&missionId);
    byte_4BC7E94 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           missionId,
           (const MethodInfo_2F9D6B4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall NotEndEventMissionFixEntity__CreatePrimaryKey(
        NotEndEventMissionFixEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return NotEndEventMissionFixEntity__CreatePK(this->fields.eventId, this->fields.missionId, v2);
}