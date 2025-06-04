void __fastcall EventMissionAddEntity___ctor(EventMissionAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B0202D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_string___ctor__, method);
    byte_4B0202D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32ACC04 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventMissionAddEntity__CreatePK(
        int32_t missionId,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4B0202C & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_4B0202C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           missionId,
           priority,
           (const MethodInfo_2FFFFEC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventMissionAddEntity__CreatePrimaryKey(
        EventMissionAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventMissionAddEntity__CreatePK(this->fields.missionId, this->fields.priority, v2);
}