void __fastcall UserEventMissionCondDetailMaster___ctor(
        UserEventMissionCondDetailMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B1561 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventMissionCondDetailMaster__UserEventMissionCondDetailEntity__string___ctor__);
    byte_42B1561 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    142,
    (const MethodInfo_23E268C *)Method_DataMasterBase_UserEventMissionCondDetailMaster__UserEventMissionCondDetailEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventMissionCondDetailEntity_o *__fastcall UserEventMissionCondDetailMaster__GetEntity(
        UserEventMissionCondDetailMaster_o *this,
        int64_t userId,
        int32_t conditionDetailId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B155F & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventMissionCondDetailMaster__UserEventMissionCondDetailEntity__string__GetEntity__);
    byte_42B155F = 1;
  }
  PK = UserEventMissionCondDetailEntity__CreatePK(userId, conditionDetailId, *(const MethodInfo **)&conditionDetailId);
  return (UserEventMissionCondDetailEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                 PK,
                                                 (const MethodInfo_23E2728 *)Method_DataMasterBase_UserEventMissionCondDetailMaster__UserEventMissionCondDetailEntity__string__GetEntity__);
}


bool __fastcall UserEventMissionCondDetailMaster__TryGetEntity(
        UserEventMissionCondDetailMaster_o *this,
        UserEventMissionCondDetailEntity_o **entity,
        int64_t userId,
        int32_t conditionDetailId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B1560 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventMissionCondDetailMaster__UserEventMissionCondDetailEntity__string__TryGetEntity__);
    byte_42B1560 = 1;
  }
  PK = UserEventMissionCondDetailEntity__CreatePK(userId, conditionDetailId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_UserEventMissionCondDetailMaster__UserEventMissionCondDetailEntity__string__TryGetEntity__);
}