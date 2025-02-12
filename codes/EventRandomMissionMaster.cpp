void __fastcall EventRandomMissionMaster___ctor(EventRandomMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7B89 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_EventRandomMissionMaster__EventRandomMissionEntity__string___ctor__, method);
    byte_4BC7B89 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    400,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_EventRandomMissionMaster__EventRandomMissionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRandomMissionEntity_o *__fastcall EventRandomMissionMaster__GetEntity(
        EventRandomMissionMaster_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC7B8A & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_EventRandomMissionMaster__EventRandomMissionEntity__string__GetEntity__,
      *(_QWORD *)&missionId);
    byte_4BC7B8A = 1;
  }
  PK = (Il2CppObject *)EventRandomMissionEntity__CreatePK(missionId, *(const MethodInfo **)&missionId);
  return (EventRandomMissionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_324D130 *)Method_DataMasterBase_EventRandomMissionMaster__EventRandomMissionEntity__string__GetEntity__);
}


bool __fastcall EventRandomMissionMaster__TryGetEntity(
        EventRandomMissionMaster_o *this,
        EventRandomMissionEntity_o **entity,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BC7B8B & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_EventRandomMissionMaster__EventRandomMissionEntity__string__TryGetEntity__,
      entity);
    byte_4BC7B8B = 1;
  }
  PK = (Il2CppObject *)EventRandomMissionEntity__CreatePK(missionId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_EventRandomMissionMaster__EventRandomMissionEntity__string__TryGetEntity__);
}