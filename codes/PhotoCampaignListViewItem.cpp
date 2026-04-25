void PhotoCampaignListViewItem___ctor(
        PhotoCampaignListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserSvtList,
        bool isFavorite,
        bool cannotSelectSvt,
        const MethodInfo *method)
{
  IconLabelInfo_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  IconLabelInfo_o *v20; // x26
  struct IconLabelInfo_o **p_iconLabelInfo2; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct UserServantEntity_o **p_userSvtEntity; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int64_t Instance; // x0
  __int64 v36; // x1
  struct ServantEntity_o *ServantEntity; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  struct ServantEntity_o *v44; // x8
  __int64 v45; // x25
  __int64 v46; // x26
  const MethodInfo *v47; // x2
  struct ServantEntity_o *v48; // x8
  struct UserServantEntity_o *v49; // x8
  __int128 v50; // q1
  UserServantCollectionMaster_o *v51; // x24
  struct UserServantEntity_o *v52; // x8
  __int128 v53; // q0
  int max_length; // w8
  int32_t v55; // w9
  UserServantEntity_o *v56; // x8
  struct UserServantEntity_o *v57; // x8
  __int128 v58; // q0
  __int64 v59; // x23
  int64_t v60; // x9
  int64_t rarity; // x10
  struct UserServantEntity_o *v62; // x8
  __int64 v63; // x23
  __int64 v64; // x24
  struct UserServantEntity_o *v65; // x8
  __int128 v66; // q0
  int64_t v67; // x8
  int v68; // w23
  BalanceConfig_c *v69; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  bool v71; // w8
  UserServantEntity_o *v72; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  struct System_Int32_array **p_tdCategoryIdList; // x19
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+80h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16

  if ( (byte_4DFFE75 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1CE6700(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1CE6700(&IconLabelInfo_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4DFFE75 = 1;
  }
  v13 = (IconLabelInfo_o *)sub_1CE694C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0);
  this->fields.iconLabelInfo1 = v13;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo1, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  v20 = (IconLabelInfo_o *)sub_1CE694C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v20, 0);
  this->fields.iconLabelInfo2 = v20;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo2, (int32_t)v20, v22, v23, v24, v25, v26, v27);
  ListViewItem___ctor_44921328((ListViewItem_o *)this, index, 0);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userSvtEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields._IsCannotSelectSvt_k__BackingField = cannotSelectSvt;
  if ( !userSvtEntity )
    goto LABEL_48;
  ServantEntity = UserServantEntity__GetServantEntity(userSvtEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantEntity,
    (int32_t)ServantEntity,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = this->fields.servantEntity;
  if ( !v44 )
    goto LABEL_48;
  v46 = *(_QWORD *)&v44->fields.id.fields.currentCryptoKey;
  v45 = *(_QWORD *)&v44->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v93.fields.currentCryptoKey = v46;
  *(_QWORD *)&v93.fields.fakeValue = v45;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v93, 0);
  v48 = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !v48 )
    goto LABEL_48;
  this->fields.classId = v48->fields.classId;
  PhotoCampaignListViewItem__SetOverwriteStatus(this, userSvtEntity, v47);
  this->fields.isFavorite = isFavorite;
  this->fields.isHeroine = UserServantEntity__IsHeroine(userSvtEntity, 0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v49 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_48;
  v50 = *(_OWORD *)&v49->fields.userId.fields.fakeValue;
  v51 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v92.fields.currentCryptoKey = *(_OWORD *)&v49->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v92.fields.fakeValue = v50;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v91 = v92;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v91, 0);
  if ( !v51 )
    goto LABEL_48;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v51, Instance, this->fields.svtId, 0);
  if ( !Instance )
    goto LABEL_48;
  Instance = UserServantCollectionEntity__getFriendShipRankInfo(
               (UserServantCollectionEntity_o *)Instance,
               &this->fields.friendship,
               &this->fields.friendshipMax,
               0);
  v52 = this->fields.userSvtEntity;
  this->fields.partyIndex = -1;
  if ( !v52 )
    goto LABEL_48;
  v53 = *(_OWORD *)&v52->fields.id.fields.fakeValue;
  *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&v52->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v90.fields.fakeValue = v53;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v90, 0);
  if ( !partyUserSvtList )
    goto LABEL_48;
  max_length = partyUserSvtList->max_length;
  if ( max_length >= 1 )
  {
    v55 = 0;
    while ( 1 )
    {
      if ( max_length == v55 )
        sub_1CE6960(Instance);
      if ( Instance == partyUserSvtList->m_Items[v55] )
        break;
      if ( max_length == ++v55 )
        goto LABEL_23;
    }
    this->fields.partyIndex = v55;
  }
LABEL_23:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_48;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v56 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v56 )
    goto LABEL_48;
  this->fields.isChoice = UserServantEntity__IsChoice(v56, 0);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_48;
  v57 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_48;
  v58 = *(_OWORD *)&v57->fields.id.fields.fakeValue;
  v59 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)&v92.fields.currentCryptoKey = *(_OWORD *)&v57->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v92.fields.fakeValue = v58;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v89 = v92;
  *(_WORD *)&this->fields.isPush = v59 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v89, 0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_48;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_34E925C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_48;
  v60 = *(int *)(Instance + 52);
  rarity = this->fields.rarity;
  v62 = this->fields.userSvtEntity;
  this->fields.priority = v60;
  this->fields.sortValue1B = v60;
  this->fields.sortValue2 = rarity;
  if ( !v62 )
    goto LABEL_48;
  v64 = *(_QWORD *)&v62->fields.svtId.fields.currentCryptoKey;
  v63 = *(_QWORD *)&v62->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v94.fields.currentCryptoKey = v64;
  *(_QWORD *)&v94.fields.fakeValue = v63;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v94, 0);
  v65 = this->fields.userSvtEntity;
  this->fields.sortValue2B = (int)Instance;
  if ( !v65 )
    goto LABEL_48;
  v66 = *(_OWORD *)&v65->fields.id.fields.fakeValue;
  *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&v65->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v88.fields.fakeValue = v66;
  v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v88, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValueLast = v67;
  this->fields.amountSortValue = -1;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_48;
  v68 = *(_DWORD *)(Instance + 420);
  v69 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v69 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userSvtEntity;
  }
  static_fields = v69->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v68;
  if ( !Instance )
    goto LABEL_48;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 416);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  v71 = UserServantEntity__get_IsSaveTransformServant(userSvtEntity, 0)
     && !UserServantEntity__CheckBaseServant(userSvtEntity, -1, 0);
  this->fields.isTransformed = v71;
  Instance = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(userSvtEntity, -1, 0, 0);
  v72 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v72 )
    goto LABEL_48;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v72, -1, Instance, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance
    || (TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)Instance,
                                         0,
                                         this->fields.dispLimitCount,
                                         0),
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList,
        p_tdCategoryIdList = &this->fields.tdCategoryIdList,
        sub_1CE66A4(
          (GrandQuestFolderBoardItem_o *)p_tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v82,
          v83,
          v84,
          v85,
          v86,
          v87),
        (Instance = (int64_t)*(p_tdCategoryIdList - 6)) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_48:
    sub_1CE6958(Instance, v36);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void PhotoCampaignListViewItem__Finalize(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool PhotoCampaignListViewItem__IsMatchFilter(
        PhotoCampaignListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v6; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  _BOOL4 isChoice; // w8
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x21
  UserServantEntity_o *userSvtEntity; // x0
  _BOOL4 v18; // w21
  int32_t DispLimitCountStageSealAfterIndexZero; // w2
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v35; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v37; // w0

  if ( (byte_4DFFE78 & 1) == 0 )
  {
    sub_1CE6700(&FilterKindList_TypeInfo);
    sub_1CE6700(&ListViewSort_FilterKind___TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4DFFE78 = 1;
  }
  if ( (this->fields.selectNum & 0x80000000) == 0 )
    return 1;
  v6 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v6 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v6->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_67;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v8 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v8 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v8->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            ClassGroupFilterKindList,
                                            (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  v10 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v10 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v10->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  v12 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v12->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
    goto LABEL_28;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    if ( UserServantEntity__get_IsSaveTransformServant(userSvtEntity, 0) )
    {
      ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userSvtEntity;
      if ( !ClassGroupFilterKindList )
        goto LABEL_67;
      v18 = !UserServantEntity__CheckBaseServant((UserServantEntity_o *)ClassGroupFilterKindList, -1, 0);
    }
    else
    {
      v18 = 0;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userSvtEntity;
    if ( ClassGroupFilterKindList )
    {
      DispLimitCountStageSealAfterIndexZero = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
                                                (UserServantEntity_o *)ClassGroupFilterKindList,
                                                -1,
                                                0,
                                                0);
      if ( v18 != this->fields.isTransformed || this->fields.dispLimitCount != DispLimitCountStageSealAfterIndexZero )
      {
        ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userSvtEntity;
        this->fields.isTransformed = v18;
        this->fields.dispLimitCount = DispLimitCountStageSealAfterIndexZero;
        if ( !ClassGroupFilterKindList )
          goto LABEL_67;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(
                                (UserServantEntity_o *)ClassGroupFilterKindList,
                                -1,
                                DispLimitCountStageSealAfterIndexZero,
                                0);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1CE66A4(
          (GrandQuestFolderBoardItem_o *)&this->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
        ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_67;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         this->fields.dispLimitCount,
                                         0);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1CE66A4(
          (GrandQuestFolderBoardItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
      }
      goto LABEL_55;
    }
LABEL_67:
    sub_1CE6958(ClassGroupFilterKindList, sort);
  }
LABEL_55:
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_1CE67A8(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_68;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                   0);
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_1CE67A8(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  if ( !ClassGroupFilterKindList->fields._size )
LABEL_68:
    sub_1CE6960(ClassGroupFilterKindList);
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 51;
  v35 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            this->fields.tdCategoryIdList,
                            sort,
                            0);
  v37 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
  if ( ((IsUnSelectedAllTargetFilters ^ v35) & 1) != 0 )
  {
    if ( IsUnSelectedAllTargetFilters )
    {
      if ( !v37 )
        return 0;
    }
    else if ( !IsMatchEffectCategory )
    {
      return 0;
    }
  }
  else if ( !IsMatchEffectCategory && !v37 )
  {
    return 0;
  }
LABEL_28:
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_1CE67A8(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_68;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    && ListViewSort__GetFilter(sort, 39, 0) )
  {
    isChoice = !this->fields.isChoice;
    if ( !this->fields.isSwapChoice )
      isChoice = this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v15 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v15->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v16, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


void PhotoCampaignListViewItem__ModifyChoiceItem(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1CE6958(0, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0);
  this->fields.isSwapChoice = 0;
}


// local variable allocation has failed, the output may be wrong!
void PhotoCampaignListViewItem__ModifyItem(
        PhotoCampaignListViewItem_o *this,
        bool isFavorite,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  UserServantEntity_o *v6; // x8
  bool IsChoice; // w0
  UserServantEntity_o *v8; // x1
  const MethodInfo *v9; // x2
  struct ServantEntity_o *ServantEntity; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct ServantEntity_o *v17; // x8
  __int64 v18; // x20
  __int64 v19; // x21
  struct ServantEntity_o *v20; // x8
  int64_t currentCryptoKey_high; // x8
  int64_t rarity; // x9
  struct UserServantEntity_o *v23; // x8
  __int128 v24; // q1
  __int64 v25; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4DFFE76 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1CE6700(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4DFFE76 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.isFavorite = isFavorite;
  if ( !userSvtEntity )
    goto LABEL_18;
  userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userSvtEntity, 0);
  v6 = this->fields.userSvtEntity;
  this->fields.isLock = (unsigned __int8)userSvtEntity & 1;
  if ( !v6 )
    goto LABEL_18;
  IsChoice = UserServantEntity__IsChoice(v6, 0);
  v8 = this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  PhotoCampaignListViewItem__SetOverwriteStatus(this, v8, v9);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_18;
  ServantEntity = UserServantEntity__GetServantEntity(userSvtEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantEntity,
    (int32_t)ServantEntity,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = this->fields.servantEntity;
  if ( !v17 )
    goto LABEL_18;
  v19 = *(_QWORD *)&v17->fields.id.fields.currentCryptoKey;
  v18 = *(_QWORD *)&v17->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v19;
  *(_QWORD *)&v28.fields.fakeValue = v18;
  userSvtEntity = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v28, 0);
  v20 = this->fields.servantEntity;
  this->fields.svtId = (int)userSvtEntity;
  if ( !v20 )
    goto LABEL_18;
  this->fields.classId = v20->fields.classId;
  userSvtEntity = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !userSvtEntity )
    goto LABEL_18;
  userSvtEntity = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)userSvtEntity,
                                           (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !userSvtEntity )
    goto LABEL_18;
  userSvtEntity = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)userSvtEntity,
                                           this->fields.classId,
                                           (const MethodInfo_34E925C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !userSvtEntity
    || (currentCryptoKey_high = SHIDWORD(userSvtEntity->fields.userId.fields.currentCryptoKey),
        rarity = this->fields.rarity,
        this->fields.priority = currentCryptoKey_high,
        this->fields.sortValue1B = currentCryptoKey_high,
        this->fields.sortValue2 = rarity,
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0)) == 0)
    || (v23 = this->fields.userSvtEntity) == 0 )
  {
LABEL_18:
    sub_1CE6958(userSvtEntity, isFavorite);
  }
  v24 = *(_OWORD *)&v23->fields.id.fields.fakeValue;
  v25 = *(_QWORD *)&userSvtEntity->fields.dispLimitCount.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&v23->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v24;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v26 = v27;
  this->fields.isPush = v25 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v26, 0);
}


void PhotoCampaignListViewItem__ModifyLockItem(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1CE6958(0, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0);
  this->fields.isSwapLock = 0;
}


void PhotoCampaignListViewItem__SetOverwriteStatus(
        PhotoCampaignListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  PhotoCampaignListViewItem_o *v3; // x19

  if ( !userServantEntity
    || (v3 = this,
        (this = (PhotoCampaignListViewItem_o *)UserServantEntity__GetOverwriteStatus(userServantEntity, 0, 0)) == 0) )
  {
    sub_1CE6958(this, userServantEntity);
  }
  v3->fields.cost = this->fields.loopIndex;
  *(_QWORD *)&v3->fields.hp = *(_QWORD *)&this->fields.selectNum;
  v3->fields.rarity = this->fields.sortIndex;
}


bool PhotoCampaignListViewItem__SetSortValue(
        PhotoCampaignListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool IsMatchFilter; // w8
  int64_t iconLabelInfo2; // x0
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v10; // zf
  _BOOL4 v11; // w8
  int v12; // w10
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v14; // q1
  struct UserServantEntity_o *v15; // x8
  int64_t rarity; // x8
  int64_t v17; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t cost; // x2
  int32_t v20; // w3
  int32_t v21; // w1
  int64_t hp; // x20
  IconLabelInfo_o *v23; // x21
  int32_t v24; // w3
  int32_t v25; // w1
  int64_t friendship; // x2
  IconLabelInfo_o *v27; // x20
  int32_t v28; // w21
  int64_t amountSortValue; // x21
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v32; // x20
  int64_t hpReinforceValue; // x2
  int32_t nowMaxHpReinforceValue; // w3
  int32_t v35; // w1
  IconLabelInfo_o *v36; // x19
  struct UserServantEntity_o *v37; // x8
  __int64 v38; // x21
  __int64 v39; // x22
  const MethodInfo *v40; // x2
  __int64 v41; // x20
  __int64 v42; // x8
  int32_t v43; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+30h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4DFFE77 & 1) == 0 )
  {
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&PhotoCampaignListViewManager_TypeInfo);
    byte_4DFFE77 = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  IsMatchFilter = PhotoCampaignListViewItem__IsMatchFilter(this, sort, method);
  iconLabelInfo2 = 0;
  if ( IsMatchFilter )
  {
    isChoice = this->fields.isChoice;
    isSwapChoice = this->fields.isSwapChoice;
    this->fields.sortValue0 = 0;
    v10 = !isChoice;
    v11 = !isChoice;
    v12 = !v10;
    if ( !isSwapChoice )
      v11 = v12;
    if ( v11 )
    {
      if ( !sort )
        goto LABEL_81;
      if ( sort->fields.isChoiceSort )
        this->fields.sortValue0 = 10;
    }
    iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
    if ( iconLabelInfo2 )
    {
      IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
      if ( sort )
      {
        iconLabelInfo2 = 1;
        switch ( sort->fields.sortKind )
        {
          case 1:
            userSvtEntity = this->fields.userSvtEntity;
            if ( !userSvtEntity )
              goto LABEL_81;
            v14 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v46.fields.fakeValue = v14;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v45 = v46;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v45, 0);
            v15 = this->fields.userSvtEntity;
            this->fields.sortValue1 = iconLabelInfo2;
            if ( !v15 )
              goto LABEL_81;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              goto LABEL_81;
            IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v15->fields.createdAt, 0, 0, 0, 0);
            goto LABEL_62;
          case 2:
            rarity = this->fields.rarity;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            goto LABEL_75;
          case 3:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_81;
            v17 = *(int *)(iconLabelInfo2 + 400);
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v17;
            goto LABEL_40;
          case 4:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_81;
            UserServantEntity__getTreasureDeviceInfo_44310656(
              (UserServantEntity_o *)iconLabelInfo2,
              &tdMaxLv[1],
              tdMaxLv,
              0);
            LODWORD(cost) = tdMaxLv[1];
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = tdMaxLv[1];
            if ( !iconLabelInfo2 )
              goto LABEL_81;
            v20 = tdMaxLv[0];
            v21 = 33;
            goto LABEL_37;
          case 5:
            hp = this->fields.hp;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              goto LABEL_81;
            v23 = this->fields.iconLabelInfo1;
            iconLabelInfo2 = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v23 )
              goto LABEL_81;
            v24 = iconLabelInfo2;
            v25 = 3;
            goto LABEL_34;
          case 6:
            hp = this->fields.atk;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              goto LABEL_81;
            v23 = this->fields.iconLabelInfo1;
            iconLabelInfo2 = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v23 )
              goto LABEL_81;
            v24 = iconLabelInfo2;
            v25 = 5;
LABEL_34:
            IconLabelInfo__Set_42060700(v23, v25, hp, v24, 0, 0, 0, 0, 0, 0);
            goto LABEL_62;
          case 7:
            cost = this->fields.cost;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = cost;
            if ( !iconLabelInfo2 )
              goto LABEL_81;
            v21 = 7;
            v20 = 0;
LABEL_37:
            IconLabelInfo__Set_42060700((IconLabelInfo_o *)iconLabelInfo2, v21, cost, v20, 0, 0, 0, 0, 0, 0);
            goto LABEL_44;
          case 8:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = -this->fields.priority;
            if ( !iconLabelInfo2 )
              goto LABEL_81;
            v17 = *(int *)(iconLabelInfo2 + 400);
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            this->fields.sortValue2 = v17;
LABEL_40:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !iconLabelInfo1 )
              goto LABEL_81;
            IconLabelInfo__Set_42060700(iconLabelInfo1, 2, v17, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
            goto LABEL_79;
          case 0xA:
            friendship = this->fields.friendship;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              goto LABEL_81;
            IconLabelInfo__Set_42060700(
              (IconLabelInfo_o *)iconLabelInfo2,
              32,
              friendship,
              this->fields.friendshipMax,
              0,
              0,
              0,
              0,
              0,
              0);
LABEL_44:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_81;
            v27 = this->fields.iconLabelInfo2;
            v28 = *(_DWORD *)(iconLabelInfo2 + 400);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v27 )
              goto LABEL_81;
            IconLabelInfo__Set_42060700(v27, 2, v28, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
            iconLabelInfo2 = (int64_t)this->fields.servantEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_81;
            if ( ServantEntity__get_IsExpUp((ServantEntity_o *)iconLabelInfo2, 0) )
              goto LABEL_50;
            iconLabelInfo2 = (int64_t)this->fields.servantEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_81;
            if ( !ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo2, 0) )
              goto LABEL_79;
LABEL_50:
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              goto LABEL_81;
            IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
            if ( !iconLabelInfo2 )
              goto LABEL_81;
            IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
LABEL_79:
            LOBYTE(iconLabelInfo2) = 1;
            break;
          case 0xE:
            amountSortValue = this->fields.amountSortValue;
            if ( (amountSortValue & 0x8000000000000000LL) == 0 )
              goto LABEL_72;
            manager = sort->fields.manager;
            if ( manager
              && (naturalAligment = PhotoCampaignListViewManager_TypeInfo->_2.naturalAligment,
                  manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
            {
              if ( (PhotoCampaignListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == PhotoCampaignListViewManager_TypeInfo )
                v32 = sort->fields.manager;
              else
                v32 = 0;
            }
            else
            {
              v32 = 0;
            }
            v37 = this->fields.userSvtEntity;
            if ( !v37 )
              goto LABEL_81;
            v39 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
            v38 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v48.fields.currentCryptoKey = v39;
            *(_QWORD *)&v48.fields.fakeValue = v38;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v48, 0);
            if ( !v32 )
              goto LABEL_81;
            amountSortValue = PhotoCampaignListViewManager__GetAmountSortValue(
                                (PhotoCampaignListViewManager_o *)v32,
                                iconLabelInfo2,
                                v40);
            this->fields.amountSortValue = amountSortValue;
LABEL_72:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_81;
            v41 = (unsigned int)this->fields.rarity;
            iconLabelInfo2 = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !iconLabelInfo2 )
              goto LABEL_81;
            v42 = *(int *)(iconLabelInfo2 + 208);
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            rarity = ((v41 << 32) + (amountSortValue << 48)) | v42;
LABEL_75:
            this->fields.sortValue1 = rarity;
            if ( !iconLabelInfo2 )
              goto LABEL_81;
            v36 = this->fields.iconLabelInfo1;
            goto LABEL_77;
          case 0xF:
            hpReinforceValue = this->fields.hpReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hpReinforceValue;
            if ( !iconLabelInfo2 )
              goto LABEL_81;
            nowMaxHpReinforceValue = this->fields.nowMaxHpReinforceValue;
            v35 = 44;
            goto LABEL_61;
          case 0x10:
            hpReinforceValue = this->fields.atkReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hpReinforceValue;
            if ( !iconLabelInfo2 )
              goto LABEL_81;
            nowMaxHpReinforceValue = this->fields.nowMaxAtkReinforceValue;
            v35 = 45;
LABEL_61:
            IconLabelInfo__Set_42060700(
              (IconLabelInfo_o *)iconLabelInfo2,
              v35,
              hpReinforceValue,
              nowMaxHpReinforceValue,
              0,
              0,
              0,
              0,
              0,
              0);
LABEL_62:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_81;
            v36 = this->fields.iconLabelInfo2;
LABEL_77:
            v43 = *(_DWORD *)(iconLabelInfo2 + 400);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v36 )
              goto LABEL_81;
            IconLabelInfo__Set_42060700(v36, 2, v43, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
            goto LABEL_79;
          default:
            return iconLabelInfo2;
        }
        return iconLabelInfo2;
      }
    }
LABEL_81:
    sub_1CE6958(iconLabelInfo2, v5);
  }
  return iconLabelInfo2;
}


void PhotoCampaignListViewItem__SetUserServantEntity(
        PhotoCampaignListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.userSvtEntity = entity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)entity,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool PhotoCampaignListViewItem__SwapChoice(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool PhotoCampaignListViewItem__SwapLock(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


IconLabelInfo_o *PhotoCampaignListViewItem__get_IconInfo1(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *PhotoCampaignListViewItem__get_IconInfo2(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool PhotoCampaignListViewItem__get_IsCanNotSelect(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  if ( (byte_4DFFE7A & 1) == 0 )
  {
    sub_1CE6700(&TutorialFlag_TypeInfo);
    byte_4DFFE7A = 1;
  }
  if ( !this->fields.isHeroine )
    return this->fields._IsCannotSelectSvt_k__BackingField;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_41569468(126, 0) || this->fields._IsCannotSelectSvt_k__BackingField;
}


bool PhotoCampaignListViewItem__get_IsCannotSelectSvt(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsCannotSelectSvt_k__BackingField;
}


bool PhotoCampaignListViewItem__get_IsChoice(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool PhotoCampaignListViewItem__get_IsDispChoice(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool PhotoCampaignListViewItem__get_IsDispLock(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool PhotoCampaignListViewItem__get_IsEventJoin(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsEventJoin(userSvtEntity, 0);
  return (char)userSvtEntity;
}


bool PhotoCampaignListViewItem__get_IsHerioneReave(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  if ( (byte_4DFFE79 & 1) == 0 )
  {
    sub_1CE6700(&TutorialFlag_TypeInfo);
    byte_4DFFE79 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_41569468(126, 0);
}


bool PhotoCampaignListViewItem__get_IsLock(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool PhotoCampaignListViewItem__get_IsParty(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex >= 0;
}


bool PhotoCampaignListViewItem__get_IsPush(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool PhotoCampaignListViewItem__get_IsPushMode(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPushMode;
}


bool PhotoCampaignListViewItem__get_IsSwapChoice(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool PhotoCampaignListViewItem__get_IsSwapLock(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


ServantEntity_o *PhotoCampaignListViewItem__get_Servant(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t PhotoCampaignListViewItem__get_SvtId(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


UserServantEntity_o *PhotoCampaignListViewItem__get_UserServant(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


void PhotoCampaignListViewItem__set_IsCannotSelectSvt(
        PhotoCampaignListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsCannotSelectSvt_k__BackingField = value;
}


void PhotoCampaignListViewItem__set_IsPushMode(PhotoCampaignListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isPushMode = value;
}