void CommonConsumeEntity___ctor(CommonConsumeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE494 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEE494 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *CommonConsumeEntity__CreatePK(int32_t id, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4CEE490 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEE490 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           priority,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *CommonConsumeEntity__CreatePrimaryKey(CommonConsumeEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CommonConsumeEntity__CreatePK(this->fields.id, this->fields.priority, v2);
}


int32_t CommonConsumeEntity__GetCommonConsumeType(CommonConsumeEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


ItemEntity_o *CommonConsumeEntity__GetItemEntity(CommonConsumeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CEE492 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEE492 = 1;
  }
  if ( this->fields.type != 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v4);
  }
  return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           this->fields.objectId,
                           (const MethodInfo_342E2FC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
}


System_String_o *CommonConsumeEntity__GetName(CommonConsumeEntity_o *this, const MethodInfo *method)
{
  int32_t type; // w8
  ItemEntity_o *ItemEntity; // x0

  if ( (byte_4CEE493 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&string_TypeInfo);
    sub_1C7BAE8(&StringLiteral_2035/*"AP_TXT"*/);
    byte_4CEE493 = 1;
  }
  type = this->fields.type;
  if ( type == 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_2035/*"AP_TXT"*/, 0);
  }
  else if ( type == 1 && (ItemEntity = CommonConsumeEntity__GetItemEntity(this, method)) != 0 )
  {
    return ItemEntity->fields.name;
  }
  else
  {
    return string_TypeInfo->static_fields->Empty;
  }
}


int32_t CommonConsumeEntity__GetUserBuyableNum(CommonConsumeEntity_o *this, const MethodInfo *method)
{
  if ( this->fields.num < 1 )
    return 0;
  else
    return CommonConsumeEntity__GetUserHasNum(this, method) / this->fields.num;
}


int32_t CommonConsumeEntity__GetUserHasNum(CommonConsumeEntity_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x21
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t type; // w8
  UserItemMaster_o *v8; // x20
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEE491 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEE491 = 1;
  }
  entity = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  type = this->fields.type;
  if ( type == 2 )
  {
    if ( SelfUserGame )
      return UserGameEntity__getAct(SelfUserGame, 0);
  }
  else if ( type == 1 )
  {
    v8 = (UserItemMaster_o *)MasterData_object;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CE827C )
    {
      sub_1C7BAE8(&NetworkManager_TypeInfo);
      byte_4CE827C = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !v8 )
      goto LABEL_19;
    Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                  v8,
                                  &entity,
                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                  this->fields.objectId,
                                  0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
        return entity->fields.num;
LABEL_19:
      sub_1C7BD40(Instance, v5);
    }
  }
  return 0;
}


bool CommonConsumeEntity__IsType(CommonConsumeEntity_o *this, int32_t type, const MethodInfo *method)
{
  return this->fields.type == type;
}


bool CommonConsumeEntity__get_IsAp(CommonConsumeEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 2;
}


bool CommonConsumeEntity__get_IsItem(CommonConsumeEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 1;
}


int32_t CommonConsumeEntity__get_consumeType(CommonConsumeEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}