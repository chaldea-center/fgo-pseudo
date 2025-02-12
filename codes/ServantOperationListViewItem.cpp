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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  IconLabelInfo_o *v25; // x25
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x4
  DataManager_o *Instance; // x0
  __int64 v38; // x1
  int64_t lookup_high; // x8
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int64 rarity; // x20
  __int64 masterDataBytes_low; // x21
  __int64 lv; // x22
  struct UserServantEntity_o *v44; // x8
  __int64 v45; // x20
  __int64 v46; // x21
  struct UserServantEntity_o *v47; // x8
  int32_t adjustHp; // w20
  __int64 v49; // x9
  UserServantEntity_o *v50; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  const MethodInfo *v65; // x1
  int64_t UserSvtId; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4BB09F3 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantClassMaster___, v13);
    sub_1C13D24(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v14);
    sub_1C13D24(&IconLabelInfo_TypeInfo, v15);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4BB09F3 = 1;
  }
  v18 = (IconLabelInfo_o *)sub_1C13F70(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0LL);
  this->fields.iconLabelInfo1 = v18;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = (IconLabelInfo_o *)sub_1C13F70(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v25, 0LL);
  this->fields.iconLabelInfo2 = v25;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  ListViewItem___ctor_41884928((ListViewItem_o *)this, index, 0LL);
  ServantOperationListViewItem__Init(this, index, v32);
  ServantOperationListViewItem__SetServantData(this, userServantEntity, v33);
  ServantOperationListViewItem__SetCommandCodeData(this, 0LL, v34);
  ServantOperationListViewItem__SetData(this, 1, v35);
  ServantOperationListViewItem__SetServantUses(this, 1, partyUserServantIds, partyUserEquipIds, v36);
  this->fields._IsFavorite_k__BackingField = isFavorite;
  this->fields.amountSortValue = -1LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                this->fields.classId,
                                (const MethodInfo_3238624 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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
  v44 = this->fields._UserServantEntity_k__BackingField;
  this->fields.sortValue2 = (masterDataBytes_low << 16) | (rarity << 48) | (2 * lv) | (unsigned __int8)Instance & 1;
  if ( !v44 )
    goto LABEL_19;
  v46 = *(_QWORD *)&v44->fields.svtId.fields.currentCryptoKey;
  v45 = *(_QWORD *)&v44->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v67.fields.currentCryptoKey = v46;
  *(_QWORD *)&v67.fields.fakeValue = v45;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v67, 0LL);
  v47 = this->fields._UserServantEntity_k__BackingField;
  this->fields.sortValue2B = (int)Instance;
  if ( !v47 )
    goto LABEL_19;
  adjustHp = v47->fields.adjustHp;
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    v47 = this->fields._UserServantEntity_k__BackingField;
  }
  v49 = *(_QWORD *)&Instance[1].fields._DispLog;
  this->fields.hpReinforceValue = *(_DWORD *)(v49 + 312) * adjustHp;
  if ( !v47 )
    goto LABEL_19;
  this->fields.atkReinforceValue = *(_DWORD *)(v49 + 308) * v47->fields.adjustAtk;
  UserServantEntity__getAdjustMaxData(
    v47,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (DataManager_o *)this->fields._UserServantEntity_k__BackingField;
  if ( !Instance
    || (Instance = (DataManager_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL),
        v50 = this->fields._UserServantEntity_k__BackingField,
        this->fields.dispLimitCount = (int)Instance,
        !v50)
    || (SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v50, -1, 0LL),
        this->fields.skillCategoryIdList = SkillCategoryIdList,
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
          (int64_t)SkillCategoryIdList,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57),
        (Instance = (DataManager_o *)this->fields._UserServantEntity_k__BackingField) == 0LL) )
  {
LABEL_19:
    sub_1C13F80(Instance, v38);
  }
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
    (int64_t)TreasureDeviceCategoryIdList,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(this, v65);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewItem___ctor_33669728(
        ServantOperationListViewItem_o *this,
        int32_t index,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        bool isEquiped,
        const MethodInfo *method)
{
  __int64 v9; // x1
  IconLabelInfo_o *v10; // x23
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  IconLabelInfo_o *v17; // x23
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x4
  __int64 v29; // x0
  __int64 v30; // x1
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v32; // x20
  __int64 v33; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4BB09F4 & 1) == 0 )
  {
    sub_1C13D24(&IconLabelInfo_TypeInfo, *(_QWORD *)&index);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_4BB09F4 = 1;
  }
  v10 = (IconLabelInfo_o *)sub_1C13F70(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v10, 0LL);
  this->fields.iconLabelInfo1 = v10;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (IconLabelInfo_o *)sub_1C13F70(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0LL);
  this->fields.iconLabelInfo2 = v17;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  ListViewItem___ctor_41884928((ListViewItem_o *)this, index, 0LL);
  ServantOperationListViewItem__Init(this, index, v24);
  ServantOperationListViewItem__SetServantData(this, 0LL, v25);
  ServantOperationListViewItem__SetCommandCodeData(this, userCommandCodeEntity, v26);
  ServantOperationListViewItem__SetData(this, 2, v27);
  ServantOperationListViewItem__SetServantUses(this, 2, 0LL, 0LL, v28);
  commandCodeEntity = this->fields.commandCodeEntity;
  this->fields._IsCommandCodeEquiped_k__BackingField = isEquiped;
  this->fields.amountSortValue = -1LL;
  if ( !commandCodeEntity )
    sub_1C13F80(v29, v30);
  v33 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v32 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v33;
  *(_QWORD *)&v34.fields.fakeValue = v32;
  this->fields.sortValue1B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v34, 0LL);
}


void __fastcall ServantOperationListViewItem__ClearIconLabelInfo(
        ServantOperationListViewItem_o *this,
        IconLabelInfo_o *iconLabelInfo,
        const MethodInfo *method)
{
  IconLabelInfo_o *v4; // x0

  if ( (byte_4BB0A03 & 1) == 0 )
  {
    sub_1C13D24(&IconLabelInfo_TypeInfo, iconLabelInfo);
    byte_4BB0A03 = 1;
  }
  if ( iconLabelInfo )
  {
    IconLabelInfo__Clear(iconLabelInfo, 0LL);
  }
  else
  {
    v4 = (IconLabelInfo_o *)sub_1C13F70(IconLabelInfo_TypeInfo);
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
    sub_1C13F80(this, type);
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
    sub_1C13F80(this, type);
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

  if ( (byte_4BB09FF & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&type);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BB09FF = 1;
  }
  result = 0;
  friendshipRank = 0;
  if ( type == 1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v18, 0LL);
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
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v21, 0LL);
    if ( !v13 || (Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v13, v15, Instance, 0LL)) == 0 )
LABEL_15:
      sub_1C13F80(Instance, v10);
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
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  int64_t createdAt; // x8
  UserServantEntity_o *v16; // x0
  struct UserServantEntity_o *v17; // x8
  int32_t adjustHp; // w8
  struct UserServantEntity_o *v19; // x8
  struct ServantEntity_o *servantEntity; // x8
  __int64 v21; // x22
  __int64 v22; // x23
  bool result; // w0
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  v12 = this;
  if ( (byte_4BB09FA & 1) == 0 )
  {
    this = (ServantOperationListViewItem_o *)sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
    byte_4BB09FA = 1;
  }
  *dataValue = 0;
  *adjustDataValue = 0;
  *time = 0LL;
  if ( !sort )
LABEL_32:
    sub_1C13F80(this, sort);
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
      v13 = v12->fields._UserServantEntity_k__BackingField;
      if ( !v13 )
        goto LABEL_27;
      *iconKind = 2;
      *dataValue = v13->fields.lv;
      *adjustDataValue = UserServantEntity__getLevelMax(v13, 0LL);
      return 1;
    case 4:
      v16 = v12->fields._UserServantEntity_k__BackingField;
      if ( !v16 )
        goto LABEL_27;
      *iconKind = 33;
      UserServantEntity__getTreasureDeviceInfo_41378108(v16, dataValue, adjustDataValue, 0LL);
      return 1;
    case 5:
      v17 = v12->fields._UserServantEntity_k__BackingField;
      if ( !v17 )
        goto LABEL_27;
      *iconKind = 3;
      *dataValue = v17->fields.hp;
      adjustHp = v17->fields.adjustHp;
      goto LABEL_26;
    case 6:
      v19 = v12->fields._UserServantEntity_k__BackingField;
      if ( !v19 )
        goto LABEL_27;
      *iconKind = 5;
      *dataValue = v19->fields.atk;
      adjustHp = v19->fields.adjustAtk;
      goto LABEL_26;
    case 7:
      if ( !v12->fields._UserServantEntity_k__BackingField )
        goto LABEL_27;
      *iconKind = 7;
      servantEntity = v12->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_32;
      *dataValue = servantEntity->fields.cost;
      return 1;
    case 0xA:
      if ( !v12->fields._UserServantEntity_k__BackingField )
        goto LABEL_27;
      *iconKind = 32;
      v21 = *(_QWORD *)&v12->fields.friendship.fields.currentCryptoKey;
      v22 = *(_QWORD *)&v12->fields.friendship.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v25.fields.currentCryptoKey = v21;
      *(_QWORD *)&v25.fields.fakeValue = v22;
      *dataValue = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v25, 0LL);
      adjustHp = v12->fields.friendshipMax;
      goto LABEL_26;
    case 0xF:
      if ( !v12->fields._UserServantEntity_k__BackingField )
        goto LABEL_27;
      *iconKind = 44;
      *dataValue = v12->fields.hpReinforceValue;
      adjustHp = v12->fields.nowMaxHpReinforceValue;
      goto LABEL_26;
    case 0x10:
      if ( !v12->fields._UserServantEntity_k__BackingField )
        goto LABEL_27;
      *iconKind = 45;
      *dataValue = v12->fields.atkReinforceValue;
      adjustHp = v12->fields.nowMaxAtkReinforceValue;
LABEL_26:
      *adjustDataValue = adjustHp;
      return 1;
    default:
LABEL_27:
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
    sub_1C13F80(UserServantEntity_k__BackingField, 0LL);
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

  if ( (byte_4BB0A02 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, *(_QWORD *)&type);
    sub_1C13D24(&NetworkManager_TypeInfo, v5);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BB0A02 = 1;
  }
  entity = 0LL;
  if ( type != 1 )
    goto LABEL_20;
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    if ( ServantEntity__get_IsServant(servantEntity, 0LL) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BAF1E5 )
      {
        sub_1C13D24(&NetworkManager_TypeInfo, v10);
        byte_4BAF1E5 = 1;
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
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v18, 0LL);
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
        sub_1C13F80(Instance, v10);
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
    sub_1C13F80(this, 0LL);
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

  if ( (byte_4BB0A01 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, *(_QWORD *)&type);
    sub_1C13D24(&NetworkManager_TypeInfo, v5);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BB0A01 = 1;
  }
  entity = 0LL;
  if ( type != 1 )
    goto LABEL_20;
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    if ( ServantEntity__get_IsServant(servantEntity, 0LL) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BAF1E5 )
      {
        sub_1C13D24(&NetworkManager_TypeInfo, v10);
        byte_4BAF1E5 = 1;
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
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v18, 0LL);
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
        sub_1C13F80(Instance, v10);
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
    sub_1C13F80(this, userServantId);
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
        sub_1C13F88(v7, userServantId);
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

  if ( (byte_4BB09FE & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&type);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BB09FE = 1;
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
      UserCommandCodeEntity_k__BackingField = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( UserCommandCodeEntity_k__BackingField )
      {
        UserCommandCodeEntity_k__BackingField = DataManager__GetMasterData_object_(
                                                  (DataManager_o *)UserCommandCodeEntity_k__BackingField,
                                                  (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
          UserCommandCodeEntity_k__BackingField = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
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
      sub_1C13F80(UserCommandCodeEntity_k__BackingField, *(_QWORD *)&type);
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
    sub_1C13F80(this, 0LL);
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
  if ( this->fields.attribute )
    return -40LL;
  if ( this->fields._IsFavorite_k__BackingField )
    return -50LL;
  if ( this->fields._IsUseSupportServant_k__BackingField )
    return -60LL;
  if ( !this->fields._IsUseRecommendSupportServant_k__BackingField )
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
  return -65LL;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4BB09FB & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    this = (ServantOperationListViewItem_o *)sub_1C13D24(&ServantOperationListViewManager_TypeInfo, v8);
    byte_4BB09FB = 1;
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
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(
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
                                                     *(const MethodInfo **)&dataValue);
          v6->fields.amountSortValue = (int64_t)this;
        }
        servantEntity = v6->fields.servantEntity;
        if ( servantEntity )
          return (((unsigned __int64)(unsigned int)v6->fields.rarity << 32) + ((_QWORD)this << 48)) | servantEntity->fields.collectionNo;
LABEL_37:
        sub_1C13F80(this, sort);
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
                                                   *(const MethodInfo **)&dataValue);
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
      return (((unsigned __int64)(unsigned int)v6->fields.rarity << 32) + (v6->fields.amountSortValue << 48)) | CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v24, 0LL);
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
  *(_WORD *)&this->fields._IsUseRecommendSupportServant_k__BackingField = 0;
  *(_DWORD *)&this->fields._IsEquippedCommandCodeServant_k__BackingField = 0;
  *(_WORD *)&this->fields._IsMaterialTdSvt_k__BackingField = 0;
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

  if ( (byte_4BB09F9 & 1) == 0 )
  {
    sub_1C13D24(&FilterKindList_TypeInfo, sort);
    sub_1C13D24(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_4BB09F9 = 1;
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
                           (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_18;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.commandCodeCategoryIdList, sort, 0LL) )
  {
    return 0;
  }
  RarityFilterKindList = (System_Int32Enum_array *)sub_1C13DCC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
LABEL_18:
    sub_1C13F80(RarityFilterKindList, sort);
  if ( !RarityFilterKindList->max_length )
    sub_1C13F88(RarityFilterKindList, RarityFilterKindList);
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

  if ( (byte_4BB09F8 & 1) == 0 )
  {
    sub_1C13D24(&FilterKindList_TypeInfo, sort);
    sub_1C13D24(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_4BB09F8 = 1;
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
                           (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
      RarityFilterKindList = (System_Int32Enum_array *)sub_1C13DCC(ListViewSort_FilterKind___TypeInfo, 1LL);
      if ( RarityFilterKindList )
      {
        if ( !RarityFilterKindList->max_length )
          sub_1C13F88(RarityFilterKindList, RarityFilterKindList);
        RarityFilterKindList->m_Items[1] = 39;
        return ListViewSort__IsUnSelectedAllTargetFilters(
                 sort,
                 (ListViewSort_FilterKind_array *)RarityFilterKindList,
                 0LL)
            || !ListViewSort__GetFilter(sort, 39, 0LL)
            || this->fields._IsSwapChoice_k__BackingField != this->fields._IsChoice_k__BackingField;
      }
LABEL_34:
      sub_1C13F80(RarityFilterKindList, sort);
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
  __int64 v17; // x1
  FilterKindList_c *v18; // x0
  ListViewSort_FilterKind_array *v19; // x21
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v23; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v39; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v41; // w0

  if ( (byte_4BB09F7 & 1) == 0 )
  {
    sub_1C13D24(&FilterKindList_TypeInfo, sort);
    sub_1C13D24(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_4BB09F7 = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v7->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_61;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_61;
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
      goto LABEL_61;
    v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    goto LABEL_61;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    goto LABEL_61;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
LABEL_61:
    sub_1C13F80(ClassGroupFilterKindList, sort);
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
          goto LABEL_61;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v23 = this->fields._UserServantEntity_k__BackingField;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v23 )
          goto LABEL_61;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v23, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
          (int64_t)SkillCategoryIdList,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
        ClassGroupFilterKindList = (__int64)this->fields._UserServantEntity_k__BackingField;
        if ( !ClassGroupFilterKindList )
          goto LABEL_61;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
          (int64_t)TreasureDeviceCategoryIdList,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
      }
    }
    ClassGroupFilterKindList = sub_1C13DCC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_61;
    v17 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_62;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1C13DCC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_61;
    v17 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_62:
      sub_1C13F88(ClassGroupFilterKindList, v17);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v39 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v41 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v39) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v41 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v41 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_1C13DCC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_61;
  v17 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_62;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields._IsSwapChoice_k__BackingField == this->fields._IsChoice_k__BackingField )
  {
    return 0;
  }
  v18 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v18 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v18->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_61;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v19, 0LL)
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

  if ( (byte_4BB09F6 & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4BB09F6 = 1;
  }
  if ( this->fields._UserServantEntity_k__BackingField )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame || (UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField) == 0LL )
      sub_1C13F80(SelfUserGame, v4);
    v6 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
    pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
    *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v9.fields.fakeValue = v6;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v8 = v9;
    this->fields._IsPush_k__BackingField = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(
                                                              &v8,
                                                              0LL);
  }
}


void __fastcall ServantOperationListViewItem__SetCommandCodeData(
        ServantOperationListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  PartyOrganizationUtility_o *p_UserCommandCodeEntity_k__BackingField; // x0
  __int64 v14; // x20
  __int64 v15; // x21
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *Entity; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  struct CommandCodeEntity_o **p_commandCodeEntity; // x19
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4BB09FD & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_CommandCodeMaster___, userCommandCodeEntity);
    sub_1C13D24(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v10);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4BB09FD = 1;
  }
  p_UserCommandCodeEntity_k__BackingField = (PartyOrganizationUtility_o *)&this->fields._UserCommandCodeEntity_k__BackingField;
  if ( userCommandCodeEntity )
  {
    p_UserCommandCodeEntity_k__BackingField->klass = (PartyOrganizationUtility_c *)userCommandCodeEntity;
    sub_1C13CC8(
      p_UserCommandCodeEntity_k__BackingField,
      (int64_t)userCommandCodeEntity,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v15 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v33.fields.currentCryptoKey = v15;
    *(_QWORD *)&v33.fields.fakeValue = v14;
    this->fields._CommandCodeId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                                    v33,
                                                    0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    if ( !Instance
      || (Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields._CommandCodeId_k__BackingField,
                     (const MethodInfo_3238624 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__),
          this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity,
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&this->fields.commandCodeEntity,
            (int64_t)Entity,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24),
          (Instance = (DataManager_o *)this->fields._UserCommandCodeEntity_k__BackingField) == 0LL)
      || (Instance = (DataManager_o *)UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0LL),
          UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField,
          this->fields._IsLock_k__BackingField = (unsigned __int8)Instance & 1,
          !UserCommandCodeEntity_k__BackingField) )
    {
LABEL_12:
      sub_1C13F80(Instance, v17);
    }
    this->fields._IsChoice_k__BackingField = UserCommandCodeEntity__IsChoice(UserCommandCodeEntity_k__BackingField, 0LL);
    this->fields._IsPush_k__BackingField = 0;
  }
  else
  {
    this->fields._UserCommandCodeEntity_k__BackingField = 0LL;
    sub_1C13CC8(p_UserCommandCodeEntity_k__BackingField, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    this->fields.commandCodeEntity = 0LL;
    p_commandCodeEntity = &this->fields.commandCodeEntity;
    sub_1C13CC8((PartyOrganizationUtility_o *)p_commandCodeEntity, 0LL, v27, v28, v29, v30, v31, v32);
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
  if ( (byte_4BB09F5 & 1) == 0 )
  {
    this = (ServantOperationListViewItem_o *)sub_1C13D24(
                                               &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                               *(_QWORD *)&type);
    byte_4BB09F5 = 1;
  }
  if ( type == 1 )
  {
    servantEntity = v4->fields.servantEntity;
    if ( !servantEntity )
      sub_1C13F80(this, *(_QWORD *)&type);
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
      IconLabelInfo__Set_39281744(iconLabelInfo1, iconKind, dataValue, adjustDataValue, 0, 0, 0, 0, 0LL);
    }
  }
  if ( ServantOperationListViewItem__GetIconLabelInfoData2(this, v5, &v15[1], v15, &v14, v7) )
  {
    iconLabelInfo1 = this->fields.iconLabelInfo2;
    if ( !iconLabelInfo1 )
      goto LABEL_26;
    IconLabelInfo__Set_39281744(iconLabelInfo1, v15[1], v15[0], v14, 0, 0, 0, 0, 0LL);
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
      sub_1C13F80(iconLabelInfo1, sort);
    }
  }
}


void __fastcall ServantOperationListViewItem__SetServantData(
        ServantOperationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct UserServantEntity_o **p_UserServantEntity_k__BackingField; // x20
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  struct UserServantEntity_o *v17; // x8
  __int64 v18; // x21
  __int64 v19; // x22
  Il2CppObject *Entity; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  UserServantEntity_o *v28; // x8
  bool IsMaterialTd; // w8
  bool IsFriendShipSvtEq_k__BackingField; // w9
  UserServantEntity_o *v31; // x8
  struct UserServantEntity_o *v32; // x8
  __int128 v33; // q1
  struct System_Threading_SynchronizationContext_o *context; // x20
  struct ServantEntity_o **p_servantEntity; // x19
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4BB09FC & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, userServantEntity);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4BB09FC = 1;
  }
  p_UserServantEntity_k__BackingField = &this->fields._UserServantEntity_k__BackingField;
  if ( userServantEntity )
  {
    *p_UserServantEntity_k__BackingField = userServantEntity;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields._UserServantEntity_k__BackingField,
      (int64_t)userServantEntity,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v17 = *p_UserServantEntity_k__BackingField;
    if ( !*p_UserServantEntity_k__BackingField )
      goto LABEL_21;
    v19 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v44.fields.currentCryptoKey = v19;
    *(_QWORD *)&v44.fields.fakeValue = v18;
    this->fields._SvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v44, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_21;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields._SvtId_k__BackingField,
               (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this->fields.servantEntity = (struct ServantEntity_o *)Entity;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.servantEntity,
      (int64_t)Entity,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    Instance = (DataManager_o *)this->fields._UserServantEntity_k__BackingField;
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    this->fields._IsFriendShipSvtEq_k__BackingField = (unsigned __int8)Instance & 1;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_21;
    Instance = (DataManager_o *)UserServantEntity__IsChocolateSvtEquip(UserServantEntity_k__BackingField, 0LL);
    v28 = this->fields._UserServantEntity_k__BackingField;
    this->fields._IsChocolateSvtEquip_k__BackingField = (unsigned __int8)Instance & 1;
    if ( !v28 )
      goto LABEL_21;
    IsMaterialTd = UserServantEntity__IsMaterialTd(v28, 0LL);
    IsFriendShipSvtEq_k__BackingField = this->fields._IsFriendShipSvtEq_k__BackingField;
    Instance = (DataManager_o *)this->fields._UserServantEntity_k__BackingField;
    this->fields._IsMaterialTdSvt_k__BackingField = IsMaterialTd;
    this->fields._IsNotSelection_k__BackingField = IsFriendShipSvtEq_k__BackingField;
    if ( !Instance
      || (Instance = (DataManager_o *)UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL),
          v31 = this->fields._UserServantEntity_k__BackingField,
          this->fields._IsLock_k__BackingField = (unsigned __int8)Instance & 1,
          !v31)
      || (this->fields._IsChoice_k__BackingField = UserServantEntity__IsChoice(v31, 0LL),
          (Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL)) == 0LL)
      || (v32 = *p_UserServantEntity_k__BackingField) == 0LL )
    {
LABEL_21:
      sub_1C13F80(Instance, v16);
    }
    v33 = *(_OWORD *)&v32->fields.id.fields.fakeValue;
    context = Instance->fields.context;
    *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&v32->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v43.fields.fakeValue = v33;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v42 = v43;
    this->fields._IsPush_k__BackingField = context == (struct System_Threading_SynchronizationContext_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v42, 0LL);
  }
  else
  {
    this->fields._UserServantEntity_k__BackingField = 0LL;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields._UserServantEntity_k__BackingField,
      0LL,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.servantEntity = 0LL;
    p_servantEntity = &this->fields.servantEntity;
    sub_1C13CC8((PartyOrganizationUtility_o *)p_servantEntity, 0LL, v36, v37, v38, v39, v40, v41);
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
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v17; // q0
  bool IsKeepServantEquip; // w20
  int64_t v19; // x1
  const MethodInfo *v20; // x4
  bool v21; // w3
  ServantOperationListViewItem_o *v22; // x0
  System_Int64_array *v23; // x2
  System_Int32_array *CategoryIdList; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  PartyOrganizationUtility_o *p_commandCodeCategoryIdList; // x0
  System_Collections_ObjectModel_Collection_T__o *sortValue0B; // x21
  int32_t v33; // w22
  int64_t sortValue0; // x8
  __int128 v35; // q0
  int64_t v36; // x23
  struct System_String_o *sortStr1; // x23
  Il2CppObject *Master_object; // x21
  bool IsSettingServant; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+40h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+60h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+80h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+A0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+C0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+E0h] [xbp-90h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+100h] [xbp-70h]

  v8 = this;
  if ( (byte_4BB0A00 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__,
      *(_QWORD *)&type);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__, v9);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v10);
    sub_1C13D24(&Method_DataManager_GetMaster_UserRecommendSupportMaster___, v11);
    sub_1C13D24(&DataManager_TypeInfo, v12);
    sub_1C13D24(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__, v13);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    this = (ServantOperationListViewItem_o *)sub_1C13D24(
                                               &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                               v15);
    byte_4BB0A00 = 1;
  }
  if ( type == 2 )
  {
    this = (ServantOperationListViewItem_o *)v8->fields._UserCommandCodeEntity_k__BackingField;
    v8->fields.partyIndex = -1;
    if ( this )
    {
      CategoryIdList = UserCommandCodeEntity__GetCategoryIdList((UserCommandCodeEntity_o *)this, 0LL);
      p_commandCodeCategoryIdList = (PartyOrganizationUtility_o *)&v8->fields.commandCodeCategoryIdList;
      v8->fields.commandCodeCategoryIdList = CategoryIdList;
      goto LABEL_48;
    }
    goto LABEL_50;
  }
  if ( type != 1 )
    return;
  UserServantEntity_k__BackingField = v8->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_50;
  v17 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v48.fields.fakeValue = v17;
  this = (ServantOperationListViewItem_o *)v8->fields.servantEntity;
  if ( !this )
    goto LABEL_50;
  IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)this, 0LL);
  if ( IsKeepServantEquip )
  {
    v47 = v48;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v46 = v47;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v46, 0LL);
    v21 = 1;
    v22 = v8;
    v23 = partyUserEquipList;
  }
  else
  {
    v47 = v48;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v45 = v47;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v45, 0LL);
    v22 = v8;
    v23 = partyUserServantList;
    v21 = 0;
  }
  v8->fields.partyIndex = ServantOperationListViewItem__GetPartyIndex(v22, v19, v23, v21, v20);
  this = (ServantOperationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (ServantOperationListViewItem_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantLeaderMaster___)) == 0LL
    || (sortValue0B = (System_Collections_ObjectModel_Collection_T__o *)this->fields.sortValue0B) == 0LL )
  {
LABEL_50:
    sub_1C13F80(this, *(_QWORD *)&type);
  }
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)this->fields.sortValue0B,
         (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__) < 1 )
    goto LABEL_34;
  v33 = 0;
  while ( 1 )
  {
    this = (ServantOperationListViewItem_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                               sortValue0B,
                                               v33,
                                               (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__);
    if ( !this )
      goto LABEL_50;
    if ( !IsKeepServantEquip )
      break;
    sortValue0 = this->fields.sortValue0;
    if ( sortValue0 )
    {
      v35 = *(_OWORD *)(sortValue0 + 40);
      *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)(sortValue0 + 24);
      *(_OWORD *)&v47.fields.fakeValue = v35;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v44 = v47;
      v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v44, 0LL);
      v43 = v48;
      if ( v36 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v43, 0LL) )
      {
        *(_WORD *)&v8->fields._IsUseSupportEquip_k__BackingField = 257;
        goto LABEL_34;
      }
    }
LABEL_31:
    if ( ++v33 >= System_Collections_ObjectModel_Collection_object___get_Count(
                    sortValue0B,
                    (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__) )
      goto LABEL_34;
  }
  sortStr1 = this->fields.sortStr1;
  v47 = v48;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v42 = v47;
  if ( sortStr1 != (struct System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(
                                               &v42,
                                               0LL) )
    goto LABEL_31;
  v8->fields._IsUseSupportServant_k__BackingField = 1;
LABEL_34:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  if ( !IsKeepServantEquip )
  {
    v47 = v48;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v40 = v47;
    this = (ServantOperationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(
                                               &v40,
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
    goto LABEL_50;
  }
  v47 = v48;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v41 = v47;
  this = (ServantOperationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(
                                             &v41,
                                             0LL);
  if ( !Master_object )
    goto LABEL_50;
  IsSettingServant = UserRecommendSupportMaster__IsSettingServant(
                       (UserRecommendSupportMaster_o *)Master_object,
                       (int64_t)this,
                       1,
                       0LL);
  v8->fields._IsUseRecommendSupportEquip_k__BackingField = IsSettingServant;
  if ( IsSettingServant )
    v8->fields._IsUse_k__BackingField = 1;
LABEL_46:
  this = (ServantOperationListViewItem_o *)v8->fields._UserServantEntity_k__BackingField;
  if ( !this )
    goto LABEL_50;
  CategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)this, 1, 0LL);
  p_commandCodeCategoryIdList = (PartyOrganizationUtility_o *)&v8->fields.categoryIdList;
  v8->fields.categoryIdList = CategoryIdList;
LABEL_48:
  sub_1C13CC8(p_commandCodeCategoryIdList, (int64_t)CategoryIdList, v25, v26, v27, v28, v29, v30);
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
      || this->fields._IsUseRecommendSupportServant_k__BackingField;
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
    sub_1C13F80(v6, v5);
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
    sub_1C13F80(0LL, method);
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
  if ( (byte_4BB0A05 & 1) == 0 )
  {
    this = (ServantOperationListViewItem_o *)sub_1C13D24(
                                               &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                               method);
    byte_4BB0A05 = 1;
  }
  UserCommandCodeEntity_k__BackingField = v2->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    sub_1C13F80(this, method);
  v4 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v6, 0LL);
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

  if ( (byte_4BB0A04 & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4BB0A04 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v6, 0LL);
}


void __fastcall ServantOperationListViewItem__setUserCommandCodeEntity(
        ServantOperationListViewItem_o *this,
        UserCommandCodeEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._UserCommandCodeEntity_k__BackingField = entity;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int64_t)entity,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._UserServantEntity_k__BackingField = entity;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._UserServantEntity_k__BackingField,
    (int64_t)entity,
    (int64_t)method,
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
    sub_1C13F80(0LL, value);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._UserCommandCodeEntity_k__BackingField = value;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._UserServantEntity_k__BackingField = value;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._UserServantEntity_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}