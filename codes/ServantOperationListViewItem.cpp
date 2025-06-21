// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewItem___ctor(
        ServantOperationListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userServantEntity,
        System_Int64_array *partyUserServantIds,
        System_Int64_array *partyUserEquipIds,
        bool isFavorite,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  IconLabelInfo_o *v18; // x25
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  IconLabelInfo_o *v21; // x25
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x4
  DataManager_o *Instance; // x0
  __int64 v31; // x1
  int64_t lookup_high; // x8
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int64 rarity; // x20
  __int64 masterDataBytes_low; // x21
  __int64 lv; // x22
  struct UserServantEntity_o *v37; // x8
  __int64 v38; // x20
  __int64 v39; // x21
  struct UserServantEntity_o *v40; // x8
  int32_t adjustHp; // w20
  __int64 v42; // x9
  UserServantEntity_o *v43; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x1
  int64_t UserSvtId; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4B18660 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantClassMaster___, v13);
    sub_1BCAFF8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v14);
    sub_1BCAFF8(&IconLabelInfo_TypeInfo, v15);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4B18660 = 1;
  }
  v18 = (IconLabelInfo_o *)sub_1BCB244(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0LL);
  this->fields.iconLabelInfo1 = v18;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v18, v19, v20);
  v21 = (IconLabelInfo_o *)sub_1BCB244(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0LL);
  this->fields.iconLabelInfo2 = v21;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v21, v22, v23);
  ListViewItem___ctor_42932312((ListViewItem_o *)this, index, 0LL);
  ServantOperationListViewItem__Init(this, index, v24);
  ServantOperationListViewItem__SetServantData(this, userServantEntity, v25);
  ServantOperationListViewItem__SetCommandCodeData(this, 0LL, v26);
  ServantOperationListViewItem__SetData(this, 1, v27);
  ServantOperationListViewItem__StatusOverWrite(this, userServantEntity, v28);
  ServantOperationListViewItem__SetServantUses(this, 1, partyUserServantIds, partyUserEquipIds, v29);
  this->fields._IsFavorite_k__BackingField = isFavorite;
  this->fields.amountSortValue = -1LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                this->fields.classId,
                                (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_19;
  lookup_high = SHIDWORD(Instance->fields.lookup);
  Instance = (DataManager_o *)this->fields.servantEntity;
  this->fields.priority = lookup_high;
  this->fields.sortValue1B = lookup_high;
  if ( !Instance )
    goto LABEL_19;
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_19;
  rarity = (unsigned int)this->fields.rarity;
  masterDataBytes_low = SLODWORD(Instance[1].fields.masterDataBytes);
  lv = UserServantEntity_k__BackingField->fields.lv;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Instance, 0LL);
  v37 = this->fields._UserServantEntity_k__BackingField;
  this->fields.sortValue2 = (masterDataBytes_low << 16) | (rarity << 48) | (2 * lv) | (unsigned __int8)Instance & 1;
  if ( !v37 )
    goto LABEL_19;
  v39 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v52.fields.currentCryptoKey = v39;
  *(_QWORD *)&v52.fields.fakeValue = v38;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v52, 0LL);
  v40 = this->fields._UserServantEntity_k__BackingField;
  this->fields.sortValue2B = (int)Instance;
  if ( !v40 )
    goto LABEL_19;
  adjustHp = v40->fields.adjustHp;
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    v40 = this->fields._UserServantEntity_k__BackingField;
  }
  v42 = *(_QWORD *)&Instance[1].fields._DispLog;
  this->fields.hpReinforceValue = *(_DWORD *)(v42 + 336) * adjustHp;
  if ( !v40 )
    goto LABEL_19;
  this->fields.atkReinforceValue = *(_DWORD *)(v42 + 332) * v40->fields.adjustAtk;
  UserServantEntity__getAdjustMaxData(
    v40,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (DataManager_o *)this->fields._UserServantEntity_k__BackingField;
  if ( !Instance
    || (Instance = (DataManager_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL),
        v43 = this->fields._UserServantEntity_k__BackingField,
        this->fields.dispLimitCount = (int)Instance,
        !v43)
    || (SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v43, -1, -1, 0LL),
        this->fields.skillCategoryIdList = SkillCategoryIdList,
        sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v45, v46),
        (Instance = (DataManager_o *)this->fields._UserServantEntity_k__BackingField) == 0LL) )
  {
LABEL_19:
    sub_1BCB254(Instance, v31);
  }
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   -1,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.tdCategoryIdList, (int32_t)TreasureDeviceCategoryIdList, v48, v49);
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(this, v50);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewItem___ctor_34269708(
        ServantOperationListViewItem_o *this,
        int32_t index,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        bool isEquiped,
        const MethodInfo *method)
{
  __int64 v9; // x1
  IconLabelInfo_o *v10; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  IconLabelInfo_o *v13; // x23
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x4
  __int64 v21; // x0
  __int64 v22; // x1
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v24; // x20
  __int64 v25; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4B18661 & 1) == 0 )
  {
    sub_1BCAFF8(&IconLabelInfo_TypeInfo, *(_QWORD *)&index);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_4B18661 = 1;
  }
  v10 = (IconLabelInfo_o *)sub_1BCB244(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v10, 0LL);
  this->fields.iconLabelInfo1 = v10;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v10, v11, v12);
  v13 = (IconLabelInfo_o *)sub_1BCB244(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0LL);
  this->fields.iconLabelInfo2 = v13;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v13, v14, v15);
  ListViewItem___ctor_42932312((ListViewItem_o *)this, index, 0LL);
  ServantOperationListViewItem__Init(this, index, v16);
  ServantOperationListViewItem__SetServantData(this, 0LL, v17);
  ServantOperationListViewItem__SetCommandCodeData(this, userCommandCodeEntity, v18);
  ServantOperationListViewItem__SetData(this, 2, v19);
  ServantOperationListViewItem__SetServantUses(this, 2, 0LL, 0LL, v20);
  commandCodeEntity = this->fields.commandCodeEntity;
  this->fields._IsCommandCodeEquiped_k__BackingField = isEquiped;
  this->fields.amountSortValue = -1LL;
  if ( !commandCodeEntity )
    sub_1BCB254(v21, v22);
  v25 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v24 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v25;
  *(_QWORD *)&v26.fields.fakeValue = v24;
  this->fields.sortValue1B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v26, 0LL);
}


void __fastcall ServantOperationListViewItem__ClearIconLabelInfo(
        ServantOperationListViewItem_o *this,
        IconLabelInfo_o *iconLabelInfo,
        const MethodInfo *method)
{
  IconLabelInfo_o *v4; // x0

  if ( (byte_4B18670 & 1) == 0 )
  {
    sub_1BCAFF8(&IconLabelInfo_TypeInfo, iconLabelInfo);
    byte_4B18670 = 1;
  }
  if ( iconLabelInfo )
  {
    IconLabelInfo__Clear(iconLabelInfo, 0LL);
  }
  else
  {
    v4 = (IconLabelInfo_o *)sub_1BCB244(IconLabelInfo_TypeInfo);
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
    goto LABEL_9;
  if ( servantEntity->fields.type == 2 )
    return 1;
  this = (ServantOperationListViewItem_o *)this->fields._UserServantEntity_k__BackingField;
  if ( !this )
LABEL_9:
    sub_1BCB254(this, type);
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
    sub_1BCB254(this, type);
  return servantEntity->fields.classId;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantOperationListViewItem__GetFriendship(
        ServantOperationListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t result; // w0
  int64_t Instance; // x0
  __int64 v10; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v12; // q1
  UserServantCollectionMaster_o *v13; // x20
  struct UserServantEntity_o *v14; // x8
  int64_t v15; // x21
  __int64 v16; // x22
  __int64 v17; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-60h]
  int32_t friendshipRank; // [xsp+4Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B1866C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&type);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1866C = 1;
  }
  result = 0;
  friendshipRank = 0;
  if ( type == 1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_15;
    v12 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.userId.fields.fakeValue;
    v13 = (UserServantCollectionMaster_o *)Instance;
    *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v19.fields.fakeValue = v12;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v18 = v19;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v18, 0LL);
    v14 = this->fields._UserServantEntity_k__BackingField;
    if ( !v14 )
      goto LABEL_15;
    v15 = Instance;
    v17 = *(_QWORD *)&v14->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&v14->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v21.fields.currentCryptoKey = v17;
    *(_QWORD *)&v21.fields.fakeValue = v16;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v21, 0LL);
    if ( !v13 || (Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v13, v15, Instance, 0LL)) == 0 )
LABEL_15:
      sub_1BCB254(Instance, v10);
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
  UserServantEntity_o *v13; // x0
  int32_t LevelMax; // w0
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  int64_t createdAt; // x8
  UserServantEntity_o *v17; // x0
  UserServantEntity_o *v18; // x0
  UserServantEntity_o *v19; // x0
  __int64 v20; // x22
  __int64 v21; // x23
  int32_t friendshipMax; // w8
  bool result; // w0
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  v12 = this;
  if ( (byte_4B18667 & 1) == 0 )
  {
    this = (ServantOperationListViewItem_o *)sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
    byte_4B18667 = 1;
  }
  *dataValue = 0;
  *adjustDataValue = 0;
  *time = 0LL;
  if ( !sort )
    sub_1BCB254(this, sort);
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
          goto LABEL_31;
        createdAt = UserCommandCodeEntity_k__BackingField->fields.createdAt;
      }
      *time = createdAt;
      goto LABEL_31;
    case 2:
    case 3:
    case 8:
    case 0xE:
      v13 = v12->fields._UserServantEntity_k__BackingField;
      if ( !v13 )
        goto LABEL_27;
      *iconKind = 2;
      *dataValue = v13->fields.lv;
      LevelMax = UserServantEntity__getLevelMax(v13, 0LL);
      goto LABEL_15;
    case 4:
      v17 = v12->fields._UserServantEntity_k__BackingField;
      if ( !v17 )
        goto LABEL_27;
      *iconKind = 33;
      UserServantEntity__getTreasureDeviceInfo_42314120(v17, dataValue, adjustDataValue, 0LL);
      goto LABEL_31;
    case 5:
      v18 = v12->fields._UserServantEntity_k__BackingField;
      if ( !v18 )
        goto LABEL_27;
      *iconKind = 3;
      *dataValue = v12->fields.hp;
      LevelMax = UserServantEntity__get_HpBoostValue(v18, 0LL);
      goto LABEL_15;
    case 6:
      v19 = v12->fields._UserServantEntity_k__BackingField;
      if ( !v19 )
        goto LABEL_27;
      *iconKind = 5;
      *dataValue = v12->fields.atk;
      LevelMax = UserServantEntity__get_AtkBoostValue(v19, 0LL);
LABEL_15:
      *adjustDataValue = LevelMax;
      goto LABEL_31;
    case 7:
      if ( !v12->fields._UserServantEntity_k__BackingField )
        goto LABEL_27;
      *iconKind = 7;
      *dataValue = v12->fields.cost;
      goto LABEL_31;
    case 0xA:
      if ( !v12->fields._UserServantEntity_k__BackingField )
        goto LABEL_27;
      *iconKind = 32;
      v21 = *(_QWORD *)&v12->fields.friendship.fields.currentCryptoKey;
      v20 = *(_QWORD *)&v12->fields.friendship.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v25.fields.currentCryptoKey = v21;
      *(_QWORD *)&v25.fields.fakeValue = v20;
      *dataValue = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v25, 0LL);
      friendshipMax = v12->fields.friendshipMax;
      goto LABEL_26;
    case 0xF:
      if ( !v12->fields._UserServantEntity_k__BackingField )
        goto LABEL_27;
      *iconKind = 44;
      *dataValue = v12->fields.hpReinforceValue;
      friendshipMax = v12->fields.nowMaxHpReinforceValue;
      goto LABEL_26;
    case 0x10:
      if ( !v12->fields._UserServantEntity_k__BackingField )
        goto LABEL_27;
      *iconKind = 45;
      *dataValue = v12->fields.atkReinforceValue;
      friendshipMax = v12->fields.nowMaxAtkReinforceValue;
LABEL_26:
      *adjustDataValue = friendshipMax;
LABEL_31:
      result = 1;
      break;
    default:
LABEL_27:
      result = 0;
      *iconKind = -1;
      break;
  }
  return result;
}


bool __fastcall ServantOperationListViewItem__GetIconLabelInfoData2(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        int32_t *iconKind,
        int32_t *dataValue,
        int32_t *adjustDataValue,
        const MethodInfo *method)
{
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  unsigned int sortKind; // w9
  bool v9; // w8
  int32_t LevelMax; // w0

  *iconKind = -1;
  *dataValue = 0;
  *adjustDataValue = 0;
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    return 0;
  if ( !sort )
    sub_1BCB254(UserServantEntity_k__BackingField, 0LL);
  sortKind = sort->fields.sortKind;
  if ( (sortKind & 0xFFFFFFFC) == 4 || (v9 = 0, sortKind <= 0x10) && ((1 << sortKind) & 0x18002) != 0 )
  {
    *iconKind = 2;
    *dataValue = UserServantEntity_k__BackingField->fields.lv;
    LevelMax = UserServantEntity__getLevelMax(UserServantEntity_k__BackingField, 0LL);
    v9 = 1;
    *adjustDataValue = LevelMax;
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantOperationListViewItem__GetIsCommandCardOpenServant(
        ServantOperationListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantEntity_o *servantEntity; // x0
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  struct ServantEntity_o *v12; // x8
  __int64 v13; // x21
  __int64 v14; // x22
  int64_t v15; // x19
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B1866F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, *(_QWORD *)&type);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1866F = 1;
  }
  entity = 0LL;
  if ( type != 1 )
    goto LABEL_20;
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    if ( ServantEntity__get_IsServant(servantEntity, 0LL) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
        byte_4B165D1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      v12 = this->fields.servantEntity;
      if ( !v12 )
        goto LABEL_22;
      v14 = *(_QWORD *)&v12->fields.id.fields.currentCryptoKey;
      v13 = *(_QWORD *)&v12->fields.id.fields.fakeValue;
      v15 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v18.fields.currentCryptoKey = v14;
      *(_QWORD *)&v18.fields.fakeValue = v13;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v18, 0LL);
      if ( !MasterData_object )
        goto LABEL_22;
      if ( UserServantCommandCodeMaster__TryGetEntity(
             (UserServantCommandCodeMaster_o *)MasterData_object,
             &entity,
             v15,
             (int)Instance,
             0LL) )
      {
        Instance = (DataManager_o *)entity;
        if ( entity )
        {
          LOBYTE(servantEntity) = UserServantCommandCodeEntity__IsCommandCardSlotOpen(entity, 0LL);
          return (unsigned __int8)servantEntity & 1;
        }
LABEL_22:
        sub_1BCB254(Instance, v10);
      }
    }
LABEL_20:
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
    sub_1BCB254(this, 0LL);
  sortKind = sort->fields.sortKind;
  if ( sortKind > 7 )
  {
    v4 = sortKind - 10;
    if ( v4 < 7 )
      return (0x1Eu >> v4) & 1;
LABEL_7:
    LOBYTE(v5) = 1;
    return v5;
  }
  LOBYTE(v5) = 0;
  if ( sortKind != 4 && sortKind != 7 )
    goto LABEL_7;
  return v5;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantOperationListViewItem__GetIsEquippedCommandCodeServant(
        ServantOperationListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantEntity_o *servantEntity; // x0
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  struct ServantEntity_o *v12; // x8
  __int64 v13; // x21
  __int64 v14; // x22
  int64_t v15; // x19
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B1866E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, *(_QWORD *)&type);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1866E = 1;
  }
  entity = 0LL;
  if ( type != 1 )
    goto LABEL_20;
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    if ( ServantEntity__get_IsServant(servantEntity, 0LL) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
        byte_4B165D1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      v12 = this->fields.servantEntity;
      if ( !v12 )
        goto LABEL_22;
      v14 = *(_QWORD *)&v12->fields.id.fields.currentCryptoKey;
      v13 = *(_QWORD *)&v12->fields.id.fields.fakeValue;
      v15 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v18.fields.currentCryptoKey = v14;
      *(_QWORD *)&v18.fields.fakeValue = v13;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v18, 0LL);
      if ( !MasterData_object )
        goto LABEL_22;
      if ( UserServantCommandCodeMaster__TryGetEntity(
             (UserServantCommandCodeMaster_o *)MasterData_object,
             &entity,
             v15,
             (int)Instance,
             0LL) )
      {
        Instance = (DataManager_o *)entity;
        if ( entity )
        {
          LOBYTE(servantEntity) = UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0LL);
          return (unsigned __int8)servantEntity & 1;
        }
LABEL_22:
        sub_1BCB254(Instance, v10);
      }
    }
LABEL_20:
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

  if ( !ids )
    sub_1BCB254(this, userServantId);
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
      if ( max_length == (_DWORD)v7 )
        sub_1BCB25C(v7, userServantId, ids);
      if ( ids->m_Items[(int)v7] == userServantId )
        break;
      v7 = (unsigned int)(v7 + 1);
      if ( max_length == (_DWORD)v7 )
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
  __int64 v5; // x1
  __int64 v6; // x1
  void *UserCommandCodeEntity_k__BackingField; // x0
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  ServantLimitMaster_o *v9; // x20
  int32_t SvtId_k__BackingField; // w19
  __int64 v11; // x21
  __int64 v12; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4B1866B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&type);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1866B = 1;
  }
  if ( type == 2 )
  {
    UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
    if ( !UserCommandCodeEntity_k__BackingField )
      goto LABEL_15;
    return UserCommandCodeEntity__GetRarity((UserCommandCodeEntity_o *)UserCommandCodeEntity_k__BackingField, 0LL);
  }
  else
  {
    if ( type == 1 )
    {
      UserCommandCodeEntity_k__BackingField = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( UserCommandCodeEntity_k__BackingField )
      {
        UserCommandCodeEntity_k__BackingField = DataManager__GetMasterData_object_(
                                                  (DataManager_o *)UserCommandCodeEntity_k__BackingField,
                                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
        if ( UserServantEntity_k__BackingField )
        {
          v9 = (ServantLimitMaster_o *)UserCommandCodeEntity_k__BackingField;
          SvtId_k__BackingField = this->fields._SvtId_k__BackingField;
          v12 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCount.fields.currentCryptoKey;
          v11 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v14.fields.currentCryptoKey = v12;
          *(_QWORD *)&v14.fields.fakeValue = v11;
          UserCommandCodeEntity_k__BackingField = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                            v14,
                                                            0LL);
          if ( v9 )
          {
            UserCommandCodeEntity_k__BackingField = ServantLimitMaster__GetEntity(
                                                      v9,
                                                      SvtId_k__BackingField,
                                                      (int32_t)UserCommandCodeEntity_k__BackingField,
                                                      0LL);
            if ( UserCommandCodeEntity_k__BackingField )
              return *((_DWORD *)UserCommandCodeEntity_k__BackingField + 6);
          }
        }
      }
LABEL_15:
      sub_1BCB254(UserCommandCodeEntity_k__BackingField, *(_QWORD *)&type);
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
    sub_1BCB254(this, 0LL);
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
    if ( this->fields._IsSwapLock_k__BackingField == this->fields._IsLock_k__BackingField
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
  if ( this->fields._IsGrandServant_k__BackingField )
    return -40LL;
  if ( this->fields.attribute )
    return -50LL;
  if ( this->fields._IsFavorite_k__BackingField )
    return -60LL;
  if ( this->fields._IsUseSupportServant_k__BackingField )
    return -70LL;
  if ( this->fields._IsUseRecommendSupportServant_k__BackingField )
    return -75LL;
  if ( !this->fields._IsPush_k__BackingField )
  {
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    if ( (!UserServantEntity_k__BackingField
       || !UserServantEntity__IsProtectedEventServant(UserServantEntity_k__BackingField, 0LL))
      && !this->fields.isFortification )
    {
      return 0LL;
    }
    return -10LL;
  }
  return -80LL;
}


int64_t __fastcall ServantOperationListViewItem__GetSortValue1(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        int32_t dataValue,
        const MethodInfo *method)
{
  ServantOperationListViewItem_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v10; // q1
  __int128 *v11; // x0
  __int64 methodPtr_low; // x10
  struct ServantEntity_o *servantEntity; // x8
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v15; // q1
  __int64 v16; // x10
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v18; // x20
  __int64 v19; // x21
  __int128 v20[2]; // [xsp+0h] [xbp-90h] BYREF
  __int128 v21[2]; // [xsp+20h] [xbp-70h] BYREF
  __int128 v22; // [xsp+40h] [xbp-50h]
  __int128 v23; // [xsp+50h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v6 = this;
  if ( (byte_4B18668 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    this = (ServantOperationListViewItem_o *)sub_1BCAFF8(&ServantOperationListViewManager_TypeInfo, v8);
    byte_4B18668 = 1;
  }
  if ( !sort )
    goto LABEL_37;
  this = 0LL;
  switch ( sort->fields.sortKind )
  {
    case 1:
      UserServantEntity_k__BackingField = v6->fields._UserServantEntity_k__BackingField;
      if ( UserServantEntity_k__BackingField )
      {
        v10 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
        v22 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
        v23 = v10;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v11 = v21;
        v21[0] = v22;
        v21[1] = v23;
      }
      else
      {
        UserCommandCodeEntity_k__BackingField = v6->fields._UserCommandCodeEntity_k__BackingField;
        if ( !UserCommandCodeEntity_k__BackingField )
          return 0LL;
        v15 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
        v22 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
        v23 = v15;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v11 = v20;
        v20[0] = v22;
        v20[1] = v23;
      }
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(
               (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v11,
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
            goto LABEL_37;
          methodPtr_low = LOBYTE(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (ServantOperationListViewManager_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewManager_TypeInfo )
          {
            goto LABEL_37;
          }
          this = (ServantOperationListViewItem_o *)ServantOperationListViewManager__GetAmountSortValue(
                                                     (ServantOperationListViewManager_o *)this,
                                                     v6->fields._SvtId_k__BackingField,
                                                     0LL);
          v6->fields.amountSortValue = (int64_t)this;
        }
        servantEntity = v6->fields.servantEntity;
        if ( servantEntity )
          return (((unsigned __int64)(unsigned int)v6->fields.rarity << 32) + ((_QWORD)this << 48)) | servantEntity->fields.collectionNo;
LABEL_37:
        sub_1BCB254(this, sort);
      }
      if ( !v6->fields._UserCommandCodeEntity_k__BackingField )
        return 0LL;
      if ( (v6->fields.amountSortValue & 0x8000000000000000LL) != 0 )
      {
        this = (ServantOperationListViewItem_o *)sort->fields.manager;
        if ( !this )
          goto LABEL_37;
        v16 = LOBYTE(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v16
          || (ServantOperationListViewManager_c *)this->klass->_2.typeHierarchy[v16 - 1] != ServantOperationListViewManager_TypeInfo )
        {
          goto LABEL_37;
        }
        this = (ServantOperationListViewItem_o *)ServantOperationListViewManager__GetCommandCodeAmountSortValue(
                                                   (ServantOperationListViewManager_o *)this,
                                                   v6->fields._CommandCodeId_k__BackingField,
                                                   0LL);
        v6->fields.amountSortValue = (int64_t)this;
      }
      commandCodeEntity = v6->fields.commandCodeEntity;
      if ( !commandCodeEntity )
        goto LABEL_37;
      v19 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
      v18 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v24.fields.currentCryptoKey = v19;
      *(_QWORD *)&v24.fields.fakeValue = v18;
      return (((unsigned __int64)(unsigned int)v6->fields.rarity << 32) + (v6->fields.amountSortValue << 48)) | CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v24, 0LL);
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
  *(_DWORD *)&this->fields._IsEquippedCommandCodeServant_k__BackingField = 0;
  *(_WORD *)&this->fields._IsMaterialTdSvt_k__BackingField = 0;
  *(_DWORD *)&this->fields._IsUseRecommendSupportServant_k__BackingField = 0;
  this->fields._DragSelectNum_k__BackingField = -1;
  *(_QWORD *)&this->fields.hpReinforceValue = 0LL;
  *(_QWORD *)&this->fields.nowMaxHpReinforceValue = 0LL;
}


bool __fastcall ServantOperationListViewItem__IsMatchCommandCodeFilter(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *v7; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  __int64 v9; // x2

  if ( (byte_4B18666 & 1) == 0 )
  {
    sub_1BCAFF8(&FilterKindList_TypeInfo, sort);
    sub_1BCAFF8(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_4B18666 = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v7->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_18;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_18;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.commandCodeCategoryIdList, sort, 0LL) )
  {
    return 0;
  }
  RarityFilterKindList = (System_Int32Enum_array *)sub_1BCB0A0(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
LABEL_18:
    sub_1BCB254(RarityFilterKindList, sort);
  if ( !RarityFilterKindList->max_length )
    sub_1BCB25C(RarityFilterKindList, RarityFilterKindList, v9);
  RarityFilterKindList->m_Items[1] = 39;
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
      || !ListViewSort__GetFilter(sort, 39, 0LL)
      || this->fields._IsSwapChoice_k__BackingField != this->fields._IsChoice_k__BackingField;
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
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *v7; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  bool IsMatchServantEquipCombineStatusFilter; // w8
  bool result; // w0
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  bool HaveStatusFilter; // w8
  __int64 v18; // x2

  if ( (byte_4B18665 & 1) == 0 )
  {
    sub_1BCAFF8(&FilterKindList_TypeInfo, sort);
    sub_1BCAFF8(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_4B18665 = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v7->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_34;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_34;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v9->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_34;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v11->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_34;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    || (IsMatchServantEquipCombineStatusFilter = ListViewSort__IsMatchServantEquipCombineStatusFilter(
                                                   sort,
                                                   this->fields._UserServantEntity_k__BackingField,
                                                   this->fields.servantEntity,
                                                   0,
                                                   0LL),
        result = 0,
        IsMatchServantEquipCombineStatusFilter) )
  {
    v15 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v15 = FilterKindList_TypeInfo;
    }
    RarityFilterKindList = (System_Int32Enum_array *)v15->static_fields->ServantEquipHaveStatusFilterKindList;
    if ( !RarityFilterKindList )
      goto LABEL_34;
    v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                             (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
      || (HaveStatusFilter = ListViewSort__IsMatchServantEquipHaveStatusFilter(
                               sort,
                               this->fields._UserServantEntity_k__BackingField,
                               this->fields.servantEntity,
                               0,
                               0LL),
          result = 0,
          HaveStatusFilter) )
    {
      RarityFilterKindList = (System_Int32Enum_array *)sub_1BCB0A0(ListViewSort_FilterKind___TypeInfo, 1LL);
      if ( RarityFilterKindList )
      {
        if ( !RarityFilterKindList->max_length )
          sub_1BCB25C(RarityFilterKindList, RarityFilterKindList, v18);
        RarityFilterKindList->m_Items[1] = 39;
        return ListViewSort__IsUnSelectedAllTargetFilters(
                 sort,
                 (ListViewSort_FilterKind_array *)RarityFilterKindList,
                 0LL)
            || !ListViewSort__GetFilter(sort, 39, 0LL)
            || this->fields._IsSwapChoice_k__BackingField != this->fields._IsChoice_k__BackingField;
      }
LABEL_34:
      sub_1BCB254(RarityFilterKindList, sort);
    }
  }
  return result;
}


bool __fastcall ServantOperationListViewItem__IsMatchServantFilter(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *v7; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  __int64 v17; // x2
  __int64 v18; // x1
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x21
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v24; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v32; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v34; // w0

  if ( (byte_4B18664 & 1) == 0 )
  {
    sub_1BCAFF8(&FilterKindList_TypeInfo, sort);
    sub_1BCAFF8(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_4B18664 = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v7->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_63;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v9 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v9 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v9->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v11->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields._UserServantEntity_k__BackingField, 0LL) )
  {
    return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v13->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields._UserServantEntity_k__BackingField, 0LL) )
  {
    return 0;
  }
  v15 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v15->static_fields->ServantTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_63:
    sub_1BCB254(ClassGroupFilterKindList, sort);
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
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
          goto LABEL_63;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v24 = this->fields._UserServantEntity_k__BackingField;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v24 )
          goto LABEL_63;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v24, -1, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v26, v27);
        ClassGroupFilterKindList = (__int64)this->fields._UserServantEntity_k__BackingField;
        if ( !ClassGroupFilterKindList )
          goto LABEL_63;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         -1,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1BCAF9C(
          (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v29,
          v30);
      }
    }
    ClassGroupFilterKindList = sub_1BCB0A0(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    v18 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_64;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1BCB0A0(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    v18 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_64;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v32 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v34 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v32) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v34 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v34 )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(
          sort,
          this->fields._UserServantEntity_k__BackingField,
          this->fields.servantEntity,
          0LL)
    || !ListViewSort__IsMatchServantSubAttriFilter(
          sort,
          this->fields._UserServantEntity_k__BackingField,
          this->fields.servantEntity,
          0LL) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_1BCB0A0(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v18 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_64:
    sub_1BCB25C(ClassGroupFilterKindList, v18, v17);
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields._IsSwapChoice_k__BackingField == this->fields._IsChoice_k__BackingField )
  {
    return 0;
  }
  v19 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v19->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v20, 0LL)
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  if ( (byte_4B18663 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4B18663 = 1;
  }
  if ( this->fields._UserServantEntity_k__BackingField )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame || (UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField) == 0LL )
      sub_1BCB254(SelfUserGame, v4);
    v6 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
    pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
    *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v9.fields.fakeValue = v6;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v8 = v9;
    this->fields._IsPush_k__BackingField = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(
                                                              &v8,
                                                              0LL);
  }
}


void __fastcall ServantOperationListViewItem__SetCommandCodeData(
        ServantOperationListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CGThumbnailListItem_o *p_UserCommandCodeEntity_k__BackingField; // x0
  __int64 v10; // x20
  __int64 v11; // x21
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  struct CommandCodeEntity_o **p_commandCodeEntity; // x19
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B1866A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CommandCodeMaster___, userCommandCodeEntity);
    sub_1BCAFF8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v6);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B1866A = 1;
  }
  p_UserCommandCodeEntity_k__BackingField = (CGThumbnailListItem_o *)&this->fields._UserCommandCodeEntity_k__BackingField;
  if ( userCommandCodeEntity )
  {
    p_UserCommandCodeEntity_k__BackingField->klass = (CGThumbnailListItem_c *)userCommandCodeEntity;
    sub_1BCAF9C(p_UserCommandCodeEntity_k__BackingField, (int32_t)userCommandCodeEntity, (int32_t)method, v3);
    v11 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v21.fields.currentCryptoKey = v11;
    *(_QWORD *)&v21.fields.fakeValue = v10;
    this->fields._CommandCodeId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                    v21,
                                                    0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    if ( !Instance
      || (Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields._CommandCodeId_k__BackingField,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__),
          this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity,
          sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.commandCodeEntity, (int32_t)Entity, v15, v16),
          (Instance = (DataManager_o *)this->fields._UserCommandCodeEntity_k__BackingField) == 0LL)
      || (Instance = (DataManager_o *)UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0LL),
          UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField,
          this->fields._IsLock_k__BackingField = (unsigned __int8)Instance & 1,
          !UserCommandCodeEntity_k__BackingField) )
    {
LABEL_12:
      sub_1BCB254(Instance, v13);
    }
    this->fields._IsChoice_k__BackingField = UserCommandCodeEntity__IsChoice(UserCommandCodeEntity_k__BackingField, 0LL);
    this->fields._IsPush_k__BackingField = 0;
  }
  else
  {
    this->fields._UserCommandCodeEntity_k__BackingField = 0LL;
    sub_1BCAF9C(p_UserCommandCodeEntity_k__BackingField, 0, (int32_t)method, v3);
    this->fields.commandCodeEntity = 0LL;
    p_commandCodeEntity = &this->fields.commandCodeEntity;
    sub_1BCAF9C((CGThumbnailListItem_o *)p_commandCodeEntity, 0, v19, v20);
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
  if ( (byte_4B18662 & 1) == 0 )
  {
    this = (ServantOperationListViewItem_o *)sub_1BCAFF8(
                                               &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                               *(_QWORD *)&type);
    byte_4B18662 = 1;
  }
  if ( type == 1 )
  {
    servantEntity = v4->fields.servantEntity;
    if ( !servantEntity )
      sub_1BCB254(this, *(_QWORD *)&type);
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
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
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
  int32_t v14; // [xsp+14h] [xbp-3Ch] BYREF
  int32_t v15[2]; // [xsp+18h] [xbp-38h] BYREF
  int64_t time; // [xsp+20h] [xbp-30h] BYREF
  int32_t adjustDataValue; // [xsp+2Ch] [xbp-24h] BYREF
  int32_t dataValue; // [xsp+38h] [xbp-18h] BYREF
  int32_t iconKind; // [xsp+3Ch] [xbp-14h] BYREF

  adjustDataValue = 0;
  *(_QWORD *)v15 = 0LL;
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
                                        &iconKind,
                                        &dataValue,
                                        &adjustDataValue,
                                        &time,
                                        v6);
  if ( ((unsigned __int8)iconLabelInfo1 & 1) != 0 )
  {
    if ( !v5 )
      goto LABEL_26;
    iconLabelInfo1 = this->fields.iconLabelInfo1;
    sort = (ListViewSort_o *)(unsigned int)iconKind;
    if ( v5->fields.sortKind == 1 )
    {
      if ( !iconLabelInfo1 )
        goto LABEL_26;
      IconLabelInfo__SetTime(iconLabelInfo1, iconKind, time, 0, 0, 0, 0LL);
      UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
      if ( UserServantEntity_k__BackingField && UserServantEntity__IsMaterialTd(UserServantEntity_k__BackingField, 0LL) )
        this->fields.isNeedAdjustIconLabelScale = 1;
    }
    else
    {
      if ( !iconLabelInfo1 )
        goto LABEL_26;
      IconLabelInfo__Set_40103972(iconLabelInfo1, iconKind, dataValue, adjustDataValue, 0, 0, 0, 0, 0, 0LL);
    }
  }
  if ( ServantOperationListViewItem__GetIconLabelInfoData2(this, v5, &v15[1], v15, &v14, v7) )
  {
    iconLabelInfo1 = this->fields.iconLabelInfo2;
    if ( !iconLabelInfo1 )
      goto LABEL_26;
    IconLabelInfo__Set_40103972(iconLabelInfo1, v15[1], v15[0], v14, 0, 0, 0, 0, 0, 0LL);
  }
  this->fields.sortValue0 = ServantOperationListViewItem__GetSortValue0(
                              this,
                              v5,
                              this->fields._IsSwapChoice_k__BackingField != this->fields._IsChoice_k__BackingField,
                              &this->fields.sortValue0B,
                              v9);
  SortValue1 = (ServantOperationListViewItem_o *)ServantOperationListViewItem__GetSortValue1(this, v5, dataValue, v10);
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
      sub_1BCB254(iconLabelInfo1, sort);
    }
  }
}


void __fastcall ServantOperationListViewItem__SetServantData(
        ServantOperationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct UserServantEntity_o **p_UserServantEntity_k__BackingField; // x20
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct UserServantEntity_o *v13; // x8
  __int64 v14; // x21
  __int64 v15; // x22
  Il2CppObject *Entity; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  UserServantEntity_o *v20; // x8
  bool IsMaterialTd; // w8
  bool IsFriendShipSvtEq_k__BackingField; // w9
  UserServantEntity_o *v23; // x8
  struct UserServantEntity_o *v24; // x8
  __int128 v25; // q1
  struct System_Threading_Thread_o *writeMasterDataThread; // x20
  struct ServantEntity_o **p_servantEntity; // x19
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4B18669 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, userServantEntity);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B18669 = 1;
  }
  p_UserServantEntity_k__BackingField = &this->fields._UserServantEntity_k__BackingField;
  if ( userServantEntity )
  {
    *p_UserServantEntity_k__BackingField = userServantEntity;
    sub_1BCAF9C(
      (CGThumbnailListItem_o *)&this->fields._UserServantEntity_k__BackingField,
      (int32_t)userServantEntity,
      (int32_t)method,
      v3);
    v13 = *p_UserServantEntity_k__BackingField;
    if ( !*p_UserServantEntity_k__BackingField )
      goto LABEL_21;
    v15 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v32.fields.currentCryptoKey = v15;
    *(_QWORD *)&v32.fields.fakeValue = v14;
    this->fields._SvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v32, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_21;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields._SvtId_k__BackingField,
               (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this->fields.servantEntity = (struct ServantEntity_o *)Entity;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v17, v18);
    Instance = (DataManager_o *)this->fields._UserServantEntity_k__BackingField;
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    this->fields._IsFriendShipSvtEq_k__BackingField = (unsigned __int8)Instance & 1;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_21;
    Instance = (DataManager_o *)UserServantEntity__IsChocolateSvtEquip(UserServantEntity_k__BackingField, 0LL);
    v20 = this->fields._UserServantEntity_k__BackingField;
    this->fields._IsChocolateSvtEquip_k__BackingField = (unsigned __int8)Instance & 1;
    if ( !v20 )
      goto LABEL_21;
    IsMaterialTd = UserServantEntity__IsMaterialTd(v20, 0LL);
    IsFriendShipSvtEq_k__BackingField = this->fields._IsFriendShipSvtEq_k__BackingField;
    Instance = (DataManager_o *)this->fields._UserServantEntity_k__BackingField;
    this->fields._IsMaterialTdSvt_k__BackingField = IsMaterialTd;
    this->fields._IsNotSelection_k__BackingField = IsFriendShipSvtEq_k__BackingField;
    if ( !Instance
      || (Instance = (DataManager_o *)UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL),
          v23 = this->fields._UserServantEntity_k__BackingField,
          this->fields._IsLock_k__BackingField = (unsigned __int8)Instance & 1,
          !v23)
      || (this->fields._IsChoice_k__BackingField = UserServantEntity__IsChoice(v23, 0LL),
          (Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL)) == 0LL)
      || (v24 = *p_UserServantEntity_k__BackingField) == 0LL )
    {
LABEL_21:
      sub_1BCB254(Instance, v12);
    }
    v25 = *(_OWORD *)&v24->fields.id.fields.fakeValue;
    writeMasterDataThread = Instance->fields.writeMasterDataThread;
    *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&v24->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v31.fields.fakeValue = v25;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v30 = v31;
    this->fields._IsPush_k__BackingField = writeMasterDataThread == (struct System_Threading_Thread_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v30, 0LL);
  }
  else
  {
    this->fields._UserServantEntity_k__BackingField = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._UserServantEntity_k__BackingField, 0, (int32_t)method, v3);
    this->fields.servantEntity = 0LL;
    p_servantEntity = &this->fields.servantEntity;
    sub_1BCAF9C((CGThumbnailListItem_o *)p_servantEntity, 0, v28, v29);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v18; // q0
  bool IsKeepServantEquip; // w20
  int64_t v20; // x1
  const MethodInfo *v21; // x4
  bool v22; // w3
  ServantOperationListViewItem_o *v23; // x0
  System_Int64_array *v24; // x2
  System_Int32_array *CategoryIdList; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  CGThumbnailListItem_o *p_commandCodeCategoryIdList; // x0
  System_Collections_ObjectModel_Collection_T__o *sortValue0B; // x21
  int32_t v30; // w22
  int64_t sortValue0; // x8
  __int128 v32; // q0
  int64_t v33; // x23
  struct System_String_o *sortStr1; // x23
  Il2CppObject *Master_object; // x21
  bool IsSettingServant; // w0
  Il2CppObject *v37; // x21
  bool IsSettingEquip; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-1B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+40h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+60h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+80h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+A0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+C0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+E0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+100h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+120h] [xbp-90h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+140h] [xbp-70h]

  v8 = this;
  if ( (byte_4B1866D & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__,
      *(_QWORD *)&type);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__, v9);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v10);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserRecommendSupportMaster___, v11);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantGrandMaster___, v12);
    sub_1BCAFF8(&DataManager_TypeInfo, v13);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__, v14);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    this = (ServantOperationListViewItem_o *)sub_1BCAFF8(
                                               &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                               v16);
    byte_4B1866D = 1;
  }
  if ( type == 2 )
  {
    this = (ServantOperationListViewItem_o *)v8->fields._UserCommandCodeEntity_k__BackingField;
    v8->fields.partyIndex = -1;
    if ( this )
    {
      CategoryIdList = UserCommandCodeEntity__GetCategoryIdList((UserCommandCodeEntity_o *)this, 0LL);
      p_commandCodeCategoryIdList = (CGThumbnailListItem_o *)&v8->fields.commandCodeCategoryIdList;
      v8->fields.commandCodeCategoryIdList = CategoryIdList;
      goto LABEL_60;
    }
    goto LABEL_62;
  }
  if ( type != 1 )
    return;
  UserServantEntity_k__BackingField = v8->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_62;
  v18 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v18;
  this = (ServantOperationListViewItem_o *)v8->fields.servantEntity;
  if ( !this )
    goto LABEL_62;
  IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)this, 0LL);
  if ( IsKeepServantEquip )
  {
    v48 = v49;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v47 = v48;
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v47, 0LL);
    v22 = 1;
    v23 = v8;
    v24 = partyUserEquipList;
  }
  else
  {
    v48 = v49;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v46 = v48;
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v46, 0LL);
    v23 = v8;
    v24 = partyUserServantList;
    v22 = 0;
  }
  v8->fields.partyIndex = ServantOperationListViewItem__GetPartyIndex(v23, v20, v24, v22, v21);
  this = (ServantOperationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (ServantOperationListViewItem_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___)) == 0LL
    || (sortValue0B = (System_Collections_ObjectModel_Collection_T__o *)this->fields.sortValue0B) == 0LL )
  {
LABEL_62:
    sub_1BCB254(this, *(_QWORD *)&type);
  }
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)this->fields.sortValue0B,
         (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__) < 1 )
    goto LABEL_34;
  v30 = 0;
  while ( 1 )
  {
    this = (ServantOperationListViewItem_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                               sortValue0B,
                                               v30,
                                               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__);
    if ( !this )
      goto LABEL_62;
    if ( !IsKeepServantEquip )
      break;
    sortValue0 = this->fields.sortValue0;
    if ( sortValue0 )
    {
      v32 = *(_OWORD *)(sortValue0 + 40);
      *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(sortValue0 + 24);
      *(_OWORD *)&v48.fields.fakeValue = v32;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v45 = v48;
      v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v45, 0LL);
      v44 = v49;
      if ( v33 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v44, 0LL) )
      {
        *(_WORD *)&v8->fields._IsUseSupportEquip_k__BackingField = 257;
        goto LABEL_34;
      }
    }
LABEL_31:
    if ( ++v30 >= System_Collections_ObjectModel_Collection_object___get_Count(
                    sortValue0B,
                    (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__) )
      goto LABEL_34;
  }
  sortStr1 = this->fields.sortStr1;
  v48 = v49;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v48;
  if ( sortStr1 != (struct System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(
                                               &v43,
                                               0LL) )
    goto LABEL_31;
  v8->fields._IsUseSupportServant_k__BackingField = 1;
LABEL_34:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  if ( !IsKeepServantEquip )
  {
    v48 = v49;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v41 = v48;
    this = (ServantOperationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(
                                               &v41,
                                               0LL);
    if ( Master_object )
    {
      v8->fields._IsUseRecommendSupportServant_k__BackingField = UserRecommendSupportMaster__IsSettingServant(
                                                                   (UserRecommendSupportMaster_o *)Master_object,
                                                                   (int64_t)this,
                                                                   0,
                                                                   0LL);
      goto LABEL_46;
    }
    goto LABEL_62;
  }
  v48 = v49;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v42 = v48;
  this = (ServantOperationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(
                                             &v42,
                                             0LL);
  if ( !Master_object )
    goto LABEL_62;
  IsSettingServant = UserRecommendSupportMaster__IsSettingServant(
                       (UserRecommendSupportMaster_o *)Master_object,
                       (int64_t)this,
                       1,
                       0LL);
  v8->fields._IsUseRecommendSupportEquip_k__BackingField = IsSettingServant;
  if ( IsSettingServant )
    v8->fields._IsUse_k__BackingField = 1;
LABEL_46:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v37 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !IsKeepServantEquip )
  {
    v48 = v49;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v39 = v48;
    this = (ServantOperationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(
                                               &v39,
                                               0LL);
    if ( v37 )
    {
      v8->fields._IsGrandServant_k__BackingField = UserServantGrandMaster__IsSettingServant(
                                                     (UserServantGrandMaster_o *)v37,
                                                     (int64_t)this,
                                                     0LL);
      goto LABEL_58;
    }
    goto LABEL_62;
  }
  v48 = v49;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v40 = v48;
  this = (ServantOperationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(
                                             &v40,
                                             0LL);
  if ( !v37 )
    goto LABEL_62;
  IsSettingEquip = UserServantGrandMaster__IsSettingEquip((UserServantGrandMaster_o *)v37, (int64_t)this, 0LL);
  v8->fields._IsUseGrandEquip_k__BackingField = IsSettingEquip;
  if ( IsSettingEquip )
    v8->fields._IsUse_k__BackingField = 1;
LABEL_58:
  this = (ServantOperationListViewItem_o *)v8->fields._UserServantEntity_k__BackingField;
  if ( !this )
    goto LABEL_62;
  CategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)this, 1, 0LL);
  p_commandCodeCategoryIdList = (CGThumbnailListItem_o *)&v8->fields.categoryIdList;
  v8->fields.categoryIdList = CategoryIdList;
LABEL_60:
  sub_1BCAF9C(p_commandCodeCategoryIdList, (int32_t)CategoryIdList, v26, v27);
}


bool __fastcall ServantOperationListViewItem__SetSortValue(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ServantOperationListViewItem_c *klass; // x8
  const MethodInfo *v6; // x2
  char v7; // w21

  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0 = 0LL;
  this->fields.sortValue1 = -1LL;
  v7 = ((__int64 (__fastcall *)(ServantOperationListViewItem_o *, ListViewSort_o *, void *))klass->vtable._5_IsMatchFilter.method)(
         this,
         sort,
         klass[1]._1.image);
  if ( (v7 & 1) != 0 )
    ServantOperationListViewItem__SetIconInfoLabel(this, sort, v6);
  return v7 & 1;
}


void __fastcall ServantOperationListViewItem__StatusOverWrite(
        ServantOperationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  ServantOperationListViewItem_o *v3; // x19

  if ( !userServantEntity
    || (v3 = this,
        (this = (ServantOperationListViewItem_o *)UserServantEntity__GetOverwriteStatus(userServantEntity, 0LL, 0LL)) == 0LL) )
  {
    sub_1BCB254(this, userServantEntity);
  }
  *(int8x16_t *)&v3->fields.rarity = vextq_s8(
                                       *(int8x16_t *)&this->fields.selectNum,
                                       *(int8x16_t *)&this->fields.selectNum,
                                       8uLL);
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
      || this->fields.isFortification
      || this->fields._IsUseRecommendSupportServant_k__BackingField
      || this->fields._IsGrandServant_k__BackingField;
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
    sub_1BCB254(v6, v5);
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


bool __fastcall ServantOperationListViewItem__get_IsGrandServant(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsGrandServant_k__BackingField;
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
    sub_1BCB254(0LL, method);
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


bool __fastcall ServantOperationListViewItem__get_IsUseGrandEquip(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUseGrandEquip_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsUseRecommendSupportEquip(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUseRecommendSupportEquip_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__get_IsUseRecommendSupportServant(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUseRecommendSupportServant_k__BackingField;
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4B18672 & 1) == 0 )
  {
    this = (ServantOperationListViewItem_o *)sub_1BCAFF8(
                                               &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                               method);
    byte_4B18672 = 1;
  }
  UserCommandCodeEntity_k__BackingField = v2->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    sub_1BCB254(this, method);
  v4 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v6, 0LL);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_4B18671 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4B18671 = 1;
  }
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    return 0LL;
  v4 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v6, 0LL);
}


void __fastcall ServantOperationListViewItem__setUserCommandCodeEntity(
        ServantOperationListViewItem_o *this,
        UserCommandCodeEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._UserCommandCodeEntity_k__BackingField = entity;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int32_t)entity,
    (int32_t)method,
    v3);
}


void __fastcall ServantOperationListViewItem__setUserServantEntity(
        ServantOperationListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UserServantEntity_o **p_UserServantEntity_k__BackingField; // x20
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  struct ServantEntity_o *servantEntity; // x0
  UserServantEntity_o *v9; // x8
  __int64 rarity; // x20
  __int64 collectionNo; // x21
  __int64 lv; // x22

  this->fields._UserServantEntity_k__BackingField = entity;
  p_UserServantEntity_k__BackingField = &this->fields._UserServantEntity_k__BackingField;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)entity,
    (int32_t)method,
    v3);
  ServantOperationListViewItem__StatusOverWrite(this, *p_UserServantEntity_k__BackingField, v6);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity || (v9 = *p_UserServantEntity_k__BackingField) == 0LL )
    sub_1BCB254(servantEntity, v7);
  rarity = (unsigned int)this->fields.rarity;
  collectionNo = servantEntity->fields.collectionNo;
  lv = v9->fields.lv;
  this->fields.sortValue2 = (collectionNo << 16) | (rarity << 48) | (2 * lv) | ServantEntity__get_IsServantMaterialTd(
                                                                                 servantEntity,
                                                                                 0LL);
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
    sub_1BCB254(0LL, value);
  this->fields._DragSelectNum_k__BackingField = value - 1;
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


void __fastcall ServantOperationListViewItem__set_IsGrandServant(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsGrandServant_k__BackingField = value;
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


void __fastcall ServantOperationListViewItem__set_IsUseGrandEquip(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUseGrandEquip_k__BackingField = value;
}


void __fastcall ServantOperationListViewItem__set_IsUseRecommendSupportEquip(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUseRecommendSupportEquip_k__BackingField = value;
}


void __fastcall ServantOperationListViewItem__set_IsUseRecommendSupportServant(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUseRecommendSupportServant_k__BackingField = value;
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
  const MethodInfo *v3; // x3

  this->fields._UserCommandCodeEntity_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ServantOperationListViewItem__set_UserServantEntity(
        ServantOperationListViewItem_o *this,
        UserServantEntity_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._UserServantEntity_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}