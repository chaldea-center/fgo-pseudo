void NpcFollowerReleaseMaster___ctor(NpcFollowerReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938C57 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string___ctor__);
    byte_5938C57 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    283,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
NpcFollowerReleaseEntity_o *NpcFollowerReleaseMaster__GetEntity(
        NpcFollowerReleaseMaster_o *this,
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938C55 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string__GetEntity__);
    byte_5938C55 = 1;
  }
  PK = (Il2CppObject *)NpcFollowerReleaseEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questPhase);
  return (NpcFollowerReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_3EE2044 *)Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool NpcFollowerReleaseMaster__TryGetEntity(
        NpcFollowerReleaseMaster_o *this,
        NpcFollowerReleaseEntity_o **entity,
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938C56 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string__TryGetEntity__);
    byte_5938C56 = 1;
  }
  PK = (Il2CppObject *)NpcFollowerReleaseEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string__TryGetEntity__);
}