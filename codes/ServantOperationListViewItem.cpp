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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  IconLabelInfo_o *v20; // x25
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x4
  const MethodInfo_47A29F8 *v33; // x0
  int64_t Instance; // x0
  __int64 v35; // x1
  int64_t v36; // x8
  __int64 rarity; // x20
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x9
  __int64 v39; // x21
  __int64 lv; // x22
  __int64 v41; // x2
  struct UserServantEntity_o *v42; // x8
  __int64 v43; // x20
  __int64 v44; // x21
  __int64 v45; // x2
  struct UserServantEntity_o *v46; // x8
  __int128 v47; // q1
  __int64 v48; // x2
  struct UserServantEntity_o *v49; // x8
  int32_t adjustHp; // w20
  struct BalanceConfig_StaticFields *static_fields; // x9
  bool v52; // w8
  UserServantEntity_o *v53; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  const MethodInfo *v68; // x1
  int64_t UserSvtId; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+20h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_596C690 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C690 = 1;
  }
  v13 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0);
  this->fields.iconLabelInfo1 = v13;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v20, 0);
  this->fields.iconLabelInfo2 = v20;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  ServantOperationListViewItem__Init(this, index, v27);
  ServantOperationListViewItem__SetServantData(this, userServantEntity, v28);
  ServantOperationListViewItem__SetCommandCodeData(this, 0, v29);
  ServantOperationListViewItem__SetData(this, 1, v30);
  ServantOperationListViewItem__StatusOverWrite(this, userServantEntity, v31);
  ServantOperationListViewItem__SetServantUses(this, 1, partyUserServantIds, partyUserEquipIds, v32);
  v33 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields._IsFavorite_k__BackingField = isFavorite;
  this->fields.amountSortValue = -1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v33);
  if ( !Instance )
    goto LABEL_29;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_29;
  v36 = *(int *)(Instance + 52);
  Instance = (int64_t)this->fields._UserServantEntity_k__BackingField;
  this->fields.priority = v36;
  this->fields.sortValue1B = v36;
  if ( !Instance )
    goto LABEL_29;
  rarity = (unsigned int)this->fields.rarity;
  Instance = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_29;
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_29;
  if ( !this->fields.servantEntity )
    goto LABEL_29;
  v39 = *(int *)(Instance + 208);
  lv = UserServantEntity_k__BackingField->fields.lv;
  Instance = ServantEntity__get_IsServantMaterialTd(this->fields.servantEntity, 0);
  v42 = this->fields._UserServantEntity_k__BackingField;
  this->fields.sortValue2 = (v39 << 16) | (rarity << 48) | (2 * lv) | Instance & 1;
  if ( !v42 )
    goto LABEL_29;
  v43 = *(_QWORD *)&v42->fields.svtId.fields.currentCryptoKey;
  v44 = *(_QWORD *)&v42->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v41);
  *(_QWORD *)&v72.fields.currentCryptoKey = v43;
  *(_QWORD *)&v72.fields.fakeValue = v44;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v72, 0);
  v46 = this->fields._UserServantEntity_k__BackingField;
  this->fields.sortValue2B = (int)Instance;
  if ( !v46 )
    goto LABEL_29;
  v47 = *(_OWORD *)&v46->fields.id.fields.fakeValue;
  *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)&v46->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v71.fields.fakeValue = v47;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35, v45);
  v70 = v71;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v70, 0);
  v49 = this->fields._UserServantEntity_k__BackingField;
  this->fields.sortValueLast = Instance;
  if ( !v49 )
    goto LABEL_29;
  adjustHp = v49->fields.adjustHp;
  if ( *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    static_fields = BalanceConfig_TypeInfo->static_fields;
    this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * adjustHp;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v35, v48);
    static_fields = BalanceConfig_TypeInfo->static_fields;
    v49 = this->fields._UserServantEntity_k__BackingField;
    this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * adjustHp;
    if ( !v49 )
      goto LABEL_29;
  }
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * v49->fields.adjustAtk;
  UserServantEntity__GetAdjustMaxData(
    v49,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  Instance = (int64_t)this->fields._UserServantEntity_k__BackingField;
  if ( !Instance )
    goto LABEL_29;
  if ( UserServantEntity__get_IsSaveTransformServant((UserServantEntity_o *)Instance, 0) )
  {
    Instance = (int64_t)this->fields._UserServantEntity_k__BackingField;
    if ( !Instance )
      goto LABEL_29;
    v52 = !UserServantEntity__CheckBaseServant((UserServantEntity_o *)Instance, -1, 0);
  }
  else
  {
    v52 = 0;
  }
  Instance = (int64_t)this->fields._UserServantEntity_k__BackingField;
  this->fields.isTransformed = v52;
  if ( !Instance
    || (Instance = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
                     (UserServantEntity_o *)Instance,
                     -1,
                     0,
                     0),
        v53 = this->fields._UserServantEntity_k__BackingField,
        this->fields.dispLimitCount = Instance,
        !v53)
    || (SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v53, -1, Instance, 0),
        this->fields.skillCategoryIdList = SkillCategoryIdList,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60),
        (Instance = (int64_t)this->fields._UserServantEntity_k__BackingField) == 0) )
  {
LABEL_29:
    sub_2213CDC(Instance, v35);
  }
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   this->fields.dispLimitCount,
                                   0);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(this, v68);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0);
}


void ServantOperationListViewItem___ctor_41783836(
        ServantOperationListViewItem_o *this,
        int32_t index,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        bool isEquiped,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  IconLabelInfo_o *v16; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x4
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v32; // x21
  __int64 v33; // x22
  __int64 v34; // x2
  __int128 v35; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_596C691 & 1) == 0 )
  {
    sub_2213A60(&IconLabelInfo_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596C691 = 1;
  }
  v9 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0);
  this->fields.iconLabelInfo1 = v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0);
  this->fields.iconLabelInfo2 = v16;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  ServantOperationListViewItem__Init(this, index, v23);
  ServantOperationListViewItem__SetServantData(this, 0, v24);
  ServantOperationListViewItem__SetCommandCodeData(this, userCommandCodeEntity, v25);
  ServantOperationListViewItem__SetData(this, 2, v26);
  ServantOperationListViewItem__SetServantUses(this, 2, 0, 0, v27);
  commandCodeEntity = this->fields.commandCodeEntity;
  this->fields._IsCommandCodeEquiped_k__BackingField = isEquiped;
  this->fields.amountSortValue = -1;
  if ( !commandCodeEntity )
    goto LABEL_10;
  v32 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v33 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30);
  *(_QWORD *)&v38.fields.currentCryptoKey = v32;
  *(_QWORD *)&v38.fields.fakeValue = v33;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v38, 0);
  this->fields.sortValue1B = (int)v28;
  if ( !userCommandCodeEntity )
LABEL_10:
    sub_2213CDC(v28, v29);
  v35 = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v37.fields.fakeValue = v35;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v29, v34);
  v36 = v37;
  this->fields.sortValueLast = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v36, 0);
}


void ServantOperationListViewItem__ClearIconLabelInfo(
        ServantOperationListViewItem_o *this,
        IconLabelInfo_o *iconLabelInfo,
        const MethodInfo *method)
{
  IconLabelInfo_o *v4; // x0

  if ( (byte_596C6A0 & 1) == 0 )
  {
    sub_2213A60(&IconLabelInfo_TypeInfo);
    byte_596C6A0 = 1;
  }
  if ( iconLabelInfo )
  {
    IconLabelInfo__Clear(iconLabelInfo, 0);
  }
  else
  {
    v4 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v4, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
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
    sub_2213CDC(this, *(_QWORD *)&type);
  if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)this, 0) )
    return 2;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_2213CDC(this, *(_QWORD *)&type);
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
  __int64 v8; // x2
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  UserServantCollectionMaster_o *v10; // x20
  __int128 v11; // q1
  __int64 v12; // x2
  struct UserServantEntity_o *v13; // x8
  int64_t v14; // x21
  __int64 v15; // x22
  __int64 v16; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-60h]
  int32_t friendshipRank; // [xsp+4Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_596C69C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C69C = 1;
  }
  result = 0;
  friendshipRank = 0;
  if ( type == 1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_15;
    v10 = (UserServantCollectionMaster_o *)Instance;
    v11 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.userId.fields.fakeValue;
    *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v18.fields.fakeValue = v11;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v8);
    v17 = v18;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v17, 0);
    v13 = this->fields._UserServantEntity_k__BackingField;
    if ( !v13 )
      goto LABEL_15;
    v14 = Instance;
    v15 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v12);
    *(_QWORD *)&v20.fields.currentCryptoKey = v15;
    *(_QWORD *)&v20.fields.fakeValue = v16;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v20, 0);
    if ( !v10 || (Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v10, v14, Instance, 0)) == 0 )
LABEL_15:
      sub_2213CDC(Instance, v7);
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
  int32_t sortKind; // w8
  struct UserServantEntity_o *v14; // x8
  int64_t createdAt; // x8
  __int64 v16; // x22
  __int64 v17; // x23
  int32_t v18; // w8
  bool result; // w0
  int32_t friendshipMax; // w8
  UserServantEntity_o *v21; // x0
  int32_t HpBoostValue; // w0
  UserServantEntity_o *v23; // x0
  UserServantEntity_o *v24; // x0
  int32_t nowMaxAtkReinforceValue; // w8
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  v12 = this;
  if ( (byte_596C697 & 1) == 0 )
  {
    this = (ServantOperationListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C697 = 1;
  }
  *dataValue = 0;
  *adjustDataValue = 0;
  *time = 0;
  if ( !sort )
    sub_2213CDC(this, sort);
  sortKind = sort->fields.sortKind;
  if ( sortKind > 6 )
  {
    if ( sortKind > 13 )
    {
      switch ( sortKind )
      {
        case 16:
          if ( !v12->fields._UserServantEntity_k__BackingField )
            goto LABEL_40;
          *iconKind = 45;
          *dataValue = v12->fields.atkReinforceValue;
          nowMaxAtkReinforceValue = v12->fields.nowMaxAtkReinforceValue;
          break;
        case 15:
          if ( !v12->fields._UserServantEntity_k__BackingField )
            goto LABEL_40;
          *iconKind = 44;
          *dataValue = v12->fields.hpReinforceValue;
          nowMaxAtkReinforceValue = v12->fields.nowMaxHpReinforceValue;
          break;
        case 14:
          goto LABEL_25;
        default:
          goto LABEL_40;
      }
      *adjustDataValue = nowMaxAtkReinforceValue;
      return 1;
    }
    if ( sortKind != 7 )
    {
      if ( sortKind != 8 )
      {
        if ( sortKind != 10 || !v12->fields._UserServantEntity_k__BackingField )
          goto LABEL_40;
        *iconKind = 32;
        v16 = *(_QWORD *)&v12->fields.friendship.fields.currentCryptoKey;
        v17 = *(_QWORD *)&v12->fields.friendship.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort, iconKind);
        *(_QWORD *)&v28.fields.currentCryptoKey = v16;
        *(_QWORD *)&v28.fields.fakeValue = v17;
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v28, 0);
        result = 1;
        *dataValue = v18;
        friendshipMax = v12->fields.friendshipMax;
LABEL_28:
        *adjustDataValue = friendshipMax;
        return result;
      }
      goto LABEL_25;
    }
    if ( v12->fields._UserServantEntity_k__BackingField )
    {
      *iconKind = 7;
      *dataValue = v12->fields.cost;
      return 1;
    }
LABEL_40:
    result = 0;
    *iconKind = -1;
    return result;
  }
  if ( sortKind > 3 )
  {
    if ( sortKind != 4 )
    {
      if ( sortKind == 5 )
      {
        UserServantEntity_k__BackingField = v12->fields._UserServantEntity_k__BackingField;
        if ( !UserServantEntity_k__BackingField )
          goto LABEL_40;
        *iconKind = 3;
        *dataValue = v12->fields.hp;
        HpBoostValue = UserServantEntity__get_HpBoostValue(UserServantEntity_k__BackingField, 0);
      }
      else
      {
        v21 = v12->fields._UserServantEntity_k__BackingField;
        if ( !v21 )
          goto LABEL_40;
        *iconKind = 5;
        *dataValue = v12->fields.atk;
        HpBoostValue = UserServantEntity__get_AtkBoostValue(v21, 0);
      }
      goto LABEL_27;
    }
    v24 = v12->fields._UserServantEntity_k__BackingField;
    if ( v24 )
    {
      *iconKind = 33;
      UserServantEntity__getTreasureDeviceInfo_50192116(v24, dataValue, adjustDataValue, 0);
      return 1;
    }
    goto LABEL_40;
  }
  if ( (unsigned int)(sortKind - 2) < 2 )
  {
LABEL_25:
    v23 = v12->fields._UserServantEntity_k__BackingField;
    if ( !v23 )
      goto LABEL_40;
    *iconKind = 2;
    *dataValue = v23->fields.lv;
    HpBoostValue = UserServantEntity__getLevelMax(v23, 0);
LABEL_27:
    friendshipMax = HpBoostValue;
    result = 1;
    goto LABEL_28;
  }
  if ( sortKind != 1 )
    goto LABEL_40;
  v14 = v12->fields._UserServantEntity_k__BackingField;
  *iconKind = 49;
  if ( v14 )
  {
    createdAt = v14->fields.createdAt;
LABEL_43:
    *time = createdAt;
    return 1;
  }
  UserCommandCodeEntity_k__BackingField = v12->fields._UserCommandCodeEntity_k__BackingField;
  if ( UserCommandCodeEntity_k__BackingField )
  {
    createdAt = UserCommandCodeEntity_k__BackingField->fields.createdAt;
    goto LABEL_43;
  }
  return 1;
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

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  *iconKind = -1;
  *dataValue = 0;
  *adjustDataValue = 0;
  if ( !UserServantEntity_k__BackingField )
    return 0;
  if ( !sort )
    sub_2213CDC(UserServantEntity_k__BackingField, 0);
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
  __int64 v8; // x2
  Il2CppObject *MasterData_object; // x20
  struct ServantEntity_o *v10; // x9
  __int64 v11; // x21
  __int64 v12; // x22
  int64_t v13; // x19
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_596C69F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C69F = 1;
  }
  entity = 0;
  if ( type != 1 )
    goto LABEL_20;
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    if ( ServantEntity__get_IsServant(servantEntity, 0) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      v10 = this->fields.servantEntity;
      if ( !v10 )
        goto LABEL_22;
      v11 = *(_QWORD *)&v10->fields.id.fields.currentCryptoKey;
      v12 = *(_QWORD *)&v10->fields.id.fields.fakeValue;
      v13 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
      *(_QWORD *)&v16.fields.currentCryptoKey = v11;
      *(_QWORD *)&v16.fields.fakeValue = v12;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v16, 0);
      if ( !MasterData_object )
        goto LABEL_22;
      if ( UserServantCommandCodeMaster__TryGetEntity(
             (UserServantCommandCodeMaster_o *)MasterData_object,
             &entity,
             v13,
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
        sub_2213CDC(Instance, v7);
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
  unsigned int v4; // w9
  bool v6; // w10

  if ( !sort )
    sub_2213CDC(this, 0);
  sortKind = sort->fields.sortKind;
  v4 = (0x7BFFu >> sortKind) & 1;
  if ( (unsigned int)sortKind > 0x10 )
    LOBYTE(v4) = 1;
  v6 = sortKind != 4 && sortKind != 7;
  if ( sortKind <= 7 )
    return v6;
  else
    return v4;
}


bool ServantOperationListViewItem__GetIsEquippedCommandCodeServant(
        ServantOperationListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *MasterData_object; // x20
  struct ServantEntity_o *v10; // x9
  __int64 v11; // x21
  __int64 v12; // x22
  int64_t v13; // x19
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_596C69E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C69E = 1;
  }
  entity = 0;
  if ( type != 1 )
    goto LABEL_20;
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    if ( ServantEntity__get_IsServant(servantEntity, 0) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      v10 = this->fields.servantEntity;
      if ( !v10 )
        goto LABEL_22;
      v11 = *(_QWORD *)&v10->fields.id.fields.currentCryptoKey;
      v12 = *(_QWORD *)&v10->fields.id.fields.fakeValue;
      v13 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
      *(_QWORD *)&v16.fields.currentCryptoKey = v11;
      *(_QWORD *)&v16.fields.fakeValue = v12;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v16, 0);
      if ( !MasterData_object )
        goto LABEL_22;
      if ( UserServantCommandCodeMaster__TryGetEntity(
             (UserServantCommandCodeMaster_o *)MasterData_object,
             &entity,
             v13,
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
        sub_2213CDC(Instance, v7);
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
    sub_2213CDC(this, userServantId);
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
        sub_2213CE4(v7);
      if ( ids->m_Items[(int)v7] == userServantId )
        break;
      v7 = (unsigned int)(v7 + 1);
      if ( (max_length & ~(max_length >> 31)) == (_DWORD)v7 )
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
  __int64 v6; // x2
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  ServantLimitMaster_o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  int32_t SvtId_k__BackingField; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_596C69B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C69B = 1;
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
      UserCommandCodeEntity_k__BackingField = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( UserCommandCodeEntity_k__BackingField )
      {
        UserCommandCodeEntity_k__BackingField = DataManager__GetMasterData_object_(
                                                  (DataManager_o *)UserCommandCodeEntity_k__BackingField,
                                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
        if ( UserServantEntity_k__BackingField )
        {
          v8 = (ServantLimitMaster_o *)UserCommandCodeEntity_k__BackingField;
          v9 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCount.fields.currentCryptoKey;
          v10 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCount.fields.fakeValue;
          SvtId_k__BackingField = this->fields._SvtId_k__BackingField;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&type, v6);
          *(_QWORD *)&v13.fields.currentCryptoKey = v9;
          *(_QWORD *)&v13.fields.fakeValue = v10;
          UserCommandCodeEntity_k__BackingField = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                            v13,
                                                            0);
          if ( v8 )
          {
            UserCommandCodeEntity_k__BackingField = ServantLimitMaster__GetEntity(
                                                      v8,
                                                      SvtId_k__BackingField,
                                                      (int32_t)UserCommandCodeEntity_k__BackingField,
                                                      0);
            if ( UserCommandCodeEntity_k__BackingField )
              return *((_DWORD *)UserCommandCodeEntity_k__BackingField + 6);
          }
        }
      }
LABEL_15:
      sub_2213CDC(UserCommandCodeEntity_k__BackingField, *(_QWORD *)&type);
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
  bool IsLock_k__BackingField; // w8
  bool IsChoice_k__BackingField; // w8
  bool v10; // w8
  bool v11; // w8

  *sortValue0B = 0;
  if ( !sort )
    sub_2213CDC(this, 0);
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
    IsLock_k__BackingField = !this->fields._IsLock_k__BackingField;
    if ( !this->fields._IsSwapLock_k__BackingField )
      IsLock_k__BackingField = this->fields._IsLock_k__BackingField;
    if ( !IsLock_k__BackingField && !this->fields._IsNotSelection_k__BackingField )
    {
      IsChoice_k__BackingField = !this->fields._IsChoice_k__BackingField;
      if ( !this->fields._IsSwapChoice_k__BackingField )
        IsChoice_k__BackingField = this->fields._IsChoice_k__BackingField;
      if ( IsChoice_k__BackingField )
        return -20;
      return 0;
    }
    return -10;
  }
  v10 = !this->fields._IsLock_k__BackingField;
  if ( !this->fields._IsSwapLock_k__BackingField )
    v10 = this->fields._IsLock_k__BackingField;
  if ( v10 )
    return -10;
  v11 = !this->fields._IsChoice_k__BackingField;
  if ( !this->fields._IsSwapChoice_k__BackingField )
    v11 = this->fields._IsChoice_k__BackingField;
  if ( v11 )
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
    if ( !ServantOperationListViewItem__get_IsProtected(this, (const MethodInfo *)sort) && !this->fields.isFortification )
      return 0;
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
  int32_t sortKind; // w8
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v9; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v10; // x0
  struct UserServantEntity_o *v11; // x8
  unsigned __int64 amountSortValue; // x20
  struct ListViewManager_o *manager; // x20
  __int64 v14; // x21
  __int64 v15; // x22
  const MethodInfo *v16; // x2
  __int64 naturalAligment; // x10
  __int64 rarity; // x19
  __int64 v19; // x9
  unsigned __int64 v20; // x8
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v22; // q1
  __int64 v23; // x10
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v25; // x20
  __int64 v26; // x21
  int32_t v27; // w0
  _OWORD v29[2]; // [xsp+0h] [xbp-90h] BYREF
  _OWORD v30[2]; // [xsp+20h] [xbp-70h] BYREF
  __int128 v31; // [xsp+40h] [xbp-50h]
  __int128 v32; // [xsp+50h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  v6 = this;
  if ( (byte_596C698 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantOperationListViewItem_o *)sub_2213A60(&ServantOperationListViewManager_TypeInfo);
    byte_596C698 = 1;
  }
  if ( !sort )
    goto LABEL_55;
  sortKind = sort->fields.sortKind;
  this = 0;
  if ( sortKind <= 6 )
  {
    if ( sortKind > 3 )
      return dataValue;
    if ( sortKind != 1 )
    {
      if ( sortKind != 2 )
      {
        if ( sortKind != 3 )
          return (int64_t)this;
        return dataValue;
      }
      return v6->fields.rarity;
    }
    UserServantEntity_k__BackingField = v6->fields._UserServantEntity_k__BackingField;
    if ( UserServantEntity_k__BackingField )
    {
      v9 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
      v31 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
      v32 = v9;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
          sort,
          *(_QWORD *)&dataValue);
      v10 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v30;
      v30[0] = v31;
      v30[1] = v32;
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(v10, 0);
    }
    UserCommandCodeEntity_k__BackingField = v6->fields._UserCommandCodeEntity_k__BackingField;
    if ( UserCommandCodeEntity_k__BackingField )
    {
      v22 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
      v31 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
      v32 = v22;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
          sort,
          *(_QWORD *)&dataValue);
      v10 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v29;
      v29[0] = v31;
      v29[1] = v32;
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(v10, 0);
    }
    return 0;
  }
  if ( sortKind > 13 )
  {
    if ( sortKind != 14 )
    {
      if ( sortKind == 15 || sortKind == 16 )
        return dataValue;
      return (int64_t)this;
    }
    v11 = v6->fields._UserServantEntity_k__BackingField;
    if ( v11 )
    {
      amountSortValue = v6->fields.amountSortValue;
      if ( (amountSortValue & 0x8000000000000000LL) != 0 )
      {
        manager = sort->fields.manager;
        v14 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
        v15 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            sort,
            *(_QWORD *)&dataValue);
        *(_QWORD *)&v33.fields.currentCryptoKey = v14;
        *(_QWORD *)&v33.fields.fakeValue = v15;
        this = (ServantOperationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                   v33,
                                                   0);
        if ( !manager )
          goto LABEL_55;
        naturalAligment = ServantOperationListViewManager_TypeInfo->_2.naturalAligment;
        if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment )
          goto LABEL_55;
        if ( (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewManager_TypeInfo )
          goto LABEL_55;
        this = (ServantOperationListViewItem_o *)ServantOperationListViewManager__GetAmountSortValue(
                                                   (ServantOperationListViewManager_o *)manager,
                                                   (int32_t)this,
                                                   v16);
        v11 = v6->fields._UserServantEntity_k__BackingField;
        v6->fields.amountSortValue = (int64_t)this;
        if ( !v11 )
          goto LABEL_55;
        amountSortValue = (unsigned __int64)this;
      }
      rarity = v6->fields.rarity;
      this = (ServantOperationListViewItem_o *)UserServantEntity__get_BaseServantEntity(v11, 0);
      if ( this )
      {
        v19 = *(int *)&this->fields._IsPartyEquip_k__BackingField;
        v20 = (rarity << 32) + (amountSortValue << 48);
        return v20 | v19;
      }
    }
    else
    {
      if ( !v6->fields._UserCommandCodeEntity_k__BackingField )
        return 0;
      if ( v6->fields.amountSortValue < 0 )
      {
        this = (ServantOperationListViewItem_o *)sort->fields.manager;
        if ( !this )
          goto LABEL_55;
        v23 = ServantOperationListViewManager_TypeInfo->_2.naturalAligment;
        if ( this->klass->_2.naturalAligment < (unsigned int)v23
          || (ServantOperationListViewManager_c *)this->klass->_2.typeHierarchy[v23 - 1] != ServantOperationListViewManager_TypeInfo )
        {
          goto LABEL_55;
        }
        this = (ServantOperationListViewItem_o *)ServantOperationListViewManager__GetCommandCodeAmountSortValue(
                                                   (ServantOperationListViewManager_o *)this,
                                                   v6->fields._CommandCodeId_k__BackingField,
                                                   *(const MethodInfo **)&dataValue);
        v6->fields.amountSortValue = (int64_t)this;
      }
      commandCodeEntity = v6->fields.commandCodeEntity;
      if ( commandCodeEntity )
      {
        v25 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
        v26 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            sort,
            *(_QWORD *)&dataValue);
        *(_QWORD *)&v34.fields.currentCryptoKey = v25;
        *(_QWORD *)&v34.fields.fakeValue = v26;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v34, 0);
        v20 = ((unsigned __int64)(unsigned int)v6->fields.rarity << 32) + (v6->fields.amountSortValue << 48);
        v19 = v27;
        return v20 | v19;
      }
    }
LABEL_55:
    sub_2213CDC(this, sort);
  }
  if ( sortKind == 7 )
    return dataValue;
  if ( sortKind != 8 )
  {
    if ( sortKind != 10 )
      return (int64_t)this;
    return dataValue;
  }
  this = (ServantOperationListViewItem_o *)-v6->fields.priority;
  v6->fields.sortValue1 = (int64_t)this;
  return (int64_t)this;
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
  this->fields._DragSelectNum_k__BackingField = -1;
  *(_WORD *)&this->fields._IsFavorite_k__BackingField = 0;
  *(_DWORD *)&this->fields._IsEquippedCommandCodeServant_k__BackingField = 0;
  *(_WORD *)&this->fields._IsMaterialTdSvt_k__BackingField = 0;
  *(_DWORD *)&this->fields._IsUseRecommendSupportServant_k__BackingField = 0;
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
  _BOOL4 v7; // w8

  if ( (byte_596C696 & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&ListViewSort_FilterKind___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_596C696 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_20;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_20;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.commandCodeCategoryIdList, sort, 0) )
  {
    return 0;
  }
  RarityFilterKindList = (System_Int32Enum_array *)sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !RarityFilterKindList )
LABEL_20:
    sub_2213CDC(RarityFilterKindList, sort);
  if ( !LODWORD(RarityFilterKindList->max_length) )
    sub_2213CE4(RarityFilterKindList);
  RarityFilterKindList->m_Items[0] = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
    || !ListViewSort__GetFilter(sort, 39, 0) )
  {
    return 1;
  }
  v7 = !this->fields._IsChoice_k__BackingField;
  if ( !this->fields._IsSwapChoice_k__BackingField )
    return this->fields._IsChoice_k__BackingField;
  return v7;
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
  __int64 v7; // x2
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  __int64 v10; // x2
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  __int64 v13; // x2
  bool IsMatchServantEquipCombineStatusFilter; // w8
  bool result; // w0
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x0
  bool HaveStatusFilter; // w8
  _BOOL4 v19; // w8

  if ( (byte_596C695 & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&ListViewSort_FilterKind___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_596C695 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_36;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0) )
  {
    return 0;
  }
  v8 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v7);
    v8 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v8->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                          (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v10);
    v11 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v11->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
    || (IsMatchServantEquipCombineStatusFilter = ListViewSort__IsMatchServantEquipCombineStatusFilter(
                                                   sort,
                                                   this->fields._UserServantEntity_k__BackingField,
                                                   this->fields.servantEntity,
                                                   0,
                                                   0),
        result = 0,
        IsMatchServantEquipCombineStatusFilter) )
  {
    v16 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v13);
      v16 = FilterKindList_TypeInfo;
    }
    RarityFilterKindList = (System_Int32Enum_array *)v16->static_fields->ServantEquipHaveStatusFilterKindList;
    if ( !RarityFilterKindList )
      goto LABEL_36;
    v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                             (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0)
      || (HaveStatusFilter = ListViewSort__IsMatchServantEquipHaveStatusFilter(
                               sort,
                               this->fields._UserServantEntity_k__BackingField,
                               this->fields.servantEntity,
                               0,
                               0),
          result = 0,
          HaveStatusFilter) )
    {
      RarityFilterKindList = (System_Int32Enum_array *)sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
      if ( RarityFilterKindList )
      {
        if ( !LODWORD(RarityFilterKindList->max_length) )
          sub_2213CE4(RarityFilterKindList);
        RarityFilterKindList->m_Items[0] = 39;
        if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
          || !ListViewSort__GetFilter(sort, 39, 0) )
        {
          return 1;
        }
        v19 = !this->fields._IsChoice_k__BackingField;
        if ( !this->fields._IsSwapChoice_k__BackingField )
          return this->fields._IsChoice_k__BackingField;
        return v19;
      }
LABEL_36:
      sub_2213CDC(RarityFilterKindList, sort);
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
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  __int64 v7; // x2
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  __int64 v10; // x2
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  __int64 v13; // x2
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  __int64 v16; // x2
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  __int64 v19; // x2
  _BOOL4 IsChoice_k__BackingField; // w8
  FilterKindList_c *v21; // x0
  ListViewSort_FilterKind_array *v22; // x21
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  bool v25; // w8
  _BOOL4 v26; // w21
  int32_t DispLimitCountStageSealAfterIndexZero; // w2
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v43; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v45; // w0

  if ( (byte_596C694 & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&ListViewSort_FilterKind___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_596C694 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_71;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_71;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v8 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v7);
      v8 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v8->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_71;
    v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            ClassGroupFilterKindList,
                                            (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v10);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v11->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_71;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields._UserServantEntity_k__BackingField, 0) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v13);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_71;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields._UserServantEntity_k__BackingField, 0) )
  {
    return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v16);
    v17 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v17->static_fields->ServantTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_71;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0)
    && !ListViewSort__IsMatchServantTypeFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
    goto LABEL_31;
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
  {
    if ( UserServantEntity__get_IsSaveTransformServant(UserServantEntity_k__BackingField, 0) )
    {
      ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields._UserServantEntity_k__BackingField;
      if ( !ClassGroupFilterKindList )
        goto LABEL_71;
      v25 = !UserServantEntity__CheckBaseServant((UserServantEntity_o *)ClassGroupFilterKindList, -1, 0);
    }
    else
    {
      v25 = 0;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields._UserServantEntity_k__BackingField;
    if ( ClassGroupFilterKindList )
    {
      v26 = v25;
      DispLimitCountStageSealAfterIndexZero = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
                                                (UserServantEntity_o *)ClassGroupFilterKindList,
                                                -1,
                                                0,
                                                0);
      if ( this->fields.isTransformed != v26 || this->fields.dispLimitCount != DispLimitCountStageSealAfterIndexZero )
      {
        ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields._UserServantEntity_k__BackingField;
        this->fields.isTransformed = v26;
        this->fields.dispLimitCount = DispLimitCountStageSealAfterIndexZero;
        if ( !ClassGroupFilterKindList )
          goto LABEL_71;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(
                                (UserServantEntity_o *)ClassGroupFilterKindList,
                                -1,
                                DispLimitCountStageSealAfterIndexZero,
                                0);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields._UserServantEntity_k__BackingField;
        if ( !ClassGroupFilterKindList )
          goto LABEL_71;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         this->fields.dispLimitCount,
                                         0);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
      }
      goto LABEL_58;
    }
LABEL_71:
    sub_2213CDC(ClassGroupFilterKindList, sort);
  }
LABEL_58:
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_71;
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_72;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                   0);
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_71;
  if ( !ClassGroupFilterKindList->fields._size )
LABEL_72:
    sub_2213CE4(ClassGroupFilterKindList);
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 51;
  v43 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            this->fields.tdCategoryIdList,
                            sort,
                            0);
  v45 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
  if ( IsUnSelectedAllTargetFilters && v43 || !IsUnSelectedAllTargetFilters && !v43 )
  {
    if ( !IsMatchEffectCategory && !v45 )
      return 0;
  }
  else if ( IsUnSelectedAllTargetFilters )
  {
    if ( !v45 )
      return 0;
  }
  else if ( !IsMatchEffectCategory )
  {
    return 0;
  }
LABEL_31:
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
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_71;
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_72;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    && ListViewSort__GetFilter(sort, 39, 0) )
  {
    IsChoice_k__BackingField = !this->fields._IsChoice_k__BackingField;
    if ( !this->fields._IsSwapChoice_k__BackingField )
      IsChoice_k__BackingField = this->fields._IsChoice_k__BackingField;
    if ( !IsChoice_k__BackingField )
      return 0;
  }
  v21 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v19);
    v21 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v21->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_71;
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v22, 0)
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
  __int64 v5; // x2
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x9
  __int128 v7; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  if ( (byte_596C693 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596C693 = 1;
  }
  if ( this->fields._UserServantEntity_k__BackingField )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame || (UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField) == 0 )
      sub_2213CDC(SelfUserGame, v4);
    v7 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
    pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
    *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v10.fields.fakeValue = v7;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v5);
    v9 = v10;
    this->fields._IsPush_k__BackingField = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                              &v9,
                                                              0);
  }
}


void ServantOperationListViewItem__SetCommandCodeData(
        ServantOperationListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x20
  __int64 v13; // x21
  int32_t v14; // w0
  const MethodInfo_47A29F8 *v15; // x8
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *Entity; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  bool IsLock; // w8
  bool IsChoice; // w0
  struct CommandCodeEntity_o **p_commandCodeEntity; // x19
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_596C69A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C69A = 1;
  }
  if ( userCommandCodeEntity )
  {
    this->fields._UserCommandCodeEntity_k__BackingField = userCommandCodeEntity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
      (int32_t)userCommandCodeEntity,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v13 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
    *(_QWORD *)&v34.fields.currentCryptoKey = v13;
    *(_QWORD *)&v34.fields.fakeValue = v12;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v34, 0);
    v15 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
    this->fields._CommandCodeId_k__BackingField = v14;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v15);
    if ( !Instance )
      goto LABEL_12;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    if ( !Instance
      || (Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields._CommandCodeId_k__BackingField,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__),
          this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeEntity,
            (int32_t)Entity,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24),
          (Instance = (DataManager_o *)this->fields._UserCommandCodeEntity_k__BackingField) == 0)
      || (IsLock = UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0),
          Instance = (DataManager_o *)this->fields._UserCommandCodeEntity_k__BackingField,
          this->fields._IsLock_k__BackingField = IsLock,
          !Instance) )
    {
LABEL_12:
      sub_2213CDC(Instance, v17);
    }
    IsChoice = UserCommandCodeEntity__IsChoice((UserCommandCodeEntity_o *)Instance, 0);
    this->fields._IsPush_k__BackingField = 0;
    this->fields._IsChoice_k__BackingField = IsChoice;
  }
  else
  {
    this->fields._UserCommandCodeEntity_k__BackingField = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.commandCodeEntity = 0;
    p_commandCodeEntity = &this->fields.commandCodeEntity;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_commandCodeEntity, 0, v28, v29, v30, v31, v32, v33);
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
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t Friendship; // w21
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  v4 = this;
  if ( (byte_596C692 & 1) == 0 )
  {
    this = (ServantOperationListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C692 = 1;
  }
  if ( type == 1 )
  {
    servantEntity = v4->fields.servantEntity;
    if ( !servantEntity )
      sub_2213CDC(this, *(_QWORD *)&type);
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
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
  v4->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(Friendship, 0);
  v4->fields._IsEquippedCommandCodeServant_k__BackingField = ServantOperationListViewItem__GetIsEquippedCommandCodeServant(
                                                               v4,
                                                               type,
                                                               v12);
  v4->fields._IsCommandCardOpenServant_k__BackingField = ServantOperationListViewItem__GetIsCommandCardOpenServant(
                                                           v4,
                                                           type,
                                                           v13);
}


void ServantOperationListViewItem__SetIconInfoLabel(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int64_t iconLabelInfo1; // x0
  const MethodInfo *v6; // x6
  const MethodInfo *v7; // x5
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  const MethodInfo *v9; // x4
  bool v10; // w2
  int64_t SortValue0; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t sortKind; // w8
  ServantEntity_o *servantEntity; // x0
  int32_t v17; // [xsp+14h] [xbp-3Ch] BYREF
  int32_t iconKind[2]; // [xsp+18h] [xbp-38h] BYREF
  int64_t time; // [xsp+20h] [xbp-30h] BYREF
  int32_t adjustDataValue; // [xsp+2Ch] [xbp-24h] BYREF
  int32_t dataValue[2]; // [xsp+38h] [xbp-18h] BYREF

  iconLabelInfo1 = (int64_t)this->fields.iconLabelInfo1;
  adjustDataValue = 0;
  *(_QWORD *)iconKind = 0;
  time = 0;
  v17 = 0;
  if ( !iconLabelInfo1 )
    goto LABEL_38;
  IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo1, 0);
  iconLabelInfo1 = (int64_t)this->fields.iconLabelInfo2;
  if ( !iconLabelInfo1 )
    goto LABEL_38;
  IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo1, 0);
  this->fields.isNeedAdjustIconLabelScale = 0;
  iconLabelInfo1 = ServantOperationListViewItem__GetIconLabelInfoData1(
                     this,
                     sort,
                     &dataValue[1],
                     dataValue,
                     &adjustDataValue,
                     &time,
                     v6);
  if ( (iconLabelInfo1 & 1) != 0 )
  {
    if ( !sort )
      goto LABEL_38;
    iconLabelInfo1 = (int64_t)this->fields.iconLabelInfo1;
    if ( sort->fields.sortKind == 1 )
    {
      if ( !iconLabelInfo1 )
        goto LABEL_38;
      IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo1, dataValue[1], time, 0, 0, 0, 0);
      UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
      if ( UserServantEntity_k__BackingField && UserServantEntity__IsMaterialTd(UserServantEntity_k__BackingField, 0) )
        this->fields.isNeedAdjustIconLabelScale = 1;
    }
    else
    {
      if ( !iconLabelInfo1 )
        goto LABEL_38;
      IconLabelInfo__Set_47880948(
        (IconLabelInfo_o *)iconLabelInfo1,
        dataValue[1],
        dataValue[0],
        adjustDataValue,
        0,
        0,
        0,
        0,
        0,
        0);
    }
  }
  if ( ServantOperationListViewItem__GetIconLabelInfoData2(this, sort, &iconKind[1], iconKind, &v17, v7) )
  {
    iconLabelInfo1 = (int64_t)this->fields.iconLabelInfo2;
    if ( !iconLabelInfo1 )
      goto LABEL_38;
    IconLabelInfo__Set_47880948((IconLabelInfo_o *)iconLabelInfo1, iconKind[1], iconKind[0], v17, 0, 0, 0, 0, 0, 0);
  }
  v10 = this->fields._IsSwapChoice_k__BackingField
      ? !this->fields._IsChoice_k__BackingField
      : this->fields._IsChoice_k__BackingField;
  SortValue0 = ServantOperationListViewItem__GetSortValue0(this, sort, v10, &this->fields.sortValue0B, v9);
  v12 = dataValue[0];
  this->fields.sortValue0 = SortValue0;
  iconLabelInfo1 = ServantOperationListViewItem__GetSortValue1(this, sort, v12, v13);
  this->fields.sortValue1 = iconLabelInfo1;
  if ( !sort )
    goto LABEL_38;
  sortKind = sort->fields.sortKind;
  if ( sortKind >= 8 )
  {
    if ( (unsigned int)sortKind > 0x10 || ((1 << sortKind) & 0x18400) == 0 )
      return;
LABEL_28:
    servantEntity = this->fields.servantEntity;
    if ( !servantEntity )
      return;
    if ( !ServantEntity__get_IsExpUp(servantEntity, 0) )
    {
      iconLabelInfo1 = (int64_t)this->fields.servantEntity;
      if ( !iconLabelInfo1 )
        goto LABEL_38;
      if ( !ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo1, 0) )
      {
        iconLabelInfo1 = (int64_t)this->fields.servantEntity;
        if ( !iconLabelInfo1 )
          goto LABEL_38;
        if ( !ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)iconLabelInfo1, 0) )
          return;
      }
    }
    iconLabelInfo1 = (int64_t)this->fields.iconLabelInfo1;
    if ( iconLabelInfo1 )
    {
      IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo1, 0);
      iconLabelInfo1 = (int64_t)this->fields.iconLabelInfo2;
      if ( iconLabelInfo1 )
      {
        IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo1, 0);
        return;
      }
    }
LABEL_38:
    sub_2213CDC(iconLabelInfo1, sort);
  }
  if ( sortKind == 7 || sortKind == 4 )
    goto LABEL_28;
}


void ServantOperationListViewItem__SetServantData(
        ServantOperationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ServantEntity_o *ServantEntity; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UserServantEntity_o *SelfUserGame; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  struct ServantEntity_o *v20; // x8
  __int64 v21; // x20
  __int64 v22; // x21
  UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  bool IsFriendShipSvtEquip; // w8
  bool IsChocolateSvtEquip; // w8
  bool IsMaterialTd; // w8
  bool IsFriendShipSvtEq_k__BackingField; // w9
  bool IsLock; // w8
  __int64 v29; // x2
  struct UserServantEntity_o *v30; // x9
  __int128 v31; // q1
  __int64 v32; // x20
  struct ServantEntity_o **p_servantEntity; // x19
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_596C699 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596C699 = 1;
  }
  if ( userServantEntity )
  {
    this->fields._UserServantEntity_k__BackingField = userServantEntity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._UserServantEntity_k__BackingField,
      (int32_t)userServantEntity,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    ServantEntity = UserServantEntity__GetServantEntity(userServantEntity, -1, 0);
    this->fields.servantEntity = ServantEntity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
      (int32_t)ServantEntity,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    v20 = this->fields.servantEntity;
    if ( !v20 )
      goto LABEL_19;
    v21 = *(_QWORD *)&v20->fields.id.fields.currentCryptoKey;
    v22 = *(_QWORD *)&v20->fields.id.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19);
    *(_QWORD *)&v42.fields.currentCryptoKey = v21;
    *(_QWORD *)&v42.fields.fakeValue = v22;
    SelfUserGame = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v42, 0);
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    this->fields._SvtId_k__BackingField = (int)SelfUserGame;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_19;
    IsFriendShipSvtEquip = UserServantEntity__IsFriendShipSvtEquip(UserServantEntity_k__BackingField, 0);
    SelfUserGame = this->fields._UserServantEntity_k__BackingField;
    this->fields._IsFriendShipSvtEq_k__BackingField = IsFriendShipSvtEquip;
    if ( !SelfUserGame )
      goto LABEL_19;
    IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(SelfUserGame, 0);
    SelfUserGame = this->fields._UserServantEntity_k__BackingField;
    this->fields._IsChocolateSvtEquip_k__BackingField = IsChocolateSvtEquip;
    if ( !SelfUserGame )
      goto LABEL_19;
    IsMaterialTd = UserServantEntity__IsMaterialTd(SelfUserGame, 0);
    IsFriendShipSvtEq_k__BackingField = this->fields._IsFriendShipSvtEq_k__BackingField;
    SelfUserGame = this->fields._UserServantEntity_k__BackingField;
    this->fields._IsMaterialTdSvt_k__BackingField = IsMaterialTd;
    this->fields._IsNotSelection_k__BackingField = IsFriendShipSvtEq_k__BackingField;
    if ( !SelfUserGame
      || (IsLock = UserServantEntity__IsLock(SelfUserGame, 0),
          SelfUserGame = this->fields._UserServantEntity_k__BackingField,
          this->fields._IsLock_k__BackingField = IsLock,
          !SelfUserGame)
      || (this->fields._IsChoice_k__BackingField = UserServantEntity__IsChoice(SelfUserGame, 0),
          (SelfUserGame = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0)) == 0)
      || (v30 = this->fields._UserServantEntity_k__BackingField) == 0 )
    {
LABEL_19:
      sub_2213CDC(SelfUserGame, v18);
    }
    v31 = *(_OWORD *)&v30->fields.id.fields.fakeValue;
    v32 = *(_QWORD *)&SelfUserGame->fields.dispLimitCount.fields.currentCryptoKey;
    *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&v30->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v41.fields.fakeValue = v31;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18, v29);
    v40 = v41;
    this->fields._IsPush_k__BackingField = v32 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                    &v40,
                                                    0);
  }
  else
  {
    this->fields._UserServantEntity_k__BackingField = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._UserServantEntity_k__BackingField,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.servantEntity = 0;
    p_servantEntity = &this->fields.servantEntity;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_servantEntity, 0, v34, v35, v36, v37, v38, v39);
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
  __int128 v10; // q1
  __int64 v11; // x1
  __int64 v12; // x2
  bool IsKeepServantEquip; // w20
  int v14; // w8
  int64_t v15; // x1
  const MethodInfo *v16; // x4
  ServantOperationListViewItem_o *v17; // x0
  System_Int64_array *v18; // x2
  bool v19; // w3
  System_Int32_array *CategoryIdList; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_ObjectModel_Collection_T__o *sortValue0B; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  int32_t v30; // w22
  __int64 v31; // x2
  int64_t sortValue0; // x8
  __int128 v33; // q0
  __int128 v34; // q1
  int v35; // w8
  int64_t v36; // x23
  struct System_String_o *sortStr1; // x23
  bool *p_IsUse_k__BackingField; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  Il2CppObject *Master_object; // x21
  int v42; // w9
  bool IsSettingServant; // w0
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  Il2CppObject *v48; // x21
  int v49; // w9
  bool IsSettingEquip; // w0
  System_Int32_array *EquipCategoryIdList; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+0h] [xbp-1B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+20h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+40h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+60h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+80h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+A0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+C0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+E0h] [xbp-D0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+100h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67[2]; // [xsp+120h] [xbp-90h] BYREF

  v8 = this;
  if ( (byte_596C69D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantOperationListViewItem_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C69D = 1;
  }
  memset(&v67[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  if ( type == 2 )
  {
    this = (ServantOperationListViewItem_o *)v8->fields._UserCommandCodeEntity_k__BackingField;
    v8->fields.partyIndex = -1;
    if ( this )
    {
      CategoryIdList = UserCommandCodeEntity__GetCategoryIdList((UserCommandCodeEntity_o *)this, 0);
      v8->fields.commandCodeCategoryIdList = CategoryIdList;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v8->fields.commandCodeCategoryIdList,
        (int32_t)CategoryIdList,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      return;
    }
    goto LABEL_63;
  }
  if ( type != 1 )
    return;
  UserServantEntity_k__BackingField = v8->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_63;
  v10 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  this = (ServantOperationListViewItem_o *)v8->fields.servantEntity;
  *(_OWORD *)&v67[1].fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v67[1].fields.fakeValue = v10;
  if ( !this )
    goto LABEL_63;
  IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)this, 0);
  v14 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  if ( IsKeepServantEquip )
  {
    if ( !v14 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    v67[0] = v67[1];
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(v67, 0);
    v17 = v8;
    v18 = partyUserEquipList;
    v19 = 1;
  }
  else
  {
    if ( !v14 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    v66 = v67[1];
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v66, 0);
    v17 = v8;
    v18 = partyUserServantList;
    v19 = 0;
  }
  v8->fields.partyIndex = ServantOperationListViewItem__GetPartyIndex(v17, v15, v18, v19, v16);
  this = (ServantOperationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (ServantOperationListViewItem_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantLeaderMaster___)) == 0
    || (sortValue0B = (System_Collections_ObjectModel_Collection_T__o *)this->fields.sortValue0B) == 0 )
  {
LABEL_63:
    sub_2213CDC(this, *(_QWORD *)&type);
  }
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)this->fields.sortValue0B,
         (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__) < 1 )
    goto LABEL_36;
  v30 = 0;
  while ( 1 )
  {
    this = (ServantOperationListViewItem_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                               sortValue0B,
                                               v30,
                                               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__);
    if ( !IsKeepServantEquip )
      break;
    if ( !this )
      goto LABEL_63;
    sortValue0 = this->fields.sortValue0;
    if ( sortValue0 )
    {
      v33 = *(_OWORD *)(sortValue0 + 24);
      v34 = *(_OWORD *)(sortValue0 + 40);
      v35 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v65.fields.currentCryptoKey = v33;
      *(_OWORD *)&v65.fields.fakeValue = v34;
      if ( !v35 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&type, v31);
      v64 = v65;
      v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v64, 0);
      v63 = v67[1];
      if ( v36 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v63, 0) )
      {
        v8->fields._IsUseSupportEquip_k__BackingField = 1;
        p_IsUse_k__BackingField = &v8->fields._IsUse_k__BackingField;
        goto LABEL_35;
      }
    }
LABEL_32:
    if ( ++v30 >= System_Collections_ObjectModel_Collection_object___get_Count(
                    sortValue0B,
                    (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__) )
      goto LABEL_36;
  }
  if ( !this )
    goto LABEL_63;
  sortStr1 = this->fields.sortStr1;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&type, v31);
  v62 = v67[1];
  if ( sortStr1 != (struct System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                               &v62,
                                               0) )
    goto LABEL_32;
  p_IsUse_k__BackingField = &v8->fields._IsUseSupportServant_k__BackingField;
LABEL_35:
  *p_IsUse_k__BackingField = 1;
LABEL_36:
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v28, v29);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  v42 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  if ( !IsKeepServantEquip )
  {
    if ( !v42 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v39, v40);
    v60 = v67[1];
    this = (ServantOperationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                               &v60,
                                               0);
    if ( Master_object )
    {
      v8->fields._IsUseRecommendSupportServant_k__BackingField = UserRecommendSupportMaster__IsSettingServant(
                                                                   (UserRecommendSupportMaster_o *)Master_object,
                                                                   (int64_t)this,
                                                                   0,
                                                                   0);
      goto LABEL_48;
    }
    goto LABEL_63;
  }
  if ( !v42 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v39, v40);
  v61 = v67[1];
  this = (ServantOperationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v61, 0);
  if ( !Master_object )
    goto LABEL_63;
  IsSettingServant = UserRecommendSupportMaster__IsSettingServant(
                       (UserRecommendSupportMaster_o *)Master_object,
                       (int64_t)this,
                       1,
                       0);
  v8->fields._IsUseRecommendSupportEquip_k__BackingField = IsSettingServant;
  if ( IsSettingServant )
    v8->fields._IsUse_k__BackingField = 1;
LABEL_48:
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v44, v45);
  v48 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  v49 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  if ( !IsKeepServantEquip )
  {
    if ( !v49 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v46, v47);
    v58 = v67[1];
    this = (ServantOperationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                               &v58,
                                               0);
    if ( v48 )
    {
      v8->fields._IsGrandServant_k__BackingField = UserServantGrandMaster__IsSettingServant(
                                                     (UserServantGrandMaster_o *)v48,
                                                     (int64_t)this,
                                                     0);
      goto LABEL_60;
    }
    goto LABEL_63;
  }
  if ( !v49 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v46, v47);
  v59 = v67[1];
  this = (ServantOperationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v59, 0);
  if ( !v48 )
    goto LABEL_63;
  IsSettingEquip = UserServantGrandMaster__IsSettingEquip((UserServantGrandMaster_o *)v48, (int64_t)this, 0);
  v8->fields._IsUseGrandEquip_k__BackingField = IsSettingEquip;
  if ( IsSettingEquip )
    v8->fields._IsUse_k__BackingField = 1;
LABEL_60:
  this = (ServantOperationListViewItem_o *)v8->fields._UserServantEntity_k__BackingField;
  if ( !this )
    goto LABEL_63;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)this, 1, 0);
  v8->fields.categoryIdList = EquipCategoryIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v8->fields.categoryIdList,
    (int32_t)EquipCategoryIdList,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
}


bool ServantOperationListViewItem__SetSortValue(
        ServantOperationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ServantOperationListViewItem_c *klass; // x9
  const MethodInfo *v6; // x2
  __int64 (__fastcall *methodPtr)(ServantOperationListViewItem_o *, ListViewSort_o *, const MethodInfo *); // x10
  const MethodInfo *v8; // x2
  char v9; // w21

  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0 = 0;
  methodPtr = (__int64 (__fastcall *)(ServantOperationListViewItem_o *, ListViewSort_o *, const MethodInfo *))klass->vtable._5_IsMatchFilter.methodPtr;
  v6 = klass->vtable._5_IsMatchFilter.method;
  this->fields.sortValue1 = -1;
  v9 = methodPtr(this, sort, v6);
  if ( (v9 & 1) != 0 )
    ServantOperationListViewItem__SetIconInfoLabel(this, sort, v8);
  return v9 & 1;
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
    sub_2213CDC(this, userServantEntity);
  }
  *(int8x16_t *)&v3->fields.rarity = vextq_s8(
                                       *(int8x16_t *)&this->fields.selectNum,
                                       *(int8x16_t *)&this->fields.selectNum,
                                       8u);
}


bool ServantOperationListViewItem__SwapChoice(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  _BOOL4 IsSwapChoice_k__BackingField; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  IsSwapChoice_k__BackingField = this->fields._IsSwapChoice_k__BackingField;
  v4 = !IsSwapChoice_k__BackingField;
  v5 = !IsSwapChoice_k__BackingField;
  result = v4;
  this->fields._IsSwapChoice_k__BackingField = v5;
  return result;
}


bool ServantOperationListViewItem__SwapLock(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  _BOOL4 IsSwapLock_k__BackingField; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  IsSwapLock_k__BackingField = this->fields._IsSwapLock_k__BackingField;
  v4 = !IsSwapLock_k__BackingField;
  v5 = !IsSwapLock_k__BackingField;
  result = v4;
  this->fields._IsSwapLock_k__BackingField = v5;
  return result;
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
  if ( this->fields._IsFavorite_k__BackingField )
    return 1;
  if ( this->fields._IsParty_k__BackingField
    || this->fields.attribute
    || this->fields._IsLock_k__BackingField
    || this->fields._IsChoice_k__BackingField
    || this->fields._IsUseSupportServant_k__BackingField
    || this->fields._IsCommandCodeEquiped_k__BackingField
    || this->fields._IsNotSelection_k__BackingField
    || this->fields._IsPush_k__BackingField
    || ServantOperationListViewItem__get_IsProtected(this, method)
    || this->fields.isFortification
    || this->fields._IsUseRecommendSupportServant_k__BackingField )
  {
    return 1;
  }
  return this->fields._IsGrandServant_k__BackingField;
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
    sub_2213CDC(v6, v5);
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
  if ( this->fields._IsSwapChoice_k__BackingField )
    return !this->fields._IsChoice_k__BackingField;
  else
    return this->fields._IsChoice_k__BackingField;
}


bool ServantOperationListViewItem__get_IsDispLock(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields._IsSwapLock_k__BackingField )
    return !this->fields._IsLock_k__BackingField;
  else
    return this->fields._IsLock_k__BackingField;
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
  __int64 v4; // x1
  UserServantEntity_o *v5; // x0

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    return 0;
  if ( UserServantEntity__IsProtectedEventServant(UserServantEntity_k__BackingField, 0) )
    return 1;
  v5 = this->fields._UserServantEntity_k__BackingField;
  if ( !v5 )
    sub_2213CDC(0, v4);
  return UserServantEntity__IsNotSaleServant(v5, 0);
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
    sub_2213CDC(0, method);
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
  __int64 v2; // x2
  ServantOperationListViewItem_o *v3; // x19
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_596C6A3 & 1) == 0 )
  {
    this = (ServantOperationListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596C6A3 = 1;
  }
  UserCommandCodeEntity_k__BackingField = v3->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    sub_2213CDC(this, method);
  v5 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v7, 0);
}


UserServantEntity_o *ServantOperationListViewItem__get_UserServantEntity(
        ServantOperationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServantEntity_k__BackingField;
}


int64_t ServantOperationListViewItem__get_UserSvtId(ServantOperationListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  if ( (byte_596C6A2 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596C6A2 = 1;
  }
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    return 0;
  v5 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v7, 0);
}


void ServantOperationListViewItem__setUserCommandCodeEntity(
        ServantOperationListViewItem_o *this,
        UserCommandCodeEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._UserCommandCodeEntity_k__BackingField = entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int32_t)entity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantOperationListViewItem__setUserServantEntity(
        ServantOperationListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UserServantEntity_o **p_UserServantEntity_k__BackingField; // x20
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  struct ServantEntity_o *ServantEntity; // x0
  struct ServantEntity_o **p_servantEntity; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x2
  struct ServantEntity_o *v23; // x8
  __int64 v24; // x22
  __int64 v25; // x23
  struct ServantEntity_o *v26; // x8
  const MethodInfo_47A29F8 *v27; // x0
  int64_t currentCryptoKey_high; // x8
  __int64 rarity; // x22
  struct UserServantEntity_o *v30; // x9
  ServantEntity_o *v31; // x8
  __int64 currentCryptoKey; // x20
  __int64 lv; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_596C6A1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C6A1 = 1;
  }
  this->fields._UserServantEntity_k__BackingField = entity;
  p_UserServantEntity_k__BackingField = &this->fields._UserServantEntity_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)entity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ServantOperationListViewItem__StatusOverWrite(this, this->fields._UserServantEntity_k__BackingField, v11);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_16;
  ServantEntity = UserServantEntity__GetServantEntity(UserServantEntity_k__BackingField, -1, 0);
  this->fields.servantEntity = ServantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)ServantEntity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v23 = this->fields.servantEntity;
  if ( !v23 )
    goto LABEL_16;
  v24 = *(_QWORD *)&v23->fields.id.fields.currentCryptoKey;
  v25 = *(_QWORD *)&v23->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v22);
  *(_QWORD *)&v34.fields.currentCryptoKey = v24;
  *(_QWORD *)&v34.fields.fakeValue = v25;
  UserServantEntity_k__BackingField = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                               v34,
                                                               0);
  v26 = this->fields.servantEntity;
  this->fields._SvtId_k__BackingField = (int)UserServantEntity_k__BackingField;
  if ( !v26 )
    goto LABEL_16;
  v27 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.classId = v26->fields.classId;
  UserServantEntity_k__BackingField = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance(v27);
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_16;
  UserServantEntity_k__BackingField = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)UserServantEntity_k__BackingField,
                                                               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_16;
  UserServantEntity_k__BackingField = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity_k__BackingField,
                                                               this->fields.classId,
                                                               (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_16;
  currentCryptoKey_high = SHIDWORD(UserServantEntity_k__BackingField->fields.userId.fields.currentCryptoKey);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  this->fields.priority = currentCryptoKey_high;
  this->fields.sortValue1B = currentCryptoKey_high;
  if ( !UserServantEntity_k__BackingField
    || (rarity = (unsigned int)this->fields.rarity,
        (UserServantEntity_k__BackingField = (UserServantEntity_o *)UserServantEntity__get_BaseServantEntity(
                                                                      UserServantEntity_k__BackingField,
                                                                      0)) == 0)
    || (v30 = *p_UserServantEntity_k__BackingField) == 0
    || (v31 = *p_servantEntity) == 0 )
  {
LABEL_16:
    sub_2213CDC(UserServantEntity_k__BackingField, v12);
  }
  currentCryptoKey = UserServantEntity_k__BackingField->fields.randomLimitCount.fields.currentCryptoKey;
  lv = v30->fields.lv;
  this->fields.sortValue2 = (currentCryptoKey << 16)
                          | (rarity << 48)
                          | (2 * lv)
                          | ServantEntity__get_IsServantMaterialTd(v31, 0);
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


// local variable allocation has failed, the output may be wrong!
void ServantOperationListViewItem__set_IsDragSelect(
        ServantOperationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_2213CDC(0, value);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._UserCommandCodeEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantOperationListViewItem__set_UserServantEntity(
        ServantOperationListViewItem_o *this,
        UserServantEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._UserServantEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}