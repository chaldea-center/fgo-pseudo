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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct ServantEntity_o **p_servantEntity; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  Il2CppObject *Master_object; // x24
  __int64 v34; // x23
  __int64 v35; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // kr00_16
  void *Instance; // x0
  __int64 v38; // x1
  bool v39; // w25
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_Collections_Generic_List_UserServantEntity__o *v46; // x22
  BonusSelectSummonPartyServantListViewItem___c_c *v47; // x0
  System_Func_object__int__o *_9__10_0; // x23
  Il2CppObject *v49; // x24
  struct BonusSelectSummonPartyServantListViewItem___c_StaticFields *static_fields; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  Il2CppObject *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  struct ServantEntity_o *v65; // x8
  ServantLimitMaster_o *v66; // x20
  __int64 v67; // x21
  __int64 v68; // x22
  Il2CppObject *v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  if ( (byte_4CEA992 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_1C7BAE8(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1C7BAE8(&IconLabelInfo_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_BonusSelectSummonPartyServantListViewItem___c___ctor_b__10_0__);
    sub_1C7BAE8(&BonusSelectSummonPartyServantListViewItem___c_TypeInfo);
    byte_4CEA992 = 1;
  }
  userServantList = 0;
  v13 = (IconLabelInfo_o *)sub_1C7BD34(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0);
  this->fields.iconLabelInfo = v13;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  ListViewItem___ctor_44325320((ListViewItem_o *)this, index, 0);
  this->fields.lineupEntity = lineupEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.lineupEntity,
    (int32_t)lineupEntity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.servantEntity = servantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantEntity,
    (int32_t)servantEntity,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( servantEntity )
  {
    v35 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v34 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
    v35 = *(_QWORD *)&v36.fields.currentCryptoKey;
    v34 = *(_QWORD *)&v36.fields.fakeValue;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v77.fields.currentCryptoKey = v35;
  *(_QWORD *)&v77.fields.fakeValue = v34;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v77, 0);
  if ( !Master_object )
    goto LABEL_30;
  v39 = isPossibleSelect;
  if ( UserServantMaster__TryGetEntityListBySvtId(
         (UserServantMaster_o *)Master_object,
         &userServantList,
         (int32_t)Instance,
         1,
         0) )
  {
    v46 = userServantList;
    v47 = BonusSelectSummonPartyServantListViewItem___c_TypeInfo;
    if ( !BonusSelectSummonPartyServantListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewItem___c_TypeInfo);
      v47 = BonusSelectSummonPartyServantListViewItem___c_TypeInfo;
    }
    _9__10_0 = (System_Func_object__int__o *)v47->static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( !v47->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v47);
        v47 = BonusSelectSummonPartyServantListViewItem___c_TypeInfo;
      }
      v49 = (Il2CppObject *)v47->static_fields->__9;
      _9__10_0 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_UserServantEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__10_0,
        v49,
        Method_BonusSelectSummonPartyServantListViewItem___c___ctor_b__10_0__,
        0);
      static_fields = BonusSelectSummonPartyServantListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__10_0 = (struct System_Func_UserServantEntity__int__o *)_9__10_0;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__10_0,
        (int32_t)_9__10_0,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
    }
    v57 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v46,
                                                                 (System_Func_TSource__TKey__o *)_9__10_0,
                                                                 (const MethodInfo_319F4D8 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v58 = System_Linq_Enumerable__FirstOrDefault_object_(
            v57,
            (const MethodInfo_3197A00 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    this->fields.userServantEntity = (struct UserServantEntity_o *)v58;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity,
      (int32_t)v58,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
  }
  this->fields.baseItem = baseItem;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.baseItem, (int32_t)baseItem, v40, v41, v42, v43, v44, v45);
  this->fields.isPossibleSelect = v39;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v65 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_30;
  v66 = (ServantLimitMaster_o *)Instance;
  v68 = *(_QWORD *)&v65->fields.id.fields.currentCryptoKey;
  v67 = *(_QWORD *)&v65->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v78.fields.currentCryptoKey = v68;
  *(_QWORD *)&v78.fields.fakeValue = v67;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v78, 0);
  if ( !v66 || (Instance = ServantLimitMaster__GetEntity(v66, (int32_t)Instance, 0, 0)) == 0 )
LABEL_30:
    sub_1C7BD40(Instance, v38);
  this->fields.rarityId = *((_DWORD *)Instance + 6);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v69 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  this->fields.svtTdMaster = (struct ServantTreasureDvcMaster_o *)v69;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.svtTdMaster, (int32_t)v69, v70, v71, v72, v73, v74, v75);
}


void BonusSelectSummonPartyServantListViewItem__GetTdInfo(
        BonusSelectSummonPartyServantListViewItem_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewItem_o *v6; // x21
  struct ServantEntity_o *servantEntity; // x8
  ServantTreasureDvcMaster_o *svtTdMaster; // x22
  __int64 v9; // x23
  __int64 v10; // x24
  UserServantEntity_o *userServantEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v6 = this;
  if ( (byte_4CEA996 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewItem_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEA996 = 1;
  }
  *tdLv = 0;
  servantEntity = v6->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_11;
  svtTdMaster = v6->fields.svtTdMaster;
  v10 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v9 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v10;
  *(_QWORD *)&v12.fields.fakeValue = v9;
  this = (BonusSelectSummonPartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                          v12,
                                                          0);
  if ( !svtTdMaster
    || (this = (BonusSelectSummonPartyServantListViewItem_o *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                                                svtTdMaster,
                                                                (int32_t)this,
                                                                1,
                                                                0)) == 0 )
  {
LABEL_11:
    sub_1C7BD40(this, tdLv);
  }
  *tdMaxLv = ServantTreasureDvcEntity__getLevelMax((ServantTreasureDvcEntity_o *)this, 0);
  userServantEntity = v6->fields.userServantEntity;
  if ( userServantEntity )
    UserServantEntity__getTreasureDeviceInfo_43714172(userServantEntity, tdLv, tdMaxLv, 0);
}


void BonusSelectSummonPartyServantListViewItem__InitAfterSecondSort(
        BonusSelectSummonPartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewItem_o *v2; // x19
  struct ServantEntity_o *servantEntity; // x8
  __int64 rarityId; // x20
  __int64 collectionNo; // x21
  struct ServantEntity_o *v6; // x8
  struct ServantEntity_o *v7; // x8
  __int64 v8; // x20
  __int64 v9; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v2 = this;
  if ( (byte_4CEA995 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    this = (BonusSelectSummonPartyServantListViewItem_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEA995 = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_13;
  rarityId = (unsigned int)v2->fields.rarityId;
  collectionNo = servantEntity->fields.collectionNo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BonusSelectSummonPartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v6 = v2->fields.servantEntity;
  if ( !v6
    || !this
    || (this = (BonusSelectSummonPartyServantListViewItem_o *)DataMasterBase_object__object__int___GetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                v6->fields.classId,
                                                                (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0
    || (v7 = v2->fields.servantEntity,
        v2->fields.sortValue1B = SHIDWORD(this->fields.sortValue1),
        v2->fields.sortValue2 = (collectionNo << 16) | (rarityId << 48),
        !v7) )
  {
LABEL_13:
    sub_1C7BD40(this, method);
  }
  v9 = *(_QWORD *)&v7->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&v7->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v9;
  *(_QWORD *)&v10.fields.fakeValue = v8;
  v2->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v10, 0);
}


bool BonusSelectSummonPartyServantListViewItem__IsMatchFilter(
        BonusSelectSummonPartyServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  __int64 CollectionStateFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x8
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  struct BonusSelectSummonPartyOrganizationListViewItem_o *v14; // x8
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x0
  UserServantEntity_o *userServantEntity; // x0
  UserServantEntity_o *v23; // x8
  System_Int32_array *v24; // x20
  System_Int32_array *SkillCategoryIdList; // x0
  ServantEntity_o *servantEntity; // x8
  System_Int32_array *v27; // x21
  _BOOL4 IsUnSelectedAllTargetFilters; // w22
  _BOOL4 v29; // w23
  _BOOL4 IsMatchEffectCategory; // w20
  _BOOL4 v31; // w0

  if ( (byte_4CEA993 & 1) == 0 )
  {
    sub_1C7BAE8(&FilterKindList_TypeInfo);
    sub_1C7BAE8(&ListViewSort_FilterKind___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4CEA993 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v5->static_fields->CollectionStateFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_66;
  CollectionStateFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                             (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_66;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(
          sort,
          (ListViewSort_FilterKind_array *)CollectionStateFilterKindList,
          0)
    && !ListViewSort__IsMatchServantCollectionStatus(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v7->static_fields->ServantHaveFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_66;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                          (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0)
    && !ListViewSort__IsMatchServantPossessionStatus(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v9->static_fields->ServantSummonCategoryFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_66;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                           (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  CollectionStateFilterKindList = ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0);
  if ( (CollectionStateFilterKindList & 1) == 0 )
  {
    CollectionStateFilterKindList = ListViewSort__IsMatchServantSummonCategory(sort, this->fields.lineupEntity, 0);
    if ( (CollectionStateFilterKindList & 1) == 0 )
      return 0;
  }
  baseItem = this->fields.baseItem;
  if ( !baseItem )
    goto LABEL_66;
  CollectionStateFilterKindList = (__int64)baseItem->fields.gachaBonusSelectEntity;
  if ( !CollectionStateFilterKindList )
    goto LABEL_66;
  CollectionStateFilterKindList = GachaBonusSelectEntity__GetClassId(
                                    (GachaBonusSelectEntity_o *)CollectionStateFilterKindList,
                                    1001,
                                    0);
  if ( (_DWORD)CollectionStateFilterKindList == 1004 )
  {
    v12 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v12 = FilterKindList_TypeInfo;
    }
    CollectionStateFilterKindList = (__int64)v12->static_fields->ClassExtra1FilterKindList;
    if ( !CollectionStateFilterKindList )
      goto LABEL_66;
    v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                             (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0)
      && !ListViewSort__IsMatchClassExtra1Filter(sort, this->fields.servantEntity, 0) )
    {
      return 0;
    }
  }
  else
  {
    v14 = this->fields.baseItem;
    if ( !v14 )
      goto LABEL_66;
    CollectionStateFilterKindList = (__int64)v14->fields.gachaBonusSelectEntity;
    if ( !CollectionStateFilterKindList )
      goto LABEL_66;
    if ( GachaBonusSelectEntity__GetClassId((GachaBonusSelectEntity_o *)CollectionStateFilterKindList, 1001, 0) == 1005 )
    {
      v15 = FilterKindList_TypeInfo;
      if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v15 = FilterKindList_TypeInfo;
      }
      CollectionStateFilterKindList = (__int64)v15->static_fields->ClassExtra2FilterKindList;
      if ( !CollectionStateFilterKindList )
        goto LABEL_66;
      v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                               (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                               (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0)
        && !ListViewSort__IsMatchClassExtra2Filter(sort, this->fields.servantEntity, 0) )
      {
        return 0;
      }
    }
  }
  v17 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v17 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v17->static_fields->NpTypeFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_66;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                           (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0)
    && !ListViewSort__IsMatchNPTypeFilter_44400344(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v19 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v19->static_fields->NpEffectFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_66;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                           (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0)
    && !ListViewSort__IsMatchNPEffectFilter_44400952(sort, this->fields.servantEntity, 0) )
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
    v23 = this->fields.userServantEntity;
    if ( !v23 )
      goto LABEL_66;
    v24 = (System_Int32_array *)CollectionStateFilterKindList;
    SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v23, 1, -1, 0);
  }
  else
  {
    CollectionStateFilterKindList = (__int64)this->fields.servantEntity;
    if ( !CollectionStateFilterKindList )
      goto LABEL_66;
    CollectionStateFilterKindList = (__int64)ServantEntity__GetTreasureDeviceCategoryIdList(
                                               (ServantEntity_o *)CollectionStateFilterKindList,
                                               0);
    servantEntity = this->fields.servantEntity;
    if ( !servantEntity )
      goto LABEL_66;
    v24 = (System_Int32_array *)CollectionStateFilterKindList;
    SkillCategoryIdList = ServantEntity__GetSkillCategoryIdList(servantEntity, 1, 0);
  }
  v27 = SkillCategoryIdList;
  CollectionStateFilterKindList = sub_1C7BB90(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !CollectionStateFilterKindList )
    goto LABEL_66;
  if ( !*(_DWORD *)(CollectionStateFilterKindList + 24) )
    goto LABEL_67;
  *(_DWORD *)(CollectionStateFilterKindList + 32) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)CollectionStateFilterKindList,
                                   0);
  CollectionStateFilterKindList = sub_1C7BB90(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !CollectionStateFilterKindList )
LABEL_66:
    sub_1C7BD40(CollectionStateFilterKindList, sort);
  if ( !*(_DWORD *)(CollectionStateFilterKindList + 24) )
LABEL_67:
    sub_1C7BD48(CollectionStateFilterKindList);
  *(_DWORD *)(CollectionStateFilterKindList + 32) = 51;
  v29 = ListViewSort__IsUnSelectedAllTargetFilters(
          sort,
          (ListViewSort_FilterKind_array *)CollectionStateFilterKindList,
          0);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(v24, sort, 0);
  v31 = ServantEquipEffectFilterController__IsMatchEffectCategory(v27, sort, 0);
  if ( ((IsUnSelectedAllTargetFilters ^ v29) & 1) != 0 )
  {
    if ( IsUnSelectedAllTargetFilters )
    {
      if ( v31 )
        return 1;
    }
    else if ( IsMatchEffectCategory )
    {
      return 1;
    }
  }
  else if ( IsMatchEffectCategory || v31 )
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
  IconLabelInfo_o *iconLabelInfo; // x21
  int32_t v10; // w22
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t sortKind; // w8
  struct ServantEntity_o *v21; // x8
  int32_t v22; // w1
  GrandQuestFolderBoardItem_o *p_sortStr1; // x19
  int32_t tdMaxLv[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CEA994 & 1) == 0 )
  {
    sub_1C7BAE8(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    sub_1C7BAE8(&System_Math_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEA994 = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  servantEntity = this->fields.servantEntity;
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
  v10 = tdMaxLv[1];
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v11 = System_Math__Max_65698740(v10, 1, 0);
  if ( !iconLabelInfo )
    goto LABEL_18;
  IconLabelInfo__Set_41483756(iconLabelInfo, 33, v11, tdMaxLv[0], 0, 0, 0, 0, 0, 0);
  if ( !sort )
    goto LABEL_18;
  sortKind = sort->fields.sortKind;
  if ( sortKind != 27 )
  {
    if ( sortKind == 4 )
      this->fields.sortValue1 = tdMaxLv[1];
    return 1;
  }
  v21 = this->fields.servantEntity;
  this->fields.sortValue0B = 0;
  if ( !v21 )
LABEL_18:
    sub_1C7BD40(v11, v12);
  this->fields.sortValue1 = v21->fields.collectionNo;
  v22 = StringLiteral_1/*""*/;
  this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
  p_sortStr1 = (GrandQuestFolderBoardItem_o *)&this->fields.sortStr1;
  sub_1C7BA8C(p_sortStr1, v22, v13, v14, v15, v16, v17, v18);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEA997 & 1) == 0 )
  {
    sub_1C7BAE8(&BonusSelectSummonPartyServantListViewItem___c_TypeInfo);
    byte_4CEA997 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(BonusSelectSummonPartyServantListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BonusSelectSummonPartyServantListViewItem___c_TypeInfo->static_fields->__9 = (struct BonusSelectSummonPartyServantListViewItem___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)BonusSelectSummonPartyServantListViewItem___c_TypeInfo->static_fields,
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
    sub_1C7BD40(this, 0);
  return entity->fields.treasureDeviceLv1;
}