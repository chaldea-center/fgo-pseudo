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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  IconLabelInfo_o *v29; // x25
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x4
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  int64_t bannerId; // x8
  struct ServantEntity_o *servantEntity; // x0
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int64 rarity; // x20
  __int64 collectionNo; // x21
  __int64 lv; // x22
  bool IsServantMaterialTd; // w0
  struct UserServantEntity_o *v51; // x8
  __int64 v52; // x20
  __int64 v53; // x21
  int32_t v54; // w0
  struct UserServantEntity_o *v55; // x8
  int32_t adjustHp; // w20
  BalanceConfig_c *v57; // x0
  UserServantEntity_o *v58; // x0
  int32_t DispLimitCount; // w0
  UserServantEntity_o *v60; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  UserServantEntity_o *v68; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  const MethodInfo *v76; // x1
  int64_t UserSvtId; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  if ( (byte_40FD6E9 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, v13);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v14);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_40FD6E9 = 1;
  }
  v18 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&index,
                             userServantEntity,
                             partyUserServantIds,
                             partyUserEquipIds);
  IconLabelInfo___ctor(v18, 0LL);
  this->fields.iconLabelInfo1 = v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v29 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v25, v26, v27, v28);
  IconLabelInfo___ctor(v29, 0LL);
  this->fields.iconLabelInfo2 = v29;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  ServantOperationListViewItem__Init(this, index, v36);
  ServantOperationListViewItem__SetServantData(this, userServantEntity, v37);
  ServantOperationListViewItem__SetCommandCodeData(this, 0LL, v38);
  ServantOperationListViewItem__SetData(this, 1, v39);
  ServantOperationListViewItem__SetServantUses(this, 1, partyUserServantIds, partyUserEquipIds, v40);
  this->fields._IsFavorite_k__BackingField = isFavorite;
  this->fields.amountSortValue = -1LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_21;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             this->fields.classId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_21;
  bannerId = Entity->fields.bannerId;
  servantEntity = this->fields.servantEntity;
  this->fields.priority = bannerId;
  this->fields.sortValue1B = bannerId;
  if ( !servantEntity )
    goto LABEL_21;
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_21;
  rarity = (unsigned int)this->fields.rarity;
  collectionNo = servantEntity->fields.collectionNo;
  lv = UserServantEntity_k__BackingField->fields.lv;
  IsServantMaterialTd = ServantEntity__get_IsServantMaterialTd(servantEntity, 0LL);
  v51 = this->fields._UserServantEntity_k__BackingField;
  this->fields.sortValue2 = (collectionNo << 16) | (rarity << 48) | (2 * lv) | IsServantMaterialTd;
  if ( !v51 )
    goto LABEL_21;
  v53 = *(_QWORD *)&v51->fields.svtId.fields.currentCryptoKey;
  v52 = *(_QWORD *)&v51->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v78.fields.currentCryptoKey = v53;
  *(_QWORD *)&v78.fields.fakeValue = v52;
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v78, 0LL);
  v55 = this->fields._UserServantEntity_k__BackingField;
  this->fields.sortValue2B = v54;
  if ( !v55 )
    goto LABEL_21;
  adjustHp = v55->fields.adjustHp;
  v57 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v57 = BalanceConfig_TypeInfo;
    v55 = this->fields._UserServantEntity_k__BackingField;
  }
  this->fields.hpReinforceValue = v57->static_fields->StatusUpAdjustHp * adjustHp;
  if ( !v55 )
    goto LABEL_21;
  this->fields.atkReinforceValue = v57->static_fields->StatusUpAdjustAtk * v55->fields.adjustAtk;
  UserServantEntity__getAdjustMaxData(
    v55,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  v58 = this->fields._UserServantEntity_k__BackingField;
  if ( !v58
    || (DispLimitCount = UserServantEntity__getDispLimitCount(v58, 0, 0LL),
        v60 = this->fields._UserServantEntity_k__BackingField,
        this->fields.dispLimitCount = DispLimitCount,
        !v60)
    || (SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v60, -1, 0LL),
        this->fields.skillCategoryIdList = SkillCategoryIdList,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v62,
          v63,
          v64,
          v65,
          v66,
          v67),
        (v68 = this->fields._UserServantEntity_k__BackingField) == 0LL) )
  {
LABEL_21:
    sub_B170D4();
  }
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(v68, 0, 0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(this, v76);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewItem___ctor_31599056(
        ServantOperationListViewItem_o *this,
        int32_t index,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        bool isEquiped,
        const MethodInfo *method)
{
  __int64 v9; // x1
  IconLabelInfo_o *v10; // x23
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  IconLabelInfo_o *v21; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x4
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v34; // x20
  __int64 v35; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_40FD6EA & 1) == 0 )
  {
    sub_B16FFC(&IconLabelInfo_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_40FD6EA = 1;
  }
  v10 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&index,
                             userCommandCodeEntity,
                             isEquiped,
                             method);
  IconLabelInfo___ctor(v10, 0LL);
  this->fields.iconLabelInfo1 = v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v21 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v17, v18, v19, v20);
  IconLabelInfo___ctor(v21, 0LL);
  this->fields.iconLabelInfo2 = v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  ServantOperationListViewItem__Init(this, index, v28);
  ServantOperationListViewItem__SetServantData(this, 0LL, v29);
  ServantOperationListViewItem__SetCommandCodeData(this, userCommandCodeEntity, v30);
  ServantOperationListViewItem__SetData(this, 2, v31);
  ServantOperationListViewItem__SetServantUses(this, 2, 0LL, 0LL, v32);
  commandCodeEntity = this->fields.commandCodeEntity;
  this->fields._IsCommandCodeEquiped_k__BackingField = isEquiped;
  this->fields.amountSortValue = -1LL;
  if ( !commandCodeEntity )
    sub_B170D4();
  v35 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v34 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v36.fields.currentCryptoKey = v35;
  *(_QWORD *)&v36.fields.fakeValue = v34;
  this->fields.sortValue1B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v36, 0LL);
}


void __fastcall ServantOperationListViewItem__ClearIconLabelInfo(
        ServantOperationListViewItem_o *this,
        IconLabelInfo_o *iconLabelInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  IconLabelInfo_o *v6; // x0

  if ( (byte_40FD6F9 & 1) == 0 )
  {
    sub_B16FFC(&IconLabelInfo_TypeInfo, iconLabelInfo);
    byte_40FD6F9 = 1;
  }
  if ( iconLabelInfo )
  {
    IconLabelInfo__Clear(iconLabelInfo, 0LL);
  }
  else
  {
    v6 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, iconLabelInfo, method, v3, v4);
    IconLabelInfo___ctor(v6, 0LL);
  }
}


int32_t __fastcall ServantOperationListViewItem__GetAttribute(
        ServantOperationListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0

  if ( type != 1 )
    return 0;
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_10;
  if ( servantEntity->fields.type == 2 )
    return 1;
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
LABEL_10:
    sub_B170D4();
  if ( UserServantEntity__IsEventJoin(UserServantEntity_k__BackingField, 0LL) )
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
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v12; // q1
  UserServantCollectionMaster_o *v13; // x20
  int64_t v14; // x0
  struct UserServantEntity_o *v15; // x8
  int64_t v16; // x21
  __int64 v17; // x22
  __int64 v18; // x23
  int32_t v19; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-50h]
  int32_t friendshipRank; // [xsp+4Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_40FD6F5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&type);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FD6F5 = 1;
  }
  result = 0;
  friendshipRank = 0;
  if ( type == 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_17;
    v12 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.userId.fields.fakeValue;
    v13 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
    *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v22.fields.fakeValue = v12;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v21 = v22;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v21, 0LL);
    v15 = this->fields._UserServantEntity_k__BackingField;
    if ( !v15 )
      goto LABEL_17;
    v16 = v14;
    v18 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v24.fields.currentCryptoKey = v18;
    *(_QWORD *)&v24.fields.fakeValue = v17;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v24, 0LL);
    if ( !v13 || (EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v13, v16, v19, 0LL)) == 0LL )
LABEL_17:
      sub_B170D4();
    UserServantCollectionEntity__getFriendShipRankInfo(
      EntityDefinitely,
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
  struct UserServantEntity_o *v13; // x8
  UserServantEntity_o *v14; // x0
  int32_t adjustHp; // w8
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  int64_t createdAt; // x8
  UserServantEntity_o *v18; // x0
  struct UserServantEntity_o *v19; // x8
  struct UserServantEntity_o *v20; // x8
  struct UserServantEntity_o *v21; // x8
  struct UserServantEntity_o *v22; // x8
  __int64 v23; // x22
  __int64 v24; // x23
  struct ServantEntity_o *servantEntity; // x8
  bool result; // w0
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_40FD6F0 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
    byte_40FD6F0 = 1;
  }
  *dataValue = 0;
  *adjustDataValue = 0;
  *time = 0LL;
  if ( !sort )
LABEL_40:
    sub_B170D4();
  switch ( sort->fields.sortKind )
  {
    case 1:
      *iconKind = 49;
      UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
      if ( UserServantEntity_k__BackingField )
      {
        createdAt = UserServantEntity_k__BackingField->fields.createdAt;
      }
      else
      {
        UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
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
      if ( !this->fields._UserServantEntity_k__BackingField )
        goto LABEL_35;
      *iconKind = 2;
      v13 = this->fields._UserServantEntity_k__BackingField;
      if ( !v13 )
        goto LABEL_40;
      *dataValue = v13->fields.lv;
      v14 = this->fields._UserServantEntity_k__BackingField;
      if ( !v14 )
        goto LABEL_40;
      *adjustDataValue = UserServantEntity__getLevelMax(v14, 0LL);
      return 1;
    case 4:
      if ( !this->fields._UserServantEntity_k__BackingField )
        goto LABEL_35;
      *iconKind = 33;
      v18 = this->fields._UserServantEntity_k__BackingField;
      if ( !v18 )
        goto LABEL_40;
      UserServantEntity__getTreasureDeviceInfo_21453148(v18, dataValue, adjustDataValue, 0LL);
      return 1;
    case 5:
      if ( !this->fields._UserServantEntity_k__BackingField )
        goto LABEL_35;
      *iconKind = 3;
      v19 = this->fields._UserServantEntity_k__BackingField;
      if ( !v19 )
        goto LABEL_40;
      *dataValue = v19->fields.hp;
      v20 = this->fields._UserServantEntity_k__BackingField;
      if ( !v20 )
        goto LABEL_40;
      adjustHp = v20->fields.adjustHp;
      goto LABEL_31;
    case 6:
      if ( !this->fields._UserServantEntity_k__BackingField )
        goto LABEL_35;
      *iconKind = 5;
      v21 = this->fields._UserServantEntity_k__BackingField;
      if ( !v21 )
        goto LABEL_40;
      *dataValue = v21->fields.atk;
      v22 = this->fields._UserServantEntity_k__BackingField;
      if ( !v22 )
        goto LABEL_40;
      adjustHp = v22->fields.adjustAtk;
LABEL_31:
      *adjustDataValue = adjustHp;
      return 1;
    case 7:
      if ( !this->fields._UserServantEntity_k__BackingField )
        goto LABEL_35;
      *iconKind = 7;
      servantEntity = this->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_40;
      *dataValue = servantEntity->fields.cost;
      return 1;
    case 0xA:
      if ( !this->fields._UserServantEntity_k__BackingField )
        goto LABEL_35;
      *iconKind = 32;
      v23 = *(_QWORD *)&this->fields.friendship.fields.currentCryptoKey;
      v24 = *(_QWORD *)&this->fields.friendship.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v28.fields.currentCryptoKey = v23;
      *(_QWORD *)&v28.fields.fakeValue = v24;
      *dataValue = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v28, 0LL);
      adjustHp = this->fields.friendshipMax;
      goto LABEL_31;
    case 0xF:
      if ( !this->fields._UserServantEntity_k__BackingField )
        goto LABEL_35;
      *iconKind = 44;
      *dataValue = this->fields.hpReinforceValue;
      adjustHp = this->fields.nowMaxHpReinforceValue;
      goto LABEL_31;
    case 0x10:
      if ( !this->fields._UserServantEntity_k__BackingField )
        goto LABEL_35;
      *iconKind = 45;
      *dataValue = this->fields.atkReinforceValue;
      adjustHp = this->fields.nowMaxAtkReinforceValue;
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
  UserServantEntity_o *v10; // x0
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
        v10 = this->fields._UserServantEntity_k__BackingField;
        if ( v10 )
        {
          LevelMax = UserServantEntity__getLevelMax(v10, 0LL);
          LOBYTE(UserServantEntity_k__BackingField) = 1;
          *adjustDataValue = LevelMax;
          return (char)UserServantEntity_k__BackingField;
        }
      }
LABEL_10:
      sub_B170D4();
    }
  }
  return (char)UserServantEntity_k__BackingField;
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
  WebViewManager_o *Instance; // x0
  UserServantCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  struct ServantEntity_o *v12; // x8
  int64_t v13; // x19
  __int64 v14; // x21
  __int64 v15; // x22
  int32_t v16; // w0
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_40FD6F8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, *(_QWORD *)&type);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FD6F8 = 1;
  }
  entity = 0LL;
  if ( type != 1 )
    goto LABEL_18;
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    if ( ServantEntity__get_IsServant(servantEntity, 0LL) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_20;
      MasterData_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Instance,
                                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v12 = this->fields.servantEntity;
      if ( !v12 )
        goto LABEL_20;
      v13 = UserId;
      v15 = *(_QWORD *)&v12->fields.id.fields.currentCryptoKey;
      v14 = *(_QWORD *)&v12->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v19.fields.currentCryptoKey = v15;
      *(_QWORD *)&v19.fields.fakeValue = v14;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v19, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_20;
      if ( UserServantCommandCodeMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, v13, v16, 0LL) )
      {
        if ( entity )
        {
          LOBYTE(servantEntity) = UserServantCommandCodeEntity__IsCommandCardSlotOpen(entity, 0LL);
          return (unsigned __int8)servantEntity & 1;
        }
LABEL_20:
        sub_B170D4();
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
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  UserServantCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  struct ServantEntity_o *v12; // x8
  int64_t v13; // x19
  __int64 v14; // x21
  __int64 v15; // x22
  int32_t v16; // w0
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_40FD6F7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, *(_QWORD *)&type);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FD6F7 = 1;
  }
  entity = 0LL;
  if ( type != 1 )
    goto LABEL_18;
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    if ( ServantEntity__get_IsServant(servantEntity, 0LL) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_20;
      MasterData_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Instance,
                                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v12 = this->fields.servantEntity;
      if ( !v12 )
        goto LABEL_20;
      v13 = UserId;
      v15 = *(_QWORD *)&v12->fields.id.fields.currentCryptoKey;
      v14 = *(_QWORD *)&v12->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v19.fields.currentCryptoKey = v15;
      *(_QWORD *)&v19.fields.fakeValue = v14;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v19, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_20;
      if ( UserServantCommandCodeMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, v13, v16, 0LL) )
      {
        if ( entity )
        {
          LOBYTE(servantEntity) = UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0LL);
          return (unsigned __int8)servantEntity & 1;
        }
LABEL_20:
        sub_B170D4();
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

  if ( !ids )
    sub_B170D4();
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
        sub_B17100(v7, userServantId, ids);
        sub_B170A0();
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
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  ServantLimitMaster_o *v10; // x20
  int32_t SvtId_k__BackingField; // w19
  __int64 v12; // x21
  __int64 v13; // x22
  int32_t v14; // w0
  ServantLimitEntity_o *Entity; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_40FD6F4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&type);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FD6F4 = 1;
  }
  if ( type == 2 )
  {
    UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
    if ( !UserCommandCodeEntity_k__BackingField )
      goto LABEL_16;
    return UserCommandCodeEntity__GetRarity(UserCommandCodeEntity_k__BackingField, 0LL);
  }
  else
  {
    if ( type == 1 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
        if ( UserServantEntity_k__BackingField )
        {
          v10 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
          SvtId_k__BackingField = this->fields._SvtId_k__BackingField;
          v13 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCount.fields.currentCryptoKey;
          v12 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCount.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v18.fields.currentCryptoKey = v13;
          *(_QWORD *)&v18.fields.fakeValue = v12;
          v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v18, 0LL);
          if ( v10 )
          {
            Entity = ServantLimitMaster__GetEntity(v10, SvtId_k__BackingField, v14, 0LL);
            if ( Entity )
              return Entity->fields.rarity;
          }
        }
      }
LABEL_16:
      sub_B170D4();
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
    sub_B170D4();
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
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t result; // x0
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v11; // q1
  __int128 *v12; // x0
  int64_t amountSortValue; // x0
  struct ListViewManager_o *manager; // x0
  __int64 v15; // x10
  struct ServantEntity_o *servantEntity; // x8
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v18; // q1
  int64_t CommandCodeAmountSortValue; // x21
  struct ListViewManager_o *v20; // x0
  __int64 v21; // x10
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 rarity; // x22
  __int64 v24; // x19
  __int64 v25; // x20
  __int128 v26[2]; // [xsp+0h] [xbp-80h] BYREF
  __int128 v27[2]; // [xsp+20h] [xbp-60h] BYREF
  __int128 v28; // [xsp+40h] [xbp-40h]
  __int128 v29; // [xsp+50h] [xbp-30h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_40FD6F1 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B16FFC(&ServantOperationListViewManager_TypeInfo, v8);
    byte_40FD6F1 = 1;
  }
  if ( !sort )
    goto LABEL_40;
  result = 0LL;
  switch ( sort->fields.sortKind )
  {
    case 1:
      UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
      if ( UserServantEntity_k__BackingField )
      {
        v11 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
        v28 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
        v29 = v11;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v12 = v27;
        v27[0] = v28;
        v27[1] = v29;
      }
      else
      {
        UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
        if ( !UserCommandCodeEntity_k__BackingField )
          return 0LL;
        v18 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
        v28 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
        v29 = v18;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v12 = v26;
        v26[0] = v28;
        v26[1] = v29;
      }
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(
               (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v12,
               0LL);
    case 2:
      return this->fields.rarity;
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
      result = -this->fields.priority;
      this->fields.sortValue1 = result;
      return result;
    case 0xE:
      if ( this->fields._UserServantEntity_k__BackingField )
      {
        amountSortValue = this->fields.amountSortValue;
        if ( (amountSortValue & 0x8000000000000000LL) != 0 )
        {
          manager = sort->fields.manager;
          if ( !manager )
            goto LABEL_40;
          v15 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1);
          if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v15
            || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v15 - 1] != ServantOperationListViewManager_TypeInfo )
          {
            goto LABEL_40;
          }
          amountSortValue = ServantOperationListViewManager__GetAmountSortValue(
                              (ServantOperationListViewManager_o *)manager,
                              this->fields._SvtId_k__BackingField,
                              *(const MethodInfo **)&dataValue);
          this->fields.amountSortValue = amountSortValue;
        }
        servantEntity = this->fields.servantEntity;
        if ( servantEntity )
          return (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (amountSortValue << 48)) | servantEntity->fields.collectionNo;
LABEL_40:
        sub_B170D4();
      }
      if ( !this->fields._UserCommandCodeEntity_k__BackingField )
        return 0LL;
      CommandCodeAmountSortValue = this->fields.amountSortValue;
      if ( (CommandCodeAmountSortValue & 0x8000000000000000LL) != 0 )
      {
        v20 = sort->fields.manager;
        if ( !v20 )
          goto LABEL_40;
        v21 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v21
          || (ServantOperationListViewManager_c *)v20->klass->_2.typeHierarchy[v21 - 1] != ServantOperationListViewManager_TypeInfo )
        {
          goto LABEL_40;
        }
        CommandCodeAmountSortValue = ServantOperationListViewManager__GetCommandCodeAmountSortValue(
                                       (ServantOperationListViewManager_o *)v20,
                                       this->fields._CommandCodeId_k__BackingField,
                                       *(const MethodInfo **)&dataValue);
        this->fields.amountSortValue = CommandCodeAmountSortValue;
      }
      commandCodeEntity = this->fields.commandCodeEntity;
      if ( !commandCodeEntity )
        goto LABEL_40;
      rarity = (unsigned int)this->fields.rarity;
      v25 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
      v24 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v30.fields.currentCryptoKey = v25;
      *(_QWORD *)&v30.fields.fakeValue = v24;
      return ((rarity << 32) + (CommandCodeAmountSortValue << 48)) | CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                                       v30,
                                                                       0LL);
    default:
      return result;
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
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *v7; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v9; // x0
  __int64 v10; // x2
  ListViewSort_FilterKind_array *v11; // x0
  __int64 v12; // x2

  if ( (byte_40FD6EF & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_40FD6EF = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v7->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_19;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          RarityFilterKindList,
                                          (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_19;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.commandCodeCategoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v11 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v10);
  if ( !v11 )
LABEL_19:
    sub_B170D4();
  if ( !v11->max_length )
  {
    sub_B17100(v11, v11, v12);
    sub_B170A0();
  }
  v11->m_Items[1] = 39;
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL)
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
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *v7; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ServantEquipTypeFilterKindList; // x0
  ListViewSort_FilterKind_array *v12; // x0
  __int64 v13; // x2
  ListViewSort_FilterKind_array *v14; // x0
  __int64 v15; // x2

  if ( (byte_40FD6EE & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_40FD6EE = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v7->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_25;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          RarityFilterKindList,
                                          (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_25;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v10 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v10 = FilterKindList_TypeInfo;
  }
  ServantEquipTypeFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v10->static_fields->ServantEquipTypeFilterKindList;
  if ( !ServantEquipTypeFilterKindList )
LABEL_25:
    sub_B170D4();
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ServantEquipTypeFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v14 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v13);
  if ( !v14 )
    goto LABEL_25;
  if ( !v14->max_length )
  {
    sub_B17100(v14, v14, v15);
    sub_B170A0();
  }
  v14->m_Items[1] = 39;
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
      || !ListViewSort__GetFilter(sort, 39, 0LL)
      || !this->fields._IsSwapChoice_k__BackingField == this->fields._IsChoice_k__BackingField;
}


bool __fastcall ServantOperationListViewItem__IsMatchServantFilter(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *v7; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassFilterKindList; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *NpTypeFilterKindList; // x0
  ListViewSort_FilterKind_array *v15; // x0
  FilterKindList_c *v16; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *NpEffectFilterKindList; // x0
  ListViewSort_FilterKind_array *v18; // x0
  FilterKindList_c *v19; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ServantTypeFilterKindList; // x0
  ListViewSort_FilterKind_array *v21; // x0
  __int64 v22; // x2
  ListViewSort_FilterKind_array *v23; // x0
  __int64 v24; // x2
  ListViewSort_FilterKind_array *v25; // x1
  FilterKindList_c *v26; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v28; // x21
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v32; // x0
  int32_t v33; // w0
  UserServantEntity_o *v34; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UserServantEntity_o *v42; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  __int64 v51; // x2
  _BOOL4 v52; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v54; // w0

  if ( (byte_40FD6ED & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_40FD6ED = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v7->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_67;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0LL) )
  {
    v10 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v10 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v10->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      goto LABEL_67;
    v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             ClassFilterKindList,
                                             (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  NpTypeFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v13->static_fields->NpTypeFilterKindList;
  if ( !NpTypeFilterKindList )
    goto LABEL_67;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           NpTypeFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields._UserServantEntity_k__BackingField, 0LL) )
  {
    return 0;
  }
  v16 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  NpEffectFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v16->static_fields->NpEffectFilterKindList;
  if ( !NpEffectFilterKindList )
    goto LABEL_67;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           NpEffectFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields._UserServantEntity_k__BackingField, 0LL) )
  {
    return 0;
  }
  v19 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  ServantTypeFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v19->static_fields->ServantTypeFilterKindList;
  if ( !ServantTypeFilterKindList )
LABEL_67:
    sub_B170D4();
  v21 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ServantTypeFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v21, 0LL)
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
        v32 = this->fields._UserServantEntity_k__BackingField;
        if ( !v32 )
          goto LABEL_67;
        v33 = UserServantEntity__getDispLimitCount(v32, 0, 0LL);
        v34 = this->fields._UserServantEntity_k__BackingField;
        this->fields.dispLimitCount = v33;
        if ( !v34 )
          goto LABEL_67;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v34, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
        v42 = this->fields._UserServantEntity_k__BackingField;
        if ( !v42 )
          goto LABEL_67;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(v42, 0, 0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
      }
    }
    v23 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v22);
    if ( !v23 )
      goto LABEL_67;
    v25 = v23;
    if ( !v23->max_length )
      goto LABEL_68;
    v23->m_Items[1] = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(sort, v23, 0LL);
    v23 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v51);
    if ( !v23 )
      goto LABEL_67;
    v25 = v23;
    if ( !v23->max_length )
    {
LABEL_68:
      sub_B17100(v23, v25, v24);
      sub_B170A0();
    }
    v23->m_Items[1] = 51;
    v52 = ListViewSort__IsUnSelectedAllTargetFilters(sort, v23, 0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v54 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v52) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v54 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v54 )
    {
      return 0;
    }
  }
  v23 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v22);
  if ( !v23 )
    goto LABEL_67;
  v25 = v23;
  if ( !v23->max_length )
    goto LABEL_68;
  v23->m_Items[1] = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v23, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields._IsSwapChoice_k__BackingField == this->fields._IsChoice_k__BackingField )
  {
    return 0;
  }
  v26 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v26 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v26->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_67;
  v28 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v28, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v28, 0LL)
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
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v5; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-30h]

  if ( (byte_40FD6EC & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40FD6EC = 1;
  }
  if ( this->fields._UserServantEntity_k__BackingField )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame || (UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField) == 0LL )
      sub_B170D4();
    v5 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
    pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
    *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v8.fields.fakeValue = v5;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v7 = v8;
    this->fields._IsPush_k__BackingField = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(
                                                              &v7,
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BattleServantConfConponent_o *p_UserCommandCodeEntity_k__BackingField; // x0
  __int64 v14; // x20
  __int64 v15; // x21
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct CommandCodeEntity_o *Entity; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x0
  bool IsLock; // w0
  UserCommandCodeEntity_o *v27; // x8
  struct CommandCodeEntity_o **p_commandCodeEntity; // x19
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_40FD6F3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, userCommandCodeEntity);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FD6F3 = 1;
  }
  p_UserCommandCodeEntity_k__BackingField = (BattleServantConfConponent_o *)&this->fields._UserCommandCodeEntity_k__BackingField;
  if ( userCommandCodeEntity )
  {
    p_UserCommandCodeEntity_k__BackingField->klass = (BattleServantConfConponent_c *)userCommandCodeEntity;
    sub_B16F98(
      p_UserCommandCodeEntity_k__BackingField,
      (System_Int32_array **)userCommandCodeEntity,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v15 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v35.fields.currentCryptoKey = v15;
    *(_QWORD *)&v35.fields.fakeValue = v14;
    this->fields._CommandCodeId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                    v35,
                                                    0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    if ( !MasterData_WarQuestSelectionMaster
      || (Entity = (struct CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   MasterData_WarQuestSelectionMaster,
                                                   this->fields._CommandCodeId_k__BackingField,
                                                   (const MethodInfo_266F388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__),
          this->fields.commandCodeEntity = Entity,
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
            (System_Int32_array **)Entity,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24),
          (UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField) == 0LL)
      || (IsLock = UserCommandCodeEntity__IsLock(UserCommandCodeEntity_k__BackingField, 0LL),
          v27 = this->fields._UserCommandCodeEntity_k__BackingField,
          this->fields._IsLock_k__BackingField = IsLock,
          !v27) )
    {
LABEL_13:
      sub_B170D4();
    }
    this->fields._IsChoice_k__BackingField = UserCommandCodeEntity__IsChoice(v27, 0LL);
    this->fields._IsPush_k__BackingField = 0;
  }
  else
  {
    this->fields._UserCommandCodeEntity_k__BackingField = 0LL;
    sub_B16F98(p_UserCommandCodeEntity_k__BackingField, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    this->fields.commandCodeEntity = 0LL;
    p_commandCodeEntity = &this->fields.commandCodeEntity;
    sub_B16F98((BattleServantConfConponent_o *)p_commandCodeEntity, 0LL, v29, v30, v31, v32, v33, v34);
    *((_DWORD *)p_commandCodeEntity + 2) = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewItem__SetData(
        ServantOperationListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8
  int32_t classId; // w8
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  int32_t Friendship; // w21
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_40FD6EB & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&type);
    byte_40FD6EB = 1;
  }
  if ( type == 1 )
  {
    servantEntity = this->fields.servantEntity;
    if ( !servantEntity )
      sub_B170D4();
    classId = servantEntity->fields.classId;
  }
  else
  {
    classId = -1;
  }
  this->fields.classId = classId;
  this->fields.rarity = ServantOperationListViewItem__GetRarity(this, type, method);
  this->fields.attribute = ServantOperationListViewItem__GetAttribute(this, type, v7);
  Friendship = ServantOperationListViewItem__GetFriendship(this, type, v8);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(Friendship, 0LL);
  this->fields._IsEquippedCommandCodeServant_k__BackingField = ServantOperationListViewItem__GetIsEquippedCommandCodeServant(
                                                                 this,
                                                                 type,
                                                                 v10);
  this->fields._IsCommandCardOpenServant_k__BackingField = ServantOperationListViewItem__GetIsCommandCardOpenServant(
                                                             this,
                                                             type,
                                                             v11);
}


void __fastcall ServantOperationListViewItem__SetIconInfoLabel(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  IconLabelInfo_o *iconLabelInfo1; // x0
  IconLabelInfo_o *iconLabelInfo2; // x0
  const MethodInfo *v7; // x6
  const MethodInfo *v8; // x5
  IconLabelInfo_o *v9; // x0
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  const MethodInfo *v11; // x4
  IconLabelInfo_o *v12; // x0
  const MethodInfo *v13; // x3
  ServantOperationListViewItem_o *SortValue1; // x0
  const MethodInfo *v15; // x2
  ServantEntity_o *servantEntity; // x0
  ServantEntity_o *v17; // x0
  ServantEntity_o *v18; // x0
  IconLabelInfo_o *v19; // x0
  IconLabelInfo_o *v20; // x0
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF
  int32_t iconKind[2]; // [xsp+10h] [xbp-30h] BYREF
  int64_t time; // [xsp+18h] [xbp-28h] BYREF
  int32_t adjustDataValue; // [xsp+24h] [xbp-1Ch] BYREF
  int32_t dataValue[2]; // [xsp+28h] [xbp-18h] BYREF

  *(_QWORD *)dataValue = 0LL;
  adjustDataValue = 0;
  *(_QWORD *)iconKind = 0LL;
  time = 0LL;
  v21 = 0;
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  if ( !iconLabelInfo1 )
    goto LABEL_26;
  IconLabelInfo__Clear(iconLabelInfo1, 0LL);
  iconLabelInfo2 = this->fields.iconLabelInfo2;
  if ( !iconLabelInfo2 )
    goto LABEL_26;
  IconLabelInfo__Clear(iconLabelInfo2, 0LL);
  this->fields.isNeedAdjustIconLabelScale = 0;
  if ( ServantOperationListViewItem__GetIconLabelInfoData1(
         this,
         sort,
         &dataValue[1],
         dataValue,
         &adjustDataValue,
         &time,
         v7) )
  {
    if ( !sort )
      goto LABEL_26;
    v9 = this->fields.iconLabelInfo1;
    if ( sort->fields.sortKind == 1 )
    {
      if ( !v9 )
        goto LABEL_26;
      IconLabelInfo__SetTime(v9, dataValue[1], time, 0, 0, 0, 0LL);
      UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
      if ( UserServantEntity_k__BackingField && UserServantEntity__IsMaterialTd(UserServantEntity_k__BackingField, 0LL) )
        this->fields.isNeedAdjustIconLabelScale = 1;
    }
    else
    {
      if ( !v9 )
        goto LABEL_26;
      IconLabelInfo__Set_28888132(v9, dataValue[1], dataValue[0], adjustDataValue, 0, 0, 0, 0, 0LL);
    }
  }
  if ( ServantOperationListViewItem__GetIconLabelInfoData2(this, sort, &iconKind[1], iconKind, &v21, v8) )
  {
    v12 = this->fields.iconLabelInfo2;
    if ( !v12 )
      goto LABEL_26;
    IconLabelInfo__Set_28888132(v12, iconKind[1], iconKind[0], v21, 0, 0, 0, 0, 0LL);
  }
  this->fields.sortValue0 = ServantOperationListViewItem__GetSortValue0(
                              this,
                              sort,
                              this->fields._IsSwapChoice_k__BackingField != this->fields._IsChoice_k__BackingField,
                              &this->fields.sortValue0B,
                              v11);
  SortValue1 = (ServantOperationListViewItem_o *)ServantOperationListViewItem__GetSortValue1(
                                                   this,
                                                   sort,
                                                   dataValue[0],
                                                   v13);
  this->fields.sortValue1 = (int64_t)SortValue1;
  if ( !ServantOperationListViewItem__GetIsDispInfo(SortValue1, sort, v15) )
  {
    servantEntity = this->fields.servantEntity;
    if ( servantEntity )
    {
      if ( !ServantEntity__get_IsExpUp(servantEntity, 0LL) )
      {
        v17 = this->fields.servantEntity;
        if ( !v17 )
          goto LABEL_26;
        if ( !ServantEntity__get_IsStatusUp(v17, 0LL) )
        {
          v18 = this->fields.servantEntity;
          if ( !v18 )
            goto LABEL_26;
          if ( !ServantEntity__get_IsServantMaterialTd(v18, 0LL) )
            return;
        }
      }
      v19 = this->fields.iconLabelInfo1;
      if ( v19 )
      {
        IconLabelInfo__Clear(v19, 0LL);
        v20 = this->fields.iconLabelInfo2;
        if ( v20 )
        {
          IconLabelInfo__Clear(v20, 0LL);
          return;
        }
      }
LABEL_26:
      sub_B170D4();
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct UserServantEntity_o **p_UserServantEntity_k__BackingField; // x20
  struct UserServantEntity_o *v15; // x8
  __int64 v16; // x21
  __int64 v17; // x22
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct ServantEntity_o *Entity; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  bool IsFriendShipSvtEquip; // w0
  UserServantEntity_o *v29; // x8
  bool IsChocolateSvtEquip; // w0
  UserServantEntity_o *v31; // x8
  bool IsMaterialTd; // w8
  bool IsFriendShipSvtEq_k__BackingField; // w9
  UserServantEntity_o *v34; // x0
  bool IsLock; // w0
  UserServantEntity_o *v36; // x8
  UserGameEntity_o *SelfUserGame; // x0
  struct UserServantEntity_o *v38; // x8
  __int128 v39; // q1
  int64_t pushUserSvtId; // x20
  struct ServantEntity_o **p_servantEntity; // x19
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_40FD6F2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, userServantEntity);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40FD6F2 = 1;
  }
  p_UserServantEntity_k__BackingField = &this->fields._UserServantEntity_k__BackingField;
  if ( userServantEntity )
  {
    *p_UserServantEntity_k__BackingField = userServantEntity;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._UserServantEntity_k__BackingField,
      (System_Int32_array **)userServantEntity,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v15 = *p_UserServantEntity_k__BackingField;
    if ( !*p_UserServantEntity_k__BackingField )
      goto LABEL_23;
    v17 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v50.fields.currentCryptoKey = v17;
    *(_QWORD *)&v50.fields.fakeValue = v16;
    this->fields._SvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v50, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_23;
    Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         MasterData_WarQuestSelectionMaster,
                                         this->fields._SvtId_k__BackingField,
                                         (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this->fields.servantEntity = Entity;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.servantEntity,
      (System_Int32_array **)Entity,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_23;
    IsFriendShipSvtEquip = UserServantEntity__IsFriendShipSvtEquip(UserServantEntity_k__BackingField, 0LL);
    v29 = this->fields._UserServantEntity_k__BackingField;
    this->fields._IsFriendShipSvtEq_k__BackingField = IsFriendShipSvtEquip;
    if ( !v29 )
      goto LABEL_23;
    IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v29, 0LL);
    v31 = this->fields._UserServantEntity_k__BackingField;
    this->fields._IsChocolateSvtEquip_k__BackingField = IsChocolateSvtEquip;
    if ( !v31 )
      goto LABEL_23;
    IsMaterialTd = UserServantEntity__IsMaterialTd(v31, 0LL);
    IsFriendShipSvtEq_k__BackingField = this->fields._IsFriendShipSvtEq_k__BackingField;
    v34 = this->fields._UserServantEntity_k__BackingField;
    this->fields._IsMaterialTdSvt_k__BackingField = IsMaterialTd;
    this->fields._IsNotSelection_k__BackingField = IsFriendShipSvtEq_k__BackingField;
    if ( !v34
      || (IsLock = UserServantEntity__IsLock(v34, 0LL),
          v36 = this->fields._UserServantEntity_k__BackingField,
          this->fields._IsLock_k__BackingField = IsLock,
          !v36)
      || (this->fields._IsChoice_k__BackingField = UserServantEntity__IsChoice(v36, 0LL),
          (SelfUserGame = UserGameMaster__getSelfUserGame(0LL)) == 0LL)
      || (v38 = *p_UserServantEntity_k__BackingField) == 0LL )
    {
LABEL_23:
      sub_B170D4();
    }
    v39 = *(_OWORD *)&v38->fields.id.fields.fakeValue;
    pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
    *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&v38->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v49.fields.fakeValue = v39;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v48 = v49;
    this->fields._IsPush_k__BackingField = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(
                                                              &v48,
                                                              0LL);
  }
  else
  {
    this->fields._UserServantEntity_k__BackingField = 0LL;
    sub_B16F98(
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
    sub_B16F98((BattleServantConfConponent_o *)p_servantEntity, 0LL, v42, v43, v44, v45, v46, v47);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v15; // q0
  ServantEntity_o *servantEntity; // x0
  bool IsKeepServantEquip; // w20
  int64_t v18; // x1
  const MethodInfo *v19; // x4
  bool v20; // w3
  ServantOperationListViewItem_o *v21; // x0
  System_Int64_array *v22; // x2
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x0
  struct System_Int32_array *CategoryIdList; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_Int32_array **p_commandCodeCategoryIdList; // x0
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x21
  int32_t v35; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v37; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8
  __int128 v39; // q0
  int64_t v40; // x23
  void *monitor; // x23
  UserServantEntity_o *v42; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+0h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+20h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+40h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+60h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+80h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+A0h] [xbp-A0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+C0h] [xbp-80h] BYREF

  if ( (byte_40FD6F6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&UserServantLeaderEntity_TypeInfo, v13);
    byte_40FD6F6 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  if ( type == 2 )
  {
    UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
    this->fields.partyIndex = -1;
    if ( UserCommandCodeEntity_k__BackingField )
    {
      CategoryIdList = UserCommandCodeEntity__GetCategoryIdList(UserCommandCodeEntity_k__BackingField, 0LL);
      p_commandCodeCategoryIdList = &this->fields.commandCodeCategoryIdList;
      this->fields.commandCodeCategoryIdList = CategoryIdList;
      goto LABEL_42;
    }
    goto LABEL_44;
  }
  if ( type != 1 )
    return;
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_44;
  v15 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v15;
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_44;
  IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip(servantEntity, 0LL);
  if ( IsKeepServantEquip )
  {
    v48 = v49;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v47 = v48;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v47, 0LL);
    v20 = 1;
    v21 = this;
    v22 = partyUserEquipList;
  }
  else
  {
    v48 = v49;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v46 = v48;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v46, 0LL);
    v21 = this;
    v22 = partyUserServantList;
    v20 = 0;
  }
  this->fields.partyIndex = ServantOperationListViewItem__GetPartyIndex(v21, v18, v22, v20, v19);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_44;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)MasterData_WarQuestSelectionMaster->fields.list;
  if ( !list )
    goto LABEL_44;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)MasterData_WarQuestSelectionMaster->fields.list,
         (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    goto LABEL_40;
  v35 = 0;
  while ( 1 )
  {
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v35,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_44;
    v37 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v37
      || (UserServantLeaderEntity_c *)Item->klass->_2.typeHierarchy[v37 - 1] != UserServantLeaderEntity_TypeInfo )
    {
      goto LABEL_44;
    }
    if ( !IsKeepServantEquip )
      break;
    klass = Item[2].klass;
    if ( klass )
    {
      v39 = *(_OWORD *)&klass->_1.byval_arg.bits;
      *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&klass->_1.namespaze;
      *(_OWORD *)&v48.fields.fakeValue = v39;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v45 = v48;
      v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v45, 0LL);
      v44 = v49;
      if ( v40 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v44, 0LL) )
      {
        *(_WORD *)&this->fields._IsUseSupportEquip_k__BackingField = 257;
        goto LABEL_40;
      }
    }
LABEL_37:
    if ( ++v35 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                    list,
                    (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      goto LABEL_40;
  }
  monitor = Item[3].monitor;
  v48 = v49;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v43 = v48;
  if ( monitor != (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v43, 0LL) )
    goto LABEL_37;
  this->fields._IsUseSupportServant_k__BackingField = 1;
LABEL_40:
  v42 = this->fields._UserServantEntity_k__BackingField;
  if ( !v42 )
LABEL_44:
    sub_B170D4();
  CategoryIdList = UserServantEntity__GetEquipCategoryIdList(v42, 0LL);
  p_commandCodeCategoryIdList = &this->fields.categoryIdList;
  this->fields.categoryIdList = CategoryIdList;
LABEL_42:
  sub_B16F98(
    (BattleServantConfConponent_o *)p_commandCodeCategoryIdList,
    (System_Int32_array **)CategoryIdList,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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
  UserServantEntity_o *v5; // x0
  UserServantEntity_o *v6; // x0
  UserServantEntity_o *v8; // x0

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    return 1;
  if ( UserServantEntity__IsEventJoin(UserServantEntity_k__BackingField, 0LL) )
    return 1;
  v4 = this->fields._UserServantEntity_k__BackingField;
  if ( !v4 || UserServantEntity__IsLeave(v4, 0LL) )
    return 1;
  v5 = this->fields._UserServantEntity_k__BackingField;
  if ( !v5 )
    goto LABEL_12;
  if ( UserServantEntity__IsCombineMaterial(v5, 0LL) )
    return 1;
  v6 = this->fields._UserServantEntity_k__BackingField;
  if ( !v6 )
    goto LABEL_12;
  if ( UserServantEntity__IsStatusUp(v6, 0LL) )
    return 1;
  v8 = this->fields._UserServantEntity_k__BackingField;
  if ( !v8 )
LABEL_12:
    sub_B170D4();
  return UserServantEntity__IsMaterialTd(v8, 0LL);
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
    sub_B170D4();
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
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  if ( (byte_40FD6FB & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40FD6FB = 1;
  }
  UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    sub_B170D4();
  v4 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v6, 0LL);
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

  if ( (byte_40FD6FA & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40FD6FA = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v6, 0LL);
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
  sub_B16F98(
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
  sub_B16F98(
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
    sub_B170D4();
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
  sub_B16F98(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._UserServantEntity_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}