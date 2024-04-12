void __fastcall EventMissionActionAddEntity___ctor(EventMissionActionAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B118E & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B118E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventMissionActionAddEntity__CreatePK(
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_42B118D & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42B118D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           missionId,
           missionProgressType,
           id,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventMissionActionAddEntity__CreatePrimaryKey(
        EventMissionActionAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventMissionActionAddEntity__CreatePK(
           this->fields.missionId,
           this->fields.missionProgressType,
           this->fields.id,
           v2);
}


int32_t __fastcall EventMissionActionAddEntity__GetMissionActionType(
        EventMissionActionAddEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.missionActionType;
}


bool __fastcall EventMissionActionAddEntity__isSafeType(EventMissionActionAddEntity_o *this, const MethodInfo *method)
{
  return this->fields.missionActionType == 7;
}