void __fastcall TreasureDvcLvMaster___ctor(TreasureDvcLvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4216854 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_TreasureDvcLvMaster__TreasureDvcLvEntity__string___ctor__, method);
    byte_4216854 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    90,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_TreasureDvcLvMaster__TreasureDvcLvEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TreasureDvcLvEntity_o *__fastcall TreasureDvcLvMaster__GetEntity(
        TreasureDvcLvMaster_o *this,
        int32_t treaureDeviceId,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4216852 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_TreasureDvcLvMaster__TreasureDvcLvEntity__string__GetEntity__,
      *(_QWORD *)&treaureDeviceId);
    byte_4216852 = 1;
  }
  PK = TreasureDvcLvEntity__CreatePK(treaureDeviceId, lv, *(const MethodInfo **)&lv);
  return (TreasureDvcLvEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_266A024 *)Method_DataMasterBase_TreasureDvcLvMaster__TreasureDvcLvEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TreasureDvcLvMaster__TryGetEntity(
        TreasureDvcLvMaster_o *this,
        TreasureDvcLvEntity_o **entity,
        int32_t treaureDeviceId,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4216853 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_TreasureDvcLvMaster__TreasureDvcLvEntity__string__TryGetEntity__, entity);
    byte_4216853 = 1;
  }
  PK = TreasureDvcLvEntity__CreatePK(treaureDeviceId, lv, *(const MethodInfo **)&treaureDeviceId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_TreasureDvcLvMaster__TreasureDvcLvEntity__string__TryGetEntity__);
}