void __fastcall UserAccountLinkageMaster___ctor(UserAccountLinkageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438CAA5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long___ctor__);
    byte_438CAA5 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    490,
    (const MethodInfo_21FBA20 *)Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long___ctor__);
}


bool __fastcall UserAccountLinkageMaster__TryGetSelfUserAccountLinkage(
        UserAccountLinkageEntity_o **entity,
        const MethodInfo *method)
{
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  __int64 v5; // x1

  if ( (byte_438CAA7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_UserAccountLinkageMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long__TryGetEntity__);
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438CAA7 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserAccountLinkageMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7769C(UserId, v5);
  return DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
           Master_WarQuestSelectionMaster,
           (UserServantEntity_o **)entity,
           UserId,
           (const MethodInfo_21FBB18 *)Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long__TryGetEntity__);
}


UserAccountLinkageEntity_o *__fastcall UserAccountLinkageMaster__getSelfUserAccountLinkage(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x19

  if ( (byte_438CAA6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserAccountLinkageMaster___);
    sub_B775C4(&Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long__GetEntity__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438CAA6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserAccountLinkageMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B7769C(Instance, v2);
  return (UserAccountLinkageEntity_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                         MasterData_WarQuestSelectionMaster,
                                         (int64_t)Instance,
                                         (const MethodInfo_21FBABC *)Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long__GetEntity__);
}