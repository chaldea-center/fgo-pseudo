void __fastcall MapLayerMaster___ctor(MapLayerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67CEC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string___ctor__, method);
    byte_4B67CEC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    437,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapLayerEntity_o *__fastcall MapLayerMaster__GetEntity(
        MapLayerMaster_o *this,
        int32_t mapId,
        int32_t layer,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B67CED & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__GetEntity__, *(_QWORD *)&mapId);
    byte_4B67CED = 1;
  }
  PK = (Il2CppObject *)MapLayerEntity__CreatePK(mapId, layer, *(const MethodInfo **)&layer);
  return (MapLayerEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_31FDB1C *)Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__GetEntity__);
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

  if ( (byte_4B67CEE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__TryGetEntity__, entity);
    byte_4B67CEE = 1;
  }
  PK = (Il2CppObject *)MapLayerEntity__CreatePK(mapId, layer, *(const MethodInfo **)&mapId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_MapLayerMaster__MapLayerEntity__string__TryGetEntity__);
}