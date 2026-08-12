void FavoriteChangeListViewItem___ctor(
        FavoriteChangeListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserSvtList,
        bool isFavorite,
        const MethodInfo *method)
{
  IconLabelInfo_o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  IconLabelInfo_o *v18; // x25
  struct IconLabelInfo_o **p_iconLabelInfo2; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int64_t Instance; // x0
  __int64 v34; // x1
  struct ServantEntity_o *ServantEntity; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 v42; // x2
  struct ServantEntity_o *v43; // x8
  __int64 v44; // x25
  __int64 v45; // x26
  const MethodInfo *v46; // x2
  struct ServantEntity_o *v47; // x8
  bool IsHeroine; // w0
  const MethodInfo_47A29F8 *v49; // x8
  __int64 v50; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v51; // x8
  UserServantCollectionMaster_o *v52; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // q1
  int64_t v54; // x25
  struct UserServantEntity_o *v55; // x8
  __int128 v56; // q1
  int max_length; // w8
  int32_t v58; // w10
  bool IsLock; // w8
  __int64 v60; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v61; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // q1
  __int64 v64; // x23
  int v65; // w9
  bool v66; // w8
  bool IsSaveTransformServant; // w0
  bool v68; // w8
  UserServantEntity_o *v69; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  int64_t v84; // x8
  __int64 rarity; // x23
  __int64 v86; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v87; // x8
  __int64 v88; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v89; // x0
  __int64 v90; // x22
  __int64 v91; // x23
  __int64 v92; // x2
  struct UserServantEntity_o *v93; // x8
  __int128 v94; // q0
  __int128 v95; // q1
  int v96; // w8
  __int64 v97; // x1
  __int64 v98; // x2
  BalanceConfig_c *v99; // x0
  int32_t adjustHp; // w23
  struct BalanceConfig_StaticFields *static_fields; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+60h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+80h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16

  if ( (byte_596B4A1 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596B4A1 = 1;
  }
  v11 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v11, 0);
  this->fields.iconLabelInfo1 = v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0);
  this->fields.iconLabelInfo2 = v18;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userSvtEntity,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( !userSvtEntity )
    goto LABEL_50;
  ServantEntity = UserServantEntity__GetServantEntity(userSvtEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)ServantEntity,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v43 = this->fields.servantEntity;
  if ( !v43 )
    goto LABEL_50;
  v44 = *(_QWORD *)&v43->fields.id.fields.currentCryptoKey;
  v45 = *(_QWORD *)&v43->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34, v42);
  *(_QWORD *)&v107.fields.currentCryptoKey = v44;
  *(_QWORD *)&v107.fields.fakeValue = v45;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v107, 0);
  v47 = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !v47 )
    goto LABEL_50;
  this->fields.classId = v47->fields.classId;
  FavoriteChangeListViewItem__SetOverwriteStatus(this, userSvtEntity, v46);
  this->fields.isFavorite = isFavorite;
  IsHeroine = UserServantEntity__IsHeroine(userSvtEntity, 0);
  v49 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isHeroine = IsHeroine;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v49);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v51 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_50;
  v52 = (UserServantCollectionMaster_o *)Instance;
  v53 = v51[4];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v106.fields.currentCryptoKey = v51[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v106.fields.fakeValue = v53;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v34, v50);
  v105 = v106;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v105, 0);
  if ( !*p_userSvtEntity )
    goto LABEL_50;
  v54 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068((*p_userSvtEntity)[5], 0);
  if ( !v52 )
    goto LABEL_50;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v52, v54, Instance, 0);
  if ( !Instance )
    goto LABEL_50;
  Instance = UserServantCollectionEntity__getFriendShipRankInfo(
               (UserServantCollectionEntity_o *)Instance,
               &this->fields.friendship,
               &this->fields.friendshipMax,
               0);
  v55 = this->fields.userSvtEntity;
  this->fields.partyIndex = -1;
  if ( !v55 )
    goto LABEL_50;
  v56 = *(_OWORD *)&v55->fields.id.fields.fakeValue;
  *(_OWORD *)&v104.fields.currentCryptoKey = *(_OWORD *)&v55->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v104.fields.fakeValue = v56;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v104, 0);
  if ( !partyUserSvtList )
    goto LABEL_50;
  max_length = partyUserSvtList->max_length;
  if ( max_length >= 1 )
  {
    v58 = 0;
    while ( 1 )
    {
      if ( max_length == v58 )
        sub_2213CE4(Instance);
      if ( Instance == partyUserSvtList->m_Items[v58] )
        break;
      if ( (max_length & ~(max_length >> 31)) == ++v58 )
        goto LABEL_24;
    }
    this->fields.partyIndex = v58;
  }
LABEL_24:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_50;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !Instance )
    goto LABEL_50;
  this->fields.isChoice = UserServantEntity__IsChoice((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_50;
  v61 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_50;
  v62 = v61[1];
  v63 = v61[2];
  v64 = *(_QWORD *)(Instance + 128);
  v65 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v106.fields.currentCryptoKey = v62;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v106.fields.fakeValue = v63;
  if ( !v65 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v34, v60);
  v103 = v106;
  v66 = v64 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v103, 0);
  this->fields.isPushMode = 0;
  this->fields.isPush = v66;
  IsSaveTransformServant = UserServantEntity__get_IsSaveTransformServant(userSvtEntity, 0);
  v68 = 0;
  if ( IsSaveTransformServant )
    v68 = !UserServantEntity__CheckBaseServant(userSvtEntity, -1, 0);
  this->fields.isTransformed = v68;
  Instance = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(userSvtEntity, -1, 0, 0);
  v69 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v69 )
    goto LABEL_50;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v69, -1, Instance, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_50;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   this->fields.dispLimitCount,
                                   0);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_50;
  v84 = *(int *)(Instance + 52);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.priority = v84;
  this->fields.sortValue1B = v84;
  if ( !Instance )
    goto LABEL_50;
  rarity = (unsigned int)this->fields.rarity;
  Instance = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_50;
  v87 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_50;
  v88 = *(int *)(Instance + 208);
  v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  this->fields.sortValue2 = (v88 << 16) | (rarity << 48) | (2LL * v87[25].fields.currentCryptoKey);
  v90 = *(_QWORD *)&v87[5].fields.currentCryptoKey;
  v91 = *(_QWORD *)&v87[5].fields.fakeValue;
  if ( !*(&v89->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v89, v34, v86);
  *(_QWORD *)&v108.fields.currentCryptoKey = v90;
  *(_QWORD *)&v108.fields.fakeValue = v91;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v108, 0);
  v93 = this->fields.userSvtEntity;
  this->fields.sortValue2B = (int)Instance;
  if ( !v93 )
    goto LABEL_50;
  v94 = *(_OWORD *)&v93->fields.id.fields.currentCryptoKey;
  v95 = *(_OWORD *)&v93->fields.id.fields.fakeValue;
  v96 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v106.fields.currentCryptoKey = v94;
  *(_OWORD *)&v106.fields.fakeValue = v95;
  if ( !v96 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v34, v92);
  v102 = v106;
  this->fields.sortValueLast = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v102, 0);
  v99 = BalanceConfig_TypeInfo;
  this->fields.amountSortValue = -1;
  *(_WORD *)&this->fields.isSwapLock = 0;
  adjustHp = userSvtEntity->fields.adjustHp;
  if ( !*(&v99->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v99, v97, v98);
    v99 = BalanceConfig_TypeInfo;
  }
  static_fields = v99->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * adjustHp;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * userSvtEntity->fields.adjustAtk;
  UserServantEntity__GetAdjustMaxData(
    userSvtEntity,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  if ( !Instance || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
LABEL_50:
    sub_2213CDC(Instance, v34);
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
  __int64 v8; // x2
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  __int64 v11; // x2
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  __int64 v14; // x2
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  __int64 v17; // x2
  _BOOL4 isChoice; // w8
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x21
  UserServantEntity_o *userSvtEntity; // x0
  bool v22; // w8
  _BOOL4 v23; // w21
  int32_t DispLimitCountStageSealAfterIndexZero; // w2
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v40; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v42; // w0

  if ( (byte_596B4A4 & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&ListViewSort_FilterKind___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_596B4A4 = 1;
  }
  if ( this->fields.isFavorite )
    return 1;
  v6 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v6 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v6->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_68;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_68;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v9 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v8);
      v9 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v9->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_68;
    v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             ClassGroupFilterKindList,
                                             (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v12 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v11);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v12->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_68;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  v15 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v14);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v15->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_68;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0)
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
        goto LABEL_68;
      v22 = !UserServantEntity__CheckBaseServant((UserServantEntity_o *)ClassGroupFilterKindList, -1, 0);
    }
    else
    {
      v22 = 0;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userSvtEntity;
    if ( ClassGroupFilterKindList )
    {
      v23 = v22;
      DispLimitCountStageSealAfterIndexZero = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
                                                (UserServantEntity_o *)ClassGroupFilterKindList,
                                                -1,
                                                0,
                                                0);
      if ( this->fields.isTransformed != v23 || this->fields.dispLimitCount != DispLimitCountStageSealAfterIndexZero )
      {
        ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userSvtEntity;
        this->fields.isTransformed = v23;
        this->fields.dispLimitCount = DispLimitCountStageSealAfterIndexZero;
        if ( !ClassGroupFilterKindList )
          goto LABEL_68;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(
                                (UserServantEntity_o *)ClassGroupFilterKindList,
                                -1,
                                DispLimitCountStageSealAfterIndexZero,
                                0);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_68;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         this->fields.dispLimitCount,
                                         0);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
      goto LABEL_55;
    }
LABEL_68:
    sub_2213CDC(ClassGroupFilterKindList, sort);
  }
LABEL_55:
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_68;
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_69;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                   0);
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_68;
  if ( !ClassGroupFilterKindList->fields._size )
LABEL_69:
    sub_2213CE4(ClassGroupFilterKindList);
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 51;
  v40 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            this->fields.tdCategoryIdList,
                            sort,
                            0);
  v42 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
  if ( IsUnSelectedAllTargetFilters && v40 || !IsUnSelectedAllTargetFilters && !v40 )
  {
    if ( !IsMatchEffectCategory && !v42 )
      return 0;
  }
  else if ( IsUnSelectedAllTargetFilters )
  {
    if ( !v42 )
      return 0;
  }
  else if ( !IsMatchEffectCategory )
  {
    return 0;
  }
LABEL_28:
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_68;
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_69;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    && ListViewSort__GetFilter(sort, 39, 0) )
  {
    isChoice = this->fields.isChoice;
    if ( this->fields.isSwapChoice )
      isChoice = !this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v19 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v17);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v19->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_68;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v20, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


void FavoriteChangeListViewItem__ModifyChoiceItem(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  bool IsChoice; // w0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_2213CDC(0, method);
  IsChoice = UserServantEntity__IsChoice(userSvtEntity, 0);
  this->fields.isSwapChoice = 0;
  this->fields.isChoice = IsChoice;
}


// local variable allocation has failed, the output may be wrong!
void FavoriteChangeListViewItem__ModifyItem(
        FavoriteChangeListViewItem_o *this,
        bool isFavorite,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  bool IsLock; // w8
  bool IsChoice; // w0
  UserServantEntity_o *v8; // x1
  const MethodInfo *v9; // x2
  struct ServantEntity_o *ServantEntity; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x2
  struct ServantEntity_o *v18; // x8
  __int64 v19; // x20
  __int64 v20; // x21
  struct ServantEntity_o *v21; // x8
  const MethodInfo_47A29F8 *v22; // x0
  int64_t currentCryptoKey_high; // x8
  __int64 rarity; // x20
  struct UserServantEntity_o *v25; // x8
  __int64 v26; // x2
  struct UserServantEntity_o *v27; // x9
  __int128 v28; // q1
  __int64 v29; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_596B4A2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596B4A2 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.isFavorite = isFavorite;
  if ( !userSvtEntity )
    goto LABEL_21;
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !userSvtEntity )
    goto LABEL_21;
  IsChoice = UserServantEntity__IsChoice(userSvtEntity, 0);
  v8 = this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  FavoriteChangeListViewItem__SetOverwriteStatus(this, v8, v9);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_21;
  ServantEntity = UserServantEntity__GetServantEntity(userSvtEntity, -1, 0);
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
  v18 = this->fields.servantEntity;
  if ( !v18 )
    goto LABEL_21;
  v19 = *(_QWORD *)&v18->fields.id.fields.currentCryptoKey;
  v20 = *(_QWORD *)&v18->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isFavorite, v17);
  *(_QWORD *)&v32.fields.currentCryptoKey = v19;
  *(_QWORD *)&v32.fields.fakeValue = v20;
  userSvtEntity = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v32, 0);
  v21 = this->fields.servantEntity;
  this->fields.svtId = (int)userSvtEntity;
  if ( !v21 )
    goto LABEL_21;
  v22 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.classId = v21->fields.classId;
  userSvtEntity = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance(v22);
  if ( !userSvtEntity )
    goto LABEL_21;
  userSvtEntity = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)userSvtEntity,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !userSvtEntity )
    goto LABEL_21;
  userSvtEntity = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)userSvtEntity,
                                           this->fields.classId,
                                           (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !userSvtEntity )
    goto LABEL_21;
  currentCryptoKey_high = SHIDWORD(userSvtEntity->fields.userId.fields.currentCryptoKey);
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.priority = currentCryptoKey_high;
  this->fields.sortValue1B = currentCryptoKey_high;
  if ( !userSvtEntity
    || (rarity = (unsigned int)this->fields.rarity,
        (userSvtEntity = (UserServantEntity_o *)UserServantEntity__get_BaseServantEntity(userSvtEntity, 0)) == 0)
    || (v25 = this->fields.userSvtEntity) == 0
    || (this->fields.sortValue2 = ((__int64)userSvtEntity->fields.randomLimitCount.fields.currentCryptoKey << 16)
                                | (rarity << 48)
                                | (2LL * v25->fields.lv),
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0)) == 0)
    || (v27 = this->fields.userSvtEntity) == 0 )
  {
LABEL_21:
    sub_2213CDC(userSvtEntity, isFavorite);
  }
  v28 = *(_OWORD *)&v27->fields.id.fields.fakeValue;
  v29 = *(_QWORD *)&userSvtEntity->fields.dispLimitCount.fields.currentCryptoKey;
  *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&v27->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v31.fields.fakeValue = v28;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isFavorite, v26);
  v30 = v31;
  this->fields.isPush = v29 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v30, 0);
}


void FavoriteChangeListViewItem__ModifyLockItem(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  bool IsLock; // w0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_2213CDC(0, method);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
  this->fields.isSwapLock = 0;
  this->fields.isLock = IsLock;
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
    sub_2213CDC(this, userServantEntity);
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
  int64_t iconLabelInfo2; // x0
  __int64 v6; // x1
  char v7; // w19
  _BOOL4 isFavorite; // w10
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isChoice; // w9
  int64_t v11; // x8
  bool v12; // zf
  _BOOL4 v13; // w9
  int v14; // w10
  int v15; // w8
  __int64 v16; // x2
  int32_t sortKind; // w8
  int64_t v18; // x21
  IconLabelInfo_o *v19; // x22
  int64_t friendship; // x2
  int64_t hp; // x21
  struct IconLabelInfo_o *v22; // x22
  int32_t nowMaxHpReinforceValue; // w3
  int32_t v24; // w1
  int64_t atkReinforceValue; // x2
  struct UserServantEntity_o *v26; // x8
  __int128 v27; // q1
  struct UserServantEntity_o *v28; // x8
  int64_t cost; // x2
  int32_t v30; // w2
  IconLabelInfo_o *v31; // x21
  int32_t v32; // w22
  int64_t amountSortValue; // x22
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v36; // x21
  int64_t v37; // x8
  struct IconLabelInfo_o *iconLabelInfo1; // x22
  int64_t hpReinforceValue; // x2
  IconLabelInfo_o *v40; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v42; // x22
  __int64 v43; // x23
  const MethodInfo *v44; // x2
  __int64 rarity; // x21
  __int64 v46; // x9
  int32_t v47; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_596B4A3 & 1) == 0 )
  {
    sub_2213A60(&FavoriteChangeListViewManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596B4A3 = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  iconLabelInfo2 = FavoriteChangeListViewItem__IsMatchFilter(this, sort, method);
  v7 = iconLabelInfo2;
  if ( (iconLabelInfo2 & 1) == 0 )
    return v7 & 1;
  isFavorite = this->fields.isFavorite;
  isSwapChoice = this->fields.isSwapChoice;
  isChoice = this->fields.isChoice;
  this->fields.sortValue0 = 0;
  if ( isFavorite )
  {
    v11 = 20;
LABEL_6:
    this->fields.sortValue0 = v11;
    goto LABEL_17;
  }
  v12 = !isChoice;
  v13 = isChoice;
  v14 = v12;
  if ( isSwapChoice )
    v15 = v14;
  else
    v15 = v13;
  if ( v15 == 1 )
  {
    if ( !sort )
      goto LABEL_95;
    if ( sort->fields.isChoiceSort )
    {
      v11 = 10;
      goto LABEL_6;
    }
  }
LABEL_17:
  iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
  if ( !iconLabelInfo2 )
    goto LABEL_95;
  IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
  if ( !sort )
    goto LABEL_95;
  sortKind = sort->fields.sortKind;
  if ( sortKind > 6 )
  {
    if ( sortKind > 13 )
    {
      if ( sortKind == 14 )
      {
        amountSortValue = this->fields.amountSortValue;
        if ( amountSortValue < 0 )
        {
          manager = sort->fields.manager;
          if ( manager
            && (naturalAligment = FavoriteChangeListViewManager_TypeInfo->_2.naturalAligment,
                manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
          {
            if ( (FavoriteChangeListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == FavoriteChangeListViewManager_TypeInfo )
              v36 = sort->fields.manager;
            else
              v36 = 0;
          }
          else
          {
            v36 = 0;
          }
          userSvtEntity = this->fields.userSvtEntity;
          if ( !userSvtEntity )
            goto LABEL_95;
          v42 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
          v43 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v16);
          *(_QWORD *)&v52.fields.currentCryptoKey = v42;
          *(_QWORD *)&v52.fields.fakeValue = v43;
          iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v52, 0);
          if ( !v36 )
            goto LABEL_95;
          amountSortValue = FavoriteChangeListViewManager__GetAmountSortValue(
                              (FavoriteChangeListViewManager_o *)v36,
                              iconLabelInfo2,
                              v44);
          this->fields.amountSortValue = amountSortValue;
        }
        iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
        if ( !iconLabelInfo2 )
          goto LABEL_95;
        rarity = this->fields.rarity;
        iconLabelInfo2 = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)iconLabelInfo2, 0);
        if ( !iconLabelInfo2 )
          goto LABEL_95;
        v46 = *(int *)(iconLabelInfo2 + 208);
        iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
        v37 = ((rarity << 32) + (amountSortValue << 48)) | v46;
        goto LABEL_90;
      }
      if ( sortKind != 15 )
      {
        if ( sortKind != 16 )
          return v7 & 1;
        atkReinforceValue = this->fields.atkReinforceValue;
        iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
        this->fields.sortValue1 = atkReinforceValue;
        if ( !iconLabelInfo2 )
          goto LABEL_95;
        IconLabelInfo__Set_47880948(
          (IconLabelInfo_o *)iconLabelInfo2,
          45,
          atkReinforceValue,
          this->fields.nowMaxAtkReinforceValue,
          0,
          0,
          0,
          0,
          0,
          0);
        goto LABEL_77;
      }
      hpReinforceValue = this->fields.hpReinforceValue;
      iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hpReinforceValue;
      if ( !iconLabelInfo2 )
        goto LABEL_95;
      nowMaxHpReinforceValue = this->fields.nowMaxHpReinforceValue;
      v24 = 44;
      goto LABEL_76;
    }
    switch ( sortKind )
    {
      case 7:
        cost = this->fields.cost;
        iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
        this->fields.sortValue1 = cost;
        if ( !iconLabelInfo2 )
          goto LABEL_95;
        IconLabelInfo__Set_47880948((IconLabelInfo_o *)iconLabelInfo2, 7, cost, 0, 0, 0, 0, 0, 0, 0);
        break;
      case 8:
        v37 = -this->fields.priority;
        goto LABEL_69;
      case 10:
        friendship = this->fields.friendship;
        iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
        this->fields.sortValue1 = friendship;
        if ( !iconLabelInfo2 )
          goto LABEL_95;
        IconLabelInfo__Set_47880948(
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
        break;
      default:
        return v7 & 1;
    }
LABEL_54:
    iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
    if ( iconLabelInfo2 )
    {
      v31 = this->fields.iconLabelInfo2;
      v32 = *(_DWORD *)(iconLabelInfo2 + 400);
      iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
      if ( v31 )
      {
        IconLabelInfo__Set_47880948(v31, 2, v32, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
        iconLabelInfo2 = (int64_t)this->fields.servantEntity;
        if ( iconLabelInfo2 )
        {
          if ( !ServantEntity__get_IsExpUp((ServantEntity_o *)iconLabelInfo2, 0) )
          {
            iconLabelInfo2 = (int64_t)this->fields.servantEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_95;
            if ( !ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo2, 0) )
              return v7 & 1;
          }
          iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
          if ( iconLabelInfo2 )
          {
            IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
            if ( iconLabelInfo2 )
            {
              IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
              return v7 & 1;
            }
          }
        }
      }
    }
LABEL_95:
    sub_2213CDC(iconLabelInfo2, v6);
  }
  if ( sortKind > 3 )
  {
    if ( sortKind != 4 )
    {
      if ( sortKind == 5 )
      {
        hp = this->fields.hp;
        iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
        this->fields.sortValue1 = hp;
        if ( !iconLabelInfo2 )
          goto LABEL_95;
        iconLabelInfo1 = this->fields.iconLabelInfo1;
        iconLabelInfo2 = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)iconLabelInfo2, 0);
        if ( !iconLabelInfo1 )
          goto LABEL_95;
        nowMaxHpReinforceValue = iconLabelInfo2;
        iconLabelInfo2 = (int64_t)iconLabelInfo1;
        v24 = 3;
      }
      else
      {
        hp = this->fields.atk;
        iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
        this->fields.sortValue1 = hp;
        if ( !iconLabelInfo2 )
          goto LABEL_95;
        v22 = this->fields.iconLabelInfo1;
        iconLabelInfo2 = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)iconLabelInfo2, 0);
        if ( !v22 )
          goto LABEL_95;
        nowMaxHpReinforceValue = iconLabelInfo2;
        iconLabelInfo2 = (int64_t)v22;
        v24 = 5;
      }
      LODWORD(hpReinforceValue) = hp;
LABEL_76:
      IconLabelInfo__Set_47880948(
        (IconLabelInfo_o *)iconLabelInfo2,
        v24,
        hpReinforceValue,
        nowMaxHpReinforceValue,
        0,
        0,
        0,
        0,
        0,
        0);
LABEL_77:
      iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
      if ( !iconLabelInfo2 )
        goto LABEL_95;
      v40 = this->fields.iconLabelInfo2;
LABEL_92:
      v47 = *(_DWORD *)(iconLabelInfo2 + 400);
      iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
      if ( v40 )
      {
        IconLabelInfo__Set_47880948(v40, 2, v47, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
        return v7 & 1;
      }
      goto LABEL_95;
    }
    iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
    if ( !iconLabelInfo2 )
      goto LABEL_95;
    UserServantEntity__getTreasureDeviceInfo_50192116((UserServantEntity_o *)iconLabelInfo2, &tdMaxLv[1], tdMaxLv, 0);
    v30 = tdMaxLv[1];
    iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
    this->fields.sortValue1 = tdMaxLv[1];
    if ( !iconLabelInfo2 )
      goto LABEL_95;
    IconLabelInfo__Set_47880948((IconLabelInfo_o *)iconLabelInfo2, 33, v30, tdMaxLv[0], 0, 0, 0, 0, 0, 0);
    goto LABEL_54;
  }
  switch ( sortKind )
  {
    case 1:
      v26 = this->fields.userSvtEntity;
      if ( !v26 )
        goto LABEL_95;
      v27 = *(_OWORD *)&v26->fields.id.fields.fakeValue;
      *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&v26->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v50.fields.fakeValue = v27;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v16);
      v49 = v50;
      iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v49, 0);
      v28 = this->fields.userSvtEntity;
      this->fields.sortValue1 = iconLabelInfo2;
      if ( !v28 )
        goto LABEL_95;
      iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
      if ( !iconLabelInfo2 )
        goto LABEL_95;
      IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v28->fields.createdAt, 0, 0, 0, 0);
      goto LABEL_77;
    case 2:
      v37 = this->fields.rarity;
LABEL_69:
      iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
LABEL_90:
      this->fields.sortValue1 = v37;
      if ( !iconLabelInfo2 )
        goto LABEL_95;
      v40 = this->fields.iconLabelInfo1;
      goto LABEL_92;
    case 3:
      iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
      if ( iconLabelInfo2 )
      {
        v18 = *(int *)(iconLabelInfo2 + 400);
        v19 = this->fields.iconLabelInfo1;
        this->fields.sortValue1 = v18;
        iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
        if ( v19 )
        {
          IconLabelInfo__Set_47880948(v19, 2, v18, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
          return v7 & 1;
        }
      }
      goto LABEL_95;
  }
  return v7 & 1;
}


bool FavoriteChangeListViewItem__SwapChoice(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  _BOOL4 isSwapChoice; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  isSwapChoice = this->fields.isSwapChoice;
  v4 = !isSwapChoice;
  v5 = !isSwapChoice;
  result = v4;
  this->fields.isSwapChoice = v5;
  return result;
}


bool FavoriteChangeListViewItem__SwapLock(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  _BOOL4 isSwapLock; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  isSwapLock = this->fields.isSwapLock;
  v4 = !isSwapLock;
  v5 = !isSwapLock;
  result = v4;
  this->fields.isSwapLock = v5;
  return result;
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
  __int64 v2; // x2

  if ( (byte_596B4A6 & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596B4A6 = 1;
  }
  if ( !this->fields.isHeroine )
    return this->fields.isFavorite;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  return TutorialFlag__Get_47388504(126, 0) || this->fields.isFavorite;
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
  __int64 v2; // x2

  if ( (byte_596B4A5 & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596B4A5 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  return TutorialFlag__Get_47388504(126, 0);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.userSvtEntity = entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)entity,
    (System_String_o *)method,
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