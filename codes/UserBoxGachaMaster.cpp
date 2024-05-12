void __fastcall UserBoxGachaMaster___ctor(UserBoxGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438CAB3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string___ctor__);
    byte_438CAB3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    126,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserBoxGachaEntity_o *__fastcall UserBoxGachaMaster__GetEntity(
        UserBoxGachaMaster_o *this,
        int64_t userId,
        int32_t boxGachaId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438CAB1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string__GetEntity__);
    byte_438CAB1 = 1;
  }
  PK = UserBoxGachaEntity__CreatePK(userId, boxGachaId, *(const MethodInfo **)&boxGachaId);
  return (UserBoxGachaEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_21FBCE4 *)Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string__GetEntity__);
}


bool __fastcall UserBoxGachaMaster__TryGetEntity(
        UserBoxGachaMaster_o *this,
        UserBoxGachaEntity_o **entity,
        int64_t userId,
        int32_t boxGachaId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438CAB2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string__TryGetEntity__);
    byte_438CAB2 = 1;
  }
  PK = UserBoxGachaEntity__CreatePK(userId, boxGachaId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string__TryGetEntity__);
}