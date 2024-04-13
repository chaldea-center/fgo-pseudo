void __fastcall UserGameMaster___ctor(UserGameMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7156 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long___ctor__, (_DWORD)method, v2, v3);
    byte_42E7156 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    28,
    (const MethodInfo_23FAF9C *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long___ctor__);
}


bool __fastcall UserGameMaster__TryGetSelfUserGame(UserGameEntity_o **entity, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  __int64 v16; // x1

  if ( (byte_42E7158 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserGameMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    byte_42E7158 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserGameMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(UserId, v16);
  return DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
           Master_WarQuestSelectionMaster,
           (UserServantEntity_o **)entity,
           UserId,
           (const MethodInfo_23FB094 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetEntity__);
}


UserGameEntity_o *__fastcall UserGameMaster__getSelfUserGame(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x19

  if ( (byte_42E7157 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserGameMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__, v4, v5, v6);
    sub_B5D5C4(&NetworkManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E7157 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserGameMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B5D69C(Instance, v14);
  return (UserGameEntity_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                               MasterData_WarQuestSelectionMaster,
                               (int64_t)Instance,
                               (const MethodInfo_23FB038 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
}