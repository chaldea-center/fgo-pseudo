void UserServantVoicePlayedMaster___ctor(UserServantVoicePlayedMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C28358 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserServantVoicePlayedMaster__UserServantVoicePlayedEntity__string___ctor__);
    byte_4C28358 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    394,
    (const MethodInfo_338A52C *)Method_DataMasterBase_UserServantVoicePlayedMaster__UserServantVoicePlayedEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantVoicePlayedEntity_o *UserServantVoicePlayedMaster__GetEntity(
        UserServantVoicePlayedMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C28356 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserServantVoicePlayedMaster__UserServantVoicePlayedEntity__string__GetEntity__);
    byte_4C28356 = 1;
  }
  PK = (Il2CppObject *)UserServantVoicePlayedEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserServantVoicePlayedEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_338C850 *)Method_DataMasterBase_UserServantVoicePlayedMaster__UserServantVoicePlayedEntity__string__GetEntity__);
}


bool UserServantVoicePlayedMaster__TryGetEntity(
        UserServantVoicePlayedMaster_o *this,
        UserServantVoicePlayedEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C28357 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserServantVoicePlayedMaster__UserServantVoicePlayedEntity__string__TryGetEntity__);
    byte_4C28357 = 1;
  }
  PK = (Il2CppObject *)UserServantAppendPassiveSkillEntity__CreatePK(userId, svtId, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_UserServantVoicePlayedMaster__UserServantVoicePlayedEntity__string__TryGetEntity__);
}