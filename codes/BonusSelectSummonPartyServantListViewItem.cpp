void __fastcall BonusSelectSummonPartyServantListViewItem___cctor(const MethodInfo *method)
{
  ;
}


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
  __int64 v24; // x1
  IconLabelInfo_o *v25; // x25
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct ServantEntity_o **p_servantEntity; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x24
  __int64 v46; // x23
  __int64 v47; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // kr00_16
  int32_t v49; // w0
  __int64 v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Collections_Generic_List_UserServantEntity__o *v57; // x23
  BonusSelectSummonPartyServantListViewItem___c_c *v58; // x0
  struct BonusSelectSummonPartyServantListViewItem___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x24
  Il2CppObject *v61; // x25
  struct BonusSelectSummonPartyServantListViewItem___c_StaticFields *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x0
  struct UserServantEntity_o *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct ServantEntity_o *v79; // x8
  ServantLimitMaster_o *v80; // x20
  __int64 v81; // x21
  __int64 v82; // x22
  int32_t v83; // w0
  ServantLimitEntity_o *Entity; // x0
  struct ServantTreasureDvcMaster_o *v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16

  if ( (byte_40FB10B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, v14);
    sub_B16FFC(&DataManager_TypeInfo, v15);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v16);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v17);
    sub_B16FFC(&Method_System_Func_UserServantEntity__int___ctor__, v18);
    sub_B16FFC(&System_Func_UserServantEntity__int__TypeInfo, v19);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B16FFC(&Method_BonusSelectSummonPartyServantListViewItem___c___ctor_b__10_0__, v23);
    sub_B16FFC(&BonusSelectSummonPartyServantListViewItem___c_TypeInfo, v24);
    byte_40FB10B = 1;
  }
  userServantList = 0LL;
  v25 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, *(_QWORD *)&index, servantEntity, lineupEntity, baseItem);
  IconLabelInfo___ctor(v25, 0LL);
  this->fields.iconLabelInfo = v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.lineupEntity = lineupEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.lineupEntity,
    (System_Int32_array **)lineupEntity,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.servantEntity = servantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)servantEntity,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( servantEntity )
  {
    v47 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v46 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
    v46 = *(_QWORD *)&v48.fields.fakeValue;
    v47 = *(_QWORD *)&v48.fields.currentCryptoKey;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v93.fields.currentCryptoKey = v47;
  *(_QWORD *)&v93.fields.fakeValue = v46;
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v93, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_37;
  if ( UserServantMaster__TryGetEntityListBySvtId(Master_WarQuestSelectionMaster, &userServantList, v49, 1, 0LL) )
  {
    v57 = userServantList;
    v58 = BonusSelectSummonPartyServantListViewItem___c_TypeInfo;
    if ( (BYTE3(BonusSelectSummonPartyServantListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BonusSelectSummonPartyServantListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewItem___c_TypeInfo);
      v58 = BonusSelectSummonPartyServantListViewItem___c_TypeInfo;
    }
    static_fields = v58->static_fields;
    _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( (BYTE3(v58->vtable._0_Equals.methodPtr) & 4) != 0 && !v58->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v58);
        static_fields = BonusSelectSummonPartyServantListViewItem___c_TypeInfo->static_fields;
      }
      v61 = (Il2CppObject *)static_fields->__9;
      _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                   System_Func_UserServantEntity__int__TypeInfo,
                                                                                   v50,
                                                                                   v51,
                                                                                   v52,
                                                                                   v53);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__10_0,
        v61,
        Method_BonusSelectSummonPartyServantListViewItem___c___ctor_b__10_0__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_UserServantEntity__int___ctor__);
      v62 = BonusSelectSummonPartyServantListViewItem___c_TypeInfo->static_fields;
      v62->__9__10_0 = (struct System_Func_UserServantEntity__int__o *)_9__10_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v62->__9__10_0,
        (System_Int32_array **)_9__10_0,
        v63,
        v64,
        v65,
        v66,
        v67,
        v68);
    }
    v69 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v57,
                                                                 (System_Func_TSource__TKey__o *)_9__10_0,
                                                                 (const MethodInfo_19BDA8C *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v70 = (struct UserServantEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                          v69,
                                          (const MethodInfo_18D7980 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    this->fields.userServantEntity = v70;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.userServantEntity,
      (System_Int32_array **)v70,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76);
  }
  this->fields.baseItem = baseItem;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseItem,
    (System_Int32_array **)baseItem,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.isPossibleSelect = isPossibleSelect;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v79 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_37;
  v80 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  v82 = *(_QWORD *)&v79->fields.id.fields.currentCryptoKey;
  v81 = *(_QWORD *)&v79->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v94.fields.currentCryptoKey = v82;
  *(_QWORD *)&v94.fields.fakeValue = v81;
  v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v94, 0LL);
  if ( !v80 || (Entity = ServantLimitMaster__GetEntity(v80, v83, 0, 0LL)) == 0LL )
LABEL_37:
    sub_B170D4();
  this->fields.rarityId = Entity->fields.rarity;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v85 = (struct ServantTreasureDvcMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  this->fields.svtTdMaster = v85;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtTdMaster,
    (System_Int32_array **)v85,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
}


void __fastcall BonusSelectSummonPartyServantListViewItem__GetTdInfo(
        BonusSelectSummonPartyServantListViewItem_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8
  ServantTreasureDvcMaster_o *svtTdMaster; // x22
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w0
  ServantTreasureDvcEntity_o *EntityFromSvtIdOnly; // x0
  UserServantEntity_o *userServantEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_40FB10F & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, tdLv);
    byte_40FB10F = 1;
  }
  *tdLv = 0;
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_12;
  svtTdMaster = this->fields.svtTdMaster;
  v10 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v9 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
  if ( !svtTdMaster
    || (EntityFromSvtIdOnly = ServantTreasureDvcMaster__getEntityFromSvtIdOnly(svtTdMaster, v11, 1, 0LL)) == 0LL )
  {
LABEL_12:
    sub_B170D4();
  }
  *tdMaxLv = ServantTreasureDvcEntity__getLevelMax(EntityFromSvtIdOnly, 0LL);
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    UserServantEntity__getTreasureDeviceInfo_21453148(userServantEntity, tdLv, tdMaxLv, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewItem__InitAfterSecondSort(
        BonusSelectSummonPartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct ServantEntity_o *servantEntity; // x8
  __int64 rarityId; // x20
  __int64 collectionNo; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct ServantEntity_o *v10; // x8
  WarEntity_o *Entity; // x0
  struct ServantEntity_o *v12; // x8
  __int64 v13; // x20
  __int64 v14; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_40FB10E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantClassMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_40FB10E = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_15;
  rarityId = (unsigned int)this->fields.rarityId;
  collectionNo = servantEntity->fields.collectionNo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v10 = this->fields.servantEntity;
  if ( !v10
    || !Master_WarQuestSelectionMaster
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   Master_WarQuestSelectionMaster,
                   v10->fields.classId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0LL
    || (v12 = this->fields.servantEntity,
        this->fields.sortValue1B = Entity->fields.bannerId,
        this->fields.sortValue2 = (collectionNo << 16) | (rarityId << 48),
        !v12) )
  {
LABEL_15:
    sub_B170D4();
  }
  v14 = *(_QWORD *)&v12->fields.id.fields.currentCryptoKey;
  v13 = *(_QWORD *)&v12->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v14;
  *(_QWORD *)&v15.fields.fakeValue = v13;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v15, 0LL);
}


bool __fastcall BonusSelectSummonPartyServantListViewItem__IsMatchFilter(
        BonusSelectSummonPartyServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *v7; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *CollectionStateFilterKindList; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ServantHaveFilterKindList; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ServantSummonCategoryFilterKindList; // x0
  ListViewSort_FilterKind_array *v15; // x0
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x8
  GachaBonusSelectEntity_o *gachaBonusSelectEntity; // x0
  FilterKindList_c *v18; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassExtra1FilterKindList; // x0
  ListViewSort_FilterKind_array *v20; // x0
  struct BonusSelectSummonPartyOrganizationListViewItem_o *v21; // x8
  GachaBonusSelectEntity_o *v22; // x0
  FilterKindList_c *v23; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassExtra2FilterKindList; // x0
  ListViewSort_FilterKind_array *v25; // x0
  FilterKindList_c *v26; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *NpTypeFilterKindList; // x0
  ListViewSort_FilterKind_array *v28; // x0
  FilterKindList_c *v29; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *NpEffectFilterKindList; // x0
  ListViewSort_FilterKind_array *v31; // x0
  UserServantEntity_o *userServantEntity; // x0
  System_Int32_array *TreasureDeviceCategoryIdList; // x0
  UserServantEntity_o *v35; // x8
  System_Int32_array *v36; // x20
  System_Int32_array *SkillCategoryIdList; // x0
  __int64 v38; // x2
  ServantEntity_o *servantEntity; // x0
  System_Int32_array *v40; // x0
  ServantEntity_o *v41; // x8
  System_Int32_array *v42; // x21
  ListViewSort_FilterKind_array *v43; // x0
  __int64 v44; // x2
  ListViewSort_FilterKind_array *v45; // x1
  _BOOL4 IsUnSelectedAllTargetFilters; // w22
  __int64 v47; // x2
  _BOOL4 v48; // w23
  _BOOL4 IsMatchEffectCategory; // w20
  _BOOL4 v50; // w0

  if ( (byte_40FB10C & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_40FB10C = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v7->static_fields->CollectionStateFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_73;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          CollectionStateFilterKindList,
                                          (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_73;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0LL)
    && !ListViewSort__IsMatchServantCollectionStatus(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v10 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v10 = FilterKindList_TypeInfo;
  }
  ServantHaveFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v10->static_fields->ServantHaveFilterKindList;
  if ( !ServantHaveFilterKindList )
    goto LABEL_73;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ServantHaveFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchServantPossessionStatus(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  ServantSummonCategoryFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v13->static_fields->ServantSummonCategoryFilterKindList;
  if ( !ServantSummonCategoryFilterKindList )
    goto LABEL_73;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ServantSummonCategoryFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
    && !ListViewSort__IsMatchServantSummonCategory(sort, this->fields.lineupEntity, 0LL) )
  {
    return 0;
  }
  baseItem = this->fields.baseItem;
  if ( !baseItem )
    goto LABEL_73;
  gachaBonusSelectEntity = baseItem->fields.gachaBonusSelectEntity;
  if ( !gachaBonusSelectEntity )
    goto LABEL_73;
  if ( GachaBonusSelectEntity__GetClassId(gachaBonusSelectEntity, 1001, 0LL) == 1004 )
  {
    v18 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v18 = FilterKindList_TypeInfo;
    }
    ClassExtra1FilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v18->static_fields->ClassExtra1FilterKindList;
    if ( !ClassExtra1FilterKindList )
      goto LABEL_73;
    v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             ClassExtra1FilterKindList,
                                             (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
      && !ListViewSort__IsMatchClassExtra1Filter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else
  {
    v21 = this->fields.baseItem;
    if ( !v21 )
      goto LABEL_73;
    v22 = v21->fields.gachaBonusSelectEntity;
    if ( !v22 )
      goto LABEL_73;
    if ( GachaBonusSelectEntity__GetClassId(v22, 1001, 0LL) == 1005 )
    {
      v23 = FilterKindList_TypeInfo;
      if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v23 = FilterKindList_TypeInfo;
      }
      ClassExtra2FilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v23->static_fields->ClassExtra2FilterKindList;
      if ( !ClassExtra2FilterKindList )
        goto LABEL_73;
      v25 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                               ClassExtra2FilterKindList,
                                               (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v25, 0LL)
        && !ListViewSort__IsMatchClassExtra2Filter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
    }
  }
  v26 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v26 = FilterKindList_TypeInfo;
  }
  NpTypeFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v26->static_fields->NpTypeFilterKindList;
  if ( !NpTypeFilterKindList )
    goto LABEL_73;
  v28 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           NpTypeFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v28, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter_30248188(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v29 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v29 = FilterKindList_TypeInfo;
  }
  NpEffectFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v29->static_fields->NpEffectFilterKindList;
  if ( !NpEffectFilterKindList )
    goto LABEL_73;
  v31 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           NpEffectFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v31, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter_30248840(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
    return 1;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(userServantEntity, 1, 0LL);
    v35 = this->fields.userServantEntity;
    if ( !v35 )
      goto LABEL_73;
    v36 = TreasureDeviceCategoryIdList;
    SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v35, 1, 0LL);
  }
  else
  {
    servantEntity = this->fields.servantEntity;
    if ( !servantEntity )
      goto LABEL_73;
    v40 = ServantEntity__GetTreasureDeviceCategoryIdList(servantEntity, 0LL);
    v41 = this->fields.servantEntity;
    if ( !v41 )
      goto LABEL_73;
    v36 = v40;
    SkillCategoryIdList = ServantEntity__GetSkillCategoryIdList(v41, 1, 0LL);
  }
  v42 = SkillCategoryIdList;
  v43 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v38);
  if ( !v43 )
    goto LABEL_73;
  v45 = v43;
  if ( !v43->max_length )
    goto LABEL_74;
  v43->m_Items[1] = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(sort, v43, 0LL);
  v43 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v47);
  if ( !v43 )
LABEL_73:
    sub_B170D4();
  v45 = v43;
  if ( !v43->max_length )
  {
LABEL_74:
    sub_B17100(v43, v45, v44);
    sub_B170A0();
  }
  v43->m_Items[1] = 51;
  v48 = ListViewSort__IsUnSelectedAllTargetFilters(sort, v43, 0LL);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(v36, sort, 0LL);
  v50 = ServantEquipEffectFilterController__IsMatchEffectCategory(v42, sort, 0LL);
  if ( ((IsUnSelectedAllTargetFilters ^ v48) & 1) != 0 )
  {
    if ( IsUnSelectedAllTargetFilters )
    {
      if ( v50 )
        return 1;
    }
    else if ( IsMatchEffectCategory )
    {
      return 1;
    }
  }
  else if ( IsMatchEffectCategory || v50 )
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
  BonusSelectSummonPartyServantListViewItem_c *v9; // x0
  const MethodInfo *v10; // x3
  IconLabelInfo_o *iconLabelInfo; // x21
  int32_t v12; // w22
  int32_t v13; // w0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int32_t sortKind; // w8
  struct ServantEntity_o *v22; // x8
  System_Int32_array **v23; // x1
  int32_t tdMaxLv[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FB10D & 1) == 0 )
  {
    sub_B16FFC(&BonusSelectSummonPartyServantListViewItem_TypeInfo, sort);
    sub_B16FFC(&System_Math_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_40FB10D = 1;
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
  v9 = BonusSelectSummonPartyServantListViewItem_TypeInfo;
  if ( (BYTE3(BonusSelectSummonPartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonPartyServantListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewItem_TypeInfo);
    v9 = BonusSelectSummonPartyServantListViewItem_TypeInfo;
  }
  this->fields.sortValue0 = v9->static_fields->PRIORITY_NORMAL;
  this->fields.sortValue0B = v9->static_fields->PRIORITY_NORMAL;
  BonusSelectSummonPartyServantListViewItem__InitAfterSecondSort(this, (const MethodInfo *)sort);
  BonusSelectSummonPartyServantListViewItem__GetTdInfo(this, &tdMaxLv[1], tdMaxLv, v10);
  iconLabelInfo = this->fields.iconLabelInfo;
  v12 = tdMaxLv[1];
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v13 = System_Math__Max_44463768(v12, 1, 0LL);
  if ( !iconLabelInfo )
    goto LABEL_23;
  IconLabelInfo__Set_28888132(iconLabelInfo, 33, v13, tdMaxLv[0], 0, 0, 0, 0, 0LL);
  if ( !sort )
    goto LABEL_23;
  sortKind = sort->fields.sortKind;
  if ( sortKind != 27 )
  {
    if ( sortKind == 4 )
      this->fields.sortValue1 = tdMaxLv[1];
    return 1;
  }
  v22 = this->fields.servantEntity;
  this->fields.sortValue0B = 0LL;
  if ( !v22 )
LABEL_23:
    sub_B170D4();
  this->fields.sortValue1 = v22->fields.collectionNo;
  v23 = (System_Int32_array **)StringLiteral_1;
  this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.sortStr1, v23, v14, v15, v16, v17, v18, v19);
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F709A & 1) == 0 )
  {
    sub_B16FFC(&BonusSelectSummonPartyServantListViewItem___c_TypeInfo, v1);
    byte_40F709A = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BonusSelectSummonPartyServantListViewItem___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)BonusSelectSummonPartyServantListViewItem___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return entity->fields.treasureDeviceLv1;
}