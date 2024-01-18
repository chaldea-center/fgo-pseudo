void __fastcall BattleFriendshipRewardInfo___ctor(BattleFriendshipRewardInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


GiftEntity_o *__fastcall BattleFriendshipRewardInfo__getGiftEntity(
        BattleFriendshipRewardInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4184BA7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4184BA7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return GiftMaster__GetEntity(
           (GiftMaster_o *)Instance,
           this->fields.mstGiftId,
           this->fields.type,
           this->fields.objectId,
           0LL);
}


bool __fastcall BattleFriendshipRewardInfo__isShow(BattleFriendshipRewardInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v6; // x1
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v9; // x0

  if ( (byte_4184BA8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B2C35C(&long___TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4184BA8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (WebViewManager_o *)sub_B2C374(long___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_8;
  v6 = Instance;
  if ( !LODWORD(Instance->fields.basePanel) )
  {
    v9 = sub_B2C460(Instance);
    sub_B2C400(v9, 0LL);
  }
  Instance->fields.baseWindow = (struct UIWidget_o *)this->fields.userSvtId;
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_8:
    sub_B2C434(Instance, v6);
  return DataMasterBase__isEntityExistsFromId(MasterData_WarQuestSelectionMaster, (System_Int64_array *)Instance, 0LL);
}