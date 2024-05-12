void __fastcall UserInterruptionQuestMaster___ctor(UserInterruptionQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4389D56 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string___ctor__);
    byte_4389D56 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    486,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserInterruptionQuestEntity_o *__fastcall UserInterruptionQuestMaster__GetEntity(
        UserInterruptionQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4389D57 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string__GetEntity__);
    byte_4389D57 = 1;
  }
  PK = UserInterruptionQuestEntity__CreatePK(userId, questId, phase, *(const MethodInfo **)&phase);
  return (UserInterruptionQuestEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_21FBCE4 *)Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserInterruptionQuestMaster__TryGetEntity(
        UserInterruptionQuestMaster_o *this,
        UserInterruptionQuestEntity_o **entity,
        int64_t userId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4389D58 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string__TryGetEntity__);
    byte_4389D58 = 1;
  }
  PK = UserInterruptionQuestEntity__CreatePK(userId, questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_UserInterruptionQuestMaster__UserInterruptionQuestEntity__string__TryGetEntity__);
}