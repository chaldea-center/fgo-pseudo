void __fastcall TreasureDvcMaster___ctor(TreasureDvcMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41899E9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int___ctor__, method);
    byte_41899E9 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    6,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int___ctor__);
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
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  int32_t ServantOverwriteTreasureDeviceId; // w0
  int32_t v12; // w1

  if ( (byte_41899EA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantOverwriteMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_41899EA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantOverwriteMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v10);
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
  return (TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                  v12,
                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
}