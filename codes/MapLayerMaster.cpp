void __fastcall MapLayerMaster___ctor(MapLayerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FFBB8 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string___ctor__, method);
    byte_49FFBB8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    433,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapLayerEntity_o *__fastcall MapLayerMaster__GetEntity(
        MapLayerMaster_o *this,
        int32_t mapId,
        int32_t layer,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FFBB9 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__GetEntity__, *(_QWORD *)&mapId);
    byte_49FFBB9 = 1;
  }
  PK = (Il2CppObject *)MapLayerEntity__CreatePK(mapId, layer, *(const MethodInfo **)&layer);
  return (MapLayerEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_30D6AF0 *)Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapLayerMaster__TryGetEntity(
        MapLayerMaster_o *this,
        MapLayerEntity_o **entity,
        int32_t mapId,
        int32_t layer,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FFBBA & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__TryGetEntity__, entity);
    byte_49FFBBA = 1;
  }
  PK = (Il2CppObject *)MapLayerEntity__CreatePK(mapId, layer, *(const MethodInfo **)&mapId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__TryGetEntity__);
}