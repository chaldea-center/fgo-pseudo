void __fastcall UserEventDataLostMaster___ctor(UserEventDataLostMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4215BF8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserEventDataLostMaster__UserEventDataLostEntity__string___ctor__, method);
    byte_4215BF8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    436,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_UserEventDataLostMaster__UserEventDataLostEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventDataLostEntity_o *__fastcall UserEventDataLostMaster__GetEntity(
        UserEventDataLostMaster_o *this,
        int64_t userId,
        int32_t dataLostBattleId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4215BF9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserEventDataLostMaster__UserEventDataLostEntity__string__GetEntity__, userId);
    byte_4215BF9 = 1;
  }
  PK = UserEventDataLostEntity__CreatePK(userId, dataLostBattleId, *(const MethodInfo **)&dataLostBattleId);
  return (UserEventDataLostEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                        (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_266A024 *)Method_DataMasterBase_UserEventDataLostMaster__UserEventDataLostEntity__string__GetEntity__);
}


bool __fastcall UserEventDataLostMaster__TryGetEntity(
        UserEventDataLostMaster_o *this,
        UserEventDataLostEntity_o **entity,
        int64_t userId,
        int32_t dataLostBattleId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4215BFA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserEventDataLostMaster__UserEventDataLostEntity__string__TryGetEntity__, entity);
    byte_4215BFA = 1;
  }
  PK = UserEventDataLostEntity__CreatePK(userId, dataLostBattleId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_UserEventDataLostMaster__UserEventDataLostEntity__string__TryGetEntity__);
}