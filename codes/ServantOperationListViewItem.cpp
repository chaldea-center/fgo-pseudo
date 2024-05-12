void __fastcall ServantOperationListViewItem___ctor(
        ServantOperationListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userServantEntity,
        System_Int64_array *partyUserServantIds,
        System_Int64_array *partyUserEquipIds,
        bool isFavorite,
        const MethodInfo *method)
{
  IconLabelInfo_o *v13; // x25
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  IconLabelInfo_o *v20; // x25
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x4
  DataManager_o *Instance; // x0
  __int64 v33; // x1
  int64_t saveNameList_low; // x8
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int64 rarity; // x20
  __int64 masterCheckName_low; // x21
  __int64 lv; // x22
  struct UserServantEntity_o *v39; // x8
  __int64 v40; // x20
  __int64 v41; // x21
  struct UserServantEntity_o *v42; // x8
  int32_t adjustHp; // w20
  UserServantEntity_o *v44; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  const MethodInfo *v59; // x1
  int64_t UserSvtId; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_438F245 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B775C4(&IconLabelInfo_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438F245 = 1;
  }
  v13 = (IconLabelInfo_o *)sub_B77694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0LL);
  this->fields.iconLabelInfo1 = v13;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (IconLabelInfo_o *)sub_B77694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v20, 0LL);
  this->fields.iconLabelInfo2 = v20;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ListViewItem___ctor_24167012((ListViewItem_o *)this, index, 0LL);
  ServantOperationListViewItem__Init(this, index, v27);
  ServantOperationListViewItem__SetServantData(this, userServantEntity, v28);
  ServantOperationListViewItem__SetCommandCodeData(this, 0LL, v29);
  ServantOperationListViewItem__SetData(this, 1, v30);
  ServantOperationListViewItem__SetServantUses(this, 1, partyUserServantIds, partyUserEquipIds, v31);
  this->fields._IsFavorite_k__BackingField = isFavorite;
  this->fields.amountSortValue = -1LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                this->fields.classId,
                                (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_21;
  saveNameList_low = SLODWORD(Instance->fields.saveNameList);
  Instance = (DataManager_o *)this->fields.servantEntity;
  this->fields.priority = saveNameList_low;
  this->fields.sortValue1B = saveNameList_low;
  if ( !Instance )
    goto LABEL_21;
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_21;
  rarity = (unsigned int)this->fields.rarity;
  masterCheckName_low = SLODWORD(Instance[1].fields.masterCheckName);
  lv = UserServantEntity_k__BackingField->fields.lv;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Instance, 0LL);
  v39 = this->fields._UserServantEntity_k__BackingField;
  this->fields.sortValue2 = (masterCheckName_low << 16) | (rarity << 48) | (2 * lv) | (unsigned __int8)Instance & 1;
  if ( !v39 )
    goto LABEL_21;
  v41 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
  v40 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v61.fields.currentCryptoKey = v41;
  *(_QWORD *)&v61.fields.fakeValue = v40;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v61, 0LL);
  v42 = this->fields._UserServantEntity_k__BackingField;
  this->fields.sortValue2B = (int)Instance;
  if ( !v42 )
    goto LABEL_21;
  adjustHp = v42->fields.adjustHp;
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    v42 = this->fields._UserServantEntity_k__BackingField;
  }
  this->fields.hpReinforceValue = Instance[1].fields.saveNameList[7].fields._size * adjustHp;
  if ( !v42 )
    goto LABEL_21;
  this->fields.atkReinforceValue = HIDWORD(Instance[1].fields.saveNameList[7].fields._items) * v42->fields.adjustAtk;
  UserServantEntity__getAdjustMaxData(
    v42,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (DataManager_o *)this->fields._UserServantEntity_k__BackingField;
  if ( !Instance
    || (Instance = (DataManager_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL),
        v44 = this->fields._UserServantEntity_k__BackingField,
        this->fields.dispLimitCount = (int)Instance,
        !v44)
    || (SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v44, -1, 0LL),
        this->fields.skillCategoryIdList = SkillCategoryIdList,
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51),
        (Instance = (DataManager_o *)this->fields._UserServantEntity_k__BackingField) == 0LL) )
  {
LABEL_21:
    sub_B7769C(Instance, v33);
  }
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(this, v59);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
}


void __fastcall ServantOperationListViewItem___ctor_32886172(
        ServantOperationListViewItem_o *this,
        int32_t index,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        bool isEquiped,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x23
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  IconLabelInfo_o *v16; // x23
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x4
  __int64 v28; // x0
  __int64 v29; // x1
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v31; // x20
  __int64 v32; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_438F246 & 1) == 0 )
  {
    sub_B775C4(&IconLabelInfo_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438F246 = 1;
  }
  v9 = (IconLabelInfo_o *)sub_B77694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0LL);
  this->fields.iconLabelInfo1 = v9;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (IconLabelInfo_o *)sub_B77694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0LL);
  this->fields.iconLabelInfo2 = v16;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  ListViewItem___ctor_24167012((ListViewItem_o *)this, index, 0LL);
  ServantOperationListViewItem__Init(this, index, v23);
  ServantOperationListViewItem__SetServantData(this, 0LL, v24);
  ServantOperationListViewItem__SetCommandCodeData(this, userCommandCodeEntity, v25);
  ServantOperationListViewItem__SetData(this, 2, v26);
  ServantOperationListViewItem__SetServantUses(this, 2, 0LL, 0LL, v27);
  commandCodeEntity = this->fields.commandCodeEntity;
  this->fields._IsCommandCodeEquiped_k__BackingField = isEquiped;
  this->fields.amountSortValue = -1LL;
  if ( !commandCodeEntity )
    sub_B7769C(v28, v29);
  v32 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v31 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v33.fields.currentCryptoKey = v32;
  *(_QWORD *)&v33.fields.fakeValue = v31;
  this->fields.sortValue1B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v33, 0LL);
}


void __fastcall ServantOperationListViewItem__ClearIconLabelInfo(
        ServantOperationListViewItem_o *this,
        IconLabelInfo_o *iconLabelInfo,
        const MethodInfo *method)
{
  IconLabelInfo_o *v4; // x0

  if ( (byte_438F255 & 1) == 0 )
  {
    sub_B775C4(&IconLabelInfo_TypeInfo);
    byte_438F255 = 1;
  }
  if ( iconLabelInfo )
  {
    IconLabelInfo__Clear(iconLabelInfo, 0LL);
  }
  else
  {
    v4 = (IconLabelInfo_o *)sub_B77694(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v4, 0LL);
  }
}


int32_t __fastcall ServantOperationListViewItem__GetAttribute(
        ServantOperationListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  if ( type != 1 )
    return 0;
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_10;
  if ( servantEntity->fields.type == 2 )
    return 1;
  this = (ServantOperationListViewItem_o *)this->fields._UserServantEntity_k__BackingField;
  if ( !this )
LABEL_10:
    sub_B7769C(this, type);
  if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)this, 0LL) )
    return 2;
  else
    return 0;
}


int32_t __fastcall ServantOperationListViewItem__GetClassId(
        ServantOperationListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  if ( type != 1 )
    return -1;
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_B7769C(this, type);
  return servantEntity->fields.classId;
}


int32_t __fastcall ServantOperationListViewItem__GetFriendship(
        ServantOperationListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  int32_t result; // w0
  int64_t Instance; // x0
  __int64 v7; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v9; // q1
  UserServantCollectionMaster_o *v10; // x20
  struct UserServantEntity_o *v11; // x8
  int64_t v12; // x21
  __int64 v13; // x22
  __int64 v14; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-50h]
  int32_t friendshipRank; // [xsp+4Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_438F251 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438F251 = 1;
  }
  result = 0;
  friendshipRank = 0;
  if ( type == 1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_17;
    v9 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.userId.fields.fakeValue;
    v10 = (UserServantCollectionMaster_o *)Instance;
    *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v16.fields.fakeValue = v9;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v15 = v16;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v15, 0LL);
    v11 = this->fields._UserServantEntity_k__BackingField;
    if ( !v11 )
      goto LABEL_17;
    v12 = Instance;
    v14 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v18.fields.currentCryptoKey = v14;
    *(_QWORD *)&v18.fields.fakeValue = v13;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v18, 0LL);
    if ( !v10 || (Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v10, v12, Instance, 0LL)) == 0 )
LABEL_17:
      sub_B7769C(Instance, v7);
    UserServantCollectionEntity__getFriendShipRankInfo(
      (UserServantCollectionEntity_o *)Instance,
      &friendshipRank,
      &this->fields.friendshipMax,
      0LL);
    return friendshipRank;
  }
  return result;
}


bool __fastcall ServantOperationListViewItem__GetIconLabelInfoData1(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        int32_t *iconKind,
        int32_t *dataValue,
        int32_t *adjustDataValue,
        int64_t *time,
        const MethodInfo *method)
{
  ServantOperationListViewItem_o *v12; // x21
  struct UserServantEntity_o *v13; // x8
  int32_t adjustHp; // w8
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  int64_t createdAt; // x8
  struct UserServantEntity_o *v17; // x8
  struct UserServantEntity_o *v18; // x8
  struct UserServantEntity_o *v19; // x8
  struct UserServantEntity_o *v20; // x8
  __int64 v21; // x22
  __int64 v22; // x23
  struct ServantEntity_o *servantEntity; // x8
  bool result; // w0
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v12 = this;
  if ( (byte_438F24C & 1) == 0 )
  {
    this = (ServantOperationListViewItem_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438F24C = 1;
  }
  *dataValue = 0;
  *adjustDataValue = 0;
  *time = 0LL;
  if ( !sort )
LABEL_40:
    sub_B7769C(this, sort);
  switch ( sort->fields.sortKind )
  {
    case 1:
      *iconKind = 49;
      UserServantEntity_k__BackingField = v12->fields._UserServantEntity_k__BackingField;
      if ( UserServantEntity_k__BackingField )
      {
        createdAt = UserServantEntity_k__BackingField->fields.createdAt;
      }
      else
      {
        UserCommandCodeEntity_k__BackingField = v12->fields._UserCommandCodeEntity_k__BackingField;
        if ( !UserCommandCodeEntity_k__BackingField )
          return 1;
        createdAt = UserCommandCodeEntity_k__BackingField->fields.createdAt;
      }
      *time = createdAt;
      return 1;
    case 2:
    case 3:
    case 8:
    case 0xE:
      if ( !v12->fields._UserServantEntity_k__BackingField )
        goto LABEL_35;
      *iconKind = 2;
      v13 = v12->fields._UserServantEntity_k__BackingField;
      if ( !v13 )
        goto LABEL_40;
      *dataValue = v13->fields.lv;
      this = (ServantOperationListViewItem_o *)v12->fields._UserServantEntity_k__BackingField;
      if ( !this )
        goto LABEL_40;
      *adjustDataValue = UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      return 1;
    case 4:
      if ( !v12->fields._UserServantEntity_k__BackingField )
        goto LABEL_35;
      *iconKind = 33;
      this = (ServantOperationListViewItem_o *)v12->fields._UserServantEntity_k__BackingField;
      if ( !this )
        goto LABEL_40;
      UserServantEntity__getTreasureDeviceInfo_21836884((UserServantEntity_o *)this, dataValue, adjustDataValue, 0LL);
      return 1;
    case 5:
      if ( !v12->fields._UserServantEntity_k__BackingField )
        goto LABEL_35;
      *iconKind = 3;
      v17 = v12->fields._UserServantEntity_k__BackingField;
      if ( !v17 )
        goto LABEL_40;
      *dataValue = v17->fields.hp;
      v18 = v12->fields._UserServantEntity_k__BackingField;
      if ( !v18 )
        goto LABEL_40;
      adjustHp = v18->fields.adjustHp;
      goto LABEL_31;
    case 6:
      if ( !v12->fields._UserServantEntity_k__BackingField )
        goto LABEL_35;
      *iconKind = 5;
      v19 = v12->fields._UserServantEntity_k__BackingField;
      if ( !v19 )
        goto LABEL_40;
      *dataValue = v19->fields.atk;
      v20 = v12->fields._UserServantEntity_k__BackingField;
      if ( !v20 )
        goto LABEL_40;
      adjustHp = v20->fields.adjustAtk;
LABEL_31:
      *adjustDataValue = adjustHp;
      return 1;
    case 7:
      if ( !v12->fields._UserServantEntity_k__BackingField )
        goto LABEL_35;
      *iconKind = 7;
      servantEntity = v12->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_40;
      *dataValue = servantEntity->fields.cost;
      return 1;
    case 0xA:
      if ( !v12->fields._UserServantEntity_k__BackingField )
        goto LABEL_35;
      *iconKind = 32;
      v21 = *(_QWORD *)&v12->fields.friendship.fields.currentCryptoKey;
      v22 = *(_QWORD *)&v12->fields.friendship.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v26.fields.currentCryptoKey = v21;
      *(_QWORD *)&v26.fields.fakeValue = v22;
      *dataValue = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v26, 0LL);
      adjustHp = v12->fields.friendshipMax;
      goto LABEL_31;
    case 0xF:
      if ( !v12->fields._UserServantEntity_k__BackingField )
        goto LABEL_35;
      *iconKind = 44;
      *dataValue = v12->fields.hpReinforceValue;
      adjustHp = v12->fields.nowMaxHpReinforceValue;
      goto LABEL_31;
    case 0x10:
      if ( !v12->fields._UserServantEntity_k__BackingField )
        goto LABEL_35;
      *iconKind = 45;
      *dataValue = v12->fields.atkReinforceValue;
      adjustHp = v12->fields.nowMaxAtkReinforceValue;
      goto LABEL_31;
    default:
LABEL_35:
      result = 0;
      *iconKind = -1;
      return result;
  }
}


bool __fastcall ServantOperationListViewItem__GetIconLabelInfoData2(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        int32_t *iconKind,
        int32_t *dataValue,
        int32_t *adjustDataValue,
        const MethodInfo *method)
{
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  unsigned int sortKind; // w9
  struct UserServantEntity_o *v9; // x8
  int32_t LevelMax; // w0

  *iconKind = -1;
  *dataValue = 0;
  *adjustDataValue = 0;
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
  {
    if ( !sort )
      goto LABEL_10;
    sortKind = sort->fields.sortKind;
    if ( (sortKind & 0xFFFFFFFC) == 4
      || (LOBYTE(UserServantEntity_k__BackingField) = 0, sortKind <= 0x10) && ((1 << sortKind) & 0x18002) != 0 )
    {
      *iconKind = 2;
      v9 = this->fields._UserServantEntity_k__BackingField;
      if ( v9 )
      {
        *dataValue = v9->fields.lv;
        this = (ServantOperationListViewItem_o *)this->fields._UserServantEntity_k__BackingField;
        if ( this )
        {
          LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
          LOBYTE(UserServantEntity_k__BackingField) = 1;
          *adjustDataValue = LevelMax;
          return (char)UserServantEntity_k__BackingField;
        }
      }
LABEL_10:
      sub_B7769C(this, sort);
    }
  }
  return (char)UserServantEntity_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__GetIsCommandCardOpenServant(
        ServantOperationListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0
  int64_t Instance; // x0
  __int64 v7; // x1
  UserServantCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct ServantEntity_o *v9; // x8
  int64_t v10; // x19
  __int64 v11; // x21
  __int64 v12; // x22
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_438F254 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438F254 = 1;
  }
  entity = 0LL;
  if ( type != 1 )
    goto LABEL_18;
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    if ( ServantEntity__get_IsServant(servantEntity, 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_20;
      MasterData_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Instance,
                                                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      v9 = this->fields.servantEntity;
      if ( !v9 )
        goto LABEL_20;
      v10 = Instance;
      v12 = *(_QWORD *)&v9->fields.id.fields.currentCryptoKey;
      v11 = *(_QWORD *)&v9->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v15.fields.currentCryptoKey = v12;
      *(_QWORD *)&v15.fields.fakeValue = v11;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v15, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_20;
      if ( UserServantCommandCodeMaster__TryGetEntity(
             MasterData_WarQuestSelectionMaster,
             &entity,
             v10,
             (int)Instance,
             0LL) )
      {
        Instance = (int64_t)entity;
        if ( entity )
        {
          LOBYTE(servantEntity) = UserServantCommandCodeEntity__IsCommandCardSlotOpen(entity, 0LL);
          return (unsigned __int8)servantEntity & 1;
        }
LABEL_20:
        sub_B7769C(Instance, v7);
      }
    }
LABEL_18:
    LOBYTE(servantEntity) = 0;
  }
  return (unsigned __int8)servantEntity & 1;
}


bool __fastcall ServantOperationListViewItem__GetIsDispInfo(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int32_t sortKind; // w8
  unsigned int v4; // w8
  _BOOL4 v5; // w0

  if ( !sort )
    sub_B7769C(this, 0LL);
  sortKind = sort->fields.sortKind;
  if ( sortKind > 7 )
  {
    v4 = sortKind - 10;
    if ( v4 < 7 )
      return (0x1Eu >> v4) & 1;
LABEL_8:
    LOBYTE(v5) = 1;
    return v5;
  }
  LOBYTE(v5) = 0;
  if ( sortKind != 4 && sortKind != 7 )
    goto LABEL_8;
  return v5;
}


bool __fastcall ServantOperationListViewItem__GetIsEquippedCommandCodeServant(
        ServantOperationListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0
  int64_t Instance; // x0
  __int64 v7; // x1
  UserServantCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct ServantEntity_o *v9; // x8
  int64_t v10; // x19
  __int64 v11; // x21
  __int64 v12; // x22
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_438F253 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438F253 = 1;
  }
  entity = 0LL;
  if ( type != 1 )
    goto LABEL_18;
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    if ( ServantEntity__get_IsServant(servantEntity, 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_20;
      MasterData_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Instance,
                                                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      v9 = this->fields.servantEntity;
      if ( !v9 )
        goto LABEL_20;
      v10 = Instance;
      v12 = *(_QWORD *)&v9->fields.id.fields.currentCryptoKey;
      v11 = *(_QWORD *)&v9->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v15.fields.currentCryptoKey = v12;
      *(_QWORD *)&v15.fields.fakeValue = v11;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v15, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_20;
      if ( UserServantCommandCodeMaster__TryGetEntity(
             MasterData_WarQuestSelectionMaster,
             &entity,
             v10,
             (int)Instance,
             0LL) )
      {
        Instance = (int64_t)entity;
        if ( entity )
        {
          LOBYTE(servantEntity) = UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0LL);
          return (unsigned __int8)servantEntity & 1;
        }
LABEL_20:
        sub_B7769C(Instance, v7);
      }
    }
LABEL_18:
    LOBYTE(servantEntity) = 0;
  }
  return (unsigned __int8)servantEntity & 1;
}


int32_t __fastcall ServantOperationListViewItem__GetPartyIndex(
        ServantOperationListViewItem_o *this,
        int64_t userServantId,
        System_Int64_array *ids,
        bool isEquip,
        const MethodInfo *method)
{
  signed int max_length; // w9
  __int64 v7; // x0
  __int64 v8; // x0

  if ( !ids )
    sub_B7769C(this, userServantId);
  max_length = ids->max_length;
  if ( max_length < 1 )
  {
LABEL_7:
    LODWORD(v7) = -1;
  }
  else
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v7 >= max_length )
      {
        v8 = sub_B776C8(v7);
        sub_B77668(v8, 0LL);
      }
      if ( ids->m_Items[(int)v7] == userServantId )
        break;
      v7 = (unsigned int)(v7 + 1);
      if ( (int)v7 >= max_length )
        goto LABEL_7;
    }
    this->fields._IsPartyEquip_k__BackingField = isEquip;
    this->fields._IsUse_k__BackingField = isEquip;
    this->fields._IsParty_k__BackingField = !isEquip;
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantOperationListViewItem__GetRarity(
        ServantOperationListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  void *UserCommandCodeEntity_k__BackingField; // x0
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  ServantLimitMaster_o *v7; // x20
  int32_t SvtId_k__BackingField; // w19
  __int64 v9; // x21
  __int64 v10; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_438F250 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438F250 = 1;
  }
  if ( type == 2 )
  {
    UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
    if ( !UserCommandCodeEntity_k__BackingField )
      goto LABEL_16;
    return UserCommandCodeEntity__GetRarity((UserCommandCodeEntity_o *)UserCommandCodeEntity_k__BackingField, 0LL);
  }
  else
  {
    if ( type == 1 )
    {
      UserCommandCodeEntity_k__BackingField = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( UserCommandCodeEntity_k__BackingField )
      {
        UserCommandCodeEntity_k__BackingField = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)UserCommandCodeEntity_k__BackingField,
                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
        if ( UserServantEntity_k__BackingField )
        {
          v7 = (ServantLimitMaster_o *)UserCommandCodeEntity_k__BackingField;
          SvtId_k__BackingField = this->fields._SvtId_k__BackingField;
          v10 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCount.fields.currentCryptoKey;
          v9 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCount.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v12.fields.currentCryptoKey = v10;
          *(_QWORD *)&v12.fields.fakeValue = v9;
          UserCommandCodeEntity_k__BackingField = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                            v12,
                                                            0LL);
          if ( v7 )
          {
            UserCommandCodeEntity_k__BackingField = ServantLimitMaster__GetEntity(
                                                      v7,
                                                      SvtId_k__BackingField,
                                                      (int32_t)UserCommandCodeEntity_k__BackingField,
                                                      0LL);
            if ( UserCommandCodeEntity_k__BackingField )
              return *((_DWORD *)UserCommandCodeEntity_k__BackingField + 6);
          }
        }
      }
LABEL_16:
      sub_B7769C(UserCommandCodeEntity_k__BackingField, *(_QWORD *)&type);
    }
    return -1;
  }
}


int64_t __fastcall ServantOperationListViewItem__GetSortValue0(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        bool isDispChoice,
        int64_t *sortValue0B,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0

  *sortValue0B = 0LL;
  if ( !sort )
    sub_B7769C(this, 0LL);
  if ( !sort->fields.isSmartSort )
  {
    if ( !sort->fields.isChoiceSort || !isDispChoice )
      return 0LL;
    return -10LL;
  }
  if ( sort->fields.isChoiceSort && isDispChoice )
  {
    *sortValue0B = -10LL;
    return -70LL;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity && ServantEntity__get_IsKeepServantEquip(servantEntity, 0LL) )
  {
    if ( !this->fields._IsSwapLock_k__BackingField != this->fields._IsLock_k__BackingField
      && !this->fields._IsNotSelection_k__BackingField )
    {
      if ( this->fields._IsSwapChoice_k__BackingField != this->fields._IsChoice_k__BackingField )
        return -20LL;
      return 0LL;
    }
    return -10LL;
  }
  if ( this->fields._IsSwapLock_k__BackingField != this->fields._IsLock_k__BackingField )
    return -10LL;
  if ( this->fields._IsSwapChoice_k__BackingField != this->fields._IsChoice_k__BackingField )
    return -20LL;
  if ( (this->fields.partyIndex & 0x80000000) == 0 )
    return -30LL;
  if ( this->fields.attribute )
    return -40LL;
  if ( this->fields._IsFavorite_k__BackingField )
    return -50LL;
  if ( !this->fields._IsUseSupportServant_k__BackingField )
  {
    if ( this->fields._IsPush_k__BackingField )
      return -70LL;
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    if ( (!UserServantEntity_k__BackingField
       || !UserServantEntity__IsProtectedEventServant(UserServantEntity_k__BackingField, 0LL))
      && !this->fields.isFortification )
    {
      return 0LL;
    }
    return -10LL;
  }
  return -60LL;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantOperationListViewItem__GetSortValue1(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        int32_t dataValue,
        const MethodInfo *method)
{
  ServantOperationListViewItem_o *v6; // x19
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v8; // q1
  __int128 *v9; // x0
  __int64 v10; // x10
  struct ServantEntity_o *servantEntity; // x8
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v13; // q1
  unsigned __int64 amountSortValue; // x21
  __int64 v15; // x10
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 rarity; // x22
  __int64 v18; // x19
  __int64 v19; // x20
  __int128 v20[2]; // [xsp+0h] [xbp-80h] BYREF
  __int128 v21[2]; // [xsp+20h] [xbp-60h] BYREF
  __int128 v22; // [xsp+40h] [xbp-40h]
  __int128 v23; // [xsp+50h] [xbp-30h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v6 = this;
  if ( (byte_438F24D & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantOperationListViewItem_o *)sub_B775C4(&ServantOperationListViewManager_TypeInfo);
    byte_438F24D = 1;
  }
  if ( !sort )
    goto LABEL_40;
  this = 0LL;
  switch ( sort->fields.sortKind )
  {
    case 1:
      UserServantEntity_k__BackingField = v6->fields._UserServantEntity_k__BackingField;
      if ( UserServantEntity_k__BackingField )
      {
        v8 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
        v22 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
        v23 = v8;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v9 = v21;
        v21[0] = v22;
        v21[1] = v23;
      }
      else
      {
        UserCommandCodeEntity_k__BackingField = v6->fields._UserCommandCodeEntity_k__BackingField;
        if ( !UserCommandCodeEntity_k__BackingField )
          return 0LL;
        v13 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
        v22 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
        v23 = v13;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v9 = v20;
        v20[0] = v22;
        v20[1] = v23;
      }
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
               (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v9,
               0LL);
    case 2:
      return v6->fields.rarity;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 0xA:
    case 0xF:
    case 0x10:
      return dataValue;
    case 8:
      this = (ServantOperationListViewItem_o *)-v6->fields.priority;
      v6->fields.sortValue1 = (int64_t)this;
      return (int64_t)this;
    case 0xE:
      if ( v6->fields._UserServantEntity_k__BackingField )
      {
        this = (ServantOperationListViewItem_o *)v6->fields.amountSortValue;
        if ( ((unsigned __int64)this & 0x8000000000000000LL) != 0 )
        {
          this = (ServantOperationListViewItem_o *)sort->fields.manager;
          if ( !this )
            goto LABEL_40;
          v10 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1);
          if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v10
            || (ServantOperationListViewManager_c *)this->klass->_2.typeHierarchy[v10 - 1] != ServantOperationListViewManager_TypeInfo )
          {
            goto LABEL_40;
          }
          this = (ServantOperationListViewItem_o *)ServantOperationListViewManager__GetAmountSortValue(
                                                     (ServantOperationListViewManager_o *)this,
                                                     v6->fields._SvtId_k__BackingField,
                                                     *(const MethodInfo **)&dataValue);
          v6->fields.amountSortValue = (int64_t)this;
        }
        servantEntity = v6->fields.servantEntity;
        if ( servantEntity )
          return (((unsigned __int64)(unsigned int)v6->fields.rarity << 32) + ((_QWORD)this << 48)) | servantEntity->fields.collectionNo;
LABEL_40:
        sub_B7769C(this, sort);
      }
      if ( !v6->fields._UserCommandCodeEntity_k__BackingField )
        return 0LL;
      amountSortValue = v6->fields.amountSortValue;
      if ( (amountSortValue & 0x8000000000000000LL) != 0 )
      {
        this = (ServantOperationListViewItem_o *)sort->fields.manager;
        if ( !this )
          goto LABEL_40;
        v15 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1);
        if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v15
          || (ServantOperationListViewManager_c *)this->klass->_2.typeHierarchy[v15 - 1] != ServantOperationListViewManager_TypeInfo )
        {
          goto LABEL_40;
        }
        this = (ServantOperationListViewItem_o *)ServantOperationListViewManager__GetCommandCodeAmountSortValue(
                                                   (ServantOperationListViewManager_o *)this,
                                                   v6->fields._CommandCodeId_k__BackingField,
                                                   *(const MethodInfo **)&dataValue);
        amountSortValue = (unsigned __int64)this;
        v6->fields.amountSortValue = (int64_t)this;
      }
      commandCodeEntity = v6->fields.commandCodeEntity;
      if ( !commandCodeEntity )
        goto LABEL_40;
      rarity = (unsigned int)v6->fields.rarity;
      v19 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
      v18 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v24.fields.currentCryptoKey = v19;
      *(_QWORD *)&v24.fields.fakeValue = v18;
      return ((rarity << 32) + (amountSortValue << 48)) | CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                            v24,
                                                            0LL);
    default:
      return (int64_t)this;
  }
}


void __fastcall ServantOperationListViewItem__Init(
        ServantOperationListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  IconLabelInfo_o *iconLabelInfo1; // x8
  ServantOperationListViewItem_o *v5; // x0
  const MethodInfo *v6; // x2

  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields.index = index;
  ServantOperationListViewItem__ClearIconLabelInfo(this, iconLabelInfo1, method);
  ServantOperationListViewItem__ClearIconLabelInfo(v5, this->fields.iconLabelInfo2, v6);
  this->fields._IsParty_k__BackingField = 0;
  *(_WORD *)&this->fields._IsSwapLock_k__BackingField = 0;
  *(_DWORD *)&this->fields._IsPartyEquip_k__BackingField = 0;
  *(_WORD *)&this->fields._IsFavorite_k__BackingField = 0;
  *(_WORD *)&this->fields._IsMaterialTdSvt_k__BackingField = 0;
  *(_DWORD *)&this->fields._IsEquippedCommandCodeServant_k__BackingField = 0;
  this->fields._DragSelectNum_k__BackingField = -1;
  *(_QWORD *)&this->fields.hpReinforceValue = 0LL;
  *(_QWORD *)&this->fields.nowMaxHpReinforceValue = 0LL;
}


bool __fastcall ServantOperationListViewItem__IsMatchCommandCodeFilter(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  Voice_BATTLE_array *RarityFilterKindList; // x0
  __int64 v8; // x0

  if ( (byte_438F24B & 1) == 0 )
  {
    sub_B775C4(&FilterKindList_TypeInfo);
    sub_B775C4(&ListViewSort_FilterKind___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_438F24B = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_19;
  RarityFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_19;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.commandCodeCategoryIdList, sort, 0LL) )
  {
    return 0;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
LABEL_19:
    sub_B7769C(RarityFilterKindList, sort);
  if ( !RarityFilterKindList->max_length )
  {
    v8 = sub_B776C8(RarityFilterKindList);
    sub_B77668(v8, 0LL);
  }
  RarityFilterKindList->m_Items[1] = 39;
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
      || !ListViewSort__GetFilter(sort, 39, 0LL)
      || !this->fields._IsSwapChoice_k__BackingField == this->fields._IsChoice_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__IsMatchFilter(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  ServantEntity_o *servantEntity; // x0

  if ( ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
    return 1;
  if ( this->fields.commandCodeEntity )
  {
    if ( ServantOperationListViewItem__IsMatchCommandCodeFilter(this, sort, v5) )
      return 1;
  }
  else
  {
    servantEntity = this->fields.servantEntity;
    if ( servantEntity && ServantEntity__get_IsKeepServantEquip(servantEntity, 0LL) )
    {
      if ( ServantOperationListViewItem__IsMatchServantEquipFilter(this, sort, v5) )
        return 1;
    }
    else if ( ServantOperationListViewItem__IsMatchServantFilter(this, sort, v5) )
    {
      return 1;
    }
  }
  return 0;
}


bool __fastcall ServantOperationListViewItem__IsMatchServantEquipFilter(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  Voice_BATTLE_array *RarityFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  bool IsMatchServantEquipCombineStatusFilter; // w8
  bool result; // w0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  bool HaveStatusFilter; // w8
  __int64 v16; // x0

  if ( (byte_438F24A & 1) == 0 )
  {
    sub_B775C4(&FilterKindList_TypeInfo);
    sub_B775C4(&ListViewSort_FilterKind___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_438F24A = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  RarityFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_38;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v7 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v7->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                          (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v9->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL) )
  {
    IsMatchServantEquipCombineStatusFilter = ListViewSort__IsMatchServantEquipCombineStatusFilter(
                                               sort,
                                               this->fields._UserServantEntity_k__BackingField,
                                               this->fields.servantEntity,
                                               0,
                                               0LL);
    result = 0;
    if ( !IsMatchServantEquipCombineStatusFilter )
      return result;
  }
  v13 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v13->static_fields->ServantEquipHaveStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL) )
  {
    HaveStatusFilter = ListViewSort__IsMatchServantEquipHaveStatusFilter(
                         sort,
                         this->fields._UserServantEntity_k__BackingField,
                         this->fields.servantEntity,
                         0,
                         0LL);
    result = 0;
    if ( !HaveStatusFilter )
      return result;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
LABEL_38:
    sub_B7769C(RarityFilterKindList, sort);
  if ( !RarityFilterKindList->max_length )
  {
    v16 = sub_B776C8(RarityFilterKindList);
    sub_B77668(v16, 0LL);
  }
  RarityFilterKindList->m_Items[1] = 39;
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
      || !ListViewSort__GetFilter(sort, 39, 0LL)
      || !this->fields._IsSwapChoice_k__BackingField == this->fields._IsChoice_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__IsMatchServantFilter(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x21
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v20; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v36; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v38; // w0
  __int64 v39; // x0

  if ( (byte_438F249 & 1) == 0 )
  {
    sub_B775C4(&FilterKindList_TypeInfo);
    sub_B775C4(&ListViewSort_FilterKind___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_438F249 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                        (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_67;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                            (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields._UserServantEntity_k__BackingField, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v11->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields._UserServantEntity_k__BackingField, 0LL) )
  {
    return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v13->static_fields->ServantTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_67:
    sub_B7769C(ClassGroupFilterKindList, sort);
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
    && !ListViewSort__IsMatchServantTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    if ( UserServantEntity_k__BackingField )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(UserServantEntity_k__BackingField, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields._UserServantEntity_k__BackingField;
        if ( !ClassGroupFilterKindList )
          goto LABEL_67;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v20 = this->fields._UserServantEntity_k__BackingField;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v20 )
          goto LABEL_67;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v20, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
        ClassGroupFilterKindList = (__int64)this->fields._UserServantEntity_k__BackingField;
        if ( !ClassGroupFilterKindList )
          goto LABEL_67;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
      }
    }
    ClassGroupFilterKindList = sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_68;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_68:
      v39 = sub_B776C8(ClassGroupFilterKindList);
      sub_B77668(v39, 0LL);
    }
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v36 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v38 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v36) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v38 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v38 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_68;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields._IsSwapChoice_k__BackingField == this->fields._IsChoice_k__BackingField )
  {
    return 0;
  }
  v15 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v15->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v16, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall ServantOperationListViewItem__ModifyChoiceItem(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  bool IsChoice; // w0
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x0

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
  {
    IsChoice = UserServantEntity__IsChoice(UserServantEntity_k__BackingField, 0LL);
LABEL_5:
    this->fields._IsChoice_k__BackingField = IsChoice;
    goto LABEL_6;
  }
  UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
  if ( UserCommandCodeEntity_k__BackingField )
  {
    IsChoice = UserCommandCodeEntity__IsChoice(UserCommandCodeEntity_k__BackingField, 0LL);
    goto LABEL_5;
  }
LABEL_6:
  this->fields._IsSwapChoice_k__BackingField = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewItem__ModifyItem(
        ServantOperationListViewItem_o *this,
        bool isFavorite,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  this->fields._IsFavorite_k__BackingField = isFavorite;
  this->fields._DragSelectNum_k__BackingField = -1;
  ServantOperationListViewItem__ModifyLockItem(this, (const MethodInfo *)isFavorite);
  ServantOperationListViewItem__ModifyChoiceItem(this, v4);
  ServantOperationListViewItem__ModifyPushItem(this, v5);
}


void __fastcall ServantOperationListViewItem__ModifyLockItem(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  bool IsLock; // w0
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x0

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
  {
    IsLock = UserServantEntity__IsLock(UserServantEntity_k__BackingField, 0LL);
LABEL_5:
    this->fields._IsLock_k__BackingField = IsLock;
    goto LABEL_6;
  }
  UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
  if ( UserCommandCodeEntity_k__BackingField )
  {
    IsLock = UserCommandCodeEntity__IsLock(UserCommandCodeEntity_k__BackingField, 0LL);
    goto LABEL_5;
  }
LABEL_6:
  this->fields._IsSwapLock_k__BackingField = 0;
}


void __fastcall ServantOperationListViewItem__ModifyPushItem(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v6; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-30h]

  if ( (byte_438F248 & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438F248 = 1;
  }
  if ( this->fields._UserServantEntity_k__BackingField )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame || (UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField) == 0LL )
      sub_B7769C(SelfUserGame, v4);
    v6 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
    pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
    *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v9.fields.fakeValue = v6;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v8 = v9;
    this->fields._IsPush_k__BackingField = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                              &v8,
                                                              0LL);
  }
}


void __fastcall ServantOperationListViewItem__SetCommandCodeData(
        ServantOperationListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_UserCommandCodeEntity_k__BackingField; // x0
  __int64 v11; // x20
  __int64 v12; // x21
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  struct CommandCodeEntity_o *Entity; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  struct CommandCodeEntity_o **p_commandCodeEntity; // x19
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_438F24F & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B775C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438F24F = 1;
  }
  p_UserCommandCodeEntity_k__BackingField = (BattleServantConfConponent_o *)&this->fields._UserCommandCodeEntity_k__BackingField;
  if ( userCommandCodeEntity )
  {
    p_UserCommandCodeEntity_k__BackingField->klass = (BattleServantConfConponent_c *)userCommandCodeEntity;
    sub_B77560(
      p_UserCommandCodeEntity_k__BackingField,
      (System_Int32_array **)userCommandCodeEntity,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v12 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v30.fields.currentCryptoKey = v12;
    *(_QWORD *)&v30.fields.fakeValue = v11;
    this->fields._CommandCodeId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                    v30,
                                                    0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    if ( !Instance
      || (Entity = (struct CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                                   this->fields._CommandCodeId_k__BackingField,
                                                   (const MethodInfo_21FB894 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__),
          this->fields.commandCodeEntity = Entity,
          sub_B77560(
            (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
            (System_Int32_array **)Entity,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21),
          (Instance = (DataManager_o *)this->fields._UserCommandCodeEntity_k__BackingField) == 0LL)
      || (Instance = (DataManager_o *)UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0LL),
          UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField,
          this->fields._IsLock_k__BackingField = (unsigned __int8)Instance & 1,
          !UserCommandCodeEntity_k__BackingField) )
    {
LABEL_13:
      sub_B7769C(Instance, v14);
    }
    this->fields._IsChoice_k__BackingField = UserCommandCodeEntity__IsChoice(UserCommandCodeEntity_k__BackingField, 0LL);
    this->fields._IsPush_k__BackingField = 0;
  }
  else
  {
    this->fields._UserCommandCodeEntity_k__BackingField = 0LL;
    sub_B77560(p_UserCommandCodeEntity_k__BackingField, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    this->fields.commandCodeEntity = 0LL;
    p_commandCodeEntity = &this->fields.commandCodeEntity;
    sub_B77560((BattleServantConfConponent_o *)p_commandCodeEntity, 0LL, v24, v25, v26, v27, v28, v29);
    *((_DWORD *)p_commandCodeEntity + 2) = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewItem__SetData(
        ServantOperationListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  ServantOperationListViewItem_o *v4; // x19
  struct ServantEntity_o *servantEntity; // x8
  int classId; // w8
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  int32_t Friendship; // w21
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  v4 = this;
  if ( (byte_438F247 & 1) == 0 )
  {
    this = (ServantOperationListViewItem_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438F247 = 1;
  }
  if ( type == 1 )
  {
    servantEntity = v4->fields.servantEntity;
    if ( !servantEntity )
      sub_B7769C(this, *(_QWORD *)&type);
    classId = servantEntity->fields.classId;
  }
  else
  {
    classId = -1;
  }
  v4->fields.classId = classId;
  v4->fields.rarity = ServantOperationListViewItem__GetRarity(v4, type, method);
  v4->fields.attribute = ServantOperationListViewItem__GetAttribute(v4, type, v7);
  Friendship = ServantOperationListViewItem__GetFriendship(v4, type, v8);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v4->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(Friendship, 0LL);
  v4->fields._IsEquippedCommandCodeServant_k__BackingField = ServantOperationListViewItem__GetIsEquippedCommandCodeServant(
                                                               v4,
                                                               type,
                                                               v10);
  v4->fields._IsCommandCardOpenServant_k__BackingField = ServantOperationListViewItem__GetIsCommandCardOpenServant(
                                                           v4,
                                                           type,
                                                           v11);
}


void __fastcall ServantOperationListViewItem__SetIconInfoLabel(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  IconLabelInfo_o *iconLabelInfo1; // x0
  ListViewSort_o *v5; // x20
  const MethodInfo *v6; // x6
  const MethodInfo *v7; // x5
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  const MethodInfo *v9; // x4
  const MethodInfo *v10; // x3
  ServantOperationListViewItem_o *SortValue1; // x0
  const MethodInfo *v12; // x2
  ServantEntity_o *servantEntity; // x0
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF
  int32_t iconKind[2]; // [xsp+10h] [xbp-30h] BYREF
  int64_t time; // [xsp+18h] [xbp-28h] BYREF
  int32_t adjustDataValue; // [xsp+24h] [xbp-1Ch] BYREF
  int32_t dataValue[2]; // [xsp+28h] [xbp-18h] BYREF

  *(_QWORD *)dataValue = 0LL;
  adjustDataValue = 0;
  *(_QWORD *)iconKind = 0LL;
  time = 0LL;
  v14 = 0;
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  if ( !iconLabelInfo1 )
    goto LABEL_26;
  v5 = sort;
  IconLabelInfo__Clear(iconLabelInfo1, 0LL);
  iconLabelInfo1 = this->fields.iconLabelInfo2;
  if ( !iconLabelInfo1 )
    goto LABEL_26;
  IconLabelInfo__Clear(iconLabelInfo1, 0LL);
  this->fields.isNeedAdjustIconLabelScale = 0;
  iconLabelInfo1 = (IconLabelInfo_o *)ServantOperationListViewItem__GetIconLabelInfoData1(
                                        this,
                                        v5,
                                        &dataValue[1],
                                        dataValue,
                                        &adjustDataValue,
                                        &time,
                                        v6);
  if ( ((unsigned __int8)iconLabelInfo1 & 1) != 0 )
  {
    if ( !v5 )
      goto LABEL_26;
    iconLabelInfo1 = this->fields.iconLabelInfo1;
    sort = (ListViewSort_o *)(unsigned int)dataValue[1];
    if ( v5->fields.sortKind == 1 )
    {
      if ( !iconLabelInfo1 )
        goto LABEL_26;
      IconLabelInfo__SetTime(iconLabelInfo1, dataValue[1], time, 0, 0, 0, 0LL);
      UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
      if ( UserServantEntity_k__BackingField && UserServantEntity__IsMaterialTd(UserServantEntity_k__BackingField, 0LL) )
        this->fields.isNeedAdjustIconLabelScale = 1;
    }
    else
    {
      if ( !iconLabelInfo1 )
        goto LABEL_26;
      IconLabelInfo__Set_28141596(iconLabelInfo1, dataValue[1], dataValue[0], adjustDataValue, 0, 0, 0, 0, 0LL);
    }
  }
  if ( ServantOperationListViewItem__GetIconLabelInfoData2(this, v5, &iconKind[1], iconKind, &v14, v7) )
  {
    iconLabelInfo1 = this->fields.iconLabelInfo2;
    if ( !iconLabelInfo1 )
      goto LABEL_26;
    IconLabelInfo__Set_28141596(iconLabelInfo1, iconKind[1], iconKind[0], v14, 0, 0, 0, 0, 0LL);
  }
  this->fields.sortValue0 = ServantOperationListViewItem__GetSortValue0(
                              this,
                              v5,
                              this->fields._IsSwapChoice_k__BackingField != this->fields._IsChoice_k__BackingField,
                              &this->fields.sortValue0B,
                              v9);
  SortValue1 = (ServantOperationListViewItem_o *)ServantOperationListViewItem__GetSortValue1(
                                                   this,
                                                   v5,
                                                   dataValue[0],
                                                   v10);
  this->fields.sortValue1 = (int64_t)SortValue1;
  if ( !ServantOperationListViewItem__GetIsDispInfo(SortValue1, v5, v12) )
  {
    servantEntity = this->fields.servantEntity;
    if ( servantEntity )
    {
      if ( !ServantEntity__get_IsExpUp(servantEntity, 0LL) )
      {
        iconLabelInfo1 = (IconLabelInfo_o *)this->fields.servantEntity;
        if ( !iconLabelInfo1 )
          goto LABEL_26;
        if ( !ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo1, 0LL) )
        {
          iconLabelInfo1 = (IconLabelInfo_o *)this->fields.servantEntity;
          if ( !iconLabelInfo1 )
            goto LABEL_26;
          if ( !ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)iconLabelInfo1, 0LL) )
            return;
        }
      }
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      if ( iconLabelInfo1 )
      {
        IconLabelInfo__Clear(iconLabelInfo1, 0LL);
        iconLabelInfo1 = this->fields.iconLabelInfo2;
        if ( iconLabelInfo1 )
        {
          IconLabelInfo__Clear(iconLabelInfo1, 0LL);
          return;
        }
      }
LABEL_26:
      sub_B7769C(iconLabelInfo1, sort);
    }
  }
}


void __fastcall ServantOperationListViewItem__SetServantData(
        ServantOperationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UserServantEntity_o **p_UserServantEntity_k__BackingField; // x20
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct UserServantEntity_o *v13; // x8
  __int64 v14; // x21
  __int64 v15; // x22
  struct ServantEntity_o *Entity; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  UserServantEntity_o *v24; // x8
  bool IsMaterialTd; // w8
  bool IsFriendShipSvtEq_k__BackingField; // w9
  UserServantEntity_o *v27; // x8
  struct UserServantEntity_o *v28; // x8
  __int128 v29; // q1
  __int64 v30; // x20
  struct ServantEntity_o **p_servantEntity; // x19
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_438F24E & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438F24E = 1;
  }
  p_UserServantEntity_k__BackingField = &this->fields._UserServantEntity_k__BackingField;
  if ( userServantEntity )
  {
    *p_UserServantEntity_k__BackingField = userServantEntity;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields._UserServantEntity_k__BackingField,
      (System_Int32_array **)userServantEntity,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v13 = *p_UserServantEntity_k__BackingField;
    if ( !*p_UserServantEntity_k__BackingField )
      goto LABEL_23;
    v15 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v40.fields.currentCryptoKey = v15;
    *(_QWORD *)&v40.fields.fakeValue = v14;
    this->fields._SvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v40, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_23;
    Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                         this->fields._SvtId_k__BackingField,
                                         (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this->fields.servantEntity = Entity;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.servantEntity,
      (System_Int32_array **)Entity,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    Instance = (DataManager_o *)this->fields._UserServantEntity_k__BackingField;
    if ( !Instance )
      goto LABEL_23;
    Instance = (DataManager_o *)UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    this->fields._IsFriendShipSvtEq_k__BackingField = (unsigned __int8)Instance & 1;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_23;
    Instance = (DataManager_o *)UserServantEntity__IsChocolateSvtEquip(UserServantEntity_k__BackingField, 0LL);
    v24 = this->fields._UserServantEntity_k__BackingField;
    this->fields._IsChocolateSvtEquip_k__BackingField = (unsigned __int8)Instance & 1;
    if ( !v24 )
      goto LABEL_23;
    IsMaterialTd = UserServantEntity__IsMaterialTd(v24, 0LL);
    IsFriendShipSvtEq_k__BackingField = this->fields._IsFriendShipSvtEq_k__BackingField;
    Instance = (DataManager_o *)this->fields._UserServantEntity_k__BackingField;
    this->fields._IsMaterialTdSvt_k__BackingField = IsMaterialTd;
    this->fields._IsNotSelection_k__BackingField = IsFriendShipSvtEq_k__BackingField;
    if ( !Instance
      || (Instance = (DataManager_o *)UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL),
          v27 = this->fields._UserServantEntity_k__BackingField,
          this->fields._IsLock_k__BackingField = (unsigned __int8)Instance & 1,
          !v27)
      || (this->fields._IsChoice_k__BackingField = UserServantEntity__IsChoice(v27, 0LL),
          (Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL)) == 0LL)
      || (v28 = *p_UserServantEntity_k__BackingField) == 0LL )
    {
LABEL_23:
      sub_B7769C(Instance, v12);
    }
    v29 = *(_OWORD *)&v28->fields.id.fields.fakeValue;
    v30 = *(_QWORD *)&Instance->fields.writeMasterDataThreadEnd;
    *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&v28->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v39.fields.fakeValue = v29;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v38 = v39;
    this->fields._IsPush_k__BackingField = v30 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                    &v38,
                                                    0LL);
  }
  else
  {
    this->fields._UserServantEntity_k__BackingField = 0LL;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields._UserServantEntity_k__BackingField,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.servantEntity = 0LL;
    p_servantEntity = &this->fields.servantEntity;
    sub_B77560((BattleServantConfConponent_o *)p_servantEntity, 0LL, v32, v33, v34, v35, v36, v37);
    *((_DWORD *)p_servantEntity + 2) = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewItem__SetServantUses(
        ServantOperationListViewItem_o *this,
        int32_t type,
        System_Int64_array *partyUserServantList,
        System_Int64_array *partyUserEquipList,
        const MethodInfo *method)
{
  ServantOperationListViewItem_o *v8; // x19
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v10; // q0
  bool IsKeepServantEquip; // w20
  int64_t v12; // x1
  const MethodInfo *v13; // x4
  bool v14; // w3
  ServantOperationListViewItem_o *v15; // x0
  System_Int64_array *v16; // x2
  System_Int32_array **CategoryIdList; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  BattleServantConfConponent_o *p_commandCodeCategoryIdList; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *sortValue0; // x21
  int32_t v26; // w22
  __int64 v27; // x10
  int64_t v28; // x8
  __int128 v29; // q0
  int64_t v30; // x23
  struct System_String_o *sortStr1; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+60h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+80h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+A0h] [xbp-A0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+C0h] [xbp-80h] BYREF

  v8 = this;
  if ( (byte_438F252 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (ServantOperationListViewItem_o *)sub_B775C4(&UserServantLeaderEntity_TypeInfo);
    byte_438F252 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  if ( type == 2 )
  {
    this = (ServantOperationListViewItem_o *)v8->fields._UserCommandCodeEntity_k__BackingField;
    v8->fields.partyIndex = -1;
    if ( this )
    {
      CategoryIdList = (System_Int32_array **)UserCommandCodeEntity__GetCategoryIdList(
                                                (UserCommandCodeEntity_o *)this,
                                                0LL);
      p_commandCodeCategoryIdList = (BattleServantConfConponent_o *)&v8->fields.commandCodeCategoryIdList;
      v8->fields.commandCodeCategoryIdList = (struct System_Int32_array *)CategoryIdList;
      goto LABEL_42;
    }
    goto LABEL_44;
  }
  if ( type != 1 )
    return;
  UserServantEntity_k__BackingField = v8->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_44;
  v10 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v38.fields.fakeValue = v10;
  this = (ServantOperationListViewItem_o *)v8->fields.servantEntity;
  if ( !this )
    goto LABEL_44;
  IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)this, 0LL);
  if ( IsKeepServantEquip )
  {
    v37 = v38;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v36 = v37;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v36, 0LL);
    v14 = 1;
    v15 = v8;
    v16 = partyUserEquipList;
  }
  else
  {
    v37 = v38;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v35 = v37;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v35, 0LL);
    v15 = v8;
    v16 = partyUserServantList;
    v14 = 0;
  }
  v8->fields.partyIndex = ServantOperationListViewItem__GetPartyIndex(v15, v12, v16, v14, v13);
  this = (ServantOperationListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_44;
  this = (ServantOperationListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !this )
    goto LABEL_44;
  sortValue0 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.sortValue0;
  if ( !sortValue0 )
    goto LABEL_44;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.sortValue0,
         (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    goto LABEL_40;
  v26 = 0;
  while ( 1 )
  {
    this = (ServantOperationListViewItem_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                               sortValue0,
                                               v26,
                                               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !this )
      goto LABEL_44;
    v27 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v27
      || (UserServantLeaderEntity_c *)this->klass->_2.typeHierarchy[v27 - 1] != UserServantLeaderEntity_TypeInfo )
    {
      goto LABEL_44;
    }
    if ( !IsKeepServantEquip )
      break;
    v28 = this->fields.sortValue0;
    if ( v28 )
    {
      v29 = *(_OWORD *)(v28 + 40);
      *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(v28 + 24);
      *(_OWORD *)&v37.fields.fakeValue = v29;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v34 = v37;
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v34, 0LL);
      v33 = v38;
      if ( v30 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v33, 0LL) )
      {
        *(_WORD *)&v8->fields._IsUseSupportEquip_k__BackingField = 257;
        goto LABEL_40;
      }
    }
LABEL_37:
    if ( ++v26 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                    sortValue0,
                    (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      goto LABEL_40;
  }
  sortStr1 = this->fields.sortStr1;
  v37 = v38;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v32 = v37;
  if ( sortStr1 != (struct System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                               &v32,
                                               0LL) )
    goto LABEL_37;
  v8->fields._IsUseSupportServant_k__BackingField = 1;
LABEL_40:
  this = (ServantOperationListViewItem_o *)v8->fields._UserServantEntity_k__BackingField;
  if ( !this )
LABEL_44:
    sub_B7769C(this, *(_QWORD *)&type);
  CategoryIdList = (System_Int32_array **)UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)this, 1, 0LL);
  p_commandCodeCategoryIdList = (BattleServantConfConponent_o *)&v8->fields.categoryIdList;
  v8->fields.categoryIdList = (struct System_Int32_array *)CategoryIdList;
LABEL_42:
  sub_B77560(p_commandCodeCategoryIdList, CategoryIdList, v18, v19, v20, v21, v22, v23);
}


bool __fastcall ServantOperationListViewItem__SetSortValue(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ServantOperationListViewItem_c *klass; // x8
  const MethodInfo *v6; // x2
  char v7; // w8
  bool result; // w0

  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0 = 0LL;
  this->fields.sortValue1 = -1LL;
  v7 = ((__int64 (__fastcall *)(ServantOperationListViewItem_o *, ListViewSort_o *, void *))klass->vtable._5_IsMatchFilter.method)(
         this,
         sort,
         klass[1]._1.image);
  result = 0;
  if ( (v7 & 1) != 0 )
  {
    ServantOperationListViewItem__SetIconInfoLabel(this, sort, v6);
    return 1;
  }
  return result;
}


bool __fastcall ServantOperationListViewItem__SwapChoice(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields._IsSwapChoice_k__BackingField;
  this->fields._IsSwapChoice_k__BackingField ^= 1u;
  return v2;
}


bool __fastcall ServantOperationListViewItem__SwapLock(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields._IsSwapLock_k__BackingField;
  this->fields._IsSwapLock_k__BackingField ^= 1u;
  return v2;
}


int32_t __fastcall ServantOperationListViewItem__get_CommandCodeId(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CommandCodeId_k__BackingField;
}


int32_t __fastcall ServantOperationListViewItem__get_DragSelectNum(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._DragSelectNum_k__BackingField;
}


System_String_o *__fastcall ServantOperationListViewItem__get_FortificationDetailName(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fortificationDetailName;
}


System_String_o *__fastcall ServantOperationListViewItem__get_FortificationName(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fortificationName;
}


IconLabelInfo_o *__fastcall ServantOperationListViewItem__get_IconLabelInfo1(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall ServantOperationListViewItem__get_IconLabelInfo2(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall ServantOperationListViewItem__get_IsCanNotSelect(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0

  return this->fields._IsFavorite_k__BackingField
      || this->fields._IsParty_k__BackingField
      || this->fields.attribute
      || this->fields._IsLock_k__BackingField
      || this->fields._IsChoice_k__BackingField
      || this->fields._IsUseSupportServant_k__BackingField
      || this->fields._IsCommandCodeEquiped_k__BackingField
      || this->fields._IsNotSelection_k__BackingField
      || this->fields._IsPush_k__BackingField
      || (UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField) != 0LL
      && UserServantEntity__IsProtectedEventServant(UserServantEntity_k__BackingField, 0LL)
      || this->fields.isFortification;
}


bool __fastcall ServantOperationListViewItem__get_IsCanNotSelectPush(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  UserServantEntity_o *v4; // x0
  __int64 v5; // x1
  UserServantEntity_o *v6; // x0

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    return 1;
  if ( UserServantEntity__IsEventJoin(UserServantEntity_k__BackingField, 0LL) )
    return 1;
  v4 = this->fields._UserServantEntity_k__BackingField;
  if ( !v4 || UserServantEntity__IsLeave(v4, 0LL) )
    return 1;
  v6 = this->fields._UserServantEntity_k__BackingField;
  if ( !v6 )
    goto LABEL_12;
  if ( UserServantEntity__IsCombineMaterial(v6, 0LL) )
    return 1;
  v6 = this->fields._UserServantEntity_k__BackingField;
  if ( !v6 )
    goto LABEL_12;
  if ( UserServantEntity__IsStatusUp(v6, 0LL) )
    return 1;
  v6 = this->fields._UserServantEntity_k__BackingField;
  if ( !v6 )
LABEL_12:
    sub_B7769C(v6, v5);
  return UserServantEntity__IsMaterialTd(v6, 0LL);
}


bool __fastcall ServantOperationListViewItem__get_IsChocolateSvtEquip(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsChocolateSvtEquip_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsChoice(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsChoice_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsCommandCardOpenServant(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsCommandCardOpenServant_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsCommandCodeEquiped(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsCommandCodeEquiped_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsDispChoice(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapChoice_k__BackingField ^ this->fields._IsChoice_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsDispLock(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapLock_k__BackingField ^ this->fields._IsLock_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsDragSelect(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._DragSelectNum_k__BackingField >= 0;
}


bool __fastcall ServantOperationListViewItem__get_IsEquippedCommandCodeServant(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsEquippedCommandCodeServant_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsEventJoin(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
    LOBYTE(UserServantEntity_k__BackingField) = UserServantEntity__IsEventJoin(UserServantEntity_k__BackingField, 0LL);
  return (char)UserServantEntity_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsFavorite(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsFavorite_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsFortification(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFortification;
}


bool __fastcall ServantOperationListViewItem__get_IsFriendShipSvtEq(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsFriendShipSvtEq_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsHeroine(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
    LOBYTE(UserServantEntity_k__BackingField) = UserServantEntity__IsHeroine(UserServantEntity_k__BackingField, 0LL);
  return (char)UserServantEntity_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsLock(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsLock_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsMaterialTdSvt(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsMaterialTdSvt_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsNeedAdjustIconLabelScale(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isNeedAdjustIconLabelScale;
}


bool __fastcall ServantOperationListViewItem__get_IsNotSelection(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsNotSelection_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsOrganization(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0

  servantEntity = this->fields.servantEntity;
  return !servantEntity || ServantEntity__get_IsOrganization(servantEntity, 0LL);
}


bool __fastcall ServantOperationListViewItem__get_IsParty(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsParty_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsPartyEquip(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsPartyEquip_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsProtected(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
    LOBYTE(UserServantEntity_k__BackingField) = UserServantEntity__IsProtectedEventServant(
                                                  UserServantEntity_k__BackingField,
                                                  0LL);
  return (char)UserServantEntity_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsPush(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsPush_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsSellEnableServant(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.attribute == 0;
}


bool __fastcall ServantOperationListViewItem__get_IsServant(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0

  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    LOBYTE(servantEntity) = ServantEntity__get_IsServant(servantEntity, 0LL);
  return (char)servantEntity;
}


bool __fastcall ServantOperationListViewItem__get_IsServantEquip(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_B7769C(0LL, method);
  return ServantEntity__get_IsServantEquip(servantEntity, 0LL);
}


bool __fastcall ServantOperationListViewItem__get_IsSwapChoice(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapChoice_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsSwapLock(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapLock_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsUse(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsUse_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsUseSupportEquip(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUseSupportEquip_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsUseSupportServant(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUseSupportServant_k__BackingField;
}


int32_t __fastcall ServantOperationListViewItem__get_PartyIndex(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.partyIndex + 1;
}


ServantEntity_o *__fastcall ServantOperationListViewItem__get_ServantEntity(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t __fastcall ServantOperationListViewItem__get_SvtId(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SvtId_k__BackingField;
}


UserCommandCodeEntity_o *__fastcall ServantOperationListViewItem__get_UserCommandCodeEntity(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UserCommandCodeEntity_k__BackingField;
}


int64_t __fastcall ServantOperationListViewItem__get_UserCommandCodeId(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  ServantOperationListViewItem_o *v2; // x19
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  v2 = this;
  if ( (byte_438F257 & 1) == 0 )
  {
    this = (ServantOperationListViewItem_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438F257 = 1;
  }
  UserCommandCodeEntity_k__BackingField = v2->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    sub_B7769C(this, method);
  v4 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v6, 0LL);
}


UserServantEntity_o *__fastcall ServantOperationListViewItem__get_UserServantEntity(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServantEntity_k__BackingField;
}


int64_t __fastcall ServantOperationListViewItem__get_UserSvtId(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  if ( (byte_438F256 & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438F256 = 1;
  }
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    return 0LL;
  v4 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v6, 0LL);
}


void __fastcall ServantOperationListViewItem__setUserCommandCodeEntity(
        ServantOperationListViewItem_o *this,
        UserCommandCodeEntity_o *entity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._UserCommandCodeEntity_k__BackingField = entity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantOperationListViewItem__setUserServantEntity(
        ServantOperationListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._UserServantEntity_k__BackingField = entity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._UserServantEntity_k__BackingField,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantOperationListViewItem__set_CommandCodeId(
        ServantOperationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CommandCodeId_k__BackingField = value;
}


void __fastcall ServantOperationListViewItem__set_DragSelectNum(
        ServantOperationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._DragSelectNum_k__BackingField = value;
}


void __fastcall ServantOperationListViewItem__set_IsChocolateSvtEquip(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsChocolateSvtEquip_k__BackingField = value;
}


void __fastcall ServantOperationListViewItem__set_IsChoice(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsChoice_k__BackingField = value;
}


void __fastcall ServantOperationListViewItem__set_IsCommandCardOpenServant(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsCommandCardOpenServant_k__BackingField = value;
}


void __fastcall ServantOperationListViewItem__set_IsCommandCodeEquiped(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsCommandCodeEquiped_k__BackingField = value;
}


void __fastcall ServantOperationListViewItem__set_IsDragSelect(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_B7769C(0LL, value);
  this->fields._DragSelectNum_k__BackingField = ~value << 31 >> 31;
}


void __fastcall ServantOperationListViewItem__set_IsEquippedCommandCodeServant(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsEquippedCommandCodeServant_k__BackingField = value;
}


void __fastcall ServantOperationListViewItem__set_IsFavorite(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsFavorite_k__BackingField = value;
}


void __fastcall ServantOperationListViewItem__set_IsFriendShipSvtEq(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsFriendShipSvtEq_k__BackingField = value;
}


void __fastcall ServantOperationListViewItem__set_IsLock(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsLock_k__BackingField = value;
}


void __fastcall ServantOperationListViewItem__set_IsMaterialTdSvt(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsMaterialTdSvt_k__BackingField = value;
}


void __fastcall ServantOperationListViewItem__set_IsNotSelection(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNotSelection_k__BackingField = value;
}


void __fastcall ServantOperationListViewItem__set_IsParty(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsParty_k__BackingField = value;
}


void __fastcall ServantOperationListViewItem__set_IsPartyEquip(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPartyEquip_k__BackingField = value;
}


void __fastcall ServantOperationListViewItem__set_IsPush(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPush_k__BackingField = value;
}


void __fastcall ServantOperationListViewItem__set_IsSwapChoice(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSwapChoice_k__BackingField = value;
}


void __fastcall ServantOperationListViewItem__set_IsSwapLock(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSwapLock_k__BackingField = value;
}


void __fastcall ServantOperationListViewItem__set_IsUse(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUse_k__BackingField = value;
}


void __fastcall ServantOperationListViewItem__set_IsUseSupportEquip(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUseSupportEquip_k__BackingField = value;
}


void __fastcall ServantOperationListViewItem__set_IsUseSupportServant(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUseSupportServant_k__BackingField = value;
}


void __fastcall ServantOperationListViewItem__set_SvtId(
        ServantOperationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SvtId_k__BackingField = value;
}


void __fastcall ServantOperationListViewItem__set_UserCommandCodeEntity(
        ServantOperationListViewItem_o *this,
        UserCommandCodeEntity_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._UserCommandCodeEntity_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantOperationListViewItem__set_UserServantEntity(
        ServantOperationListViewItem_o *this,
        UserServantEntity_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._UserServantEntity_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._UserServantEntity_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}