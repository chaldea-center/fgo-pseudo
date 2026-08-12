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
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int32_t limit_count; // w8
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  __int64 v25; // x2
  struct UserServantCollectionEntity_o *v26; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x21
  __int64 v28; // x22
  __int64 v29; // x24
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x21
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  ServantLimitMaster_o *v38; // x22
  __int64 v39; // x2
  int v40; // w24
  BalanceConfig_c *v41; // x8
  __int64 v42; // x2
  UserServantMaster_o *v43; // x23
  __int64 v44; // x2
  _QWORD *v45; // x23
  __int64 v46; // x25
  __int64 v47; // x26
  int32_t ServantIdMashu1; // w24
  int32_t v49; // w8
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  BalanceConfig_c *v56; // x0
  __int64 v57; // x23
  __int64 v58; // x24
  int32_t v59; // w22
  int32_t v60; // w25
  int32_t SpecialLimitCountPLD; // w24
  ServantOverwriteStatus_o *v62; // x23
  int32_t Rarity_k__BackingField; // w8
  struct UserServantCollectionEntity_o *v64; // x8
  __int64 v65; // x23
  __int64 v66; // x24
  int32_t classId; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_596B781 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantOverwriteStatus_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&UserServantCollectionEntity_TypeInfo);
    byte_596B781 = 1;
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
  v15 = (UserServantCollectionEntity_o *)sub_2213CCC(UserServantCollectionEntity_TypeInfo);
  UserServantCollectionEntity___ctor_50146596(v15, userServantCollectionEntity, 0);
  if ( !materialEventLogInfo )
    goto LABEL_46;
  if ( !v15 )
    goto LABEL_46;
  limit_count = materialEventLogInfo->fields.limit_count;
  this->fields.userSvtCollectionEntity = v15;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  v15->fields.maxLimitCount = limit_count;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.isValentineList = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v26 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_46;
  v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v28 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v25);
  *(_QWORD *)&v68.fields.currentCryptoKey = v28;
  *(_QWORD *)&v68.fields.fakeValue = v29;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v68, 0);
  if ( !v27 )
    goto LABEL_46;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v27,
             (int32_t)Instance,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)Entity,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_46;
  v38 = (ServantLimitMaster_o *)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                       (*p_userSvtCollectionEntity)->fields.svtId,
                       0);
  v40 = (int)Instance;
  v41 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13, v39);
    v41 = BalanceConfig_TypeInfo;
  }
  if ( v40 != v41->static_fields->ServantIdMashu1 )
  {
    v64 = *p_userSvtCollectionEntity;
    if ( *p_userSvtCollectionEntity )
    {
      v65 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
      v66 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v39);
      *(_QWORD *)&v71.fields.currentCryptoKey = v65;
      *(_QWORD *)&v71.fields.fakeValue = v66;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v71, 0);
      if ( v38 )
      {
        Instance = ServantLimitMaster__GetEntity(v38, (int32_t)Instance, materialEventLogInfo->fields.limit_count, 0);
        if ( Instance )
        {
          Rarity_k__BackingField = *((_DWORD *)Instance + 6);
          goto LABEL_41;
        }
      }
    }
LABEL_46:
    sub_2213CDC(Instance, v13);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13, v39);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  v43 = (UserServantMaster_o *)Instance;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13, v42);
  if ( !v43 )
    goto LABEL_46;
  Instance = UserServantMaster__getHeroineData(v43, BalanceConfig_TypeInfo->static_fields->ServantIdMashu1, 0);
  if ( !Instance )
    goto LABEL_46;
  v45 = Instance;
  v46 = *((_QWORD *)Instance + 12);
  v47 = *((_QWORD *)Instance + 13);
  ServantIdMashu1 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu1;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v44);
  *(_QWORD *)&v69.fields.currentCryptoKey = v46;
  *(_QWORD *)&v69.fields.fakeValue = v47;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v69, 0);
  if ( !v38 )
    goto LABEL_46;
  Instance = ServantLimitMaster__GetEntity(v38, ServantIdMashu1, (int32_t)Instance, 0);
  if ( !Instance )
    goto LABEL_46;
  v49 = *((_DWORD *)Instance + 6);
  Instance = this->fields.userSvtCollectionEntity;
  this->fields.rarity = v49;
  if ( !Instance )
    goto LABEL_46;
  Instance = (void *)UserServantCollectionEntity__IsCostumeGet(
                       (UserServantCollectionEntity_o *)Instance,
                       BalanceConfig_TypeInfo->static_fields->SpecialLimitCountPLD,
                       0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v56 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13, v50);
      v56 = BalanceConfig_TypeInfo;
    }
    v58 = v45[12];
    v57 = v45[13];
    v59 = v56->static_fields->ServantIdMashu1;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v50);
    *(_QWORD *)&v70.fields.currentCryptoKey = v58;
    *(_QWORD *)&v70.fields.fakeValue = v57;
    v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v70, 0);
    SpecialLimitCountPLD = BalanceConfig_TypeInfo->static_fields->SpecialLimitCountPLD;
    v62 = (ServantOverwriteStatus_o *)sub_2213CCC(ServantOverwriteStatus_TypeInfo);
    ServantOverwriteStatus___ctor_40472656(v62, v59, v60, SpecialLimitCountPLD, 0);
    if ( v62 )
    {
      Rarity_k__BackingField = v62->fields._Rarity_k__BackingField;
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.info,
    (int32_t)materialEventLogInfo,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
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
  __int64 v2; // x2
  UnityEngine_Object_o *viewObject; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  __int64 v7; // x2
  Il2CppObject *Component_object; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x2
  UnityEngine_GameObject_o *v12; // x0

  if ( (byte_596B782 & 1) == 0 )
  {
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_UIWidget___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B782 = 1;
  }
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
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
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( this->fields.isDummy )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.viewObject;
    if ( !gameObject )
      goto LABEL_32;
    ListViewObject__SetVisible((ListViewObject_o *)gameObject, 0, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
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
        v12 = UnityEngine_Component__get_gameObject(gameObject, 0);
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             v12,
                             (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_UIWidget___);
      }
      goto LABEL_25;
    }
    if ( this->fields.isCoercionInactive )
      goto LABEL_25;
  }
  else
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v7);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v11);
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
      sub_2213CDC(gameObject, v5);
    }
  }
}


void MaterialEventLogServantListViewItem__InactiveDummy(
        MaterialEventLogServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *viewObject; // x20

  if ( (byte_596B783 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B783 = 1;
  }
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(viewObject, 0, 0) )
    this->fields.isCoercionInactive = 1;
}


bool MaterialEventLogServantListViewItem__IsItemMatchFilter(
        MaterialEventLogServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  return ((bool (__fastcall *)(MaterialEventLogServantListViewItem_o *, ListViewSort_o *, const MethodInfo *))this->klass->vtable._5_IsMatchFilter.methodPtr)(
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
  __int64 v8; // x2
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  __int64 v11; // x2
  FilterKindList_c *v12; // x0
  System_Collections_Generic_List_T__o *RarityFilterKindList; // x8
  ListViewSort_FilterKind_array *v14; // x21
  ListViewSort_FilterKind_array *v15; // x0

  if ( (byte_596B785 & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_596B785 = 1;
  }
  if ( !sort )
    return 0;
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_24;
  v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v7, 0) )
  {
    v9 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v8);
      v9 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v9->static_fields->ClassFilterKindList;
    if ( ClassGroupFilterKindList )
    {
      v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                               ClassGroupFilterKindList,
                                               (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
      {
        return 0;
      }
      goto LABEL_15;
    }
LABEL_24:
    sub_2213CDC(ClassGroupFilterKindList, sort);
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
    return 0;
LABEL_15:
  v12 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v11);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v12->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_24;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  RarityFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_24;
  v14 = (ListViewSort_FilterKind_array *)ClassGroupFilterKindList;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v14, 0)
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
      sub_2213CDC(0, method);
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


// local variable allocation has failed, the output may be wrong!
void MaterialEventLogServantListViewItem__SetServantSortParam(
        MaterialEventLogServantListViewItem_o *this,
        int32_t sortKind,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int64_t maxLimitCount; // x2
  IconLabelInfo_o *iconLabelInfo; // x8
  IconLabelInfo_o *v7; // x8
  int32_t collectionNo; // w2

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_11;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( !userSvtCollectionEntity )
    goto LABEL_11;
  if ( sortKind == 9 )
  {
    maxLimitCount = userSvtCollectionEntity->fields.maxLimitCount;
    iconLabelInfo = this->fields.iconLabelInfo;
    this->fields.sortValue1 = maxLimitCount;
    if ( (int)maxLimitCount >= 1 )
    {
      if ( iconLabelInfo )
      {
        IconLabelInfo__Set_47880948(iconLabelInfo, 9, maxLimitCount, 0, 0, 0, 0, 0, 0, 0);
        return;
      }
LABEL_11:
      sub_2213CDC(this, *(_QWORD *)&sortKind);
    }
    if ( !iconLabelInfo )
      goto LABEL_11;
    IconLabelInfo__Clear(iconLabelInfo, 0);
  }
  else
  {
    v7 = this->fields.iconLabelInfo;
    collectionNo = servantEntity->fields.collectionNo;
    this->fields.sortValue1 = this->fields.rarity;
    if ( !v7 )
      goto LABEL_11;
    IconLabelInfo__Set_47880948(v7, 57, collectionNo, 0, 0, 0, 0, 0, 0, 0);
  }
}


bool MaterialEventLogServantListViewItem__SetSortValue(
        MaterialEventLogServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  _BOOL4 isDummy; // w8
  int32_t v11; // w1
  struct System_String_o **p_sortStr1; // x19
  struct System_String_o *v13; // x8

  if ( (byte_596B784 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B784 = 1;
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
  v11 = (int)StringLiteral_1/*""*/;
  this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
  p_sortStr1 = &this->fields.sortStr1;
  v13 = (struct System_String_o *)*((int *)p_sortStr1 - 9);
  *(p_sortStr1 - 3) = 0;
  *(p_sortStr1 - 2) = 0;
  *(p_sortStr1 - 1) = v13;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_sortStr1, v11, (System_String_o *)method, v3, v4, v5, v6, v7);
  *((_WORD *)p_sortStr1 + 20) = 0;
  p_sortStr1[2] = 0;
  p_sortStr1[3] = 0;
  p_sortStr1[1] = 0;
  return 1;
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