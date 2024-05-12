void __fastcall UserAccessaryMaster___ctor(UserAccessaryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438CAA3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string___ctor__);
    byte_438CAA3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    39,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserAccessaryEntity_o *__fastcall UserAccessaryMaster__GetEntity(
        UserAccessaryMaster_o *this,
        int64_t userId,
        int32_t accessaryId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438CAA1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string__GetEntity__);
    byte_438CAA1 = 1;
  }
  PK = UserAccessaryEntity__CreatePK(userId, accessaryId, *(const MethodInfo **)&accessaryId);
  return (UserAccessaryEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_21FBCE4 *)Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string__GetEntity__);
}


bool __fastcall UserAccessaryMaster__TryGetEntity(
        UserAccessaryMaster_o *this,
        UserAccessaryEntity_o **entity,
        int64_t userId,
        int32_t accessaryId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438CAA2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string__TryGetEntity__);
    byte_438CAA2 = 1;
  }
  PK = UserAccessaryEntity__CreatePK(userId, accessaryId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string__TryGetEntity__);
}