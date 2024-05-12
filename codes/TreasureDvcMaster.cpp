void __fastcall TreasureDvcMaster___ctor(TreasureDvcMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D689 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int___ctor__);
    byte_438D689 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    6,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int___ctor__);
}


TreasureDvcEntity_o *__fastcall TreasureDvcMaster__GetEntityCheckServantOverwrite(
        TreasureDvcMaster_o *this,
        int32_t svtId,
        int32_t treasureDeviceId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  int32_t ServantOverwriteTreasureDeviceId; // w0
  int32_t v10; // w1

  if ( (byte_438D68A & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantOverwriteMaster___);
    sub_B775C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438D68A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantOverwriteMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v8);
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
  return (TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                  v10,
                                  (const MethodInfo_21FB894 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
}