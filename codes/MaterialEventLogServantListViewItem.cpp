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
  __int64 v37; // x1
  bool v38; // w8
  UserServantCollectionEntity_o *v39; // x22
  void *Instance; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  struct UserServantCollectionEntity_o *v48; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v49; // x21
  __int64 v50; // x22
  __int64 v51; // x24
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  ServantLimitMaster_o *v60; // x22
  int v61; // w24
  BalanceConfig_c *v62; // x8
  UserServantMaster_o *v63; // x23
  __int64 v64; // x24
  __int64 v65; // x25
  int32_t ServantIdMashu1; // w23
  int32_t limit_count; // w2
  ServantLimitMaster_o *v68; // x0
  int32_t v69; // w1
  struct UserServantCollectionEntity_o *v70; // x8
  __int64 v71; // x23
  __int64 v72; // x24
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  int32_t v79; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16

  if ( (byte_42EC354 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, index, (_DWORD)userSvtCollectionEntity, *(_QWORD *)&kind);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v19, v20, v21);
    sub_B5D5C4(&DataManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25, v26, v27);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32, v33);
    sub_B5D5C4(&UserServantCollectionEntity_TypeInfo, v34, v35, v36);
    byte_42EC354 = 1;
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
    v38 = 1;
    goto LABEL_41;
  }
  v39 = (UserServantCollectionEntity_o *)sub_B5D694(UserServantCollectionEntity_TypeInfo);
  UserServantCollectionEntity___ctor_21797428(v39, userSvtCollectionEntity, 0LL);
  if ( !materialEventLogInfo )
    goto LABEL_43;
  if ( !v39 )
    goto LABEL_43;
  v39->fields.maxLimitCount = materialEventLogInfo->fields.limit_count;
  this->fields.userSvtCollectionEntity = v39;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
    (System_Int32_array **)v39,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.isValentineList = 1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v48 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_43;
  v49 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v51 = *(_QWORD *)&v48->fields.svtId.fields.currentCryptoKey;
  v50 = *(_QWORD *)&v48->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v80.fields.currentCryptoKey = v51;
  *(_QWORD *)&v80.fields.fakeValue = v50;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v80, 0LL);
  if ( !v49 )
    goto LABEL_43;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v49,
                                       (int32_t)Instance,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_43;
  v60 = (ServantLimitMaster_o *)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                       (*p_userSvtCollectionEntity)->fields.svtId,
                       0LL);
  v61 = (int)Instance;
  v62 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v62 = BalanceConfig_TypeInfo;
  }
  if ( v61 != v62->static_fields->ServantIdMashu1 )
  {
    v70 = *p_userSvtCollectionEntity;
    if ( *p_userSvtCollectionEntity )
    {
      v72 = *(_QWORD *)&v70->fields.svtId.fields.currentCryptoKey;
      v71 = *(_QWORD *)&v70->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v82.fields.currentCryptoKey = v72;
      *(_QWORD *)&v82.fields.fakeValue = v71;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v82, 0LL);
      if ( v60 )
      {
        limit_count = materialEventLogInfo->fields.limit_count;
        v69 = (int)Instance;
        v68 = v60;
        goto LABEL_38;
      }
    }
LABEL_43:
    sub_B5D69C(Instance, v37);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  v63 = (UserServantMaster_o *)Instance;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v63 )
    goto LABEL_43;
  Instance = UserServantMaster__getHeroineData(v63, BalanceConfig_TypeInfo->static_fields->ServantIdMashu1, 0LL);
  if ( !Instance )
    goto LABEL_43;
  v65 = *((_QWORD *)Instance + 12);
  v64 = *((_QWORD *)Instance + 13);
  ServantIdMashu1 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu1;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v81.fields.currentCryptoKey = v65;
  *(_QWORD *)&v81.fields.fakeValue = v64;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v81, 0LL);
  if ( !v60 )
    goto LABEL_43;
  limit_count = (int)Instance;
  v68 = v60;
  v69 = ServantIdMashu1;
LABEL_38:
  Instance = ServantLimitMaster__GetEntity(v68, v69, limit_count, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_43;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_43;
  v79 = *((_DWORD *)Instance + 6);
  this->fields.info = materialEventLogInfo;
  this->fields.rarity = v79;
  this->fields.collectiionStatus = 2;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.info,
    (System_Int32_array **)materialEventLogInfo,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  v38 = 0;
  this->fields.sortValue2 = 0LL;
LABEL_41:
  Instance = this->fields.iconLabelInfo;
  this->fields.isDummy = v38;
  if ( !Instance )
    goto LABEL_43;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


void __fastcall MaterialEventLogServantListViewItem__DummyVisible(
        MaterialEventLogServantListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *viewObject; // x20
  __int64 v12; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v15; // x0

  if ( (byte_42EC355 & 1) == 0 )
  {
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_UIWidget___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42EC355 = 1;
  }
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
    return;
  gameObject = (UnityEngine_Component_o *)this->fields.viewObject;
  if ( !gameObject )
    goto LABEL_36;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)gameObject,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( this->fields.isDummy )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.viewObject;
    if ( !gameObject )
      goto LABEL_36;
    ListViewObject__SetVisible((ListViewObject_o *)gameObject, 0, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !this->fields.isCoercionInactive )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.viewObject;
        if ( !gameObject )
          goto LABEL_36;
        v15 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
        Component_srcLineSprite = (UnityEngine_Object_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                            v15,
                                                            (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_UIWidget___);
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
    gameObject = (UnityEngine_Component_o *)this->fields.viewObject;
    if ( !gameObject )
      goto LABEL_36;
    gameObject = (UnityEngine_Component_o *)ListViewObject__GetVisible((ListViewObject_o *)gameObject, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
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
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( Component_srcLineSprite )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0, 0LL);
        return;
      }
LABEL_36:
      sub_B5D69C(gameObject, v12);
    }
  }
}


void __fastcall MaterialEventLogServantListViewItem__InactiveDummy(
        MaterialEventLogServantListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *viewObject; // x20

  if ( (byte_42EC356 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC356 = 1;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  FilterKindList_c *v9; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *RarityFilterKindList; // x8
  ListViewSort_FilterKind_array *v16; // x21
  ListViewSort_FilterKind_array *v17; // x0

  if ( (byte_42EC358 & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6, v7, v8);
    byte_42EC358 = 1;
  }
  if ( !sort )
    return 0;
  v9 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v9->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_27;
  v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL) )
  {
    v12 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v12 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v12->static_fields->ClassFilterKindList;
    if ( ClassGroupFilterKindList )
    {
      v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                               ClassGroupFilterKindList,
                                               (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_17;
    }
LABEL_27:
    sub_B5D69C(ClassGroupFilterKindList, sort);
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
    return 0;
LABEL_17:
  v14 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v14->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_27;
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                                                  ClassGroupFilterKindList,
                                                                                  (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  RarityFilterKindList = FilterKindList_TypeInfo->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_27;
  v16 = (ListViewSort_FilterKind_array *)ClassGroupFilterKindList;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
      sub_B5D69C(0LL, method);
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
      IconLabelInfo__Set_28463004(iconLabelInfo, 57, collectionNo, 0, 0, 0, 0, 0, 0LL);
      return;
    }
LABEL_11:
    sub_B5D69C(this, sortKind);
  }
  maxLimitCount = userSvtCollectionEntity->fields.maxLimitCount;
  v6 = this->fields.iconLabelInfo;
  this->fields.sortValue1 = maxLimitCount;
  if ( !v6 )
    goto LABEL_11;
  if ( (int)maxLimitCount < 1 )
    IconLabelInfo__Clear(v6, 0LL);
  else
    IconLabelInfo__Set_28463004(v6, 9, maxLimitCount, 0, 0, 0, 0, 0, 0LL);
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

  if ( (byte_42EC357 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)sort, (_DWORD)method, v3);
    byte_42EC357 = 1;
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
  sub_B5D560(
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