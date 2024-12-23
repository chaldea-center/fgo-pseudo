void __fastcall MapGimmickLayerMaster___ctor(MapGimmickLayerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67CE7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_MapGimmickLayerMaster__MapGimmickLayerEntity__int___ctor__, method);
    byte_4B67CE7 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    439,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_MapGimmickLayerMaster__MapGimmickLayerEntity__int___ctor__);
}