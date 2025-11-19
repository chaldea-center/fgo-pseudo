void MaterialCostumeServantListViewItem___ctor(
        MaterialCostumeServantListViewItem_o *this,
        ServantCostumeEntity_o *servantCostumeEntity,
        UserServantCollectionEntity_array *userSvtCollList,
        const MethodInfo *method)
{
  IconLabelInfo_o *v7; // x21
  struct IconLabelInfo_o **p_iconLabelInfo; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct ServantCostumeEntity_o **p_svtCostumeEntity_k__BackingField; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity_k__BackingField; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  int max_length; // w8
  unsigned int v20; // w26
  Il2CppClass **v21; // x28
  int32_t svtId; // w29
  Il2CppClass *v23; // x8
  struct UserServantCollectionEntity_o **v24; // x28
  Il2CppClass *v25; // t1
  void *data; // x24
  const char *namespaze; // x25
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct UserServantCollectionEntity_o *v30; // x1
  struct UserServantCollectionEntity_o *v31; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x23
  __int64 v33; // x24
  __int64 v34; // x25
  Il2CppObject *Entity; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct ServantCostumeEntity_o *svtCostumeEntity_k__BackingField; // x8
  UserServantCollectionEntity_o *v39; // x24
  int32_t id; // w25
  ServantOverwriteStatus_o *v41; // x23
  struct ServantEntity_o *servantEntity; // x8
  int32_t classId; // w9
  struct UserServantCollectionEntity_o *userSvtCollectionEntity_k__BackingField; // x8
  int32_t status; // w9
  struct ServantCostumeEntity_o *v46; // x8
  ServantCostumeReleaseMaster_o *v47; // x23
  struct UserServantCollectionEntity_o *v48; // x8
  struct System_Int32_array *costumeIds; // x8
  int v50; // w9
  unsigned int v51; // w11
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4CB143D & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&IconLabelInfo_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&ServantOverwriteStatus_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB143D = 1;
  }
  v7 = (IconLabelInfo_o *)sub_1C6BC54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v7, 0);
  this->fields.iconLabelInfo = v7;
  p_iconLabelInfo = &this->fields.iconLabelInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.iconLabelInfo, (int32_t)v7, v9, v10);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields._svtCostumeEntity_k__BackingField = servantCostumeEntity;
  p_svtCostumeEntity_k__BackingField = &this->fields._svtCostumeEntity_k__BackingField;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._svtCostumeEntity_k__BackingField,
    (int32_t)servantCostumeEntity,
    v12,
    v13);
  this->fields._userSvtCollectionEntity_k__BackingField = 0;
  p_userSvtCollectionEntity_k__BackingField = &this->fields._userSvtCollectionEntity_k__BackingField;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._userSvtCollectionEntity_k__BackingField, 0, v15, v16);
  this->fields._costumeOpenStatus_k__BackingField = 0;
  if ( !userSvtCollList )
    goto LABEL_56;
  max_length = userSvtCollList->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( !*p_svtCostumeEntity_k__BackingField )
        goto LABEL_56;
      if ( v20 >= max_length )
        goto LABEL_57;
      v21 = &userSvtCollList->obj.klass + (int)v20;
      svtId = (*p_svtCostumeEntity_k__BackingField)->fields.svtId;
      v25 = v21[4];
      v24 = (struct UserServantCollectionEntity_o **)(v21 + 4);
      v23 = v25;
      if ( !v25 )
        goto LABEL_56;
      namespaze = v23->_1.namespaze;
      data = v23->_1.byval_arg.data;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v52.fields.currentCryptoKey = namespaze;
      *(_QWORD *)&v52.fields.fakeValue = data;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v52, 0);
      if ( svtId == (_DWORD)Instance )
        break;
      max_length = userSvtCollList->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_16;
    }
    if ( v20 >= LODWORD(userSvtCollList->max_length) )
LABEL_57:
      sub_1C6BC68(Instance);
    v30 = *v24;
    *p_userSvtCollectionEntity_k__BackingField = *v24;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._userSvtCollectionEntity_k__BackingField, (int32_t)v30, v28, v29);
  }
LABEL_16:
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_54;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
  v31 = *p_userSvtCollectionEntity_k__BackingField;
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_56;
  v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v34 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
  v33 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v53.fields.currentCryptoKey = v34;
  *(_QWORD *)&v53.fields.fakeValue = v33;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v53, 0);
  if ( !v32 )
    goto LABEL_56;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v32,
             (int32_t)Instance,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v36, v37);
  svtCostumeEntity_k__BackingField = this->fields._svtCostumeEntity_k__BackingField;
  if ( !svtCostumeEntity_k__BackingField )
    goto LABEL_56;
  v39 = *p_userSvtCollectionEntity_k__BackingField;
  id = svtCostumeEntity_k__BackingField->fields.id;
  v41 = (ServantOverwriteStatus_o *)sub_1C6BC54(ServantOverwriteStatus_TypeInfo);
  ServantOverwriteStatus___ctor_33625240(v41, v39, id, 0);
  if ( !v41 )
    goto LABEL_56;
  servantEntity = this->fields.servantEntity;
  this->fields.rarity = v41->fields._Rarity_k__BackingField;
  if ( !servantEntity )
    goto LABEL_56;
  classId = servantEntity->fields.classId;
  userSvtCollectionEntity_k__BackingField = this->fields._userSvtCollectionEntity_k__BackingField;
  this->fields.classId = classId;
  if ( !userSvtCollectionEntity_k__BackingField )
    goto LABEL_56;
  status = userSvtCollectionEntity_k__BackingField->fields.status;
  v46 = this->fields._svtCostumeEntity_k__BackingField;
  this->fields.collectiionStatus = status;
  if ( !v46 )
    goto LABEL_56;
  this->fields.sortValue2 = -v46->fields.costumeCollectionNo;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_56;
  v47 = (ServantCostumeReleaseMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                (*p_userSvtCollectionEntity_k__BackingField)->fields.svtId,
                                0);
  if ( !*p_svtCostumeEntity_k__BackingField || !v47 )
    goto LABEL_56;
  Instance = (DataManager_o *)ServantCostumeReleaseMaster__checkItemHaving(
                                v47,
                                (int32_t)Instance,
                                (*p_svtCostumeEntity_k__BackingField)->fields.id,
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v48 = this->fields._userSvtCollectionEntity_k__BackingField;
    this->fields._costumeOpenStatus_k__BackingField = 1;
    if ( !v48 )
      goto LABEL_56;
    costumeIds = v48->fields.costumeIds;
    if ( costumeIds )
    {
      v50 = costumeIds->max_length;
      if ( v50 >= 1 )
      {
        v51 = 0;
        while ( 1 )
        {
          if ( v51 >= LODWORD(costumeIds->max_length) )
            goto LABEL_57;
          if ( !*p_svtCostumeEntity_k__BackingField )
            goto LABEL_56;
          if ( costumeIds->m_Items[v51] == (*p_svtCostumeEntity_k__BackingField)->fields.id )
            break;
          if ( v50 == ++v51 )
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
  Instance = (DataManager_o *)ServantCostumeEntity__checkFlag((ServantCostumeEntity_o *)Instance, 16, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_48;
  if ( !*p_svtCostumeEntity_k__BackingField
    || (Instance = (DataManager_o *)*p_userSvtCollectionEntity_k__BackingField) == 0 )
  {
LABEL_56:
    sub_1C6BC60(Instance, v18);
  }
  if ( !UserServantCollectionEntity__IsCostumeGet(
          (UserServantCollectionEntity_o *)Instance,
          (*p_svtCostumeEntity_k__BackingField)->fields.id,
          0) )
    this->fields.isNotCostumeGet = 1;
LABEL_48:
  Instance = (DataManager_o *)*p_svtCostumeEntity_k__BackingField;
  if ( !*p_svtCostumeEntity_k__BackingField )
    goto LABEL_56;
  Instance = (DataManager_o *)ServantCostumeEntity__checkFlag((ServantCostumeEntity_o *)Instance, 32, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !*p_svtCostumeEntity_k__BackingField )
      goto LABEL_56;
    if ( !ServantCostumeReleaseMaster__checkItemHaving(
            v47,
            (*p_svtCostumeEntity_k__BackingField)->fields.svtId,
            (*p_svtCostumeEntity_k__BackingField)->fields.id,
            0)
      && this->fields.collectiionStatus )
    {
      this->fields.isSecret = 1;
    }
  }
LABEL_54:
  Instance = (DataManager_o *)*p_iconLabelInfo;
  if ( !*p_iconLabelInfo )
    goto LABEL_56;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


bool MaterialCostumeServantListViewItem__IsMatchFilter(
        MaterialCostumeServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
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

  if ( (byte_4CB143E & 1) == 0 )
  {
    sub_1C6BA08(&FilterKindList_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4CB143E = 1;
  }
  if ( !sort )
    return 0;
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_43;
  v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_37E7C34 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v7, 0) )
  {
    v8 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v8 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v8->static_fields->ClassFilterKindList;
    if ( ClassGroupFilterKindList )
    {
      v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                              ClassGroupFilterKindList,
                                              (const MethodInfo_37E7C34 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
      {
        return 0;
      }
      goto LABEL_15;
    }
LABEL_43:
    sub_1C6BC60(ClassGroupFilterKindList, sort);
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
    return 0;
LABEL_15:
  v10 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v10 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v10->static_fields->MaterialServantCostumeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_43;
  v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_37E7C34 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0) )
    goto LABEL_24;
  costumeOpenStatus_k__BackingField = this->fields._costumeOpenStatus_k__BackingField;
  if ( costumeOpenStatus_k__BackingField )
  {
    if ( (unsigned int)(costumeOpenStatus_k__BackingField - 1) > 1 )
      goto LABEL_24;
    v13 = 33;
  }
  else
  {
    v13 = 32;
  }
  if ( !ListViewSort__GetFilter(sort, v13, 0) )
    return 0;
LABEL_24:
  v14 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v14->static_fields->CollectionStateFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_43;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_37E7C34 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0) )
    goto LABEL_35;
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
      goto LABEL_35;
    v17 = 10;
  }
  if ( !ListViewSort__GetFilter(sort, v17, 0) )
    return 0;
LABEL_35:
  v18 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v18 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v18->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_43;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_37E7C34 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v19, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


bool MaterialCostumeServantListViewItem__SetSortValue(
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
  this->fields.sortValue1 = -1;
  v7 = ((__int64 (__fastcall *)(MaterialCostumeServantListViewItem_o *, ListViewSort_o *, const MethodInfo *))klass->vtable._5_IsMatchFilter.methodPtr)(
         this,
         sort,
         klass->vtable._5_IsMatchFilter.method);
  iconLabelInfo = 0;
  if ( (v7 & 1) != 0 )
  {
    if ( !sort )
      goto LABEL_14;
    if ( sort->fields.sortKind == 27 )
    {
      svtCostumeEntity_k__BackingField = this->fields._svtCostumeEntity_k__BackingField;
      this->fields.sortValue0 = 0;
      if ( svtCostumeEntity_k__BackingField )
      {
        costumeCollectionNo = svtCostumeEntity_k__BackingField->fields.costumeCollectionNo;
        iconLabelInfo = this->fields.iconLabelInfo;
        this->fields.sortValue1 = costumeCollectionNo;
        if ( iconLabelInfo )
        {
          IconLabelInfo__Set_41149608(iconLabelInfo, 57, costumeCollectionNo, 0, 0, 0, 0, 0, 0, 0);
LABEL_12:
          LOBYTE(iconLabelInfo) = 1;
          return (char)iconLabelInfo;
        }
      }
LABEL_14:
      sub_1C6BC60(iconLabelInfo, v6);
    }
    collectiionStatus = this->fields.collectiionStatus;
    if ( collectiionStatus != 1 )
    {
      if ( collectiionStatus == 2 )
        this->fields.sortValue0 = 2;
      else
        this->fields.sortValue0 = 0;
      goto LABEL_12;
    }
    LOBYTE(iconLabelInfo) = 1;
    this->fields.sortValue0 = 1;
  }
  return (char)iconLabelInfo;
}


int32_t MaterialCostumeServantListViewItem__get_CollectionKind(
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


IconLabelInfo_o *MaterialCostumeServantListViewItem__get_IconInfo(
        MaterialCostumeServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo;
}


bool MaterialCostumeServantListViewItem__get_IsCanNotSelect(
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


bool MaterialCostumeServantListViewItem__get_IsSecret(
        MaterialCostumeServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSecret;
}


int32_t MaterialCostumeServantListViewItem__get_costumeOpenStatus(
        MaterialCostumeServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._costumeOpenStatus_k__BackingField;
}


ServantCostumeEntity_o *MaterialCostumeServantListViewItem__get_svtCostumeEntity(
        MaterialCostumeServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._svtCostumeEntity_k__BackingField;
}


UserServantCollectionEntity_o *MaterialCostumeServantListViewItem__get_userSvtCollectionEntity(
        MaterialCostumeServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._userSvtCollectionEntity_k__BackingField;
}


void MaterialCostumeServantListViewItem__set_costumeOpenStatus(
        MaterialCostumeServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._costumeOpenStatus_k__BackingField = value;
}


void MaterialCostumeServantListViewItem__set_svtCostumeEntity(
        MaterialCostumeServantListViewItem_o *this,
        ServantCostumeEntity_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._svtCostumeEntity_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._svtCostumeEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void MaterialCostumeServantListViewItem__set_userSvtCollectionEntity(
        MaterialCostumeServantListViewItem_o *this,
        UserServantCollectionEntity_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._userSvtCollectionEntity_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._userSvtCollectionEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}