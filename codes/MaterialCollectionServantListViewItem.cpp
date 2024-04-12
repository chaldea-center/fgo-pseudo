void __fastcall MaterialCollectionServantListViewItem___ctor(
        MaterialCollectionServantListViewItem_o *this,
        int32_t index,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t kind,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  void *Instance; // x0
  __int64 v24; // x1
  struct UserServantCollectionEntity_o *v25; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x21
  __int64 v27; // x22
  __int64 v28; // x23
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  ServantLimitMaster_o *v37; // x22
  struct ServantEntity_o *v38; // x8
  struct UserServantCollectionEntity_o *v39; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_42B0037 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&IconLabelInfo_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0037 = 1;
  }
  v9 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0LL);
  this->fields.iconLabelInfo = v9;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  this->fields.index = index;
  this->fields.displayKind = kind;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
    (System_Int32_array **)userSvtCollectionEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v25 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_18;
  v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v28 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v40.fields.currentCryptoKey = v28;
  *(_QWORD *)&v40.fields.fakeValue = v27;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v40, 0LL);
  if ( !v26 )
    goto LABEL_18;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v26,
                                       (int32_t)Instance,
                                       (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_18;
  v37 = (ServantLimitMaster_o *)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                       (*p_userSvtCollectionEntity)->fields.svtId,
                       0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_18;
  if ( !v37 )
    goto LABEL_18;
  Instance = ServantLimitMaster__GetEntity(
               v37,
               (int32_t)Instance,
               (*p_userSvtCollectionEntity)->fields.maxLimitCount,
               0LL);
  v38 = *p_servantEntity;
  if ( !*p_servantEntity
    || (this->fields.classId = v38->fields.classId, !Instance)
    || (v39 = this->fields.userSvtCollectionEntity, this->fields.rarity = *((_DWORD *)Instance + 6), !v39)
    || (Instance = this->fields.iconLabelInfo,
        this->fields.collectiionStatus = v39->fields.status,
        this->fields.sortValue2 = -v38->fields.collectionNo,
        !Instance) )
  {
LABEL_18:
    sub_B52A5C(Instance, v24);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


void __fastcall MaterialCollectionServantListViewItem___ctor_25142884(
        MaterialCollectionServantListViewItem_o *this,
        int32_t index,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        int32_t kind,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x23
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x23
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  struct UserCommandCodeCollectionEntity_o *v25; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x20
  __int64 v27; // x21
  __int64 v28; // x22
  struct CommandCodeEntity_o *Entity; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  struct UserCommandCodeCollectionEntity_o *v37; // x9
  IconLabelInfo_o *iconLabelInfo; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_42B0038 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B52984(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B52984(&IconLabelInfo_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0038 = 1;
  }
  v9 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0LL);
  this->fields.iconLabelInfo = v9;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.userCommandCodeCollectionEntity = userCommandCodeCollectionEntity;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  this->fields.index = index;
  this->fields.displayKind = kind;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeCollectionEntity,
    (System_Int32_array **)userCommandCodeCollectionEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v25 = *p_userCommandCodeCollectionEntity;
  if ( !*p_userCommandCodeCollectionEntity )
    goto LABEL_13;
  v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v28 = *(_QWORD *)&v25->fields.commandCodeId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&v25->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v39.fields.currentCryptoKey = v28;
  *(_QWORD *)&v39.fields.fakeValue = v27;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v39, 0LL);
  if ( !v26 )
    goto LABEL_13;
  Entity = (struct CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v26,
                                           (int32_t)Instance,
                                           (const MethodInfo_23E22D8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = Entity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
    (System_Int32_array **)Entity,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  commandCodeEntity = this->fields.commandCodeEntity;
  this->fields.classId = 0;
  if ( !commandCodeEntity
    || (v37 = this->fields.userCommandCodeCollectionEntity, this->fields.rarity = commandCodeEntity->fields.rarity, !v37)
    || (this->fields.collectiionStatus = v37->fields.status,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                      commandCodeEntity->fields.collectionNo,
                                      0LL),
        iconLabelInfo = this->fields.iconLabelInfo,
        this->fields.sortValue2 = -(int)Instance,
        !iconLabelInfo) )
  {
LABEL_13:
    sub_B52A5C(Instance, v24);
  }
  IconLabelInfo__Clear(iconLabelInfo, 0LL);
}


void __fastcall MaterialCollectionServantListViewItem__Finalize(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
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
  __int64 v8; // x0

  if ( (byte_42B003A & 1) == 0 )
  {
    sub_B52984(&ListViewSort_FilterKind___TypeInfo);
    byte_42B003A = 1;
  }
  v5 = (ListViewSort_FilterKind_array *)sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_9;
  v6 = v5;
  if ( !v5->max_length )
  {
    v8 = sub_B52A88(v5);
    sub_B52A28(v8, 0LL);
  }
  v5->m_Items[1] = 49;
  if ( !sort )
LABEL_9:
    sub_B52A5C(v5, v6);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v5, 0LL) || this->fields.collectiionStatus != 0;
}


bool __fastcall MaterialCollectionServantListViewItem__IsMatchServantFilter(
        MaterialCollectionServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v7; // x0
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  int32_t collectiionStatus; // w8
  int32_t v13; // w1
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x21

  if ( (byte_42B0039 & 1) == 0 )
  {
    sub_B52984(&FilterKindList_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_42B0039 = 1;
  }
  if ( !sort )
    return 0;
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_38;
  v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v7, 0LL) )
  {
    v8 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v8 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v8->static_fields->ClassFilterKindList;
    if ( ClassGroupFilterKindList )
    {
      v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                              ClassGroupFilterKindList,
                                              (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_17;
    }
LABEL_38:
    sub_B52A5C(ClassGroupFilterKindList, sort);
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
    return 0;
LABEL_17:
  v10 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v10 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v10->static_fields->CollectionStateFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_38;
  v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL) )
  {
    collectiionStatus = this->fields.collectiionStatus;
    if ( collectiionStatus == 2 )
    {
      v13 = 12;
    }
    else if ( collectiionStatus == 1 )
    {
      v13 = 11;
    }
    else
    {
      if ( collectiionStatus )
        goto LABEL_29;
      v13 = 10;
    }
    if ( !ListViewSort__GetFilter(sort, v13, 0LL) )
      return 0;
  }
LABEL_29:
  v14 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v14->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_38;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v15, 0LL)
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
  if ( (byte_42B003B & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewItem_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B003B = 1;
  }
  commandCodeEntity = v4->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_12;
  v7 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
  v6 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
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
LABEL_12:
    sub_B52A5C(this, *(_QWORD *)&sortKind);
  IconLabelInfo__Set_28274368((IconLabelInfo_o *)this, 57, v8, 0, 0, 0, 0, 0, 0LL);
}


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
    sub_B52A5C(this, sortKind);
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
    IconLabelInfo__Set_28274368(iconLabelInfo, v7, collectionNo, 0, 0, 0, 0, 0, 0LL);
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
  int64_t v10; // x8
  int32_t collectiionStatus; // w8
  _BOOL8 v12; // x9
  bool v13; // zf
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
      sub_B52A5C(0LL, v6);
    if ( sort->fields.sortKind == 27 )
    {
      v10 = 0LL;
    }
    else
    {
      collectiionStatus = this->fields.collectiionStatus;
      v12 = collectiionStatus == 1;
      v13 = collectiionStatus == 2;
      v10 = 2LL;
      if ( !v13 )
        v10 = v12;
    }
    servantEntity = this->fields.servantEntity;
    this->fields.sortValue0 = v10;
    if ( servantEntity )
    {
      MaterialCollectionServantListViewItem__SetServantSortParam(this, sort->fields.sortKind, v7);
    }
    else if ( this->fields.commandCodeEntity )
    {
      MaterialCollectionServantListViewItem__SetCommandCodeSortParam(this, sort->fields.sortKind, v7);
    }
    return 1;
  }
  return result;
}


System_String_o *__fastcall MaterialCollectionServantListViewItem__get_AttackText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t maxAtk; // w19
  System_String_o **v6; // x8

  if ( (byte_42B0041 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_18529/*"error"*/);
    byte_42B0041 = 1;
  }
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
  {
    maxAtk = userSvtCollectionEntity->fields.maxAtk;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__GetAttackInfo(maxAtk, 0LL);
  }
  else
  {
    if ( this->fields.userCommandCodeCollectionEntity )
      v6 = (System_String_o **)&StringLiteral_1/*""*/;
    else
      v6 = (System_String_o **)&StringLiteral_18529/*"error"*/;
    return *v6;
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
  struct ServantEntity_o *servantEntity; // x8
  int32_t cost; // w19
  System_String_o **v6; // x8

  if ( (byte_42B003F & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_18529/*"error"*/);
    byte_42B003F = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    cost = servantEntity->fields.cost;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__GetCostInfo(cost, 0LL);
  }
  else
  {
    if ( this->fields.commandCodeEntity )
      v6 = (System_String_o **)&StringLiteral_1/*""*/;
    else
      v6 = (System_String_o **)&StringLiteral_18529/*"error"*/;
    return *v6;
  }
}


System_String_o *__fastcall MaterialCollectionServantListViewItem__get_HpText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t maxHp; // w19
  System_String_o **v6; // x8

  if ( (byte_42B0040 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_18529/*"error"*/);
    byte_42B0040 = 1;
  }
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
  {
    maxHp = userSvtCollectionEntity->fields.maxHp;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__GetHpInfo(maxHp, 0LL);
  }
  else
  {
    if ( this->fields.userCommandCodeCollectionEntity )
      v6 = (System_String_o **)&StringLiteral_1/*""*/;
    else
      v6 = (System_String_o **)&StringLiteral_18529/*"error"*/;
    return *v6;
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
  MaterialCollectionServantListViewItem_o *v2; // x19
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  struct UserServantCollectionEntity_o *v4; // x8
  int32_t status; // w8
  struct UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x8
  int v8; // w20
  System_Enum_o *v9; // x21
  UserServantCollectionEntity_o *v10; // x0
  System_Enum_o *v11; // x20
  int v12; // [xsp+8h] [xbp-28h] BYREF
  int v13; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_42B0042 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_B52984(&MaterialCollectionServantListViewItem_IsCanSelectFlag_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (MaterialCollectionServantListViewItem_o *)sub_B52984(&StringLiteral_2953/*"CAN_SELECT_SVT_MATERIAL_FLAG"*/);
    byte_42B0042 = 1;
  }
  if ( v2->fields.servantEntity )
  {
    this = (MaterialCollectionServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (MaterialCollectionServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ConstantMaster___);
      if ( this )
      {
        this = (MaterialCollectionServantListViewItem_o *)ConstantMaster__GetValue_28577068(
                                                            (ConstantMaster_o *)this,
                                                            (System_String_o *)StringLiteral_2953/*"CAN_SELECT_SVT_MATERIAL_FLAG"*/,
                                                            0,
                                                            0LL);
        userSvtCollectionEntity = v2->fields.userSvtCollectionEntity;
        if ( userSvtCollectionEntity )
        {
          if ( userSvtCollectionEntity->fields.status && !v2->fields.isValentineList )
          {
            v8 = (int)this;
            if ( UserServantCollectionEntity__IsDataLostStateServant(v2->fields.userSvtCollectionEntity, 0LL) )
            {
              v13 = v8;
              v9 = (System_Enum_o *)j_il2cpp_value_box_0(
                                      MaterialCollectionServantListViewItem_IsCanSelectFlag_TypeInfo,
                                      &v13);
              v12 = 2;
              this = (MaterialCollectionServantListViewItem_o *)j_il2cpp_value_box_0(
                                                                  MaterialCollectionServantListViewItem_IsCanSelectFlag_TypeInfo,
                                                                  &v12);
              if ( !v9 )
                goto LABEL_27;
              if ( !System_Enum__HasFlag(v9, (System_Enum_o *)this, 0LL) )
                return 1;
            }
            v10 = v2->fields.userSvtCollectionEntity;
            if ( v10 && UserServantCollectionEntity__IsLinkLostStateServant(v10, 0LL) )
            {
              v13 = v8;
              v11 = (System_Enum_o *)j_il2cpp_value_box_0(
                                       MaterialCollectionServantListViewItem_IsCanSelectFlag_TypeInfo,
                                       &v13);
              v12 = 1;
              this = (MaterialCollectionServantListViewItem_o *)j_il2cpp_value_box_0(
                                                                  MaterialCollectionServantListViewItem_IsCanSelectFlag_TypeInfo,
                                                                  &v12);
              if ( !v11 )
                goto LABEL_27;
              if ( !System_Enum__HasFlag(v11, (System_Enum_o *)this, 0LL) )
                return 1;
            }
          }
          this = (MaterialCollectionServantListViewItem_o *)v2->fields.servantEntity;
          if ( this )
          {
            this = (MaterialCollectionServantListViewItem_o *)ServantEntity__get_IsEnemyCollectionDetail(
                                                                (ServantEntity_o *)this,
                                                                0LL);
            v4 = v2->fields.userSvtCollectionEntity;
            if ( v4 )
            {
              status = v4->fields.status;
              if ( ((unsigned __int8)this & 1) != 0 )
                return status == 0;
              return status != 2;
            }
          }
        }
      }
    }
LABEL_27:
    sub_B52A5C(this, method);
  }
  if ( v2->fields.commandCodeEntity )
  {
    userCommandCodeCollectionEntity = v2->fields.userCommandCodeCollectionEntity;
    if ( userCommandCodeCollectionEntity )
    {
      status = userCommandCodeCollectionEntity->fields.status;
      return status != 2;
    }
    goto LABEL_27;
  }
  return 0;
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
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t maxLv; // w19
  System_String_o **v6; // x8

  if ( (byte_42B003D & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_18529/*"error"*/);
    byte_42B003D = 1;
  }
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
  {
    maxLv = userSvtCollectionEntity->fields.maxLv;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__GetLevelInfo(maxLv, 0LL);
  }
  else
  {
    if ( this->fields.userCommandCodeCollectionEntity )
      v6 = (System_String_o **)&StringLiteral_1/*""*/;
    else
      v6 = (System_String_o **)&StringLiteral_18529/*"error"*/;
    return *v6;
  }
}


System_String_o *__fastcall MaterialCollectionServantListViewItem__get_NameText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0
  CommandCodeEntity_o *commandCodeEntity; // x0

  if ( (byte_42B003C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18529/*"error"*/);
    byte_42B003C = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return ServantEntity__getName(servantEntity, -1, -1, 0LL);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( commandCodeEntity )
    return CommandCodeEntity__GetName(commandCodeEntity, 0LL);
  else
    return (System_String_o *)StringLiteral_18529/*"error"*/;
}


System_String_o *__fastcall MaterialCollectionServantListViewItem__get_RarityText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t rarity; // w19

  if ( (byte_42B003E & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42B003E = 1;
  }
  rarity = this->fields.rarity;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
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