// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewItem___ctor(
        BonusSelectSummonPartyServantListViewItem_o *this,
        int32_t index,
        ServantEntity_o *servantEntity,
        GachaBonusSelectLineupEntity_o *lineupEntity,
        BonusSelectSummonPartyOrganizationListViewItem_o *baseItem,
        bool isPossibleSelect,
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  IconLabelInfo_o *v35; // x25
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct ServantEntity_o **p_servantEntity; // x21
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x1
  __int64 v56; // x1
  Il2CppObject *Master_object; // x24
  __int64 v58; // x23
  __int64 v59; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // kr00_16
  void *Instance; // x0
  __int64 v62; // x1
  bool v63; // w25
  __int64 v64; // x1
  int64_t v65; // x2
  __int64 v66; // x3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  System_Collections_Generic_List_UserServantEntity__o *v71; // x22
  BonusSelectSummonPartyServantListViewItem___c_c *v72; // x0
  System_Func_object__int__o *_9__10_0; // x23
  Il2CppObject *v74; // x24
  struct BonusSelectSummonPartyServantListViewItem___c_StaticFields *static_fields; // x0
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x0
  Il2CppObject *v83; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  struct ServantEntity_o *v90; // x8
  ServantLimitMaster_o *v91; // x20
  __int64 v92; // x21
  __int64 v93; // x22
  Il2CppObject *v94; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16

  if ( (byte_4B12865 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index, servantEntity);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v19, v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v21, v22);
    sub_1BCA7E0(&System_Func_UserServantEntity__int__TypeInfo, v23, v24);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v25, v26);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&Method_BonusSelectSummonPartyServantListViewItem___c___ctor_b__10_0__, v31, v32);
    sub_1BCA7E0(&BonusSelectSummonPartyServantListViewItem___c_TypeInfo, v33, v34);
    byte_4B12865 = 1;
  }
  userServantList = 0LL;
  v35 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, *(_QWORD *)&index, servantEntity, lineupEntity);
  IconLabelInfo___ctor(v35, 0LL);
  this->fields.iconLabelInfo = v35;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo, (int64_t)v35, v36, v37, v38, v39, v40, v41);
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.lineupEntity = lineupEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.lineupEntity,
    (int64_t)lineupEntity,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.servantEntity = servantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantEntity,
    (int64_t)servantEntity,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v55);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( servantEntity )
  {
    v59 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v58 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v56);
    v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
    v56 = *(_QWORD *)&v60.fields.fakeValue;
    v58 = *(_QWORD *)&v60.fields.fakeValue;
    v59 = *(_QWORD *)&v60.fields.currentCryptoKey;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v56);
  *(_QWORD *)&v102.fields.currentCryptoKey = v59;
  *(_QWORD *)&v102.fields.fakeValue = v58;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v102, 0LL);
  if ( !Master_object )
    goto LABEL_30;
  v63 = isPossibleSelect;
  if ( UserServantMaster__TryGetEntityListBySvtId(
         (UserServantMaster_o *)Master_object,
         &userServantList,
         (int32_t)Instance,
         1,
         0LL) )
  {
    v71 = userServantList;
    v72 = BonusSelectSummonPartyServantListViewItem___c_TypeInfo;
    if ( !BonusSelectSummonPartyServantListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewItem___c_TypeInfo, v64);
      v72 = BonusSelectSummonPartyServantListViewItem___c_TypeInfo;
    }
    _9__10_0 = (System_Func_object__int__o *)v72->static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( !v72->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v72, v64);
        v72 = BonusSelectSummonPartyServantListViewItem___c_TypeInfo;
      }
      v74 = (Il2CppObject *)v72->static_fields->__9;
      _9__10_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_UserServantEntity__int__TypeInfo, v64, v65, v66);
      System_Func_object__int____ctor(
        _9__10_0,
        v74,
        Method_BonusSelectSummonPartyServantListViewItem___c___ctor_b__10_0__,
        0LL);
      static_fields = BonusSelectSummonPartyServantListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__10_0 = (struct System_Func_UserServantEntity__int__o *)_9__10_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
        (int64_t)_9__10_0,
        v76,
        v77,
        v78,
        v79,
        v80,
        v81);
    }
    v82 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v71,
                                                                 (System_Func_TSource__TKey__o *)_9__10_0,
                                                                 (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v83 = System_Linq_Enumerable__FirstOrDefault_object_(
            v82,
            (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    this->fields.userServantEntity = (struct UserServantEntity_o *)v83;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
      (int64_t)v83,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89);
  }
  this->fields.baseItem = baseItem;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseItem, (int64_t)baseItem, v65, v66, v67, v68, v69, v70);
  this->fields.isPossibleSelect = v63;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v90 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_30;
  v91 = (ServantLimitMaster_o *)Instance;
  v93 = *(_QWORD *)&v90->fields.id.fields.currentCryptoKey;
  v92 = *(_QWORD *)&v90->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v62);
  *(_QWORD *)&v103.fields.currentCryptoKey = v93;
  *(_QWORD *)&v103.fields.fakeValue = v92;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v103, 0LL);
  if ( !v91 || (Instance = ServantLimitMaster__GetEntity(v91, (int32_t)Instance, 0, 0LL)) == 0LL )
LABEL_30:
    sub_1BCAA3C(Instance, v62);
  this->fields.rarityId = *((_DWORD *)Instance + 6);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v62);
  v94 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  this->fields.svtTdMaster = (struct ServantTreasureDvcMaster_o *)v94;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtTdMaster, (int64_t)v94, v95, v96, v97, v98, v99, v100);
}


void __fastcall BonusSelectSummonPartyServantListViewItem__GetTdInfo(
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
  if ( (byte_4B12869 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewItem_o *)sub_1BCA7E0(
                                                            &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                            tdLv,
                                                            tdMaxLv);
    byte_4B12869 = 1;
  }
  *tdLv = 0;
  servantEntity = v6->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_11;
  svtTdMaster = v6->fields.svtTdMaster;
  v10 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v9 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, tdLv);
  *(_QWORD *)&v12.fields.currentCryptoKey = v10;
  *(_QWORD *)&v12.fields.fakeValue = v9;
  this = (BonusSelectSummonPartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                          v12,
                                                          0LL);
  if ( !svtTdMaster
    || (this = (BonusSelectSummonPartyServantListViewItem_o *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                                                svtTdMaster,
                                                                (int32_t)this,
                                                                1,
                                                                0LL)) == 0LL )
  {
LABEL_11:
    sub_1BCAA3C(this, tdLv);
  }
  *tdMaxLv = ServantTreasureDvcEntity__getLevelMax((ServantTreasureDvcEntity_o *)this, 0LL);
  userServantEntity = v6->fields.userServantEntity;
  if ( userServantEntity )
    UserServantEntity__getTreasureDeviceInfo_40943792(userServantEntity, tdLv, tdMaxLv, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewItem__InitAfterSecondSort(
        BonusSelectSummonPartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BonusSelectSummonPartyServantListViewItem_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct ServantEntity_o *servantEntity; // x8
  __int64 rarityId; // x20
  __int64 collectionNo; // x21
  struct ServantEntity_o *v13; // x8
  struct ServantEntity_o *v14; // x8
  __int64 v15; // x20
  __int64 v16; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v3 = this;
  if ( (byte_4B12868 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantClassMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v6, v7);
    this = (BonusSelectSummonPartyServantListViewItem_o *)sub_1BCA7E0(
                                                            &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                            v8,
                                                            v9);
    byte_4B12868 = 1;
  }
  servantEntity = v3->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_13;
  rarityId = (unsigned int)v3->fields.rarityId;
  collectionNo = servantEntity->fields.collectionNo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  this = (BonusSelectSummonPartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantClassMaster___);
  v13 = v3->fields.servantEntity;
  if ( !v13
    || !this
    || (this = (BonusSelectSummonPartyServantListViewItem_o *)DataMasterBase_object__object__int___GetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                v13->fields.classId,
                                                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0LL
    || (v14 = v3->fields.servantEntity,
        v3->fields.sortValue1B = SHIDWORD(this->fields.sortValue1),
        v3->fields.sortValue2 = (collectionNo << 16) | (rarityId << 48),
        !v14) )
  {
LABEL_13:
    sub_1BCAA3C(this, method);
  }
  v16 = *(_QWORD *)&v14->fields.id.fields.currentCryptoKey;
  v15 = *(_QWORD *)&v14->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v17.fields.currentCryptoKey = v16;
  *(_QWORD *)&v17.fields.fakeValue = v15;
  v3->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v17, 0LL);
}


bool __fastcall BonusSelectSummonPartyServantListViewItem__IsMatchFilter(
        BonusSelectSummonPartyServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  FilterKindList_c *v9; // x0
  __int64 CollectionStateFilterKindList; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x8
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x0
  struct BonusSelectSummonPartyOrganizationListViewItem_o *v18; // x8
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x0
  FilterKindList_c *v21; // x0
  ListViewSort_FilterKind_array *v22; // x0
  FilterKindList_c *v23; // x0
  ListViewSort_FilterKind_array *v24; // x0
  UserServantEntity_o *userServantEntity; // x0
  UserServantEntity_o *v27; // x8
  System_Int32_array *v28; // x20
  System_Int32_array *SkillCategoryIdList; // x0
  ServantEntity_o *servantEntity; // x8
  System_Int32_array *v31; // x21
  __int64 v32; // x1
  _BOOL4 IsUnSelectedAllTargetFilters; // w22
  _BOOL4 v34; // w23
  _BOOL4 IsMatchEffectCategory; // w20
  _BOOL4 v36; // w0

  if ( (byte_4B12866 & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, sort, method);
    sub_1BCA7E0(&ListViewSort_FilterKind___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v7, v8);
    byte_4B12866 = 1;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v9 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v9->static_fields->CollectionStateFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_66;
  CollectionStateFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                             (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_66;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(
          sort,
          (ListViewSort_FilterKind_array *)CollectionStateFilterKindList,
          0LL)
    && !ListViewSort__IsMatchServantCollectionStatus(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v11 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v11->static_fields->ServantHaveFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_66;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchServantPossessionStatus(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v13 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v13->static_fields->ServantSummonCategoryFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_66;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  CollectionStateFilterKindList = ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL);
  if ( (CollectionStateFilterKindList & 1) == 0 )
  {
    CollectionStateFilterKindList = ListViewSort__IsMatchServantSummonCategory(sort, this->fields.lineupEntity, 0LL);
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
                                    0LL);
  if ( (_DWORD)CollectionStateFilterKindList == 1004 )
  {
    v16 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
      v16 = FilterKindList_TypeInfo;
    }
    CollectionStateFilterKindList = (__int64)v16->static_fields->ClassExtra1FilterKindList;
    if ( !CollectionStateFilterKindList )
      goto LABEL_66;
    v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                             (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL)
      && !ListViewSort__IsMatchClassExtra1Filter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else
  {
    v18 = this->fields.baseItem;
    if ( !v18 )
      goto LABEL_66;
    CollectionStateFilterKindList = (__int64)v18->fields.gachaBonusSelectEntity;
    if ( !CollectionStateFilterKindList )
      goto LABEL_66;
    if ( GachaBonusSelectEntity__GetClassId((GachaBonusSelectEntity_o *)CollectionStateFilterKindList, 1001, 0LL) == 1005 )
    {
      v19 = FilterKindList_TypeInfo;
      if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
        v19 = FilterKindList_TypeInfo;
      }
      CollectionStateFilterKindList = (__int64)v19->static_fields->ClassExtra2FilterKindList;
      if ( !CollectionStateFilterKindList )
        goto LABEL_66;
      v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                               (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                               (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
        && !ListViewSort__IsMatchClassExtra2Filter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
    }
  }
  v21 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v21 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v21->static_fields->NpTypeFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_66;
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter_41521872(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v23 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v23 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v23->static_fields->NpEffectFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_66;
  v24 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v24, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter_41522480(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
    return 1;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    CollectionStateFilterKindList = (__int64)UserServantEntity__GetTreasureDeviceCategoryIdList(
                                               userServantEntity,
                                               1,
                                               0LL);
    v27 = this->fields.userServantEntity;
    if ( !v27 )
      goto LABEL_66;
    v28 = (System_Int32_array *)CollectionStateFilterKindList;
    SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v27, 1, 0LL);
  }
  else
  {
    CollectionStateFilterKindList = (__int64)this->fields.servantEntity;
    if ( !CollectionStateFilterKindList )
      goto LABEL_66;
    CollectionStateFilterKindList = (__int64)ServantEntity__GetTreasureDeviceCategoryIdList(
                                               (ServantEntity_o *)CollectionStateFilterKindList,
                                               0LL);
    servantEntity = this->fields.servantEntity;
    if ( !servantEntity )
      goto LABEL_66;
    v28 = (System_Int32_array *)CollectionStateFilterKindList;
    SkillCategoryIdList = ServantEntity__GetSkillCategoryIdList(servantEntity, 1, 0LL);
  }
  v31 = SkillCategoryIdList;
  CollectionStateFilterKindList = sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !CollectionStateFilterKindList )
    goto LABEL_66;
  v32 = CollectionStateFilterKindList;
  if ( !*(_DWORD *)(CollectionStateFilterKindList + 24) )
    goto LABEL_67;
  *(_DWORD *)(CollectionStateFilterKindList + 32) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)CollectionStateFilterKindList,
                                   0LL);
  CollectionStateFilterKindList = sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !CollectionStateFilterKindList )
LABEL_66:
    sub_1BCAA3C(CollectionStateFilterKindList, sort);
  v32 = CollectionStateFilterKindList;
  if ( !*(_DWORD *)(CollectionStateFilterKindList + 24) )
LABEL_67:
    sub_1BCAA44(CollectionStateFilterKindList, v32);
  *(_DWORD *)(CollectionStateFilterKindList + 32) = 51;
  v34 = ListViewSort__IsUnSelectedAllTargetFilters(
          sort,
          (ListViewSort_FilterKind_array *)CollectionStateFilterKindList,
          0LL);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(v28, sort, 0LL);
  v36 = ServantEquipEffectFilterController__IsMatchEffectCategory(v31, sort, 0LL);
  if ( ((IsUnSelectedAllTargetFilters ^ v34) & 1) != 0 )
  {
    if ( IsUnSelectedAllTargetFilters )
    {
      if ( v36 )
        return 1;
    }
    else if ( IsMatchEffectCategory )
    {
      return 1;
    }
  }
  else if ( IsMatchEffectCategory || v36 )
  {
    return 1;
  }
  return 0;
}


bool __fastcall BonusSelectSummonPartyServantListViewItem__SetSortValue(
        BonusSelectSummonPartyServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct ServantEntity_o *servantEntity; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9
  int64_t PRIORITY_NORMAL; // x8
  const MethodInfo *v12; // x3
  __int64 v13; // x1
  IconLabelInfo_o *iconLabelInfo; // x21
  int32_t v15; // w22
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int32_t sortKind; // w8
  struct ServantEntity_o *v26; // x8
  void *v27; // x1
  PartyOrganizationUtility_o *p_sortStr1; // x19
  int32_t tdMaxLv[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B12867 & 1) == 0 )
  {
    sub_1BCA7E0(&BonusSelectSummonPartyServantListViewItem_TypeInfo, sort, method);
    sub_1BCA7E0(&System_Math_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B12867 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  servantEntity = this->fields.servantEntity;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  if ( (!servantEntity || (baseItem = this->fields.baseItem) == 0LL || servantEntity != baseItem->fields.servantEntity)
    && (((__int64 (__fastcall *)(BonusSelectSummonPartyServantListViewItem_o *, ListViewSort_o *, void *))this->klass->vtable._5_IsMatchFilter.method)(
          this,
          sort,
          this->klass[1]._1.image) & 1) == 0 )
  {
    return 0;
  }
  PRIORITY_NORMAL = BonusSelectSummonPartyServantListViewItem_TypeInfo->static_fields->PRIORITY_NORMAL;
  this->fields.sortValue0 = PRIORITY_NORMAL;
  this->fields.sortValue0B = PRIORITY_NORMAL;
  BonusSelectSummonPartyServantListViewItem__InitAfterSecondSort(this, (const MethodInfo *)sort);
  BonusSelectSummonPartyServantListViewItem__GetTdInfo(this, &tdMaxLv[1], tdMaxLv, v12);
  iconLabelInfo = this->fields.iconLabelInfo;
  v15 = tdMaxLv[1];
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13);
  v16 = System_Math__Max_63220196(v15, 1, 0LL);
  if ( !iconLabelInfo )
    goto LABEL_18;
  IconLabelInfo__Set_38850420(iconLabelInfo, 33, v16, tdMaxLv[0], 0, 0, 0, 0, 0LL);
  if ( !sort )
    goto LABEL_18;
  sortKind = sort->fields.sortKind;
  if ( sortKind != 27 )
  {
    if ( sortKind == 4 )
      this->fields.sortValue1 = tdMaxLv[1];
    return 1;
  }
  v26 = this->fields.servantEntity;
  this->fields.sortValue0B = 0LL;
  if ( !v26 )
LABEL_18:
    sub_1BCAA3C(v16, v17);
  this->fields.sortValue1 = v26->fields.collectionNo;
  v27 = StringLiteral_1/*""*/;
  this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
  p_sortStr1 = (PartyOrganizationUtility_o *)&this->fields.sortStr1;
  sub_1BCA784(p_sortStr1, (int64_t)v27, v18, v19, v20, v21, v22, v23);
  p_sortStr1->monitor = 0LL;
  return 1;
}


GachaBonusSelectLineupEntity_o *__fastcall BonusSelectSummonPartyServantListViewItem__get_GachaBonusSelectLineupEntity(
        BonusSelectSummonPartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.lineupEntity;
}


IconLabelInfo_o *__fastcall BonusSelectSummonPartyServantListViewItem__get_IconLabelInfo(
        BonusSelectSummonPartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo;
}


bool __fastcall BonusSelectSummonPartyServantListViewItem__get_IsBase(
        BonusSelectSummonPartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9

  servantEntity = this->fields.servantEntity;
  return servantEntity && (baseItem = this->fields.baseItem) != 0LL && servantEntity == baseItem->fields.servantEntity;
}


bool __fastcall BonusSelectSummonPartyServantListViewItem__get_IsPossibleSelect(
        BonusSelectSummonPartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isPossibleSelect;
}


ServantEntity_o *__fastcall BonusSelectSummonPartyServantListViewItem__get_ServantEntity(
        BonusSelectSummonPartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


UserServantEntity_o *__fastcall BonusSelectSummonPartyServantListViewItem__get_UserServant(
        BonusSelectSummonPartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


void __fastcall BonusSelectSummonPartyServantListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1286A & 1) == 0 )
  {
    sub_1BCA7E0(&BonusSelectSummonPartyServantListViewItem___c_TypeInfo, v1, v2);
    byte_4B1286A = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BonusSelectSummonPartyServantListViewItem___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BonusSelectSummonPartyServantListViewItem___c_TypeInfo->static_fields->__9 = (struct BonusSelectSummonPartyServantListViewItem___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BonusSelectSummonPartyServantListViewItem___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BonusSelectSummonPartyServantListViewItem___c___ctor(
        BonusSelectSummonPartyServantListViewItem___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BonusSelectSummonPartyServantListViewItem___c____ctor_b__10_0(
        BonusSelectSummonPartyServantListViewItem___c_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}