void __fastcall MapGimmickLayerMaster___ctor(MapGimmickLayerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FFBB3 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_MapGimmickLayerMaster__MapGimmickLayerEntity__int___ctor__, method);
    byte_49FFBB3 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    435,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_MapGimmickLayerMaster__MapGimmickLayerEntity__int___ctor__);
}