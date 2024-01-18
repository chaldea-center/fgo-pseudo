void __fastcall MaterialCostumeServantListViewItem___ctor(
        MaterialCostumeServantListViewItem_o *this,
        ServantCostumeEntity_o *svtCostumeEntity,
        UserServantCollectionEntity_array *userSvtCollList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  IconLabelInfo_o *v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity_k__BackingField; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  void *Instance; // x0
  __int64 v34; // x1
  signed int max_length; // w8
  il2cpp_array_size_t v36; // w26
  Il2CppClass **v37; // x28
  int32_t svtId; // w21
  Il2CppClass *v39; // x8
  System_Int32_array ***v40; // x28
  Il2CppClass *v41; // t1
  void *data; // x24
  const char *namespaze; // x25
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x1
  struct UserServantCollectionEntity_o *v51; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v52; // x23
  __int64 v53; // x24
  __int64 v54; // x25
  struct ServantEntity_o *Entity; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  ServantLimitMaster_o *v62; // x23
  struct ServantEntity_o *servantEntity; // x8
  int32_t classId; // w9
  struct UserServantCollectionEntity_o *userSvtCollectionEntity_k__BackingField; // x8
  int32_t status; // w9
  struct ServantCostumeEntity_o *svtCostumeEntity_k__BackingField; // x8
  ServantCostumeReleaseMaster_o *v68; // x23
  struct UserServantCollectionEntity_o *v69; // x8
  struct System_Int32_array *costumeIds; // x11
  int v71; // w8
  unsigned int v72; // w10
  __int64 v73; // x9
  int32_t *v74; // x11
  __int64 v75; // x0
  struct IconLabelInfo_o **p_iconLabelInfo; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  if ( (byte_4189D6D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, svtCostumeEntity);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4189D6D = 1;
  }
  v13 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0LL);
  this->fields.iconLabelInfo = v13;
  p_iconLabelInfo = &this->fields.iconLabelInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields._svtCostumeEntity_k__BackingField = svtCostumeEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._svtCostumeEntity_k__BackingField,
    (System_Int32_array **)svtCostumeEntity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields._userSvtCollectionEntity_k__BackingField = 0LL;
  p_userSvtCollectionEntity_k__BackingField = &this->fields._userSvtCollectionEntity_k__BackingField;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._userSvtCollectionEntity_k__BackingField,
    0LL,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields._costumeOpenStatus_k__BackingField = 0;
  if ( !userSvtCollList )
    goto LABEL_56;
  max_length = userSvtCollList->max_length;
  if ( max_length >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      if ( !svtCostumeEntity )
        goto LABEL_56;
      if ( v36 >= max_length )
        goto LABEL_57;
      v37 = &userSvtCollList->obj.klass + (int)v36;
      svtId = svtCostumeEntity->fields.svtId;
      v41 = v37[4];
      v40 = (System_Int32_array ***)(v37 + 4);
      v39 = v41;
      if ( !v41 )
        goto LABEL_56;
      namespaze = v39->_1.namespaze;
      data = v39->_1.byval_arg.data;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v77.fields.currentCryptoKey = namespaze;
      *(_QWORD *)&v77.fields.fakeValue = data;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v77, 0LL);
      if ( svtId == (_DWORD)Instance )
        break;
      max_length = userSvtCollList->max_length;
      if ( (int)++v36 >= max_length )
        goto LABEL_17;
    }
    if ( v36 >= userSvtCollList->max_length )
    {
LABEL_57:
      v75 = sub_B2C460(Instance);
      sub_B2C400(v75, 0LL);
    }
    v50 = *v40;
    *p_userSvtCollectionEntity_k__BackingField = (struct UserServantCollectionEntity_o *)*v40;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields._userSvtCollectionEntity_k__BackingField,
      v50,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
LABEL_17:
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_54;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v51 = *p_userSvtCollectionEntity_k__BackingField;
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_56;
  v52 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v54 = *(_QWORD *)&v51->fields.svtId.fields.currentCryptoKey;
  v53 = *(_QWORD *)&v51->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v78.fields.currentCryptoKey = v54;
  *(_QWORD *)&v78.fields.fakeValue = v53;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v78, 0LL);
  if ( !v52 )
    goto LABEL_56;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v52,
                                       (int32_t)Instance,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_56;
  v62 = (ServantLimitMaster_o *)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                       (*p_userSvtCollectionEntity_k__BackingField)->fields.svtId,
                       0LL);
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_56;
  if ( !v62 )
    goto LABEL_56;
  Instance = ServantLimitMaster__GetEntity(
               v62,
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
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___),
        !*p_userSvtCollectionEntity_k__BackingField)
    || (v68 = (ServantCostumeReleaseMaster_o *)Instance,
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                             (*p_userSvtCollectionEntity_k__BackingField)->fields.svtId,
                             0LL),
        !svtCostumeEntity)
    || !v68 )
  {
LABEL_56:
    sub_B2C434(Instance, v34);
  }
  Instance = (void *)ServantCostumeReleaseMaster__checkItemHaving(
                       v68,
                       (int32_t)Instance,
                       svtCostumeEntity->fields.id,
                       0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v69 = this->fields._userSvtCollectionEntity_k__BackingField;
    this->fields._costumeOpenStatus_k__BackingField = 1;
    if ( !v69 )
      goto LABEL_56;
    costumeIds = v69->fields.costumeIds;
    if ( costumeIds )
    {
      v71 = costumeIds->max_length;
      if ( v71 >= 1 )
      {
        v72 = costumeIds->max_length;
        v73 = 0LL;
        v74 = &costumeIds->m_Items[1];
        while ( 1 )
        {
          if ( (unsigned int)v73 >= v72 )
            goto LABEL_57;
          if ( v74[v73] == svtCostumeEntity->fields.id )
            break;
          if ( (int)++v73 >= v71 )
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
          v68,
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
  __int64 v5; // x1
  FilterKindList_c *v6; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  int32_t costumeOpenStatus_k__BackingField; // w8
  int32_t v14; // w1
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  int32_t collectiionStatus; // w8
  int32_t v18; // w1
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x21

  if ( (byte_4189D6E & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_4189D6E = 1;
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
LABEL_48:
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
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v11->static_fields->MaterialServantCostumeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_48;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL) )
  {
    costumeOpenStatus_k__BackingField = this->fields._costumeOpenStatus_k__BackingField;
    if ( costumeOpenStatus_k__BackingField )
    {
      if ( (unsigned int)(costumeOpenStatus_k__BackingField - 1) > 1 )
        goto LABEL_27;
      v14 = 33;
    }
    else
    {
      v14 = 32;
    }
    if ( !ListViewSort__GetFilter(sort, v14, 0LL) )
      return 0;
  }
LABEL_27:
  v15 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v15->static_fields->CollectionStateFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_48;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        goto LABEL_39;
      v18 = 10;
    }
    if ( !ListViewSort__GetFilter(sort, v18, 0LL) )
      return 0;
  }
LABEL_39:
  v19 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v19->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_48;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v20, 0LL)
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
          IconLabelInfo__Set_27362128(
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
    sub_B2C434(iconLabelInfo, v6);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._userSvtCollectionEntity_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}