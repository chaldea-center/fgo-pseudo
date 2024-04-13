// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewItem___ctor(
        MaterialCollectionServantListViewItem_o *this,
        int32_t index,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t kind,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  IconLabelInfo_o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  void *Instance; // x0
  __int64 v39; // x1
  struct UserServantCollectionEntity_o *v40; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v41; // x21
  __int64 v42; // x22
  __int64 v43; // x23
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  ServantLimitMaster_o *v52; // x22
  struct ServantEntity_o *v53; // x8
  struct UserServantCollectionEntity_o *v54; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_42E8A25 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantLimitMaster___,
      index,
      (_DWORD)userSvtCollectionEntity,
      *(_QWORD *)&kind);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    byte_42E8A25 = 1;
  }
  v24 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0LL);
  this->fields.iconLabelInfo = v24;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  this->fields.index = index;
  this->fields.displayKind = kind;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
    (System_Int32_array **)userSvtCollectionEntity,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v40 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_18;
  v41 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v43 = *(_QWORD *)&v40->fields.svtId.fields.currentCryptoKey;
  v42 = *(_QWORD *)&v40->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v55.fields.currentCryptoKey = v43;
  *(_QWORD *)&v55.fields.fakeValue = v42;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v55, 0LL);
  if ( !v41 )
    goto LABEL_18;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v41,
                                       (int32_t)Instance,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_18;
  v52 = (ServantLimitMaster_o *)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                       (*p_userSvtCollectionEntity)->fields.svtId,
                       0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_18;
  if ( !v52 )
    goto LABEL_18;
  Instance = ServantLimitMaster__GetEntity(
               v52,
               (int32_t)Instance,
               (*p_userSvtCollectionEntity)->fields.maxLimitCount,
               0LL);
  v53 = *p_servantEntity;
  if ( !*p_servantEntity
    || (this->fields.classId = v53->fields.classId, !Instance)
    || (v54 = this->fields.userSvtCollectionEntity, this->fields.rarity = *((_DWORD *)Instance + 6), !v54)
    || (Instance = this->fields.iconLabelInfo,
        this->fields.collectiionStatus = v54->fields.status,
        this->fields.sortValue2 = -v53->fields.collectionNo,
        !Instance) )
  {
LABEL_18:
    sub_B5D69C(Instance, v39);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewItem___ctor_25348204(
        MaterialCollectionServantListViewItem_o *this,
        int32_t index,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        int32_t kind,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  IconLabelInfo_o *v21; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  DataManager_o *Instance; // x0
  __int64 v36; // x1
  struct UserCommandCodeCollectionEntity_o *v37; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v38; // x20
  __int64 v39; // x21
  __int64 v40; // x22
  struct CommandCodeEntity_o *Entity; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  struct UserCommandCodeCollectionEntity_o *v49; // x9
  IconLabelInfo_o *iconLabelInfo; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_42E8A26 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_CommandCodeMaster___,
      index,
      (_DWORD)userCommandCodeCollectionEntity,
      *(_QWORD *)&kind);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42E8A26 = 1;
  }
  v21 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0LL);
  this->fields.iconLabelInfo = v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.userCommandCodeCollectionEntity = userCommandCodeCollectionEntity;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  this->fields.index = index;
  this->fields.displayKind = kind;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeCollectionEntity,
    (System_Int32_array **)userCommandCodeCollectionEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v37 = *p_userCommandCodeCollectionEntity;
  if ( !*p_userCommandCodeCollectionEntity )
    goto LABEL_13;
  v38 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v40 = *(_QWORD *)&v37->fields.commandCodeId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&v37->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v51.fields.currentCryptoKey = v40;
  *(_QWORD *)&v51.fields.fakeValue = v39;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v51, 0LL);
  if ( !v38 )
    goto LABEL_13;
  Entity = (struct CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v38,
                                           (int32_t)Instance,
                                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
    (System_Int32_array **)Entity,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  commandCodeEntity = this->fields.commandCodeEntity;
  this->fields.classId = 0;
  if ( !commandCodeEntity
    || (v49 = this->fields.userCommandCodeCollectionEntity, this->fields.rarity = commandCodeEntity->fields.rarity, !v49)
    || (this->fields.collectiionStatus = v49->fields.status,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                      commandCodeEntity->fields.collectionNo,
                                      0LL),
        iconLabelInfo = this->fields.iconLabelInfo,
        this->fields.sortValue2 = -(int)Instance,
        !iconLabelInfo) )
  {
LABEL_13:
    sub_B5D69C(Instance, v36);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  ListViewSort_FilterKind_array *v6; // x0
  ListViewSort_FilterKind_array *v7; // x1
  __int64 v9; // x0

  if ( (byte_42E8A28 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_FilterKind___TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    byte_42E8A28 = 1;
  }
  v6 = (ListViewSort_FilterKind_array *)sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !v6 )
    goto LABEL_9;
  v7 = v6;
  if ( !v6->max_length )
  {
    v9 = sub_B5D6C8(v6);
    sub_B5D668(v9, 0LL);
  }
  v6->m_Items[1] = 49;
  if ( !sort )
LABEL_9:
    sub_B5D69C(v6, v7);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v6, 0LL) || this->fields.collectiionStatus != 0;
}


bool __fastcall MaterialCollectionServantListViewItem__IsMatchServantFilter(
        MaterialCollectionServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  FilterKindList_c *v9; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  const MethodInfo *v14; // x2
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  int32_t collectiionStatus; // w8
  int32_t v18; // w1
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x0
  FilterKindList_c *v21; // x0
  ListViewSort_FilterKind_array *v22; // x21

  if ( (byte_42E8A27 & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6, v7, v8);
    byte_42E8A27 = 1;
  }
  if ( !sort )
    return 0;
  v9 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v9->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_46;
  v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL) )
  {
    v12 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v12 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v12->static_fields->ClassFilterKindList;
    if ( ClassGroupFilterKindList )
    {
      v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                               ClassGroupFilterKindList,
                                               (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL) )
        goto LABEL_17;
      goto LABEL_14;
    }
LABEL_46:
    sub_B5D69C(ClassGroupFilterKindList, sort);
  }
  if ( ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
    goto LABEL_17;
  if ( !ListViewSort__GetFilter(sort, 68, 0LL) )
    return 0;
  v19 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v19->static_fields->ClassFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_46;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL) )
  {
    if ( !ListViewSort__IsNotExistClassFilter(sort, this->fields.servantEntity, 0LL) )
      return 0;
    goto LABEL_17;
  }
LABEL_14:
  if ( !MaterialCollectionServantListViewItem__IsMatchClassFilter(this, sort, v14) )
    return 0;
LABEL_17:
  v15 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v15->static_fields->CollectionStateFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_46;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL) )
  {
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
        goto LABEL_37;
      v18 = 10;
    }
    if ( !ListViewSort__GetFilter(sort, v18, 0LL) )
      return 0;
  }
LABEL_37:
  v21 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v21 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v21->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_46;
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v22, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewItem__SetCommandCodeSortParam(
        MaterialCollectionServantListViewItem_o *this,
        int32_t sortKind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MaterialCollectionServantListViewItem_o *v5; // x19
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v7; // x21
  __int64 v8; // x22
  int32_t v9; // w2
  int64_t rarity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v5 = this;
  if ( (byte_42E8A29 & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewItem_o *)sub_B5D5C4(
                                                        &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                        sortKind,
                                                        (_DWORD)method,
                                                        v3);
    byte_42E8A29 = 1;
  }
  commandCodeEntity = v5->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_12;
  v8 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
  v7 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v8;
  *(_QWORD *)&v11.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v11, 0LL);
  if ( sortKind == 2 )
  {
    rarity = v5->fields.rarity;
    this = (MaterialCollectionServantListViewItem_o *)v5->fields.iconLabelInfo;
  }
  else
  {
    this = (MaterialCollectionServantListViewItem_o *)v5->fields.iconLabelInfo;
    rarity = v9;
  }
  v5->fields.sortValue1 = rarity;
  if ( !this )
LABEL_12:
    sub_B5D69C(this, *(_QWORD *)&sortKind);
  IconLabelInfo__Set_28463004((IconLabelInfo_o *)this, 57, v9, 0, 0, 0, 0, 0, 0LL);
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
    sub_B5D69C(this, sortKind);
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
    IconLabelInfo__Set_28463004(iconLabelInfo, v7, collectionNo, 0, 0, 0, 0, 0, 0LL);
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
      sub_B5D69C(0LL, v6);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t maxAtk; // w19
  System_String_o **v14; // x8

  if ( (byte_42E8A2F & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_18624/*"error"*/, v8, v9, v10);
    byte_42E8A2F = 1;
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
      v14 = (System_String_o **)&StringLiteral_1/*""*/;
    else
      v14 = (System_String_o **)&StringLiteral_18624/*"error"*/;
    return *v14;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct ServantEntity_o *servantEntity; // x8
  int32_t cost; // w19
  System_String_o **v14; // x8

  if ( (byte_42E8A2D & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_18624/*"error"*/, v8, v9, v10);
    byte_42E8A2D = 1;
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
      v14 = (System_String_o **)&StringLiteral_1/*""*/;
    else
      v14 = (System_String_o **)&StringLiteral_18624/*"error"*/;
    return *v14;
  }
}


System_String_o *__fastcall MaterialCollectionServantListViewItem__get_HpText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t maxHp; // w19
  System_String_o **v14; // x8

  if ( (byte_42E8A2E & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_18624/*"error"*/, v8, v9, v10);
    byte_42E8A2E = 1;
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
      v14 = (System_String_o **)&StringLiteral_1/*""*/;
    else
      v14 = (System_String_o **)&StringLiteral_18624/*"error"*/;
    return *v14;
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
      sub_B5D69C(servantEntity, method);
    }
    return 0;
  }
}


bool __fastcall MaterialCollectionServantListViewItem__get_IsCanSelectServant(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  int32_t Value_28723684; // w0
  int v17; // w20
  System_Enum_o *v18; // x19
  MaterialCollectionServantListViewItem_IsCanSelectFlag_c *v19; // x0
  int v20; // w8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  UserServantCollectionEntity_o *v22; // x0
  int v25; // [xsp+8h] [xbp-18h] BYREF
  int v26; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E8A30 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&MaterialCollectionServantListViewItem_IsCanSelectFlag_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_2980/*"CAN_SELECT_SVT_MATERIAL_FLAG"*/, v11, v12, v13);
    byte_42E8A30 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantMaster___)) == 0LL )
  {
LABEL_18:
    sub_B5D69C(Instance, v15);
  }
  Value_28723684 = ConstantMaster__GetValue_28723684(
                     (ConstantMaster_o *)Instance,
                     (System_String_o *)StringLiteral_2980/*"CAN_SELECT_SVT_MATERIAL_FLAG"*/,
                     0,
                     0LL);
  if ( !this->fields.userSvtCollectionEntity )
    return 1;
  v17 = Value_28723684;
  if ( UserServantCollectionEntity__IsDataLostStateServant(this->fields.userSvtCollectionEntity, 0LL) )
  {
    v26 = v17;
    v18 = (System_Enum_o *)j_il2cpp_value_box_0(MaterialCollectionServantListViewItem_IsCanSelectFlag_TypeInfo, &v26);
    v19 = MaterialCollectionServantListViewItem_IsCanSelectFlag_TypeInfo;
    v20 = 2;
    goto LABEL_14;
  }
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( !userSvtCollectionEntity )
    return 1;
  if ( UserServantCollectionEntity__IsLinkLostStateServant(userSvtCollectionEntity, 0LL) )
  {
    v26 = v17;
    v18 = (System_Enum_o *)j_il2cpp_value_box_0(MaterialCollectionServantListViewItem_IsCanSelectFlag_TypeInfo, &v26);
    v19 = MaterialCollectionServantListViewItem_IsCanSelectFlag_TypeInfo;
    v20 = 1;
    goto LABEL_14;
  }
  v22 = this->fields.userSvtCollectionEntity;
  if ( !v22 || !UserServantCollectionEntity__IsLinkBadStateServant(v22, 0LL) )
    return 1;
  v26 = v17;
  v18 = (System_Enum_o *)j_il2cpp_value_box_0(MaterialCollectionServantListViewItem_IsCanSelectFlag_TypeInfo, &v26);
  v19 = MaterialCollectionServantListViewItem_IsCanSelectFlag_TypeInfo;
  v20 = 4;
LABEL_14:
  v25 = v20;
  Instance = (DataManager_o *)j_il2cpp_value_box_0(v19, &v25);
  if ( !v18 )
    goto LABEL_18;
  return System_Enum__HasFlag(v18, (System_Enum_o *)Instance, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t maxLv; // w19
  System_String_o **v14; // x8

  if ( (byte_42E8A2B & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_18624/*"error"*/, v8, v9, v10);
    byte_42E8A2B = 1;
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
      v14 = (System_String_o **)&StringLiteral_1/*""*/;
    else
      v14 = (System_String_o **)&StringLiteral_18624/*"error"*/;
    return *v14;
  }
}


System_String_o *__fastcall MaterialCollectionServantListViewItem__get_NameText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantEntity_o *servantEntity; // x0
  CommandCodeEntity_o *commandCodeEntity; // x0

  if ( (byte_42E8A2A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18624/*"error"*/, (_DWORD)method, v2, v3);
    byte_42E8A2A = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return ServantEntity__getName(servantEntity, -1, -1, 0LL);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( commandCodeEntity )
    return CommandCodeEntity__GetName(commandCodeEntity, 0LL);
  else
    return (System_String_o *)StringLiteral_18624/*"error"*/;
}


System_String_o *__fastcall MaterialCollectionServantListViewItem__get_RarityText(
        MaterialCollectionServantListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t rarity; // w19

  if ( (byte_42E8A2C & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8A2C = 1;
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