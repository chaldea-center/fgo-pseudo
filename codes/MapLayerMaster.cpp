void MapLayerMaster___ctor(MapLayerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939A9B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string___ctor__);
    byte_5939A9B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    441,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapLayerEntity_o *MapLayerMaster__GetEntity(
        MapLayerMaster_o *this,
        int32_t mapId,
        int32_t layer,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5939A9C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__GetEntity__);
    byte_5939A9C = 1;
  }
  PK = (Il2CppObject *)MapLayerEntity__CreatePK(mapId, layer, *(const MethodInfo **)&layer);
  return (MapLayerEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_3EE2044 *)Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool MapLayerMaster__TryGetEntity(
        MapLayerMaster_o *this,
        MapLayerEntity_o **entity,
        int32_t mapId,
        int32_t layer,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5939A9D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__TryGetEntity__);
    byte_5939A9D = 1;
  }
  PK = (Il2CppObject *)MapLayerEntity__CreatePK(mapId, layer, *(const MethodInfo **)&mapId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__TryGetEntity__);
}