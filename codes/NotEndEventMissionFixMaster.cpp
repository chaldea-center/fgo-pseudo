void NotEndEventMissionFixMaster___ctor(NotEndEventMissionFixMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2780B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_NotEndEventMissionFixMaster__NotEndEventMissionFixEntity__string___ctor__);
    byte_4C2780B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    249,
    (const MethodInfo_338A52C *)Method_DataMasterBase_NotEndEventMissionFixMaster__NotEndEventMissionFixEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
NotEndEventMissionFixEntity_o *NotEndEventMissionFixMaster__GetEntity(
        NotEndEventMissionFixMaster_o *this,
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27809 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_NotEndEventMissionFixMaster__NotEndEventMissionFixEntity__string__GetEntity__);
    byte_4C27809 = 1;
  }
  PK = (Il2CppObject *)NotEndEventMissionFixEntity__CreatePK(eventId, missionId, *(const MethodInfo **)&missionId);
  return (NotEndEventMissionFixEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_338C850 *)Method_DataMasterBase_NotEndEventMissionFixMaster__NotEndEventMissionFixEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool NotEndEventMissionFixMaster__TryGetEntity(
        NotEndEventMissionFixMaster_o *this,
        NotEndEventMissionFixEntity_o **entity,
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C2780A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_NotEndEventMissionFixMaster__NotEndEventMissionFixEntity__string__TryGetEntity__);
    byte_4C2780A = 1;
  }
  PK = (Il2CppObject *)NotEndEventMissionFixEntity__CreatePK(eventId, missionId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_NotEndEventMissionFixMaster__NotEndEventMissionFixEntity__string__TryGetEntity__);
}