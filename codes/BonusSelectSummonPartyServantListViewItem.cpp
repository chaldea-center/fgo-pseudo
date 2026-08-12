void BonusSelectSummonPartyServantListViewItem___ctor(
        BonusSelectSummonPartyServantListViewItem_o *this,
        int32_t index,
        ServantEntity_o *servantEntity,
        GachaBonusSelectLineupEntity_o *lineupEntity,
        BonusSelectSummonPartyOrganizationListViewItem_o *baseItem,
        bool isPossibleSelect,
        const MethodInfo *method)
{
  IconLabelInfo_o *v13; // x25
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct ServantEntity_o **p_servantEntity; // x21
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  Il2CppObject *Master_object; // x24
  __int64 v38; // x23
  __int64 v39; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // kr00_16
  DataManager_o *Instance; // x0
  __int64 v42; // x1
  bool v43; // w25
  __int64 v44; // x1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_Collections_Generic_List_UserServantEntity__o *v51; // x22
  BonusSelectSummonPartyServantListViewItem___c_c *v52; // x0
  struct BonusSelectSummonPartyServantListViewItem___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__10_0; // x23
  Il2CppObject *v55; // x24
  struct BonusSelectSummonPartyServantListViewItem___c_StaticFields *v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x0
  Il2CppObject *v64; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  const MethodInfo_47A29F8 *v71; // x0
  __int64 v72; // x2
  struct ServantEntity_o *v73; // x8
  ServantLimitMaster_o *v74; // x20
  __int64 v75; // x21
  __int64 v76; // x22
  __int64 v77; // x2
  DataManager_o *v78; // x8
  DataManager_c *v79; // x0
  int v80; // w9
  Il2CppObject *v81; // x0
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16

  if ( (byte_596C98E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_2213A60(&System_Func_UserServantEntity__int__TypeInfo);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_BonusSelectSummonPartyServantListViewItem___c___ctor_b__10_0__);
    sub_2213A60(&BonusSelectSummonPartyServantListViewItem___c_TypeInfo);
    byte_596C98E = 1;
  }
  userServantList = 0;
  v13 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0);
  this->fields.iconLabelInfo = v13;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.lineupEntity = lineupEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.lineupEntity,
    (int32_t)lineupEntity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.servantEntity = servantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)servantEntity,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33, v34);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( servantEntity )
  {
    v39 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v38 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v36);
    v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
    v35 = *(_QWORD *)&v40.fields.fakeValue;
    v39 = *(_QWORD *)&v40.fields.currentCryptoKey;
    v38 = *(_QWORD *)&v40.fields.fakeValue;
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v36);
  *(_QWORD *)&v89.fields.currentCryptoKey = v39;
  *(_QWORD *)&v89.fields.fakeValue = v38;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v89, 0);
  if ( !Master_object )
    goto LABEL_30;
  v43 = isPossibleSelect;
  if ( UserServantMaster__TryGetEntityListBySvtId(
         (UserServantMaster_o *)Master_object,
         &userServantList,
         (int32_t)Instance,
         1,
         0) )
  {
    v51 = userServantList;
    v52 = BonusSelectSummonPartyServantListViewItem___c_TypeInfo;
    if ( !*(&BonusSelectSummonPartyServantListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewItem___c_TypeInfo, v44, v45);
      v52 = BonusSelectSummonPartyServantListViewItem___c_TypeInfo;
    }
    static_fields = v52->static_fields;
    _9__10_0 = (System_Func_object__int__o *)static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( !*(&v52->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v52, v44, v45);
        static_fields = BonusSelectSummonPartyServantListViewItem___c_TypeInfo->static_fields;
      }
      v55 = (Il2CppObject *)static_fields->__9;
      _9__10_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UserServantEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__10_0,
        v55,
        Method_BonusSelectSummonPartyServantListViewItem___c___ctor_b__10_0__,
        0);
      v56 = BonusSelectSummonPartyServantListViewItem___c_TypeInfo->static_fields;
      v56->__9__10_0 = (struct System_Func_UserServantEntity__int__o *)_9__10_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v56->__9__10_0, (int32_t)_9__10_0, v57, v58, v59, v60, v61, v62);
    }
    v63 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v51,
                                                                 (System_Func_TSource__TKey__o *)_9__10_0,
                                                                 (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v64 = System_Linq_Enumerable__FirstOrDefault_object_(
            v63,
            (const MethodInfo_3881578 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    this->fields.userServantEntity = (struct UserServantEntity_o *)v64;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity,
      (int32_t)v64,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
  }
  this->fields.baseItem = baseItem;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseItem,
    (int32_t)baseItem,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v71 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isPossibleSelect = v43;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v71);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v73 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_30;
  v74 = (ServantLimitMaster_o *)Instance;
  v75 = *(_QWORD *)&v73->fields.id.fields.currentCryptoKey;
  v76 = *(_QWORD *)&v73->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v42, v72);
  *(_QWORD *)&v90.fields.currentCryptoKey = v75;
  *(_QWORD *)&v90.fields.fakeValue = v76;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v90, 0);
  if ( !v74 || (Instance = (DataManager_o *)ServantLimitMaster__GetEntity(v74, (int32_t)Instance, 0, 0)) == 0 )
LABEL_30:
    sub_2213CDC(Instance, v42);
  v78 = Instance;
  v79 = DataManager_TypeInfo;
  v80 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  this->fields.rarityId = (int32_t)v78->fields.m_CancellationTokenSource;
  if ( !v80 )
    j_il2cpp_runtime_class_init_0(v79, v42, v77);
  v81 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  this->fields.svtTdMaster = (struct ServantTreasureDvcMaster_o *)v81;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.svtTdMaster, (int32_t)v81, v82, v83, v84, v85, v86, v87);
}


void BonusSelectSummonPartyServantListViewItem__GetTdInfo(
        BonusSelectSummonPartyServantListViewItem_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewItem_o *v6; // x21
  struct ServantEntity_o *servantEntity; // x8
  __int64 v8; // x23
  __int64 v9; // x24
  ServantTreasureDvcMaster_o *svtTdMaster; // x22
  int32_t LevelMax; // w0
  UserServantEntity_o *userServantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v6 = this;
  if ( (byte_596C992 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C992 = 1;
  }
  servantEntity = v6->fields.servantEntity;
  *tdLv = 0;
  if ( !servantEntity )
    goto LABEL_11;
  v8 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v9 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  svtTdMaster = v6->fields.svtTdMaster;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, tdLv, tdMaxLv);
  *(_QWORD *)&v13.fields.currentCryptoKey = v8;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  this = (BonusSelectSummonPartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                          v13,
                                                          0);
  if ( !svtTdMaster
    || (this = (BonusSelectSummonPartyServantListViewItem_o *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                                                svtTdMaster,
                                                                (int32_t)this,
                                                                1,
                                                                0)) == 0 )
  {
LABEL_11:
    sub_2213CDC(this, tdLv);
  }
  LevelMax = ServantTreasureDvcEntity__getLevelMax((ServantTreasureDvcEntity_o *)this, 0);
  userServantEntity = v6->fields.userServantEntity;
  *tdMaxLv = LevelMax;
  if ( userServantEntity )
    UserServantEntity__getTreasureDeviceInfo_50192116(userServantEntity, tdLv, tdMaxLv, 0);
}


void BonusSelectSummonPartyServantListViewItem__InitAfterSecondSort(
        BonusSelectSummonPartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BonusSelectSummonPartyServantListViewItem_o *v3; // x19
  struct ServantEntity_o *servantEntity; // x8
  __int64 rarityId; // x20
  __int64 collectionNo; // x21
  struct ServantEntity_o *v7; // x8
  __int64 v8; // x2
  struct ServantEntity_o *v9; // x8
  __int64 v10; // x20
  __int64 v11; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v3 = this;
  if ( (byte_596C991 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    this = (BonusSelectSummonPartyServantListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C991 = 1;
  }
  servantEntity = v3->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_13;
  rarityId = (unsigned int)v3->fields.rarityId;
  collectionNo = servantEntity->fields.collectionNo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  this = (BonusSelectSummonPartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v7 = v3->fields.servantEntity;
  if ( !v7
    || !this
    || (this = (BonusSelectSummonPartyServantListViewItem_o *)DataMasterBase_object__object__int___GetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                v7->fields.classId,
                                                                (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0
    || (v9 = v3->fields.servantEntity,
        v3->fields.sortValue1B = SHIDWORD(this->fields.sortValue1),
        v3->fields.sortValue2 = (collectionNo << 16) | (rarityId << 48),
        !v9) )
  {
LABEL_13:
    sub_2213CDC(this, method);
  }
  v10 = *(_QWORD *)&v9->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&v9->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v8);
  *(_QWORD *)&v12.fields.currentCryptoKey = v10;
  *(_QWORD *)&v12.fields.fakeValue = v11;
  v3->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v12, 0);
}


bool BonusSelectSummonPartyServantListViewItem__IsMatchFilter(
        BonusSelectSummonPartyServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  __int64 CollectionStateFilterKindList; // x0
  __int64 v7; // x2
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  __int64 v10; // x2
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x8
  __int64 v14; // x2
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  __int64 v17; // x2
  struct BonusSelectSummonPartyOrganizationListViewItem_o *v18; // x8
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x0
  FilterKindList_c *v21; // x0
  ListViewSort_FilterKind_array *v22; // x0
  __int64 v23; // x2
  FilterKindList_c *v24; // x0
  ListViewSort_FilterKind_array *v25; // x0
  UserServantEntity_o *userServantEntity; // x0
  UserServantEntity_o *v28; // x8
  System_Int32_array *v29; // x20
  System_Int32_array *SkillCategoryIdList; // x0
  ServantEntity_o *servantEntity; // x8
  System_Int32_array *v32; // x21
  _BOOL4 IsUnSelectedAllTargetFilters; // w22
  _BOOL4 v34; // w23
  _BOOL4 IsMatchEffectCategory; // w20
  _BOOL4 v36; // w0

  if ( (byte_596C98F & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&ListViewSort_FilterKind___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_596C98F = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v5 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v5->static_fields->CollectionStateFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_67;
  CollectionStateFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                             (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_67;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(
          sort,
          (ListViewSort_FilterKind_array *)CollectionStateFilterKindList,
          0)
    && !ListViewSort__IsMatchServantCollectionStatus(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v8 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v7);
    v8 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v8->static_fields->ServantHaveFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_67;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                          (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0)
    && !ListViewSort__IsMatchServantPossessionStatus(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v10);
    v11 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v11->static_fields->ServantSummonCategoryFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_67;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  CollectionStateFilterKindList = ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0);
  if ( (CollectionStateFilterKindList & 1) == 0 )
  {
    CollectionStateFilterKindList = ListViewSort__IsMatchServantSummonCategory(sort, this->fields.lineupEntity, 0);
    if ( (CollectionStateFilterKindList & 1) == 0 )
      return 0;
  }
  baseItem = this->fields.baseItem;
  if ( !baseItem )
    goto LABEL_67;
  CollectionStateFilterKindList = (__int64)baseItem->fields.gachaBonusSelectEntity;
  if ( !CollectionStateFilterKindList )
    goto LABEL_67;
  CollectionStateFilterKindList = GachaBonusSelectEntity__GetClassId(
                                    (GachaBonusSelectEntity_o *)CollectionStateFilterKindList,
                                    1001,
                                    0);
  if ( (_DWORD)CollectionStateFilterKindList == 1004 )
  {
    v15 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v14);
      v15 = FilterKindList_TypeInfo;
    }
    CollectionStateFilterKindList = (__int64)v15->static_fields->ClassExtra1FilterKindList;
    if ( !CollectionStateFilterKindList )
      goto LABEL_67;
    v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                             (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0)
      && !ListViewSort__IsMatchClassExtra1Filter(sort, this->fields.servantEntity, 0) )
    {
      return 0;
    }
  }
  else
  {
    v18 = this->fields.baseItem;
    if ( !v18 )
      goto LABEL_67;
    CollectionStateFilterKindList = (__int64)v18->fields.gachaBonusSelectEntity;
    if ( !CollectionStateFilterKindList )
      goto LABEL_67;
    if ( GachaBonusSelectEntity__GetClassId((GachaBonusSelectEntity_o *)CollectionStateFilterKindList, 1001, 0) == 1005 )
    {
      v19 = FilterKindList_TypeInfo;
      if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v17);
        v19 = FilterKindList_TypeInfo;
      }
      CollectionStateFilterKindList = (__int64)v19->static_fields->ClassExtra2FilterKindList;
      if ( !CollectionStateFilterKindList )
        goto LABEL_67;
      v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                               (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                               (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0)
        && !ListViewSort__IsMatchClassExtra2Filter(sort, this->fields.servantEntity, 0) )
      {
        return 0;
      }
    }
  }
  v21 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v17);
    v21 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v21->static_fields->NpTypeFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_67;
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0)
    && !ListViewSort__IsMatchNPTypeFilter_50895420(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v24 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v23);
    v24 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v24->static_fields->NpEffectFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_67;
  v25 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v25, 0)
    && !ListViewSort__IsMatchNPEffectFilter_50896008(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
    return 1;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    CollectionStateFilterKindList = (__int64)UserServantEntity__GetTreasureDeviceCategoryIdList(
                                               userServantEntity,
                                               1,
                                               -1,
                                               0);
    v28 = this->fields.userServantEntity;
    if ( !v28 )
      goto LABEL_67;
    v29 = (System_Int32_array *)CollectionStateFilterKindList;
    SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v28, 1, -1, 0);
  }
  else
  {
    CollectionStateFilterKindList = (__int64)this->fields.servantEntity;
    if ( !CollectionStateFilterKindList )
      goto LABEL_67;
    CollectionStateFilterKindList = (__int64)ServantEntity__GetTreasureDeviceCategoryIdList(
                                               (ServantEntity_o *)CollectionStateFilterKindList,
                                               0);
    servantEntity = this->fields.servantEntity;
    if ( !servantEntity )
      goto LABEL_67;
    v29 = (System_Int32_array *)CollectionStateFilterKindList;
    SkillCategoryIdList = ServantEntity__GetSkillCategoryIdList(servantEntity, 1, 0);
  }
  v32 = SkillCategoryIdList;
  CollectionStateFilterKindList = sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !CollectionStateFilterKindList )
    goto LABEL_67;
  if ( !*(_DWORD *)(CollectionStateFilterKindList + 24) )
    goto LABEL_68;
  *(_DWORD *)(CollectionStateFilterKindList + 32) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)CollectionStateFilterKindList,
                                   0);
  CollectionStateFilterKindList = sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !CollectionStateFilterKindList )
LABEL_67:
    sub_2213CDC(CollectionStateFilterKindList, sort);
  if ( !*(_DWORD *)(CollectionStateFilterKindList + 24) )
LABEL_68:
    sub_2213CE4(CollectionStateFilterKindList);
  *(_DWORD *)(CollectionStateFilterKindList + 32) = 51;
  v34 = ListViewSort__IsUnSelectedAllTargetFilters(
          sort,
          (ListViewSort_FilterKind_array *)CollectionStateFilterKindList,
          0);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(v29, sort, 0);
  v36 = ServantEquipEffectFilterController__IsMatchEffectCategory(v32, sort, 0);
  if ( IsUnSelectedAllTargetFilters && v34 || !IsUnSelectedAllTargetFilters && !v34 )
  {
    if ( IsMatchEffectCategory || v36 )
      return 1;
  }
  else if ( IsUnSelectedAllTargetFilters )
  {
    if ( v36 )
      return 1;
  }
  else if ( IsMatchEffectCategory )
  {
    return 1;
  }
  return 0;
}


bool BonusSelectSummonPartyServantListViewItem__SetSortValue(
        BonusSelectSummonPartyServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9
  int64_t PRIORITY_NORMAL; // x8
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  __int64 v10; // x2
  IconLabelInfo_o *iconLabelInfo; // x21
  int32_t v12; // w22
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t sortKind; // w8
  struct ServantEntity_o *v23; // x8
  __int64 collectionNo; // x8
  int32_t v25; // w1
  MissionNaviTransitionBoardItem_o *p_sortStr1; // x19
  int32_t tdMaxLv[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596C990 & 1) == 0 )
  {
    sub_2213A60(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C990 = 1;
  }
  servantEntity = this->fields.servantEntity;
  *(_QWORD *)tdMaxLv = 0;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  if ( (!servantEntity || (baseItem = this->fields.baseItem) == 0 || servantEntity != baseItem->fields.servantEntity)
    && (((__int64 (__fastcall *)(BonusSelectSummonPartyServantListViewItem_o *, ListViewSort_o *, const MethodInfo *))this->klass->vtable._5_IsMatchFilter.methodPtr)(
          this,
          sort,
          this->klass->vtable._5_IsMatchFilter.method)
      & 1) == 0 )
  {
    return 0;
  }
  PRIORITY_NORMAL = BonusSelectSummonPartyServantListViewItem_TypeInfo->static_fields->PRIORITY_NORMAL;
  this->fields.sortValue0 = PRIORITY_NORMAL;
  this->fields.sortValue0B = PRIORITY_NORMAL;
  BonusSelectSummonPartyServantListViewItem__InitAfterSecondSort(this, (const MethodInfo *)sort);
  BonusSelectSummonPartyServantListViewItem__GetTdInfo(this, &tdMaxLv[1], tdMaxLv, v8);
  iconLabelInfo = this->fields.iconLabelInfo;
  v12 = tdMaxLv[1];
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9, v10);
  v13 = System_Math__Max_77153260(v12, 1, 0);
  if ( !iconLabelInfo )
    goto LABEL_18;
  IconLabelInfo__Set_47880948(iconLabelInfo, 33, v13, tdMaxLv[0], 0, 0, 0, 0, 0, 0);
  if ( !sort )
    goto LABEL_18;
  sortKind = sort->fields.sortKind;
  if ( sortKind != 27 )
  {
    if ( sortKind == 4 )
      this->fields.sortValue1 = tdMaxLv[1];
    return 1;
  }
  v23 = this->fields.servantEntity;
  this->fields.sortValue0B = 0;
  if ( !v23 )
LABEL_18:
    sub_2213CDC(v13, v14);
  collectionNo = v23->fields.collectionNo;
  v25 = (int)StringLiteral_1/*""*/;
  this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
  p_sortStr1 = (MissionNaviTransitionBoardItem_o *)&this->fields.sortStr1;
  *(_QWORD *)&p_sortStr1[-1].fields._BoardType_k__BackingField = collectionNo;
  sub_2213A04(p_sortStr1, v25, v15, v16, v17, v18, v19, v20);
  p_sortStr1->monitor = 0;
  return 1;
}


GachaBonusSelectLineupEntity_o *BonusSelectSummonPartyServantListViewItem__get_GachaBonusSelectLineupEntity(
        BonusSelectSummonPartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.lineupEntity;
}


IconLabelInfo_o *BonusSelectSummonPartyServantListViewItem__get_IconLabelInfo(
        BonusSelectSummonPartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo;
}


bool BonusSelectSummonPartyServantListViewItem__get_IsBase(
        BonusSelectSummonPartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9

  servantEntity = this->fields.servantEntity;
  return servantEntity && (baseItem = this->fields.baseItem) != 0 && servantEntity == baseItem->fields.servantEntity;
}


bool BonusSelectSummonPartyServantListViewItem__get_IsPossibleSelect(
        BonusSelectSummonPartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isPossibleSelect;
}


ServantEntity_o *BonusSelectSummonPartyServantListViewItem__get_ServantEntity(
        BonusSelectSummonPartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


void BonusSelectSummonPartyServantListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C993 & 1) == 0 )
  {
    sub_2213A60(&BonusSelectSummonPartyServantListViewItem___c_TypeInfo);
    byte_596C993 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BonusSelectSummonPartyServantListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BonusSelectSummonPartyServantListViewItem___c_TypeInfo->static_fields->__9 = (struct BonusSelectSummonPartyServantListViewItem___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BonusSelectSummonPartyServantListViewItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BonusSelectSummonPartyServantListViewItem___c___ctor(
        BonusSelectSummonPartyServantListViewItem___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BonusSelectSummonPartyServantListViewItem___c____ctor_b__10_0(
        BonusSelectSummonPartyServantListViewItem___c_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return entity->fields.treasureDeviceLv1;
}