void __fastcall UserEventDataLostMaster___ctor(UserEventDataLostMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1524 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventDataLostMaster__UserEventDataLostEntity__string___ctor__);
    byte_42B1524 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    437,
    (const MethodInfo_23E268C *)Method_DataMasterBase_UserEventDataLostMaster__UserEventDataLostEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventDataLostEntity_o *__fastcall UserEventDataLostMaster__GetEntity(
        UserEventDataLostMaster_o *this,
        int64_t userId,
        int32_t dataLostBattleId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B1525 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventDataLostMaster__UserEventDataLostEntity__string__GetEntity__);
    byte_42B1525 = 1;
  }
  PK = UserEventDataLostEntity__CreatePK(userId, dataLostBattleId, *(const MethodInfo **)&dataLostBattleId);
  return (UserEventDataLostEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_23E2728 *)Method_DataMasterBase_UserEventDataLostMaster__UserEventDataLostEntity__string__GetEntity__);
}


bool __fastcall UserEventDataLostMaster__TryGetEntity(
        UserEventDataLostMaster_o *this,
        UserEventDataLostEntity_o **entity,
        int64_t userId,
        int32_t dataLostBattleId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B1526 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventDataLostMaster__UserEventDataLostEntity__string__TryGetEntity__);
    byte_42B1526 = 1;
  }
  PK = UserEventDataLostEntity__CreatePK(userId, dataLostBattleId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_UserEventDataLostMaster__UserEventDataLostEntity__string__TryGetEntity__);
}