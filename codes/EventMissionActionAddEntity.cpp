void __fastcall EventMissionActionAddEntity___ctor(EventMissionActionAddEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9B58 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E9B58 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventMissionActionAddEntity__CreatePK(
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_42E9B57 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, missionProgressType, id, method);
    byte_42E9B57 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           missionId,
           missionProgressType,
           id,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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