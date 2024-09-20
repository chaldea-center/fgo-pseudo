void __fastcall NotEndEventMissionFixMaster___ctor(NotEndEventMissionFixMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B51A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_NotEndEventMissionFixMaster__NotEndEventMissionFixEntity__string___ctor__);
    byte_4A5B51A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    243,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_NotEndEventMissionFixMaster__NotEndEventMissionFixEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
NotEndEventMissionFixEntity_o *__fastcall NotEndEventMissionFixMaster__GetEntity(
        NotEndEventMissionFixMaster_o *this,
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B518 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_NotEndEventMissionFixMaster__NotEndEventMissionFixEntity__string__GetEntity__);
    byte_4A5B518 = 1;
  }
  PK = (Il2CppObject *)NotEndEventMissionFixEntity__CreatePK(eventId, missionId, *(const MethodInfo **)&missionId);
  return (NotEndEventMissionFixEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_311DC8C *)Method_DataMasterBase_NotEndEventMissionFixMaster__NotEndEventMissionFixEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall NotEndEventMissionFixMaster__TryGetEntity(
        NotEndEventMissionFixMaster_o *this,
        NotEndEventMissionFixEntity_o **entity,
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B519 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_NotEndEventMissionFixMaster__NotEndEventMissionFixEntity__string__TryGetEntity__);
    byte_4A5B519 = 1;
  }
  PK = (Il2CppObject *)NotEndEventMissionFixEntity__CreatePK(eventId, missionId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_NotEndEventMissionFixMaster__NotEndEventMissionFixEntity__string__TryGetEntity__);
}