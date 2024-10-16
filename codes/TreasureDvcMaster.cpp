void __fastcall TreasureDvcMaster___ctor(TreasureDvcMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB68FE & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int___ctor__, method);
    byte_4AB68FE = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    6,
    (const MethodInfo_3163D50 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TreasureDvcEntity_o *__fastcall TreasureDvcMaster__GetEntityCheckServantOverwrite(
        TreasureDvcMaster_o *this,
        int32_t svtId,
        int32_t treasureDeviceId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int32_t ServantOverwriteTreasureDeviceId; // w0
  int32_t v12; // w1

  if ( (byte_4AB68FF & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantOverwriteMaster___, *(_QWORD *)&svtId);
    sub_1BAB41C(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v7);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4AB68FF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantOverwriteMaster___)) == 0LL )
  {
    sub_1BAB678(Instance, v10);
  }
  ServantOverwriteTreasureDeviceId = ServantOverwriteMaster__GetServantOverwriteTreasureDeviceId(
                                       (ServantOverwriteMaster_o *)Instance,
                                       svtId,
                                       1,
                                       0LL);
  if ( ServantOverwriteTreasureDeviceId )
    v12 = ServantOverwriteTreasureDeviceId;
  else
    v12 = treasureDeviceId;
  return (TreasureDvcEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  v12,
                                  (const MethodInfo_3163D90 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
}