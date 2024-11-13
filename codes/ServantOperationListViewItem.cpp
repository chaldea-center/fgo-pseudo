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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  IconLabelInfo_o *v23; // x25
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  IconLabelInfo_o *v33; // x25
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x4
  DataManager_o *Instance; // x0
  __int64 v46; // x1
  int64_t lookup_high; // x8
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int64 rarity; // x20
  __int64 masterDataBytes_low; // x21
  __int64 lv; // x22
  struct UserServantEntity_o *v52; // x8
  __int64 v53; // x20
  __int64 v54; // x21
  struct UserServantEntity_o *v55; // x8
  int32_t adjustHp; // w20
  __int64 v57; // x9
  UserServantEntity_o *v58; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  const MethodInfo *v73; // x1
  int64_t UserSvtId; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16

  if ( (byte_4B1257F & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&index, userServantEntity);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B1257F = 1;
  }
  v23 = (IconLabelInfo_o *)sub_1BCAA2C(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&index,
                             userServantEntity,
                             partyUserServantIds);
  IconLabelInfo___ctor(v23, 0LL);
  this->fields.iconLabelInfo1 = v23;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  v33 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v30, v31, v32);
  IconLabelInfo___ctor(v33, 0LL);
  this->fields.iconLabelInfo2 = v33;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v33, v34, v35, v36, v37, v38, v39);
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  ServantOperationListViewItem__Init(this, index, v40);
  ServantOperationListViewItem__SetServantData(this, userServantEntity, v41);
  ServantOperationListViewItem__SetCommandCodeData(this, 0LL, v42);
  ServantOperationListViewItem__SetData(this, 1, v43);
  ServantOperationListViewItem__SetServantUses(this, 1, partyUserServantIds, partyUserEquipIds, v44);
  this->fields._IsFavorite_k__BackingField = isFavorite;
  this->fields.amountSortValue = -1LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                this->fields.classId,
                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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
  v52 = this->fields._UserServantEntity_k__BackingField;
  this->fields.sortValue2 = (masterDataBytes_low << 16) | (rarity << 48) | (2 * lv) | (unsigned __int8)Instance & 1;
  if ( !v52 )
    goto LABEL_19;
  v54 = *(_QWORD *)&v52->fields.svtId.fields.currentCryptoKey;
  v53 = *(_QWORD *)&v52->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v46);
  *(_QWORD *)&v75.fields.currentCryptoKey = v54;
  *(_QWORD *)&v75.fields.fakeValue = v53;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v75, 0LL);
  v55 = this->fields._UserServantEntity_k__BackingField;
  this->fields.sortValue2B = (int)Instance;
  if ( !v55 )
    goto LABEL_19;
  adjustHp = v55->fields.adjustHp;
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v46);
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    v55 = this->fields._UserServantEntity_k__BackingField;
  }
  v57 = *(_QWORD *)&Instance[1].fields._DispLog;
  this->fields.hpReinforceValue = *(_DWORD *)(v57 + 312) * adjustHp;
  if ( !v55 )
    goto LABEL_19;
  this->fields.atkReinforceValue = *(_DWORD *)(v57 + 308) * v55->fields.adjustAtk;
  UserServantEntity__getAdjustMaxData(
    v55,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (DataManager_o *)this->fields._UserServantEntity_k__BackingField;
  if ( !Instance
    || (Instance = (DataManager_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL),
        v58 = this->fields._UserServantEntity_k__BackingField,
        this->fields.dispLimitCount = (int)Instance,
        !v58)
    || (SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v58, -1, 0LL),
        this->fields.skillCategoryIdList = SkillCategoryIdList,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
          (int64_t)SkillCategoryIdList,
          v60,
          v61,
          v62,
          v63,
          v64,
          v65),
        (Instance = (DataManager_o *)this->fields._UserServantEntity_k__BackingField) == 0LL) )
  {
LABEL_19:
    sub_1BCAA3C(Instance, v46);
  }
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
    (int64_t)TreasureDeviceCategoryIdList,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(this, v73);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewItem___ctor_33309988(
        ServantOperationListViewItem_o *this,
        int32_t index,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        bool isEquiped,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  IconLabelInfo_o *v11; // x23
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  IconLabelInfo_o *v21; // x23
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x4
  __int64 v33; // x0
  __int64 v34; // x1
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v36; // x20
  __int64 v37; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4B12580 & 1) == 0 )
  {
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, *(_QWORD *)&index, userCommandCodeEntity);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    byte_4B12580 = 1;
  }
  v11 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, *(_QWORD *)&index, userCommandCodeEntity, isEquiped);
  IconLabelInfo___ctor(v11, 0LL);
  this->fields.iconLabelInfo1 = v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v21 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v18, v19, v20);
  IconLabelInfo___ctor(v21, 0LL);
  this->fields.iconLabelInfo2 = v21;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  ServantOperationListViewItem__Init(this, index, v28);
  ServantOperationListViewItem__SetServantData(this, 0LL, v29);
  ServantOperationListViewItem__SetCommandCodeData(this, userCommandCodeEntity, v30);
  ServantOperationListViewItem__SetData(this, 2, v31);
  ServantOperationListViewItem__SetServantUses(this, 2, 0LL, 0LL, v32);
  commandCodeEntity = this->fields.commandCodeEntity;
  this->fields._IsCommandCodeEquiped_k__BackingField = isEquiped;
  this->fields.amountSortValue = -1LL;
  if ( !commandCodeEntity )
    sub_1BCAA3C(v33, v34);
  v37 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v36 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34);
  *(_QWORD *)&v38.fields.currentCryptoKey = v37;
  *(_QWORD *)&v38.fields.fakeValue = v36;
  this->fields.sortValue1B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v38, 0LL);
}


void __fastcall ServantOperationListViewItem__ClearIconLabelInfo(
        ServantOperationListViewItem_o *this,
        IconLabelInfo_o *iconLabelInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  IconLabelInfo_o *v5; // x0

  if ( (byte_4B1258F & 1) == 0 )
  {
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, iconLabelInfo, method);
    byte_4B1258F = 1;
  }
  if ( iconLabelInfo )
  {
    IconLabelInfo__Clear(iconLabelInfo, 0LL);
  }
  else
  {
    v5 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, iconLabelInfo, method, v3);
    IconLabelInfo___ctor(v5, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA3C(this, *(_QWORD *)&type);
  if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)this, 0LL) )
    return 2;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA3C(this, *(_QWORD *)&type);
  return servantEntity->fields.classId;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantOperationListViewItem__GetFriendship(
        ServantOperationListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t result; // w0
  int64_t Instance; // x0
  __int64 v13; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v15; // q1
  UserServantCollectionMaster_o *v16; // x20
  struct UserServantEntity_o *v17; // x8
  int64_t v18; // x21
  __int64 v19; // x22
  __int64 v20; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-60h]
  int32_t friendshipRank; // [xsp+4Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4B1258B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&type, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B1258B = 1;
  }
  result = 0;
  friendshipRank = 0;
  if ( type == 1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_15;
    v15 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.userId.fields.fakeValue;
    v16 = (UserServantCollectionMaster_o *)Instance;
    *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v22.fields.fakeValue = v15;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    v21 = v22;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v21, 0LL);
    v17 = this->fields._UserServantEntity_k__BackingField;
    if ( !v17 )
      goto LABEL_15;
    v18 = Instance;
    v20 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    *(_QWORD *)&v24.fields.currentCryptoKey = v20;
    *(_QWORD *)&v24.fields.fakeValue = v19;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v24, 0LL);
    if ( !v16 || (Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v16, v18, Instance, 0LL)) == 0 )
LABEL_15:
      sub_1BCAA3C(Instance, v13);
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
  if ( (byte_4B12586 & 1) == 0 )
  {
    this = (ServantOperationListViewItem_o *)sub_1BCA7E0(
                                               &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                               sort,
                                               iconKind);
    byte_4B12586 = 1;
  }
  *dataValue = 0;
  *adjustDataValue = 0;
  *time = 0LL;
  if ( !sort )
LABEL_32:
    sub_1BCAA3C(this, sort);
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
      UserServantEntity__getTreasureDeviceInfo_40943792(v16, dataValue, adjustDataValue, 0LL);
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
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
      *(_QWORD *)&v25.fields.currentCryptoKey = v21;
      *(_QWORD *)&v25.fields.fakeValue = v22;
      *dataValue = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25, 0LL);
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
    sub_1BCAA3C(UserServantEntity_k__BackingField, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  ServantEntity_o *servantEntity; // x0
  int64_t Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x20
  struct ServantEntity_o *v16; // x8
  int64_t v17; // x19
  __int64 v18; // x21
  __int64 v19; // x22
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4B1258E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, *(_QWORD *)&type, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B1258E = 1;
  }
  entity = 0LL;
  if ( type != 1 )
    goto LABEL_16;
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    if ( ServantEntity__get_IsServant(servantEntity, 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
      Instance = NetworkManager__get_UserId(0LL);
      v16 = this->fields.servantEntity;
      if ( !v16 )
        goto LABEL_18;
      v17 = Instance;
      v19 = *(_QWORD *)&v16->fields.id.fields.currentCryptoKey;
      v18 = *(_QWORD *)&v16->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
      *(_QWORD *)&v22.fields.currentCryptoKey = v19;
      *(_QWORD *)&v22.fields.fakeValue = v18;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v22, 0LL);
      if ( !MasterData_object )
        goto LABEL_18;
      if ( UserServantCommandCodeMaster__TryGetEntity(
             (UserServantCommandCodeMaster_o *)MasterData_object,
             &entity,
             v17,
             (int)Instance,
             0LL) )
      {
        Instance = (int64_t)entity;
        if ( entity )
        {
          LOBYTE(servantEntity) = UserServantCommandCodeEntity__IsCommandCardSlotOpen(entity, 0LL);
          return (unsigned __int8)servantEntity & 1;
        }
LABEL_18:
        sub_1BCAA3C(Instance, v13);
      }
    }
LABEL_16:
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  ServantEntity_o *servantEntity; // x0
  int64_t Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x20
  struct ServantEntity_o *v16; // x8
  int64_t v17; // x19
  __int64 v18; // x21
  __int64 v19; // x22
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4B1258D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, *(_QWORD *)&type, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B1258D = 1;
  }
  entity = 0LL;
  if ( type != 1 )
    goto LABEL_16;
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    if ( ServantEntity__get_IsServant(servantEntity, 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
      Instance = NetworkManager__get_UserId(0LL);
      v16 = this->fields.servantEntity;
      if ( !v16 )
        goto LABEL_18;
      v17 = Instance;
      v19 = *(_QWORD *)&v16->fields.id.fields.currentCryptoKey;
      v18 = *(_QWORD *)&v16->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
      *(_QWORD *)&v22.fields.currentCryptoKey = v19;
      *(_QWORD *)&v22.fields.fakeValue = v18;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v22, 0LL);
      if ( !MasterData_object )
        goto LABEL_18;
      if ( UserServantCommandCodeMaster__TryGetEntity(
             (UserServantCommandCodeMaster_o *)MasterData_object,
             &entity,
             v17,
             (int)Instance,
             0LL) )
      {
        Instance = (int64_t)entity;
        if ( entity )
        {
          LOBYTE(servantEntity) = UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0LL);
          return (unsigned __int8)servantEntity & 1;
        }
LABEL_18:
        sub_1BCAA3C(Instance, v13);
      }
    }
LABEL_16:
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
    sub_1BCAA3C(this, userServantId);
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
        sub_1BCAA44(v7, userServantId);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  void *UserCommandCodeEntity_k__BackingField; // x0
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  ServantLimitMaster_o *v11; // x20
  int32_t SvtId_k__BackingField; // w19
  __int64 v13; // x21
  __int64 v14; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B1258A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&type, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B1258A = 1;
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
      UserCommandCodeEntity_k__BackingField = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( UserCommandCodeEntity_k__BackingField )
      {
        UserCommandCodeEntity_k__BackingField = DataManager__GetMasterData_object_(
                                                  (DataManager_o *)UserCommandCodeEntity_k__BackingField,
                                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
        if ( UserServantEntity_k__BackingField )
        {
          v11 = (ServantLimitMaster_o *)UserCommandCodeEntity_k__BackingField;
          SvtId_k__BackingField = this->fields._SvtId_k__BackingField;
          v14 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCount.fields.currentCryptoKey;
          v13 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&type);
          *(_QWORD *)&v16.fields.currentCryptoKey = v14;
          *(_QWORD *)&v16.fields.fakeValue = v13;
          UserCommandCodeEntity_k__BackingField = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                            v16,
                                                            0LL);
          if ( v11 )
          {
            UserCommandCodeEntity_k__BackingField = ServantLimitMaster__GetEntity(
                                                      v11,
                                                      SvtId_k__BackingField,
                                                      (int32_t)UserCommandCodeEntity_k__BackingField,
                                                      0LL);
            if ( UserCommandCodeEntity_k__BackingField )
              return *((_DWORD *)UserCommandCodeEntity_k__BackingField + 6);
          }
        }
      }
LABEL_15:
      sub_1BCAA3C(UserCommandCodeEntity_k__BackingField, *(_QWORD *)&type);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v12; // q1
  __int128 *v13; // x0
  __int64 methodPtr_low; // x10
  struct ServantEntity_o *servantEntity; // x8
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v17; // q1
  __int64 v18; // x10
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v20; // x20
  __int64 v21; // x21
  __int128 v22[2]; // [xsp+0h] [xbp-90h] BYREF
  __int128 v23[2]; // [xsp+20h] [xbp-70h] BYREF
  __int128 v24; // [xsp+40h] [xbp-50h]
  __int128 v25; // [xsp+50h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v6 = this;
  if ( (byte_4B12587 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort, *(_QWORD *)&dataValue);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v8);
    this = (ServantOperationListViewItem_o *)sub_1BCA7E0(&ServantOperationListViewManager_TypeInfo, v9, v10);
    byte_4B12587 = 1;
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
        v12 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
        v24 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
        v25 = v12;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort);
        v13 = v23;
        v23[0] = v24;
        v23[1] = v25;
      }
      else
      {
        UserCommandCodeEntity_k__BackingField = v6->fields._UserCommandCodeEntity_k__BackingField;
        if ( !UserCommandCodeEntity_k__BackingField )
          return 0LL;
        v17 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
        v24 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
        v25 = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort);
        v13 = v22;
        v22[0] = v24;
        v22[1] = v25;
      }
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
               (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v13,
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
        sub_1BCAA3C(this, sort);
      }
      if ( !v6->fields._UserCommandCodeEntity_k__BackingField )
        return 0LL;
      if ( (v6->fields.amountSortValue & 0x8000000000000000LL) != 0 )
      {
        this = (ServantOperationListViewItem_o *)sort->fields.manager;
        if ( !this )
          goto LABEL_37;
        v18 = LOBYTE(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v18
          || (ServantOperationListViewManager_c *)this->klass->_2.typeHierarchy[v18 - 1] != ServantOperationListViewManager_TypeInfo )
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
      v21 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
      v20 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
      *(_QWORD *)&v26.fields.currentCryptoKey = v21;
      *(_QWORD *)&v26.fields.fakeValue = v20;
      return (((unsigned __int64)(unsigned int)v6->fields.rarity << 32) + (v6->fields.amountSortValue << 48)) | CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v26, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  FilterKindList_c *v9; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0

  if ( (byte_4B12585 & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, sort, method);
    sub_1BCA7E0(&ListViewSort_FilterKind___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v7, v8);
    byte_4B12585 = 1;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v9 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v9->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_18;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_18;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.commandCodeCategoryIdList, sort, 0LL) )
  {
    return 0;
  }
  RarityFilterKindList = (System_Int32Enum_array *)sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
LABEL_18:
    sub_1BCAA3C(RarityFilterKindList, sort);
  if ( !RarityFilterKindList->max_length )
    sub_1BCAA44(RarityFilterKindList, RarityFilterKindList);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  FilterKindList_c *v9; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  bool IsMatchServantEquipCombineStatusFilter; // w8
  bool result; // w0
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  bool HaveStatusFilter; // w8

  if ( (byte_4B12584 & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, sort, method);
    sub_1BCA7E0(&ListViewSort_FilterKind___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v7, v8);
    byte_4B12584 = 1;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v9 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v9->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_34;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_34;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v11 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v11->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_34;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v13 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v13->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_34;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
    || (IsMatchServantEquipCombineStatusFilter = ListViewSort__IsMatchServantEquipCombineStatusFilter(
                                                   sort,
                                                   this->fields._UserServantEntity_k__BackingField,
                                                   this->fields.servantEntity,
                                                   0,
                                                   0LL),
        result = 0,
        IsMatchServantEquipCombineStatusFilter) )
  {
    v17 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
      v17 = FilterKindList_TypeInfo;
    }
    RarityFilterKindList = (System_Int32Enum_array *)v17->static_fields->ServantEquipHaveStatusFilterKindList;
    if ( !RarityFilterKindList )
      goto LABEL_34;
    v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                             (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
      || (HaveStatusFilter = ListViewSort__IsMatchServantEquipHaveStatusFilter(
                               sort,
                               this->fields._UserServantEntity_k__BackingField,
                               this->fields.servantEntity,
                               0,
                               0LL),
          result = 0,
          HaveStatusFilter) )
    {
      RarityFilterKindList = (System_Int32Enum_array *)sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
      if ( RarityFilterKindList )
      {
        if ( !RarityFilterKindList->max_length )
          sub_1BCAA44(RarityFilterKindList, RarityFilterKindList);
        RarityFilterKindList->m_Items[1] = 39;
        return ListViewSort__IsUnSelectedAllTargetFilters(
                 sort,
                 (ListViewSort_FilterKind_array *)RarityFilterKindList,
                 0LL)
            || !ListViewSort__GetFilter(sort, 39, 0LL)
            || this->fields._IsSwapChoice_k__BackingField != this->fields._IsChoice_k__BackingField;
      }
LABEL_34:
      sub_1BCAA3C(RarityFilterKindList, sort);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  FilterKindList_c *v9; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  __int64 v19; // x1
  FilterKindList_c *v20; // x0
  ListViewSort_FilterKind_array *v21; // x21
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v25; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v41; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v43; // w0

  if ( (byte_4B12583 & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, sort, method);
    sub_1BCA7E0(&ListViewSort_FilterKind___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v7, v8);
    byte_4B12583 = 1;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v9->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_61;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_61;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v11 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
      v11 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v11->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_61;
    v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v13 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v13->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_61;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields._UserServantEntity_k__BackingField, 0LL) )
  {
    return 0;
  }
  v15 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v15->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_61;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields._UserServantEntity_k__BackingField, 0LL) )
  {
    return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v17 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v17->static_fields->ServantTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_61:
    sub_1BCAA3C(ClassGroupFilterKindList, sort);
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
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
        v25 = this->fields._UserServantEntity_k__BackingField;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v25 )
          goto LABEL_61;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v25, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
          (int64_t)SkillCategoryIdList,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
        ClassGroupFilterKindList = (__int64)this->fields._UserServantEntity_k__BackingField;
        if ( !ClassGroupFilterKindList )
          goto LABEL_61;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
          (int64_t)TreasureDeviceCategoryIdList,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
      }
    }
    ClassGroupFilterKindList = sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_61;
    v19 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_62;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_61;
    v19 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_62:
      sub_1BCAA44(ClassGroupFilterKindList, v19);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v41 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v43 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v41) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v43 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v43 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_61;
  v19 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_62;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields._IsSwapChoice_k__BackingField == this->fields._IsChoice_k__BackingField )
  {
    return 0;
  }
  v20 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v20 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v20->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_61;
  v21 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v21, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v21, 0LL)
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
  __int64 v2; // x2
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v7; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  if ( (byte_4B12582 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    byte_4B12582 = 1;
  }
  if ( this->fields._UserServantEntity_k__BackingField )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame || (UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField) == 0LL )
      sub_1BCAA3C(SelfUserGame, v5);
    v7 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
    pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
    *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v10.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    v9 = v10;
    this->fields._IsPush_k__BackingField = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                              &v9,
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  PartyOrganizationUtility_o *p_UserCommandCodeEntity_k__BackingField; // x0
  __int64 v17; // x1
  __int64 v18; // x20
  __int64 v19; // x21
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  Il2CppObject *Entity; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  struct CommandCodeEntity_o **p_commandCodeEntity; // x19
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4B12589 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeMaster___, userCommandCodeEntity, method);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B12589 = 1;
  }
  p_UserCommandCodeEntity_k__BackingField = (PartyOrganizationUtility_o *)&this->fields._UserCommandCodeEntity_k__BackingField;
  if ( userCommandCodeEntity )
  {
    p_UserCommandCodeEntity_k__BackingField->klass = (PartyOrganizationUtility_c *)userCommandCodeEntity;
    sub_1BCA784(
      p_UserCommandCodeEntity_k__BackingField,
      (int64_t)userCommandCodeEntity,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v19 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    *(_QWORD *)&v37.fields.currentCryptoKey = v19;
    *(_QWORD *)&v37.fields.fakeValue = v18;
    this->fields._CommandCodeId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                    v37,
                                                    0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    if ( !Instance
      || (Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields._CommandCodeId_k__BackingField,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__),
          this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity,
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.commandCodeEntity,
            (int64_t)Entity,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28),
          (Instance = (DataManager_o *)this->fields._UserCommandCodeEntity_k__BackingField) == 0LL)
      || (Instance = (DataManager_o *)UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0LL),
          UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField,
          this->fields._IsLock_k__BackingField = (unsigned __int8)Instance & 1,
          !UserCommandCodeEntity_k__BackingField) )
    {
LABEL_12:
      sub_1BCAA3C(Instance, v21);
    }
    this->fields._IsChoice_k__BackingField = UserCommandCodeEntity__IsChoice(UserCommandCodeEntity_k__BackingField, 0LL);
    this->fields._IsPush_k__BackingField = 0;
  }
  else
  {
    this->fields._UserCommandCodeEntity_k__BackingField = 0LL;
    sub_1BCA784(p_UserCommandCodeEntity_k__BackingField, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    this->fields.commandCodeEntity = 0LL;
    p_commandCodeEntity = &this->fields.commandCodeEntity;
    sub_1BCA784((PartyOrganizationUtility_o *)p_commandCodeEntity, 0LL, v31, v32, v33, v34, v35, v36);
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
  __int64 v9; // x1
  int32_t Friendship; // w21
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2

  v4 = this;
  if ( (byte_4B12581 & 1) == 0 )
  {
    this = (ServantOperationListViewItem_o *)sub_1BCA7E0(
                                               &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                               *(_QWORD *)&type,
                                               method);
    byte_4B12581 = 1;
  }
  if ( type == 1 )
  {
    servantEntity = v4->fields.servantEntity;
    if ( !servantEntity )
      sub_1BCAA3C(this, *(_QWORD *)&type);
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
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
  v4->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(Friendship, 0LL);
  v4->fields._IsEquippedCommandCodeServant_k__BackingField = ServantOperationListViewItem__GetIsEquippedCommandCodeServant(
                                                               v4,
                                                               type,
                                                               v11);
  v4->fields._IsCommandCardOpenServant_k__BackingField = ServantOperationListViewItem__GetIsCommandCardOpenServant(
                                                           v4,
                                                           type,
                                                           v12);
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
      IconLabelInfo__Set_38850420(iconLabelInfo1, iconKind, dataValue, adjustDataValue, 0, 0, 0, 0, 0LL);
    }
  }
  if ( ServantOperationListViewItem__GetIconLabelInfoData2(this, v5, &v15[1], v15, &v14, v7) )
  {
    iconLabelInfo1 = this->fields.iconLabelInfo2;
    if ( !iconLabelInfo1 )
      goto LABEL_26;
    IconLabelInfo__Set_38850420(iconLabelInfo1, v15[1], v15[0], v14, 0, 0, 0, 0, 0LL);
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
      sub_1BCAA3C(iconLabelInfo1, sort);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  struct UserServantEntity_o **p_UserServantEntity_k__BackingField; // x20
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  struct UserServantEntity_o *v21; // x8
  __int64 v22; // x21
  __int64 v23; // x22
  Il2CppObject *Entity; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  UserServantEntity_o *v32; // x8
  bool IsMaterialTd; // w8
  bool IsFriendShipSvtEq_k__BackingField; // w9
  UserServantEntity_o *v35; // x8
  struct UserServantEntity_o *v36; // x8
  __int128 v37; // q1
  struct System_Threading_SynchronizationContext_o *context; // x20
  struct ServantEntity_o **p_servantEntity; // x19
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4B12588 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, userServantEntity, method);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    byte_4B12588 = 1;
  }
  p_UserServantEntity_k__BackingField = &this->fields._UserServantEntity_k__BackingField;
  if ( userServantEntity )
  {
    *p_UserServantEntity_k__BackingField = userServantEntity;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields._UserServantEntity_k__BackingField,
      (int64_t)userServantEntity,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v21 = *p_UserServantEntity_k__BackingField;
    if ( !*p_UserServantEntity_k__BackingField )
      goto LABEL_21;
    v23 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
    v22 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    *(_QWORD *)&v48.fields.currentCryptoKey = v23;
    *(_QWORD *)&v48.fields.fakeValue = v22;
    this->fields._SvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v48, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_21;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields._SvtId_k__BackingField,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this->fields.servantEntity = (struct ServantEntity_o *)Entity;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.servantEntity,
      (int64_t)Entity,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    Instance = (DataManager_o *)this->fields._UserServantEntity_k__BackingField;
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    this->fields._IsFriendShipSvtEq_k__BackingField = (unsigned __int8)Instance & 1;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_21;
    Instance = (DataManager_o *)UserServantEntity__IsChocolateSvtEquip(UserServantEntity_k__BackingField, 0LL);
    v32 = this->fields._UserServantEntity_k__BackingField;
    this->fields._IsChocolateSvtEquip_k__BackingField = (unsigned __int8)Instance & 1;
    if ( !v32 )
      goto LABEL_21;
    IsMaterialTd = UserServantEntity__IsMaterialTd(v32, 0LL);
    IsFriendShipSvtEq_k__BackingField = this->fields._IsFriendShipSvtEq_k__BackingField;
    Instance = (DataManager_o *)this->fields._UserServantEntity_k__BackingField;
    this->fields._IsMaterialTdSvt_k__BackingField = IsMaterialTd;
    this->fields._IsNotSelection_k__BackingField = IsFriendShipSvtEq_k__BackingField;
    if ( !Instance
      || (Instance = (DataManager_o *)UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL),
          v35 = this->fields._UserServantEntity_k__BackingField,
          this->fields._IsLock_k__BackingField = (unsigned __int8)Instance & 1,
          !v35)
      || (this->fields._IsChoice_k__BackingField = UserServantEntity__IsChoice(v35, 0LL),
          (Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL)) == 0LL)
      || (v36 = *p_UserServantEntity_k__BackingField) == 0LL )
    {
LABEL_21:
      sub_1BCAA3C(Instance, v20);
    }
    v37 = *(_OWORD *)&v36->fields.id.fields.fakeValue;
    context = Instance->fields.context;
    *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&v36->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v47.fields.fakeValue = v37;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    v46 = v47;
    this->fields._IsPush_k__BackingField = context == (struct System_Threading_SynchronizationContext_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v46, 0LL);
  }
  else
  {
    this->fields._UserServantEntity_k__BackingField = 0LL;
    sub_1BCA784(
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
    sub_1BCA784((PartyOrganizationUtility_o *)p_servantEntity, 0LL, v40, v41, v42, v43, v44, v45);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v24; // q0
  __int64 v25; // x1
  bool IsKeepServantEquip; // w20
  int64_t v27; // x1
  const MethodInfo *v28; // x4
  bool v29; // w3
  ServantOperationListViewItem_o *v30; // x0
  System_Int64_array *v31; // x2
  System_Int32_array *CategoryIdList; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  PartyOrganizationUtility_o *p_commandCodeCategoryIdList; // x0
  System_Collections_ObjectModel_Collection_T__o *sortValue0; // x21
  __int64 v41; // x1
  int32_t v42; // w22
  __int64 methodPtr_low; // x10
  int64_t v44; // x8
  __int128 v45; // q0
  int64_t v46; // x23
  struct System_String_o *sortStr1; // x23
  __int64 v48; // x1
  Il2CppObject *Master_object; // x21
  bool IsSettingServant; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+0h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+20h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+40h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+60h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+80h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+A0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+C0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+E0h] [xbp-A0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+100h] [xbp-80h]

  v8 = this;
  if ( (byte_4B1258C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&type,
      partyUserServantList);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserRecommendSupportMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    this = (ServantOperationListViewItem_o *)sub_1BCA7E0(&UserServantLeaderEntity_TypeInfo, v21, v22);
    byte_4B1258C = 1;
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
      goto LABEL_50;
    }
    goto LABEL_52;
  }
  if ( type != 1 )
    return;
  UserServantEntity_k__BackingField = v8->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_52;
  v24 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v59.fields.fakeValue = v24;
  this = (ServantOperationListViewItem_o *)v8->fields.servantEntity;
  if ( !this )
    goto LABEL_52;
  IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)this, 0LL);
  if ( IsKeepServantEquip )
  {
    v58 = v59;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25);
    v57 = v58;
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v57, 0LL);
    v29 = 1;
    v30 = v8;
    v31 = partyUserEquipList;
  }
  else
  {
    v58 = v59;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25);
    v56 = v58;
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v56, 0LL);
    v30 = v8;
    v31 = partyUserServantList;
    v29 = 0;
  }
  v8->fields.partyIndex = ServantOperationListViewItem__GetPartyIndex(v30, v27, v31, v29, v28);
  this = (ServantOperationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (ServantOperationListViewItem_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___)) == 0LL
    || (sortValue0 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.sortValue0) == 0LL )
  {
LABEL_52:
    sub_1BCAA3C(this, *(_QWORD *)&type);
  }
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)this->fields.sortValue0,
         (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    goto LABEL_36;
  v42 = 0;
  while ( 1 )
  {
    this = (ServantOperationListViewItem_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                               sortValue0,
                                               v42,
                                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !this )
      goto LABEL_52;
    methodPtr_low = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UserServantLeaderEntity_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantLeaderEntity_TypeInfo )
    {
      goto LABEL_52;
    }
    if ( !IsKeepServantEquip )
      break;
    v44 = this->fields.sortValue0;
    if ( v44 )
    {
      v45 = *(_OWORD *)(v44 + 40);
      *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)(v44 + 24);
      *(_OWORD *)&v58.fields.fakeValue = v45;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&type);
      v55 = v58;
      v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v55, 0LL);
      v54 = v59;
      if ( v46 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v54, 0LL) )
      {
        *(_WORD *)&v8->fields._IsUseSupportEquip_k__BackingField = 257;
        goto LABEL_36;
      }
    }
LABEL_33:
    if ( ++v42 >= System_Collections_ObjectModel_Collection_object___get_Count(
                    sortValue0,
                    (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      goto LABEL_36;
  }
  sortStr1 = this->fields.sortStr1;
  v58 = v59;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&type);
  v53 = v58;
  if ( sortStr1 != (struct System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                               &v53,
                                               0LL) )
    goto LABEL_33;
  v8->fields._IsUseSupportServant_k__BackingField = 1;
LABEL_36:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v41);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  if ( !IsKeepServantEquip )
  {
    v58 = v59;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v48);
    v51 = v58;
    this = (ServantOperationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                               &v51,
                                               0LL);
    if ( Master_object )
    {
      v8->fields._IsUseRecommendSupportServant_k__BackingField = UserRecommendSupportMaster__IsSettingServant(
                                                                   (UserRecommendSupportMaster_o *)Master_object,
                                                                   (int64_t)this,
                                                                   0,
                                                                   0LL);
      goto LABEL_48;
    }
    goto LABEL_52;
  }
  v58 = v59;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v48);
  v52 = v58;
  this = (ServantOperationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                             &v52,
                                             0LL);
  if ( !Master_object )
    goto LABEL_52;
  IsSettingServant = UserRecommendSupportMaster__IsSettingServant(
                       (UserRecommendSupportMaster_o *)Master_object,
                       (int64_t)this,
                       1,
                       0LL);
  v8->fields._IsUseRecommendSupportEquip_k__BackingField = IsSettingServant;
  if ( IsSettingServant )
    v8->fields._IsUse_k__BackingField = 1;
LABEL_48:
  this = (ServantOperationListViewItem_o *)v8->fields._UserServantEntity_k__BackingField;
  if ( !this )
    goto LABEL_52;
  CategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)this, 1, 0LL);
  p_commandCodeCategoryIdList = (PartyOrganizationUtility_o *)&v8->fields.categoryIdList;
  v8->fields.categoryIdList = CategoryIdList;
LABEL_50:
  sub_1BCA784(p_commandCodeCategoryIdList, (int64_t)CategoryIdList, v33, v34, v35, v36, v37, v38);
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
    sub_1BCAA3C(v6, v5);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  ServantOperationListViewItem_o *v3; // x19
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_4B12591 & 1) == 0 )
  {
    this = (ServantOperationListViewItem_o *)sub_1BCA7E0(
                                               &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                               method,
                                               v2);
    byte_4B12591 = 1;
  }
  UserCommandCodeEntity_k__BackingField = v3->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    sub_1BCAA3C(this, method);
  v5 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v7, 0LL);
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
  __int64 v2; // x2
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  if ( (byte_4B12590 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    byte_4B12590 = 1;
  }
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    return 0LL;
  v5 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v7, 0LL);
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
  sub_1BCA784(
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
  sub_1BCA784(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewItem__set_IsDragSelect(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1BCAA3C(0LL, value);
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
  sub_1BCA784(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._UserServantEntity_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}