void __fastcall MapLayerMaster___ctor(MapLayerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41858C0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string___ctor__, method);
    byte_41858C0 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    431,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapLayerEntity_o *__fastcall MapLayerMaster__GetEntity(
        MapLayerMaster_o *this,
        int32_t mapId,
        int32_t layer,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_41858C1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__GetEntity__, *(_QWORD *)&mapId);
    byte_41858C1 = 1;
  }
  PK = MapLayerEntity__CreatePK(mapId, layer, *(const MethodInfo **)&layer);
  return (MapLayerEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                               (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                               PK,
                               (const MethodInfo_24E4520 *)Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__GetEntity__);
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

  if ( (byte_41858C2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__TryGetEntity__, entity);
    byte_41858C2 = 1;
  }
  PK = MapLayerEntity__CreatePK(mapId, layer, *(const MethodInfo **)&mapId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__TryGetEntity__);
}