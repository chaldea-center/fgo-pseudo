void __fastcall UserInterruptionQuestMaster___ctor(UserInterruptionQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67D29 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string___ctor__,
      method);
    byte_4B67D29 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    491,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string___ctor__);
}


UserInterruptionQuestEntity_o *__fastcall UserInterruptionQuestMaster__GetEntity(
        UserInterruptionQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B67D2A & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string__GetEntity__,
      userId);
    byte_4B67D2A = 1;
  }
  PK = (Il2CppObject *)UserInterruptionQuestEntity__CreatePK(userId, questId, phase, 0LL);
  return (UserInterruptionQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_31FDB1C *)Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string__GetEntity__);
}


bool __fastcall UserInterruptionQuestMaster__TryGetEntity(
        UserInterruptionQuestMaster_o *this,
        UserInterruptionQuestEntity_o **entity,
        int64_t userId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B67D2B & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string__TryGetEntity__,
      entity);
    byte_4B67D2B = 1;
  }
  PK = (Il2CppObject *)UserInterruptionQuestEntity__CreatePK(userId, questId, phase, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string__TryGetEntity__);
}