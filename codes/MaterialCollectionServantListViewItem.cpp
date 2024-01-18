// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewItem___ctor(
        MaterialCollectionServantListViewItem_o *this,
        int32_t index,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  IconLabelInfo_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  void *Instance; // x0
  __int64 v29; // x1
  struct UserServantCollectionEntity_o *v30; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x21
  __int64 v32; // x22
  __int64 v33; // x23
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  ServantLimitMaster_o *v42; // x22
  struct ServantEntity_o *v43; // x8
  struct UserServantCollectionEntity_o *v44; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4189CF8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4189CF8 = 1;
  }
  v14 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v14, 0LL);
  this->fields.iconLabelInfo = v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  this->fields.index = index;
  this->fields.displayKind = kind;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
    (System_Int32_array **)userSvtCollectionEntity,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v30 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_18;
  v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v33 = *(_QWORD *)&v30->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&v30->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v45.fields.currentCryptoKey = v33;
  *(_QWORD *)&v45.fields.fakeValue = v32;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v45, 0LL);
  if ( !v31 )
    goto LABEL_18;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v31,
                                       (int32_t)Instance,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_18;
  v42 = (ServantLimitMaster_o *)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                       (*p_userSvtCollectionEntity)->fields.svtId,
                       0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_18;
  if ( !v42 )
    goto LABEL_18;
  Instance = ServantLimitMaster__GetEntity(
               v42,
               (int32_t)Instance,
               (*p_userSvtCollectionEntity)->fields.maxLimitCount,
               0LL);
  v43 = *p_servantEntity;
  if ( !*p_servantEntity
    || (this->fields.classId = v43->fields.classId, !Instance)
    || (v44 = this->fields.userSvtCollectionEntity, this->fields.rarity = *((_DWORD *)Instance + 6), !v44)
    || (Instance = this->fields.iconLabelInfo,
        this->fields.collectiionStatus = v44->fields.status,
        this->fields.sortValue2 = -v43->fields.collectionNo,
        !Instance) )
  {
LABEL_18:
    sub_B2C434(Instance, v29);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewItem___ctor_28951200(
        MaterialCollectionServantListViewItem_o *this,
        int32_t index,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  IconLabelInfo_o *v13; // x23
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x23
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  struct UserCommandCodeCollectionEntity_o *v29; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x20
  __int64 v31; // x21
  __int64 v32; // x22
  struct CommandCodeEntity_o *Entity; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  struct UserCommandCodeCollectionEntity_o *v41; // x9
  IconLabelInfo_o *iconLabelInfo; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4189CF9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v9);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4189CF9 = 1;
  }
  v13 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0LL);
  this->fields.iconLabelInfo = v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.userCommandCodeCollectionEntity = userCommandCodeCollectionEntity;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  this->fields.index = index;
  this->fields.displayKind = kind;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeCollectionEntity,
    (System_Int32_array **)userCommandCodeCollectionEntity,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v29 = *p_userCommandCodeCollectionEntity;
  if ( !*p_userCommandCodeCollectionEntity )
    goto LABEL_13;
  v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v32 = *(_QWORD *)&v29->fields.commandCodeId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&v29->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v43.fields.currentCryptoKey = v32;
  *(_QWORD *)&v43.fields.fakeValue = v31;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v43, 0LL);
  if ( !v30 )
    goto LABEL_13;
  Entity = (struct CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v30,
                                           (int32_t)Instance,
                                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = Entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
    (System_Int32_array **)Entity,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  commandCodeEntity = this->fields.commandCodeEntity;
  this->fields.classId = 0;
  if ( !commandCodeEntity
    || (v41 = this->fields.userCommandCodeCollectionEntity, this->fields.rarity = commandCodeEntity->fields.rarity, !v41)
    || (this->fields.collectiionStatus = v41->fields.status,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                      commandCodeEntity->fields.collectionNo,
                                      0LL),
        iconLabelInfo = this->fields.iconLabelInfo,
        this->fields.sortValue2 = -(int)Instance,
        !iconLabelInfo) )
  {
LABEL_13:
    sub_B2C434(Instance, v28);
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

  if ( (byte_4189CFB & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_FilterKind___TypeInfo, sort);
    byte_4189CFB = 1;
  }
  v5 = (ListViewSort_FilterKind_array *)sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_9;
  v6 = v5;
  if ( !v5->max_length )
  {
    v8 = sub_B2C460(v5);
    sub_B2C400(v8, 0LL);
  }
  v5->m_Items[1] = 49;
  if ( !sort )
LABEL_9:
    sub_B2C434(v5, v6);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v5, 0LL) || this->fields.collectiionStatus != 0;
}


bool __fastcall MaterialCollectionServantListViewItem__IsMatchServantFilter(
        MaterialCollectionServantListViewItem_o *this,
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
  ListViewSort_FilterKind_array *v12; // x0
  int32_t collectiionStatus; // w8
  int32_t v14; // w1
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x21

  if ( (byte_4189CFA & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_4189CFA = 1;
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
    goto LABEL_38;
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
LABEL_38:
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
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v11->static_fields->CollectionStateFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_38;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL) )
  {
    collectiionStatus = this->fields.collectiionStatus;
    if ( collectiionStatus == 2 )
    {
      v14 = 12;
    }
    else if ( collectiionStatus == 1 )
    {
      v14 = 11;
    }
    else
    {
      if ( collectiionStatus )
        goto LABEL_29;
      v14 = 10;
    }
    if ( !ListViewSort__GetFilter(sort, v14, 0LL) )
      return 0;
  }
LABEL_29:
  v15 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v15->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_38;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v16, 0LL)
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
  if ( (byte_4189CFC & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewItem_o *)sub_B2C35C(
                                                        &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                        *(_QWORD *)&sortKind);
    byte_4189CFC = 1;
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
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v10, 0LL);
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
    sub_B2C434(this, *(_QWORD *)&sortKind);
  IconLabelInfo__Set_27362128((IconLabelInfo_o *)this, 57, v8, 0, 0, 0, 0, 0, 0LL);
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
    sub_B2C434(this, sortKind);
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
    IconLabelInfo__Set_27362128(iconLabelInfo, v7, collectionNo, 0, 0, 0, 0, 0, 0LL);
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
      sub_B2C434(0LL, v6);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t maxAtk; // w19
  System_String_o **v8; // x8

  if ( (byte_4189D02 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    sub_B2C35C(&StringLiteral_18395/*"error"*/, v4);
    byte_4189D02 = 1;
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
      v8 = (System_String_o **)&StringLiteral_1/*""*/;
    else
      v8 = (System_String_o **)&StringLiteral_18395/*"error"*/;
    return *v8;
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct ServantEntity_o *servantEntity; // x8
  int32_t cost; // w19
  System_String_o **v8; // x8

  if ( (byte_4189D00 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    sub_B2C35C(&StringLiteral_18395/*"error"*/, v4);
    byte_4189D00 = 1;
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
      v8 = (System_String_o **)&StringLiteral_1/*""*/;
    else
      v8 = (System_String_o **)&StringLiteral_18395/*"error"*/;
    return *v8;
  }
}


System_String_o *__fastcall MaterialCollectionServantListViewItem__get_HpText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t maxHp; // w19
  System_String_o **v8; // x8

  if ( (byte_4189D01 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    sub_B2C35C(&StringLiteral_18395/*"error"*/, v4);
    byte_4189D01 = 1;
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
      v8 = (System_String_o **)&StringLiteral_1/*""*/;
    else
      v8 = (System_String_o **)&StringLiteral_18395/*"error"*/;
    return *v8;
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
  int32_t status; // w8
  struct UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x8

  v2 = this;
  if ( this->fields.servantEntity )
  {
    this = (MaterialCollectionServantListViewItem_o *)this->fields.userSvtCollectionEntity;
    if ( !this )
      goto LABEL_16;
    if ( !LODWORD(this->fields.sortValue0B)
      || !UserServantCollectionEntity__IsDataLostStateServant((UserServantCollectionEntity_o *)this, 0LL)
      || v2->fields.isValentineList )
    {
      this = (MaterialCollectionServantListViewItem_o *)v2->fields.servantEntity;
      if ( this )
      {
        this = (MaterialCollectionServantListViewItem_o *)ServantEntity__get_IsEnemyCollectionDetail(
                                                            (ServantEntity_o *)this,
                                                            0LL);
        userSvtCollectionEntity = v2->fields.userSvtCollectionEntity;
        if ( userSvtCollectionEntity )
        {
          status = userSvtCollectionEntity->fields.status;
          if ( ((unsigned __int8)this & 1) != 0 )
            return status == 0;
          return status != 2;
        }
      }
      goto LABEL_16;
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
      sub_B2C434(this, method);
    }
    return 0;
  }
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t maxLv; // w19
  System_String_o **v8; // x8

  if ( (byte_4189CFE & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    sub_B2C35C(&StringLiteral_18395/*"error"*/, v4);
    byte_4189CFE = 1;
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
      v8 = (System_String_o **)&StringLiteral_1/*""*/;
    else
      v8 = (System_String_o **)&StringLiteral_18395/*"error"*/;
    return *v8;
  }
}


System_String_o *__fastcall MaterialCollectionServantListViewItem__get_NameText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0
  CommandCodeEntity_o *commandCodeEntity; // x0

  if ( (byte_4189CFD & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18395/*"error"*/, method);
    byte_4189CFD = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return ServantEntity__getName(servantEntity, -1, -1, 0LL);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( commandCodeEntity )
    return CommandCodeEntity__GetName(commandCodeEntity, 0LL);
  else
    return (System_String_o *)StringLiteral_18395/*"error"*/;
}


System_String_o *__fastcall MaterialCollectionServantListViewItem__get_RarityText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t rarity; // w19

  if ( (byte_4189CFF & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    byte_4189CFF = 1;
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