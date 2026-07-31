void MapGimmickLayerMaster___ctor(MapGimmickLayerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939A96 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_MapGimmickLayerMaster__MapGimmickLayerEntity__int___ctor__);
    byte_5939A96 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    443,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_MapGimmickLayerMaster__MapGimmickLayerEntity__int___ctor__);
}