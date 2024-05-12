void __fastcall GachaImageMaster___ctor(GachaImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438F169 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_GachaImageMaster__GachaImageEntity__string___ctor__);
    byte_438F169 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    33,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_GachaImageMaster__GachaImageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaImageEntity_o *__fastcall GachaImageMaster__GetEntity(
        GachaImageMaster_o *this,
        int32_t gachaId,
        int32_t areaId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438F167 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_GachaImageMaster__GachaImageEntity__string__GetEntity__);
    byte_438F167 = 1;
  }
  PK = GachaImageEntity__CreatePK(gachaId, areaId, *(const MethodInfo **)&areaId);
  return (GachaImageEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_21FBCE4 *)Method_DataMasterBase_GachaImageMaster__GachaImageEntity__string__GetEntity__);
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

  if ( (byte_438F168 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_GachaImageMaster__GachaImageEntity__string__TryGetEntity__);
    byte_438F168 = 1;
  }
  PK = GachaImageEntity__CreatePK(gachaId, areaId, *(const MethodInfo **)&gachaId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_GachaImageMaster__GachaImageEntity__string__TryGetEntity__);
}