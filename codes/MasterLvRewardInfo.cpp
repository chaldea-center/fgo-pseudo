void __fastcall MasterLvRewardInfo___ctor(MasterLvRewardInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


GiftEntity_o *__fastcall MasterLvRewardInfo__getGiftEntity(MasterLvRewardInfo_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_438BB02 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438BB02 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  return GiftMaster__GetEntity(
           (GiftMaster_o *)Instance,
           this->fields.mstGiftId,
           this->fields.type,
           this->fields.objectId,
           0LL);
}