void __fastcall MasterLvRewardInfo___ctor(MasterLvRewardInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


GiftEntity_o *__fastcall MasterLvRewardInfo__getGiftEntity(MasterLvRewardInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5DE36 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DE36 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  return GiftMaster__GetEntity(
           (GiftMaster_o *)Instance,
           this->fields.mstGiftId,
           this->fields.type,
           this->fields.objectId,
           0LL);
}