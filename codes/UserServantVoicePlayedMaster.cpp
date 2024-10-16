void __fastcall UserServantVoicePlayedMaster___ctor(UserServantVoicePlayedMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6C2A & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_UserServantVoicePlayedMaster__UserServantVoicePlayedEntity__string___ctor__,
      method);
    byte_4AB6C2A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    388,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_UserServantVoicePlayedMaster__UserServantVoicePlayedEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantVoicePlayedEntity_o *__fastcall UserServantVoicePlayedMaster__GetEntity(
        UserServantVoicePlayedMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4AB6C28 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_UserServantVoicePlayedMaster__UserServantVoicePlayedEntity__string__GetEntity__,
      userId);
    byte_4AB6C28 = 1;
  }
  PK = (Il2CppObject *)UserServantVoicePlayedEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserServantVoicePlayedEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_31640E8 *)Method_DataMasterBase_UserServantVoicePlayedMaster__UserServantVoicePlayedEntity__string__GetEntity__);
}


bool __fastcall UserServantVoicePlayedMaster__TryGetEntity(
        UserServantVoicePlayedMaster_o *this,
        UserServantVoicePlayedEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4AB6C29 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_UserServantVoicePlayedMaster__UserServantVoicePlayedEntity__string__TryGetEntity__,
      entity);
    byte_4AB6C29 = 1;
  }
  PK = (Il2CppObject *)UserServantAppendPassiveSkillEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_UserServantVoicePlayedMaster__UserServantVoicePlayedEntity__string__TryGetEntity__);
}