void __fastcall UserGameMaster___ctor(UserGameMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186FFC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long___ctor__, method);
    byte_4186FFC = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    27,
    (const MethodInfo_24E425C *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long___ctor__);
}


bool __fastcall UserGameMaster__TryGetSelfUserGame(UserGameEntity_o **entity, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  __int64 v8; // x1

  if ( (byte_4186FFE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserGameMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetEntity__, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    byte_4186FFE = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserGameMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(UserId, v8);
  return DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
           Master_WarQuestSelectionMaster,
           (UserServantEntity_o **)entity,
           UserId,
           (const MethodInfo_24E4354 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetEntity__);
}


UserGameEntity_o *__fastcall UserGameMaster__getSelfUserGame(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x19

  if ( (byte_4186FFD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserGameMaster___, v1);
    sub_B2C35C(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__, v2);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4186FFD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserGameMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B2C434(Instance, v6);
  return (UserGameEntity_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                               MasterData_WarQuestSelectionMaster,
                               (int64_t)Instance,
                               (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
}