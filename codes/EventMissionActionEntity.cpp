void __fastcall EventMissionActionEntity___ctor(EventMissionActionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F889D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40F889D = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventMissionActionEntity__CreatePK(
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_40F889C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&missionProgressType);
    byte_40F889C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           missionId,
           missionProgressType,
           id,
           (const MethodInfo_18C25C8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventMissionActionEntity__CreatePrimaryKey(
        EventMissionActionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventMissionActionEntity__CreatePK(
           this->fields.missionId,
           this->fields.missionProgressType,
           this->fields.id,
           v2);
}


int32_t __fastcall EventMissionActionEntity__GetMissionActionType(
        EventMissionActionEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.missionActionType;
}


bool __fastcall EventMissionActionEntity__isSafeType(EventMissionActionEntity_o *this, const MethodInfo *method)
{
  return this->fields.missionActionType == 7;
}