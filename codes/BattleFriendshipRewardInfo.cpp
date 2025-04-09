void __fastcall BattleFriendshipRewardInfo___ctor(BattleFriendshipRewardInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


GiftEntity_o *__fastcall BattleFriendshipRewardInfo__getGiftEntity(
        BattleFriendshipRewardInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_49BD656 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_GiftMaster___, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49BD656 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL )
  {
    sub_1B4D1EC(Instance, v5);
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
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *v7; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_49BD657 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B4CF90(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__, v3);
    sub_1B4CF90(&long___TypeInfo, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49BD657 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (Il2CppObject *)sub_1B4D038(long___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_8;
  v7 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
    sub_1B4D1F4(Instance, Instance);
  Instance[2].klass = (Il2CppClass *)this->fields.userSvtId;
  if ( !MasterData_object )
LABEL_8:
    sub_1B4D1EC(Instance, v7);
  return DataMasterBase_object__object__long___isEntityExistsFromId(
           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
           (System_Int64_array *)Instance,
           (const MethodInfo_319F4D4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
}