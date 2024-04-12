void __fastcall BattleFriendshipRewardInfo___ctor(BattleFriendshipRewardInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


GiftEntity_o *__fastcall BattleFriendshipRewardInfo__getGiftEntity(
        BattleFriendshipRewardInfo_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AD1CC & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AD1CC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v4);
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
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v4; // x1
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v7; // x0

  if ( (byte_42AD1CD & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&long___TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AD1CD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (WebViewManager_o *)sub_B5299C(long___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_8;
  v4 = Instance;
  if ( !LODWORD(Instance->fields.basePanel) )
  {
    v7 = sub_B52A88(Instance);
    sub_B52A28(v7, 0LL);
  }
  Instance->fields.baseWindow = (struct UIWidget_o *)this->fields.userSvtId;
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_8:
    sub_B52A5C(Instance, v4);
  return DataMasterBase__isEntityExistsFromId(MasterData_WarQuestSelectionMaster, (System_Int64_array *)Instance, 0LL);
}