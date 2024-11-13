// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewItem___ctor(
        MaterialCollectionServantListViewItem_o *this,
        int32_t index,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  IconLabelInfo_o *v19; // x20
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x20
  void *Instance; // x0
  __int64 v22; // x1
  struct UserServantCollectionEntity_o *v23; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x21
  __int64 v25; // x22
  __int64 v26; // x23
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x21
  ServantLimitMaster_o *v29; // x22
  struct ServantEntity_o *v30; // x8
  struct UserServantCollectionEntity_o *v31; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4B1171F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index, userSvtCollectionEntity);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B1171F = 1;
  }
  v19 = (IconLabelInfo_o *)sub_1BCAA2C(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&index,
                             userSvtCollectionEntity,
                             *(_QWORD *)&kind);
  IconLabelInfo___ctor(v19, 0LL);
  this->fields.iconLabelInfo = v19;
  sub_1BCA784(&this->fields.iconLabelInfo, v19);
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  this->fields.index = index;
  this->fields.displayKind = kind;
  sub_1BCA784(&this->fields.userSvtCollectionEntity, userSvtCollectionEntity);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v23 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_17;
  v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v26 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
  *(_QWORD *)&v32.fields.currentCryptoKey = v26;
  *(_QWORD *)&v32.fields.fakeValue = v25;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v32, 0LL);
  if ( !v24 )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v24,
             (int32_t)Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BCA784(&this->fields.servantEntity, Entity);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_17;
  v29 = (ServantLimitMaster_o *)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                       (*p_userSvtCollectionEntity)->fields.svtId,
                       0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_17;
  if ( !v29 )
    goto LABEL_17;
  Instance = ServantLimitMaster__GetEntity(
               v29,
               (int32_t)Instance,
               (*p_userSvtCollectionEntity)->fields.maxLimitCount,
               0LL);
  v30 = *p_servantEntity;
  if ( !*p_servantEntity
    || (this->fields.classId = v30->fields.classId, !Instance)
    || (v31 = this->fields.userSvtCollectionEntity, this->fields.rarity = *((_DWORD *)Instance + 6), !v31)
    || (Instance = this->fields.iconLabelInfo,
        this->fields.collectiionStatus = v31->fields.status,
        this->fields.sortValue2 = -v30->fields.collectionNo,
        !Instance) )
  {
LABEL_17:
    sub_1BCAA3C(Instance, v22);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewItem___ctor_31720444(
        MaterialCollectionServantListViewItem_o *this,
        int32_t index,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  IconLabelInfo_o *v17; // x23
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x23
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  struct UserCommandCodeCollectionEntity_o *v21; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x20
  __int64 v23; // x21
  __int64 v24; // x22
  Il2CppObject *Entity; // x0
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  struct UserCommandCodeCollectionEntity_o *v27; // x9
  IconLabelInfo_o *iconLabelInfo; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4B11720 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_CommandCodeMaster___,
      *(_QWORD *)&index,
      userCommandCodeCollectionEntity);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B11720 = 1;
  }
  v17 = (IconLabelInfo_o *)sub_1BCAA2C(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&index,
                             userCommandCodeCollectionEntity,
                             *(_QWORD *)&kind);
  IconLabelInfo___ctor(v17, 0LL);
  this->fields.iconLabelInfo = v17;
  sub_1BCA784(&this->fields.iconLabelInfo, v17);
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.userCommandCodeCollectionEntity = userCommandCodeCollectionEntity;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  this->fields.index = index;
  this->fields.displayKind = kind;
  sub_1BCA784(&this->fields.userCommandCodeCollectionEntity, userCommandCodeCollectionEntity);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v21 = *p_userCommandCodeCollectionEntity;
  if ( !*p_userCommandCodeCollectionEntity )
    goto LABEL_12;
  v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v24 = *(_QWORD *)&v21->fields.commandCodeId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&v21->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
  *(_QWORD *)&v29.fields.currentCryptoKey = v24;
  *(_QWORD *)&v29.fields.fakeValue = v23;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v29, 0LL);
  if ( !v22 )
    goto LABEL_12;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v22,
             (int32_t)Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  Instance = (Il2CppObject *)sub_1BCA784(&this->fields.commandCodeEntity, Entity);
  commandCodeEntity = this->fields.commandCodeEntity;
  this->fields.classId = 0;
  if ( !commandCodeEntity
    || (v27 = this->fields.userCommandCodeCollectionEntity, this->fields.rarity = commandCodeEntity->fields.rarity, !v27)
    || (this->fields.collectiionStatus = v27->fields.status,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                     commandCodeEntity->fields.collectionNo,
                                     0LL),
        iconLabelInfo = this->fields.iconLabelInfo,
        this->fields.sortValue2 = -(int)Instance,
        !iconLabelInfo) )
  {
LABEL_12:
    sub_1BCAA3C(Instance, v20);
  }
  IconLabelInfo__Clear(iconLabelInfo, 0LL);
}


void __fastcall MaterialCollectionServantListViewItem__Finalize(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall MaterialCollectionServantListViewItem__IsMatchClassFilter(
        MaterialCollectionServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  if ( !sort )
    sub_1BCAA3C(this, 0LL);
  return ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL)
      || ListViewSort__GetFilter(sort, 64, 0LL)
      && ListViewSort__IsNotExistClassFilter(sort, this->fields.servantEntity, 0LL);
}


bool __fastcall MaterialCollectionServantListViewItem__IsMatchFilter(
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


bool __fastcall MaterialCollectionServantListViewItem__IsMatchServantEquipFilter(
        MaterialCollectionServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ListViewSort_FilterKind_array *v5; // x0
  ListViewSort_FilterKind_array *v6; // x1

  if ( (byte_4B11722 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_FilterKind___TypeInfo, sort, method);
    byte_4B11722 = 1;
  }
  v5 = (ListViewSort_FilterKind_array *)sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_9;
  v6 = v5;
  if ( !v5->max_length )
    sub_1BCAA44(v5, v5);
  v5->m_Items[1] = 49;
  if ( !sort )
LABEL_9:
    sub_1BCAA3C(v5, v6);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v5, 0LL) || this->fields.collectiionStatus != 0;
}


bool __fastcall MaterialCollectionServantListViewItem__IsMatchServantFilter(
        MaterialCollectionServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  FilterKindList_c *v7; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  const MethodInfo *v12; // x2
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  int32_t collectiionStatus; // w8
  int32_t v18; // w1
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x21

  if ( (byte_4B11721 & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, sort, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5, v6);
    byte_4B11721 = 1;
  }
  if ( !sort )
    return 0;
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v7 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v7->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_41;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0LL) )
  {
    v10 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
      v10 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v10->static_fields->ClassFilterKindList;
    if ( ClassGroupFilterKindList )
    {
      v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                               ClassGroupFilterKindList,
                                               (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL) )
        goto LABEL_22;
      goto LABEL_21;
    }
LABEL_41:
    sub_1BCAA3C(ClassGroupFilterKindList, sort);
  }
  if ( ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
    goto LABEL_22;
  if ( !ListViewSort__GetFilter(sort, 68, 0LL) )
    return 0;
  v13 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v13 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v13->static_fields->ClassFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_41;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL) )
  {
    if ( !ListViewSort__IsNotExistClassFilter(sort, this->fields.servantEntity, 0LL) )
      return 0;
    goto LABEL_22;
  }
LABEL_21:
  if ( !MaterialCollectionServantListViewItem__IsMatchClassFilter(this, sort, v12) )
    return 0;
LABEL_22:
  v15 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v15->static_fields->CollectionStateFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_41;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL) )
    goto LABEL_33;
  collectiionStatus = this->fields.collectiionStatus;
  if ( collectiionStatus == 2 )
  {
    v18 = 12;
  }
  else if ( collectiionStatus == 1 )
  {
    v18 = 11;
  }
  else
  {
    if ( collectiionStatus )
      goto LABEL_33;
    v18 = 10;
  }
  if ( !ListViewSort__GetFilter(sort, v18, 0LL) )
    return 0;
LABEL_33:
  v19 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v19->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_41;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v20, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewItem__SetCommandCodeSortParam(
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
  if ( (byte_4B11723 & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewItem_o *)sub_1BCA7E0(
                                                        &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                        *(_QWORD *)&sortKind,
                                                        method);
    byte_4B11723 = 1;
  }
  commandCodeEntity = v4->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_11;
  v7 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
  v6 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&sortKind);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v10, 0LL);
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
    sub_1BCAA3C(this, *(_QWORD *)&sortKind);
  IconLabelInfo__Set_38850420((IconLabelInfo_o *)this, 57, v8, 0, 0, 0, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewItem__SetServantSortParam(
        MaterialCollectionServantListViewItem_o *this,
        int32_t sortKind,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int64_t collectionNo; // x2
  IconLabelInfo_o *iconLabelInfo; // x8
  int32_t v7; // w1

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity || (userSvtCollectionEntity = this->fields.userSvtCollectionEntity) == 0LL )
LABEL_12:
    sub_1BCAA3C(this, *(_QWORD *)&sortKind);
  collectionNo = servantEntity->fields.collectionNo;
  if ( sortKind == 2 )
  {
    iconLabelInfo = this->fields.iconLabelInfo;
    this->fields.sortValue1 = this->fields.rarity;
    if ( !iconLabelInfo )
      goto LABEL_12;
    goto LABEL_9;
  }
  if ( sortKind != 9 )
  {
    iconLabelInfo = this->fields.iconLabelInfo;
    this->fields.sortValue1 = collectionNo;
    if ( !iconLabelInfo )
      goto LABEL_12;
LABEL_9:
    v7 = 57;
    goto LABEL_10;
  }
  collectionNo = userSvtCollectionEntity->fields.maxLimitCount;
  iconLabelInfo = this->fields.iconLabelInfo;
  this->fields.sortValue1 = collectionNo;
  if ( !iconLabelInfo )
    goto LABEL_12;
  if ( (int)collectionNo >= 1 )
  {
    v7 = 9;
LABEL_10:
    IconLabelInfo__Set_38850420(iconLabelInfo, v7, collectionNo, 0, 0, 0, 0, 0, 0LL);
    return;
  }
  IconLabelInfo__Clear(iconLabelInfo, 0LL);
}


bool __fastcall MaterialCollectionServantListViewItem__SetSortValue(
        MaterialCollectionServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewItem_c *klass; // x8
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  char v8; // w8
  bool result; // w0
  int32_t sortKind; // w1
  int64_t v11; // x8
  int32_t collectiionStatus; // w8
  _BOOL8 v13; // x9
  bool v14; // zf
  struct ServantEntity_o *servantEntity; // x9

  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  v8 = ((__int64 (__fastcall *)(MaterialCollectionServantListViewItem_o *, ListViewSort_o *, void *))klass->vtable._5_IsMatchFilter.method)(
         this,
         sort,
         klass[1]._1.image);
  result = 0;
  if ( (v8 & 1) != 0 )
  {
    if ( !sort )
      sub_1BCAA3C(0LL, v6);
    sortKind = sort->fields.sortKind;
    if ( sortKind == 27 )
    {
      v11 = 0LL;
    }
    else
    {
      collectiionStatus = this->fields.collectiionStatus;
      v13 = collectiionStatus == 1;
      v14 = collectiionStatus == 2;
      v11 = 2LL;
      if ( !v14 )
        v11 = v13;
    }
    servantEntity = this->fields.servantEntity;
    this->fields.sortValue0 = v11;
    if ( servantEntity )
    {
      MaterialCollectionServantListViewItem__SetServantSortParam(this, sortKind, v7);
    }
    else if ( this->fields.commandCodeEntity )
    {
      MaterialCollectionServantListViewItem__SetCommandCodeSortParam(this, sortKind, v7);
    }
    return 1;
  }
  return result;
}


System_String_o *__fastcall MaterialCollectionServantListViewItem__get_AttackText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t maxAtk; // w19
  System_String_o **v11; // x8

  if ( (byte_4B11729 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_19249/*"error"*/, v6, v7);
    byte_4B11729 = 1;
  }
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
  {
    maxAtk = userSvtCollectionEntity->fields.maxAtk;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    return LocalizationManager__GetAttackInfo(maxAtk, 0LL);
  }
  else
  {
    if ( this->fields.userCommandCodeCollectionEntity )
      v11 = (System_String_o **)&StringLiteral_1/*""*/;
    else
      v11 = (System_String_o **)&StringLiteral_19249/*"error"*/;
    return *v11;
  }
}


int32_t __fastcall MaterialCollectionServantListViewItem__get_CollectionKind(
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


System_String_o *__fastcall MaterialCollectionServantListViewItem__get_CostText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct ServantEntity_o *servantEntity; // x8
  int32_t cost; // w19
  System_String_o **v11; // x8

  if ( (byte_4B11727 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_19249/*"error"*/, v6, v7);
    byte_4B11727 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    cost = servantEntity->fields.cost;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    return LocalizationManager__GetCostInfo(cost, 0LL);
  }
  else
  {
    if ( this->fields.commandCodeEntity )
      v11 = (System_String_o **)&StringLiteral_1/*""*/;
    else
      v11 = (System_String_o **)&StringLiteral_19249/*"error"*/;
    return *v11;
  }
}


System_String_o *__fastcall MaterialCollectionServantListViewItem__get_HpText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t maxHp; // w19
  System_String_o **v11; // x8

  if ( (byte_4B11728 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_19249/*"error"*/, v6, v7);
    byte_4B11728 = 1;
  }
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
  {
    maxHp = userSvtCollectionEntity->fields.maxHp;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    return LocalizationManager__GetHpInfo(maxHp, 0LL);
  }
  else
  {
    if ( this->fields.userCommandCodeCollectionEntity )
      v11 = (System_String_o **)&StringLiteral_1/*""*/;
    else
      v11 = (System_String_o **)&StringLiteral_19249/*"error"*/;
    return *v11;
  }
}


IconLabelInfo_o *__fastcall MaterialCollectionServantListViewItem__get_IconInfo(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo;
}


bool __fastcall MaterialCollectionServantListViewItem__get_IsCanNotSelect(
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
      servantEntity = (ServantEntity_o *)ServantEntity__get_IsEnemyCollectionDetail(servantEntity, 0LL);
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
      sub_1BCAA3C(servantEntity, method);
    }
    return 0;
  }
}


bool __fastcall MaterialCollectionServantListViewItem__get_IsCanSelectServant(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t Value_39773052; // w0
  unsigned int v11; // w20
  _BOOL4 v12; // w0
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  UserServantCollectionEntity_o *v14; // x0

  if ( (byte_4B1172A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ConstantMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_3430/*"CAN_SELECT_SVT_MATERIAL_FLAG"*/, v6, v7);
    byte_4B1172A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ConstantMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  Value_39773052 = ConstantMaster__GetValue_39773052(
                     (ConstantMaster_o *)Instance,
                     (System_String_o *)StringLiteral_3430/*"CAN_SELECT_SVT_MATERIAL_FLAG"*/,
                     0,
                     0LL);
  if ( !this->fields.userSvtCollectionEntity )
    goto LABEL_14;
  v11 = Value_39773052;
  if ( !UserServantCollectionEntity__IsDataLostStateServant(this->fields.userSvtCollectionEntity, 0LL) )
  {
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    if ( userSvtCollectionEntity )
    {
      if ( UserServantCollectionEntity__IsLinkLostStateServant(userSvtCollectionEntity, 0LL) )
      {
        LOBYTE(v12) = v11 & 1;
        return v12;
      }
      v14 = this->fields.userSvtCollectionEntity;
      if ( v14 && UserServantCollectionEntity__IsLinkBadStateServant(v14, 0LL) )
        return (v11 >> 2) & 1;
    }
LABEL_14:
    LOBYTE(v12) = 1;
    return v12;
  }
  return (v11 >> 1) & 1;
}


bool __fastcall MaterialCollectionServantListViewItem__get_IsDataLostStateServant(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0

  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
    LOBYTE(userSvtCollectionEntity) = UserServantCollectionEntity__IsDataLostStateServant(userSvtCollectionEntity, 0LL);
  return (char)userSvtCollectionEntity;
}


bool __fastcall MaterialCollectionServantListViewItem__get_IsEnemyCollectionDetail(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0

  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    LOBYTE(servantEntity) = ServantEntity__get_IsEnemyCollectionDetail(servantEntity, 0LL);
  return (char)servantEntity;
}


bool __fastcall MaterialCollectionServantListViewItem__get_IsHideStateServant(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0

  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
    LOBYTE(userSvtCollectionEntity) = UserServantCollectionEntity__IsHideStateServant(userSvtCollectionEntity, 0LL);
  return (char)userSvtCollectionEntity;
}


bool __fastcall MaterialCollectionServantListViewItem__get_IsLinkBadStateServant(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0

  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
    LOBYTE(userSvtCollectionEntity) = UserServantCollectionEntity__IsLinkBadStateServant(userSvtCollectionEntity, 0LL);
  return (char)userSvtCollectionEntity;
}


bool __fastcall MaterialCollectionServantListViewItem__get_IsLinkLostStateServant(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0

  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
    LOBYTE(userSvtCollectionEntity) = UserServantCollectionEntity__IsLinkLostStateServant(userSvtCollectionEntity, 0LL);
  return (char)userSvtCollectionEntity;
}


bool __fastcall MaterialCollectionServantListViewItem__get_IsServantEquip(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0

  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    LOBYTE(servantEntity) = ServantEntity__get_IsKeepServantEquip(servantEntity, 0LL);
  return (char)servantEntity;
}


bool __fastcall MaterialCollectionServantListViewItem__get_IsValentineList(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isValentineList;
}


System_String_o *__fastcall MaterialCollectionServantListViewItem__get_LevelText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t maxLv; // w19
  System_String_o **v11; // x8

  if ( (byte_4B11725 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_19249/*"error"*/, v6, v7);
    byte_4B11725 = 1;
  }
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
  {
    maxLv = userSvtCollectionEntity->fields.maxLv;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    return LocalizationManager__GetLevelInfo(maxLv, 0LL);
  }
  else
  {
    if ( this->fields.userCommandCodeCollectionEntity )
      v11 = (System_String_o **)&StringLiteral_1/*""*/;
    else
      v11 = (System_String_o **)&StringLiteral_19249/*"error"*/;
    return *v11;
  }
}


System_String_o *__fastcall MaterialCollectionServantListViewItem__get_NameText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantEntity_o *servantEntity; // x0
  CommandCodeEntity_o *commandCodeEntity; // x0

  if ( (byte_4B11724 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19249/*"error"*/, method, v2);
    byte_4B11724 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return ServantEntity__getName(servantEntity, -1, -1, 0LL);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( commandCodeEntity )
    return CommandCodeEntity__GetName(commandCodeEntity, 0LL);
  else
    return (System_String_o *)StringLiteral_19249/*"error"*/;
}


System_String_o *__fastcall MaterialCollectionServantListViewItem__get_RarityText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t rarity; // w19

  if ( (byte_4B11726 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B11726 = 1;
  }
  rarity = this->fields.rarity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__GetRarityInfo(rarity, 0LL);
}


UserCommandCodeCollectionEntity_o *__fastcall MaterialCollectionServantListViewItem__get_UserCommandCodeCollection(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userCommandCodeCollectionEntity;
}


UserServantCollectionEntity_o *__fastcall MaterialCollectionServantListViewItem__get_UserServantCollection(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtCollectionEntity;
}