void __fastcall UserSvtCoinMaster___ctor(UserSvtCoinMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418D294 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserSvtCoinMaster__UserSvtCoinEntity__string___ctor__, method);
    byte_418D294 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    372,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserSvtCoinMaster__UserSvtCoinEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserSvtCoinEntity_o *__fastcall UserSvtCoinMaster__GetEntity(
        UserSvtCoinMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418D292 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserSvtCoinMaster__UserSvtCoinEntity__string__GetEntity__, userId);
    byte_418D292 = 1;
  }
  PK = UserSvtCoinEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserSvtCoinEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                  (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_24E4520 *)Method_DataMasterBase_UserSvtCoinMaster__UserSvtCoinEntity__string__GetEntity__);
}


bool __fastcall UserSvtCoinMaster__TryGetEntity(
        UserSvtCoinMaster_o *this,
        UserSvtCoinEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418D293 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserSvtCoinMaster__UserSvtCoinEntity__string__TryGetEntity__, entity);
    byte_418D293 = 1;
  }
  PK = UserSvtCoinEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserSvtCoinMaster__UserSvtCoinEntity__string__TryGetEntity__);
}