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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  IconLabelInfo_o *v24; // x25
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct ServantEntity_o **p_servantEntity; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  Il2CppObject *Master_object; // x24
  __int64 v45; // x23
  __int64 v46; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // kr00_16
  void *Instance; // x0
  __int64 v49; // x1
  bool v50; // w25
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_Collections_Generic_List_UserServantEntity__o *v57; // x22
  BonusSelectSummonPartyServantListViewItem___c_c *v58; // x0
  System_Func_object__int__o *_9__10_0; // x23
  Il2CppObject *v60; // x24
  struct BonusSelectSummonPartyServantListViewItem___c_StaticFields *static_fields; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  Il2CppObject *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct ServantEntity_o *v76; // x8
  ServantLimitMaster_o *v77; // x20
  __int64 v78; // x21
  __int64 v79; // x22
  Il2CppObject *v80; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16

  if ( (byte_4BB0CD9 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v13);
    sub_1C13D24(&Method_DataManager_GetMaster_UserServantMaster___, v14);
    sub_1C13D24(&DataManager_TypeInfo, v15);
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v16);
    sub_1C13D24(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v17);
    sub_1C13D24(&System_Func_UserServantEntity__int__TypeInfo, v18);
    sub_1C13D24(&IconLabelInfo_TypeInfo, v19);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1C13D24(&Method_BonusSelectSummonPartyServantListViewItem___c___ctor_b__10_0__, v22);
    sub_1C13D24(&BonusSelectSummonPartyServantListViewItem___c_TypeInfo, v23);
    byte_4BB0CD9 = 1;
  }
  userServantList = 0LL;
  v24 = (IconLabelInfo_o *)sub_1C13F70(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0LL);
  this->fields.iconLabelInfo = v24;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  ListViewItem___ctor_41884928((ListViewItem_o *)this, index, 0LL);
  this->fields.lineupEntity = lineupEntity;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.lineupEntity,
    (int64_t)lineupEntity,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.servantEntity = servantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.servantEntity,
    (int64_t)servantEntity,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( servantEntity )
  {
    v46 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v45 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
    v45 = *(_QWORD *)&v47.fields.fakeValue;
    v46 = *(_QWORD *)&v47.fields.currentCryptoKey;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v88.fields.currentCryptoKey = v46;
  *(_QWORD *)&v88.fields.fakeValue = v45;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v88, 0LL);
  if ( !Master_object )
    goto LABEL_30;
  v50 = isPossibleSelect;
  if ( UserServantMaster__TryGetEntityListBySvtId(
         (UserServantMaster_o *)Master_object,
         &userServantList,
         (int32_t)Instance,
         1,
         0LL) )
  {
    v57 = userServantList;
    v58 = BonusSelectSummonPartyServantListViewItem___c_TypeInfo;
    if ( !BonusSelectSummonPartyServantListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewItem___c_TypeInfo);
      v58 = BonusSelectSummonPartyServantListViewItem___c_TypeInfo;
    }
    _9__10_0 = (System_Func_object__int__o *)v58->static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( !v58->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v58);
        v58 = BonusSelectSummonPartyServantListViewItem___c_TypeInfo;
      }
      v60 = (Il2CppObject *)v58->static_fields->__9;
      _9__10_0 = (System_Func_object__int__o *)sub_1C13F70(System_Func_UserServantEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__10_0,
        v60,
        Method_BonusSelectSummonPartyServantListViewItem___c___ctor_b__10_0__,
        0LL);
      static_fields = BonusSelectSummonPartyServantListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__10_0 = (struct System_Func_UserServantEntity__int__o *)_9__10_0;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
        (int64_t)_9__10_0,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
    }
    v68 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v57,
                                                                 (System_Func_TSource__TKey__o *)_9__10_0,
                                                                 (const MethodInfo_2FB895C *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v69 = System_Linq_Enumerable__FirstOrDefault_object_(
            v68,
            (const MethodInfo_2FB1C00 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    this->fields.userServantEntity = (struct UserServantEntity_o *)v69;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
      (int64_t)v69,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
  }
  this->fields.baseItem = baseItem;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.baseItem, (int64_t)baseItem, v51, v52, v53, v54, v55, v56);
  this->fields.isPossibleSelect = v50;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v76 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_30;
  v77 = (ServantLimitMaster_o *)Instance;
  v79 = *(_QWORD *)&v76->fields.id.fields.currentCryptoKey;
  v78 = *(_QWORD *)&v76->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v89.fields.currentCryptoKey = v79;
  *(_QWORD *)&v89.fields.fakeValue = v78;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v89, 0LL);
  if ( !v77 || (Instance = ServantLimitMaster__GetEntity(v77, (int32_t)Instance, 0, 0LL)) == 0LL )
LABEL_30:
    sub_1C13F80(Instance, v49);
  this->fields.rarityId = *((_DWORD *)Instance + 6);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v80 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  this->fields.svtTdMaster = (struct ServantTreasureDvcMaster_o *)v80;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.svtTdMaster, (int64_t)v80, v81, v82, v83, v84, v85, v86);
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
  if ( (byte_4BB0CDD & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewItem_o *)sub_1C13D24(
                                                            &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                            tdLv);
    byte_4BB0CDD = 1;
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
  this = (BonusSelectSummonPartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
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
    sub_1C13F80(this, tdLv);
  }
  *tdMaxLv = ServantTreasureDvcEntity__getLevelMax((ServantTreasureDvcEntity_o *)this, 0LL);
  userServantEntity = v6->fields.userServantEntity;
  if ( userServantEntity )
    UserServantEntity__getTreasureDeviceInfo_41378108(userServantEntity, tdLv, tdMaxLv, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewItem__InitAfterSecondSort(
        BonusSelectSummonPartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewItem_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct ServantEntity_o *servantEntity; // x8
  __int64 rarityId; // x20
  __int64 collectionNo; // x21
  struct ServantEntity_o *v9; // x8
  struct ServantEntity_o *v10; // x8
  __int64 v11; // x20
  __int64 v12; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v2 = this;
  if ( (byte_4BB0CDC & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_ServantClassMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v3);
    sub_1C13D24(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4);
    this = (BonusSelectSummonPartyServantListViewItem_o *)sub_1C13D24(
                                                            &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                            v5);
    byte_4BB0CDC = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_13;
  rarityId = (unsigned int)v2->fields.rarityId;
  collectionNo = servantEntity->fields.collectionNo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BonusSelectSummonPartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v9 = v2->fields.servantEntity;
  if ( !v9
    || !this
    || (this = (BonusSelectSummonPartyServantListViewItem_o *)DataMasterBase_object__object__int___GetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                v9->fields.classId,
                                                                (const MethodInfo_3238624 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0LL
    || (v10 = v2->fields.servantEntity,
        v2->fields.sortValue1B = SHIDWORD(this->fields.sortValue1),
        v2->fields.sortValue2 = (collectionNo << 16) | (rarityId << 48),
        !v10) )
  {
LABEL_13:
    sub_1C13F80(this, method);
  }
  v12 = *(_QWORD *)&v10->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&v10->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v12;
  *(_QWORD *)&v13.fields.fakeValue = v11;
  v2->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v13, 0LL);
}


bool __fastcall BonusSelectSummonPartyServantListViewItem__IsMatchFilter(
        BonusSelectSummonPartyServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *v7; // x0
  __int64 CollectionStateFilterKindList; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x8
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  struct BonusSelectSummonPartyOrganizationListViewItem_o *v16; // x8
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x0
  FilterKindList_c *v21; // x0
  ListViewSort_FilterKind_array *v22; // x0
  UserServantEntity_o *userServantEntity; // x0
  UserServantEntity_o *v25; // x8
  System_Int32_array *v26; // x20
  System_Int32_array *SkillCategoryIdList; // x0
  ServantEntity_o *servantEntity; // x8
  System_Int32_array *v29; // x21
  __int64 v30; // x1
  _BOOL4 IsUnSelectedAllTargetFilters; // w22
  _BOOL4 v32; // w23
  _BOOL4 IsMatchEffectCategory; // w20
  _BOOL4 v34; // w0

  if ( (byte_4BB0CDA & 1) == 0 )
  {
    sub_1C13D24(&FilterKindList_TypeInfo, sort);
    sub_1C13D24(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_4BB0CDA = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v7->static_fields->CollectionStateFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_66;
  CollectionStateFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                             (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v9->static_fields->ServantHaveFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_66;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                           (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchServantPossessionStatus(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v11->static_fields->ServantSummonCategoryFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_66;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                           (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  CollectionStateFilterKindList = ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL);
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
    v14 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v14 = FilterKindList_TypeInfo;
    }
    CollectionStateFilterKindList = (__int64)v14->static_fields->ClassExtra1FilterKindList;
    if ( !CollectionStateFilterKindList )
      goto LABEL_66;
    v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                             (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
      && !ListViewSort__IsMatchClassExtra1Filter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else
  {
    v16 = this->fields.baseItem;
    if ( !v16 )
      goto LABEL_66;
    CollectionStateFilterKindList = (__int64)v16->fields.gachaBonusSelectEntity;
    if ( !CollectionStateFilterKindList )
      goto LABEL_66;
    if ( GachaBonusSelectEntity__GetClassId((GachaBonusSelectEntity_o *)CollectionStateFilterKindList, 1001, 0LL) == 1005 )
    {
      v17 = FilterKindList_TypeInfo;
      if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v17 = FilterKindList_TypeInfo;
      }
      CollectionStateFilterKindList = (__int64)v17->static_fields->ClassExtra2FilterKindList;
      if ( !CollectionStateFilterKindList )
        goto LABEL_66;
      v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                               (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                               (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
        && !ListViewSort__IsMatchClassExtra2Filter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
    }
  }
  v19 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v19->static_fields->NpTypeFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_66;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                           (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter_41959652(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v21 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v21 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v21->static_fields->NpEffectFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_66;
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)CollectionStateFilterKindList,
                                           (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter_41960260(sort, this->fields.servantEntity, 0LL) )
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
    v25 = this->fields.userServantEntity;
    if ( !v25 )
      goto LABEL_66;
    v26 = (System_Int32_array *)CollectionStateFilterKindList;
    SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v25, 1, 0LL);
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
    v26 = (System_Int32_array *)CollectionStateFilterKindList;
    SkillCategoryIdList = ServantEntity__GetSkillCategoryIdList(servantEntity, 1, 0LL);
  }
  v29 = SkillCategoryIdList;
  CollectionStateFilterKindList = sub_1C13DCC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !CollectionStateFilterKindList )
    goto LABEL_66;
  v30 = CollectionStateFilterKindList;
  if ( !*(_DWORD *)(CollectionStateFilterKindList + 24) )
    goto LABEL_67;
  *(_DWORD *)(CollectionStateFilterKindList + 32) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)CollectionStateFilterKindList,
                                   0LL);
  CollectionStateFilterKindList = sub_1C13DCC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !CollectionStateFilterKindList )
LABEL_66:
    sub_1C13F80(CollectionStateFilterKindList, sort);
  v30 = CollectionStateFilterKindList;
  if ( !*(_DWORD *)(CollectionStateFilterKindList + 24) )
LABEL_67:
    sub_1C13F88(CollectionStateFilterKindList, v30);
  *(_DWORD *)(CollectionStateFilterKindList + 32) = 51;
  v32 = ListViewSort__IsUnSelectedAllTargetFilters(
          sort,
          (ListViewSort_FilterKind_array *)CollectionStateFilterKindList,
          0LL);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(v26, sort, 0LL);
  v34 = ServantEquipEffectFilterController__IsMatchEffectCategory(v29, sort, 0LL);
  if ( ((IsUnSelectedAllTargetFilters ^ v32) & 1) != 0 )
  {
    if ( IsUnSelectedAllTargetFilters )
    {
      if ( v34 )
        return 1;
    }
    else if ( IsMatchEffectCategory )
    {
      return 1;
    }
  }
  else if ( IsMatchEffectCategory || v34 )
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
  __int64 v6; // x1
  struct ServantEntity_o *servantEntity; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9
  int64_t PRIORITY_NORMAL; // x8
  const MethodInfo *v10; // x3
  IconLabelInfo_o *iconLabelInfo; // x21
  int32_t v12; // w22
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int32_t sortKind; // w8
  struct ServantEntity_o *v23; // x8
  void *v24; // x1
  PartyOrganizationUtility_o *p_sortStr1; // x19
  int32_t tdMaxLv[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BB0CDB & 1) == 0 )
  {
    sub_1C13D24(&BonusSelectSummonPartyServantListViewItem_TypeInfo, sort);
    sub_1C13D24(&System_Math_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_1/*""*/, v6);
    byte_4BB0CDB = 1;
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
  BonusSelectSummonPartyServantListViewItem__GetTdInfo(this, &tdMaxLv[1], tdMaxLv, v10);
  iconLabelInfo = this->fields.iconLabelInfo;
  v12 = tdMaxLv[1];
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v13 = System_Math__Max_63787088(v12, 1, 0LL);
  if ( !iconLabelInfo )
    goto LABEL_18;
  IconLabelInfo__Set_39281744(iconLabelInfo, 33, v13, tdMaxLv[0], 0, 0, 0, 0, 0LL);
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
  this->fields.sortValue0B = 0LL;
  if ( !v23 )
LABEL_18:
    sub_1C13F80(v13, v14);
  this->fields.sortValue1 = v23->fields.collectionNo;
  v24 = StringLiteral_1/*""*/;
  this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
  p_sortStr1 = (PartyOrganizationUtility_o *)&this->fields.sortStr1;
  sub_1C13CC8(p_sortStr1, (int64_t)v24, v15, v16, v17, v18, v19, v20);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB0CDE & 1) == 0 )
  {
    sub_1C13D24(&BonusSelectSummonPartyServantListViewItem___c_TypeInfo, v1);
    byte_4BB0CDE = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(BonusSelectSummonPartyServantListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BonusSelectSummonPartyServantListViewItem___c_TypeInfo->static_fields->__9 = (struct BonusSelectSummonPartyServantListViewItem___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)BonusSelectSummonPartyServantListViewItem___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}