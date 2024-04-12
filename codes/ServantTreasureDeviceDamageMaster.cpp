void __fastcall ServantTreasureDeviceDamageMaster___ctor(
        ServantTreasureDeviceDamageMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B3306 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string___ctor__);
    byte_42B3306 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    295,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceDamageEntity_o *__fastcall ServantTreasureDeviceDamageMaster__GetEntity(
        ServantTreasureDeviceDamageMaster_o *this,
        int32_t svtId,
        int32_t voicePrefix,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B3304 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string__GetEntity__);
    byte_42B3304 = 1;
  }
  PK = ServantTreasureDeviceDamageEntity__CreatePK(svtId, voicePrefix, *(const MethodInfo **)&voicePrefix);
  return (ServantTreasureDeviceDamageEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                  (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                  PK,
                                                  (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string__GetEntity__);
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

  if ( (byte_42B3305 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string__TryGetEntity__);
    byte_42B3305 = 1;
  }
  PK = ServantTreasureDeviceDamageEntity__CreatePK(svtId, voicePrefix, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantTreasureDeviceDamageMaster__ServantTreasureDeviceDamageEntity__string__TryGetEntity__);
}