void __fastcall MapGimmickLayerMaster___ctor(MapGimmickLayerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41858A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MapGimmickLayerMaster__MapGimmickLayerEntity__int___ctor__, method);
    byte_41858A6 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    433,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_MapGimmickLayerMaster__MapGimmickLayerEntity__int___ctor__);
}