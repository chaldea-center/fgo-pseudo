void __fastcall SpotLayerMaster___ctor(SpotLayerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB9B6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int___ctor__, method);
    byte_49BB9B6 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    440,
    (const MethodInfo_319B678 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int___ctor__);
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

  if ( (byte_49BB9B5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__, *(_QWORD *)&spotId);
    byte_49BB9B5 = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         spotId,
         (const MethodInfo_319D9E8 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  if ( !v5 )
    return 0;
  if ( !entity )
    sub_1B4D1EC(v5, v6);
  return (int32_t)entity[1].monitor;
}