void __fastcall UserEventMissionCondDetailMaster___ctor(
        UserEventMissionCondDetailMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7090 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventMissionCondDetailMaster__UserEventMissionCondDetailEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E7090 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    142,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserEventMissionCondDetailMaster__UserEventMissionCondDetailEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventMissionCondDetailEntity_o *__fastcall UserEventMissionCondDetailMaster__GetEntity(
        UserEventMissionCondDetailMaster_o *this,
        int64_t userId,
        int32_t conditionDetailId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E708E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventMissionCondDetailMaster__UserEventMissionCondDetailEntity__string__GetEntity__,
      userId,
      conditionDetailId,
      method);
    byte_42E708E = 1;
  }
  PK = UserEventMissionCondDetailEntity__CreatePK(userId, conditionDetailId, *(const MethodInfo **)&conditionDetailId);
  return (UserEventMissionCondDetailEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                 PK,
                                                 (const MethodInfo_23FB260 *)Method_DataMasterBase_UserEventMissionCondDetailMaster__UserEventMissionCondDetailEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventMissionCondDetailMaster__TryGetEntity(
        UserEventMissionCondDetailMaster_o *this,
        UserEventMissionCondDetailEntity_o **entity,
        int64_t userId,
        int32_t conditionDetailId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E708F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventMissionCondDetailMaster__UserEventMissionCondDetailEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&conditionDetailId);
    byte_42E708F = 1;
  }
  PK = UserEventMissionCondDetailEntity__CreatePK(userId, conditionDetailId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserEventMissionCondDetailMaster__UserEventMissionCondDetailEntity__string__TryGetEntity__);
}