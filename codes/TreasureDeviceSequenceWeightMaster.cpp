void __fastcall TreasureDeviceSequenceWeightMaster___ctor(
        TreasureDeviceSequenceWeightMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_421681F & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string___ctor__,
      method);
    byte_421681F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    452,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TreasureDeviceSequenceWeightEntity_o *__fastcall TreasureDeviceSequenceWeightMaster__GetEntity(
        TreasureDeviceSequenceWeightMaster_o *this,
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4216820 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__GetEntity__,
      *(_QWORD *)&treasureDeviceId);
    byte_4216820 = 1;
  }
  PK = TreasureDeviceSequenceWeightEntity__CreatePK(
         treasureDeviceId,
         limitCount,
         npChargeStage,
         *(const MethodInfo **)&npChargeStage);
  return (TreasureDeviceSequenceWeightEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                                   PK,
                                                   (const MethodInfo_266A024 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__GetEntity__);
}


TreasureDeviceSequenceWeightEntity_o *__fastcall TreasureDeviceSequenceWeightMaster__GetEntityWithCommonPattern(
        TreasureDeviceSequenceWeightMaster_o *this,
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  const MethodInfo *v10; // x5
  const MethodInfo *v12; // x5
  const MethodInfo *v13; // x5
  TreasureDeviceSequenceWeightEntity_o *v14; // [xsp+0h] [xbp-40h] BYREF
  TreasureDeviceSequenceWeightEntity_o *v15; // [xsp+8h] [xbp-38h] BYREF
  TreasureDeviceSequenceWeightEntity_o *v16; // [xsp+10h] [xbp-30h] BYREF
  TreasureDeviceSequenceWeightEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  v16 = 0LL;
  entity = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( TreasureDeviceSequenceWeightMaster__TryGetEntity(this, &entity, treasureDeviceId, limitCount, npChargeStage, v5) )
    return entity;
  if ( TreasureDeviceSequenceWeightMaster__TryGetEntity(this, &v16, treasureDeviceId, limitCount, -1, v10) )
    return v16;
  if ( TreasureDeviceSequenceWeightMaster__TryGetEntity(this, &v15, treasureDeviceId, -1, npChargeStage, v12) )
    return v15;
  if ( TreasureDeviceSequenceWeightMaster__TryGetEntity(this, &v14, treasureDeviceId, -1, -1, v13) )
    return v14;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TreasureDeviceSequenceWeightMaster__TryGetEntity(
        TreasureDeviceSequenceWeightMaster_o *this,
        TreasureDeviceSequenceWeightEntity_o **entity,
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4216821 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__TryGetEntity__,
      entity);
    byte_4216821 = 1;
  }
  PK = TreasureDeviceSequenceWeightEntity__CreatePK(
         treasureDeviceId,
         limitCount,
         npChargeStage,
         *(const MethodInfo **)&limitCount);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__TryGetEntity__);
}