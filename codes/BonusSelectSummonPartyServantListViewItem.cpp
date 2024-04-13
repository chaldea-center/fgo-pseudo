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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  IconLabelInfo_o *v49; // x25
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct ServantEntity_o **p_servantEntity; // x22
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x24
  __int64 v70; // x23
  __int64 v71; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // kr00_16
  void *Instance; // x0
  __int64 v74; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Collections_Generic_List_UserServantEntity__o *v81; // x23
  BonusSelectSummonPartyServantListViewItem___c_c *v82; // x0
  struct BonusSelectSummonPartyServantListViewItem___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x24
  Il2CppObject *v85; // x25
  struct BonusSelectSummonPartyServantListViewItem___c_StaticFields *v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x0
  struct UserServantEntity_o *v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  struct ServantEntity_o *v101; // x8
  ServantLimitMaster_o *v102; // x20
  __int64 v103; // x21
  __int64 v104; // x22
  struct ServantTreasureDvcMaster_o *v105; // x0
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16

  if ( (byte_42E8676 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, index, (_DWORD)servantEntity, lineupEntity);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v16, v17, v18);
    sub_B5D5C4(&DataManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v22, v23, v24);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v25, v26, v27);
    sub_B5D5C4(&Method_System_Func_UserServantEntity__int___ctor__, v28, v29, v30);
    sub_B5D5C4(&System_Func_UserServantEntity__int__TypeInfo, v31, v32, v33);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40, v41, v42);
    sub_B5D5C4(&Method_BonusSelectSummonPartyServantListViewItem___c___ctor_b__10_0__, v43, v44, v45);
    sub_B5D5C4(&BonusSelectSummonPartyServantListViewItem___c_TypeInfo, v46, v47, v48);
    byte_42E8676 = 1;
  }
  userServantList = 0LL;
  v49 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v49, 0LL);
  this->fields.iconLabelInfo = v49;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.lineupEntity = lineupEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.lineupEntity,
    (System_Int32_array **)lineupEntity,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.servantEntity = servantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)servantEntity,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( servantEntity )
  {
    v71 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v70 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
    v70 = *(_QWORD *)&v72.fields.fakeValue;
    v71 = *(_QWORD *)&v72.fields.currentCryptoKey;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v113.fields.currentCryptoKey = v71;
  *(_QWORD *)&v113.fields.fakeValue = v70;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v113, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_37;
  if ( UserServantMaster__TryGetEntityListBySvtId(
         Master_WarQuestSelectionMaster,
         &userServantList,
         (int32_t)Instance,
         1,
         0LL) )
  {
    v81 = userServantList;
    v82 = BonusSelectSummonPartyServantListViewItem___c_TypeInfo;
    if ( (BYTE3(BonusSelectSummonPartyServantListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BonusSelectSummonPartyServantListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewItem___c_TypeInfo);
      v82 = BonusSelectSummonPartyServantListViewItem___c_TypeInfo;
    }
    static_fields = v82->static_fields;
    _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( (BYTE3(v82->vtable._0_Equals.methodPtr) & 4) != 0 && !v82->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v82);
        static_fields = BonusSelectSummonPartyServantListViewItem___c_TypeInfo->static_fields;
      }
      v85 = (Il2CppObject *)static_fields->__9;
      _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_UserServantEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__10_0,
        v85,
        Method_BonusSelectSummonPartyServantListViewItem___c___ctor_b__10_0__,
        (const MethodInfo_2C2F87C *)Method_System_Func_UserServantEntity__int___ctor__);
      v86 = BonusSelectSummonPartyServantListViewItem___c_TypeInfo->static_fields;
      v86->__9__10_0 = (struct System_Func_UserServantEntity__int__o *)_9__10_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v86->__9__10_0,
        (System_Int32_array **)_9__10_0,
        v87,
        v88,
        v89,
        v90,
        v91,
        v92);
    }
    v93 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v81,
                                                                 (System_Func_TSource__TKey__o *)_9__10_0,
                                                                 (const MethodInfo_1CAF5B4 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v94 = (struct UserServantEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                          v93,
                                          (const MethodInfo_1CABD80 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    this->fields.userServantEntity = v94;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.userServantEntity,
      (System_Int32_array **)v94,
      v95,
      v96,
      v97,
      v98,
      v99,
      v100);
  }
  this->fields.baseItem = baseItem;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseItem,
    (System_Int32_array **)baseItem,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  this->fields.isPossibleSelect = isPossibleSelect;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v101 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_37;
  v102 = (ServantLimitMaster_o *)Instance;
  v104 = *(_QWORD *)&v101->fields.id.fields.currentCryptoKey;
  v103 = *(_QWORD *)&v101->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v114.fields.currentCryptoKey = v104;
  *(_QWORD *)&v114.fields.fakeValue = v103;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v114, 0LL);
  if ( !v102 || (Instance = ServantLimitMaster__GetEntity(v102, (int32_t)Instance, 0, 0LL)) == 0LL )
LABEL_37:
    sub_B5D69C(Instance, v74);
  this->fields.rarityId = *((_DWORD *)Instance + 6);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v105 = (struct ServantTreasureDvcMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  this->fields.svtTdMaster = v105;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtTdMaster,
    (System_Int32_array **)v105,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
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
  if ( (byte_42E867A & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewItem_o *)sub_B5D5C4(
                                                            &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                            (_DWORD)tdLv,
                                                            (_DWORD)tdMaxLv,
                                                            method);
    byte_42E867A = 1;
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
  this = (BonusSelectSummonPartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
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
    sub_B5D69C(this, tdLv);
  }
  *tdMaxLv = ServantTreasureDvcEntity__getLevelMax((ServantTreasureDvcEntity_o *)this, 0LL);
  userServantEntity = v6->fields.userServantEntity;
  if ( userServantEntity )
    UserServantEntity__getTreasureDeviceInfo_21848072(userServantEntity, tdLv, tdMaxLv, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewItem__InitAfterSecondSort(
        BonusSelectSummonPartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BonusSelectSummonPartyServantListViewItem_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct ServantEntity_o *servantEntity; // x8
  __int64 rarityId; // x20
  __int64 collectionNo; // x21
  struct ServantEntity_o *v17; // x8
  struct ServantEntity_o *v18; // x8
  __int64 v19; // x20
  __int64 v20; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  v4 = this;
  if ( (byte_42E8679 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantClassMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v8, v9, v10);
    this = (BonusSelectSummonPartyServantListViewItem_o *)sub_B5D5C4(
                                                            &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                            v11,
                                                            v12,
                                                            v13);
    byte_42E8679 = 1;
  }
  servantEntity = v4->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_15;
  rarityId = (unsigned int)v4->fields.rarityId;
  collectionNo = servantEntity->fields.collectionNo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BonusSelectSummonPartyServantListViewItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantClassMaster___);
  v17 = v4->fields.servantEntity;
  if ( !v17
    || !this
    || (this = (BonusSelectSummonPartyServantListViewItem_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                                v17->fields.classId,
                                                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0LL
    || (v18 = v4->fields.servantEntity,
        v4->fields.sortValue1B = SLODWORD(this->fields.sortValue1),
        v4->fields.sortValue2 = (collectionNo << 16) | (rarityId << 48),
        !v18) )
  {
LABEL_15:
    sub_B5D69C(this, method);
  }
  v20 = *(_QWORD *)&v18->fields.id.fields.currentCryptoKey;
  v19 = *(_QWORD *)&v18->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v20;
  *(_QWORD *)&v21.fields.fakeValue = v19;
  v4->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
}


bool __fastcall BonusSelectSummonPartyServantListViewItem__IsMatchFilter(
        BonusSelectSummonPartyServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  FilterKindList_c *v12; // x0
  __int64 CollectionStateFilterKindList; // x0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x0
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x8
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x0
  struct BonusSelectSummonPartyOrganizationListViewItem_o *v21; // x8
  FilterKindList_c *v22; // x0
  ListViewSort_FilterKind_array *v23; // x0
  FilterKindList_c *v24; // x0
  ListViewSort_FilterKind_array *v25; // x0
  FilterKindList_c *v26; // x0
  ListViewSort_FilterKind_array *v27; // x0
  UserServantEntity_o *userServantEntity; // x0
  UserServantEntity_o *v30; // x8
  System_Int32_array *v31; // x20
  System_Int32_array *SkillCategoryIdList; // x0
  ServantEntity_o *servantEntity; // x8
  System_Int32_array *v34; // x21
  _BOOL4 IsUnSelectedAllTargetFilters; // w22
  _BOOL4 v36; // w23
  _BOOL4 IsMatchEffectCategory; // w20
  _BOOL4 v38; // w0
  __int64 v39; // x0

  if ( (byte_42E8677 & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&ListViewSort_FilterKind___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9, v10, v11);
    byte_42E8677 = 1;
  }
  v12 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v12->static_fields->CollectionStateFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_73;
  CollectionStateFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             (System_Collections_Generic_List_Voice_BATTLE__o *)CollectionStateFilterKindList,
                                             (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  v14 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v14->static_fields->ServantHaveFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_73;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)CollectionStateFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
    && !ListViewSort__IsMatchServantPossessionStatus(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v16 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v16->static_fields->ServantSummonCategoryFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_73;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)CollectionStateFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  CollectionStateFilterKindList = ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL);
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
    v19 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v19 = FilterKindList_TypeInfo;
    }
    CollectionStateFilterKindList = (__int64)v19->static_fields->ClassExtra1FilterKindList;
    if ( !CollectionStateFilterKindList )
      goto LABEL_73;
    v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             (System_Collections_Generic_List_Voice_BATTLE__o *)CollectionStateFilterKindList,
                                             (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    CollectionStateFilterKindList = (__int64)v21->fields.gachaBonusSelectEntity;
    if ( !CollectionStateFilterKindList )
      goto LABEL_73;
    if ( GachaBonusSelectEntity__GetClassId((GachaBonusSelectEntity_o *)CollectionStateFilterKindList, 1001, 0LL) == 1005 )
    {
      v22 = FilterKindList_TypeInfo;
      if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v22 = FilterKindList_TypeInfo;
      }
      CollectionStateFilterKindList = (__int64)v22->static_fields->ClassExtra2FilterKindList;
      if ( !CollectionStateFilterKindList )
        goto LABEL_73;
      v23 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                               (System_Collections_Generic_List_Voice_BATTLE__o *)CollectionStateFilterKindList,
                                               (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v23, 0LL)
        && !ListViewSort__IsMatchClassExtra2Filter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
    }
  }
  v24 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v24 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v24->static_fields->NpTypeFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_73;
  v25 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)CollectionStateFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v25, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter_34070692(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v26 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v26 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (__int64)v26->static_fields->NpEffectFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_73;
  v27 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)CollectionStateFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v27, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter_34071360(sort, this->fields.servantEntity, 0LL) )
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
    v30 = this->fields.userServantEntity;
    if ( !v30 )
      goto LABEL_73;
    v31 = (System_Int32_array *)CollectionStateFilterKindList;
    SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v30, 1, 0LL);
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
    v31 = (System_Int32_array *)CollectionStateFilterKindList;
    SkillCategoryIdList = ServantEntity__GetSkillCategoryIdList(servantEntity, 1, 0LL);
  }
  v34 = SkillCategoryIdList;
  CollectionStateFilterKindList = sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !CollectionStateFilterKindList )
    goto LABEL_73;
  if ( !*(_DWORD *)(CollectionStateFilterKindList + 24) )
    goto LABEL_74;
  *(_DWORD *)(CollectionStateFilterKindList + 32) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)CollectionStateFilterKindList,
                                   0LL);
  CollectionStateFilterKindList = sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !CollectionStateFilterKindList )
LABEL_73:
    sub_B5D69C(CollectionStateFilterKindList, sort);
  if ( !*(_DWORD *)(CollectionStateFilterKindList + 24) )
  {
LABEL_74:
    v39 = sub_B5D6C8(CollectionStateFilterKindList);
    sub_B5D668(v39, 0LL);
  }
  *(_DWORD *)(CollectionStateFilterKindList + 32) = 51;
  v36 = ListViewSort__IsUnSelectedAllTargetFilters(
          sort,
          (ListViewSort_FilterKind_array *)CollectionStateFilterKindList,
          0LL);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(v31, sort, 0LL);
  v38 = ServantEquipEffectFilterController__IsMatchEffectCategory(v34, sort, 0LL);
  if ( ((IsUnSelectedAllTargetFilters ^ v36) & 1) != 0 )
  {
    if ( IsUnSelectedAllTargetFilters )
    {
      if ( v38 )
        return 1;
    }
    else if ( IsMatchEffectCategory )
    {
      return 1;
    }
  }
  else if ( IsMatchEffectCategory || v38 )
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct ServantEntity_o *servantEntity; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9
  BonusSelectSummonPartyServantListViewItem_c *v14; // x0
  const MethodInfo *v15; // x3
  IconLabelInfo_o *iconLabelInfo; // x21
  int32_t v17; // w22
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int32_t sortKind; // w8
  struct ServantEntity_o *v28; // x8
  System_Int32_array **v29; // x1
  int32_t tdMaxLv[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E8678 & 1) == 0 )
  {
    sub_B5D5C4(&BonusSelectSummonPartyServantListViewItem_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&System_Math_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42E8678 = 1;
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
  v14 = BonusSelectSummonPartyServantListViewItem_TypeInfo;
  if ( (BYTE3(BonusSelectSummonPartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonPartyServantListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewItem_TypeInfo);
    v14 = BonusSelectSummonPartyServantListViewItem_TypeInfo;
  }
  this->fields.sortValue0 = v14->static_fields->PRIORITY_NORMAL;
  this->fields.sortValue0B = v14->static_fields->PRIORITY_NORMAL;
  BonusSelectSummonPartyServantListViewItem__InitAfterSecondSort(this, (const MethodInfo *)sort);
  BonusSelectSummonPartyServantListViewItem__GetTdInfo(this, &tdMaxLv[1], tdMaxLv, v15);
  iconLabelInfo = this->fields.iconLabelInfo;
  v17 = tdMaxLv[1];
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v18 = System_Math__Max_45149472(v17, 1, 0LL);
  if ( !iconLabelInfo )
    goto LABEL_23;
  IconLabelInfo__Set_28463004(iconLabelInfo, 33, v18, tdMaxLv[0], 0, 0, 0, 0, 0LL);
  if ( !sort )
    goto LABEL_23;
  sortKind = sort->fields.sortKind;
  if ( sortKind != 27 )
  {
    if ( sortKind == 4 )
      this->fields.sortValue1 = tdMaxLv[1];
    return 1;
  }
  v28 = this->fields.servantEntity;
  this->fields.sortValue0B = 0LL;
  if ( !v28 )
LABEL_23:
    sub_B5D69C(v18, v19);
  this->fields.sortValue1 = v28->fields.collectionNo;
  v29 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.sortStr1, v29, v20, v21, v22, v23, v24, v25);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BonusSelectSummonPartyServantListViewItem___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E2A & 1) == 0 )
  {
    sub_B5D5C4(&BonusSelectSummonPartyServantListViewItem___c_TypeInfo, v1, v2, v3);
    byte_42E5E2A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BonusSelectSummonPartyServantListViewItem___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BonusSelectSummonPartyServantListViewItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BonusSelectSummonPartyServantListViewItem___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}