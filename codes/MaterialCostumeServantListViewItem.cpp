void __fastcall MaterialCostumeServantListViewItem___ctor(
        MaterialCostumeServantListViewItem_o *this,
        ServantCostumeEntity_o *svtCostumeEntity,
        UserServantCollectionEntity_array *userSvtCollList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  IconLabelInfo_o *v14; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UserServantCollectionEntity_o **p_userSvtCollectionEntity_k__BackingField; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  signed int max_length; // w8
  il2cpp_array_size_t v38; // w26
  Il2CppClass **v39; // x28
  int32_t svtId; // w21
  Il2CppClass *v41; // x8
  System_Int32_array ***v42; // x28
  Il2CppClass *v43; // t1
  void *data; // x24
  const char *namespaze; // x25
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantCollectionEntity_o *v54; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v55; // x23
  __int64 v56; // x24
  __int64 v57; // x25
  int32_t v58; // w0
  struct ServantEntity_o *Entity; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  WebViewManager_o *v66; // x0
  WarQuestSelectionMaster_o *v67; // x0
  ServantLimitMaster_o *v68; // x23
  int32_t v69; // w0
  ServantLimitEntity_o *v70; // x0
  struct ServantEntity_o *servantEntity; // x8
  int32_t classId; // w9
  struct UserServantCollectionEntity_o *userSvtCollectionEntity_k__BackingField; // x8
  int32_t status; // w9
  struct ServantCostumeEntity_o *svtCostumeEntity_k__BackingField; // x8
  WebViewManager_o *v76; // x0
  WarQuestSelectionMaster_o *v77; // x0
  ServantCostumeReleaseMaster_o *v78; // x23
  int32_t v79; // w0
  struct UserServantCollectionEntity_o *v80; // x8
  struct System_Int32_array *costumeIds; // x11
  int v82; // w8
  unsigned int v83; // w10
  __int64 v84; // x9
  int32_t *v85; // x11
  IconLabelInfo_o **p_iconLabelInfo; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  if ( (byte_40FCBD2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, svtCostumeEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40FCBD2 = 1;
  }
  v14 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, svtCostumeEntity, userSvtCollList, method, v4);
  IconLabelInfo___ctor(v14, 0LL);
  this->fields.iconLabelInfo = v14;
  p_iconLabelInfo = &this->fields.iconLabelInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields._svtCostumeEntity_k__BackingField = svtCostumeEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._svtCostumeEntity_k__BackingField,
    (System_Int32_array **)svtCostumeEntity,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields._userSvtCollectionEntity_k__BackingField = 0LL;
  p_userSvtCollectionEntity_k__BackingField = &this->fields._userSvtCollectionEntity_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._userSvtCollectionEntity_k__BackingField,
    0LL,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields._costumeOpenStatus_k__BackingField = 0;
  if ( !userSvtCollList )
    goto LABEL_56;
  max_length = userSvtCollList->max_length;
  if ( max_length >= 1 )
  {
    v38 = 0;
    while ( 1 )
    {
      if ( !svtCostumeEntity )
        goto LABEL_56;
      if ( v38 >= max_length )
        goto LABEL_57;
      v39 = &userSvtCollList->obj.klass + (int)v38;
      svtId = svtCostumeEntity->fields.svtId;
      v43 = v39[4];
      v42 = (System_Int32_array ***)(v39 + 4);
      v41 = v43;
      if ( !v43 )
        goto LABEL_56;
      namespaze = v41->_1.namespaze;
      data = v41->_1.byval_arg.data;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v87.fields.currentCryptoKey = namespaze;
      *(_QWORD *)&v87.fields.fakeValue = data;
      v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v87, 0LL);
      if ( svtId == (_DWORD)v34 )
        break;
      max_length = userSvtCollList->max_length;
      if ( (int)++v38 >= max_length )
        goto LABEL_17;
    }
    if ( v38 >= userSvtCollList->max_length )
    {
LABEL_57:
      sub_B17100(v34, v35, v36);
      sub_B170A0();
    }
    v51 = *v42;
    *p_userSvtCollectionEntity_k__BackingField = (UserServantCollectionEntity_o *)*v42;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._userSvtCollectionEntity_k__BackingField,
      v51,
      v36,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
LABEL_17:
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_54;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v54 = *p_userSvtCollectionEntity_k__BackingField;
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_56;
  v55 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v57 = *(_QWORD *)&v54->fields.svtId.fields.currentCryptoKey;
  v56 = *(_QWORD *)&v54->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v88.fields.currentCryptoKey = v57;
  *(_QWORD *)&v88.fields.fakeValue = v56;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v88, 0LL);
  if ( !v55 )
    goto LABEL_56;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v55,
                                       v58,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v66 )
    goto LABEL_56;
  v67 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v66,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_56;
  v68 = (ServantLimitMaster_o *)v67;
  v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          (*p_userSvtCollectionEntity_k__BackingField)->fields.svtId,
          0LL);
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_56;
  if ( !v68 )
    goto LABEL_56;
  v70 = ServantLimitMaster__GetEntity(v68, v69, (*p_userSvtCollectionEntity_k__BackingField)->fields.maxLimitCount, 0LL);
  if ( !v70 )
    goto LABEL_56;
  servantEntity = this->fields.servantEntity;
  this->fields.rarity = v70->fields.rarity;
  if ( !servantEntity )
    goto LABEL_56;
  classId = servantEntity->fields.classId;
  userSvtCollectionEntity_k__BackingField = this->fields._userSvtCollectionEntity_k__BackingField;
  this->fields.classId = classId;
  if ( !userSvtCollectionEntity_k__BackingField )
    goto LABEL_56;
  status = userSvtCollectionEntity_k__BackingField->fields.status;
  svtCostumeEntity_k__BackingField = this->fields._svtCostumeEntity_k__BackingField;
  this->fields.collectiionStatus = status;
  if ( !svtCostumeEntity_k__BackingField
    || (this->fields.sortValue2 = -svtCostumeEntity_k__BackingField->fields.costumeCollectionNo,
        (v76 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v77 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)v76,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___),
        !*p_userSvtCollectionEntity_k__BackingField)
    || (v78 = (ServantCostumeReleaseMaster_o *)v77,
        v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                (*p_userSvtCollectionEntity_k__BackingField)->fields.svtId,
                0LL),
        !svtCostumeEntity)
    || !v78 )
  {
LABEL_56:
    sub_B170D4();
  }
  v34 = ServantCostumeReleaseMaster__checkItemHaving(v78, v79, svtCostumeEntity->fields.id, 0LL);
  if ( (v34 & 1) != 0 )
  {
    v80 = this->fields._userSvtCollectionEntity_k__BackingField;
    this->fields._costumeOpenStatus_k__BackingField = 1;
    if ( !v80 )
      goto LABEL_56;
    costumeIds = v80->fields.costumeIds;
    if ( costumeIds )
    {
      v82 = costumeIds->max_length;
      if ( v82 >= 1 )
      {
        v83 = costumeIds->max_length;
        v84 = 0LL;
        v85 = &costumeIds->m_Items[1];
        while ( 1 )
        {
          if ( (unsigned int)v84 >= v83 )
            goto LABEL_57;
          if ( v85[v84] == svtCostumeEntity->fields.id )
            break;
          if ( (int)++v84 >= v82 )
            goto LABEL_46;
        }
        this->fields._costumeOpenStatus_k__BackingField = 2;
      }
    }
  }
LABEL_46:
  if ( ServantCostumeEntity__checkFlag(svtCostumeEntity, 16, 0LL) )
  {
    if ( !*p_userSvtCollectionEntity_k__BackingField )
      goto LABEL_56;
    if ( !UserServantCollectionEntity__IsCostumeGet(
            *p_userSvtCollectionEntity_k__BackingField,
            svtCostumeEntity->fields.id,
            0LL) )
      this->fields.isNotCostumeGet = 1;
  }
  if ( ServantCostumeEntity__checkFlag(svtCostumeEntity, 32, 0LL)
    && !ServantCostumeReleaseMaster__checkItemHaving(
          v78,
          svtCostumeEntity->fields.svtId,
          svtCostumeEntity->fields.id,
          0LL)
    && this->fields.collectiionStatus )
  {
    this->fields.isSecret = 1;
  }
LABEL_54:
  if ( !*p_iconLabelInfo )
    goto LABEL_56;
  IconLabelInfo__Clear(*p_iconLabelInfo, 0LL);
}


bool __fastcall MaterialCostumeServantListViewItem__IsMatchFilter(
        MaterialCostumeServantListViewItem_o *this,
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
  System_Collections_Generic_List_Voice_BATTLE__o *MaterialServantCostumeFilterKindList; // x0
  ListViewSort_FilterKind_array *v14; // x0
  int32_t costumeOpenStatus_k__BackingField; // w8
  int32_t v16; // w1
  FilterKindList_c *v17; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *CollectionStateFilterKindList; // x0
  ListViewSort_FilterKind_array *v19; // x0
  int32_t collectiionStatus; // w8
  int32_t v21; // w1
  FilterKindList_c *v22; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v24; // x21

  if ( (byte_40FCBD3 & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_40FCBD3 = 1;
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
    goto LABEL_48;
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
LABEL_48:
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
  MaterialServantCostumeFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v12->static_fields->MaterialServantCostumeFilterKindList;
  if ( !MaterialServantCostumeFilterKindList )
    goto LABEL_48;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           MaterialServantCostumeFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL) )
  {
    costumeOpenStatus_k__BackingField = this->fields._costumeOpenStatus_k__BackingField;
    if ( costumeOpenStatus_k__BackingField )
    {
      if ( (unsigned int)(costumeOpenStatus_k__BackingField - 1) > 1 )
        goto LABEL_27;
      v16 = 33;
    }
    else
    {
      v16 = 32;
    }
    if ( !ListViewSort__GetFilter(sort, v16, 0LL) )
      return 0;
  }
LABEL_27:
  v17 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v17 = FilterKindList_TypeInfo;
  }
  CollectionStateFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v17->static_fields->CollectionStateFilterKindList;
  if ( !CollectionStateFilterKindList )
    goto LABEL_48;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           CollectionStateFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL) )
  {
    collectiionStatus = this->fields.collectiionStatus;
    if ( collectiionStatus == 2 )
    {
      v21 = 12;
    }
    else if ( collectiionStatus == 1 )
    {
      v21 = 11;
    }
    else
    {
      if ( collectiionStatus )
        goto LABEL_39;
      v21 = 10;
    }
    if ( !ListViewSort__GetFilter(sort, v21, 0LL) )
      return 0;
  }
LABEL_39:
  v22 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v22 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v22->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_48;
  v24 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v24, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v24, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


bool __fastcall MaterialCostumeServantListViewItem__SetSortValue(
        MaterialCostumeServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  MaterialCostumeServantListViewItem_c *klass; // x8
  char v6; // w8
  bool result; // w0
  int64_t v8; // x8
  int32_t collectiionStatus; // w8
  _BOOL8 v10; // x9
  bool v11; // zf
  struct ServantCostumeEntity_o *svtCostumeEntity_k__BackingField; // x8
  IconLabelInfo_o *iconLabelInfo; // x0

  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  v6 = ((__int64 (__fastcall *)(MaterialCostumeServantListViewItem_o *, ListViewSort_o *, void *))klass->vtable._5_IsMatchFilter.method)(
         this,
         sort,
         klass[1]._1.image);
  result = 0;
  if ( (v6 & 1) != 0 )
  {
    if ( sort )
    {
      if ( sort->fields.sortKind == 27 )
      {
        v8 = 0LL;
      }
      else
      {
        collectiionStatus = this->fields.collectiionStatus;
        v10 = collectiionStatus == 1;
        v11 = collectiionStatus == 2;
        v8 = 2LL;
        if ( !v11 )
          v8 = v10;
      }
      this->fields.sortValue0 = v8;
      if ( sort->fields.sortKind != 27 )
        return 1;
      svtCostumeEntity_k__BackingField = this->fields._svtCostumeEntity_k__BackingField;
      if ( svtCostumeEntity_k__BackingField )
      {
        iconLabelInfo = this->fields.iconLabelInfo;
        this->fields.sortValue1 = svtCostumeEntity_k__BackingField->fields.costumeCollectionNo;
        if ( iconLabelInfo )
        {
          IconLabelInfo__Set_28888132(
            iconLabelInfo,
            57,
            svtCostumeEntity_k__BackingField->fields.costumeCollectionNo,
            0,
            0,
            0,
            0,
            0,
            0LL);
          return 1;
        }
      }
    }
    sub_B170D4();
  }
  return result;
}


int32_t __fastcall MaterialCostumeServantListViewItem__get_CollectionKind(
        MaterialCostumeServantListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantCollectionEntity_o *userSvtCollectionEntity_k__BackingField; // x8

  userSvtCollectionEntity_k__BackingField = this->fields._userSvtCollectionEntity_k__BackingField;
  if ( userSvtCollectionEntity_k__BackingField && !this->fields.isNotCostumeGet )
    return userSvtCollectionEntity_k__BackingField->fields.status;
  else
    return 0;
}


IconLabelInfo_o *__fastcall MaterialCostumeServantListViewItem__get_IconInfo(
        MaterialCostumeServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo;
}


bool __fastcall MaterialCostumeServantListViewItem__get_IsCanNotSelect(
        MaterialCostumeServantListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantCollectionEntity_o *userSvtCollectionEntity_k__BackingField; // x8

  userSvtCollectionEntity_k__BackingField = this->fields._userSvtCollectionEntity_k__BackingField;
  return !userSvtCollectionEntity_k__BackingField
      || this->fields.isNotCostumeGet
      || userSvtCollectionEntity_k__BackingField->fields.status != 2
      || this->fields._costumeOpenStatus_k__BackingField == 0;
}


bool __fastcall MaterialCostumeServantListViewItem__get_IsSecret(
        MaterialCostumeServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSecret;
}


int32_t __fastcall MaterialCostumeServantListViewItem__get_costumeOpenStatus(
        MaterialCostumeServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._costumeOpenStatus_k__BackingField;
}


ServantCostumeEntity_o *__fastcall MaterialCostumeServantListViewItem__get_svtCostumeEntity(
        MaterialCostumeServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._svtCostumeEntity_k__BackingField;
}


UserServantCollectionEntity_o *__fastcall MaterialCostumeServantListViewItem__get_userSvtCollectionEntity(
        MaterialCostumeServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._userSvtCollectionEntity_k__BackingField;
}


void __fastcall MaterialCostumeServantListViewItem__set_costumeOpenStatus(
        MaterialCostumeServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._costumeOpenStatus_k__BackingField = value;
}


void __fastcall MaterialCostumeServantListViewItem__set_svtCostumeEntity(
        MaterialCostumeServantListViewItem_o *this,
        ServantCostumeEntity_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._svtCostumeEntity_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._svtCostumeEntity_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MaterialCostumeServantListViewItem__set_userSvtCollectionEntity(
        MaterialCostumeServantListViewItem_o *this,
        UserServantCollectionEntity_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._userSvtCollectionEntity_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._userSvtCollectionEntity_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}