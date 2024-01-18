void __fastcall SpotLayerMaster___ctor(SpotLayerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188BCF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int___ctor__, method);
    byte_4188BCF = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    432,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SpotLayerMaster__GetParentLayerBySpotId(
        SpotLayerMaster_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4188BCE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__, *(_QWORD *)&spotId);
    byte_4188BCE = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         spotId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  if ( !v5 )
    return 0;
  if ( !entity )
    sub_B2C434(v5, v6);
  return (int32_t)entity->fields.age;
}