void __fastcall UserPresentBoxEntity___ctor(UserPresentBoxEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BEBD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BEBD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserPresentBoxEntity__CreatePK(
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  if ( (byte_4A5BEB8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_long__long___);
    byte_4A5BEB8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           receiveUserId,
           presentId,
           (const MethodInfo_2E7DCB8 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
}


System_String_o *__fastcall UserPresentBoxEntity__CreatePrimaryKey(
        UserPresentBoxEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserPresentBoxEntity__CreatePK(this->fields.receiveUserId, this->fields.presentId, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserPresentBoxEntity__GetCountText(
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
  if ( (byte_4A5BEBC & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_860/*"+"*/);
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    this = (UserPresentBoxEntity_o *)sub_1B885B0(&StringLiteral_25163/*"×"*/);
    byte_4A5BEBC = 1;
  }
  if ( gType == 2 )
  {
    if ( !itemEnt )
      sub_1B8880C(this, *(_QWORD *)&gType);
    IsCountableWithPlus = ItemType__IsCountableWithPlus(itemEnt->fields.type, 0LL);
  }
  else
  {
    IsCountableWithPlus = (unsigned int)(gType - 3) < 2;
  }
  v8 = &StringLiteral_860/*"+"*/;
  if ( !IsCountableWithPlus )
    v8 = &StringLiteral_25163/*"×"*/;
  v9 = (System_String_o *)*v8;
  v10 = System_Int32__ToString_62512312((int32_t)&v12, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL);
  return System_String__Concat_61707032(v9, v10, 0LL);
}


void __fastcall UserPresentBoxEntity__GetInfo(
        UserPresentBoxEntity_o *this,
        System_String_o **nameText,
        System_String_o **countText,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  System_String_o *Name; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x1
  ItemEntity_o *v15; // x22
  UserPresentBoxEntity_o *v16; // x0
  const MethodInfo *v17; // x4
  int32_t giftType; // w1
  int32_t num; // w3
  ItemEntity_o *v20; // x2
  __int64 *v21; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v22; // x22
  LocalizationManager_c *v23; // x0
  System_String_o *unknownNameText; // x1
  int32_t objectId; // w21
  ServantCostumeEntity_o *Entity; // x21
  System_String_o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  System_String_o *v31; // x0

  if ( (byte_4A5BEB9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_6488/*"FRIENDSHIP_NAME"*/);
    sub_1B885B0(&StringLiteral_14831/*"USER_EXP_NAME"*/);
    sub_1B885B0(&StringLiteral_8679/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BEB9 = 1;
  }
  switch ( this->fields.giftType )
  {
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_47;
      Name = ServantEntity__getName((ServantEntity_o *)Instance, 0, -1, 0LL);
      goto LABEL_44;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_47;
      v14 = (System_String_o *)*((_QWORD *)Instance + 3);
      v15 = (ItemEntity_o *)Instance;
      *nameText = v14;
      sub_1B88554((ServantStatusBattleListViewItem_o *)nameText, (int32_t)v14, v12, v13);
      giftType = this->fields.giftType;
      num = this->fields.num;
      v20 = v15;
      goto LABEL_45;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = &StringLiteral_6488/*"FRIENDSHIP_NAME"*/;
      goto LABEL_18;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = &StringLiteral_14831/*"USER_EXP_NAME"*/;
LABEL_18:
      Name = LocalizationManager__Get((System_String_o *)*v21, 0LL);
      goto LABEL_44;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_47;
      v22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Instance + 4);
      goto LABEL_41;
    case 9:
      objectId = this->fields.objectId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_47;
      Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Instance, objectId / 100, objectId % 100, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8679/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, 0LL);
      if ( !Entity )
        goto LABEL_47;
      v27 = System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity->fields.name, 0LL);
      LODWORD(unknownNameText) = (_DWORD)v27;
      *nameText = v27;
      goto LABEL_36;
    case 0xB:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___)) == 0LL
        || (Instance = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                         this->fields.objectId,
                         (const MethodInfo_311D934 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
      {
LABEL_47:
        sub_1B8880C(Instance, v8);
      }
      v22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Instance + 6);
LABEL_41:
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46485644(v22, 0LL);
LABEL_44:
      *nameText = Name;
      sub_1B88554((ServantStatusBattleListViewItem_o *)nameText, (int32_t)Name, v10, v11);
      giftType = this->fields.giftType;
      num = this->fields.num;
      v20 = 0LL;
LABEL_45:
      v31 = UserPresentBoxEntity__GetCountText(v16, giftType, v20, num, v17);
      v30 = (int)v31;
      *countText = v31;
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4A56A2D )
      {
        sub_1B885B0(&LocalizationManager_TypeInfo);
        byte_4A56A2D = 1;
      }
      v23 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v23 = LocalizationManager_TypeInfo;
      }
      unknownNameText = v23->static_fields->unknownNameText;
      *nameText = unknownNameText;
LABEL_36:
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)nameText,
        (int32_t)unknownNameText,
        (int32_t)countText,
        (int32_t)method);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      v30 = (int)StringLiteral_1/*""*/;
      break;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)countText, v30, v28, v29);
}


bool __fastcall UserPresentBoxEntity__IsEnableFlag(
        UserPresentBoxEntity_o *this,
        int32_t flagIndex,
        const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields.flag & (1 << flagIndex)) < 0) ^ v3 | ((this->fields.flag & (1 << flagIndex)) == 0));
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserPresentBoxEntity__IsExpired(
        UserPresentBoxEntity_o *this,
        bool checkItemExpireTime,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int64_t Time; // x20
  const MethodInfo *v8; // x1
  int64_t v10; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5BEBB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BEBB = 1;
  }
  entity = 0LL;
  if ( !checkItemExpireTime || this->fields.giftType != 2 )
    goto LABEL_13;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          this->fields.objectId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
LABEL_13:
    v10 = UserPresentBoxEntity__expireAt(this, (const MethodInfo *)checkItemExpireTime);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    return v10 <= NetworkManager__getTime(0LL);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)UserPresentBoxEntity__expireAt(this, v8);
  if ( (__int64)Instance <= Time )
    return 1;
  if ( !entity )
LABEL_21:
    sub_1B8880C(Instance, v6);
  return (__int64)entity[6].klass <= Time;
}


int64_t __fastcall UserPresentBoxEntity__expireAt(UserPresentBoxEntity_o *this, const MethodInfo *method)
{
  UserPresentBoxMaster_c *v3; // x0
  BalanceConfig_c *v4; // x0
  BalanceConfig_c *v6; // x0
  int64_t createdAt; // x19

  if ( (byte_4A5BEBA & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&UserPresentBoxMaster_TypeInfo);
    byte_4A5BEBA = 1;
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