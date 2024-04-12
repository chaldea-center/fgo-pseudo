void __fastcall UserGameMaster___ctor(UserGameMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AEF5E & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long___ctor__);
    byte_42AEF5E = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    28,
    (const MethodInfo_23E2464 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long___ctor__);
}


bool __fastcall UserGameMaster__TryGetSelfUserGame(UserGameEntity_o **entity, const MethodInfo *method)
{
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  __int64 v5; // x1

  if ( (byte_42AEF60 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_UserGameMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetEntity__);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AEF60 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserGameMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    sub_B52A5C(UserId, v5);
  return DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
           Master_WarQuestSelectionMaster,
           (UserServantEntity_o **)entity,
           UserId,
           (const MethodInfo_23E255C *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetEntity__);
}


UserGameEntity_o *__fastcall UserGameMaster__getSelfUserGame(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x19

  if ( (byte_42AEF5F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserGameMaster___);
    sub_B52984(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEF5F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserGameMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B52A5C(Instance, v2);
  return (UserGameEntity_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                               MasterData_WarQuestSelectionMaster,
                               (int64_t)Instance,
                               (const MethodInfo_23E2500 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
}