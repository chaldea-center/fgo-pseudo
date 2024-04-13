void __fastcall MaterialCostumeServantListViewItem___ctor(
        MaterialCostumeServantListViewItem_o *this,
        ServantCostumeEntity_o *svtCostumeEntity,
        UserServantCollectionEntity_array *userSvtCollList,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  IconLabelInfo_o *v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity_k__BackingField; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  void *Instance; // x0
  __int64 v46; // x1
  signed int max_length; // w8
  il2cpp_array_size_t v48; // w26
  Il2CppClass **v49; // x28
  int32_t svtId; // w21
  Il2CppClass *v51; // x8
  System_Int32_array ***v52; // x28
  Il2CppClass *v53; // t1
  void *data; // x24
  const char *namespaze; // x25
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x1
  struct UserServantCollectionEntity_o *v63; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v64; // x23
  __int64 v65; // x24
  __int64 v66; // x25
  struct ServantEntity_o *Entity; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  ServantLimitMaster_o *v74; // x23
  struct ServantEntity_o *servantEntity; // x8
  int32_t classId; // w9
  struct UserServantCollectionEntity_o *userSvtCollectionEntity_k__BackingField; // x8
  int32_t status; // w9
  struct ServantCostumeEntity_o *svtCostumeEntity_k__BackingField; // x8
  ServantCostumeReleaseMaster_o *v80; // x23
  struct UserServantCollectionEntity_o *v81; // x8
  struct System_Int32_array *costumeIds; // x11
  int v83; // w8
  unsigned int v84; // w10
  __int64 v85; // x9
  int32_t *v86; // x11
  __int64 v87; // x0
  struct IconLabelInfo_o **p_iconLabelInfo; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16

  if ( (byte_42EC2E4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___,
      (_DWORD)svtCostumeEntity,
      (_DWORD)userSvtCollList,
      method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23, v24);
    byte_42EC2E4 = 1;
  }
  v25 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v25, 0LL);
  this->fields.iconLabelInfo = v25;
  p_iconLabelInfo = &this->fields.iconLabelInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields._svtCostumeEntity_k__BackingField = svtCostumeEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._svtCostumeEntity_k__BackingField,
    (System_Int32_array **)svtCostumeEntity,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields._userSvtCollectionEntity_k__BackingField = 0LL;
  p_userSvtCollectionEntity_k__BackingField = &this->fields._userSvtCollectionEntity_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._userSvtCollectionEntity_k__BackingField,
    0LL,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields._costumeOpenStatus_k__BackingField = 0;
  if ( !userSvtCollList )
    goto LABEL_56;
  max_length = userSvtCollList->max_length;
  if ( max_length >= 1 )
  {
    v48 = 0;
    while ( 1 )
    {
      if ( !svtCostumeEntity )
        goto LABEL_56;
      if ( v48 >= max_length )
        goto LABEL_57;
      v49 = &userSvtCollList->obj.klass + (int)v48;
      svtId = svtCostumeEntity->fields.svtId;
      v53 = v49[4];
      v52 = (System_Int32_array ***)(v49 + 4);
      v51 = v53;
      if ( !v53 )
        goto LABEL_56;
      namespaze = v51->_1.namespaze;
      data = v51->_1.byval_arg.data;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v89.fields.currentCryptoKey = namespaze;
      *(_QWORD *)&v89.fields.fakeValue = data;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v89, 0LL);
      if ( svtId == (_DWORD)Instance )
        break;
      max_length = userSvtCollList->max_length;
      if ( (int)++v48 >= max_length )
        goto LABEL_17;
    }
    if ( v48 >= userSvtCollList->max_length )
    {
LABEL_57:
      v87 = sub_B5D6C8(Instance);
      sub_B5D668(v87, 0LL);
    }
    v62 = *v52;
    *p_userSvtCollectionEntity_k__BackingField = (struct UserServantCollectionEntity_o *)*v52;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields._userSvtCollectionEntity_k__BackingField,
      v62,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  }
LABEL_17:
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_54;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v63 = *p_userSvtCollectionEntity_k__BackingField;
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_56;
  v64 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v66 = *(_QWORD *)&v63->fields.svtId.fields.currentCryptoKey;
  v65 = *(_QWORD *)&v63->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v90.fields.currentCryptoKey = v66;
  *(_QWORD *)&v90.fields.fakeValue = v65;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v90, 0LL);
  if ( !v64 )
    goto LABEL_56;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v64,
                                       (int32_t)Instance,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_56;
  v74 = (ServantLimitMaster_o *)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                       (*p_userSvtCollectionEntity_k__BackingField)->fields.svtId,
                       0LL);
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_56;
  if ( !v74 )
    goto LABEL_56;
  Instance = ServantLimitMaster__GetEntity(
               v74,
               (int32_t)Instance,
               (*p_userSvtCollectionEntity_k__BackingField)->fields.maxLimitCount,
               0LL);
  if ( !Instance )
    goto LABEL_56;
  servantEntity = this->fields.servantEntity;
  this->fields.rarity = *((_DWORD *)Instance + 6);
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
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___),
        !*p_userSvtCollectionEntity_k__BackingField)
    || (v80 = (ServantCostumeReleaseMaster_o *)Instance,
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                             (*p_userSvtCollectionEntity_k__BackingField)->fields.svtId,
                             0LL),
        !svtCostumeEntity)
    || !v80 )
  {
LABEL_56:
    sub_B5D69C(Instance, v46);
  }
  Instance = (void *)ServantCostumeReleaseMaster__checkItemHaving(
                       v80,
                       (int32_t)Instance,
                       svtCostumeEntity->fields.id,
                       0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v81 = this->fields._userSvtCollectionEntity_k__BackingField;
    this->fields._costumeOpenStatus_k__BackingField = 1;
    if ( !v81 )
      goto LABEL_56;
    costumeIds = v81->fields.costumeIds;
    if ( costumeIds )
    {
      v83 = costumeIds->max_length;
      if ( v83 >= 1 )
      {
        v84 = costumeIds->max_length;
        v85 = 0LL;
        v86 = &costumeIds->m_Items[1];
        while ( 1 )
        {
          if ( (unsigned int)v85 >= v84 )
            goto LABEL_57;
          if ( v86[v85] == svtCostumeEntity->fields.id )
            break;
          if ( (int)++v85 >= v83 )
            goto LABEL_46;
        }
        this->fields._costumeOpenStatus_k__BackingField = 2;
      }
    }
  }
LABEL_46:
  if ( ServantCostumeEntity__checkFlag(svtCostumeEntity, 16, 0LL) )
  {
    Instance = *p_userSvtCollectionEntity_k__BackingField;
    if ( !*p_userSvtCollectionEntity_k__BackingField )
      goto LABEL_56;
    if ( !UserServantCollectionEntity__IsCostumeGet(
            (UserServantCollectionEntity_o *)Instance,
            svtCostumeEntity->fields.id,
            0LL) )
      this->fields.isNotCostumeGet = 1;
  }
  if ( ServantCostumeEntity__checkFlag(svtCostumeEntity, 32, 0LL)
    && !ServantCostumeReleaseMaster__checkItemHaving(
          v80,
          svtCostumeEntity->fields.svtId,
          svtCostumeEntity->fields.id,
          0LL)
    && this->fields.collectiionStatus )
  {
    this->fields.isSecret = 1;
  }
LABEL_54:
  Instance = *p_iconLabelInfo;
  if ( !*p_iconLabelInfo )
    goto LABEL_56;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


bool __fastcall MaterialCostumeServantListViewItem__IsMatchFilter(
        MaterialCostumeServantListViewItem_o *this,
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
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  int32_t costumeOpenStatus_k__BackingField; // w8
  int32_t v17; // w1
  FilterKindList_c *v18; // x0
  ListViewSort_FilterKind_array *v19; // x0
  int32_t collectiionStatus; // w8
  int32_t v21; // w1
  FilterKindList_c *v22; // x0
  ListViewSort_FilterKind_array *v23; // x21

  if ( (byte_42EC2E5 & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6, v7, v8);
    byte_42EC2E5 = 1;
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
    goto LABEL_48;
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
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_17;
    }
LABEL_48:
    sub_B5D69C(ClassGroupFilterKindList, sort);
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
    return 0;
LABEL_17:
  v14 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v14->static_fields->MaterialServantCostumeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_48;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL) )
  {
    costumeOpenStatus_k__BackingField = this->fields._costumeOpenStatus_k__BackingField;
    if ( costumeOpenStatus_k__BackingField )
    {
      if ( (unsigned int)(costumeOpenStatus_k__BackingField - 1) > 1 )
        goto LABEL_27;
      v17 = 33;
    }
    else
    {
      v17 = 32;
    }
    if ( !ListViewSort__GetFilter(sort, v17, 0LL) )
      return 0;
  }
LABEL_27:
  v18 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v18 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v18->static_fields->CollectionStateFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_48;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v22->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_48;
  v23 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v23, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v23, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


bool __fastcall MaterialCostumeServantListViewItem__SetSortValue(
        MaterialCostumeServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  MaterialCostumeServantListViewItem_c *klass; // x8
  __int64 v6; // x1
  char v7; // w8
  IconLabelInfo_o *iconLabelInfo; // x0
  int64_t v9; // x8
  int32_t collectiionStatus; // w8
  _BOOL8 v11; // x9
  bool v12; // zf
  struct ServantCostumeEntity_o *svtCostumeEntity_k__BackingField; // x8

  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  v7 = ((__int64 (__fastcall *)(MaterialCostumeServantListViewItem_o *, ListViewSort_o *, void *))klass->vtable._5_IsMatchFilter.method)(
         this,
         sort,
         klass[1]._1.image);
  iconLabelInfo = 0LL;
  if ( (v7 & 1) != 0 )
  {
    if ( sort )
    {
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
      this->fields.sortValue0 = v9;
      if ( sort->fields.sortKind != 27 )
        goto LABEL_11;
      svtCostumeEntity_k__BackingField = this->fields._svtCostumeEntity_k__BackingField;
      if ( svtCostumeEntity_k__BackingField )
      {
        iconLabelInfo = this->fields.iconLabelInfo;
        this->fields.sortValue1 = svtCostumeEntity_k__BackingField->fields.costumeCollectionNo;
        if ( iconLabelInfo )
        {
          IconLabelInfo__Set_28463004(
            iconLabelInfo,
            57,
            svtCostumeEntity_k__BackingField->fields.costumeCollectionNo,
            0,
            0,
            0,
            0,
            0,
            0LL);
LABEL_11:
          LOBYTE(iconLabelInfo) = 1;
          return (char)iconLabelInfo;
        }
      }
    }
    sub_B5D69C(iconLabelInfo, v6);
  }
  return (char)iconLabelInfo;
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
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._userSvtCollectionEntity_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}