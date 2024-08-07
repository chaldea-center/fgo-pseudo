void __fastcall EventMissionGroupEntity___ctor(EventMissionGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FFBA6 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FFBA6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventMissionGroupEntity__CreatePK(int32_t id, int32_t missionId, const MethodInfo *method)
{
  if ( (byte_49FFBA5 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&missionId);
    byte_49FFBA5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           missionId,
           (const MethodInfo_2E39F04 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventMissionGroupEntity__CreatePrimaryKey(
        EventMissionGroupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventMissionGroupEntity__CreatePK(this->fields.id, this->fields.missionId, v2);
}