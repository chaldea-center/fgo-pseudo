void __fastcall SpotLayerMaster___ctor(SpotLayerMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9261 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E9261 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    433,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int___ctor__);
}


int32_t __fastcall SpotLayerMaster__GetParentLayerBySpotId(
        SpotLayerMaster_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  _BOOL8 v6; // x0
  __int64 v7; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E9260 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__, spotId, (_DWORD)method, v3);
    byte_42E9260 = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         spotId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  if ( !v6 )
    return 0;
  if ( !entity )
    sub_B5D69C(v6, v7);
  return (int32_t)entity->fields.age;
}