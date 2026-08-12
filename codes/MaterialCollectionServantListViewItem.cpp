void MaterialCollectionServantListViewItem___ctor(
        MaterialCollectionServantListViewItem_o *this,
        int32_t idx,
        UserServantCollectionEntity_o *userServantCollectionEntity,
        int32_t kind,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  void *Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  struct UserServantCollectionEntity_o *v26; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x21
  __int64 v28; // x22
  __int64 v29; // x23
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x21
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t DispLimitCountFromUserServantCollection; // w0
  const MethodInfo_47A29F8 *v40; // x8
  ServantLimitMaster_o *v41; // x21
  struct ServantEntity_o *servantEntity; // x8
  struct UserServantCollectionEntity_o *v43; // x9
  int v44; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_596B693 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596B693 = 1;
  }
  v9 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0);
  this->fields.iconLabelInfo = v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  ListViewItem___ctor_50819428((ListViewItem_o *)this, idx, 0);
  this->fields.userSvtCollectionEntity = userServantCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  this->fields.index = idx;
  this->fields.displayKind = kind;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)userServantCollectionEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v26 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_20;
  v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v28 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v25);
  *(_QWORD *)&v45.fields.currentCryptoKey = v28;
  *(_QWORD *)&v45.fields.fakeValue = v29;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v45, 0);
  if ( !v27 )
    goto LABEL_20;
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
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( !userSvtCollectionEntity )
    goto LABEL_20;
  Instance = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_20;
  DispLimitCountFromUserServantCollection = ServantEntity__GetDispLimitCountFromUserServantCollection(
                                              (ServantEntity_o *)Instance,
                                              userSvtCollectionEntity->fields.maxLimitCount,
                                              0);
  v40 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.dispLimitCount = DispLimitCountFromUserServantCollection;
  Instance = SingletonMonoBehaviour_object___get_Instance(v40);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_20;
  v41 = (ServantLimitMaster_o *)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                       (*p_userSvtCollectionEntity)->fields.svtId,
                       0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_20;
  if ( !v41 )
    goto LABEL_20;
  ServantLimitMaster__GetEntity(v41, (int32_t)Instance, (*p_userSvtCollectionEntity)->fields.maxLimitCount, 0);
  Instance = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_20;
  Instance = UserServantCollectionEntity__GetOverwriteStatus(
               (UserServantCollectionEntity_o *)Instance,
               this->fields.dispLimitCount,
               0);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity
    || (this->fields.classId = servantEntity->fields.classId, !Instance)
    || (v43 = this->fields.userSvtCollectionEntity, this->fields.rarity = *((_DWORD *)Instance + 6), !v43)
    || (Instance = this->fields.iconLabelInfo,
        v44 = -servantEntity->fields.collectionNo,
        this->fields.collectiionStatus = v43->fields.status,
        this->fields.sortValue2 = v44,
        !Instance) )
  {
LABEL_20:
    sub_2213CDC(Instance, v24);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void MaterialCollectionServantListViewItem___ctor_39961612(
        MaterialCollectionServantListViewItem_o *this,
        int32_t index,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        int32_t kind,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  struct UserCommandCodeCollectionEntity_o *v26; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x20
  __int64 v28; // x21
  __int64 v29; // x22
  Il2CppObject *Entity; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  struct UserCommandCodeCollectionEntity_o *v38; // x9
  int32_t v39; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_596B694 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596B694 = 1;
  }
  v9 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0);
  this->fields.iconLabelInfo = v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.userCommandCodeCollectionEntity = userCommandCodeCollectionEntity;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  this->fields.index = index;
  this->fields.displayKind = kind;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userCommandCodeCollectionEntity,
    (int32_t)userCommandCodeCollectionEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v26 = *p_userCommandCodeCollectionEntity;
  if ( !*p_userCommandCodeCollectionEntity )
    goto LABEL_12;
  v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v28 = *(_QWORD *)&v26->fields.commandCodeId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&v26->fields.commandCodeId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v25);
  *(_QWORD *)&v40.fields.currentCryptoKey = v28;
  *(_QWORD *)&v40.fields.fakeValue = v29;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v40, 0);
  if ( !v27 )
    goto LABEL_12;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v27,
             (int32_t)Instance,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeEntity,
    (int32_t)Entity,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  commandCodeEntity = this->fields.commandCodeEntity;
  this->fields.classId = 0;
  if ( !commandCodeEntity
    || (v38 = this->fields.userCommandCodeCollectionEntity, this->fields.rarity = commandCodeEntity->fields.rarity, !v38)
    || (this->fields.collectiionStatus = v38->fields.status,
        v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                commandCodeEntity->fields.collectionNo,
                0),
        Instance = (DataManager_o *)this->fields.iconLabelInfo,
        this->fields.sortValue2 = -v39,
        !Instance) )
  {
LABEL_12:
    sub_2213CDC(Instance, v24);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void MaterialCollectionServantListViewItem__Finalize(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool MaterialCollectionServantListViewItem__IsMatchClassFilter(
        MaterialCollectionServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  if ( !sort )
    sub_2213CDC(this, 0);
  return ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0)
      || ListViewSort__GetFilter(sort, 64, 0)
      && ListViewSort__IsNotExistClassFilter(sort, this->fields.servantEntity, 0);
}


bool MaterialCollectionServantListViewItem__IsMatchFilter(
        MaterialCollectionServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int32_t displayKind; // w8

  displayKind = this->fields.displayKind;
  if ( displayKind == 3 || displayKind == 1 )
    return MaterialCollectionServantListViewItem__IsMatchServantEquipFilter(this, sort, method);
  if ( displayKind )
    return 0;
  return MaterialCollectionServantListViewItem__IsMatchServantFilter(this, sort, method);
}


bool MaterialCollectionServantListViewItem__IsMatchServantEquipFilter(
        MaterialCollectionServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596B696 & 1) == 0 )
  {
    sub_2213A60(&ListViewSort_FilterKind___TypeInfo);
    byte_596B696 = 1;
  }
  v5 = sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !v5 )
    goto LABEL_9;
  v6 = v5;
  if ( !*(_DWORD *)(v5 + 24) )
    sub_2213CE4(v5);
  *(_DWORD *)(v5 + 32) = 49;
  if ( !sort )
LABEL_9:
    sub_2213CDC(v5, v6);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)v5, 0)
      || this->fields.collectiionStatus != 0;
}


bool MaterialCollectionServantListViewItem__IsMatchServantFilter(
        MaterialCollectionServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v7; // x0
  __int64 v8; // x2
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  const MethodInfo *v11; // x2
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  __int64 v14; // x2
  int32_t collectiionStatus; // w8
  ListViewSort_o *v16; // x0
  int32_t v17; // w1
  __int64 v18; // x2
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x0
  FilterKindList_c *v21; // x0
  ListViewSort_FilterKind_array *v22; // x21

  if ( (byte_596B695 & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_596B695 = 1;
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
    goto LABEL_41;
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
      if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0) )
        goto LABEL_15;
      goto LABEL_12;
    }
LABEL_41:
    sub_2213CDC(ClassGroupFilterKindList, sort);
  }
  if ( ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
    goto LABEL_15;
  if ( !ListViewSort__GetFilter(sort, 68, 0) )
    return 0;
  v19 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v18);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v19->static_fields->ClassFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_41;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0) )
  {
    if ( !ListViewSort__IsNotExistClassFilter(sort, this->fields.servantEntity, 0) )
      return 0;
    goto LABEL_15;
  }
LABEL_12:
  if ( !MaterialCollectionServantListViewItem__IsMatchClassFilter(this, sort, v11) )
    return 0;
LABEL_15:
  v12 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v11);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v12->static_fields->CollectionStateFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_41;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0) )
    goto LABEL_33;
  collectiionStatus = this->fields.collectiionStatus;
  if ( collectiionStatus == 2 )
  {
    v16 = sort;
    v17 = 12;
  }
  else if ( collectiionStatus == 1 )
  {
    v16 = sort;
    v17 = 11;
  }
  else
  {
    if ( collectiionStatus )
      goto LABEL_33;
    v16 = sort;
    v17 = 10;
  }
  if ( !ListViewSort__GetFilter(v16, v17, 0) )
    return 0;
LABEL_33:
  v21 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v14);
    v21 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v21->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_41;
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v22, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


// local variable allocation has failed, the output may be wrong!
void MaterialCollectionServantListViewItem__SetCommandCodeSortParam(
        MaterialCollectionServantListViewItem_o *this,
        int32_t sortKind,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewItem_o *v4; // x19
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  int v8; // w2
  int64_t v9; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_596B697 & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596B697 = 1;
  }
  commandCodeEntity = v4->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_11;
  v6 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
  v7 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&sortKind, method);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v10, 0);
  v9 = sortKind == 2 ? v4->fields.rarity : v8;
  this = (MaterialCollectionServantListViewItem_o *)v4->fields.iconLabelInfo;
  v4->fields.sortValue1 = v9;
  if ( !this )
LABEL_11:
    sub_2213CDC(this, *(_QWORD *)&sortKind);
  IconLabelInfo__Set_47880948((IconLabelInfo_o *)this, 57, v8, 0, 0, 0, 0, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void MaterialCollectionServantListViewItem__SetServantSortParam(
        MaterialCollectionServantListViewItem_o *this,
        int32_t sortKind,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int64_t collectionNo; // x2
  int64_t maxLimitCount; // x2
  IconLabelInfo_o *v7; // x8
  IconLabelInfo_o *iconLabelInfo; // x8

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_14;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( !userSvtCollectionEntity )
    goto LABEL_14;
  collectionNo = servantEntity->fields.collectionNo;
  if ( sortKind == 2 )
  {
    iconLabelInfo = this->fields.iconLabelInfo;
    this->fields.sortValue1 = this->fields.rarity;
    if ( !iconLabelInfo )
      goto LABEL_14;
    goto LABEL_11;
  }
  if ( sortKind != 9 )
  {
    iconLabelInfo = this->fields.iconLabelInfo;
    this->fields.sortValue1 = collectionNo;
    if ( !iconLabelInfo )
      goto LABEL_14;
LABEL_11:
    IconLabelInfo__Set_47880948(iconLabelInfo, 57, collectionNo, 0, 0, 0, 0, 0, 0, 0);
    return;
  }
  maxLimitCount = userSvtCollectionEntity->fields.maxLimitCount;
  v7 = this->fields.iconLabelInfo;
  this->fields.sortValue1 = maxLimitCount;
  if ( (int)maxLimitCount >= 1 )
  {
    if ( v7 )
    {
      IconLabelInfo__Set_47880948(v7, 9, maxLimitCount, 0, 0, 0, 0, 0, 0, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(this, *(_QWORD *)&sortKind);
  }
  if ( !v7 )
    goto LABEL_14;
  IconLabelInfo__Clear(v7, 0);
}


bool MaterialCollectionServantListViewItem__SetSortValue(
        MaterialCollectionServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewItem_c *klass; // x9
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  char v9; // w20
  int32_t sortKind; // w1
  int32_t collectiionStatus; // w8
  int64_t v12; // x8

  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  v6 = ((__int64 (__fastcall *)(MaterialCollectionServantListViewItem_o *, ListViewSort_o *, const MethodInfo *))klass->vtable._5_IsMatchFilter.methodPtr)(
         this,
         sort,
         klass->vtable._5_IsMatchFilter.method);
  v9 = v6;
  if ( (v6 & 1) == 0 )
    return v9 & 1;
  if ( !sort )
    sub_2213CDC(v6, v7);
  sortKind = sort->fields.sortKind;
  if ( sortKind == 27 )
    goto LABEL_7;
  collectiionStatus = this->fields.collectiionStatus;
  if ( collectiionStatus == 1 )
  {
    v12 = 1;
    goto LABEL_9;
  }
  if ( collectiionStatus != 2 )
  {
LABEL_7:
    this->fields.sortValue0 = 0;
    goto LABEL_10;
  }
  v12 = 2;
LABEL_9:
  this->fields.sortValue0 = v12;
LABEL_10:
  if ( this->fields.servantEntity )
  {
    MaterialCollectionServantListViewItem__SetServantSortParam(this, sortKind, v8);
  }
  else if ( this->fields.commandCodeEntity )
  {
    MaterialCollectionServantListViewItem__SetCommandCodeSortParam(this, sortKind, v8);
  }
  return v9 & 1;
}


int32_t MaterialCollectionServantListViewItem__get_CollectionKind(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  _DWORD *userSvtCollectionEntity; // x8

  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
    return userSvtCollectionEntity[10];
  userSvtCollectionEntity = this->fields.userCommandCodeCollectionEntity;
  if ( userSvtCollectionEntity )
    return userSvtCollectionEntity[10];
  else
    return 0;
}


IconLabelInfo_o *MaterialCollectionServantListViewItem__get_IconInfo(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo;
}


bool MaterialCollectionServantListViewItem__get_IsAnyLostStateServant(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0

  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
  {
    if ( UserServantCollectionEntity__IsDataLostStateServant(userSvtCollectionEntity, 0) )
      goto LABEL_9;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    if ( !userSvtCollectionEntity )
      return (char)userSvtCollectionEntity;
    if ( UserServantCollectionEntity__IsLinkLostStateServant(userSvtCollectionEntity, 0) )
      goto LABEL_9;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    if ( !userSvtCollectionEntity )
      return (char)userSvtCollectionEntity;
    if ( UserServantCollectionEntity__IsLinkBadStateServant(userSvtCollectionEntity, 0) )
    {
LABEL_9:
      LOBYTE(userSvtCollectionEntity) = 1;
      return (char)userSvtCollectionEntity;
    }
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    if ( userSvtCollectionEntity )
    {
      if ( UserServantCollectionEntity__IsLinkCloseStateServant(userSvtCollectionEntity, 0) )
        goto LABEL_9;
      userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
      if ( userSvtCollectionEntity )
        LOBYTE(userSvtCollectionEntity) = UserServantCollectionEntity__IsCollectionState6Servant(
                                            userSvtCollectionEntity,
                                            0);
    }
  }
  return (char)userSvtCollectionEntity;
}


bool MaterialCollectionServantListViewItem__get_IsCanNotSelect(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  _DWORD *userCommandCodeCollectionEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    if ( !userSvtCollectionEntity )
      goto LABEL_12;
    if ( !userSvtCollectionEntity->fields.status || this->fields.isValentineList )
    {
LABEL_7:
      servantEntity = (ServantEntity_o *)ServantEntity__get_IsEnemyCollectionDetail(servantEntity, 0);
      userCommandCodeCollectionEntity = this->fields.userSvtCollectionEntity;
      if ( ((unsigned __int8)servantEntity & 1) != 0 )
      {
        if ( userCommandCodeCollectionEntity )
          return userCommandCodeCollectionEntity[10] == 0;
LABEL_12:
        sub_2213CDC(servantEntity, method);
      }
      if ( !userCommandCodeCollectionEntity )
        goto LABEL_12;
      return userCommandCodeCollectionEntity[10] != 2;
    }
    if ( MaterialCollectionServantListViewItem__get_IsCanSelectServant(this, method) )
    {
      servantEntity = this->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_12;
      goto LABEL_7;
    }
    return 1;
  }
  else
  {
    if ( this->fields.commandCodeEntity )
    {
      userCommandCodeCollectionEntity = this->fields.userCommandCodeCollectionEntity;
      if ( !userCommandCodeCollectionEntity )
        goto LABEL_12;
      return userCommandCodeCollectionEntity[10] != 2;
    }
    return 0;
  }
}


bool MaterialCollectionServantListViewItem__get_IsCanSelectServant(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int32_t Value_48903564; // w0
  unsigned int v6; // w20
  _BOOL4 v7; // w0
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  UserServantCollectionEntity_o *v9; // x0
  UserServantCollectionEntity_o *v10; // x0
  UserServantCollectionEntity_o *v11; // x0

  if ( (byte_596B698 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3427/*"CAN_SELECT_SVT_MATERIAL_FLAG"*/);
    byte_596B698 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ConstantMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  Value_48903564 = ConstantMaster__GetValue_48903564(
                     (ConstantMaster_o *)Instance,
                     (System_String_o *)StringLiteral_3427/*"CAN_SELECT_SVT_MATERIAL_FLAG"*/,
                     0,
                     0);
  if ( !this->fields.userSvtCollectionEntity )
    goto LABEL_20;
  v6 = Value_48903564;
  if ( !UserServantCollectionEntity__IsDataLostStateServant(this->fields.userSvtCollectionEntity, 0) )
  {
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    if ( userSvtCollectionEntity )
    {
      if ( UserServantCollectionEntity__IsLinkLostStateServant(userSvtCollectionEntity, 0) )
      {
        LOBYTE(v7) = v6 & 1;
        return v7;
      }
      v9 = this->fields.userSvtCollectionEntity;
      if ( v9 )
      {
        if ( UserServantCollectionEntity__IsLinkBadStateServant(v9, 0) )
          return (v6 >> 2) & 1;
        v10 = this->fields.userSvtCollectionEntity;
        if ( v10 )
        {
          if ( UserServantCollectionEntity__IsLinkCloseStateServant(v10, 0) )
            return (v6 >> 3) & 1;
          v11 = this->fields.userSvtCollectionEntity;
          if ( v11 && UserServantCollectionEntity__IsCollectionState6Servant(v11, 0) )
            return (v6 >> 4) & 1;
        }
      }
    }
LABEL_20:
    LOBYTE(v7) = 1;
    return v7;
  }
  return (v6 >> 1) & 1;
}


bool MaterialCollectionServantListViewItem__get_IsCollectionState6Servant(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0

  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
    LOBYTE(userSvtCollectionEntity) = UserServantCollectionEntity__IsCollectionState6Servant(userSvtCollectionEntity, 0);
  return (char)userSvtCollectionEntity;
}


bool MaterialCollectionServantListViewItem__get_IsDataLostStateServant(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0

  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
    LOBYTE(userSvtCollectionEntity) = UserServantCollectionEntity__IsDataLostStateServant(userSvtCollectionEntity, 0);
  return (char)userSvtCollectionEntity;
}


bool MaterialCollectionServantListViewItem__get_IsEnemyCollectionDetail(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0

  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    LOBYTE(servantEntity) = ServantEntity__get_IsEnemyCollectionDetail(servantEntity, 0);
  return (char)servantEntity;
}


bool MaterialCollectionServantListViewItem__get_IsLinkBadStateServant(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0

  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
    LOBYTE(userSvtCollectionEntity) = UserServantCollectionEntity__IsLinkBadStateServant(userSvtCollectionEntity, 0);
  return (char)userSvtCollectionEntity;
}


bool MaterialCollectionServantListViewItem__get_IsLinkCloseStateServant(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0

  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
    LOBYTE(userSvtCollectionEntity) = UserServantCollectionEntity__IsLinkCloseStateServant(userSvtCollectionEntity, 0);
  return (char)userSvtCollectionEntity;
}


bool MaterialCollectionServantListViewItem__get_IsLinkLostStateServant(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0

  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
    LOBYTE(userSvtCollectionEntity) = UserServantCollectionEntity__IsLinkLostStateServant(userSvtCollectionEntity, 0);
  return (char)userSvtCollectionEntity;
}


bool MaterialCollectionServantListViewItem__get_IsServantEquip(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0

  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    LOBYTE(servantEntity) = ServantEntity__get_IsKeepServantEquip(servantEntity, 0);
  return (char)servantEntity;
}


bool MaterialCollectionServantListViewItem__get_IsValentineList(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isValentineList;
}


UserCommandCodeCollectionEntity_o *MaterialCollectionServantListViewItem__get_UserCommandCodeCollection(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userCommandCodeCollectionEntity;
}


UserServantCollectionEntity_o *MaterialCollectionServantListViewItem__get_UserServantCollection(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtCollectionEntity;
}