void __fastcall BattleFriendshipRewardInfo___ctor(BattleFriendshipRewardInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


GiftEntity_o *__fastcall BattleFriendshipRewardInfo__getGiftEntity(
        BattleFriendshipRewardInfo_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5D778 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D778 = 1;
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


bool __fastcall BattleFriendshipRewardInfo__isShow(BattleFriendshipRewardInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *v4; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4A5D779 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D779 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (Il2CppObject *)sub_1B88658(long___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_8;
  v4 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
    sub_1B88814(Instance, Instance);
  Instance[2].klass = (Il2CppClass *)this->fields.userSvtId;
  if ( !MasterData_object )
LABEL_8:
    sub_1B8880C(Instance, v4);
  return DataMasterBase__isEntityExistsFromId(
           (DataMasterBase_o *)MasterData_object,
           (System_Int64_array *)Instance,
           0LL);
}