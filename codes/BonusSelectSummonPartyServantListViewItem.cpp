void __fastcall BonusSelectSummonPartyServantListViewItem___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall BonusSelectSummonPartyServantListViewItem___ctor(
        BonusSelectSummonPartyServantListViewItem_o *this,
        int32_t index,
        ServantEntity_o *servantEntity,
        GachaBonusSelectLineupEntity_o *lineupEntity,
        BonusSelectSummonPartyOrganizationListViewItem_o *baseItem,
        bool isPossibleSelect,
        const MethodInfo *method)
{
  IconLabelInfo_o *v13; // x25
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct ServantEntity_o **p_servantEntity; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x24
  __int64 v34; // x23
  __int64 v35; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // kr00_16
  void *Instance; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_List_UserServantEntity__o *v45; // x23
  BonusSelectSummonPartyServantListViewItem___c_c *v46; // x0
  struct BonusSelectSummonPartyServantListViewItem___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x24
  Il2CppObject *v49; // x25
  struct BonusSelectSummonPartyServantListViewItem___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  struct UserServantEntity_o *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct ServantEntity_o *v65; // x8
  ServantLimitMaster_o *v66; // x20
  __int64 v67; // x21
  __int64 v68; // x22
  struct ServantTreasureDvcMaster_o *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  if ( (byte_42AFEF1 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_B52984(&Method_System_Func_UserServantEntity__int___ctor__);
    sub_B52984(&System_Func_UserServantEntity__int__TypeInfo);
    sub_B52984(&IconLabelInfo_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_BonusSelectSummonPartyServantListViewItem___c___ctor_b__10_0__);
    sub_B52984(&BonusSelectSummonPartyServantListViewItem___c_TypeInfo);
    byte_42AFEF1 = 1;
  }
  userServantList = 0LL;
  v13 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0LL);
  this->fields.iconLabelInfo = v13;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.lineupEntity = lineupEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.lineupEntity,
    (System_Int32_array **)lineupEntity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.servantEntity = servantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)servantEntity,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( servantEntity )
  {
    v35 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v34 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
    v34 = *(_QWORD *)&v36.fields.fakeValue;
    v35 = *(_QWORD *)&v36.fields.currentCryptoKey;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v77.fields.currentCryptoKey = v35;
  *(_QWORD *)&v77.fields.fakeValue = v34;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v77, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_37;
  if ( UserServantMaster__TryGetEntityListBySvtId(
         Master_WarQuestSelectionMaster,
         &userServantList,
         (int32_t)Instance,
         1,
         0LL) )
  {
    v45 = userServantList;
    v46 = BonusSelectSummonPartyServantListViewItem___c_TypeInfo;
    if ( (BYTE3(BonusSelectSummonPartyServantListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BonusSelectSummonPartyServantListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewItem___c_TypeInfo);
      v46 = BonusSelectSummonPartyServantListViewItem___c_TypeInfo;
    }
    static_fields = v46->static_fields;
    _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v46);
        static_fields = BonusSelectSummonPartyServantListViewItem___c_TypeInfo->static_fields;
      }
      v49 = (Il2CppObject *)static_fields->__9;
      _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_UserServantEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__10_0,
        v49,
        Method_BonusSelectSummonPartyServantListViewItem___c___ctor_b__10_0__,
        (const MethodInfo_2BC9C68 *)Method_System_Func_UserServantEntity__int___ctor__);
      v50 = BonusSelectSummonPartyServantListViewItem___c_TypeInfo->static_fields;
      v50->__9__10_0 = (struct System_Func_UserServantEntity__int__o *)_9__10_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v50->__9__10_0,
        (System_Int32_array **)_9__10_0,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
    }
    v57 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v45,
                                                                 (System_Func_TSource__TKey__o *)_9__10_0,
                                                                 (const MethodInfo_1B666DC *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v58 = (struct UserServantEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                          v57,
                                          (const MethodInfo_1B62EA8 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    this->fields.userServantEntity = v58;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.userServantEntity,
      (System_Int32_array **)v58,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
  }
  this->fields.baseItem = baseItem;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseItem,
    (System_Int32_array **)baseItem,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.isPossibleSelect = isPossibleSelect;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v65 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_37;
  v66 = (ServantLimitMaster_o *)Instance;
  v68 = *(_QWORD *)&v65->fields.id.fields.currentCryptoKey;
  v67 = *(_QWORD *)&v65->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v78.fields.currentCryptoKey = v68;
  *(_QWORD *)&v78.fields.fakeValue = v67;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v78, 0LL);
  if ( !v66 || (Instance = ServantLimitMaster__GetEntity(v66, (int32_t)Instance, 0, 0LL)) == 0LL )
LABEL_37:
    sub_B52A5C(Instance, v38);
  this->fields.rarityId = *((_DWORD *)Instance + 6);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v69 = (struct ServantTreasureDvcMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  this->fields.svtTdMaster = v69;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.svtTdMaster,
    (System_Int32_array **)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
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
  if ( (byte_42AFEF5 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewItem_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AFEF5 = 1;
  }
  *tdLv = 0;
  servantEntity = v6->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_12;
  svtTdMaster = v6->fields.svtTdMaster;
  v10 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v9 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v10;
  *(_QWORD *)&v12.fields.fakeValue = v9;
  this = (BonusSelectSummonPartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                          v12,
                                                          0LL);
  if ( !svtTdMaster
    || (this = (BonusSelectSummonPartyServantListViewItem_o *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                                                svtTdMaster,
                                                                (int32_t)this,
                                                                1,
                                                                0LL)) == 0LL )
  {
LABEL_12:
    sub_B52A5C(this, tdLv);
  }
  *tdMaxLv = ServantTreasureDvcEntity__getLevelMax((ServantTreasureDvcEntity_o *)this, 0LL);
  userServantEntity = v6->fields.userServantEntity;
  if ( userServantEntity )
    UserServantEntity__getTreasureDeviceInfo_21516452(userServantEntity, tdLv, tdMaxLv, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewItem__InitAfterSecondSort(
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
  if ( (byte_42AFEF4 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    this = (BonusSelectSummonPartyServantListViewItem_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AFEF4 = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_15;
  rarityId = (unsigned int)v2->fields.rarityId;
  collectionNo = servantEntity->fields.collectionNo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BonusSelectSummonPartyServantListViewItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v6 = v2->fields.servantEntity;
  if ( !v6
    || !this
    || (this = (BonusSelectSummonPartyServantListViewItem_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                                v6->fields.classId,
                                                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0LL
    || (v7 = v2->fields.servantEntity,
        v2->fields.sortValue1B = SLODWORD(this->fields.sortValue1),
        v2->fields.sortValue2 = (collectionNo << 16) | (rarityId << 48),
        !v7) )
  {
LABEL_15:
    sub_B52A5C(this, method);
  }
  v9 = *(_QWORD *)&v7->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&v7->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v9;
  *(_QWORD *)&v10.fields.fakeValue = v8;
  v2->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
}


bool __fastcall BonusSelectSummonPartyServantListViewItem__IsMatchFilter(
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
  __int64 v32; // x0

  if ( (byte_42AFEF2 & 1) == 0 )
  {
    sub_B52984(&FilterKindList_TypeInfo);
    sub_B52984(&ListViewSort_FilterKind___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_42AFEF2 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v5->static_fields->CollectionStateFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_73;
  CollectionStateFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             (System_Collections_Generic_List_Voice_BATTLE__o *)CollectionStateFilterKindList,
                                             (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_73;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(
          sort,
          (ListViewSort_FilterKind_array *)CollectionStateFilterKindList,
          0LL)
    && !ListViewSort__IsMatchServantCollectionStatus(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v7 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v7->static_fields->ServantHaveFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_73;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          (System_Collections_Generic_List_Voice_BATTLE__o *)CollectionStateFilterKindList,
                                          (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL)
    && !ListViewSort__IsMatchServantPossessionStatus(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v9->static_fields->ServantSummonCategoryFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_73;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)CollectionStateFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  CollectionStateFilterKindList = ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL);
  if ( (CollectionStateFilterKindList & 1) == 0 )
  {
    CollectionStateFilterKindList = ListViewSort__IsMatchServantSummonCategory(sort, this->fields.lineupEntity, 0LL);
    if ( (CollectionStateFilterKindList & 1) == 0 )
      return 0;
  }
  baseItem = this->fields.baseItem;
  if ( !baseItem )
    goto LABEL_73;
  CollectionStateFilterKindList = (__int64)baseItem->fields.gachaBonusSelectEntity;
  if ( !CollectionStateFilterKindList )
    goto LABEL_73;
  CollectionStateFilterKindList = GachaBonusSelectEntity__GetClassId(
                                    (GachaBonusSelectEntity_o *)CollectionStateFilterKindList,
                                    1001,
                                    0LL);
  if ( (_DWORD)CollectionStateFilterKindList == 1004 )
  {
    v12 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v12 = FilterKindList_TypeInfo;
    }
    CollectionStateFilterKindList = (__int64)v12->static_fields->ClassExtra1FilterKindList;
    if ( !CollectionStateFilterKindList )
      goto LABEL_73;
    v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             (System_Collections_Generic_List_Voice_BATTLE__o *)CollectionStateFilterKindList,
                                             (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
      && !ListViewSort__IsMatchClassExtra1Filter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else
  {
    v14 = this->fields.baseItem;
    if ( !v14 )
      goto LABEL_73;
    CollectionStateFilterKindList = (__int64)v14->fields.gachaBonusSelectEntity;
    if ( !CollectionStateFilterKindList )
      goto LABEL_73;
    if ( GachaBonusSelectEntity__GetClassId((GachaBonusSelectEntity_o *)CollectionStateFilterKindList, 1001, 0LL) == 1005 )
    {
      v15 = FilterKindList_TypeInfo;
      if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v15 = FilterKindList_TypeInfo;
      }
      CollectionStateFilterKindList = (__int64)v15->static_fields->ClassExtra2FilterKindList;
      if ( !CollectionStateFilterKindList )
        goto LABEL_73;
      v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                               (System_Collections_Generic_List_Voice_BATTLE__o *)CollectionStateFilterKindList,
                                               (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
        && !ListViewSort__IsMatchClassExtra2Filter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
    }
  }
  v17 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v17 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v17->static_fields->NpTypeFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_73;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)CollectionStateFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter_34040848(sort, this->fields.servantEntity, 0LL) )
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
  CollectionStateFilterKindList = (__int64)v19->static_fields->NpEffectFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_73;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)CollectionStateFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter_34041516(sort, this->fields.servantEntity, 0LL) )
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
    v23 = this->fields.userServantEntity;
    if ( !v23 )
      goto LABEL_73;
    v24 = (System_Int32_array *)CollectionStateFilterKindList;
    SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v23, 1, 0LL);
  }
  else
  {
    CollectionStateFilterKindList = (__int64)this->fields.servantEntity;
    if ( !CollectionStateFilterKindList )
      goto LABEL_73;
    CollectionStateFilterKindList = (__int64)ServantEntity__GetTreasureDeviceCategoryIdList(
                                               (ServantEntity_o *)CollectionStateFilterKindList,
                                               0LL);
    servantEntity = this->fields.servantEntity;
    if ( !servantEntity )
      goto LABEL_73;
    v24 = (System_Int32_array *)CollectionStateFilterKindList;
    SkillCategoryIdList = ServantEntity__GetSkillCategoryIdList(servantEntity, 1, 0LL);
  }
  v27 = SkillCategoryIdList;
  CollectionStateFilterKindList = sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !CollectionStateFilterKindList )
    goto LABEL_73;
  if ( !*(_DWORD *)(CollectionStateFilterKindList + 24) )
    goto LABEL_74;
  *(_DWORD *)(CollectionStateFilterKindList + 32) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)CollectionStateFilterKindList,
                                   0LL);
  CollectionStateFilterKindList = sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !CollectionStateFilterKindList )
LABEL_73:
    sub_B52A5C(CollectionStateFilterKindList, sort);
  if ( !*(_DWORD *)(CollectionStateFilterKindList + 24) )
  {
LABEL_74:
    v32 = sub_B52A88(CollectionStateFilterKindList);
    sub_B52A28(v32, 0LL);
  }
  *(_DWORD *)(CollectionStateFilterKindList + 32) = 51;
  v29 = ListViewSort__IsUnSelectedAllTargetFilters(
          sort,
          (ListViewSort_FilterKind_array *)CollectionStateFilterKindList,
          0LL);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(v24, sort, 0LL);
  v31 = ServantEquipEffectFilterController__IsMatchEffectCategory(v27, sort, 0LL);
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


bool __fastcall BonusSelectSummonPartyServantListViewItem__SetSortValue(
        BonusSelectSummonPartyServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9
  BonusSelectSummonPartyServantListViewItem_c *v7; // x0
  const MethodInfo *v8; // x3
  IconLabelInfo_o *iconLabelInfo; // x21
  int32_t v10; // w22
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int32_t sortKind; // w8
  struct ServantEntity_o *v21; // x8
  System_Int32_array **v22; // x1
  int32_t tdMaxLv[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42AFEF3 & 1) == 0 )
  {
    sub_B52984(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    sub_B52984(&System_Math_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AFEF3 = 1;
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
  v7 = BonusSelectSummonPartyServantListViewItem_TypeInfo;
  if ( (BYTE3(BonusSelectSummonPartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonPartyServantListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewItem_TypeInfo);
    v7 = BonusSelectSummonPartyServantListViewItem_TypeInfo;
  }
  this->fields.sortValue0 = v7->static_fields->PRIORITY_NORMAL;
  this->fields.sortValue0B = v7->static_fields->PRIORITY_NORMAL;
  BonusSelectSummonPartyServantListViewItem__InitAfterSecondSort(this, (const MethodInfo *)sort);
  BonusSelectSummonPartyServantListViewItem__GetTdInfo(this, &tdMaxLv[1], tdMaxLv, v8);
  iconLabelInfo = this->fields.iconLabelInfo;
  v10 = tdMaxLv[1];
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v11 = System_Math__Max_45036604(v10, 1, 0LL);
  if ( !iconLabelInfo )
    goto LABEL_23;
  IconLabelInfo__Set_28274368(iconLabelInfo, 33, v11, tdMaxLv[0], 0, 0, 0, 0, 0LL);
  if ( !sort )
    goto LABEL_23;
  sortKind = sort->fields.sortKind;
  if ( sortKind != 27 )
  {
    if ( sortKind == 4 )
      this->fields.sortValue1 = tdMaxLv[1];
    return 1;
  }
  v21 = this->fields.servantEntity;
  this->fields.sortValue0B = 0LL;
  if ( !v21 )
LABEL_23:
    sub_B52A5C(v11, v12);
  this->fields.sortValue1 = v21->fields.collectionNo;
  v22 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.sortStr1, v22, v13, v14, v15, v16, v17, v18);
  this->fields.sortValue1B = 0LL;
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
  Il2CppObject *v1; // x19
  struct BonusSelectSummonPartyServantListViewItem___c_StaticFields *static_fields; // x0

  if ( (byte_42AD673 & 1) == 0 )
  {
    sub_B52984(&BonusSelectSummonPartyServantListViewItem___c_TypeInfo);
    byte_42AD673 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BonusSelectSummonPartyServantListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BonusSelectSummonPartyServantListViewItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BonusSelectSummonPartyServantListViewItem___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}