void __fastcall CommonConsumeEntity___ctor(CommonConsumeEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16012 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16012 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CommonConsumeEntity__CreatePK(int32_t id, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4B1600E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority, method);
    byte_4B1600E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           priority,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B16010 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16010 = 1;
  }
  if ( this->fields.type != 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           this->fields.objectId,
                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
}


System_String_o *__fastcall CommonConsumeEntity__GetName(CommonConsumeEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t type; // w8
  ItemEntity_o *ItemEntity; // x0

  if ( (byte_4B16011 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&string_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_2152/*"AP_TXT"*/, v6, v7);
    byte_4B16011 = 1;
  }
  type = this->fields.type;
  if ( type == 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    return LocalizationManager__Get((System_String_o *)StringLiteral_2152/*"AP_TXT"*/, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UserGameEntity_o *SelfUserGame; // x21
  int64_t Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x1
  int32_t type; // w8
  UserItemMaster_o *v14; // x20
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1600F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1600F = 1;
  }
  entity = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  type = this->fields.type;
  if ( type == 2 )
  {
    if ( SelfUserGame )
      return UserGameEntity__getAct(SelfUserGame, 0LL);
  }
  else if ( type == 1 )
  {
    v14 = (UserItemMaster_o *)MasterData_object;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v14 )
      goto LABEL_16;
    Instance = UserItemMaster__TryGetEntity(v14, &entity, Instance, this->fields.objectId, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( entity )
        return entity->fields.num;
LABEL_16:
      sub_1BCAA3C(Instance, v10);
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