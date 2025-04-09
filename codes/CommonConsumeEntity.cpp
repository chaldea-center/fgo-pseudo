void __fastcall CommonConsumeEntity___ctor(CommonConsumeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BAC7E & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BAC7E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CommonConsumeEntity__CreatePK(int32_t id, int32_t priority, const MethodInfo *method)
{
  if ( (byte_49BAC7A & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_49BAC7A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           priority,
           (const MethodInfo_2EFFCAC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CommonConsumeEntity__CreatePrimaryKey(
        CommonConsumeEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CommonConsumeEntity__CreatePK(this->fields.id, this->fields.priority, v2);
}


int32_t __fastcall CommonConsumeEntity__GetCommonConsumeType(CommonConsumeEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


ItemEntity_o *__fastcall CommonConsumeEntity__GetItemEntity(CommonConsumeEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_49BAC7C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_1B4CF90(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49BAC7C = 1;
  }
  if ( this->fields.type != 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_1B4D1EC(Instance, v6);
  }
  return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           this->fields.objectId,
                           (const MethodInfo_319D99C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
}


System_String_o *__fastcall CommonConsumeEntity__GetName(CommonConsumeEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t type; // w8
  ItemEntity_o *ItemEntity; // x0

  if ( (byte_49BAC7D & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, method);
    sub_1B4CF90(&string_TypeInfo, v3);
    sub_1B4CF90(&StringLiteral_2048/*"AP_TXT"*/, v4);
    byte_49BAC7D = 1;
  }
  type = this->fields.type;
  if ( type == 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_2048/*"AP_TXT"*/, 0LL);
  }
  else if ( type == 1 && (ItemEntity = CommonConsumeEntity__GetItemEntity(this, method)) != 0LL )
  {
    return ItemEntity->fields.name;
  }
  else
  {
    return string_TypeInfo->static_fields->Empty;
  }
}


int32_t __fastcall CommonConsumeEntity__GetUserBuyableNum(CommonConsumeEntity_o *this, const MethodInfo *method)
{
  if ( this->fields.num < 1 )
    return 0;
  else
    return CommonConsumeEntity__GetUserHasNum(this, method) / this->fields.num;
}


int32_t __fastcall CommonConsumeEntity__GetUserHasNum(CommonConsumeEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserGameEntity_o *SelfUserGame; // x21
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t type; // w8
  UserItemMaster_o *v10; // x20
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BAC7B & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_1B4CF90(&NetworkManager_TypeInfo, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49BAC7B = 1;
  }
  entity = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserItemMaster___);
  type = this->fields.type;
  if ( type == 2 )
  {
    if ( SelfUserGame )
      return UserGameEntity__getAct(SelfUserGame, 0LL);
  }
  else if ( type == 1 )
  {
    v10 = (UserItemMaster_o *)MasterData_object;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_49B57A5 )
    {
      sub_1B4CF90(&NetworkManager_TypeInfo, v7);
      byte_49B57A5 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !v10 )
      goto LABEL_19;
    Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                  v10,
                                  &entity,
                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                  this->fields.objectId,
                                  0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
        return entity->fields.num;
LABEL_19:
      sub_1B4D1EC(Instance, v7);
    }
  }
  return 0;
}


bool __fastcall CommonConsumeEntity__IsType(CommonConsumeEntity_o *this, int32_t type, const MethodInfo *method)
{
  return this->fields.type == type;
}


bool __fastcall CommonConsumeEntity__get_IsAp(CommonConsumeEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 2;
}


bool __fastcall CommonConsumeEntity__get_IsItem(CommonConsumeEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 1;
}


int32_t __fastcall CommonConsumeEntity__get_consumeType(CommonConsumeEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}