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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantCollectionEntity_o *v30; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x21
  __int64 v32; // x22
  __int64 v33; // x23
  int32_t v34; // w0
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  WebViewManager_o *v43; // x0
  WarQuestSelectionMaster_o *v44; // x0
  ServantLimitMaster_o *v45; // x22
  int32_t v46; // w0
  ServantLimitEntity_o *v47; // x0
  struct ServantEntity_o *v48; // x8
  struct UserServantCollectionEntity_o *v49; // x9
  IconLabelInfo_o *iconLabelInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_40FCB5D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40FCB5D = 1;
  }
  v14 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&index,
                             userSvtCollectionEntity,
                             *(_QWORD *)&kind,
                             method);
  IconLabelInfo___ctor(v14, 0LL);
  this->fields.iconLabelInfo = v14;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  this->fields.index = index;
  this->fields.displayKind = kind;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
    (System_Int32_array **)userSvtCollectionEntity,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v30 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_18;
  v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v33 = *(_QWORD *)&v30->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&v30->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v51.fields.currentCryptoKey = v33;
  *(_QWORD *)&v51.fields.fakeValue = v32;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v51, 0LL);
  if ( !v31 )
    goto LABEL_18;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v31,
                                       v34,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v43 )
    goto LABEL_18;
  v44 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v43,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_18;
  v45 = (ServantLimitMaster_o *)v44;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          (*p_userSvtCollectionEntity)->fields.svtId,
          0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_18;
  if ( !v45 )
    goto LABEL_18;
  v47 = ServantLimitMaster__GetEntity(v45, v46, (*p_userSvtCollectionEntity)->fields.maxLimitCount, 0LL);
  v48 = *p_servantEntity;
  if ( !*p_servantEntity
    || (this->fields.classId = v48->fields.classId, !v47)
    || (v49 = this->fields.userSvtCollectionEntity, this->fields.rarity = v47->fields.rarity, !v49)
    || (iconLabelInfo = this->fields.iconLabelInfo,
        this->fields.collectiionStatus = v49->fields.status,
        this->fields.sortValue2 = -v48->fields.collectionNo,
        !iconLabelInfo) )
  {
LABEL_18:
    sub_B170D4();
  }
  IconLabelInfo__Clear(iconLabelInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewItem___ctor_30088356(
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserCommandCodeCollectionEntity_o *v29; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x20
  __int64 v31; // x21
  __int64 v32; // x22
  int32_t v33; // w0
  struct CommandCodeEntity_o *Entity; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  struct UserCommandCodeCollectionEntity_o *v42; // x9
  int32_t v43; // w0
  IconLabelInfo_o *iconLabelInfo; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_40FCB5E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v9);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FCB5E = 1;
  }
  v13 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&index,
                             userCommandCodeCollectionEntity,
                             *(_QWORD *)&kind,
                             method);
  IconLabelInfo___ctor(v13, 0LL);
  this->fields.iconLabelInfo = v13;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.userCommandCodeCollectionEntity = userCommandCodeCollectionEntity;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  this->fields.index = index;
  this->fields.displayKind = kind;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeCollectionEntity,
    (System_Int32_array **)userCommandCodeCollectionEntity,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v29 = *p_userCommandCodeCollectionEntity;
  if ( !*p_userCommandCodeCollectionEntity )
    goto LABEL_13;
  v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v32 = *(_QWORD *)&v29->fields.commandCodeId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&v29->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v45.fields.currentCryptoKey = v32;
  *(_QWORD *)&v45.fields.fakeValue = v31;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v45, 0LL);
  if ( !v30 )
    goto LABEL_13;
  Entity = (struct CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v30,
                                           v33,
                                           (const MethodInfo_266F388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
    (System_Int32_array **)Entity,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  commandCodeEntity = this->fields.commandCodeEntity;
  this->fields.classId = 0;
  if ( !commandCodeEntity
    || (v42 = this->fields.userCommandCodeCollectionEntity, this->fields.rarity = commandCodeEntity->fields.rarity, !v42)
    || (this->fields.collectiionStatus = v42->fields.status,
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                commandCodeEntity->fields.collectionNo,
                0LL),
        iconLabelInfo = this->fields.iconLabelInfo,
        this->fields.sortValue2 = -v43,
        !iconLabelInfo) )
  {
LABEL_13:
    sub_B170D4();
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
  __int64 v6; // x2

  if ( (byte_40FCB60 & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, sort);
    byte_40FCB60 = 1;
  }
  v5 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, method);
  if ( !v5 )
    goto LABEL_9;
  if ( !v5->max_length )
  {
    sub_B17100(v5, v5, v6);
    sub_B170A0();
  }
  v5->m_Items[1] = 49;
  if ( !sort )
LABEL_9:
    sub_B170D4();
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
  System_Collections_Generic_List_Voice_BATTLE__o *ClassFilterKindList; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *CollectionStateFilterKindList; // x0
  ListViewSort_FilterKind_array *v14; // x0
  int32_t collectiionStatus; // w8
  int32_t v16; // w1
  FilterKindList_c *v17; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v19; // x21

  if ( (byte_40FCB5F & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_40FCB5F = 1;
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
                                          (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL) )
  {
    v9 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v9 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v9->static_fields->ClassFilterKindList;
    if ( ClassFilterKindList )
    {
      v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                               ClassFilterKindList,
                                               (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_17;
    }
LABEL_38:
    sub_B170D4();
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
    return 0;
LABEL_17:
  v12 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v12->static_fields->CollectionStateFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_38;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           CollectionStateFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL) )
  {
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
        goto LABEL_29;
      v16 = 10;
    }
    if ( !ListViewSort__GetFilter(sort, v16, 0LL) )
      return 0;
  }
LABEL_29:
  v17 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v17 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v17->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v19, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewItem__SetCommandCodeSortParam(
        MaterialCollectionServantListViewItem_o *this,
        int32_t sortKind,
        const MethodInfo *method)
{
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w2
  int64_t rarity; // x8
  IconLabelInfo_o *iconLabelInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_40FCB61 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&sortKind);
    byte_40FCB61 = 1;
  }
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_12;
  v7 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
  v6 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v11, 0LL);
  if ( sortKind == 2 )
  {
    rarity = this->fields.rarity;
    iconLabelInfo = this->fields.iconLabelInfo;
  }
  else
  {
    iconLabelInfo = this->fields.iconLabelInfo;
    rarity = v8;
  }
  this->fields.sortValue1 = rarity;
  if ( !iconLabelInfo )
LABEL_12:
    sub_B170D4();
  IconLabelInfo__Set_28888132(iconLabelInfo, 57, v8, 0, 0, 0, 0, 0, 0LL);
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
    sub_B170D4();
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
    IconLabelInfo__Set_28888132(iconLabelInfo, v7, collectionNo, 0, 0, 0, 0, 0, 0LL);
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
  const MethodInfo *v6; // x2
  char v7; // w8
  bool result; // w0
  int64_t v9; // x8
  int32_t collectiionStatus; // w8
  _BOOL8 v11; // x9
  bool v12; // zf
  struct ServantEntity_o *servantEntity; // x9

  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  v7 = ((__int64 (__fastcall *)(MaterialCollectionServantListViewItem_o *, ListViewSort_o *, void *))klass->vtable._5_IsMatchFilter.method)(
         this,
         sort,
         klass[1]._1.image);
  result = 0;
  if ( (v7 & 1) != 0 )
  {
    if ( !sort )
      sub_B170D4();
    if ( sort->fields.sortKind == 27 )
    {
      v9 = 0LL;
    }
    else
    {
      collectiionStatus = this->fields.collectiionStatus;
      v11 = collectiionStatus == 1;
      v12 = collectiionStatus == 2;
      v9 = 2LL;
      if ( !v12 )
        v9 = v11;
    }
    servantEntity = this->fields.servantEntity;
    this->fields.sortValue0 = v9;
    if ( servantEntity )
    {
      MaterialCollectionServantListViewItem__SetServantSortParam(this, sort->fields.sortKind, v6);
    }
    else if ( this->fields.commandCodeEntity )
    {
      MaterialCollectionServantListViewItem__SetCommandCodeSortParam(this, sort->fields.sortKind, v6);
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

  if ( (byte_40FCB67 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v3);
    sub_B16FFC(&StringLiteral_18326, v4);
    byte_40FCB67 = 1;
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
      v8 = (System_String_o **)&StringLiteral_1;
    else
      v8 = (System_String_o **)&StringLiteral_18326;
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

  if ( (byte_40FCB65 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v3);
    sub_B16FFC(&StringLiteral_18326, v4);
    byte_40FCB65 = 1;
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
      v8 = (System_String_o **)&StringLiteral_1;
    else
      v8 = (System_String_o **)&StringLiteral_18326;
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

  if ( (byte_40FCB66 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v3);
    sub_B16FFC(&StringLiteral_18326, v4);
    byte_40FCB66 = 1;
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
      v8 = (System_String_o **)&StringLiteral_1;
    else
      v8 = (System_String_o **)&StringLiteral_18326;
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
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  ServantEntity_o *servantEntity; // x0
  bool IsEnemyCollectionDetail; // w0
  struct UserServantCollectionEntity_o *v6; // x8
  int32_t status; // w8
  struct UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x8

  if ( this->fields.servantEntity )
  {
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    if ( !userSvtCollectionEntity )
      goto LABEL_16;
    if ( !userSvtCollectionEntity->fields.status
      || !UserServantCollectionEntity__IsDataLostStateServant(userSvtCollectionEntity, 0LL)
      || this->fields.isValentineList )
    {
      servantEntity = this->fields.servantEntity;
      if ( servantEntity )
      {
        IsEnemyCollectionDetail = ServantEntity__get_IsEnemyCollectionDetail(servantEntity, 0LL);
        v6 = this->fields.userSvtCollectionEntity;
        if ( v6 )
        {
          status = v6->fields.status;
          if ( IsEnemyCollectionDetail )
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
      sub_B170D4();
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

  if ( (byte_40FCB63 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v3);
    sub_B16FFC(&StringLiteral_18326, v4);
    byte_40FCB63 = 1;
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
      v8 = (System_String_o **)&StringLiteral_1;
    else
      v8 = (System_String_o **)&StringLiteral_18326;
    return *v8;
  }
}


System_String_o *__fastcall MaterialCollectionServantListViewItem__get_NameText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0
  CommandCodeEntity_o *commandCodeEntity; // x0

  if ( (byte_40FCB62 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18326, method);
    byte_40FCB62 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return ServantEntity__getName(servantEntity, -1, -1, 0LL);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( commandCodeEntity )
    return CommandCodeEntity__GetName(commandCodeEntity, 0LL);
  else
    return (System_String_o *)StringLiteral_18326;
}


System_String_o *__fastcall MaterialCollectionServantListViewItem__get_RarityText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t rarity; // w19

  if ( (byte_40FCB64 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    byte_40FCB64 = 1;
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