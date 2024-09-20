void __fastcall TreasureDvcMaster___ctor(TreasureDvcMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BCFC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int___ctor__);
    byte_4A5BCFC = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    6,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int___ctor__);
}


TreasureDvcEntity_o *__fastcall TreasureDvcMaster__GetEntityCheckServantOverwrite(
        TreasureDvcMaster_o *this,
        int32_t svtId,
        int32_t treasureDeviceId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int32_t ServantOverwriteTreasureDeviceId; // w0
  int32_t v10; // w1

  if ( (byte_4A5BCFD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantOverwriteMaster___);
    sub_1B885B0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BCFD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantOverwriteMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v8);
  }
  ServantOverwriteTreasureDeviceId = ServantOverwriteMaster__GetServantOverwriteTreasureDeviceId(
                                       (ServantOverwriteMaster_o *)Instance,
                                       svtId,
                                       1,
                                       0LL);
  if ( ServantOverwriteTreasureDeviceId )
    v10 = ServantOverwriteTreasureDeviceId;
  else
    v10 = treasureDeviceId;
  return (TreasureDvcEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  v10,
                                  (const MethodInfo_311D934 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
}