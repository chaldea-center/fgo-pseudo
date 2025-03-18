void __fastcall SpotLayerMaster___ctor(SpotLayerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22A88 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int___ctor__, method);
    byte_4C22A88 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    440,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SpotLayerMaster__GetParentLayerBySpotId(
        SpotLayerMaster_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C22A87 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__, *(_QWORD *)&spotId);
    byte_4C22A87 = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         spotId,
         (const MethodInfo_329AE94 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  if ( !v5 )
    return 0;
  if ( !entity )
    sub_1C3B9C0(v5, v6);
  return (int32_t)entity[1].monitor;
}