void __fastcall UserInterruptionQuestMaster___ctor(UserInterruptionQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6E5B & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string___ctor__,
      method);
    byte_4AB6E5B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    487,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string___ctor__);
}


UserInterruptionQuestEntity_o *__fastcall UserInterruptionQuestMaster__GetEntity(
        UserInterruptionQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4AB6E5C & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string__GetEntity__,
      userId);
    byte_4AB6E5C = 1;
  }
  PK = (Il2CppObject *)UserInterruptionQuestEntity__CreatePK(userId, questId, phase, 0LL);
  return (UserInterruptionQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_31640E8 *)Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string__GetEntity__);
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

  if ( (byte_4AB6E5D & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string__TryGetEntity__,
      entity);
    byte_4AB6E5D = 1;
  }
  PK = (Il2CppObject *)UserInterruptionQuestEntity__CreatePK(userId, questId, phase, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string__TryGetEntity__);
}