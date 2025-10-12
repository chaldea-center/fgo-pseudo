void MaterialCollectionServantListViewItem___ctor(
        MaterialCollectionServantListViewItem_o *this,
        int32_t idx,
        UserServantCollectionEntity_o *userServantCollectionEntity,
        int32_t kind,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  void *Instance; // x0
  struct UserServantCollectionEntity_o *v16; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x21
  __int64 v18; // x22
  __int64 v19; // x23
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  ServantLimitMaster_o *v25; // x21
  struct ServantEntity_o *servantEntity; // x8
  struct UserServantCollectionEntity_o *v27; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4C32B0A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&IconLabelInfo_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C32B0A = 1;
  }
  v9 = (IconLabelInfo_o *)sub_1C32E6C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0);
  this->fields.iconLabelInfo = v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.iconLabelInfo, (int32_t)v9, v10, v11);
  ListViewItem___ctor_43702564((ListViewItem_o *)this, idx, 0);
  this->fields.userSvtCollectionEntity = userServantCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  this->fields.index = idx;
  this->fields.displayKind = kind;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)userServantCollectionEntity,
    v13,
    v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v16 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_20;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v19 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v19;
  *(_QWORD *)&v28.fields.fakeValue = v18;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v28, 0);
  if ( !v17 )
    goto LABEL_20;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v17,
             (int32_t)Instance,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v22, v23);
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( !userSvtCollectionEntity )
    goto LABEL_20;
  Instance = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_20;
  this->fields.dispLimitCount = ServantEntity__GetDispLimitCountFromUserServantCollection(
                                  (ServantEntity_o *)Instance,
                                  userSvtCollectionEntity->fields.maxLimitCount,
                                  0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_20;
  v25 = (ServantLimitMaster_o *)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                       (*p_userSvtCollectionEntity)->fields.svtId,
                       0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_20;
  if ( !v25 )
    goto LABEL_20;
  ServantLimitMaster__GetEntity(v25, (int32_t)Instance, (*p_userSvtCollectionEntity)->fields.maxLimitCount, 0);
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
    || (v27 = this->fields.userSvtCollectionEntity, this->fields.rarity = *((_DWORD *)Instance + 6), !v27)
    || (Instance = this->fields.iconLabelInfo,
        this->fields.collectiionStatus = v27->fields.status,
        this->fields.sortValue2 = -servantEntity->fields.collectionNo,
        !Instance) )
  {
LABEL_20:
    sub_1C32E7C(Instance);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void MaterialCollectionServantListViewItem___ctor_33166408(
        MaterialCollectionServantListViewItem_o *this,
        int32_t index,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        int32_t kind,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *Instance; // x0
  struct UserCommandCodeCollectionEntity_o *v16; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x20
  __int64 v18; // x21
  __int64 v19; // x22
  Il2CppObject *Entity; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  struct UserCommandCodeCollectionEntity_o *v24; // x9
  IconLabelInfo_o *iconLabelInfo; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4C32B0B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C32C20(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C32C20(&IconLabelInfo_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C32B0B = 1;
  }
  v9 = (IconLabelInfo_o *)sub_1C32E6C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0);
  this->fields.iconLabelInfo = v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.iconLabelInfo, (int32_t)v9, v10, v11);
  ListViewItem___ctor_43702564((ListViewItem_o *)this, index, 0);
  this->fields.userCommandCodeCollectionEntity = userCommandCodeCollectionEntity;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  this->fields.index = index;
  this->fields.displayKind = kind;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.userCommandCodeCollectionEntity,
    (int32_t)userCommandCodeCollectionEntity,
    v13,
    v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v16 = *p_userCommandCodeCollectionEntity;
  if ( !*p_userCommandCodeCollectionEntity )
    goto LABEL_12;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v19 = *(_QWORD *)&v16->fields.commandCodeId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&v16->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v19;
  *(_QWORD *)&v26.fields.fakeValue = v18;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v26, 0);
  if ( !v17 )
    goto LABEL_12;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v17,
             (int32_t)Instance,
             (const MethodInfo_3396838 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeEntity, (int32_t)Entity, v21, v22);
  commandCodeEntity = this->fields.commandCodeEntity;
  this->fields.classId = 0;
  if ( !commandCodeEntity
    || (v24 = this->fields.userCommandCodeCollectionEntity, this->fields.rarity = commandCodeEntity->fields.rarity, !v24)
    || (this->fields.collectiionStatus = v24->fields.status,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                     commandCodeEntity->fields.collectionNo,
                                     0),
        iconLabelInfo = this->fields.iconLabelInfo,
        this->fields.sortValue2 = -(int)Instance,
        !iconLabelInfo) )
  {
LABEL_12:
    sub_1C32E7C(Instance);
  }
  IconLabelInfo__Clear(iconLabelInfo, 0);
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
    sub_1C32E7C(this);
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

  if ( (byte_4C32B0D & 1) == 0 )
  {
    sub_1C32C20(&ListViewSort_FilterKind___TypeInfo);
    byte_4C32B0D = 1;
  }
  v5 = sub_1C32CC8(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !v5 )
    goto LABEL_9;
  if ( !*(_DWORD *)(v5 + 24) )
    sub_1C32E84(v5);
  *(_DWORD *)(v5 + 32) = 49;
  if ( !sort )
LABEL_9:
    sub_1C32E7C(v5);
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
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  const MethodInfo *v10; // x2
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  int32_t collectiionStatus; // w8
  int32_t v16; // w1
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x21

  if ( (byte_4C32B0C & 1) == 0 )
  {
    sub_1C32C20(&FilterKindList_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4C32B0C = 1;
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
    goto LABEL_41;
  v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                              (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0) )
        goto LABEL_22;
      goto LABEL_21;
    }
LABEL_41:
    sub_1C32E7C(ClassGroupFilterKindList);
  }
  if ( ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
    goto LABEL_22;
  if ( !ListViewSort__GetFilter(sort, 68, 0) )
    return 0;
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v11->static_fields->ClassFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_41;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0) )
  {
    if ( !ListViewSort__IsNotExistClassFilter(sort, this->fields.servantEntity, 0) )
      return 0;
    goto LABEL_22;
  }
LABEL_21:
  if ( !MaterialCollectionServantListViewItem__IsMatchClassFilter(this, sort, v10) )
    return 0;
LABEL_22:
  v13 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v13->static_fields->CollectionStateFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_41;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0) )
    goto LABEL_33;
  collectiionStatus = this->fields.collectiionStatus;
  if ( collectiionStatus == 2 )
  {
    v16 = 12;
  }
  else if ( collectiionStatus == 1 )
  {
    v16 = 11;
  }
  else
  {
    if ( collectiionStatus )
      goto LABEL_33;
    v16 = 10;
  }
  if ( !ListViewSort__GetFilter(sort, v16, 0) )
    return 0;
LABEL_33:
  v17 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v17 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v17->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_41;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v18, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


void MaterialCollectionServantListViewItem__SetCommandCodeSortParam(
        MaterialCollectionServantListViewItem_o *this,
        int32_t sortKind,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewItem_o *v4; // x19
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w2
  int64_t rarity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_4C32B0E & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewItem_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C32B0E = 1;
  }
  commandCodeEntity = v4->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_11;
  v7 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
  v6 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v10, 0);
  if ( sortKind == 2 )
  {
    rarity = v4->fields.rarity;
    this = (MaterialCollectionServantListViewItem_o *)v4->fields.iconLabelInfo;
  }
  else
  {
    this = (MaterialCollectionServantListViewItem_o *)v4->fields.iconLabelInfo;
    rarity = v8;
  }
  v4->fields.sortValue1 = rarity;
  if ( !this )
LABEL_11:
    sub_1C32E7C(this);
  IconLabelInfo__Set_40818388((IconLabelInfo_o *)this, 57, v8, 0, 0, 0, 0, 0, 0, 0);
}


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
  if ( !servantEntity || (userSvtCollectionEntity = this->fields.userSvtCollectionEntity) == 0 )
LABEL_11:
    sub_1C32E7C(this);
  collectionNo = servantEntity->fields.collectionNo;
  if ( sortKind == 2 )
  {
    iconLabelInfo = this->fields.iconLabelInfo;
    this->fields.sortValue1 = this->fields.rarity;
    if ( !iconLabelInfo )
      goto LABEL_11;
    goto LABEL_9;
  }
  if ( sortKind != 9 )
  {
    iconLabelInfo = this->fields.iconLabelInfo;
    this->fields.sortValue1 = collectionNo;
    if ( !iconLabelInfo )
      goto LABEL_11;
LABEL_9:
    IconLabelInfo__Set_40818388(iconLabelInfo, 57, collectionNo, 0, 0, 0, 0, 0, 0, 0);
    return;
  }
  maxLimitCount = userSvtCollectionEntity->fields.maxLimitCount;
  v7 = this->fields.iconLabelInfo;
  this->fields.sortValue1 = maxLimitCount;
  if ( !v7 )
    goto LABEL_11;
  if ( (int)maxLimitCount < 1 )
    IconLabelInfo__Clear(v7, 0);
  else
    IconLabelInfo__Set_40818388(v7, 9, maxLimitCount, 0, 0, 0, 0, 0, 0, 0);
}


bool MaterialCollectionServantListViewItem__SetSortValue(
        MaterialCollectionServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewItem_c *klass; // x8
  const MethodInfo *v6; // x2
  char v7; // w8
  bool result; // w0
  int32_t sortKind; // w1
  int64_t v10; // x8
  int32_t collectiionStatus; // w8
  _BOOL8 v12; // x9
  bool v13; // zf
  struct ServantEntity_o *servantEntity; // x9

  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  v7 = ((__int64 (__fastcall *)(MaterialCollectionServantListViewItem_o *, ListViewSort_o *, const MethodInfo *))klass->vtable._5_IsMatchFilter.methodPtr)(
         this,
         sort,
         klass->vtable._5_IsMatchFilter.method);
  result = 0;
  if ( (v7 & 1) != 0 )
  {
    if ( !sort )
      sub_1C32E7C(0);
    sortKind = sort->fields.sortKind;
    if ( sortKind == 27 )
    {
      v10 = 0;
    }
    else
    {
      collectiionStatus = this->fields.collectiionStatus;
      v12 = collectiionStatus == 1;
      v13 = collectiionStatus == 2;
      v10 = 2;
      if ( !v13 )
        v10 = v12;
    }
    servantEntity = this->fields.servantEntity;
    this->fields.sortValue0 = v10;
    if ( servantEntity )
    {
      MaterialCollectionServantListViewItem__SetServantSortParam(this, sortKind, v6);
    }
    else if ( this->fields.commandCodeEntity )
    {
      MaterialCollectionServantListViewItem__SetCommandCodeSortParam(this, sortKind, v6);
    }
    return 1;
  }
  return result;
}


System_String_o *MaterialCollectionServantListViewItem__get_AttackText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t maxAtk; // w19
  __int64 *v6; // x8

  if ( (byte_4C32B14 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_19066/*"error"*/);
    byte_4C32B14 = 1;
  }
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
  {
    maxAtk = userSvtCollectionEntity->fields.maxAtk;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__GetAttackInfo(maxAtk, 0);
  }
  else
  {
    if ( this->fields.userCommandCodeCollectionEntity )
      v6 = &StringLiteral_1/*""*/;
    else
      v6 = &StringLiteral_19066/*"error"*/;
    return (System_String_o *)*v6;
  }
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


System_String_o *MaterialCollectionServantListViewItem__get_CostText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8
  int32_t cost; // w19
  __int64 *v6; // x8

  if ( (byte_4C32B12 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_19066/*"error"*/);
    byte_4C32B12 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    cost = servantEntity->fields.cost;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__GetCostInfo(cost, 0);
  }
  else
  {
    if ( this->fields.commandCodeEntity )
      v6 = &StringLiteral_1/*""*/;
    else
      v6 = &StringLiteral_19066/*"error"*/;
    return (System_String_o *)*v6;
  }
}


int32_t MaterialCollectionServantListViewItem__get_DispLimitCount(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.dispLimitCount;
}


System_String_o *MaterialCollectionServantListViewItem__get_HpText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t maxHp; // w19
  __int64 *v6; // x8

  if ( (byte_4C32B13 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_19066/*"error"*/);
    byte_4C32B13 = 1;
  }
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
  {
    maxHp = userSvtCollectionEntity->fields.maxHp;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__GetHpInfo(maxHp, 0);
  }
  else
  {
    if ( this->fields.userCommandCodeCollectionEntity )
      v6 = &StringLiteral_1/*""*/;
    else
      v6 = &StringLiteral_19066/*"error"*/;
    return (System_String_o *)*v6;
  }
}


IconLabelInfo_o *MaterialCollectionServantListViewItem__get_IconInfo(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo;
}


bool MaterialCollectionServantListViewItem__get_IsCanNotSelect(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  struct UserServantCollectionEntity_o *v5; // x8
  int32_t status; // w8
  struct UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    if ( !userSvtCollectionEntity )
      goto LABEL_16;
    if ( !userSvtCollectionEntity->fields.status || this->fields.isValentineList )
    {
LABEL_7:
      servantEntity = (ServantEntity_o *)ServantEntity__get_IsEnemyCollectionDetail(servantEntity, 0);
      v5 = this->fields.userSvtCollectionEntity;
      if ( v5 )
      {
        status = v5->fields.status;
        if ( ((unsigned __int8)servantEntity & 1) != 0 )
          return status == 0;
        return status != 2;
      }
      goto LABEL_16;
    }
    if ( MaterialCollectionServantListViewItem__get_IsCanSelectServant(this, method) )
    {
      servantEntity = this->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_16;
      goto LABEL_7;
    }
    return 1;
  }
  else
  {
    if ( this->fields.commandCodeEntity )
    {
      userCommandCodeCollectionEntity = this->fields.userCommandCodeCollectionEntity;
      if ( userCommandCodeCollectionEntity )
      {
        status = userCommandCodeCollectionEntity->fields.status;
        return status != 2;
      }
LABEL_16:
      sub_1C32E7C(servantEntity);
    }
    return 0;
  }
}


bool MaterialCollectionServantListViewItem__get_IsCanSelectServant(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t Value_41801128; // w0
  unsigned int v5; // w20
  _BOOL4 v6; // w0
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  UserServantCollectionEntity_o *v8; // x0
  UserServantCollectionEntity_o *v9; // x0

  if ( (byte_4C32B15 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_3290/*"CAN_SELECT_SVT_MATERIAL_FLAG"*/);
    byte_4C32B15 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ConstantMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  Value_41801128 = ConstantMaster__GetValue_41801128(
                     (ConstantMaster_o *)Instance,
                     (System_String_o *)StringLiteral_3290/*"CAN_SELECT_SVT_MATERIAL_FLAG"*/,
                     0,
                     0);
  if ( !this->fields.userSvtCollectionEntity )
    goto LABEL_17;
  v5 = Value_41801128;
  if ( !UserServantCollectionEntity__IsDataLostStateServant(this->fields.userSvtCollectionEntity, 0) )
  {
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    if ( userSvtCollectionEntity )
    {
      if ( UserServantCollectionEntity__IsLinkLostStateServant(userSvtCollectionEntity, 0) )
      {
        LOBYTE(v6) = v5 & 1;
        return v6;
      }
      v8 = this->fields.userSvtCollectionEntity;
      if ( v8 )
      {
        if ( UserServantCollectionEntity__IsLinkBadStateServant(v8, 0) )
          return (v5 >> 2) & 1;
        v9 = this->fields.userSvtCollectionEntity;
        if ( v9 && UserServantCollectionEntity__IsLinkCloseStateServant(v9, 0) )
          return (v5 >> 3) & 1;
      }
    }
LABEL_17:
    LOBYTE(v6) = 1;
    return v6;
  }
  return (v5 >> 1) & 1;
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


bool MaterialCollectionServantListViewItem__get_IsHideStateServant(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0

  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
    LOBYTE(userSvtCollectionEntity) = UserServantCollectionEntity__IsHideStateServant(userSvtCollectionEntity, 0);
  return (char)userSvtCollectionEntity;
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


System_String_o *MaterialCollectionServantListViewItem__get_LevelText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t maxLv; // w19
  __int64 *v6; // x8

  if ( (byte_4C32B10 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_19066/*"error"*/);
    byte_4C32B10 = 1;
  }
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
  {
    maxLv = userSvtCollectionEntity->fields.maxLv;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__GetLevelInfo(maxLv, 0);
  }
  else
  {
    if ( this->fields.userCommandCodeCollectionEntity )
      v6 = &StringLiteral_1/*""*/;
    else
      v6 = &StringLiteral_19066/*"error"*/;
    return (System_String_o *)*v6;
  }
}


System_String_o *MaterialCollectionServantListViewItem__get_NameText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0
  CommandCodeEntity_o *commandCodeEntity; // x0

  if ( (byte_4C32B0F & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_19066/*"error"*/);
    byte_4C32B0F = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return ServantEntity__getName(servantEntity, -1, -1, 0, 0);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( commandCodeEntity )
    return CommandCodeEntity__GetName(commandCodeEntity, 0);
  else
    return (System_String_o *)StringLiteral_19066/*"error"*/;
}


int32_t MaterialCollectionServantListViewItem__get_Rarity(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rarity;
}


System_String_o *MaterialCollectionServantListViewItem__get_RarityText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t rarity; // w19

  if ( (byte_4C32B11 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C32B11 = 1;
  }
  rarity = this->fields.rarity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__GetRarityInfo(rarity, 0);
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