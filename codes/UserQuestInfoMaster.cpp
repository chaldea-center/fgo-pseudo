void __fastcall UserQuestInfoMaster___ctor(UserQuestInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BEE2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserQuestInfoMaster__UserQuestInfoEntity__string___ctor__);
    byte_4A5BEE2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    59,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserQuestInfoMaster__UserQuestInfoEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserQuestInfoEntity_o *__fastcall UserQuestInfoMaster__GetEntity(
        UserQuestInfoMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BEE0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserQuestInfoMaster__UserQuestInfoEntity__string__GetEntity__);
    byte_4A5BEE0 = 1;
  }
  PK = (Il2CppObject *)UserQuestInfoEntity__CreatePK(userId, questId, *(const MethodInfo **)&questId);
  return (UserQuestInfoEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_311DC8C *)Method_DataMasterBase_UserQuestInfoMaster__UserQuestInfoEntity__string__GetEntity__);
}


bool __fastcall UserQuestInfoMaster__TryGetEntity(
        UserQuestInfoMaster_o *this,
        UserQuestInfoEntity_o **entity,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5BEE1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserQuestInfoMaster__UserQuestInfoEntity__string__TryGetEntity__);
    byte_4A5BEE1 = 1;
  }
  PK = (Il2CppObject *)UserQuestInfoEntity__CreatePK(userId, questId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserQuestInfoMaster__UserQuestInfoEntity__string__TryGetEntity__);
}