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
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  struct UserServantCollectionEntity_o *v24; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x21
  __int64 v26; // x22
  __int64 v27; // x24
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  ServantLimitMaster_o *v36; // x22
  int v37; // w24
  BalanceConfig_c *v38; // x8
  UserServantMaster_o *v39; // x23
  _QWORD *v40; // x23
  __int64 v41; // x25
  __int64 v42; // x26
  int32_t ServantIdMashu1; // w24
  int32_t v44; // w8
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  BalanceConfig_c *v51; // x0
  __int64 v52; // x23
  __int64 v53; // x24
  int32_t v54; // w22
  int32_t v55; // w25
  int32_t SpecialLimitCountPLD; // w24
  ServantOverwriteStatus_o *v57; // x23
  int32_t Rarity_k__BackingField; // w8
  struct UserServantCollectionEntity_o *v59; // x8
  __int64 v60; // x23
  __int64 v61; // x24
  int32_t classId; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_4CC25C1 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&ServantOverwriteStatus_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&UserServantCollectionEntity_TypeInfo);
    byte_4CC25C1 = 1;
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
  v15 = (UserServantCollectionEntity_o *)sub_1C715FC(UserServantCollectionEntity_TypeInfo);
  UserServantCollectionEntity___ctor_43417596(v15, userServantCollectionEntity, 0);
  if ( !materialEventLogInfo )
    goto LABEL_46;
  if ( !v15 )
    goto LABEL_46;
  v15->fields.maxLimitCount = materialEventLogInfo->fields.limit_count;
  this->fields.userSvtCollectionEntity = v15;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.isValentineList = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
  v24 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_46;
  v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v27 = *(_QWORD *)&v24->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&v24->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v63.fields.currentCryptoKey = v27;
  *(_QWORD *)&v63.fields.fakeValue = v26;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v63, 0);
  if ( !v25 )
    goto LABEL_46;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v25,
             (int32_t)Instance,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, (int32_t)Entity, v30, v31, v32, v33, v34, v35);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_46;
  v36 = (ServantLimitMaster_o *)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                       (*p_userSvtCollectionEntity)->fields.svtId,
                       0);
  v37 = (int)Instance;
  v38 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v38 = BalanceConfig_TypeInfo;
  }
  if ( v37 != v38->static_fields->ServantIdMashu1 )
  {
    v59 = *p_userSvtCollectionEntity;
    if ( *p_userSvtCollectionEntity )
    {
      v61 = *(_QWORD *)&v59->fields.svtId.fields.currentCryptoKey;
      v60 = *(_QWORD *)&v59->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v66.fields.currentCryptoKey = v61;
      *(_QWORD *)&v66.fields.fakeValue = v60;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v66, 0);
      if ( v36 )
      {
        Instance = ServantLimitMaster__GetEntity(v36, (int32_t)Instance, materialEventLogInfo->fields.limit_count, 0);
        if ( Instance )
        {
          Rarity_k__BackingField = *((_DWORD *)Instance + 6);
          goto LABEL_41;
        }
      }
    }
LABEL_46:
    sub_1C71608(Instance, v13);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
  v39 = (UserServantMaster_o *)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v39 )
    goto LABEL_46;
  Instance = UserServantMaster__getHeroineData(v39, BalanceConfig_TypeInfo->static_fields->ServantIdMashu1, 0);
  if ( !Instance )
    goto LABEL_46;
  v40 = Instance;
  v42 = *((_QWORD *)Instance + 12);
  v41 = *((_QWORD *)Instance + 13);
  ServantIdMashu1 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v64.fields.currentCryptoKey = v42;
  *(_QWORD *)&v64.fields.fakeValue = v41;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v64, 0);
  if ( !v36 )
    goto LABEL_46;
  Instance = ServantLimitMaster__GetEntity(v36, ServantIdMashu1, (int32_t)Instance, 0);
  if ( !Instance )
    goto LABEL_46;
  v44 = *((_DWORD *)Instance + 6);
  Instance = this->fields.userSvtCollectionEntity;
  this->fields.rarity = v44;
  if ( !Instance )
    goto LABEL_46;
  Instance = (void *)UserServantCollectionEntity__IsCostumeGet(
                       (UserServantCollectionEntity_o *)Instance,
                       BalanceConfig_TypeInfo->static_fields->SpecialLimitCountPLD,
                       0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v51 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v51 = BalanceConfig_TypeInfo;
    }
    v53 = v40[12];
    v52 = v40[13];
    v54 = v51->static_fields->ServantIdMashu1;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v65.fields.currentCryptoKey = v53;
    *(_QWORD *)&v65.fields.fakeValue = v52;
    v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v65, 0);
    SpecialLimitCountPLD = BalanceConfig_TypeInfo->static_fields->SpecialLimitCountPLD;
    v57 = (ServantOverwriteStatus_o *)sub_1C715FC(ServantOverwriteStatus_TypeInfo);
    ServantOverwriteStatus___ctor_33653032(v57, v54, v55, SpecialLimitCountPLD, 0);
    if ( v57 )
    {
      Rarity_k__BackingField = v57->fields._Rarity_k__BackingField;
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
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.info,
    (int32_t)materialEventLogInfo,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
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

  if ( (byte_4CC25C2 & 1) == 0 )
  {
    sub_1C713B0(&Method_GameObjectExtensions_SafeGetComponent_UIWidget___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC25C2 = 1;
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
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
                             (const MethodInfo_31A49B8 *)Method_GameObjectExtensions_SafeGetComponent_UIWidget___);
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
      sub_1C71608(gameObject, v4);
    }
  }
}


void MaterialEventLogServantListViewItem__InactiveDummy(
        MaterialEventLogServantListViewItem_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *viewObject; // x20

  if ( (byte_4CC25C3 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC25C3 = 1;
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

  if ( (byte_4CC25C5 & 1) == 0 )
  {
    sub_1C713B0(&FilterKindList_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4CC25C5 = 1;
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
                                          (const MethodInfo_37F79D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                              (const MethodInfo_37F79D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
      {
        return 0;
      }
      goto LABEL_15;
    }
LABEL_24:
    sub_1C71608(ClassGroupFilterKindList, sort);
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
                                                                       (const MethodInfo_37F79D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  RarityFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_24;
  v12 = (ListViewSort_FilterKind_array *)ClassGroupFilterKindList;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_37F79D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
      sub_1C71608(0, method);
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
      IconLabelInfo__Set_41192248(iconLabelInfo, 57, collectionNo, 0, 0, 0, 0, 0, 0, 0);
      return;
    }
LABEL_10:
    sub_1C71608(this, sortKind);
  }
  maxLimitCount = userSvtCollectionEntity->fields.maxLimitCount;
  v6 = this->fields.iconLabelInfo;
  this->fields.sortValue1 = maxLimitCount;
  if ( !v6 )
    goto LABEL_10;
  if ( (int)maxLimitCount < 1 )
    IconLabelInfo__Clear(v6, 0);
  else
    IconLabelInfo__Set_41192248(v6, 9, maxLimitCount, 0, 0, 0, 0, 0, 0, 0);
}


bool MaterialEventLogServantListViewItem__SetSortValue(
        MaterialEventLogServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  _BOOL4 isDummy; // w8
  int64_t index; // x8
  int32_t v12; // w1
  struct System_String_o **p_sortStr1; // x19
  bool result; // w0

  if ( (byte_4CC25C4 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC25C4 = 1;
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
  v12 = StringLiteral_1/*""*/;
  this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
  p_sortStr1 = &this->fields.sortStr1;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_sortStr1, v12, (int32_t)method, v3, v4, v5, v6, v7);
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