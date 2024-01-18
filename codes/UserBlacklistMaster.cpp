void __fastcall UserBlacklistMaster___ctor(UserBlacklistMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188A93 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string___ctor__, method);
    byte_4188A93 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    207,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string___ctor__);
}


UserBlacklistEntity_o *__fastcall UserBlacklistMaster__GetEntity(
        UserBlacklistMaster_o *this,
        int64_t userId,
        int64_t targetUserId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4188A91 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__GetEntity__, userId);
    byte_4188A91 = 1;
  }
  PK = UserBlacklistEntity__CreatePK(userId, targetUserId, (const MethodInfo *)targetUserId);
  return (UserBlacklistEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_24E4520 *)Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__GetEntity__);
}


bool __fastcall UserBlacklistMaster__TryGetEntity(
        UserBlacklistMaster_o *this,
        UserBlacklistEntity_o **entity,
        int64_t userId,
        int64_t targetUserId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4188A92 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__TryGetEntity__, entity);
    byte_4188A92 = 1;
  }
  PK = UserBlacklistEntity__CreatePK(userId, targetUserId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__TryGetEntity__);
}