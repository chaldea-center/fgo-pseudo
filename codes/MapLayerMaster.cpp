void __fastcall MapLayerMaster___ctor(MapLayerMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBB22 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EBB22 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    432,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapLayerEntity_o *__fastcall MapLayerMaster__GetEntity(
        MapLayerMaster_o *this,
        int32_t mapId,
        int32_t layer,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EBB23 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__GetEntity__, mapId, layer, method);
    byte_42EBB23 = 1;
  }
  PK = MapLayerEntity__CreatePK(mapId, layer, *(const MethodInfo **)&layer);
  return (MapLayerEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                               PK,
                               (const MethodInfo_23FB260 *)Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__GetEntity__);
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

  if ( (byte_42EBB24 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__TryGetEntity__,
      (_DWORD)entity,
      mapId,
      *(_QWORD *)&layer);
    byte_42EBB24 = 1;
  }
  PK = MapLayerEntity__CreatePK(mapId, layer, *(const MethodInfo **)&mapId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__TryGetEntity__);
}