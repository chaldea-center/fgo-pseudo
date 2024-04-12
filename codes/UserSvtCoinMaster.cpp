void __fastcall UserSvtCoinMaster___ctor(UserSvtCoinMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B5E66 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserSvtCoinMaster__UserSvtCoinEntity__string___ctor__);
    byte_42B5E66 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    373,
    (const MethodInfo_23E268C *)Method_DataMasterBase_UserSvtCoinMaster__UserSvtCoinEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserSvtCoinEntity_o *__fastcall UserSvtCoinMaster__GetEntity(
        UserSvtCoinMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B5E64 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserSvtCoinMaster__UserSvtCoinEntity__string__GetEntity__);
    byte_42B5E64 = 1;
  }
  PK = UserSvtCoinEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserSvtCoinEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                  (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_23E2728 *)Method_DataMasterBase_UserSvtCoinMaster__UserSvtCoinEntity__string__GetEntity__);
}


bool __fastcall UserSvtCoinMaster__TryGetEntity(
        UserSvtCoinMaster_o *this,
        UserSvtCoinEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B5E65 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserSvtCoinMaster__UserSvtCoinEntity__string__TryGetEntity__);
    byte_42B5E65 = 1;
  }
  PK = UserSvtCoinEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_UserSvtCoinMaster__UserSvtCoinEntity__string__TryGetEntity__);
}