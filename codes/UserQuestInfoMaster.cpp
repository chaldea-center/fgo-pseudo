void UserQuestInfoMaster___ctor(UserQuestInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C281E8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserQuestInfoMaster__UserQuestInfoEntity__string___ctor__);
    byte_4C281E8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    63,
    (const MethodInfo_338A52C *)Method_DataMasterBase_UserQuestInfoMaster__UserQuestInfoEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserQuestInfoEntity_o *UserQuestInfoMaster__GetEntity(
        UserQuestInfoMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C281E6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserQuestInfoMaster__UserQuestInfoEntity__string__GetEntity__);
    byte_4C281E6 = 1;
  }
  PK = (Il2CppObject *)UserQuestInfoEntity__CreatePK(userId, questId, *(const MethodInfo **)&questId);
  return (UserQuestInfoEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_338C850 *)Method_DataMasterBase_UserQuestInfoMaster__UserQuestInfoEntity__string__GetEntity__);
}


bool UserQuestInfoMaster__TryGetEntity(
        UserQuestInfoMaster_o *this,
        UserQuestInfoEntity_o **entity,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C281E7 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserQuestInfoMaster__UserQuestInfoEntity__string__TryGetEntity__);
    byte_4C281E7 = 1;
  }
  PK = (Il2CppObject *)UserQuestInfoEntity__CreatePK(userId, questId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_UserQuestInfoMaster__UserQuestInfoEntity__string__TryGetEntity__);
}