void __fastcall MaterialCostumeServantListViewItem___ctor(
        MaterialCostumeServantListViewItem_o *this,
        ServantCostumeEntity_o *servantCostumeEntity,
        UserServantCollectionEntity_array *userSvtCollList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  IconLabelInfo_o *v13; // x21
  struct IconLabelInfo_o **p_iconLabelInfo; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct ServantCostumeEntity_o **p_svtCostumeEntity_k__BackingField; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity_k__BackingField; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  signed int max_length; // w8
  il2cpp_array_size_t v27; // w26
  Il2CppClass **v28; // x28
  int32_t svtId; // w29
  Il2CppClass *v30; // x8
  struct UserServantCollectionEntity_o **v31; // x28
  Il2CppClass *v32; // t1
  void *data; // x24
  const char *namespaze; // x25
  const MethodInfo *v35; // x3
  struct UserServantCollectionEntity_o *v36; // x1
  struct UserServantCollectionEntity_o *v37; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v38; // x23
  __int64 v39; // x24
  __int64 v40; // x25
  Il2CppObject *Entity; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct ServantCostumeEntity_o *svtCostumeEntity_k__BackingField; // x8
  UserServantCollectionEntity_o *v45; // x24
  int32_t id; // w25
  ServantOverwriteStatus_o *v47; // x23
  struct ServantEntity_o *servantEntity; // x8
  int32_t classId; // w9
  struct UserServantCollectionEntity_o *userSvtCollectionEntity_k__BackingField; // x8
  int32_t status; // w9
  struct ServantCostumeEntity_o *v52; // x8
  ServantCostumeReleaseMaster_o *v53; // x23
  struct UserServantCollectionEntity_o *v54; // x8
  struct System_Int32_array *costumeIds; // x8
  int v56; // w9
  il2cpp_array_size_t v57; // w11
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_4B17791 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, servantCostumeEntity);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1BCAFF8(&IconLabelInfo_TypeInfo, v9);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BCAFF8(&ServantOverwriteStatus_TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B17791 = 1;
  }
  v13 = (IconLabelInfo_o *)sub_1BCB244(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0LL);
  this->fields.iconLabelInfo = v13;
  p_iconLabelInfo = &this->fields.iconLabelInfo;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.iconLabelInfo, (int32_t)v13, v15, v16);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields._svtCostumeEntity_k__BackingField = servantCostumeEntity;
  p_svtCostumeEntity_k__BackingField = &this->fields._svtCostumeEntity_k__BackingField;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._svtCostumeEntity_k__BackingField,
    (int32_t)servantCostumeEntity,
    v18,
    v19);
  this->fields._userSvtCollectionEntity_k__BackingField = 0LL;
  p_userSvtCollectionEntity_k__BackingField = &this->fields._userSvtCollectionEntity_k__BackingField;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._userSvtCollectionEntity_k__BackingField, 0, v21, v22);
  this->fields._costumeOpenStatus_k__BackingField = 0;
  if ( !userSvtCollList )
    goto LABEL_56;
  max_length = userSvtCollList->max_length;
  if ( max_length >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( !*p_svtCostumeEntity_k__BackingField )
        goto LABEL_56;
      if ( v27 >= max_length )
        goto LABEL_57;
      v28 = &userSvtCollList->obj.klass + (int)v27;
      svtId = (*p_svtCostumeEntity_k__BackingField)->fields.svtId;
      v32 = v28[4];
      v31 = (struct UserServantCollectionEntity_o **)(v28 + 4);
      v30 = v32;
      if ( !v32 )
        goto LABEL_56;
      namespaze = v30->_1.namespaze;
      data = v30->_1.byval_arg.data;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v58.fields.currentCryptoKey = namespaze;
      *(_QWORD *)&v58.fields.fakeValue = data;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v58, 0LL);
      if ( svtId == (_DWORD)Instance )
        break;
      max_length = userSvtCollList->max_length;
      if ( (int)++v27 >= max_length )
        goto LABEL_16;
    }
    if ( v27 >= userSvtCollList->max_length )
LABEL_57:
      sub_1BCB25C(Instance, v24, v25);
    v36 = *v31;
    *p_userSvtCollectionEntity_k__BackingField = *v31;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._userSvtCollectionEntity_k__BackingField, (int32_t)v36, v25, v35);
  }
LABEL_16:
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_54;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v37 = *p_userSvtCollectionEntity_k__BackingField;
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_56;
  v38 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v40 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v59.fields.currentCryptoKey = v40;
  *(_QWORD *)&v59.fields.fakeValue = v39;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v59, 0LL);
  if ( !v38 )
    goto LABEL_56;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v38,
             (int32_t)Instance,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v42, v43);
  svtCostumeEntity_k__BackingField = this->fields._svtCostumeEntity_k__BackingField;
  if ( !svtCostumeEntity_k__BackingField )
    goto LABEL_56;
  v45 = *p_userSvtCollectionEntity_k__BackingField;
  id = svtCostumeEntity_k__BackingField->fields.id;
  v47 = (ServantOverwriteStatus_o *)sub_1BCB244(ServantOverwriteStatus_TypeInfo);
  ServantOverwriteStatus___ctor_33009188(v47, v45, id, 0LL);
  if ( !v47 )
    goto LABEL_56;
  servantEntity = this->fields.servantEntity;
  this->fields.rarity = v47->fields._Rarity_k__BackingField;
  if ( !servantEntity )
    goto LABEL_56;
  classId = servantEntity->fields.classId;
  userSvtCollectionEntity_k__BackingField = this->fields._userSvtCollectionEntity_k__BackingField;
  this->fields.classId = classId;
  if ( !userSvtCollectionEntity_k__BackingField )
    goto LABEL_56;
  status = userSvtCollectionEntity_k__BackingField->fields.status;
  v52 = this->fields._svtCostumeEntity_k__BackingField;
  this->fields.collectiionStatus = status;
  if ( !v52 )
    goto LABEL_56;
  this->fields.sortValue2 = -v52->fields.costumeCollectionNo;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_56;
  v53 = (ServantCostumeReleaseMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                (*p_userSvtCollectionEntity_k__BackingField)->fields.svtId,
                                0LL);
  if ( !*p_svtCostumeEntity_k__BackingField || !v53 )
    goto LABEL_56;
  Instance = (DataManager_o *)ServantCostumeReleaseMaster__checkItemHaving(
                                v53,
                                (int32_t)Instance,
                                (*p_svtCostumeEntity_k__BackingField)->fields.id,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v54 = this->fields._userSvtCollectionEntity_k__BackingField;
    this->fields._costumeOpenStatus_k__BackingField = 1;
    if ( !v54 )
      goto LABEL_56;
    costumeIds = v54->fields.costumeIds;
    if ( costumeIds )
    {
      v56 = costumeIds->max_length;
      if ( v56 >= 1 )
      {
        v57 = 0;
        while ( 1 )
        {
          if ( v57 >= costumeIds->max_length )
            goto LABEL_57;
          if ( !*p_svtCostumeEntity_k__BackingField )
            goto LABEL_56;
          if ( costumeIds->m_Items[v57 + 1] == (*p_svtCostumeEntity_k__BackingField)->fields.id )
            break;
          if ( v56 == ++v57 )
            goto LABEL_42;
        }
        this->fields._costumeOpenStatus_k__BackingField = 2;
      }
    }
  }
LABEL_42:
  Instance = (DataManager_o *)*p_svtCostumeEntity_k__BackingField;
  if ( !*p_svtCostumeEntity_k__BackingField )
    goto LABEL_56;
  Instance = (DataManager_o *)ServantCostumeEntity__checkFlag((ServantCostumeEntity_o *)Instance, 16, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_48;
  if ( !*p_svtCostumeEntity_k__BackingField
    || (Instance = (DataManager_o *)*p_userSvtCollectionEntity_k__BackingField) == 0LL )
  {
LABEL_56:
    sub_1BCB254(Instance, v24);
  }
  if ( !UserServantCollectionEntity__IsCostumeGet(
          (UserServantCollectionEntity_o *)Instance,
          (*p_svtCostumeEntity_k__BackingField)->fields.id,
          0LL) )
    this->fields.isNotCostumeGet = 1;
LABEL_48:
  Instance = (DataManager_o *)*p_svtCostumeEntity_k__BackingField;
  if ( !*p_svtCostumeEntity_k__BackingField )
    goto LABEL_56;
  Instance = (DataManager_o *)ServantCostumeEntity__checkFlag((ServantCostumeEntity_o *)Instance, 32, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !*p_svtCostumeEntity_k__BackingField )
      goto LABEL_56;
    if ( !ServantCostumeReleaseMaster__checkItemHaving(
            v53,
            (*p_svtCostumeEntity_k__BackingField)->fields.svtId,
            (*p_svtCostumeEntity_k__BackingField)->fields.id,
            0LL)
      && this->fields.collectiionStatus )
    {
      this->fields.isSecret = 1;
    }
  }
LABEL_54:
  Instance = (DataManager_o *)*p_iconLabelInfo;
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
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
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

  if ( (byte_4B17792 & 1) == 0 )
  {
    sub_1BCAFF8(&FilterKindList_TypeInfo, sort);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_4B17792 = 1;
  }
  if ( !sort )
    return 0;
  v6 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v6 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v6->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_43;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL) )
  {
    v9 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v9 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v9->static_fields->ClassFilterKindList;
    if ( ClassGroupFilterKindList )
    {
      v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                               ClassGroupFilterKindList,
                                               (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_15;
    }
LABEL_43:
    sub_1BCB254(ClassGroupFilterKindList, sort);
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
    return 0;
LABEL_15:
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v11->static_fields->MaterialServantCostumeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_43;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL) )
    goto LABEL_24;
  costumeOpenStatus_k__BackingField = this->fields._costumeOpenStatus_k__BackingField;
  if ( costumeOpenStatus_k__BackingField )
  {
    if ( (unsigned int)(costumeOpenStatus_k__BackingField - 1) > 1 )
      goto LABEL_24;
    v14 = 33;
  }
  else
  {
    v14 = 32;
  }
  if ( !ListViewSort__GetFilter(sort, v14, 0LL) )
    return 0;
LABEL_24:
  v15 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v15->static_fields->CollectionStateFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_43;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL) )
    goto LABEL_35;
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
      goto LABEL_35;
    v18 = 10;
  }
  if ( !ListViewSort__GetFilter(sort, v18, 0LL) )
    return 0;
LABEL_35:
  v19 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v19->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_43;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  struct ServantCostumeEntity_o *svtCostumeEntity_k__BackingField; // x8
  int64_t costumeCollectionNo; // x2
  int32_t collectiionStatus; // w8

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
    if ( !sort )
      goto LABEL_14;
    if ( sort->fields.sortKind == 27 )
    {
      svtCostumeEntity_k__BackingField = this->fields._svtCostumeEntity_k__BackingField;
      this->fields.sortValue0 = 0LL;
      if ( svtCostumeEntity_k__BackingField )
      {
        costumeCollectionNo = svtCostumeEntity_k__BackingField->fields.costumeCollectionNo;
        iconLabelInfo = this->fields.iconLabelInfo;
        this->fields.sortValue1 = costumeCollectionNo;
        if ( iconLabelInfo )
        {
          IconLabelInfo__Set_40103972(iconLabelInfo, 57, costumeCollectionNo, 0, 0, 0, 0, 0, 0, 0LL);
LABEL_12:
          LOBYTE(iconLabelInfo) = 1;
          return (char)iconLabelInfo;
        }
      }
LABEL_14:
      sub_1BCB254(iconLabelInfo, v6);
    }
    collectiionStatus = this->fields.collectiionStatus;
    if ( collectiionStatus != 1 )
    {
      if ( collectiionStatus == 2 )
        this->fields.sortValue0 = 2LL;
      else
        this->fields.sortValue0 = 0LL;
      goto LABEL_12;
    }
    LOBYTE(iconLabelInfo) = 1;
    this->fields.sortValue0 = 1LL;
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
  const MethodInfo *v3; // x3

  this->fields._svtCostumeEntity_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._svtCostumeEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall MaterialCostumeServantListViewItem__set_userSvtCollectionEntity(
        MaterialCostumeServantListViewItem_o *this,
        UserServantCollectionEntity_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._userSvtCollectionEntity_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._userSvtCollectionEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}