void UserPresentBoxEntity___ctor(UserPresentBoxEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC830C & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC830C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserPresentBoxEntity__CreatePK(int64_t receiveUserId, int64_t presentId, const MethodInfo *method)
{
  if ( (byte_4CC8307 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_long__long___);
    byte_4CC8307 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           receiveUserId,
           presentId,
           (const MethodInfo_3149420 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
}


System_String_o *UserPresentBoxEntity__CreatePrimaryKey(UserPresentBoxEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserPresentBoxEntity__CreatePK(this->fields.receiveUserId, this->fields.presentId, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *UserPresentBoxEntity__GetCountText(
        UserPresentBoxEntity_o *this,
        int32_t gType,
        ItemEntity_o *itemEnt,
        int32_t num,
        const MethodInfo *method)
{
  bool IsCountableWithPlus; // w0
  __int64 *v8; // x8
  System_String_o *v9; // x19
  System_String_o *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = num;
  if ( (byte_4CC830B & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_800/*"+"*/);
    sub_1C713B0(&StringLiteral_9233/*"N0"*/);
    this = (UserPresentBoxEntity_o *)sub_1C713B0(&StringLiteral_25397/*"×"*/);
    byte_4CC830B = 1;
  }
  if ( gType == 2 )
  {
    if ( !itemEnt )
      sub_1C71608(this, *(_QWORD *)&gType);
    IsCountableWithPlus = ItemType__IsCountableWithPlus(itemEnt->fields.type, 0);
  }
  else
  {
    IsCountableWithPlus = (unsigned int)(gType - 3) < 2;
  }
  v8 = &StringLiteral_800/*"+"*/;
  if ( !IsCountableWithPlus )
    v8 = &StringLiteral_25397/*"×"*/;
  v9 = (System_String_o *)*v8;
  v10 = System_Int32__ToString_65540220((int32_t)&v12, (System_String_o *)StringLiteral_9233/*"N0"*/, 0);
  return System_String__Concat_64031724(v9, v10, 0);
}


void UserPresentBoxEntity__GetInfo(
        UserPresentBoxEntity_o *this,
        System_String_o **nameText,
        System_String_o **countText,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  void *Instance; // x0
  __int64 v12; // x1
  System_String_o *Name; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_String_o *v26; // x1
  ItemEntity_o *v27; // x22
  UserPresentBoxEntity_o *v28; // x0
  const MethodInfo *v29; // x4
  int32_t giftType; // w1
  int32_t num; // w3
  ItemEntity_o *v32; // x2
  __int64 *v33; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v34; // x22
  LocalizationManager_c *v35; // x0
  System_String_o *unknownNameText; // x1
  int32_t objectId; // w21
  ServantCostumeEntity_o *Entity; // x21
  System_String_o *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  int32_t v46; // w1
  System_String_o *v47; // x0

  if ( (byte_4CC8308 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_6514/*"FRIENDSHIP_NAME"*/);
    sub_1C713B0(&StringLiteral_14850/*"USER_EXP_NAME"*/);
    sub_1C713B0(&StringLiteral_8712/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8308 = 1;
  }
  switch ( this->fields.giftType )
  {
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_47;
      Name = ServantEntity__getName((ServantEntity_o *)Instance, 0, -1, 0, 0);
      goto LABEL_44;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_3408E80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_47;
      v26 = (System_String_o *)*((_QWORD *)Instance + 3);
      v27 = (ItemEntity_o *)Instance;
      *nameText = v26;
      sub_1C71354((GrandQuestFolderBoardItem_o *)nameText, (int32_t)v26, v20, v21, v22, v23, v24, v25);
      giftType = this->fields.giftType;
      num = this->fields.num;
      v32 = v27;
      goto LABEL_45;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v33 = &StringLiteral_6514/*"FRIENDSHIP_NAME"*/;
      goto LABEL_18;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v33 = &StringLiteral_14850/*"USER_EXP_NAME"*/;
LABEL_18:
      Name = LocalizationManager__Get((System_String_o *)*v33, 0);
      goto LABEL_44;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_3408E80 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_47;
      v34 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Instance + 4);
      goto LABEL_41;
    case 9:
      objectId = this->fields.objectId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_47;
      Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Instance, objectId / 100, objectId % 100, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8712/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, 0);
      if ( !Entity )
        goto LABEL_47;
      v39 = System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity->fields.name, 0);
      LODWORD(unknownNameText) = (_DWORD)v39;
      *nameText = v39;
      goto LABEL_36;
    case 0xB:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_CommandCodeMaster___)) == 0
        || (Instance = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                         this->fields.objectId,
                         (const MethodInfo_3408E80 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0 )
      {
LABEL_47:
        sub_1C71608(Instance, v12);
      }
      v34 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Instance + 6);
LABEL_41:
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49333796(v34, 0);
LABEL_44:
      *nameText = Name;
      sub_1C71354((GrandQuestFolderBoardItem_o *)nameText, (int32_t)Name, v14, v15, v16, v17, v18, v19);
      giftType = this->fields.giftType;
      num = this->fields.num;
      v32 = 0;
LABEL_45:
      v47 = UserPresentBoxEntity__GetCountText(v28, giftType, v32, num, v29);
      v46 = (int)v47;
      *countText = v47;
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4CC26AA )
      {
        sub_1C713B0(&LocalizationManager_TypeInfo);
        byte_4CC26AA = 1;
      }
      v35 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v35 = LocalizationManager_TypeInfo;
      }
      unknownNameText = v35->static_fields->unknownNameText;
      *nameText = unknownNameText;
LABEL_36:
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)nameText,
        (int32_t)unknownNameText,
        (int32_t)countText,
        (int32_t)method,
        v4,
        v5,
        v6,
        v7);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      v46 = StringLiteral_1/*""*/;
      break;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)countText, v46, v40, v41, v42, v43, v44, v45);
}


bool UserPresentBoxEntity__IsEnableFlag(UserPresentBoxEntity_o *this, int32_t flagIndex, const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields.flag & (1 << flagIndex)) < 0) ^ v3 | ((this->fields.flag & (1 << flagIndex)) == 0));
}


// local variable allocation has failed, the output may be wrong!
bool UserPresentBoxEntity__IsExpired(UserPresentBoxEntity_o *this, bool checkItemExpireTime, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int64_t Time; // x20
  const MethodInfo *v8; // x1
  int64_t v10; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC830A & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C713B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC830A = 1;
  }
  entity = 0;
  if ( !checkItemExpireTime || this->fields.giftType != 2 )
    goto LABEL_13;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          this->fields.objectId,
          (const MethodInfo_3408ECC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
LABEL_13:
    v10 = UserPresentBoxEntity__expireAt(this, (const MethodInfo *)checkItemExpireTime);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    return v10 <= NetworkManager__getTime(0);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  Instance = (DataManager_o *)UserPresentBoxEntity__expireAt(this, v8);
  if ( (__int64)Instance <= Time )
    return 1;
  if ( !entity )
LABEL_21:
    sub_1C71608(Instance, v6);
  return (__int64)entity[6].klass <= Time;
}


int64_t UserPresentBoxEntity__expireAt(UserPresentBoxEntity_o *this, const MethodInfo *method)
{
  UserPresentBoxMaster_c *v3; // x0
  BalanceConfig_c *v4; // x0
  BalanceConfig_c *v6; // x0
  int64_t createdAt; // x19

  if ( (byte_4CC8309 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&UserPresentBoxMaster_TypeInfo);
    byte_4CC8309 = 1;
  }
  v3 = UserPresentBoxMaster_TypeInfo;
  if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
    v3 = UserPresentBoxMaster_TypeInfo;
  }
  if ( ((1 << v3->static_fields->INDEFINITE_PERIOD) & this->fields.flag) < 1 )
  {
    v6 = BalanceConfig_TypeInfo;
    createdAt = this->fields.createdAt;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = BalanceConfig_TypeInfo;
    }
    return createdAt + v6->static_fields->PresentBoxValidTime;
  }
  else
  {
    v4 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v4 = BalanceConfig_TypeInfo;
    }
    return v4->static_fields->NoneExpireTime;
  }
}