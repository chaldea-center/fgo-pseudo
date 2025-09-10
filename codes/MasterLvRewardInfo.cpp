void MasterLvRewardInfo___ctor(MasterLvRewardInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


GiftEntity_o *MasterLvRewardInfo__getGiftEntity(MasterLvRewardInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C2A47F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2A47F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v4);
  }
  return GiftMaster__GetEntity(
           (GiftMaster_o *)Instance,
           this->fields.mstGiftId,
           this->fields.type,
           this->fields.objectId,
           0);
}