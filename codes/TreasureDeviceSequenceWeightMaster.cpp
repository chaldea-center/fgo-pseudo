void __fastcall TreasureDeviceSequenceWeightMaster___ctor(
        TreasureDeviceSequenceWeightMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EACB2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EACB2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    453,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string___ctor__);
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

  if ( (byte_42EACB3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__GetEntity__,
      treasureDeviceId,
      limitCount,
      *(_QWORD *)&npChargeStage);
    byte_42EACB3 = 1;
  }
  PK = TreasureDeviceSequenceWeightEntity__CreatePK(
         treasureDeviceId,
         limitCount,
         npChargeStage,
         *(const MethodInfo **)&npChargeStage);
  return (TreasureDeviceSequenceWeightEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                   PK,
                                                   (const MethodInfo_23FB260 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__GetEntity__);
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

  if ( (byte_42EACB4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__TryGetEntity__,
      (_DWORD)entity,
      treasureDeviceId,
      *(_QWORD *)&limitCount);
    byte_42EACB4 = 1;
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
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__TryGetEntity__);
}