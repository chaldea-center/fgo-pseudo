void TreasureDvcMaster___ctor(TreasureDvcMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D5CD & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int___ctor__);
    byte_4D2D5CD = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    6,
    (const MethodInfo_345919C *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int___ctor__);
}


TreasureDvcEntity_o *TreasureDvcMaster__GetEntityCheckServantOverwrite(
        TreasureDvcMaster_o *this,
        int32_t svtId,
        int32_t treasureDeviceId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int32_t ServantOverwriteTreasureDeviceId; // w0
  int32_t v10; // w1

  if ( (byte_4D2D5CE & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantOverwriteMaster___);
    sub_1C94098(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D5CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantOverwriteMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v8);
  }
  ServantOverwriteTreasureDeviceId = ServantOverwriteMaster__GetServantOverwriteTreasureDeviceId(
                                       (ServantOverwriteMaster_o *)Instance,
                                       svtId,
                                       1,
                                       0);
  if ( ServantOverwriteTreasureDeviceId )
    v10 = ServantOverwriteTreasureDeviceId;
  else
    v10 = treasureDeviceId;
  return (TreasureDvcEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  v10,
                                  (const MethodInfo_345B4C0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
}