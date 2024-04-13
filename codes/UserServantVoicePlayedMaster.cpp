void __fastcall UserServantVoicePlayedMaster___ctor(UserServantVoicePlayedMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE6AE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserServantVoicePlayedMaster__UserServantVoicePlayedEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EE6AE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    387,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserServantVoicePlayedMaster__UserServantVoicePlayedEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantVoicePlayedEntity_o *__fastcall UserServantVoicePlayedMaster__GetEntity(
        UserServantVoicePlayedMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EE6AC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserServantVoicePlayedMaster__UserServantVoicePlayedEntity__string__GetEntity__,
      userId,
      svtId,
      method);
    byte_42EE6AC = 1;
  }
  PK = UserServantVoicePlayedEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserServantVoicePlayedEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_23FB260 *)Method_DataMasterBase_UserServantVoicePlayedMaster__UserServantVoicePlayedEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantVoicePlayedMaster__TryGetEntity(
        UserServantVoicePlayedMaster_o *this,
        UserServantVoicePlayedEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EE6AD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserServantVoicePlayedMaster__UserServantVoicePlayedEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&svtId);
    byte_42EE6AD = 1;
  }
  PK = UserServantAppendPassiveSkillEntity__CreatePK(userId, svtId, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserServantVoicePlayedMaster__UserServantVoicePlayedEntity__string__TryGetEntity__);
}