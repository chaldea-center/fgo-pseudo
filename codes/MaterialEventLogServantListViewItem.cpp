void MaterialEventLogServantListViewItem___ctor(
        MaterialEventLogServantListViewItem_o *this,
        int32_t idx,
        UserServantCollectionEntity_o *userServantCollectionEntity,
        int32_t kind,
        MaterialEventLogListViewItem_Info_o *materialEventLogInfo,
        bool isDummyCreate,
        const MethodInfo *method)
{
  __int64 v13; // x1
  bool v14; // w8
  UserServantCollectionEntity_o *v15; // x22
  void *Instance; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  struct UserServantCollectionEntity_o *v20; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x21
  __int64 v22; // x22
  __int64 v23; // x24
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  ServantLimitMaster_o *v28; // x22
  int v29; // w24
  BalanceConfig_c *v30; // x8
  UserServantMaster_o *v31; // x23
  _QWORD *v32; // x23
  __int64 v33; // x25
  __int64 v34; // x26
  int32_t ServantIdMashu1; // w24
  int32_t v36; // w8
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  BalanceConfig_c *v39; // x0
  __int64 v40; // x23
  __int64 v41; // x24
  int32_t v42; // w22
  int32_t v43; // w25
  int32_t SpecialLimitCountPLD; // w24
  ServantOverwriteStatus_o *v45; // x23
  int32_t Rarity_k__BackingField; // w8
  struct UserServantCollectionEntity_o *v47; // x8
  __int64 v48; // x23
  __int64 v49; // x24
  int32_t classId; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4C22533 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&ServantOverwriteStatus_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&UserServantCollectionEntity_TypeInfo);
    byte_4C22533 = 1;
  }
  MaterialCollectionServantListViewItem___ctor(
    (MaterialCollectionServantListViewItem_o *)this,
    idx,
    userServantCollectionEntity,
    kind,
    0);
  this->fields.index = idx;
  this->fields.displayKind = kind;
  if ( isDummyCreate )
  {
    v14 = 1;
    goto LABEL_44;
  }
  v15 = (UserServantCollectionEntity_o *)sub_1C2D6DC(UserServantCollectionEntity_TypeInfo);
  UserServantCollectionEntity___ctor_42895988(v15, userServantCollectionEntity, 0);
  if ( !materialEventLogInfo )
    goto LABEL_46;
  if ( !v15 )
    goto LABEL_46;
  v15->fields.maxLimitCount = materialEventLogInfo->fields.limit_count;
  this->fields.userSvtCollectionEntity = v15;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, (int32_t)v15, v17, v18);
  this->fields.isValentineList = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  v20 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_46;
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v23 = *(_QWORD *)&v20->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&v20->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v51.fields.currentCryptoKey = v23;
  *(_QWORD *)&v51.fields.fakeValue = v22;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v51, 0);
  if ( !v21 )
    goto LABEL_46;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v21,
             (int32_t)Instance,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v26, v27);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_46;
  v28 = (ServantLimitMaster_o *)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                       (*p_userSvtCollectionEntity)->fields.svtId,
                       0);
  v29 = (int)Instance;
  v30 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v30 = BalanceConfig_TypeInfo;
  }
  if ( v29 != v30->static_fields->ServantIdMashu1 )
  {
    v47 = *p_userSvtCollectionEntity;
    if ( *p_userSvtCollectionEntity )
    {
      v49 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
      v48 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v54.fields.currentCryptoKey = v49;
      *(_QWORD *)&v54.fields.fakeValue = v48;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v54, 0);
      if ( v28 )
      {
        Instance = ServantLimitMaster__GetEntity(v28, (int32_t)Instance, materialEventLogInfo->fields.limit_count, 0);
        if ( Instance )
        {
          Rarity_k__BackingField = *((_DWORD *)Instance + 6);
          goto LABEL_41;
        }
      }
    }
LABEL_46:
    sub_1C2D6EC(Instance, v13);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  v31 = (UserServantMaster_o *)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v31 )
    goto LABEL_46;
  Instance = UserServantMaster__getHeroineData(v31, BalanceConfig_TypeInfo->static_fields->ServantIdMashu1, 0);
  if ( !Instance )
    goto LABEL_46;
  v32 = Instance;
  v34 = *((_QWORD *)Instance + 12);
  v33 = *((_QWORD *)Instance + 13);
  ServantIdMashu1 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v52.fields.currentCryptoKey = v34;
  *(_QWORD *)&v52.fields.fakeValue = v33;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v52, 0);
  if ( !v28 )
    goto LABEL_46;
  Instance = ServantLimitMaster__GetEntity(v28, ServantIdMashu1, (int32_t)Instance, 0);
  if ( !Instance )
    goto LABEL_46;
  v36 = *((_DWORD *)Instance + 6);
  Instance = this->fields.userSvtCollectionEntity;
  this->fields.rarity = v36;
  if ( !Instance )
    goto LABEL_46;
  Instance = (void *)UserServantCollectionEntity__IsCostumeGet(
                       (UserServantCollectionEntity_o *)Instance,
                       BalanceConfig_TypeInfo->static_fields->SpecialLimitCountPLD,
                       0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v39 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v39 = BalanceConfig_TypeInfo;
    }
    v41 = v32[12];
    v40 = v32[13];
    v42 = v39->static_fields->ServantIdMashu1;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v53.fields.currentCryptoKey = v41;
    *(_QWORD *)&v53.fields.fakeValue = v40;
    v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v53, 0);
    SpecialLimitCountPLD = BalanceConfig_TypeInfo->static_fields->SpecialLimitCountPLD;
    v45 = (ServantOverwriteStatus_o *)sub_1C2D6DC(ServantOverwriteStatus_TypeInfo);
    ServantOverwriteStatus___ctor_33445788(v45, v42, v43, SpecialLimitCountPLD, 0);
    if ( v45 )
    {
      Rarity_k__BackingField = v45->fields._Rarity_k__BackingField;
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.info, (int32_t)materialEventLogInfo, v37, v38);
  v14 = 0;
  this->fields.sortValue2 = 0;
LABEL_44:
  Instance = this->fields.iconLabelInfo;
  this->fields.isDummy = v14;
  if ( !Instance )
    goto LABEL_46;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void MaterialEventLogServantListViewItem__DummyVisible(
        MaterialEventLogServantListViewItem_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *viewObject; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4C22534 & 1) == 0 )
  {
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_UIWidget___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22534 = 1;
  }
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(viewObject, 0, 0) )
    return;
  gameObject = (UnityEngine_Component_o *)this->fields.viewObject;
  if ( !gameObject )
    goto LABEL_32;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
  if ( !gameObject )
    goto LABEL_32;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( this->fields.isDummy )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.viewObject;
    if ( !gameObject )
      goto LABEL_32;
    ListViewObject__SetVisible((ListViewObject_o *)gameObject, 0, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(
                                              (UnityEngine_Object_o *)Component_object,
                                              0,
                                              0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !this->fields.isCoercionInactive )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.viewObject;
        if ( !gameObject )
          goto LABEL_32;
        v7 = UnityEngine_Component__get_gameObject(gameObject, 0);
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             v7,
                             (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_UIWidget___);
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
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      goto LABEL_25;
    gameObject = (UnityEngine_Component_o *)this->fields.viewObject;
    if ( !gameObject )
      goto LABEL_32;
    gameObject = (UnityEngine_Component_o *)ListViewObject__GetVisible((ListViewObject_o *)gameObject, 0);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      goto LABEL_25;
  }
  if ( !Component_object )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
LABEL_25:
  if ( this->fields.isCoercionInactive )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)Component_object,
                                              0,
                                              0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( Component_object )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
        return;
      }
LABEL_32:
      sub_1C2D6EC(gameObject, v4);
    }
  }
}


void MaterialEventLogServantListViewItem__InactiveDummy(
        MaterialEventLogServantListViewItem_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *viewObject; // x20

  if ( (byte_4C22535 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22535 = 1;
  }
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(viewObject, 0, 0) )
    this->fields.isCoercionInactive = 1;
}


bool MaterialEventLogServantListViewItem__IsItemMatchFilter(
        MaterialEventLogServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(MaterialEventLogServantListViewItem_o *, ListViewSort_o *, const MethodInfo *))this->klass->vtable._5_IsMatchFilter.methodPtr)(
           this,
           sort,
           this->klass->vtable._5_IsMatchFilter.method);
}


bool MaterialEventLogServantListViewItem__IsMatchFilter(
        MaterialEventLogServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  return !this->fields.displayKind && MaterialEventLogServantListViewItem__IsMatchServantFilter(this, sort, method);
}


bool MaterialEventLogServantListViewItem__IsMatchServantFilter(
        MaterialEventLogServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v7; // x0
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  System_Collections_Generic_List_T__o *RarityFilterKindList; // x8
  ListViewSort_FilterKind_array *v12; // x21
  ListViewSort_FilterKind_array *v13; // x0

  if ( (byte_4C22537 & 1) == 0 )
  {
    sub_1C2D490(&FilterKindList_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4C22537 = 1;
  }
  if ( !sort )
    return 0;
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_24;
  v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v7, 0) )
  {
    v8 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v8 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v8->static_fields->ClassFilterKindList;
    if ( ClassGroupFilterKindList )
    {
      v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                              ClassGroupFilterKindList,
                                              (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
      {
        return 0;
      }
      goto LABEL_15;
    }
LABEL_24:
    sub_1C2D6EC(ClassGroupFilterKindList, sort);
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
    return 0;
LABEL_15:
  v10 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v10 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v10->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_24;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  RarityFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_24;
  v12 = (ListViewSort_FilterKind_array *)ClassGroupFilterKindList;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v12, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


void MaterialEventLogServantListViewItem__SetDummy(
        MaterialEventLogServantListViewItem_o *this,
        const MethodInfo *method)
{
  ListViewObject_o *viewObject; // x0

  if ( this->fields.isDummy )
  {
    viewObject = this->fields.viewObject;
    if ( !viewObject )
      sub_1C2D6EC(0, method);
    ListViewObject__SetVisible(viewObject, 0, 0);
  }
}


void MaterialEventLogServantListViewItem__SetIndex(
        MaterialEventLogServantListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  this->fields.index = index;
}


void MaterialEventLogServantListViewItem__SetServantSortParam(
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
      IconLabelInfo__Set_40696284(iconLabelInfo, 57, collectionNo, 0, 0, 0, 0, 0, 0, 0);
      return;
    }
LABEL_10:
    sub_1C2D6EC(this, sortKind);
  }
  maxLimitCount = userSvtCollectionEntity->fields.maxLimitCount;
  v6 = this->fields.iconLabelInfo;
  this->fields.sortValue1 = maxLimitCount;
  if ( !v6 )
    goto LABEL_10;
  if ( (int)maxLimitCount < 1 )
    IconLabelInfo__Clear(v6, 0);
  else
    IconLabelInfo__Set_40696284(v6, 9, maxLimitCount, 0, 0, 0, 0, 0, 0, 0);
}


bool MaterialEventLogServantListViewItem__SetSortValue(
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

  if ( (byte_4C22536 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22536 = 1;
  }
  isDummy = this->fields.isDummy;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = 0;
  if ( !isDummy
    && (((__int64 (__fastcall *)(MaterialEventLogServantListViewItem_o *, ListViewSort_o *, const MethodInfo *))this->klass->vtable._5_IsMatchFilter.methodPtr)(
          this,
          sort,
          this->klass->vtable._5_IsMatchFilter.method)
      & 1) == 0 )
  {
    return 0;
  }
  index = this->fields.index;
  this->fields.sortValue0 = 0;
  this->fields.sortValue0B = 0;
  this->fields.sortValue1 = index;
  v8 = StringLiteral_1/*""*/;
  this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
  p_sortStr1 = &this->fields.sortStr1;
  sub_1C2D434((CGThumbnailListItem_o *)p_sortStr1, v8, (int32_t)method, v3);
  result = 1;
  *((_WORD *)p_sortStr1 + 20) = 0;
  p_sortStr1[2] = 0;
  p_sortStr1[3] = 0;
  p_sortStr1[1] = 0;
  return result;
}


MaterialEventLogListViewItem_Info_o *MaterialEventLogServantListViewItem__get_Info(
        MaterialEventLogServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.info;
}


void MaterialEventLogServantListViewItem__initCoercionInactive(
        MaterialEventLogServantListViewItem_o *this,
        const MethodInfo *method)
{
  this->fields.isCoercionInactive = 0;
}