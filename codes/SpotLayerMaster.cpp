void __fastcall SpotLayerMaster___ctor(SpotLayerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B0A84 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int___ctor__);
    byte_42B0A84 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    433,
    (const MethodInfo_23E223C *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int___ctor__);
}


int32_t __fastcall SpotLayerMaster__GetParentLayerBySpotId(
        SpotLayerMaster_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B0A83 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
    byte_42B0A83 = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         spotId,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  if ( !v5 )
    return 0;
  if ( !entity )
    sub_B52A5C(v5, v6);
  return (int32_t)entity->fields.age;
}