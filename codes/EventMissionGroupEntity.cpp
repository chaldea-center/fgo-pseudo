void __fastcall EventMissionGroupEntity___ctor(EventMissionGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C230D9 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C230D9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventMissionGroupEntity__CreatePK(int32_t id, int32_t missionId, const MethodInfo *method)
{
  if ( (byte_4C230D8 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&missionId);
    byte_4C230D8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           missionId,
           (const MethodInfo_2FEE38C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventMissionGroupEntity__CreatePrimaryKey(
        EventMissionGroupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventMissionGroupEntity__CreatePK(this->fields.id, this->fields.missionId, v2);
}