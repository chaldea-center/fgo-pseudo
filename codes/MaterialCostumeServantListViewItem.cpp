void __fastcall MaterialCostumeServantListViewItem___ctor(
        MaterialCostumeServantListViewItem_o *this,
        ServantCostumeEntity_o *svtCostumeEntity,
        UserServantCollectionEntity_array *userSvtCollList,
        const MethodInfo *method)
{
  IconLabelInfo_o *v7; // x22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity_k__BackingField; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  void *Instance; // x0
  __int64 v28; // x1
  signed int max_length; // w8
  il2cpp_array_size_t v30; // w26
  Il2CppClass **v31; // x28
  int32_t svtId; // w21
  Il2CppClass *v33; // x8
  System_Int32_array ***v34; // x28
  Il2CppClass *v35; // t1
  void *data; // x24
  const char *namespaze; // x25
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  struct UserServantCollectionEntity_o *v45; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v46; // x23
  __int64 v47; // x24
  __int64 v48; // x25
  struct ServantEntity_o *Entity; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  ServantLimitMaster_o *v56; // x23
  struct ServantEntity_o *servantEntity; // x8
  int32_t classId; // w9
  struct UserServantCollectionEntity_o *userSvtCollectionEntity_k__BackingField; // x8
  int32_t status; // w9
  struct ServantCostumeEntity_o *svtCostumeEntity_k__BackingField; // x8
  ServantCostumeReleaseMaster_o *v62; // x23
  struct UserServantCollectionEntity_o *v63; // x8
  struct System_Int32_array *costumeIds; // x11
  int v65; // w8
  unsigned int v66; // w10
  __int64 v67; // x9
  int32_t *v68; // x11
  __int64 v69; // x0
  struct IconLabelInfo_o **p_iconLabelInfo; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_438EE2B & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&IconLabelInfo_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438EE2B = 1;
  }
  v7 = (IconLabelInfo_o *)sub_B77694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v7, 0LL);
  this->fields.iconLabelInfo = v7;
  p_iconLabelInfo = &this->fields.iconLabelInfo;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields._svtCostumeEntity_k__BackingField = svtCostumeEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._svtCostumeEntity_k__BackingField,
    (System_Int32_array **)svtCostumeEntity,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields._userSvtCollectionEntity_k__BackingField = 0LL;
  p_userSvtCollectionEntity_k__BackingField = &this->fields._userSvtCollectionEntity_k__BackingField;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._userSvtCollectionEntity_k__BackingField,
    0LL,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields._costumeOpenStatus_k__BackingField = 0;
  if ( !userSvtCollList )
    goto LABEL_56;
  max_length = userSvtCollList->max_length;
  if ( max_length >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      if ( !svtCostumeEntity )
        goto LABEL_56;
      if ( v30 >= max_length )
        goto LABEL_57;
      v31 = &userSvtCollList->obj.klass + (int)v30;
      svtId = svtCostumeEntity->fields.svtId;
      v35 = v31[4];
      v34 = (System_Int32_array ***)(v31 + 4);
      v33 = v35;
      if ( !v35 )
        goto LABEL_56;
      namespaze = v33->_1.namespaze;
      data = v33->_1.byval_arg.data;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v71.fields.currentCryptoKey = namespaze;
      *(_QWORD *)&v71.fields.fakeValue = data;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v71, 0LL);
      if ( svtId == (_DWORD)Instance )
        break;
      max_length = userSvtCollList->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_17;
    }
    if ( v30 >= userSvtCollList->max_length )
    {
LABEL_57:
      v69 = sub_B776C8(Instance);
      sub_B77668(v69, 0LL);
    }
    v44 = *v34;
    *p_userSvtCollectionEntity_k__BackingField = (struct UserServantCollectionEntity_o *)*v34;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields._userSvtCollectionEntity_k__BackingField,
      v44,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
LABEL_17:
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_54;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v45 = *p_userSvtCollectionEntity_k__BackingField;
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_56;
  v46 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v48 = *(_QWORD *)&v45->fields.svtId.fields.currentCryptoKey;
  v47 = *(_QWORD *)&v45->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v72.fields.currentCryptoKey = v48;
  *(_QWORD *)&v72.fields.fakeValue = v47;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v72, 0LL);
  if ( !v46 )
    goto LABEL_56;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v46,
                                       (int32_t)Instance,
                                       (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_56;
  v56 = (ServantLimitMaster_o *)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                       (*p_userSvtCollectionEntity_k__BackingField)->fields.svtId,
                       0LL);
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_56;
  if ( !v56 )
    goto LABEL_56;
  Instance = ServantLimitMaster__GetEntity(
               v56,
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
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___),
        !*p_userSvtCollectionEntity_k__BackingField)
    || (v62 = (ServantCostumeReleaseMaster_o *)Instance,
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                             (*p_userSvtCollectionEntity_k__BackingField)->fields.svtId,
                             0LL),
        !svtCostumeEntity)
    || !v62 )
  {
LABEL_56:
    sub_B7769C(Instance, v28);
  }
  Instance = (void *)ServantCostumeReleaseMaster__checkItemHaving(
                       v62,
                       (int32_t)Instance,
                       svtCostumeEntity->fields.id,
                       0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v63 = this->fields._userSvtCollectionEntity_k__BackingField;
    this->fields._costumeOpenStatus_k__BackingField = 1;
    if ( !v63 )
      goto LABEL_56;
    costumeIds = v63->fields.costumeIds;
    if ( costumeIds )
    {
      v65 = costumeIds->max_length;
      if ( v65 >= 1 )
      {
        v66 = costumeIds->max_length;
        v67 = 0LL;
        v68 = &costumeIds->m_Items[1];
        while ( 1 )
        {
          if ( (unsigned int)v67 >= v66 )
            goto LABEL_57;
          if ( v68[v67] == svtCostumeEntity->fields.id )
            break;
          if ( (int)++v67 >= v65 )
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
          v62,
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
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v7; // x0
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  int32_t costumeOpenStatus_k__BackingField; // w8
  int32_t v13; // w1
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  int32_t collectiionStatus; // w8
  int32_t v17; // w1
  FilterKindList_c *v18; // x0
  ListViewSort_FilterKind_array *v19; // x21

  if ( (byte_438EE2C & 1) == 0 )
  {
    sub_B775C4(&FilterKindList_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_438EE2C = 1;
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
    goto LABEL_48;
  v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                              (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_17;
    }
LABEL_48:
    sub_B7769C(ClassGroupFilterKindList, sort);
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
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v10->static_fields->MaterialServantCostumeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_48;
  v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL) )
  {
    costumeOpenStatus_k__BackingField = this->fields._costumeOpenStatus_k__BackingField;
    if ( costumeOpenStatus_k__BackingField )
    {
      if ( (unsigned int)(costumeOpenStatus_k__BackingField - 1) > 1 )
        goto LABEL_27;
      v13 = 33;
    }
    else
    {
      v13 = 32;
    }
    if ( !ListViewSort__GetFilter(sort, v13, 0LL) )
      return 0;
  }
LABEL_27:
  v14 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v14->static_fields->CollectionStateFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_48;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL) )
  {
    collectiionStatus = this->fields.collectiionStatus;
    if ( collectiionStatus == 2 )
    {
      v17 = 12;
    }
    else if ( collectiionStatus == 1 )
    {
      v17 = 11;
    }
    else
    {
      if ( collectiionStatus )
        goto LABEL_39;
      v17 = 10;
    }
    if ( !ListViewSort__GetFilter(sort, v17, 0LL) )
      return 0;
  }
LABEL_39:
  v18 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v18 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v18->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_48;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v19, 0LL)
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
          IconLabelInfo__Set_28141596(
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
    sub_B7769C(iconLabelInfo, v6);
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
  sub_B77560(
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
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._userSvtCollectionEntity_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}