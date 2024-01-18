void __fastcall UserEventDiggingMaster___ctor(UserEventDiggingMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188B4D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventDiggingMaster__UserEventDiggingEntity__string___ctor__, method);
    byte_4188B4D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    346,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserEventDiggingMaster__UserEventDiggingEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventDiggingEntity_o *__fastcall UserEventDiggingMaster__GetEntity(
        UserEventDiggingMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4188B4B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventDiggingMaster__UserEventDiggingEntity__string__GetEntity__, userId);
    byte_4188B4B = 1;
  }
  PK = UserEventDiggingEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  return (UserEventDiggingEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_24E4520 *)Method_DataMasterBase_UserEventDiggingMaster__UserEventDiggingEntity__string__GetEntity__);
}


bool __fastcall UserEventDiggingMaster__TryGetEntity(
        UserEventDiggingMaster_o *this,
        UserEventDiggingEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4188B4C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventDiggingMaster__UserEventDiggingEntity__string__TryGetEntity__, entity);
    byte_4188B4C = 1;
  }
  PK = UserEventDiggingEntity__CreatePK(userId, eventId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserEventDiggingMaster__UserEventDiggingEntity__string__TryGetEntity__);
}