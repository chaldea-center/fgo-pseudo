void __fastcall UserBlacklistMaster___ctor(UserBlacklistMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA15B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EA15B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    208,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string___ctor__);
}


UserBlacklistEntity_o *__fastcall UserBlacklistMaster__GetEntity(
        UserBlacklistMaster_o *this,
        int64_t userId,
        int64_t targetUserId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EA159 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__GetEntity__,
      userId,
      targetUserId,
      method);
    byte_42EA159 = 1;
  }
  PK = UserBlacklistEntity__CreatePK(userId, targetUserId, (const MethodInfo *)targetUserId);
  return (UserBlacklistEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23FB260 *)Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__GetEntity__);
}


bool __fastcall UserBlacklistMaster__TryGetEntity(
        UserBlacklistMaster_o *this,
        UserBlacklistEntity_o **entity,
        int64_t userId,
        int64_t targetUserId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EA15A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      targetUserId);
    byte_42EA15A = 1;
  }
  PK = UserBlacklistEntity__CreatePK(userId, targetUserId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__TryGetEntity__);
}