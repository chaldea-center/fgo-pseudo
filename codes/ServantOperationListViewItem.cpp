void ServantOperationListViewItem___ctor(
        ServantOperationListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userServantEntity,
        System_Int64_array *partyUserServantIds,
        System_Int64_array *partyUserEquipIds,
        bool isFavorite,
        const MethodInfo *method)
{
  IconLabelInfo_o *v13; // x25
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  IconLabelInfo_o *v16; // x25
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x4
  int64_t Instance; // x0
  __int64 v26; // x1
  int64_t v27; // x8
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int64 rarity; // x20
  __int64 v30; // x21
  __int64 lv; // x22
  struct UserServantEntity_o *v32; // x8
  __int64 v33; // x20
  __int64 v34; // x21
  struct UserServantEntity_o *v35; // x8
  __int128 v36; // q1
  struct UserServantEntity_o *v37; // x8
  int32_t adjustHp; // w20
  __int64 v39; // x9
  UserServantEntity_o *v40; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x1
  int64_t UserSvtId; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+20h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4C233B6 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C2D490(&IconLabelInfo_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C233B6 = 1;
  }
  v13 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0);
  this->fields.iconLabelInfo1 = v13;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v13, v14, v15);
  v16 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0);
  this->fields.iconLabelInfo2 = v16;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v16, v17, v18);
  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  ServantOperationListViewItem__Init(this, index, v19);
  ServantOperationListViewItem__SetServantData(this, userServantEntity, v20);
  ServantOperationListViewItem__SetCommandCodeData(this, 0, v21);
  ServantOperationListViewItem__SetData(this, 1, v22);
  ServantOperationListViewItem__StatusOverWrite(this, userServantEntity, v23);
  ServantOperationListViewItem__SetServantUses(this, 1, partyUserServantIds, partyUserEquipIds, v24);
  this->fields._IsFavorite_k__BackingField = isFavorite;
  this->fields.amountSortValue = -1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_22;
  v27 = *(int *)(Instance + 52);
  Instance = (int64_t)this->fields.servantEntity;
  this->fields.priority = v27;
  this->fields.sortValue1B = v27;
  if ( !Instance )
    goto LABEL_22;
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_22;
  rarity = (unsigned int)this->fields.rarity;
  v30 = *(int *)(Instance + 208);
  lv = UserServantEntity_k__BackingField->fields.lv;
  Instance = ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Instance, 0);
  v32 = this->fields._UserServantEntity_k__BackingField;
  this->fields.sortValue2 = (v30 << 16) | (rarity << 48) | (2 * lv) | Instance & 1;
  if ( !v32 )
    goto LABEL_22;
  v34 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
  v33 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v51.fields.currentCryptoKey = v34;
  *(_QWORD *)&v51.fields.fakeValue = v33;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v51, 0);
  v35 = this->fields._UserServantEntity_k__BackingField;
  this->fields.sortValue2B = (int)Instance;
  if ( !v35 )
    goto LABEL_22;
  v36 = *(_OWORD *)&v35->fields.id.fields.fakeValue;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&v35->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v36;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v49 = v50;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v49, 0);
  v37 = this->fields._UserServantEntity_k__BackingField;
  this->fields.sortValueLast = Instance;
  if ( !v37 )
    goto LABEL_22;
  adjustHp = v37->fields.adjustHp;
  Instance = (int64_t)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Instance = (int64_t)BalanceConfig_TypeInfo;
    v37 = this->fields._UserServantEntity_k__BackingField;
  }
  v39 = *(_QWORD *)(Instance + 184);
  this->fields.hpReinforceValue = *(_DWORD *)(v39 + 336) * adjustHp;
  if ( !v37 )
    goto LABEL_22;
  this->fields.atkReinforceValue = *(_DWORD *)(v39 + 332) * v37->fields.adjustAtk;
  UserServantEntity__getAdjustMaxData(
    v37,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  Instance = (int64_t)this->fields._UserServantEntity_k__BackingField;
  if ( !Instance
    || (Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0),
        v40 = this->fields._UserServantEntity_k__BackingField,
        this->fields.dispLimitCount = Instance,
        !v40)
    || (SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v40, -1, -1, 0),
        this->fields.skillCategoryIdList = SkillCategoryIdList,
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v42, v43),
        (Instance = (int64_t)this->fields._UserServantEntity_k__BackingField) == 0) )
  {
LABEL_22:
    sub_1C2D6EC(Instance, v26);
  }
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   -1,
                                   0);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.tdCategoryIdList, (int32_t)TreasureDeviceCategoryIdList, v45, v46);
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(this, v47);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0);
}


void ServantOperationListViewItem___ctor_34821844(
        ServantOperationListViewItem_o *this,
        int32_t index,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        bool isEquiped,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  IconLabelInfo_o *v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x4
  __int64 v20; // x0
  __int64 v21; // x1
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v23; // x21
  __int64 v24; // x22
  __int128 v25; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4C233B7 & 1) == 0 )
  {
    sub_1C2D490(&IconLabelInfo_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C233B7 = 1;
  }
  v9 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0);
  this->fields.iconLabelInfo1 = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v9, v10, v11);
  v12 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v12, 0);
  this->fields.iconLabelInfo2 = v12;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v12, v13, v14);
  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  ServantOperationListViewItem__Init(this, index, v15);
  ServantOperationListViewItem__SetServantData(this, 0, v16);
  ServantOperationListViewItem__SetCommandCodeData(this, userCommandCodeEntity, v17);
  ServantOperationListViewItem__SetData(this, 2, v18);
  ServantOperationListViewItem__SetServantUses(this, 2, 0, 0, v19);
  commandCodeEntity = this->fields.commandCodeEntity;
  this->fields._IsCommandCodeEquiped_k__BackingField = isEquiped;
  this->fields.amountSortValue = -1;
  if ( !commandCodeEntity )
    goto LABEL_10;
  v24 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v23 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v24;
  *(_QWORD *)&v28.fields.fakeValue = v23;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v28, 0);
  this->fields.sortValue1B = (int)v20;
  if ( !userCommandCodeEntity )
LABEL_10:
    sub_1C2D6EC(v20, v21);
  v25 = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v25;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v26 = v27;
  this->fields.sortValueLast = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v26, 0);
}


void ServantOperationListViewItem__ClearIconLabelInfo(
        ServantOperationListViewItem_o *this,
        IconLabelInfo_o *iconLabelInfo,
        const MethodInfo *method)
{
  IconLabelInfo_o *v4; // x0

  if ( (byte_4C233C6 & 1) == 0 )
  {
    sub_1C2D490(&IconLabelInfo_TypeInfo);
    byte_4C233C6 = 1;
  }
  if ( iconLabelInfo )
  {
    IconLabelInfo__Clear(iconLabelInfo, 0);
  }
  else
  {
    v4 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v4, 0);
  }
}


int32_t ServantOperationListViewItem__GetAttribute(
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
    sub_1C2D6EC(this, type);
  if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)this, 0) )
    return 2;
  else
    return 0;
}


int32_t ServantOperationListViewItem__GetClassId(
        ServantOperationListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  if ( type != 1 )
    return -1;
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_1C2D6EC(this, type);
  return servantEntity->fields.classId;
}


int32_t ServantOperationListViewItem__GetFriendship(
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-60h]
  int32_t friendshipRank; // [xsp+4Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4C233C2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C233C2 = 1;
  }
  result = 0;
  friendshipRank = 0;
  if ( type == 1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_15;
    v9 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.userId.fields.fakeValue;
    v10 = (UserServantCollectionMaster_o *)Instance;
    *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v16.fields.fakeValue = v9;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v15 = v16;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v15, 0);
    v11 = this->fields._UserServantEntity_k__BackingField;
    if ( !v11 )
      goto LABEL_15;
    v12 = Instance;
    v14 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v18.fields.currentCryptoKey = v14;
    *(_QWORD *)&v18.fields.fakeValue = v13;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v18, 0);
    if ( !v10 || (Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v10, v12, Instance, 0)) == 0 )
LABEL_15:
      sub_1C2D6EC(Instance, v7);
    UserServantCollectionEntity__getFriendShipRankInfo(
      (UserServantCollectionEntity_o *)Instance,
      &friendshipRank,
      &this->fields.friendshipMax,
      0);
    return friendshipRank;
  }
  return result;
}


bool ServantOperationListViewItem__GetIconLabelInfoData1(
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
  if ( (byte_4C233BD & 1) == 0 )
  {
    this = (ServantOperationListViewItem_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C233BD = 1;
  }
  *dataValue = 0;
  *adjustDataValue = 0;
  *time = 0;
  if ( !sort )
    sub_1C2D6EC(this, sort);
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
      LevelMax = UserServantEntity__getLevelMax(v13, 0);
      goto LABEL_15;
    case 4:
      v17 = v12->fields._UserServantEntity_k__BackingField;
      if ( !v17 )
        goto LABEL_27;
      *iconKind = 33;
      UserServantEntity__getTreasureDeviceInfo_42942260(v17, dataValue, adjustDataValue, 0);
      goto LABEL_31;
    case 5:
      v18 = v12->fields._UserServantEntity_k__BackingField;
      if ( !v18 )
        goto LABEL_27;
      *iconKind = 3;
      *dataValue = v12->fields.hp;
      LevelMax = UserServantEntity__get_HpBoostValue(v18, 0);
      goto LABEL_15;
    case 6:
      v19 = v12->fields._UserServantEntity_k__BackingField;
      if ( !v19 )
        goto LABEL_27;
      *iconKind = 5;
      *dataValue = v12->fields.atk;
      LevelMax = UserServantEntity__get_AtkBoostValue(v19, 0);
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
      *dataValue = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v25, 0);
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


bool ServantOperationListViewItem__GetIconLabelInfoData2(
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
    sub_1C2D6EC(UserServantEntity_k__BackingField, 0);
  sortKind = sort->fields.sortKind;
  if ( (sortKind & 0xFFFFFFFC) == 4 || (v9 = 0, sortKind <= 0x10) && ((1 << sortKind) & 0x18002) != 0 )
  {
    *iconKind = 2;
    *dataValue = UserServantEntity_k__BackingField->fields.lv;
    LevelMax = UserServantEntity__getLevelMax(UserServantEntity_k__BackingField, 0);
    v9 = 1;
    *adjustDataValue = LevelMax;
  }
  return v9;
}


bool ServantOperationListViewItem__GetIsCommandCardOpenServant(
        ServantOperationListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  struct ServantEntity_o *v9; // x8
  __int64 v10; // x21
  __int64 v11; // x22
  int64_t v12; // x19
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4C233C5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C233C5 = 1;
  }
  entity = 0;
  if ( type != 1 )
    goto LABEL_20;
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    if ( ServantEntity__get_IsServant(servantEntity, 0) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      v9 = this->fields.servantEntity;
      if ( !v9 )
        goto LABEL_22;
      v11 = *(_QWORD *)&v9->fields.id.fields.currentCryptoKey;
      v10 = *(_QWORD *)&v9->fields.id.fields.fakeValue;
      v12 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v15.fields.currentCryptoKey = v11;
      *(_QWORD *)&v15.fields.fakeValue = v10;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v15, 0);
      if ( !MasterData_object )
        goto LABEL_22;
      if ( UserServantCommandCodeMaster__TryGetEntity(
             (UserServantCommandCodeMaster_o *)MasterData_object,
             &entity,
             v12,
             (int)Instance,
             0) )
      {
        Instance = (DataManager_o *)entity;
        if ( entity )
        {
          LOBYTE(servantEntity) = UserServantCommandCodeEntity__IsCommandCardSlotOpen(entity, 0);
          return (unsigned __int8)servantEntity & 1;
        }
LABEL_22:
        sub_1C2D6EC(Instance, v7);
      }
    }
LABEL_20:
    LOBYTE(servantEntity) = 0;
  }
  return (unsigned __int8)servantEntity & 1;
}


bool ServantOperationListViewItem__GetIsDispInfo(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int32_t sortKind; // w8
  unsigned int v4; // w8
  _BOOL4 v5; // w0

  if ( !sort )
    sub_1C2D6EC(this, 0);
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


bool ServantOperationListViewItem__GetIsEquippedCommandCodeServant(
        ServantOperationListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  struct ServantEntity_o *v9; // x8
  __int64 v10; // x21
  __int64 v11; // x22
  int64_t v12; // x19
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4C233C4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C233C4 = 1;
  }
  entity = 0;
  if ( type != 1 )
    goto LABEL_20;
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    if ( ServantEntity__get_IsServant(servantEntity, 0) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      v9 = this->fields.servantEntity;
      if ( !v9 )
        goto LABEL_22;
      v11 = *(_QWORD *)&v9->fields.id.fields.currentCryptoKey;
      v10 = *(_QWORD *)&v9->fields.id.fields.fakeValue;
      v12 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v15.fields.currentCryptoKey = v11;
      *(_QWORD *)&v15.fields.fakeValue = v10;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v15, 0);
      if ( !MasterData_object )
        goto LABEL_22;
      if ( UserServantCommandCodeMaster__TryGetEntity(
             (UserServantCommandCodeMaster_o *)MasterData_object,
             &entity,
             v12,
             (int)Instance,
             0) )
      {
        Instance = (DataManager_o *)entity;
        if ( entity )
        {
          LOBYTE(servantEntity) = UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0);
          return (unsigned __int8)servantEntity & 1;
        }
LABEL_22:
        sub_1C2D6EC(Instance, v7);
      }
    }
LABEL_20:
    LOBYTE(servantEntity) = 0;
  }
  return (unsigned __int8)servantEntity & 1;
}


int32_t ServantOperationListViewItem__GetPartyIndex(
        ServantOperationListViewItem_o *this,
        int64_t userServantId,
        System_Int64_array *ids,
        bool isEquip,
        const MethodInfo *method)
{
  int max_length; // w9
  __int64 v7; // x0

  if ( !ids )
    sub_1C2D6EC(this, userServantId);
  max_length = ids->max_length;
  if ( max_length < 1 )
  {
LABEL_7:
    LODWORD(v7) = -1;
  }
  else
  {
    v7 = 0;
    while ( 1 )
    {
      if ( max_length == (_DWORD)v7 )
        sub_1C2D6F4(v7, userServantId, ids);
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
int32_t ServantOperationListViewItem__GetRarity(
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

  if ( (byte_4C233C1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C233C1 = 1;
  }
  if ( type == 2 )
  {
    UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
    if ( !UserCommandCodeEntity_k__BackingField )
      goto LABEL_15;
    return UserCommandCodeEntity__GetRarity((UserCommandCodeEntity_o *)UserCommandCodeEntity_k__BackingField, 0);
  }
  else
  {
    if ( type == 1 )
    {
      UserCommandCodeEntity_k__BackingField = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( UserCommandCodeEntity_k__BackingField )
      {
        UserCommandCodeEntity_k__BackingField = DataManager__GetMasterData_object_(
                                                  (DataManager_o *)UserCommandCodeEntity_k__BackingField,
                                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
        if ( UserServantEntity_k__BackingField )
        {
          v7 = (ServantLimitMaster_o *)UserCommandCodeEntity_k__BackingField;
          SvtId_k__BackingField = this->fields._SvtId_k__BackingField;
          v10 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCount.fields.currentCryptoKey;
          v9 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v12.fields.currentCryptoKey = v10;
          *(_QWORD *)&v12.fields.fakeValue = v9;
          UserCommandCodeEntity_k__BackingField = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                            v12,
                                                            0);
          if ( v7 )
          {
            UserCommandCodeEntity_k__BackingField = ServantLimitMaster__GetEntity(
                                                      v7,
                                                      SvtId_k__BackingField,
                                                      (int32_t)UserCommandCodeEntity_k__BackingField,
                                                      0);
            if ( UserCommandCodeEntity_k__BackingField )
              return *((_DWORD *)UserCommandCodeEntity_k__BackingField + 6);
          }
        }
      }
LABEL_15:
      sub_1C2D6EC(UserCommandCodeEntity_k__BackingField, *(_QWORD *)&type);
    }
    return -1;
  }
}


int64_t ServantOperationListViewItem__GetSortValue0(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        bool isDispChoice,
        int64_t *sortValue0B,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0

  *sortValue0B = 0;
  if ( !sort )
    sub_1C2D6EC(this, 0);
  if ( !sort->fields.isSmartSort )
  {
    if ( !sort->fields.isChoiceSort || !isDispChoice )
      return 0;
    return -10;
  }
  if ( sort->fields.isChoiceSort && isDispChoice )
  {
    *sortValue0B = -10;
    return -70;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity && ServantEntity__get_IsKeepServantEquip(servantEntity, 0) )
  {
    if ( this->fields._IsSwapLock_k__BackingField == this->fields._IsLock_k__BackingField
      && !this->fields._IsNotSelection_k__BackingField )
    {
      if ( this->fields._IsSwapChoice_k__BackingField != this->fields._IsChoice_k__BackingField )
        return -20;
      return 0;
    }
    return -10;
  }
  if ( this->fields._IsSwapLock_k__BackingField != this->fields._IsLock_k__BackingField )
    return -10;
  if ( this->fields._IsSwapChoice_k__BackingField != this->fields._IsChoice_k__BackingField )
    return -20;
  if ( (this->fields.partyIndex & 0x80000000) == 0 )
    return -30;
  if ( this->fields._IsGrandServant_k__BackingField )
    return -40;
  if ( this->fields.attribute )
    return -50;
  if ( this->fields._IsFavorite_k__BackingField )
    return -60;
  if ( this->fields._IsUseSupportServant_k__BackingField )
    return -70;
  if ( this->fields._IsUseRecommendSupportServant_k__BackingField )
    return -75;
  if ( !this->fields._IsPush_k__BackingField )
  {
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    if ( (!UserServantEntity_k__BackingField
       || !UserServantEntity__IsProtectedEventServant(UserServantEntity_k__BackingField, 0))
      && !this->fields.isFortification )
    {
      return 0;
    }
    return -10;
  }
  return -80;
}


// local variable allocation has failed, the output may be wrong!
int64_t ServantOperationListViewItem__GetSortValue1(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        int32_t dataValue,
        const MethodInfo *method)
{
  ServantOperationListViewItem_o *v6; // x19
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v8; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v9; // x0
  __int64 naturalAligment; // x10
  struct ServantEntity_o *servantEntity; // x8
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v13; // q1
  __int64 v14; // x10
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v16; // x20
  __int64 v17; // x21
  _OWORD v19[2]; // [xsp+0h] [xbp-90h] BYREF
  _OWORD v20[2]; // [xsp+20h] [xbp-70h] BYREF
  __int128 v21; // [xsp+40h] [xbp-50h]
  __int128 v22; // [xsp+50h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  v6 = this;
  if ( (byte_4C233BE & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantOperationListViewItem_o *)sub_1C2D490(&ServantOperationListViewManager_TypeInfo);
    byte_4C233BE = 1;
  }
  if ( !sort )
    goto LABEL_37;
  this = 0;
  switch ( sort->fields.sortKind )
  {
    case 1:
      UserServantEntity_k__BackingField = v6->fields._UserServantEntity_k__BackingField;
      if ( UserServantEntity_k__BackingField )
      {
        v8 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
        v21 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
        v22 = v8;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v9 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v20;
        v20[0] = v21;
        v20[1] = v22;
      }
      else
      {
        UserCommandCodeEntity_k__BackingField = v6->fields._UserCommandCodeEntity_k__BackingField;
        if ( !UserCommandCodeEntity_k__BackingField )
          return 0;
        v13 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
        v21 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
        v22 = v13;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v9 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v19;
        v19[0] = v21;
        v19[1] = v22;
      }
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(v9, 0);
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
          naturalAligment = ServantOperationListViewManager_TypeInfo->_2.naturalAligment;
          if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
            || (ServantOperationListViewManager_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewManager_TypeInfo )
          {
            goto LABEL_37;
          }
          this = (ServantOperationListViewItem_o *)ServantOperationListViewManager__GetAmountSortValue(
                                                     (ServantOperationListViewManager_o *)this,
                                                     v6->fields._SvtId_k__BackingField,
                                                     *(const MethodInfo **)&dataValue);
          v6->fields.amountSortValue = (int64_t)this;
        }
        servantEntity = v6->fields.servantEntity;
        if ( servantEntity )
          return (((unsigned __int64)(unsigned int)v6->fields.rarity << 32) + ((_QWORD)this << 48))
               | servantEntity->fields.collectionNo;
LABEL_37:
        sub_1C2D6EC(this, sort);
      }
      if ( !v6->fields._UserCommandCodeEntity_k__BackingField )
        return 0;
      if ( v6->fields.amountSortValue < 0 )
      {
        this = (ServantOperationListViewItem_o *)sort->fields.manager;
        if ( !this )
          goto LABEL_37;
        v14 = ServantOperationListViewManager_TypeInfo->_2.naturalAligment;
        if ( this->klass->_2.naturalAligment < (unsigned int)v14
          || (ServantOperationListViewManager_c *)this->klass->_2.typeHierarchy[v14 - 1] != ServantOperationListViewManager_TypeInfo )
        {
          goto LABEL_37;
        }
        this = (ServantOperationListViewItem_o *)ServantOperationListViewManager__GetCommandCodeAmountSortValue(
                                                   (ServantOperationListViewManager_o *)this,
                                                   v6->fields._CommandCodeId_k__BackingField,
                                                   *(const MethodInfo **)&dataValue);
        v6->fields.amountSortValue = (int64_t)this;
      }
      commandCodeEntity = v6->fields.commandCodeEntity;
      if ( !commandCodeEntity )
        goto LABEL_37;
      v17 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
      v16 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v23.fields.currentCryptoKey = v17;
      *(_QWORD *)&v23.fields.fakeValue = v16;
      return (((unsigned __int64)(unsigned int)v6->fields.rarity << 32) + (v6->fields.amountSortValue << 48))
           | CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v23, 0);
    default:
      return (int64_t)this;
  }
}


void ServantOperationListViewItem__Init(ServantOperationListViewItem_o *this, int32_t index, const MethodInfo *method)
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
  *(_QWORD *)&this->fields.hpReinforceValue = 0;
  *(_QWORD *)&this->fields.nowMaxHpReinforceValue = 0;
}


bool ServantOperationListViewItem__IsMatchCommandCodeFilter(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  __int64 v7; // x2

  if ( (byte_4C233BC & 1) == 0 )
  {
    sub_1C2D490(&FilterKindList_TypeInfo);
    sub_1C2D490(&ListViewSort_FilterKind___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4C233BC = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_18;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_18;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.commandCodeCategoryIdList, sort, 0) )
  {
    return 0;
  }
  RarityFilterKindList = (System_Int32Enum_array *)sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !RarityFilterKindList )
LABEL_18:
    sub_1C2D6EC(RarityFilterKindList, sort);
  if ( !LODWORD(RarityFilterKindList->max_length) )
    sub_1C2D6F4(RarityFilterKindList, RarityFilterKindList, v7);
  RarityFilterKindList->m_Items[0] = 39;
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
      || !ListViewSort__GetFilter(sort, 39, 0)
      || this->fields._IsSwapChoice_k__BackingField != this->fields._IsChoice_k__BackingField;
}


bool ServantOperationListViewItem__IsMatchFilter(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  ServantEntity_o *servantEntity; // x0

  if ( ListViewItem__get_IsSelect((ListViewItem_o *)this, 0) )
    return 1;
  if ( this->fields.commandCodeEntity )
  {
    if ( ServantOperationListViewItem__IsMatchCommandCodeFilter(this, sort, v5) )
      return 1;
  }
  else
  {
    servantEntity = this->fields.servantEntity;
    if ( servantEntity && ServantEntity__get_IsKeepServantEquip(servantEntity, 0) )
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


bool ServantOperationListViewItem__IsMatchServantEquipFilter(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  bool IsMatchServantEquipCombineStatusFilter; // w8
  bool result; // w0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  bool HaveStatusFilter; // w8
  __int64 v16; // x2

  if ( (byte_4C233BB & 1) == 0 )
  {
    sub_1C2D490(&FilterKindList_TypeInfo);
    sub_1C2D490(&ListViewSort_FilterKind___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4C233BB = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_34;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_34;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0) )
  {
    return 0;
  }
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v7->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_34;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                          (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v9->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_34;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0)
    || (IsMatchServantEquipCombineStatusFilter = ListViewSort__IsMatchServantEquipCombineStatusFilter(
                                                   sort,
                                                   this->fields._UserServantEntity_k__BackingField,
                                                   this->fields.servantEntity,
                                                   0,
                                                   0),
        result = 0,
        IsMatchServantEquipCombineStatusFilter) )
  {
    v13 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v13 = FilterKindList_TypeInfo;
    }
    RarityFilterKindList = (System_Int32Enum_array *)v13->static_fields->ServantEquipHaveStatusFilterKindList;
    if ( !RarityFilterKindList )
      goto LABEL_34;
    v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                             (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0)
      || (HaveStatusFilter = ListViewSort__IsMatchServantEquipHaveStatusFilter(
                               sort,
                               this->fields._UserServantEntity_k__BackingField,
                               this->fields.servantEntity,
                               0,
                               0),
          result = 0,
          HaveStatusFilter) )
    {
      RarityFilterKindList = (System_Int32Enum_array *)sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
      if ( RarityFilterKindList )
      {
        if ( !LODWORD(RarityFilterKindList->max_length) )
          sub_1C2D6F4(RarityFilterKindList, RarityFilterKindList, v16);
        RarityFilterKindList->m_Items[0] = 39;
        return ListViewSort__IsUnSelectedAllTargetFilters(
                 sort,
                 (ListViewSort_FilterKind_array *)RarityFilterKindList,
                 0)
            || !ListViewSort__GetFilter(sort, 39, 0)
            || this->fields._IsSwapChoice_k__BackingField != this->fields._IsChoice_k__BackingField;
      }
LABEL_34:
      sub_1C2D6EC(RarityFilterKindList, sort);
    }
  }
  return result;
}


bool ServantOperationListViewItem__IsMatchServantFilter(
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
  __int64 v15; // x2
  __int64 v16; // x1
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x21
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v22; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v30; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v32; // w0

  if ( (byte_4C233BA & 1) == 0 )
  {
    sub_1C2D490(&FilterKindList_TypeInfo);
    sub_1C2D490(&ListViewSort_FilterKind___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4C233BA = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_63;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields._UserServantEntity_k__BackingField, 0) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v11->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields._UserServantEntity_k__BackingField, 0) )
  {
    return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v13->static_fields->ServantTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_63:
    sub_1C2D6EC(ClassGroupFilterKindList, sort);
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0)
    && !ListViewSort__IsMatchServantTypeFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
  {
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    if ( UserServantEntity_k__BackingField )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(UserServantEntity_k__BackingField, 0, 0) )
      {
        ClassGroupFilterKindList = (__int64)this->fields._UserServantEntity_k__BackingField;
        if ( !ClassGroupFilterKindList )
          goto LABEL_63;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0);
        v22 = this->fields._UserServantEntity_k__BackingField;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v22 )
          goto LABEL_63;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v22, -1, -1, 0);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v24, v25);
        ClassGroupFilterKindList = (__int64)this->fields._UserServantEntity_k__BackingField;
        if ( !ClassGroupFilterKindList )
          goto LABEL_63;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         -1,
                                         0);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1C2D434(
          (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v27,
          v28);
      }
    }
    ClassGroupFilterKindList = sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    v16 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_64;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0);
    ClassGroupFilterKindList = sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    v16 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_64;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v30 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0);
    v32 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
    if ( ((IsUnSelectedAllTargetFilters ^ v30) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v32 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v32 )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(
          sort,
          this->fields._UserServantEntity_k__BackingField,
          this->fields.servantEntity,
          0)
    || !ListViewSort__IsMatchServantSubAttriFilter(
          sort,
          this->fields._UserServantEntity_k__BackingField,
          this->fields.servantEntity,
          0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v16 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_64:
    sub_1C2D6F4(ClassGroupFilterKindList, v16, v15);
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    && ListViewSort__GetFilter(sort, 39, 0)
    && this->fields._IsSwapChoice_k__BackingField == this->fields._IsChoice_k__BackingField )
  {
    return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v17 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v17->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v18, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


void ServantOperationListViewItem__ModifyChoiceItem(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  bool IsChoice; // w0
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x0

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
  {
    IsChoice = UserServantEntity__IsChoice(UserServantEntity_k__BackingField, 0);
LABEL_5:
    this->fields._IsChoice_k__BackingField = IsChoice;
    goto LABEL_6;
  }
  UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
  if ( UserCommandCodeEntity_k__BackingField )
  {
    IsChoice = UserCommandCodeEntity__IsChoice(UserCommandCodeEntity_k__BackingField, 0);
    goto LABEL_5;
  }
LABEL_6:
  this->fields._IsSwapChoice_k__BackingField = 0;
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationListViewItem__ModifyItem(
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


void ServantOperationListViewItem__ModifyLockItem(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  bool IsLock; // w0
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x0

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
  {
    IsLock = UserServantEntity__IsLock(UserServantEntity_k__BackingField, 0);
LABEL_5:
    this->fields._IsLock_k__BackingField = IsLock;
    goto LABEL_6;
  }
  UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
  if ( UserCommandCodeEntity_k__BackingField )
  {
    IsLock = UserCommandCodeEntity__IsLock(UserCommandCodeEntity_k__BackingField, 0);
    goto LABEL_5;
  }
LABEL_6:
  this->fields._IsSwapLock_k__BackingField = 0;
}


void ServantOperationListViewItem__ModifyPushItem(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v6; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  if ( (byte_4C233B9 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C233B9 = 1;
  }
  if ( this->fields._UserServantEntity_k__BackingField )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame || (UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField) == 0 )
      sub_1C2D6EC(SelfUserGame, v4);
    v6 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
    pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
    *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v9.fields.fakeValue = v6;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v8 = v9;
    this->fields._IsPush_k__BackingField = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                              &v8,
                                                              0);
  }
}


void ServantOperationListViewItem__SetCommandCodeData(
        ServantOperationListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_UserCommandCodeEntity_k__BackingField; // x0
  __int64 v7; // x20
  __int64 v8; // x21
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  struct CommandCodeEntity_o **p_commandCodeEntity; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4C233C0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C2D490(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C233C0 = 1;
  }
  p_UserCommandCodeEntity_k__BackingField = (CGThumbnailListItem_o *)&this->fields._UserCommandCodeEntity_k__BackingField;
  if ( userCommandCodeEntity )
  {
    p_UserCommandCodeEntity_k__BackingField->klass = (CGThumbnailListItem_c *)userCommandCodeEntity;
    sub_1C2D434(p_UserCommandCodeEntity_k__BackingField, (int32_t)userCommandCodeEntity, (int32_t)method, v3);
    v8 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v18.fields.currentCryptoKey = v8;
    *(_QWORD *)&v18.fields.fakeValue = v7;
    this->fields._CommandCodeId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                    v18,
                                                    0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    if ( !Instance
      || (Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields._CommandCodeId_k__BackingField,
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__),
          this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity,
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeEntity, (int32_t)Entity, v12, v13),
          (Instance = (DataManager_o *)this->fields._UserCommandCodeEntity_k__BackingField) == 0)
      || (Instance = (DataManager_o *)UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0),
          UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField,
          this->fields._IsLock_k__BackingField = (unsigned __int8)Instance & 1,
          !UserCommandCodeEntity_k__BackingField) )
    {
LABEL_12:
      sub_1C2D6EC(Instance, v10);
    }
    this->fields._IsChoice_k__BackingField = UserCommandCodeEntity__IsChoice(UserCommandCodeEntity_k__BackingField, 0);
    this->fields._IsPush_k__BackingField = 0;
  }
  else
  {
    this->fields._UserCommandCodeEntity_k__BackingField = 0;
    sub_1C2D434(p_UserCommandCodeEntity_k__BackingField, 0, (int32_t)method, v3);
    this->fields.commandCodeEntity = 0;
    p_commandCodeEntity = &this->fields.commandCodeEntity;
    sub_1C2D434((CGThumbnailListItem_o *)p_commandCodeEntity, 0, v16, v17);
    *((_DWORD *)p_commandCodeEntity + 2) = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationListViewItem__SetData(
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
  if ( (byte_4C233B8 & 1) == 0 )
  {
    this = (ServantOperationListViewItem_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C233B8 = 1;
  }
  if ( type == 1 )
  {
    servantEntity = v4->fields.servantEntity;
    if ( !servantEntity )
      sub_1C2D6EC(this, *(_QWORD *)&type);
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
  v4->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(Friendship, 0);
  v4->fields._IsEquippedCommandCodeServant_k__BackingField = ServantOperationListViewItem__GetIsEquippedCommandCodeServant(
                                                               v4,
                                                               type,
                                                               v10);
  v4->fields._IsCommandCardOpenServant_k__BackingField = ServantOperationListViewItem__GetIsCommandCardOpenServant(
                                                           v4,
                                                           type,
                                                           v11);
}


void ServantOperationListViewItem__SetIconInfoLabel(
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
  int32_t iconKind[2]; // [xsp+18h] [xbp-38h] BYREF
  int64_t time; // [xsp+20h] [xbp-30h] BYREF
  int32_t adjustDataValue; // [xsp+2Ch] [xbp-24h] BYREF
  int32_t dataValue[2]; // [xsp+38h] [xbp-18h] BYREF

  adjustDataValue = 0;
  *(_QWORD *)iconKind = 0;
  time = 0;
  v14 = 0;
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  if ( !iconLabelInfo1 )
    goto LABEL_26;
  v5 = sort;
  IconLabelInfo__Clear(iconLabelInfo1, 0);
  iconLabelInfo1 = this->fields.iconLabelInfo2;
  if ( !iconLabelInfo1 )
    goto LABEL_26;
  IconLabelInfo__Clear(iconLabelInfo1, 0);
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
      IconLabelInfo__SetTime(iconLabelInfo1, dataValue[1], time, 0, 0, 0, 0);
      UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
      if ( UserServantEntity_k__BackingField && UserServantEntity__IsMaterialTd(UserServantEntity_k__BackingField, 0) )
        this->fields.isNeedAdjustIconLabelScale = 1;
    }
    else
    {
      if ( !iconLabelInfo1 )
        goto LABEL_26;
      IconLabelInfo__Set_40696284(iconLabelInfo1, dataValue[1], dataValue[0], adjustDataValue, 0, 0, 0, 0, 0, 0);
    }
  }
  if ( ServantOperationListViewItem__GetIconLabelInfoData2(this, v5, &iconKind[1], iconKind, &v14, v7) )
  {
    iconLabelInfo1 = this->fields.iconLabelInfo2;
    if ( !iconLabelInfo1 )
      goto LABEL_26;
    IconLabelInfo__Set_40696284(iconLabelInfo1, iconKind[1], iconKind[0], v14, 0, 0, 0, 0, 0, 0);
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
      if ( !ServantEntity__get_IsExpUp(servantEntity, 0) )
      {
        iconLabelInfo1 = (IconLabelInfo_o *)this->fields.servantEntity;
        if ( !iconLabelInfo1 )
          goto LABEL_26;
        if ( !ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo1, 0) )
        {
          iconLabelInfo1 = (IconLabelInfo_o *)this->fields.servantEntity;
          if ( !iconLabelInfo1 )
            goto LABEL_26;
          if ( !ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)iconLabelInfo1, 0) )
            return;
        }
      }
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      if ( iconLabelInfo1 )
      {
        IconLabelInfo__Clear(iconLabelInfo1, 0);
        iconLabelInfo1 = this->fields.iconLabelInfo2;
        if ( iconLabelInfo1 )
        {
          IconLabelInfo__Clear(iconLabelInfo1, 0);
          return;
        }
      }
LABEL_26:
      sub_1C2D6EC(iconLabelInfo1, sort);
    }
  }
}


void ServantOperationListViewItem__SetServantData(
        ServantOperationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct UserServantEntity_o **p_UserServantEntity_k__BackingField; // x20
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  struct UserServantEntity_o *v9; // x8
  __int64 v10; // x21
  __int64 v11; // x22
  Il2CppObject *Entity; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  UserServantEntity_o *v16; // x8
  bool IsMaterialTd; // w8
  bool IsFriendShipSvtEq_k__BackingField; // w9
  UserServantEntity_o *v19; // x8
  struct UserServantEntity_o *v20; // x8
  __int128 v21; // q1
  struct System_Threading_Thread_o *writeMasterDataThread; // x20
  struct ServantEntity_o **p_servantEntity; // x19
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4C233BF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C233BF = 1;
  }
  p_UserServantEntity_k__BackingField = &this->fields._UserServantEntity_k__BackingField;
  if ( userServantEntity )
  {
    *p_UserServantEntity_k__BackingField = userServantEntity;
    sub_1C2D434(
      (CGThumbnailListItem_o *)&this->fields._UserServantEntity_k__BackingField,
      (int32_t)userServantEntity,
      (int32_t)method,
      v3);
    v9 = *p_UserServantEntity_k__BackingField;
    if ( !*p_UserServantEntity_k__BackingField )
      goto LABEL_21;
    v11 = *(_QWORD *)&v9->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&v9->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v28.fields.currentCryptoKey = v11;
    *(_QWORD *)&v28.fields.fakeValue = v10;
    this->fields._SvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v28, 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_21;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields._SvtId_k__BackingField,
               (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this->fields.servantEntity = (struct ServantEntity_o *)Entity;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v13, v14);
    Instance = (DataManager_o *)this->fields._UserServantEntity_k__BackingField;
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0);
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    this->fields._IsFriendShipSvtEq_k__BackingField = (unsigned __int8)Instance & 1;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_21;
    Instance = (DataManager_o *)UserServantEntity__IsChocolateSvtEquip(UserServantEntity_k__BackingField, 0);
    v16 = this->fields._UserServantEntity_k__BackingField;
    this->fields._IsChocolateSvtEquip_k__BackingField = (unsigned __int8)Instance & 1;
    if ( !v16 )
      goto LABEL_21;
    IsMaterialTd = UserServantEntity__IsMaterialTd(v16, 0);
    IsFriendShipSvtEq_k__BackingField = this->fields._IsFriendShipSvtEq_k__BackingField;
    Instance = (DataManager_o *)this->fields._UserServantEntity_k__BackingField;
    this->fields._IsMaterialTdSvt_k__BackingField = IsMaterialTd;
    this->fields._IsNotSelection_k__BackingField = IsFriendShipSvtEq_k__BackingField;
    if ( !Instance
      || (Instance = (DataManager_o *)UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0),
          v19 = this->fields._UserServantEntity_k__BackingField,
          this->fields._IsLock_k__BackingField = (unsigned __int8)Instance & 1,
          !v19)
      || (this->fields._IsChoice_k__BackingField = UserServantEntity__IsChoice(v19, 0),
          (Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0)) == 0)
      || (v20 = *p_UserServantEntity_k__BackingField) == 0 )
    {
LABEL_21:
      sub_1C2D6EC(Instance, v8);
    }
    v21 = *(_OWORD *)&v20->fields.id.fields.fakeValue;
    writeMasterDataThread = Instance->fields.writeMasterDataThread;
    *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&v20->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v27.fields.fakeValue = v21;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v26 = v27;
    this->fields._IsPush_k__BackingField = writeMasterDataThread == (struct System_Threading_Thread_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v26, 0);
  }
  else
  {
    this->fields._UserServantEntity_k__BackingField = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields._UserServantEntity_k__BackingField, 0, (int32_t)method, v3);
    this->fields.servantEntity = 0;
    p_servantEntity = &this->fields.servantEntity;
    sub_1C2D434((CGThumbnailListItem_o *)p_servantEntity, 0, v24, v25);
    *((_DWORD *)p_servantEntity + 2) = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationListViewItem__SetServantUses(
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
  System_Int32_array *CategoryIdList; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  CGThumbnailListItem_o *p_commandCodeCategoryIdList; // x0
  System_Collections_ObjectModel_Collection_T__o *sortValue0B; // x21
  int32_t v22; // w22
  int64_t sortValue0; // x8
  __int128 v24; // q0
  int64_t v25; // x23
  struct System_String_o *sortStr1; // x23
  Il2CppObject *Master_object; // x21
  bool IsSettingServant; // w0
  Il2CppObject *v29; // x21
  bool IsSettingEquip; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-1B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+60h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+80h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+A0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+C0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+E0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+100h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+120h] [xbp-90h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+140h] [xbp-70h]

  v8 = this;
  if ( (byte_4C233C3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantOperationListViewItem_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C233C3 = 1;
  }
  if ( type == 2 )
  {
    this = (ServantOperationListViewItem_o *)v8->fields._UserCommandCodeEntity_k__BackingField;
    v8->fields.partyIndex = -1;
    if ( this )
    {
      CategoryIdList = UserCommandCodeEntity__GetCategoryIdList((UserCommandCodeEntity_o *)this, 0);
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
  v10 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v10;
  this = (ServantOperationListViewItem_o *)v8->fields.servantEntity;
  if ( !this )
    goto LABEL_62;
  IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)this, 0);
  if ( IsKeepServantEquip )
  {
    v40 = v41;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v39 = v40;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v39, 0);
    v14 = 1;
    v15 = v8;
    v16 = partyUserEquipList;
  }
  else
  {
    v40 = v41;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v38 = v40;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v38, 0);
    v15 = v8;
    v16 = partyUserServantList;
    v14 = 0;
  }
  v8->fields.partyIndex = ServantOperationListViewItem__GetPartyIndex(v15, v12, v16, v14, v13);
  this = (ServantOperationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (ServantOperationListViewItem_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___)) == 0
    || (sortValue0B = (System_Collections_ObjectModel_Collection_T__o *)this->fields.sortValue0B) == 0 )
  {
LABEL_62:
    sub_1C2D6EC(this, *(_QWORD *)&type);
  }
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)this->fields.sortValue0B,
         (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__) < 1 )
    goto LABEL_34;
  v22 = 0;
  while ( 1 )
  {
    this = (ServantOperationListViewItem_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                               sortValue0B,
                                               v22,
                                               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__);
    if ( !this )
      goto LABEL_62;
    if ( !IsKeepServantEquip )
      break;
    sortValue0 = this->fields.sortValue0;
    if ( sortValue0 )
    {
      v24 = *(_OWORD *)(sortValue0 + 40);
      *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(sortValue0 + 24);
      *(_OWORD *)&v40.fields.fakeValue = v24;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v37 = v40;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v37, 0);
      v36 = v41;
      if ( v25 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v36, 0) )
      {
        *(_WORD *)&v8->fields._IsUseSupportEquip_k__BackingField = 257;
        goto LABEL_34;
      }
    }
LABEL_31:
    if ( ++v22 >= System_Collections_ObjectModel_Collection_object___get_Count(
                    sortValue0B,
                    (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__) )
      goto LABEL_34;
  }
  sortStr1 = this->fields.sortStr1;
  v40 = v41;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v35 = v40;
  if ( sortStr1 != (struct System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                               &v35,
                                               0) )
    goto LABEL_31;
  v8->fields._IsUseSupportServant_k__BackingField = 1;
LABEL_34:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  if ( !IsKeepServantEquip )
  {
    v40 = v41;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v33 = v40;
    this = (ServantOperationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                               &v33,
                                               0);
    if ( Master_object )
    {
      v8->fields._IsUseRecommendSupportServant_k__BackingField = UserRecommendSupportMaster__IsSettingServant(
                                                                   (UserRecommendSupportMaster_o *)Master_object,
                                                                   (int64_t)this,
                                                                   0,
                                                                   0);
      goto LABEL_46;
    }
    goto LABEL_62;
  }
  v40 = v41;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v34 = v40;
  this = (ServantOperationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v34, 0);
  if ( !Master_object )
    goto LABEL_62;
  IsSettingServant = UserRecommendSupportMaster__IsSettingServant(
                       (UserRecommendSupportMaster_o *)Master_object,
                       (int64_t)this,
                       1,
                       0);
  v8->fields._IsUseRecommendSupportEquip_k__BackingField = IsSettingServant;
  if ( IsSettingServant )
    v8->fields._IsUse_k__BackingField = 1;
LABEL_46:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v29 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !IsKeepServantEquip )
  {
    v40 = v41;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v31 = v40;
    this = (ServantOperationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                               &v31,
                                               0);
    if ( v29 )
    {
      v8->fields._IsGrandServant_k__BackingField = UserServantGrandMaster__IsSettingServant(
                                                     (UserServantGrandMaster_o *)v29,
                                                     (int64_t)this,
                                                     0);
      goto LABEL_58;
    }
    goto LABEL_62;
  }
  v40 = v41;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v32 = v40;
  this = (ServantOperationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v32, 0);
  if ( !v29 )
    goto LABEL_62;
  IsSettingEquip = UserServantGrandMaster__IsSettingEquip((UserServantGrandMaster_o *)v29, (int64_t)this, 0);
  v8->fields._IsUseGrandEquip_k__BackingField = IsSettingEquip;
  if ( IsSettingEquip )
    v8->fields._IsUse_k__BackingField = 1;
LABEL_58:
  this = (ServantOperationListViewItem_o *)v8->fields._UserServantEntity_k__BackingField;
  if ( !this )
    goto LABEL_62;
  CategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)this, 1, 0);
  p_commandCodeCategoryIdList = (CGThumbnailListItem_o *)&v8->fields.categoryIdList;
  v8->fields.categoryIdList = CategoryIdList;
LABEL_60:
  sub_1C2D434(p_commandCodeCategoryIdList, (int32_t)CategoryIdList, v18, v19);
}


bool ServantOperationListViewItem__SetSortValue(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ServantOperationListViewItem_c *klass; // x8
  const MethodInfo *v6; // x2
  char v7; // w21

  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0 = 0;
  this->fields.sortValue1 = -1;
  v7 = ((__int64 (__fastcall *)(ServantOperationListViewItem_o *, ListViewSort_o *, const MethodInfo *))klass->vtable._5_IsMatchFilter.methodPtr)(
         this,
         sort,
         klass->vtable._5_IsMatchFilter.method);
  if ( (v7 & 1) != 0 )
    ServantOperationListViewItem__SetIconInfoLabel(this, sort, v6);
  return v7 & 1;
}


void ServantOperationListViewItem__StatusOverWrite(
        ServantOperationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  ServantOperationListViewItem_o *v3; // x19

  if ( !userServantEntity
    || (v3 = this,
        (this = (ServantOperationListViewItem_o *)UserServantEntity__GetOverwriteStatus(userServantEntity, 0, 0)) == 0) )
  {
    sub_1C2D6EC(this, userServantEntity);
  }
  *(int8x16_t *)&v3->fields.rarity = vextq_s8(
                                       *(int8x16_t *)&this->fields.selectNum,
                                       *(int8x16_t *)&this->fields.selectNum,
                                       8u);
}


bool ServantOperationListViewItem__SwapChoice(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields._IsSwapChoice_k__BackingField;
  this->fields._IsSwapChoice_k__BackingField ^= 1u;
  return v2;
}


bool ServantOperationListViewItem__SwapLock(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields._IsSwapLock_k__BackingField;
  this->fields._IsSwapLock_k__BackingField ^= 1u;
  return v2;
}


int32_t ServantOperationListViewItem__get_CommandCodeId(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._CommandCodeId_k__BackingField;
}


int32_t ServantOperationListViewItem__get_DragSelectNum(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._DragSelectNum_k__BackingField;
}


System_String_o *ServantOperationListViewItem__get_FortificationDetailName(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fortificationDetailName;
}


System_String_o *ServantOperationListViewItem__get_FortificationName(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fortificationName;
}


IconLabelInfo_o *ServantOperationListViewItem__get_IconLabelInfo1(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *ServantOperationListViewItem__get_IconLabelInfo2(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool ServantOperationListViewItem__get_IsCanNotSelect(ServantOperationListViewItem_o *this, const MethodInfo *method)
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
      || (UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField) != 0
      && UserServantEntity__IsProtectedEventServant(UserServantEntity_k__BackingField, 0)
      || this->fields.isFortification
      || this->fields._IsUseRecommendSupportServant_k__BackingField
      || this->fields._IsGrandServant_k__BackingField;
}


bool ServantOperationListViewItem__get_IsCanNotSelectPush(
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
  if ( UserServantEntity__IsEventJoin(UserServantEntity_k__BackingField, 0) )
    return 1;
  v4 = this->fields._UserServantEntity_k__BackingField;
  if ( !v4 || UserServantEntity__IsLeave(v4, 0) )
    return 1;
  v6 = this->fields._UserServantEntity_k__BackingField;
  if ( !v6 )
    goto LABEL_12;
  if ( UserServantEntity__IsCombineMaterial(v6, 0) )
    return 1;
  v6 = this->fields._UserServantEntity_k__BackingField;
  if ( !v6 )
    goto LABEL_12;
  if ( UserServantEntity__IsStatusUp(v6, 0) )
    return 1;
  v6 = this->fields._UserServantEntity_k__BackingField;
  if ( !v6 )
LABEL_12:
    sub_1C2D6EC(v6, v5);
  return UserServantEntity__IsMaterialTd(v6, 0);
}


bool ServantOperationListViewItem__get_IsChocolateSvtEquip(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsChocolateSvtEquip_k__BackingField;
}


bool ServantOperationListViewItem__get_IsChoice(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsChoice_k__BackingField;
}


bool ServantOperationListViewItem__get_IsCommandCardOpenServant(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsCommandCardOpenServant_k__BackingField;
}


bool ServantOperationListViewItem__get_IsCommandCodeEquiped(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsCommandCodeEquiped_k__BackingField;
}


bool ServantOperationListViewItem__get_IsDispChoice(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsSwapChoice_k__BackingField ^ this->fields._IsChoice_k__BackingField;
}


bool ServantOperationListViewItem__get_IsDispLock(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsSwapLock_k__BackingField ^ this->fields._IsLock_k__BackingField;
}


bool ServantOperationListViewItem__get_IsDragSelect(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._DragSelectNum_k__BackingField >= 0;
}


bool ServantOperationListViewItem__get_IsEquippedCommandCodeServant(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsEquippedCommandCodeServant_k__BackingField;
}


bool ServantOperationListViewItem__get_IsEventJoin(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
    LOBYTE(UserServantEntity_k__BackingField) = UserServantEntity__IsEventJoin(UserServantEntity_k__BackingField, 0);
  return (char)UserServantEntity_k__BackingField;
}


bool ServantOperationListViewItem__get_IsFavorite(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsFavorite_k__BackingField;
}


bool ServantOperationListViewItem__get_IsFortification(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFortification;
}


bool ServantOperationListViewItem__get_IsFriendShipSvtEq(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsFriendShipSvtEq_k__BackingField;
}


bool ServantOperationListViewItem__get_IsGrandServant(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsGrandServant_k__BackingField;
}


bool ServantOperationListViewItem__get_IsHeroine(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
    LOBYTE(UserServantEntity_k__BackingField) = UserServantEntity__IsHeroine(UserServantEntity_k__BackingField, 0);
  return (char)UserServantEntity_k__BackingField;
}


bool ServantOperationListViewItem__get_IsLock(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsLock_k__BackingField;
}


bool ServantOperationListViewItem__get_IsMaterialTdSvt(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsMaterialTdSvt_k__BackingField;
}


bool ServantOperationListViewItem__get_IsNeedAdjustIconLabelScale(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isNeedAdjustIconLabelScale;
}


bool ServantOperationListViewItem__get_IsNotSelection(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsNotSelection_k__BackingField;
}


bool ServantOperationListViewItem__get_IsOrganization(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0

  servantEntity = this->fields.servantEntity;
  return !servantEntity || ServantEntity__get_IsOrganization(servantEntity, 0);
}


bool ServantOperationListViewItem__get_IsParty(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsParty_k__BackingField;
}


bool ServantOperationListViewItem__get_IsPartyEquip(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsPartyEquip_k__BackingField;
}


bool ServantOperationListViewItem__get_IsProtected(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
    LOBYTE(UserServantEntity_k__BackingField) = UserServantEntity__IsProtectedEventServant(
                                                  UserServantEntity_k__BackingField,
                                                  0);
  return (char)UserServantEntity_k__BackingField;
}


bool ServantOperationListViewItem__get_IsPush(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsPush_k__BackingField;
}


bool ServantOperationListViewItem__get_IsSellEnableServant(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.attribute == 0;
}


bool ServantOperationListViewItem__get_IsServant(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0

  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    LOBYTE(servantEntity) = ServantEntity__get_IsServant(servantEntity, 0);
  return (char)servantEntity;
}


bool ServantOperationListViewItem__get_IsServantEquip(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_1C2D6EC(0, method);
  return ServantEntity__get_IsServantEquip(servantEntity, 0);
}


bool ServantOperationListViewItem__get_IsSwapChoice(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsSwapChoice_k__BackingField;
}


bool ServantOperationListViewItem__get_IsSwapLock(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsSwapLock_k__BackingField;
}


bool ServantOperationListViewItem__get_IsUse(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsUse_k__BackingField;
}


bool ServantOperationListViewItem__get_IsUseGrandEquip(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsUseGrandEquip_k__BackingField;
}


bool ServantOperationListViewItem__get_IsUseRecommendSupportEquip(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUseRecommendSupportEquip_k__BackingField;
}


bool ServantOperationListViewItem__get_IsUseRecommendSupportServant(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUseRecommendSupportServant_k__BackingField;
}


bool ServantOperationListViewItem__get_IsUseSupportEquip(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUseSupportEquip_k__BackingField;
}


bool ServantOperationListViewItem__get_IsUseSupportServant(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUseSupportServant_k__BackingField;
}


int32_t ServantOperationListViewItem__get_PartyIndex(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex + 1;
}


ServantEntity_o *ServantOperationListViewItem__get_ServantEntity(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t ServantOperationListViewItem__get_SvtId(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._SvtId_k__BackingField;
}


UserCommandCodeEntity_o *ServantOperationListViewItem__get_UserCommandCodeEntity(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UserCommandCodeEntity_k__BackingField;
}


int64_t ServantOperationListViewItem__get_UserCommandCodeId(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  ServantOperationListViewItem_o *v2; // x19
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4C233C8 & 1) == 0 )
  {
    this = (ServantOperationListViewItem_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C233C8 = 1;
  }
  UserCommandCodeEntity_k__BackingField = v2->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    sub_1C2D6EC(this, method);
  v4 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v6, 0);
}


UserServantEntity_o *ServantOperationListViewItem__get_UserServantEntity(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServantEntity_k__BackingField;
}


int64_t ServantOperationListViewItem__get_UserSvtId(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_4C233C7 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C233C7 = 1;
  }
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    return 0;
  v4 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v6, 0);
}


void ServantOperationListViewItem__setUserCommandCodeEntity(
        ServantOperationListViewItem_o *this,
        UserCommandCodeEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._UserCommandCodeEntity_k__BackingField = entity;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int32_t)entity,
    (int32_t)method,
    v3);
}


void ServantOperationListViewItem__setUserServantEntity(
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
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)entity,
    (int32_t)method,
    v3);
  ServantOperationListViewItem__StatusOverWrite(this, *p_UserServantEntity_k__BackingField, v6);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity || (v9 = *p_UserServantEntity_k__BackingField) == 0 )
    sub_1C2D6EC(servantEntity, v7);
  rarity = (unsigned int)this->fields.rarity;
  collectionNo = servantEntity->fields.collectionNo;
  lv = v9->fields.lv;
  this->fields.sortValue2 = (collectionNo << 16)
                          | (rarity << 48)
                          | (2 * lv)
                          | ServantEntity__get_IsServantMaterialTd(servantEntity, 0);
}


void ServantOperationListViewItem__set_CommandCodeId(
        ServantOperationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CommandCodeId_k__BackingField = value;
}


void ServantOperationListViewItem__set_DragSelectNum(
        ServantOperationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._DragSelectNum_k__BackingField = value;
}


void ServantOperationListViewItem__set_IsChocolateSvtEquip(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsChocolateSvtEquip_k__BackingField = value;
}


void ServantOperationListViewItem__set_IsChoice(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsChoice_k__BackingField = value;
}


void ServantOperationListViewItem__set_IsCommandCardOpenServant(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsCommandCardOpenServant_k__BackingField = value;
}


void ServantOperationListViewItem__set_IsCommandCodeEquiped(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsCommandCodeEquiped_k__BackingField = value;
}


void ServantOperationListViewItem__set_IsDragSelect(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1C2D6EC(0, value);
  this->fields._DragSelectNum_k__BackingField = value - 1;
}


void ServantOperationListViewItem__set_IsEquippedCommandCodeServant(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsEquippedCommandCodeServant_k__BackingField = value;
}


void ServantOperationListViewItem__set_IsFavorite(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsFavorite_k__BackingField = value;
}


void ServantOperationListViewItem__set_IsFriendShipSvtEq(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsFriendShipSvtEq_k__BackingField = value;
}


void ServantOperationListViewItem__set_IsGrandServant(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsGrandServant_k__BackingField = value;
}


void ServantOperationListViewItem__set_IsLock(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsLock_k__BackingField = value;
}


void ServantOperationListViewItem__set_IsMaterialTdSvt(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsMaterialTdSvt_k__BackingField = value;
}


void ServantOperationListViewItem__set_IsNotSelection(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNotSelection_k__BackingField = value;
}


void ServantOperationListViewItem__set_IsParty(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsParty_k__BackingField = value;
}


void ServantOperationListViewItem__set_IsPartyEquip(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPartyEquip_k__BackingField = value;
}


void ServantOperationListViewItem__set_IsPush(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPush_k__BackingField = value;
}


void ServantOperationListViewItem__set_IsSwapChoice(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSwapChoice_k__BackingField = value;
}


void ServantOperationListViewItem__set_IsSwapLock(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSwapLock_k__BackingField = value;
}


void ServantOperationListViewItem__set_IsUse(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUse_k__BackingField = value;
}


void ServantOperationListViewItem__set_IsUseGrandEquip(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUseGrandEquip_k__BackingField = value;
}


void ServantOperationListViewItem__set_IsUseRecommendSupportEquip(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUseRecommendSupportEquip_k__BackingField = value;
}


void ServantOperationListViewItem__set_IsUseRecommendSupportServant(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUseRecommendSupportServant_k__BackingField = value;
}


void ServantOperationListViewItem__set_IsUseSupportEquip(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUseSupportEquip_k__BackingField = value;
}


void ServantOperationListViewItem__set_IsUseSupportServant(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUseSupportServant_k__BackingField = value;
}


void ServantOperationListViewItem__set_SvtId(
        ServantOperationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SvtId_k__BackingField = value;
}


void ServantOperationListViewItem__set_UserCommandCodeEntity(
        ServantOperationListViewItem_o *this,
        UserCommandCodeEntity_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._UserCommandCodeEntity_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ServantOperationListViewItem__set_UserServantEntity(
        ServantOperationListViewItem_o *this,
        UserServantEntity_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._UserServantEntity_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}