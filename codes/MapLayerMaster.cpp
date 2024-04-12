void __fastcall MapLayerMaster___ctor(MapLayerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B305B & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string___ctor__);
    byte_42B305B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    432,
    (const MethodInfo_23E268C *)Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapLayerEntity_o *__fastcall MapLayerMaster__GetEntity(
        MapLayerMaster_o *this,
        int32_t mapId,
        int32_t layer,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B305C & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__GetEntity__);
    byte_42B305C = 1;
  }
  PK = MapLayerEntity__CreatePK(mapId, layer, *(const MethodInfo **)&layer);
  return (MapLayerEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                               PK,
                               (const MethodInfo_23E2728 *)Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapLayerMaster__TryGetEntity(
        MapLayerMaster_o *this,
        MapLayerEntity_o **entity,
        int32_t mapId,
        int32_t layer,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B305D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__TryGetEntity__);
    byte_42B305D = 1;
  }
  PK = MapLayerEntity__CreatePK(mapId, layer, *(const MethodInfo **)&mapId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__TryGetEntity__);
}