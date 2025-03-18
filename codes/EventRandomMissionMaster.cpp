void __fastcall EventRandomMissionMaster___ctor(EventRandomMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2203C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventRandomMissionMaster__EventRandomMissionEntity__string___ctor__, method);
    byte_4C2203C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    402,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_EventRandomMissionMaster__EventRandomMissionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRandomMissionEntity_o *__fastcall EventRandomMissionMaster__GetEntity(
        EventRandomMissionMaster_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C2203D & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_EventRandomMissionMaster__EventRandomMissionEntity__string__GetEntity__,
      *(_QWORD *)&missionId);
    byte_4C2203D = 1;
  }
  PK = (Il2CppObject *)EventRandomMissionEntity__CreatePK(missionId, *(const MethodInfo **)&missionId);
  return (EventRandomMissionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_329F900 *)Method_DataMasterBase_EventRandomMissionMaster__EventRandomMissionEntity__string__GetEntity__);
}


bool __fastcall EventRandomMissionMaster__TryGetEntity(
        EventRandomMissionMaster_o *this,
        EventRandomMissionEntity_o **entity,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C2203E & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_EventRandomMissionMaster__EventRandomMissionEntity__string__TryGetEntity__,
      entity);
    byte_4C2203E = 1;
  }
  PK = (Il2CppObject *)EventRandomMissionEntity__CreatePK(missionId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_EventRandomMissionMaster__EventRandomMissionEntity__string__TryGetEntity__);
}