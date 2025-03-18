void __fastcall NpcFollowerReleaseMaster___ctor(NpcFollowerReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22372 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string___ctor__, method);
    byte_4C22372 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    281,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
NpcFollowerReleaseEntity_o *__fastcall NpcFollowerReleaseMaster__GetEntity(
        NpcFollowerReleaseMaster_o *this,
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C22370 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string__GetEntity__, id);
    byte_4C22370 = 1;
  }
  PK = (Il2CppObject *)NpcFollowerReleaseEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questPhase);
  return (NpcFollowerReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_329F900 *)Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall NpcFollowerReleaseMaster__TryGetEntity(
        NpcFollowerReleaseMaster_o *this,
        NpcFollowerReleaseEntity_o **entity,
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C22371 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4C22371 = 1;
  }
  PK = (Il2CppObject *)NpcFollowerReleaseEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string__TryGetEntity__);
}