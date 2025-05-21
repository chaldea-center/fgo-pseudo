// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogServantListViewItem___ctor(
        MaterialEventLogServantListViewItem_o *this,
        int32_t idx,
        UserServantCollectionEntity_o *userServantCollectionEntity,
        int32_t kind,
        MaterialEventLogListViewItem_Info_o *materialEventLogInfo,
        bool isDummyCreate,
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
  bool v23; // w8
  UserServantCollectionEntity_o *v24; // x22
  void *Instance; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  struct UserServantCollectionEntity_o *v29; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x21
  __int64 v31; // x22
  __int64 v32; // x24
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x21
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  ServantLimitMaster_o *v37; // x22
  int v38; // w24
  BalanceConfig_c *v39; // x8
  UserServantMaster_o *v40; // x23
  _QWORD *v41; // x23
  __int64 v42; // x25
  __int64 v43; // x26
  int32_t ServantIdMashu1; // w24
  int32_t v45; // w8
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  BalanceConfig_c *v48; // x0
  __int64 v49; // x23
  __int64 v50; // x24
  int32_t v51; // w22
  int32_t v52; // w25
  int32_t SpecialLimitCountPLD; // w24
  ServantOverwriteStatus_o *v54; // x23
  int32_t Rarity_k__BackingField; // w8
  struct UserServantCollectionEntity_o *v56; // x8
  __int64 v57; // x23
  __int64 v58; // x24
  int32_t classId; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_4B3FDB7 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitMaster___, v13);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantMaster___, v15);
    sub_1BDB878(&DataManager_TypeInfo, v16);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1BDB878(&ServantOverwriteStatus_TypeInfo, v19);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1BDB878(&UserServantCollectionEntity_TypeInfo, v21);
    byte_4B3FDB7 = 1;
  }
  MaterialCollectionServantListViewItem___ctor(
    (MaterialCollectionServantListViewItem_o *)this,
    idx,
    userServantCollectionEntity,
    kind,
    0LL);
  this->fields.index = idx;
  this->fields.displayKind = kind;
  if ( isDummyCreate )
  {
    v23 = 1;
    goto LABEL_44;
  }
  v24 = (UserServantCollectionEntity_o *)sub_1BDBAC4(UserServantCollectionEntity_TypeInfo);
  UserServantCollectionEntity___ctor_42069428(v24, userServantCollectionEntity, 0LL);
  if ( !materialEventLogInfo )
    goto LABEL_46;
  if ( !v24 )
    goto LABEL_46;
  v24->fields.maxLimitCount = materialEventLogInfo->fields.limit_count;
  this->fields.userSvtCollectionEntity = v24;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, (int32_t)v24, v26, v27);
  this->fields.isValentineList = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  v29 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_46;
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v32 = *(_QWORD *)&v29->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&v29->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v60.fields.currentCryptoKey = v32;
  *(_QWORD *)&v60.fields.fakeValue = v31;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v60, 0LL);
  if ( !v30 )
    goto LABEL_46;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v30,
             (int32_t)Instance,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v35, v36);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_46;
  v37 = (ServantLimitMaster_o *)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                       (*p_userSvtCollectionEntity)->fields.svtId,
                       0LL);
  v38 = (int)Instance;
  v39 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v39 = BalanceConfig_TypeInfo;
  }
  if ( v38 != v39->static_fields->ServantIdMashu1 )
  {
    v56 = *p_userSvtCollectionEntity;
    if ( *p_userSvtCollectionEntity )
    {
      v58 = *(_QWORD *)&v56->fields.svtId.fields.currentCryptoKey;
      v57 = *(_QWORD *)&v56->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v63.fields.currentCryptoKey = v58;
      *(_QWORD *)&v63.fields.fakeValue = v57;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v63, 0LL);
      if ( v37 )
      {
        Instance = ServantLimitMaster__GetEntity(v37, (int32_t)Instance, materialEventLogInfo->fields.limit_count, 0LL);
        if ( Instance )
        {
          Rarity_k__BackingField = *((_DWORD *)Instance + 6);
          goto LABEL_41;
        }
      }
    }
LABEL_46:
    sub_1BDBAD4(Instance, v22);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
  v40 = (UserServantMaster_o *)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v40 )
    goto LABEL_46;
  Instance = UserServantMaster__getHeroineData(v40, BalanceConfig_TypeInfo->static_fields->ServantIdMashu1, 0LL);
  if ( !Instance )
    goto LABEL_46;
  v41 = Instance;
  v43 = *((_QWORD *)Instance + 12);
  v42 = *((_QWORD *)Instance + 13);
  ServantIdMashu1 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v61.fields.currentCryptoKey = v43;
  *(_QWORD *)&v61.fields.fakeValue = v42;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v61, 0LL);
  if ( !v37 )
    goto LABEL_46;
  Instance = ServantLimitMaster__GetEntity(v37, ServantIdMashu1, (int32_t)Instance, 0LL);
  if ( !Instance )
    goto LABEL_46;
  v45 = *((_DWORD *)Instance + 6);
  Instance = this->fields.userSvtCollectionEntity;
  this->fields.rarity = v45;
  if ( !Instance )
    goto LABEL_46;
  Instance = (void *)UserServantCollectionEntity__IsCostumeGet(
                       (UserServantCollectionEntity_o *)Instance,
                       BalanceConfig_TypeInfo->static_fields->SpecialLimitCountPLD,
                       0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v48 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v48 = BalanceConfig_TypeInfo;
    }
    v50 = v41[12];
    v49 = v41[13];
    v51 = v48->static_fields->ServantIdMashu1;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v62.fields.currentCryptoKey = v50;
    *(_QWORD *)&v62.fields.fakeValue = v49;
    v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v62, 0LL);
    SpecialLimitCountPLD = BalanceConfig_TypeInfo->static_fields->SpecialLimitCountPLD;
    v54 = (ServantOverwriteStatus_o *)sub_1BDBAC4(ServantOverwriteStatus_TypeInfo);
    ServantOverwriteStatus___ctor_33054568(v54, v51, v52, SpecialLimitCountPLD, 0LL);
    if ( v54 )
    {
      Rarity_k__BackingField = v54->fields._Rarity_k__BackingField;
LABEL_41:
      this->fields.rarity = Rarity_k__BackingField;
      goto LABEL_42;
    }
    goto LABEL_46;
  }
LABEL_42:
  if ( !*p_servantEntity )
    goto LABEL_46;
  classId = (*p_servantEntity)->fields.classId;
  this->fields.info = materialEventLogInfo;
  this->fields.classId = classId;
  this->fields.collectiionStatus = 2;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.info, (int32_t)materialEventLogInfo, v46, v47);
  v23 = 0;
  this->fields.sortValue2 = 0LL;
LABEL_44:
  Instance = this->fields.iconLabelInfo;
  this->fields.isDummy = v23;
  if ( !Instance )
    goto LABEL_46;
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
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v9; // x0

  if ( (byte_4B3FDB8 & 1) == 0 )
  {
    sub_1BDB878(&Method_GameObjectExtensions_SafeGetComponent_UIWidget___, method);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v4);
    byte_4B3FDB8 = 1;
  }
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
    return;
  gameObject = (UnityEngine_Component_o *)this->fields.viewObject;
  if ( !gameObject )
    goto LABEL_32;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( this->fields.isDummy )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.viewObject;
    if ( !gameObject )
      goto LABEL_32;
    ListViewObject__SetVisible((ListViewObject_o *)gameObject, 0, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(
                                              (UnityEngine_Object_o *)Component_object,
                                              0LL,
                                              0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !this->fields.isCoercionInactive )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.viewObject;
        if ( !gameObject )
          goto LABEL_32;
        v9 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             v9,
                             (const MethodInfo_308A008 *)Method_GameObjectExtensions_SafeGetComponent_UIWidget___);
      }
      goto LABEL_25;
    }
    if ( this->fields.isCoercionInactive )
      goto LABEL_25;
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      goto LABEL_25;
    gameObject = (UnityEngine_Component_o *)this->fields.viewObject;
    if ( !gameObject )
      goto LABEL_32;
    gameObject = (UnityEngine_Component_o *)ListViewObject__GetVisible((ListViewObject_o *)gameObject, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      goto LABEL_25;
  }
  if ( !Component_object )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0LL);
LABEL_25:
  if ( this->fields.isCoercionInactive )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)Component_object,
                                              0LL,
                                              0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( Component_object )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
        return;
      }
LABEL_32:
      sub_1BDBAD4(gameObject, v6);
    }
  }
}


void __fastcall MaterialEventLogServantListViewItem__InactiveDummy(
        MaterialEventLogServantListViewItem_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *viewObject; // x20

  if ( (byte_4B3FDB9 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B3FDB9 = 1;
  }
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  System_Collections_Generic_List_T__o *RarityFilterKindList; // x8
  ListViewSort_FilterKind_array *v13; // x21
  ListViewSort_FilterKind_array *v14; // x0

  if ( (byte_4B3FDBB & 1) == 0 )
  {
    sub_1BDB878(&FilterKindList_TypeInfo, sort);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_4B3FDBB = 1;
  }
  if ( !sort )
    return 0;
  v6 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v6 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v6->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_24;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL) )
  {
    v9 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v9 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v9->static_fields->ClassFilterKindList;
    if ( ClassGroupFilterKindList )
    {
      v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                               ClassGroupFilterKindList,
                                               (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_15;
    }
LABEL_24:
    sub_1BDBAD4(ClassGroupFilterKindList, sort);
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
    return 0;
LABEL_15:
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v11->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_24;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  RarityFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_24;
  v13 = (ListViewSort_FilterKind_array *)ClassGroupFilterKindList;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
      sub_1BDBAD4(0LL, method);
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
    goto LABEL_10;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( !userSvtCollectionEntity )
    goto LABEL_10;
  if ( sortKind != 9 )
  {
    iconLabelInfo = this->fields.iconLabelInfo;
    collectionNo = servantEntity->fields.collectionNo;
    this->fields.sortValue1 = this->fields.rarity;
    if ( iconLabelInfo )
    {
      IconLabelInfo__Set_39930232(iconLabelInfo, 57, collectionNo, 0, 0, 0, 0, 0, 0, 0LL);
      return;
    }
LABEL_10:
    sub_1BDBAD4(this, sortKind);
  }
  maxLimitCount = userSvtCollectionEntity->fields.maxLimitCount;
  v6 = this->fields.iconLabelInfo;
  this->fields.sortValue1 = maxLimitCount;
  if ( !v6 )
    goto LABEL_10;
  if ( (int)maxLimitCount < 1 )
    IconLabelInfo__Clear(v6, 0LL);
  else
    IconLabelInfo__Set_39930232(v6, 9, maxLimitCount, 0, 0, 0, 0, 0, 0, 0LL);
}


bool __fastcall MaterialEventLogServantListViewItem__SetSortValue(
        MaterialEventLogServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  _BOOL4 isDummy; // w8
  int64_t index; // x8
  int32_t v8; // w1
  struct System_String_o **p_sortStr1; // x19
  bool result; // w0

  if ( (byte_4B3FDBA & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, sort);
    byte_4B3FDBA = 1;
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
  v8 = (int)StringLiteral_1/*""*/;
  this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
  p_sortStr1 = &this->fields.sortStr1;
  sub_1BDB81C((CGThumbnailListItem_o *)p_sortStr1, v8, (int32_t)method, v3);
  result = 1;
  p_sortStr1[1] = 0LL;
  p_sortStr1[2] = 0LL;
  *((_WORD *)p_sortStr1 + 16) = 0;
  p_sortStr1[3] = 0LL;
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