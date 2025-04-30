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

  if ( (byte_4A50D29 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_GiftMaster___, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4A50D29 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL )
  {
    sub_1B86614(Instance, v5);
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

  if ( (byte_4A50D2A & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__, v3);
    sub_1B863B8(&long___TypeInfo, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A50D2A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (Il2CppObject *)sub_1B86460(long___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_8;
  v7 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
    sub_1B8661C(Instance, Instance);
  Instance[2].klass = (Il2CppClass *)this->fields.userSvtId;
  if ( !MasterData_object )
LABEL_8:
    sub_1B86614(Instance, v7);
  return DataMasterBase_object__object__long___isEntityExistsFromId(
           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
           (System_Int64_array *)Instance,
           (const MethodInfo_3215DB8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
}