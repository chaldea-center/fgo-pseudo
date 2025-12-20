void MaterialCostumeServantListViewItem___ctor(
        MaterialCostumeServantListViewItem_o *this,
        ServantCostumeEntity_o *servantCostumeEntity,
        UserServantCollectionEntity_array *userSvtCollList,
        const MethodInfo *method)
{
  IconLabelInfo_o *v7; // x21
  struct IconLabelInfo_o **p_iconLabelInfo; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct ServantCostumeEntity_o **p_svtCostumeEntity_k__BackingField; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity_k__BackingField; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  int max_length; // w8
  unsigned int v32; // w26
  Il2CppClass **v33; // x28
  int32_t svtId; // w29
  Il2CppClass *v35; // x8
  struct UserServantCollectionEntity_o **v36; // x28
  Il2CppClass *v37; // t1
  void *data; // x24
  const char *namespaze; // x25
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  struct UserServantCollectionEntity_o *v46; // x1
  struct UserServantCollectionEntity_o *v47; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v48; // x23
  __int64 v49; // x24
  __int64 v50; // x25
  Il2CppObject *Entity; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  struct ServantCostumeEntity_o *svtCostumeEntity_k__BackingField; // x8
  UserServantCollectionEntity_o *v59; // x24
  int32_t id; // w25
  ServantOverwriteStatus_o *v61; // x23
  struct ServantEntity_o *servantEntity; // x8
  int32_t classId; // w9
  struct UserServantCollectionEntity_o *userSvtCollectionEntity_k__BackingField; // x8
  int32_t status; // w9
  struct ServantCostumeEntity_o *v66; // x8
  ServantCostumeReleaseMaster_o *v67; // x23
  struct UserServantCollectionEntity_o *v68; // x8
  struct System_Int32_array *costumeIds; // x8
  int v70; // w9
  unsigned int v71; // w11
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_4D27973 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&IconLabelInfo_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&ServantOverwriteStatus_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D27973 = 1;
  }
  v7 = (IconLabelInfo_o *)sub_1C942E4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v7, 0);
  this->fields.iconLabelInfo = v7;
  p_iconLabelInfo = &this->fields.iconLabelInfo;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields._svtCostumeEntity_k__BackingField = servantCostumeEntity;
  p_svtCostumeEntity_k__BackingField = &this->fields._svtCostumeEntity_k__BackingField;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._svtCostumeEntity_k__BackingField,
    (int32_t)servantCostumeEntity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields._userSvtCollectionEntity_k__BackingField = 0;
  p_userSvtCollectionEntity_k__BackingField = &this->fields._userSvtCollectionEntity_k__BackingField;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._userSvtCollectionEntity_k__BackingField,
    0,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._costumeOpenStatus_k__BackingField = 0;
  if ( !userSvtCollList )
    goto LABEL_56;
  max_length = userSvtCollList->max_length;
  if ( max_length >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( !*p_svtCostumeEntity_k__BackingField )
        goto LABEL_56;
      if ( v32 >= max_length )
        goto LABEL_57;
      v33 = &userSvtCollList->obj.klass + (int)v32;
      svtId = (*p_svtCostumeEntity_k__BackingField)->fields.svtId;
      v37 = v33[4];
      v36 = (struct UserServantCollectionEntity_o **)(v33 + 4);
      v35 = v37;
      if ( !v37 )
        goto LABEL_56;
      namespaze = v35->_1.namespaze;
      data = v35->_1.byval_arg.data;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v72.fields.currentCryptoKey = namespaze;
      *(_QWORD *)&v72.fields.fakeValue = data;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v72, 0);
      if ( svtId == (_DWORD)Instance )
        break;
      max_length = userSvtCollList->max_length;
      if ( (int)++v32 >= max_length )
        goto LABEL_16;
    }
    if ( v32 >= LODWORD(userSvtCollList->max_length) )
LABEL_57:
      sub_1C942F8(Instance);
    v46 = *v36;
    *p_userSvtCollectionEntity_k__BackingField = *v36;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields._userSvtCollectionEntity_k__BackingField,
      (int32_t)v46,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
LABEL_16:
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_54;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
  v47 = *p_userSvtCollectionEntity_k__BackingField;
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_56;
  v48 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v50 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
  v49 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v73.fields.currentCryptoKey = v50;
  *(_QWORD *)&v73.fields.fakeValue = v49;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v73, 0);
  if ( !v48 )
    goto LABEL_56;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v48,
             (int32_t)Instance,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, (int32_t)Entity, v52, v53, v54, v55, v56, v57);
  svtCostumeEntity_k__BackingField = this->fields._svtCostumeEntity_k__BackingField;
  if ( !svtCostumeEntity_k__BackingField )
    goto LABEL_56;
  v59 = *p_userSvtCollectionEntity_k__BackingField;
  id = svtCostumeEntity_k__BackingField->fields.id;
  v61 = (ServantOverwriteStatus_o *)sub_1C942E4(ServantOverwriteStatus_TypeInfo);
  ServantOverwriteStatus___ctor_35769336(v61, v59, id, 0);
  if ( !v61 )
    goto LABEL_56;
  servantEntity = this->fields.servantEntity;
  this->fields.rarity = v61->fields._Rarity_k__BackingField;
  if ( !servantEntity )
    goto LABEL_56;
  classId = servantEntity->fields.classId;
  userSvtCollectionEntity_k__BackingField = this->fields._userSvtCollectionEntity_k__BackingField;
  this->fields.classId = classId;
  if ( !userSvtCollectionEntity_k__BackingField )
    goto LABEL_56;
  status = userSvtCollectionEntity_k__BackingField->fields.status;
  v66 = this->fields._svtCostumeEntity_k__BackingField;
  this->fields.collectiionStatus = status;
  if ( !v66 )
    goto LABEL_56;
  this->fields.sortValue2 = -v66->fields.costumeCollectionNo;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_56;
  v67 = (ServantCostumeReleaseMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                (*p_userSvtCollectionEntity_k__BackingField)->fields.svtId,
                                0);
  if ( !*p_svtCostumeEntity_k__BackingField || !v67 )
    goto LABEL_56;
  Instance = (DataManager_o *)ServantCostumeReleaseMaster__checkItemHaving(
                                v67,
                                (int32_t)Instance,
                                (*p_svtCostumeEntity_k__BackingField)->fields.id,
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v68 = this->fields._userSvtCollectionEntity_k__BackingField;
    this->fields._costumeOpenStatus_k__BackingField = 1;
    if ( !v68 )
      goto LABEL_56;
    costumeIds = v68->fields.costumeIds;
    if ( costumeIds )
    {
      v70 = costumeIds->max_length;
      if ( v70 >= 1 )
      {
        v71 = 0;
        while ( 1 )
        {
          if ( v71 >= LODWORD(costumeIds->max_length) )
            goto LABEL_57;
          if ( !*p_svtCostumeEntity_k__BackingField )
            goto LABEL_56;
          if ( costumeIds->m_Items[v71] == (*p_svtCostumeEntity_k__BackingField)->fields.id )
            break;
          if ( v70 == ++v71 )
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
    sub_1C942F0(Instance, v30);
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
            v67,
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

  if ( (byte_4D27974 & 1) == 0 )
  {
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4D27974 = 1;
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
                                          (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                              (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
      {
        return 0;
      }
      goto LABEL_15;
    }
LABEL_43:
    sub_1C942F0(ClassGroupFilterKindList, sort);
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
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
          IconLabelInfo__Set_41670428(iconLabelInfo, 57, costumeCollectionNo, 0, 0, 0, 0, 0, 0, 0);
LABEL_12:
          LOBYTE(iconLabelInfo) = 1;
          return (char)iconLabelInfo;
        }
      }
LABEL_14:
      sub_1C942F0(iconLabelInfo, v6);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._svtCostumeEntity_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._svtCostumeEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MaterialCostumeServantListViewItem__set_userSvtCollectionEntity(
        MaterialCostumeServantListViewItem_o *this,
        UserServantCollectionEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._userSvtCollectionEntity_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._userSvtCollectionEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}