void FavoriteChangeListViewItem___ctor(
        FavoriteChangeListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserSvtList,
        bool isFavorite,
        const MethodInfo *method)
{
  IconLabelInfo_o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  IconLabelInfo_o *v18; // x25
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct UserServantEntity_o **p_userSvtEntity; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int64_t Instance; // x0
  __int64 v34; // x1
  struct ServantEntity_o *ServantEntity; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct ServantEntity_o *v42; // x8
  __int64 v43; // x25
  __int64 v44; // x26
  const MethodInfo *v45; // x2
  struct ServantEntity_o *v46; // x8
  struct UserServantEntity_o *v47; // x8
  __int128 v48; // q1
  UserServantCollectionMaster_o *v49; // x24
  struct UserServantEntity_o *v50; // x8
  __int128 v51; // q0
  int max_length; // w8
  int32_t v53; // w9
  UserServantEntity_o *v54; // x8
  struct UserServantEntity_o *v55; // x8
  __int128 v56; // q0
  __int64 v57; // x23
  bool IsSaveTransformServant; // w0
  bool v59; // w8
  UserServantEntity_o *v60; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  int64_t v75; // x9
  int64_t rarity; // x10
  struct UserServantEntity_o *v77; // x8
  __int64 v78; // x22
  __int64 v79; // x23
  struct UserServantEntity_o *v80; // x8
  __int128 v81; // q0
  int64_t v82; // x8
  int v83; // w22
  BalanceConfig_c *v84; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+80h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16

  if ( (byte_4DFF7A9 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1CE6700(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1CE6700(&IconLabelInfo_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4DFF7A9 = 1;
  }
  v11 = (IconLabelInfo_o *)sub_1CE694C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v11, 0);
  this->fields.iconLabelInfo1 = v11;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo1, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (IconLabelInfo_o *)sub_1CE694C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0);
  this->fields.iconLabelInfo2 = v18;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo2, (int32_t)v18, v20, v21, v22, v23, v24, v25);
  ListViewItem___ctor_44921328((ListViewItem_o *)this, index, 0);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userSvtEntity,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( !userSvtEntity )
    goto LABEL_49;
  ServantEntity = UserServantEntity__GetServantEntity(userSvtEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantEntity,
    (int32_t)ServantEntity,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = this->fields.servantEntity;
  if ( !v42 )
    goto LABEL_49;
  v44 = *(_QWORD *)&v42->fields.id.fields.currentCryptoKey;
  v43 = *(_QWORD *)&v42->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v91.fields.currentCryptoKey = v44;
  *(_QWORD *)&v91.fields.fakeValue = v43;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v91, 0);
  v46 = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !v46 )
    goto LABEL_49;
  this->fields.classId = v46->fields.classId;
  FavoriteChangeListViewItem__SetOverwriteStatus(this, userSvtEntity, v45);
  this->fields.isFavorite = isFavorite;
  this->fields.isHeroine = UserServantEntity__IsHeroine(userSvtEntity, 0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v47 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_49;
  v48 = *(_OWORD *)&v47->fields.userId.fields.fakeValue;
  v49 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&v47->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v90.fields.fakeValue = v48;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v89 = v90;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v89, 0);
  if ( !v49 )
    goto LABEL_49;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v49, Instance, this->fields.svtId, 0);
  if ( !Instance )
    goto LABEL_49;
  Instance = UserServantCollectionEntity__getFriendShipRankInfo(
               (UserServantCollectionEntity_o *)Instance,
               &this->fields.friendship,
               &this->fields.friendshipMax,
               0);
  v50 = this->fields.userSvtEntity;
  this->fields.partyIndex = -1;
  if ( !v50 )
    goto LABEL_49;
  v51 = *(_OWORD *)&v50->fields.id.fields.fakeValue;
  *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&v50->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v88.fields.fakeValue = v51;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v88, 0);
  if ( !partyUserSvtList )
    goto LABEL_49;
  max_length = partyUserSvtList->max_length;
  if ( max_length >= 1 )
  {
    v53 = 0;
    while ( 1 )
    {
      if ( max_length == v53 )
        sub_1CE6960(Instance);
      if ( Instance == partyUserSvtList->m_Items[v53] )
        break;
      if ( max_length == ++v53 )
        goto LABEL_23;
    }
    this->fields.partyIndex = v53;
  }
LABEL_23:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_49;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v54 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v54 )
    goto LABEL_49;
  this->fields.isChoice = UserServantEntity__IsChoice(v54, 0);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_49;
  v55 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_49;
  v56 = *(_OWORD *)&v55->fields.id.fields.fakeValue;
  v57 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&v55->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v90.fields.fakeValue = v56;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v87 = v90;
  this->fields.isPush = v57 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v87, 0);
  this->fields.isPushMode = 0;
  IsSaveTransformServant = UserServantEntity__get_IsSaveTransformServant(userSvtEntity, 0);
  v59 = 0;
  if ( IsSaveTransformServant )
    v59 = !UserServantEntity__CheckBaseServant(userSvtEntity, -1, 0);
  this->fields.isTransformed = v59;
  Instance = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(userSvtEntity, -1, 0, 0);
  v60 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v60 )
    goto LABEL_49;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v60, -1, Instance, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_49;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   this->fields.dispLimitCount,
                                   0);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_49;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_34E925C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_49;
  v75 = *(int *)(Instance + 52);
  rarity = this->fields.rarity;
  v77 = this->fields.userSvtEntity;
  this->fields.priority = v75;
  this->fields.sortValue1B = v75;
  this->fields.sortValue2 = rarity;
  if ( !v77 )
    goto LABEL_49;
  v79 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
  v78 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v92.fields.currentCryptoKey = v79;
  *(_QWORD *)&v92.fields.fakeValue = v78;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v92, 0);
  v80 = this->fields.userSvtEntity;
  this->fields.sortValue2B = (int)Instance;
  if ( !v80 )
    goto LABEL_49;
  v81 = *(_OWORD *)&v80->fields.id.fields.fakeValue;
  *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&v80->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v90.fields.fakeValue = v81;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v86 = v90;
  v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v86, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValueLast = v82;
  this->fields.amountSortValue = -1;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_49;
  v83 = *(_DWORD *)(Instance + 420);
  v84 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v84 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userSvtEntity;
  }
  static_fields = v84->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v83;
  if ( !Instance
    || (this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 416),
        UserServantEntity__getAdjustMaxData(
          (UserServantEntity_o *)Instance,
          &this->fields.nowMaxHpReinforceValue,
          &this->fields.nowMaxAtkReinforceValue,
          0),
        (Instance = (int64_t)this->fields.iconLabelInfo1) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_49:
    sub_1CE6958(Instance, v34);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void FavoriteChangeListViewItem__Finalize(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool FavoriteChangeListViewItem__IsMatchFilter(
        FavoriteChangeListViewItem_o *this,
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

  if ( (byte_4DFF7AC & 1) == 0 )
  {
    sub_1CE6700(&FilterKindList_TypeInfo);
    sub_1CE6700(&ListViewSort_FilterKind___TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4DFF7AC = 1;
  }
  if ( this->fields.isFavorite )
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


void FavoriteChangeListViewItem__ModifyChoiceItem(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1CE6958(0, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0);
  this->fields.isSwapChoice = 0;
}


// local variable allocation has failed, the output may be wrong!
void FavoriteChangeListViewItem__ModifyItem(
        FavoriteChangeListViewItem_o *this,
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

  if ( (byte_4DFF7AA & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1CE6700(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4DFF7AA = 1;
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
  FavoriteChangeListViewItem__SetOverwriteStatus(this, v8, v9);
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


void FavoriteChangeListViewItem__ModifyLockItem(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1CE6958(0, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0);
  this->fields.isSwapLock = 0;
}


void FavoriteChangeListViewItem__SetOverwriteStatus(
        FavoriteChangeListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  FavoriteChangeListViewItem_o *v3; // x19

  if ( !userServantEntity
    || (v3 = this,
        (this = (FavoriteChangeListViewItem_o *)UserServantEntity__GetOverwriteStatus(userServantEntity, 0, 0)) == 0) )
  {
    sub_1CE6958(this, userServantEntity);
  }
  v3->fields.cost = this->fields.loopIndex;
  *(_QWORD *)&v3->fields.hp = *(_QWORD *)&this->fields.selectNum;
  v3->fields.rarity = this->fields.sortIndex;
}


bool FavoriteChangeListViewItem__SetSortValue(
        FavoriteChangeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool v6; // w8
  int64_t iconLabelInfo2; // x0
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isFavorite; // w10
  _BOOL4 isChoice; // w9
  int64_t v11; // x8
  bool v12; // zf
  _BOOL4 v13; // w9
  int v14; // w10
  int v15; // w8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v17; // q1
  struct UserServantEntity_o *v18; // x8
  int64_t rarity; // x8
  int64_t v20; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t cost; // x2
  int32_t v23; // w3
  int32_t v24; // w1
  int64_t hp; // x20
  IconLabelInfo_o *v26; // x21
  int32_t v27; // w3
  int32_t v28; // w1
  int64_t friendship; // x2
  IconLabelInfo_o *v30; // x20
  int32_t v31; // w21
  int64_t amountSortValue; // x21
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v35; // x20
  int64_t hpReinforceValue; // x2
  int32_t nowMaxHpReinforceValue; // w3
  int32_t v38; // w1
  IconLabelInfo_o *v39; // x19
  struct UserServantEntity_o *v40; // x8
  __int64 v41; // x21
  __int64 v42; // x22
  const MethodInfo *v43; // x2
  __int64 v44; // x20
  __int64 v45; // x8
  int32_t v46; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+30h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4DFF7AB & 1) == 0 )
  {
    sub_1CE6700(&FavoriteChangeListViewManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4DFF7AB = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  v6 = FavoriteChangeListViewItem__IsMatchFilter(this, sort, method);
  iconLabelInfo2 = 0;
  if ( v6 )
  {
    isSwapChoice = this->fields.isSwapChoice;
    isFavorite = this->fields.isFavorite;
    isChoice = this->fields.isChoice;
    this->fields.sortValue0 = 0;
    if ( isFavorite )
    {
      v11 = 20;
    }
    else
    {
      v12 = !isChoice;
      v13 = isChoice;
      v14 = v12;
      if ( isSwapChoice )
        v15 = v14;
      else
        v15 = v13;
      if ( v15 != 1 )
        goto LABEL_17;
      if ( !sort )
        goto LABEL_85;
      if ( !sort->fields.isChoiceSort )
      {
LABEL_17:
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
                  goto LABEL_85;
                v17 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v49.fields.fakeValue = v17;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v48 = v49;
                iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v48, 0);
                v18 = this->fields.userSvtEntity;
                this->fields.sortValue1 = iconLabelInfo2;
                if ( !v18 )
                  goto LABEL_85;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                if ( !iconLabelInfo2 )
                  goto LABEL_85;
                IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v18->fields.createdAt, 0, 0, 0, 0);
                goto LABEL_66;
              case 2:
                rarity = this->fields.rarity;
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                goto LABEL_79;
              case 3:
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_85;
                v20 = *(int *)(iconLabelInfo2 + 400);
                iconLabelInfo1 = this->fields.iconLabelInfo1;
                this->fields.sortValue1 = v20;
                goto LABEL_44;
              case 4:
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_85;
                UserServantEntity__getTreasureDeviceInfo_44310656(
                  (UserServantEntity_o *)iconLabelInfo2,
                  &tdMaxLv[1],
                  tdMaxLv,
                  0);
                LODWORD(cost) = tdMaxLv[1];
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = tdMaxLv[1];
                if ( !iconLabelInfo2 )
                  goto LABEL_85;
                v23 = tdMaxLv[0];
                v24 = 33;
                goto LABEL_41;
              case 5:
                hp = this->fields.hp;
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                this->fields.sortValue1 = hp;
                if ( !iconLabelInfo2 )
                  goto LABEL_85;
                v26 = this->fields.iconLabelInfo1;
                iconLabelInfo2 = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)iconLabelInfo2, 0);
                if ( !v26 )
                  goto LABEL_85;
                v27 = iconLabelInfo2;
                v28 = 3;
                goto LABEL_38;
              case 6:
                hp = this->fields.atk;
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                this->fields.sortValue1 = hp;
                if ( !iconLabelInfo2 )
                  goto LABEL_85;
                v26 = this->fields.iconLabelInfo1;
                iconLabelInfo2 = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)iconLabelInfo2, 0);
                if ( !v26 )
                  goto LABEL_85;
                v27 = iconLabelInfo2;
                v28 = 5;
LABEL_38:
                IconLabelInfo__Set_42060700(v26, v28, hp, v27, 0, 0, 0, 0, 0, 0);
                goto LABEL_66;
              case 7:
                cost = this->fields.cost;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = cost;
                if ( !iconLabelInfo2 )
                  goto LABEL_85;
                v24 = 7;
                v23 = 0;
LABEL_41:
                IconLabelInfo__Set_42060700((IconLabelInfo_o *)iconLabelInfo2, v24, cost, v23, 0, 0, 0, 0, 0, 0);
                goto LABEL_48;
              case 8:
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                this->fields.sortValue1 = -this->fields.priority;
                if ( !iconLabelInfo2 )
                  goto LABEL_85;
                v20 = *(int *)(iconLabelInfo2 + 400);
                iconLabelInfo1 = this->fields.iconLabelInfo1;
                this->fields.sortValue2 = v20;
LABEL_44:
                iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
                if ( !iconLabelInfo1 )
                  goto LABEL_85;
                IconLabelInfo__Set_42060700(iconLabelInfo1, 2, v20, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
                goto LABEL_83;
              case 0xA:
                friendship = this->fields.friendship;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = friendship;
                if ( !iconLabelInfo2 )
                  goto LABEL_85;
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
LABEL_48:
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_85;
                v30 = this->fields.iconLabelInfo2;
                v31 = *(_DWORD *)(iconLabelInfo2 + 400);
                iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
                if ( !v30 )
                  goto LABEL_85;
                IconLabelInfo__Set_42060700(v30, 2, v31, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
                iconLabelInfo2 = (int64_t)this->fields.servantEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_85;
                if ( ServantEntity__get_IsExpUp((ServantEntity_o *)iconLabelInfo2, 0) )
                  goto LABEL_54;
                iconLabelInfo2 = (int64_t)this->fields.servantEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_85;
                if ( !ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo2, 0) )
                  goto LABEL_83;
LABEL_54:
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                if ( !iconLabelInfo2 )
                  goto LABEL_85;
                IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
                if ( !iconLabelInfo2 )
                  goto LABEL_85;
                IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
LABEL_83:
                LOBYTE(iconLabelInfo2) = 1;
                break;
              case 0xE:
                amountSortValue = this->fields.amountSortValue;
                if ( (amountSortValue & 0x8000000000000000LL) == 0 )
                  goto LABEL_76;
                manager = sort->fields.manager;
                if ( manager
                  && (naturalAligment = FavoriteChangeListViewManager_TypeInfo->_2.naturalAligment,
                      manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
                {
                  if ( (FavoriteChangeListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == FavoriteChangeListViewManager_TypeInfo )
                    v35 = sort->fields.manager;
                  else
                    v35 = 0;
                }
                else
                {
                  v35 = 0;
                }
                v40 = this->fields.userSvtEntity;
                if ( !v40 )
                  goto LABEL_85;
                v42 = *(_QWORD *)&v40->fields.svtId.fields.currentCryptoKey;
                v41 = *(_QWORD *)&v40->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v51.fields.currentCryptoKey = v42;
                *(_QWORD *)&v51.fields.fakeValue = v41;
                iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v51, 0);
                if ( !v35 )
                  goto LABEL_85;
                amountSortValue = FavoriteChangeListViewManager__GetAmountSortValue(
                                    (FavoriteChangeListViewManager_o *)v35,
                                    iconLabelInfo2,
                                    v43);
                this->fields.amountSortValue = amountSortValue;
LABEL_76:
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_85;
                v44 = (unsigned int)this->fields.rarity;
                iconLabelInfo2 = (int64_t)UserServantEntity__get_BaseServantEntity(
                                            (UserServantEntity_o *)iconLabelInfo2,
                                            0);
                if ( !iconLabelInfo2 )
                  goto LABEL_85;
                v45 = *(int *)(iconLabelInfo2 + 208);
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                rarity = ((v44 << 32) + (amountSortValue << 48)) | v45;
LABEL_79:
                this->fields.sortValue1 = rarity;
                if ( !iconLabelInfo2 )
                  goto LABEL_85;
                v39 = this->fields.iconLabelInfo1;
                goto LABEL_81;
              case 0xF:
                hpReinforceValue = this->fields.hpReinforceValue;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = hpReinforceValue;
                if ( !iconLabelInfo2 )
                  goto LABEL_85;
                nowMaxHpReinforceValue = this->fields.nowMaxHpReinforceValue;
                v38 = 44;
                goto LABEL_65;
              case 0x10:
                hpReinforceValue = this->fields.atkReinforceValue;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = hpReinforceValue;
                if ( !iconLabelInfo2 )
                  goto LABEL_85;
                nowMaxHpReinforceValue = this->fields.nowMaxAtkReinforceValue;
                v38 = 45;
LABEL_65:
                IconLabelInfo__Set_42060700(
                  (IconLabelInfo_o *)iconLabelInfo2,
                  v38,
                  hpReinforceValue,
                  nowMaxHpReinforceValue,
                  0,
                  0,
                  0,
                  0,
                  0,
                  0);
LABEL_66:
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_85;
                v39 = this->fields.iconLabelInfo2;
LABEL_81:
                v46 = *(_DWORD *)(iconLabelInfo2 + 400);
                iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
                if ( !v39 )
                  goto LABEL_85;
                IconLabelInfo__Set_42060700(v39, 2, v46, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
                goto LABEL_83;
              default:
                return iconLabelInfo2;
            }
            return iconLabelInfo2;
          }
        }
LABEL_85:
        sub_1CE6958(iconLabelInfo2, v5);
      }
      v11 = 10;
    }
    this->fields.sortValue0 = v11;
    goto LABEL_17;
  }
  return iconLabelInfo2;
}


bool FavoriteChangeListViewItem__SwapChoice(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool FavoriteChangeListViewItem__SwapLock(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


IconLabelInfo_o *FavoriteChangeListViewItem__get_IconInfo1(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *FavoriteChangeListViewItem__get_IconInfo2(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool FavoriteChangeListViewItem__get_IsCanNotSelect(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  if ( (byte_4DFF7AE & 1) == 0 )
  {
    sub_1CE6700(&TutorialFlag_TypeInfo);
    byte_4DFF7AE = 1;
  }
  if ( !this->fields.isHeroine )
    return this->fields.isFavorite;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_41569468(126, 0) || this->fields.isFavorite;
}


bool FavoriteChangeListViewItem__get_IsChoice(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool FavoriteChangeListViewItem__get_IsDispChoice(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool FavoriteChangeListViewItem__get_IsDispLock(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool FavoriteChangeListViewItem__get_IsEventJoin(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsEventJoin(userSvtEntity, 0);
  return (char)userSvtEntity;
}


bool FavoriteChangeListViewItem__get_IsFavorite(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFavorite;
}


bool FavoriteChangeListViewItem__get_IsHerioneReave(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  if ( (byte_4DFF7AD & 1) == 0 )
  {
    sub_1CE6700(&TutorialFlag_TypeInfo);
    byte_4DFF7AD = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_41569468(126, 0);
}


bool FavoriteChangeListViewItem__get_IsLock(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool FavoriteChangeListViewItem__get_IsNoPeriod(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsNoPeriod(userSvtEntity, 0);
  return (char)userSvtEntity;
}


bool FavoriteChangeListViewItem__get_IsParty(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex >= 0;
}


bool FavoriteChangeListViewItem__get_IsPush(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool FavoriteChangeListViewItem__get_IsPushMode(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPushMode;
}


bool FavoriteChangeListViewItem__get_IsSwapChoice(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool FavoriteChangeListViewItem__get_IsSwapLock(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


ServantEntity_o *FavoriteChangeListViewItem__get_Servant(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t FavoriteChangeListViewItem__get_SvtId(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


UserServantEntity_o *FavoriteChangeListViewItem__get_UserServant(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


void FavoriteChangeListViewItem__setUserServantEntity(
        FavoriteChangeListViewItem_o *this,
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


void FavoriteChangeListViewItem__set_IsPushMode(
        FavoriteChangeListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isPushMode = value;
}