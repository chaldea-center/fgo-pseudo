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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  IconLabelInfo_o *v20; // x26
  struct IconLabelInfo_o **p_iconLabelInfo2; // x21
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x23
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  int64_t Instance; // x0
  __int64 v36; // x1
  struct ServantEntity_o *ServantEntity; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  __int64 v44; // x2
  struct ServantEntity_o *v45; // x8
  __int64 v46; // x25
  __int64 v47; // x26
  const MethodInfo *v48; // x2
  struct ServantEntity_o *v49; // x8
  bool IsHeroine; // w0
  const MethodInfo_476E8C0 *v51; // x8
  __int64 v52; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v53; // x8
  UserServantCollectionMaster_o *v54; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // q1
  int64_t v56; // x25
  struct UserServantEntity_o *v57; // x8
  __int128 v58; // q1
  int max_length; // w8
  int32_t v60; // w10
  bool IsLock; // w8
  __int64 v62; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v63; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // q1
  __int64 v66; // x22
  int v67; // w9
  int64_t v68; // x0
  const MethodInfo_476E8C0 *v69; // x8
  __int64 v70; // x2
  int64_t v71; // x9
  int64_t rarity; // x10
  struct UserServantEntity_o *v73; // x8
  __int64 v74; // x22
  __int64 v75; // x23
  struct UserServantEntity_o *v76; // x8
  __int128 v77; // q1
  __int64 v78; // x1
  __int64 v79; // x2
  BalanceConfig_c *v80; // x0
  int32_t adjustHp; // w23
  struct BalanceConfig_StaticFields *static_fields; // x8
  bool v83; // w8
  UserServantEntity_o *v84; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  struct System_Int32_array **p_tdCategoryIdList; // x19
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+60h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+80h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16

  if ( (byte_5933A8D & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_21FFC50(&IconLabelInfo_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5933A8D = 1;
  }
  v13 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0);
  this->fields.iconLabelInfo1 = v13;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v20, 0);
  this->fields.iconLabelInfo2 = v20;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userSvtEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields._IsCannotSelectSvt_k__BackingField = cannotSelectSvt;
  if ( !userSvtEntity )
    goto LABEL_47;
  ServantEntity = UserServantEntity__GetServantEntity(userSvtEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)ServantEntity,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v45 = this->fields.servantEntity;
  if ( !v45 )
    goto LABEL_47;
  v46 = *(_QWORD *)&v45->fields.id.fields.currentCryptoKey;
  v47 = *(_QWORD *)&v45->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36, v44);
  *(_QWORD *)&v105.fields.currentCryptoKey = v46;
  *(_QWORD *)&v105.fields.fakeValue = v47;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v105, 0);
  v49 = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !v49 )
    goto LABEL_47;
  this->fields.classId = v49->fields.classId;
  PhotoCampaignListViewItem__SetOverwriteStatus(this, userSvtEntity, v48);
  this->fields.isFavorite = isFavorite;
  IsHeroine = UserServantEntity__IsHeroine(userSvtEntity, 0);
  v51 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isHeroine = IsHeroine;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v51);
  if ( !Instance )
    goto LABEL_47;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v53 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_47;
  v54 = (UserServantCollectionMaster_o *)Instance;
  v55 = v53[4];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v104.fields.currentCryptoKey = v53[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v104.fields.fakeValue = v55;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v36, v52);
  v103 = v104;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v103, 0);
  if ( !*p_userSvtEntity )
    goto LABEL_47;
  v56 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412((*p_userSvtEntity)[5], 0);
  if ( !v54 )
    goto LABEL_47;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v54, v56, Instance, 0);
  if ( !Instance )
    goto LABEL_47;
  Instance = UserServantCollectionEntity__getFriendShipRankInfo(
               (UserServantCollectionEntity_o *)Instance,
               &this->fields.friendship,
               &this->fields.friendshipMax,
               0);
  v57 = this->fields.userSvtEntity;
  this->fields.partyIndex = -1;
  if ( !v57 )
    goto LABEL_47;
  v58 = *(_OWORD *)&v57->fields.id.fields.fakeValue;
  *(_OWORD *)&v102.fields.currentCryptoKey = *(_OWORD *)&v57->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v102.fields.fakeValue = v58;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v102, 0);
  if ( !partyUserSvtList )
    goto LABEL_47;
  max_length = partyUserSvtList->max_length;
  if ( max_length >= 1 )
  {
    v60 = 0;
    while ( 1 )
    {
      if ( max_length == v60 )
        sub_21FFED4(Instance);
      if ( Instance == partyUserSvtList->m_Items[v60] )
        break;
      if ( (max_length & ~(max_length >> 31)) == ++v60 )
        goto LABEL_24;
    }
    this->fields.partyIndex = v60;
  }
LABEL_24:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_47;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !Instance )
    goto LABEL_47;
  this->fields.isChoice = UserServantEntity__IsChoice((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_47;
  v63 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_47;
  v64 = v63[1];
  v65 = v63[2];
  v66 = *(_QWORD *)(Instance + 128);
  v67 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v104.fields.currentCryptoKey = v64;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v104.fields.fakeValue = v65;
  if ( !v67 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v36, v62);
  v101 = v104;
  v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v101, 0);
  v69 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isPushMode = 0;
  this->fields.isPush = v66 == v68;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v69);
  if ( !Instance )
    goto LABEL_47;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_47;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_47;
  v71 = *(int *)(Instance + 52);
  rarity = this->fields.rarity;
  v73 = this->fields.userSvtEntity;
  this->fields.priority = v71;
  this->fields.sortValue1B = v71;
  this->fields.sortValue2 = rarity;
  if ( !v73 )
    goto LABEL_47;
  v74 = *(_QWORD *)&v73->fields.svtId.fields.currentCryptoKey;
  v75 = *(_QWORD *)&v73->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36, v70);
  *(_QWORD *)&v106.fields.currentCryptoKey = v74;
  *(_QWORD *)&v106.fields.fakeValue = v75;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v106, 0);
  v76 = this->fields.userSvtEntity;
  this->fields.sortValue2B = (int)Instance;
  if ( !v76 )
    goto LABEL_47;
  v77 = *(_OWORD *)&v76->fields.id.fields.fakeValue;
  *(_OWORD *)&v100.fields.currentCryptoKey = *(_OWORD *)&v76->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v100.fields.fakeValue = v77;
  this->fields.sortValueLast = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v100, 0);
  v80 = BalanceConfig_TypeInfo;
  this->fields.amountSortValue = -1;
  *(_WORD *)&this->fields.isSwapLock = 0;
  adjustHp = userSvtEntity->fields.adjustHp;
  if ( !*(&v80->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v80, v78, v79);
    v80 = BalanceConfig_TypeInfo;
  }
  static_fields = v80->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * adjustHp;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * userSvtEntity->fields.adjustAtk;
  UserServantEntity__GetAdjustMaxData(
    userSvtEntity,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  v83 = UserServantEntity__get_IsSaveTransformServant(userSvtEntity, 0)
     && !UserServantEntity__CheckBaseServant(userSvtEntity, -1, 0);
  this->fields.isTransformed = v83;
  Instance = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(userSvtEntity, -1, 0, 0);
  v84 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v84 )
    goto LABEL_47;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v84, -1, Instance, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance
    || (TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)Instance,
                                         0,
                                         this->fields.dispLimitCount,
                                         0),
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList,
        p_tdCategoryIdList = &this->fields.tdCategoryIdList,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)p_tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v94,
          v95,
          v96,
          v97,
          v98,
          v99),
        (Instance = (int64_t)*(p_tdCategoryIdList - 6)) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_47:
    sub_21FFECC(Instance, v36);
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

  if ( (byte_5933A90 & 1) == 0 )
  {
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&ListViewSort_FilterKind___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_5933A90 = 1;
  }
  if ( (this->fields.selectNum & 0x80000000) == 0 )
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
                                                                       (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        sub_21FFBF4(
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
        sub_21FFBF4(
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
    sub_21FFECC(ClassGroupFilterKindList, sort);
  }
LABEL_55:
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_68;
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_69;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                   0);
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_68;
  if ( !ClassGroupFilterKindList->fields._size )
LABEL_69:
    sub_21FFED4(ClassGroupFilterKindList);
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
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
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
                                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v20, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


void PhotoCampaignListViewItem__ModifyChoiceItem(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  bool IsChoice; // w0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_21FFECC(0, method);
  IsChoice = UserServantEntity__IsChoice(userSvtEntity, 0);
  this->fields.isSwapChoice = 0;
  this->fields.isChoice = IsChoice;
}


// local variable allocation has failed, the output may be wrong!
void PhotoCampaignListViewItem__ModifyItem(
        PhotoCampaignListViewItem_o *this,
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
  const MethodInfo_476E8C0 *v22; // x0
  int64_t currentCryptoKey_high; // x8
  int64_t rarity; // x9
  __int64 v25; // x2
  struct UserServantEntity_o *v26; // x9
  __int128 v27; // q1
  __int64 v28; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_5933A8E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5933A8E = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.isFavorite = isFavorite;
  if ( !userSvtEntity )
    goto LABEL_18;
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !userSvtEntity )
    goto LABEL_18;
  IsChoice = UserServantEntity__IsChoice(userSvtEntity, 0);
  v8 = this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  PhotoCampaignListViewItem__SetOverwriteStatus(this, v8, v9);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_18;
  ServantEntity = UserServantEntity__GetServantEntity(userSvtEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  sub_21FFBF4(
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
    goto LABEL_18;
  v19 = *(_QWORD *)&v18->fields.id.fields.currentCryptoKey;
  v20 = *(_QWORD *)&v18->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isFavorite, v17);
  *(_QWORD *)&v31.fields.currentCryptoKey = v19;
  *(_QWORD *)&v31.fields.fakeValue = v20;
  userSvtEntity = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v31, 0);
  v21 = this->fields.servantEntity;
  this->fields.svtId = (int)userSvtEntity;
  if ( !v21 )
    goto LABEL_18;
  v22 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.classId = v21->fields.classId;
  userSvtEntity = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance(v22);
  if ( !userSvtEntity )
    goto LABEL_18;
  userSvtEntity = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)userSvtEntity,
                                           (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !userSvtEntity )
    goto LABEL_18;
  userSvtEntity = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)userSvtEntity,
                                           this->fields.classId,
                                           (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !userSvtEntity
    || (currentCryptoKey_high = SHIDWORD(userSvtEntity->fields.userId.fields.currentCryptoKey),
        rarity = this->fields.rarity,
        this->fields.priority = currentCryptoKey_high,
        this->fields.sortValue1B = currentCryptoKey_high,
        this->fields.sortValue2 = rarity,
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0)) == 0)
    || (v26 = this->fields.userSvtEntity) == 0 )
  {
LABEL_18:
    sub_21FFECC(userSvtEntity, isFavorite);
  }
  v27 = *(_OWORD *)&v26->fields.id.fields.fakeValue;
  v28 = *(_QWORD *)&userSvtEntity->fields.dispLimitCount.fields.currentCryptoKey;
  *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&v26->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v30.fields.fakeValue = v27;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isFavorite, v25);
  v29 = v30;
  this->fields.isPush = v28 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v29, 0);
}


void PhotoCampaignListViewItem__ModifyLockItem(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  bool IsLock; // w0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_21FFECC(0, method);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
  this->fields.isSwapLock = 0;
  this->fields.isLock = IsLock;
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
    sub_21FFECC(this, userServantEntity);
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
  int64_t IsMatchFilter; // x0
  __int64 v6; // x1
  char v7; // w19
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v10; // zf
  _BOOL4 v11; // w8
  int v12; // w10
  __int64 v13; // x2
  int32_t sortKind; // w8
  int64_t v15; // x21
  IconLabelInfo_o *iconLabelInfo1; // x22
  int64_t friendship; // x2
  int64_t hp; // x21
  struct IconLabelInfo_o *v19; // x22
  int32_t nowMaxHpReinforceValue; // w3
  int32_t v21; // w1
  int64_t atkReinforceValue; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v24; // q1
  struct UserServantEntity_o *v25; // x8
  int64_t cost; // x2
  int32_t v27; // w2
  IconLabelInfo_o *v28; // x21
  int32_t v29; // w22
  int64_t amountSortValue; // x22
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v33; // x21
  int64_t rarity; // x8
  struct IconLabelInfo_o *v35; // x22
  int64_t hpReinforceValue; // x2
  IconLabelInfo_o *iconLabelInfo2; // x20
  struct UserServantEntity_o *v38; // x8
  __int64 v39; // x22
  __int64 v40; // x23
  const MethodInfo *v41; // x2
  __int64 v42; // x21
  __int64 v43; // x9
  int32_t v44; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_5933A8F & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&PhotoCampaignListViewManager_TypeInfo);
    byte_5933A8F = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  IsMatchFilter = PhotoCampaignListViewItem__IsMatchFilter(this, sort, method);
  v7 = IsMatchFilter;
  if ( (IsMatchFilter & 1) == 0 )
    return v7 & 1;
  isChoice = this->fields.isChoice;
  isSwapChoice = this->fields.isSwapChoice;
  this->fields.sortValue0 = 0;
  v10 = !isChoice;
  v11 = isChoice;
  v12 = v10;
  if ( isSwapChoice )
    v11 = v12;
  if ( v11 )
  {
    if ( !sort )
      goto LABEL_92;
    if ( sort->fields.isChoiceSort )
      this->fields.sortValue0 = 10;
  }
  IsMatchFilter = (int64_t)this->fields.iconLabelInfo2;
  if ( !IsMatchFilter || (IconLabelInfo__Clear((IconLabelInfo_o *)IsMatchFilter, 0), !sort) )
LABEL_92:
    sub_21FFECC(IsMatchFilter, v6);
  sortKind = sort->fields.sortKind;
  if ( sortKind <= 6 )
  {
    if ( sortKind <= 3 )
    {
      if ( sortKind != 1 )
      {
        if ( sortKind != 2 )
        {
          if ( sortKind == 3 )
          {
            IsMatchFilter = (int64_t)this->fields.userSvtEntity;
            if ( !IsMatchFilter )
              goto LABEL_92;
            v15 = *(int *)(IsMatchFilter + 400);
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v15;
LABEL_65:
            IsMatchFilter = UserServantEntity__getLevelMax((UserServantEntity_o *)IsMatchFilter, 0);
            if ( iconLabelInfo1 )
            {
              IconLabelInfo__Set_47932852(iconLabelInfo1, 2, v15, IsMatchFilter, 0, 0, 0, 0, 0, 0);
              return v7 & 1;
            }
            goto LABEL_92;
          }
          return v7 & 1;
        }
        rarity = this->fields.rarity;
        IsMatchFilter = (int64_t)this->fields.userSvtEntity;
        goto LABEL_87;
      }
      userSvtEntity = this->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_92;
      v24 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v47.fields.fakeValue = v24;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v13);
      v46 = v47;
      IsMatchFilter = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v46, 0);
      v25 = this->fields.userSvtEntity;
      this->fields.sortValue1 = IsMatchFilter;
      if ( !v25 )
        goto LABEL_92;
      IsMatchFilter = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsMatchFilter )
        goto LABEL_92;
      IconLabelInfo__SetTime((IconLabelInfo_o *)IsMatchFilter, 49, v25->fields.createdAt, 0, 0, 0, 0);
LABEL_74:
      IsMatchFilter = (int64_t)this->fields.userSvtEntity;
      if ( !IsMatchFilter )
        goto LABEL_92;
      iconLabelInfo2 = this->fields.iconLabelInfo2;
LABEL_89:
      v44 = *(_DWORD *)(IsMatchFilter + 400);
      IsMatchFilter = UserServantEntity__getLevelMax((UserServantEntity_o *)IsMatchFilter, 0);
      if ( iconLabelInfo2 )
      {
        IconLabelInfo__Set_47932852(iconLabelInfo2, 2, v44, IsMatchFilter, 0, 0, 0, 0, 0, 0);
        return v7 & 1;
      }
      goto LABEL_92;
    }
    if ( sortKind != 4 )
    {
      if ( sortKind == 5 )
      {
        hp = this->fields.hp;
        IsMatchFilter = (int64_t)this->fields.userSvtEntity;
        this->fields.sortValue1 = hp;
        if ( !IsMatchFilter )
          goto LABEL_92;
        v35 = this->fields.iconLabelInfo1;
        IsMatchFilter = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)IsMatchFilter, 0);
        if ( !v35 )
          goto LABEL_92;
        nowMaxHpReinforceValue = IsMatchFilter;
        IsMatchFilter = (int64_t)v35;
        v21 = 3;
      }
      else
      {
        hp = this->fields.atk;
        IsMatchFilter = (int64_t)this->fields.userSvtEntity;
        this->fields.sortValue1 = hp;
        if ( !IsMatchFilter )
          goto LABEL_92;
        v19 = this->fields.iconLabelInfo1;
        IsMatchFilter = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)IsMatchFilter, 0);
        if ( !v19 )
          goto LABEL_92;
        nowMaxHpReinforceValue = IsMatchFilter;
        IsMatchFilter = (int64_t)v19;
        v21 = 5;
      }
      LODWORD(hpReinforceValue) = hp;
LABEL_73:
      IconLabelInfo__Set_47932852(
        (IconLabelInfo_o *)IsMatchFilter,
        v21,
        hpReinforceValue,
        nowMaxHpReinforceValue,
        0,
        0,
        0,
        0,
        0,
        0);
      goto LABEL_74;
    }
    IsMatchFilter = (int64_t)this->fields.userSvtEntity;
    if ( !IsMatchFilter )
      goto LABEL_92;
    UserServantEntity__getTreasureDeviceInfo_50128532((UserServantEntity_o *)IsMatchFilter, &tdMaxLv[1], tdMaxLv, 0);
    v27 = tdMaxLv[1];
    IsMatchFilter = (int64_t)this->fields.iconLabelInfo1;
    this->fields.sortValue1 = tdMaxLv[1];
    if ( !IsMatchFilter )
      goto LABEL_92;
    IconLabelInfo__Set_47932852((IconLabelInfo_o *)IsMatchFilter, 33, v27, tdMaxLv[0], 0, 0, 0, 0, 0, 0);
LABEL_49:
    IsMatchFilter = (int64_t)this->fields.userSvtEntity;
    if ( !IsMatchFilter )
      goto LABEL_92;
    v28 = this->fields.iconLabelInfo2;
    v29 = *(_DWORD *)(IsMatchFilter + 400);
    IsMatchFilter = UserServantEntity__getLevelMax((UserServantEntity_o *)IsMatchFilter, 0);
    if ( !v28 )
      goto LABEL_92;
    IconLabelInfo__Set_47932852(v28, 2, v29, IsMatchFilter, 0, 0, 0, 0, 0, 0);
    IsMatchFilter = (int64_t)this->fields.servantEntity;
    if ( !IsMatchFilter )
      goto LABEL_92;
    if ( ServantEntity__get_IsExpUp((ServantEntity_o *)IsMatchFilter, 0) )
      goto LABEL_55;
    IsMatchFilter = (int64_t)this->fields.servantEntity;
    if ( !IsMatchFilter )
      goto LABEL_92;
    if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)IsMatchFilter, 0) )
    {
LABEL_55:
      IsMatchFilter = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsMatchFilter )
        goto LABEL_92;
      IconLabelInfo__Clear((IconLabelInfo_o *)IsMatchFilter, 0);
      IsMatchFilter = (int64_t)this->fields.iconLabelInfo2;
      if ( !IsMatchFilter )
        goto LABEL_92;
      IconLabelInfo__Clear((IconLabelInfo_o *)IsMatchFilter, 0);
    }
    return v7 & 1;
  }
  if ( sortKind > 13 )
  {
    if ( sortKind == 14 )
    {
      amountSortValue = this->fields.amountSortValue;
      if ( amountSortValue < 0 )
      {
        manager = sort->fields.manager;
        if ( manager
          && (naturalAligment = PhotoCampaignListViewManager_TypeInfo->_2.naturalAligment,
              manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (PhotoCampaignListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == PhotoCampaignListViewManager_TypeInfo )
            v33 = sort->fields.manager;
          else
            v33 = 0;
        }
        else
        {
          v33 = 0;
        }
        v38 = this->fields.userSvtEntity;
        if ( !v38 )
          goto LABEL_92;
        v39 = *(_QWORD *)&v38->fields.svtId.fields.currentCryptoKey;
        v40 = *(_QWORD *)&v38->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v13);
        *(_QWORD *)&v49.fields.currentCryptoKey = v39;
        *(_QWORD *)&v49.fields.fakeValue = v40;
        IsMatchFilter = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v49, 0);
        if ( !v33 )
          goto LABEL_92;
        amountSortValue = PhotoCampaignListViewManager__GetAmountSortValue(
                            (PhotoCampaignListViewManager_o *)v33,
                            IsMatchFilter,
                            v41);
        this->fields.amountSortValue = amountSortValue;
      }
      IsMatchFilter = (int64_t)this->fields.userSvtEntity;
      if ( !IsMatchFilter )
        goto LABEL_92;
      v42 = this->fields.rarity;
      IsMatchFilter = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)IsMatchFilter, 0);
      if ( !IsMatchFilter )
        goto LABEL_92;
      v43 = *(int *)(IsMatchFilter + 208);
      IsMatchFilter = (int64_t)this->fields.userSvtEntity;
      rarity = ((v42 << 32) + (amountSortValue << 48)) | v43;
LABEL_87:
      this->fields.sortValue1 = rarity;
      if ( !IsMatchFilter )
        goto LABEL_92;
      iconLabelInfo2 = this->fields.iconLabelInfo1;
      goto LABEL_89;
    }
    if ( sortKind != 15 )
    {
      if ( sortKind != 16 )
        return v7 & 1;
      atkReinforceValue = this->fields.atkReinforceValue;
      IsMatchFilter = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = atkReinforceValue;
      if ( !IsMatchFilter )
        goto LABEL_92;
      IconLabelInfo__Set_47932852(
        (IconLabelInfo_o *)IsMatchFilter,
        45,
        atkReinforceValue,
        this->fields.nowMaxAtkReinforceValue,
        0,
        0,
        0,
        0,
        0,
        0);
      goto LABEL_74;
    }
    hpReinforceValue = this->fields.hpReinforceValue;
    IsMatchFilter = (int64_t)this->fields.iconLabelInfo1;
    this->fields.sortValue1 = hpReinforceValue;
    if ( !IsMatchFilter )
      goto LABEL_92;
    nowMaxHpReinforceValue = this->fields.nowMaxHpReinforceValue;
    v21 = 44;
    goto LABEL_73;
  }
  switch ( sortKind )
  {
    case 7:
      cost = this->fields.cost;
      IsMatchFilter = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = cost;
      if ( !IsMatchFilter )
        goto LABEL_92;
      IconLabelInfo__Set_47932852((IconLabelInfo_o *)IsMatchFilter, 7, cost, 0, 0, 0, 0, 0, 0, 0);
      goto LABEL_49;
    case 8:
      IsMatchFilter = (int64_t)this->fields.userSvtEntity;
      this->fields.sortValue1 = -this->fields.priority;
      if ( !IsMatchFilter )
        goto LABEL_92;
      v15 = *(int *)(IsMatchFilter + 400);
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue2 = v15;
      goto LABEL_65;
    case 10:
      friendship = this->fields.friendship;
      IsMatchFilter = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsMatchFilter )
        goto LABEL_92;
      IconLabelInfo__Set_47932852(
        (IconLabelInfo_o *)IsMatchFilter,
        32,
        friendship,
        this->fields.friendshipMax,
        0,
        0,
        0,
        0,
        0,
        0);
      goto LABEL_49;
  }
  return v7 & 1;
}


void PhotoCampaignListViewItem__SetUserServantEntity(
        PhotoCampaignListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.userSvtEntity = entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)entity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool PhotoCampaignListViewItem__SwapChoice(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
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


bool PhotoCampaignListViewItem__SwapLock(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
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
  __int64 v2; // x2

  if ( (byte_5933A92 & 1) == 0 )
  {
    sub_21FFC50(&TutorialFlag_TypeInfo);
    byte_5933A92 = 1;
  }
  if ( !this->fields.isHeroine )
    return this->fields._IsCannotSelectSvt_k__BackingField;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  return TutorialFlag__Get_47357952(126, 0) || this->fields._IsCannotSelectSvt_k__BackingField;
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
  __int64 v2; // x2

  if ( (byte_5933A91 & 1) == 0 )
  {
    sub_21FFC50(&TutorialFlag_TypeInfo);
    byte_5933A91 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  return TutorialFlag__Get_47357952(126, 0);
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