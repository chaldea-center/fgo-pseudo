void __fastcall UserGameCommonMaster___ctor(UserGameCommonMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AEF46 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string___ctor__);
    byte_42AEF46 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    479,
    (const MethodInfo_23E268C *)Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserGameCommonEntity_o *__fastcall UserGameCommonMaster__GetEntity(
        UserGameCommonMaster_o *this,
        int64_t userId,
        int32_t no,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42AEF47 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string__GetEntity__);
    byte_42AEF47 = 1;
  }
  PK = UserGameCommonEntity__CreatePK(userId, no, *(const MethodInfo **)&no);
  return (UserGameCommonEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23E2728 *)Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string__GetEntity__);
}


bool __fastcall UserGameCommonMaster__TryGetEntity(
        UserGameCommonMaster_o *this,
        UserGameCommonEntity_o **entity,
        int64_t userId,
        int32_t no,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42AEF48 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string__TryGetEntity__);
    byte_42AEF48 = 1;
  }
  PK = UserGameCommonEntity__CreatePK(userId, no, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string__TryGetEntity__);
}