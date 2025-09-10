void SpotLayerMaster___ctor(SpotLayerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27ECC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int___ctor__);
    byte_4C27ECC = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    440,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int___ctor__);
}


int32_t SpotLayerMaster__GetParentLayerBySpotId(SpotLayerMaster_o *this, int32_t spotId, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C27ECB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
    byte_4C27ECB = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         spotId,
         (const MethodInfo_3387DE4 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  if ( !v5 )
    return 0;
  if ( !entity )
    sub_1C2D6EC(v5, v6);
  return *(_DWORD *)((char *)&off_18 + (_QWORD)entity);
}