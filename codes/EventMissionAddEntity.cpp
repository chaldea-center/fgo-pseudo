void __fastcall EventMissionAddEntity___ctor(EventMissionAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188DB5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4188DB5 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventMissionAddEntity__CreatePK(
        int32_t missionId,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4188DB4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_4188DB4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           missionId,
           priority,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventMissionAddEntity__CreatePrimaryKey(
        EventMissionAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventMissionAddEntity__CreatePK(this->fields.missionId, this->fields.priority, v2);
}