void BattleFriendshipRewardInfo___ctor(BattleFriendshipRewardInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


GiftEntity_o *BattleFriendshipRewardInfo__getGiftEntity(BattleFriendshipRewardInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5973539 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973539 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  return GiftMaster__GetEntity(
           (GiftMaster_o *)Instance,
           this->fields.mstGiftId,
           this->fields.type,
           this->fields.objectId,
           0);
}


bool BattleFriendshipRewardInfo__isShow(BattleFriendshipRewardInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *v4; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_597353A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597353A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (Il2CppObject *)sub_2213B20(long___TypeInfo, 1);
  if ( !Instance )
    goto LABEL_8;
  v4 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
    sub_2213CE4(Instance);
  Instance[2].klass = (Il2CppClass *)this->fields.userSvtId;
  if ( !MasterData_object )
LABEL_8:
    sub_2213CDC(Instance, v4);
  return DataMasterBase_object__object__long___isEntityExistsFromId(
           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
           (System_Int64_array *)Instance,
           (const MethodInfo_3F12868 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
}