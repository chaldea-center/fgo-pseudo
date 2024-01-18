void __fastcall UserBoxGachaMaster___ctor(UserBoxGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188A99 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string___ctor__, method);
    byte_4188A99 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    125,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserBoxGachaEntity_o *__fastcall UserBoxGachaMaster__GetEntity(
        UserBoxGachaMaster_o *this,
        int64_t userId,
        int32_t boxGachaId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4188A97 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string__GetEntity__, userId);
    byte_4188A97 = 1;
  }
  PK = UserBoxGachaEntity__CreatePK(userId, boxGachaId, *(const MethodInfo **)&boxGachaId);
  return (UserBoxGachaEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_24E4520 *)Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string__GetEntity__);
}


bool __fastcall UserBoxGachaMaster__TryGetEntity(
        UserBoxGachaMaster_o *this,
        UserBoxGachaEntity_o **entity,
        int64_t userId,
        int32_t boxGachaId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4188A98 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string__TryGetEntity__, entity);
    byte_4188A98 = 1;
  }
  PK = UserBoxGachaEntity__CreatePK(userId, boxGachaId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string__TryGetEntity__);
}