void __fastcall ServantTreasureDeviceDamageMaster___ctor(
        ServantTreasureDeviceDamageMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_438DCDF & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string___ctor__);
    byte_438DCDF = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    295,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceDamageEntity_o *__fastcall ServantTreasureDeviceDamageMaster__GetEntity(
        ServantTreasureDeviceDamageMaster_o *this,
        int32_t svtId,
        int32_t voicePrefix,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438DCDD & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string__GetEntity__);
    byte_438DCDD = 1;
  }
  PK = ServantTreasureDeviceDamageEntity__CreatePK(svtId, voicePrefix, *(const MethodInfo **)&voicePrefix);
  return (ServantTreasureDeviceDamageEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                  (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                  PK,
                                                  (const MethodInfo_21FBCE4 *)Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantTreasureDeviceDamageMaster__TryGetEntity(
        ServantTreasureDeviceDamageMaster_o *this,
        ServantTreasureDeviceDamageEntity_o **entity,
        int32_t svtId,
        int32_t voicePrefix,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438DCDE & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string__TryGetEntity__);
    byte_438DCDE = 1;
  }
  PK = ServantTreasureDeviceDamageEntity__CreatePK(svtId, voicePrefix, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string__TryGetEntity__);
}