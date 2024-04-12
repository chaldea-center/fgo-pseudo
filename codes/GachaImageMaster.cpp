void __fastcall GachaImageMaster___ctor(GachaImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B3B2C & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GachaImageMaster__GachaImageEntity__string___ctor__);
    byte_42B3B2C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    33,
    (const MethodInfo_23E268C *)Method_DataMasterBase_GachaImageMaster__GachaImageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaImageEntity_o *__fastcall GachaImageMaster__GetEntity(
        GachaImageMaster_o *this,
        int32_t gachaId,
        int32_t areaId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B3B2A & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GachaImageMaster__GachaImageEntity__string__GetEntity__);
    byte_42B3B2A = 1;
  }
  PK = GachaImageEntity__CreatePK(gachaId, areaId, *(const MethodInfo **)&areaId);
  return (GachaImageEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_23E2728 *)Method_DataMasterBase_GachaImageMaster__GachaImageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaImageMaster__TryGetEntity(
        GachaImageMaster_o *this,
        GachaImageEntity_o **entity,
        int32_t gachaId,
        int32_t areaId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B3B2B & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GachaImageMaster__GachaImageEntity__string__TryGetEntity__);
    byte_42B3B2B = 1;
  }
  PK = GachaImageEntity__CreatePK(gachaId, areaId, *(const MethodInfo **)&gachaId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_GachaImageMaster__GachaImageEntity__string__TryGetEntity__);
}