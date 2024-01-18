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
  bool v22; // w8
  UserServantCollectionEntity_o *v23; // x22
  void *Instance; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  struct UserServantCollectionEntity_o *v32; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v33; // x21
  __int64 v34; // x22
  __int64 v35; // x24
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  ServantLimitMaster_o *v44; // x22
  int v45; // w24
  BalanceConfig_c *v46; // x8
  UserServantMaster_o *v47; // x23
  __int64 v48; // x24
  __int64 v49; // x25
  int32_t ServantIdMashu1; // w23
  int32_t limit_count; // w2
  ServantLimitMaster_o *v52; // x0
  int32_t v53; // w1
  struct UserServantCollectionEntity_o *v54; // x8
  __int64 v55; // x23
  __int64 v56; // x24
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  int32_t v63; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_4188199 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, v15);
    sub_B2C35C(&DataManager_TypeInfo, v16);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B2C35C(&UserServantCollectionEntity_TypeInfo, v20);
    byte_4188199 = 1;
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
    v22 = 1;
    goto LABEL_41;
  }
  v23 = (UserServantCollectionEntity_o *)sub_B2C42C(UserServantCollectionEntity_TypeInfo);
  UserServantCollectionEntity___ctor_21609996(v23, userSvtCollectionEntity, 0LL);
  if ( !materialEventLogInfo )
    goto LABEL_43;
  if ( !v23 )
    goto LABEL_43;
  v23->fields.maxLimitCount = materialEventLogInfo->fields.limit_count;
  this->fields.userSvtCollectionEntity = v23;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
    (System_Int32_array **)v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.isValentineList = 1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v32 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_43;
  v33 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v35 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v64.fields.currentCryptoKey = v35;
  *(_QWORD *)&v64.fields.fakeValue = v34;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v64, 0LL);
  if ( !v33 )
    goto LABEL_43;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v33,
                                       (int32_t)Instance,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_43;
  v44 = (ServantLimitMaster_o *)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                       (*p_userSvtCollectionEntity)->fields.svtId,
                       0LL);
  v45 = (int)Instance;
  v46 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v46 = BalanceConfig_TypeInfo;
  }
  if ( v45 != v46->static_fields->ServantIdMashu1 )
  {
    v54 = *p_userSvtCollectionEntity;
    if ( *p_userSvtCollectionEntity )
    {
      v56 = *(_QWORD *)&v54->fields.svtId.fields.currentCryptoKey;
      v55 = *(_QWORD *)&v54->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v66.fields.currentCryptoKey = v56;
      *(_QWORD *)&v66.fields.fakeValue = v55;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v66, 0LL);
      if ( v44 )
      {
        limit_count = materialEventLogInfo->fields.limit_count;
        v53 = (int)Instance;
        v52 = v44;
        goto LABEL_38;
      }
    }
LABEL_43:
    sub_B2C434(Instance, v21);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
  v47 = (UserServantMaster_o *)Instance;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v47 )
    goto LABEL_43;
  Instance = UserServantMaster__getHeroineData(v47, BalanceConfig_TypeInfo->static_fields->ServantIdMashu1, 0LL);
  if ( !Instance )
    goto LABEL_43;
  v49 = *((_QWORD *)Instance + 12);
  v48 = *((_QWORD *)Instance + 13);
  ServantIdMashu1 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu1;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v65.fields.currentCryptoKey = v49;
  *(_QWORD *)&v65.fields.fakeValue = v48;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v65, 0LL);
  if ( !v44 )
    goto LABEL_43;
  limit_count = (int)Instance;
  v52 = v44;
  v53 = ServantIdMashu1;
LABEL_38:
  Instance = ServantLimitMaster__GetEntity(v52, v53, limit_count, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_43;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_43;
  v63 = *((_DWORD *)Instance + 6);
  this->fields.info = materialEventLogInfo;
  this->fields.rarity = v63;
  this->fields.collectiionStatus = 2;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.info,
    (System_Int32_array **)materialEventLogInfo,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v22 = 0;
  this->fields.sortValue2 = 0LL;
LABEL_41:
  Instance = this->fields.iconLabelInfo;
  this->fields.isDummy = v22;
  if ( !Instance )
    goto LABEL_43;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


void __fastcall MaterialEventLogServantListViewItem__DummyVisible(
        MaterialEventLogServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *viewObject; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v9; // x0

  if ( (byte_418819A & 1) == 0 )
  {
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_UIWidget___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_418819A = 1;
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
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
        v9 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
        Component_srcLineSprite = (UnityEngine_Object_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                            v9,
                                                            (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_UIWidget___);
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
      sub_B2C434(gameObject, v6);
    }
  }
}


void __fastcall MaterialEventLogServantListViewItem__InactiveDummy(
        MaterialEventLogServantListViewItem_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *viewObject; // x20

  if ( (byte_418819B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418819B = 1;
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
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *RarityFilterKindList; // x8
  ListViewSort_FilterKind_array *v13; // x21
  ListViewSort_FilterKind_array *v14; // x0

  if ( (byte_418819D & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_418819D = 1;
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
                                          (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL) )
  {
    v9 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v9 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v9->static_fields->ClassFilterKindList;
    if ( ClassGroupFilterKindList )
    {
      v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                               ClassGroupFilterKindList,
                                               (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_17;
    }
LABEL_27:
    sub_B2C434(ClassGroupFilterKindList, sort);
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
    return 0;
LABEL_17:
  v11 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v11->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_27;
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                                                  ClassGroupFilterKindList,
                                                                                  (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  RarityFilterKindList = FilterKindList_TypeInfo->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_27;
  v13 = (ListViewSort_FilterKind_array *)ClassGroupFilterKindList;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v13, 0LL)
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
      sub_B2C434(0LL, method);
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
      IconLabelInfo__Set_27362128(iconLabelInfo, 57, collectionNo, 0, 0, 0, 0, 0, 0LL);
      return;
    }
LABEL_11:
    sub_B2C434(this, sortKind);
  }
  maxLimitCount = userSvtCollectionEntity->fields.maxLimitCount;
  v6 = this->fields.iconLabelInfo;
  this->fields.sortValue1 = maxLimitCount;
  if ( !v6 )
    goto LABEL_11;
  if ( (int)maxLimitCount < 1 )
    IconLabelInfo__Clear(v6, 0LL);
  else
    IconLabelInfo__Set_27362128(v6, 9, maxLimitCount, 0, 0, 0, 0, 0, 0LL);
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

  if ( (byte_418819C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, sort);
    byte_418819C = 1;
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
  sub_B2C2F8(
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