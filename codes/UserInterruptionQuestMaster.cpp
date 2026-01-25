void UserInterruptionQuestMaster___ctor(UserInterruptionQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF942 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string___ctor__);
    byte_4CEF942 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    494,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string___ctor__);
}


UserInterruptionQuestEntity_o *UserInterruptionQuestMaster__GetEntity(
        UserInterruptionQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEF943 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string__GetEntity__);
    byte_4CEF943 = 1;
  }
  PK = (Il2CppObject *)UserInterruptionQuestEntity__CreatePK(userId, questId, phase, 0);
  return (UserInterruptionQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_3432DB4 *)Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string__GetEntity__);
}


bool UserInterruptionQuestMaster__TryGetEntity(
        UserInterruptionQuestMaster_o *this,
        UserInterruptionQuestEntity_o **entity,
        int64_t userId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEF944 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string__TryGetEntity__);
    byte_4CEF944 = 1;
  }
  PK = (Il2CppObject *)UserInterruptionQuestEntity__CreatePK(userId, questId, phase, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string__TryGetEntity__);
}