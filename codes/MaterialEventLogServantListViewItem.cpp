// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogServantListViewItem___ctor(
        MaterialEventLogServantListViewItem_o *this,
        int32_t index,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t kind,
        MaterialEventLogListViewItem_Info_o *materialEventLogInfo,
        bool isDummy,
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
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  bool v25; // w8
  UserServantCollectionEntity_o *v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantCollectionEntity_o *v36; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v37; // x21
  __int64 v38; // x22
  __int64 v39; // x24
  int32_t v40; // w0
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  WebViewManager_o *v49; // x0
  WarQuestSelectionMaster_o *v50; // x0
  ServantLimitMaster_o *v51; // x22
  int32_t v52; // w24
  BalanceConfig_c *v53; // x8
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x23
  UserServantEntity_o *HeroineData; // x0
  __int64 v56; // x24
  __int64 v57; // x25
  int32_t ServantIdMashu1; // w23
  int32_t v59; // w0
  int32_t limit_count; // w2
  ServantLimitMaster_o *v61; // x0
  int32_t v62; // w1
  struct UserServantCollectionEntity_o *v63; // x8
  __int64 v64; // x23
  __int64 v65; // x24
  int32_t v66; // w0
  ServantLimitEntity_o *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  int32_t rarity; // w8
  IconLabelInfo_o *iconLabelInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  if ( (byte_40F7B49 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, v15);
    sub_B16FFC(&DataManager_TypeInfo, v16);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&UserServantCollectionEntity_TypeInfo, v20);
    byte_40F7B49 = 1;
  }
  MaterialCollectionServantListViewItem___ctor(
    (MaterialCollectionServantListViewItem_o *)this,
    index,
    userSvtCollectionEntity,
    kind,
    0LL);
  this->fields.index = index;
  this->fields.displayKind = kind;
  if ( isDummy )
  {
    v25 = 1;
    goto LABEL_41;
  }
  v26 = (UserServantCollectionEntity_o *)sub_B170CC(UserServantCollectionEntity_TypeInfo, v21, v22, v23, v24);
  UserServantCollectionEntity___ctor_21403380(v26, userSvtCollectionEntity, 0LL);
  if ( !materialEventLogInfo )
    goto LABEL_43;
  if ( !v26 )
    goto LABEL_43;
  v26->fields.maxLimitCount = materialEventLogInfo->fields.limit_count;
  this->fields.userSvtCollectionEntity = v26;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.isValentineList = 1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v36 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_43;
  v37 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v39 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v76.fields.currentCryptoKey = v39;
  *(_QWORD *)&v76.fields.fakeValue = v38;
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v76, 0LL);
  if ( !v37 )
    goto LABEL_43;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v37,
                                       v40,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v49 )
    goto LABEL_43;
  v50 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v49,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_43;
  v51 = (ServantLimitMaster_o *)v50;
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          (*p_userSvtCollectionEntity)->fields.svtId,
          0LL);
  v53 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v53 = BalanceConfig_TypeInfo;
  }
  if ( v52 != v53->static_fields->ServantIdMashu1 )
  {
    v63 = *p_userSvtCollectionEntity;
    if ( *p_userSvtCollectionEntity )
    {
      v65 = *(_QWORD *)&v63->fields.svtId.fields.currentCryptoKey;
      v64 = *(_QWORD *)&v63->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v78.fields.currentCryptoKey = v65;
      *(_QWORD *)&v78.fields.fakeValue = v64;
      v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v78, 0LL);
      if ( v51 )
      {
        limit_count = materialEventLogInfo->fields.limit_count;
        v62 = v66;
        v61 = v51;
        goto LABEL_38;
      }
    }
LABEL_43:
    sub_B170D4();
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_43;
  HeroineData = UserServantMaster__getHeroineData(
                  Master_WarQuestSelectionMaster,
                  BalanceConfig_TypeInfo->static_fields->ServantIdMashu1,
                  0LL);
  if ( !HeroineData )
    goto LABEL_43;
  v57 = *(_QWORD *)&HeroineData->fields.limitCount.fields.currentCryptoKey;
  v56 = *(_QWORD *)&HeroineData->fields.limitCount.fields.fakeValue;
  ServantIdMashu1 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu1;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v77.fields.currentCryptoKey = v57;
  *(_QWORD *)&v77.fields.fakeValue = v56;
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v77, 0LL);
  if ( !v51 )
    goto LABEL_43;
  limit_count = v59;
  v61 = v51;
  v62 = ServantIdMashu1;
LABEL_38:
  v67 = ServantLimitMaster__GetEntity(v61, v62, limit_count, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_43;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !v67 )
    goto LABEL_43;
  rarity = v67->fields.rarity;
  this->fields.info = materialEventLogInfo;
  this->fields.rarity = rarity;
  this->fields.collectiionStatus = 2;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.info,
    (System_Int32_array **)materialEventLogInfo,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  v25 = 0;
  this->fields.sortValue2 = 0LL;
LABEL_41:
  iconLabelInfo = this->fields.iconLabelInfo;
  this->fields.isDummy = v25;
  if ( !iconLabelInfo )
    goto LABEL_43;
  IconLabelInfo__Clear(iconLabelInfo, 0LL);
}


void __fastcall MaterialEventLogServantListViewItem__DummyVisible(
        MaterialEventLogServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *viewObject; // x20
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  ListViewObject_o *v9; // x0
  UnityEngine_Component_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  ListViewObject_o *v12; // x0

  if ( (byte_40F7B4A & 1) == 0 )
  {
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_UIWidget___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F7B4A = 1;
  }
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
    return;
  v6 = (UnityEngine_Component_o *)this->fields.viewObject;
  if ( !v6 )
    goto LABEL_36;
  gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( this->fields.isDummy )
  {
    v9 = this->fields.viewObject;
    if ( !v9 )
      goto LABEL_36;
    ListViewObject__SetVisible(v9, 0, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
    {
      if ( !this->fields.isCoercionInactive )
      {
        v10 = (UnityEngine_Component_o *)this->fields.viewObject;
        if ( !v10 )
          goto LABEL_36;
        v11 = UnityEngine_Component__get_gameObject(v10, 0LL);
        Component_srcLineSprite = (UnityEngine_Object_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                            v11,
                                                            (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_UIWidget___);
      }
      goto LABEL_28;
    }
    if ( this->fields.isCoercionInactive )
      goto LABEL_28;
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
      goto LABEL_28;
    v12 = this->fields.viewObject;
    if ( !v12 )
      goto LABEL_36;
    if ( !ListViewObject__GetVisible(v12, 0LL) )
      goto LABEL_28;
  }
  if ( !Component_srcLineSprite )
    goto LABEL_36;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 1, 0LL);
LABEL_28:
  if ( this->fields.isCoercionInactive )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
    {
      if ( Component_srcLineSprite )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0, 0LL);
        return;
      }
LABEL_36:
      sub_B170D4();
    }
  }
}


void __fastcall MaterialEventLogServantListViewItem__InactiveDummy(
        MaterialEventLogServantListViewItem_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *viewObject; // x20

  if ( (byte_40F7B4B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7B4B = 1;
  }
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
    this->fields.isCoercionInactive = 1;
}


bool __fastcall MaterialEventLogServantListViewItem__IsItemMatchFilter(
        MaterialEventLogServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(MaterialEventLogServantListViewItem_o *, ListViewSort_o *, void *))this->klass->vtable._5_IsMatchFilter.method)(
           this,
           sort,
           this->klass[1]._1.image);
}


bool __fastcall MaterialEventLogServantListViewItem__IsMatchFilter(
        MaterialEventLogServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  return !this->fields.displayKind && MaterialEventLogServantListViewItem__IsMatchServantFilter(this, sort, method);
}


bool __fastcall MaterialEventLogServantListViewItem__IsMatchServantFilter(
        MaterialEventLogServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  FilterKindList_c *v6; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassFilterKindList; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  Voice_BATTLE_array *v14; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *v15; // x8
  ListViewSort_FilterKind_array *v16; // x21
  ListViewSort_FilterKind_array *v17; // x0

  if ( (byte_40F7B4D & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_40F7B4D = 1;
  }
  if ( !sort )
    return 0;
  v6 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v6 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v6->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_27;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL) )
  {
    v9 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v9 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v9->static_fields->ClassFilterKindList;
    if ( ClassFilterKindList )
    {
      v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                               ClassFilterKindList,
                                               (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_17;
    }
LABEL_27:
    sub_B170D4();
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
    return 0;
LABEL_17:
  v12 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v12->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_27;
  v14 = System_Collections_Generic_List_Voice_BATTLE___ToArray(
          RarityFilterKindList,
          (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  v15 = FilterKindList_TypeInfo->static_fields->RarityFilterKindList;
  if ( !v15 )
    goto LABEL_27;
  v16 = (ListViewSort_FilterKind_array *)v14;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)v15,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v16, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall MaterialEventLogServantListViewItem__SetDummy(
        MaterialEventLogServantListViewItem_o *this,
        const MethodInfo *method)
{
  ListViewObject_o *viewObject; // x0

  if ( this->fields.isDummy )
  {
    viewObject = this->fields.viewObject;
    if ( !viewObject )
      sub_B170D4();
    ListViewObject__SetVisible(viewObject, 0, 0LL);
  }
}


void __fastcall MaterialEventLogServantListViewItem__SetIndex(
        MaterialEventLogServantListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  this->fields.index = index;
}


void __fastcall MaterialEventLogServantListViewItem__SetServantSortParam(
        MaterialEventLogServantListViewItem_o *this,
        int32_t sortKind,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int64_t maxLimitCount; // x2
  IconLabelInfo_o *v6; // x8
  IconLabelInfo_o *iconLabelInfo; // x8
  int32_t collectionNo; // w2

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_11;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( !userSvtCollectionEntity )
    goto LABEL_11;
  if ( sortKind != 9 )
  {
    iconLabelInfo = this->fields.iconLabelInfo;
    collectionNo = servantEntity->fields.collectionNo;
    this->fields.sortValue1 = this->fields.rarity;
    if ( iconLabelInfo )
    {
      IconLabelInfo__Set_28888132(iconLabelInfo, 57, collectionNo, 0, 0, 0, 0, 0, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
  maxLimitCount = userSvtCollectionEntity->fields.maxLimitCount;
  v6 = this->fields.iconLabelInfo;
  this->fields.sortValue1 = maxLimitCount;
  if ( !v6 )
    goto LABEL_11;
  if ( (int)maxLimitCount < 1 )
    IconLabelInfo__Clear(v6, 0LL);
  else
    IconLabelInfo__Set_28888132(v6, 9, maxLimitCount, 0, 0, 0, 0, 0, 0LL);
}


bool __fastcall MaterialEventLogServantListViewItem__SetSortValue(
        MaterialEventLogServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  _BOOL4 isDummy; // w8
  int64_t index; // x8
  System_Int32_array **v12; // x1
  bool result; // w0

  if ( (byte_40F7B4C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, sort);
    byte_40F7B4C = 1;
  }
  isDummy = this->fields.isDummy;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = 0LL;
  if ( !isDummy
    && (((__int64 (__fastcall *)(MaterialEventLogServantListViewItem_o *, ListViewSort_o *, void *))this->klass->vtable._5_IsMatchFilter.method)(
          this,
          sort,
          this->klass[1]._1.image) & 1) == 0 )
  {
    return 0;
  }
  index = this->fields.index;
  this->fields.sortValue0 = 0LL;
  this->fields.sortValue0B = 0LL;
  this->fields.sortValue1 = index;
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sortStr1,
    v12,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  result = 1;
  this->fields.sortValue1B = 0LL;
  this->fields.sortValue2 = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue2B = 0LL;
  return result;
}


MaterialEventLogListViewItem_Info_o *__fastcall MaterialEventLogServantListViewItem__get_Info(
        MaterialEventLogServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.info;
}


void __fastcall MaterialEventLogServantListViewItem__initCoercionInactive(
        MaterialEventLogServantListViewItem_o *this,
        const MethodInfo *method)
{
  this->fields.isCoercionInactive = 0;
}