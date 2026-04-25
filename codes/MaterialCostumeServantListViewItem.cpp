void MaterialCostumeServantListViewItem___ctor(
        MaterialCostumeServantListViewItem_o *this,
        ServantCostumeEntity_o *servantCostumeEntity,
        UserServantCollectionEntity_array *userSvtCollList,
        const MethodInfo *method)
{
  IconLabelInfo_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct ServantCostumeEntity_o **p_svtCostumeEntity_k__BackingField; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity_k__BackingField; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  __int64 v28; // x1
  ServantCostumeEntity_o *svtCostumeEntity_k__BackingField; // x0
  int max_length; // w8
  char v31; // w24
  unsigned int v32; // w28
  UserServantCollectionEntity_o *v33; // x25
  int32_t svtId; // w20
  __int64 v35; // x26
  __int64 v36; // x27
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  int32_t v43; // w20
  __int64 v44; // x26
  __int64 v45; // x27
  Il2CppObject *Entity; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  struct ServantCostumeEntity_o *v53; // x8
  UserServantCollectionEntity_o *v54; // x24
  int32_t id; // w25
  ServantOverwriteStatus_o *v56; // x23
  struct ServantEntity_o *servantEntity; // x8
  int32_t classId; // w9
  struct UserServantCollectionEntity_o *userSvtCollectionEntity_k__BackingField; // x8
  int32_t status; // w9
  struct ServantCostumeEntity_o *v61; // x8
  ServantCostumeReleaseMaster_o *v62; // x23
  struct UserServantCollectionEntity_o *v63; // x8
  struct System_Int32_array *costumeIds; // x8
  int v65; // w9
  unsigned int v66; // w11
  struct IconLabelInfo_o **p_iconLabelInfo; // [xsp+0h] [xbp-70h]
  int32_t baseSvtId; // [xsp+Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_4DFFAE0 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1CE6700(&IconLabelInfo_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&ServantOverwriteStatus_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4DFFAE0 = 1;
  }
  baseSvtId = 0;
  v7 = (IconLabelInfo_o *)sub_1CE694C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v7, 0);
  this->fields.iconLabelInfo = v7;
  p_iconLabelInfo = &this->fields.iconLabelInfo;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields._svtCostumeEntity_k__BackingField = servantCostumeEntity;
  p_svtCostumeEntity_k__BackingField = &this->fields._svtCostumeEntity_k__BackingField;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._svtCostumeEntity_k__BackingField,
    (int32_t)servantCostumeEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields._userSvtCollectionEntity_k__BackingField = 0;
  p_userSvtCollectionEntity_k__BackingField = &this->fields._userSvtCollectionEntity_k__BackingField;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._userSvtCollectionEntity_k__BackingField,
    0,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields._costumeOpenStatus_k__BackingField = 0;
  svtCostumeEntity_k__BackingField = this->fields._svtCostumeEntity_k__BackingField;
  if ( !svtCostumeEntity_k__BackingField )
    goto LABEL_57;
  svtCostumeEntity_k__BackingField = (ServantCostumeEntity_o *)ServantCostumeEntity__TryGetBaseSvtId(
                                                                 svtCostumeEntity_k__BackingField,
                                                                 &baseSvtId,
                                                                 0);
  if ( !userSvtCollList )
    goto LABEL_57;
  max_length = userSvtCollList->max_length;
  if ( max_length >= 1 )
  {
    v31 = (char)svtCostumeEntity_k__BackingField;
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= max_length )
LABEL_58:
        sub_1CE6960(svtCostumeEntity_k__BackingField);
      if ( !*p_svtCostumeEntity_k__BackingField )
        goto LABEL_57;
      v33 = userSvtCollList->m_Items[v32];
      if ( !v33 )
        goto LABEL_57;
      svtId = (*p_svtCostumeEntity_k__BackingField)->fields.svtId;
      v36 = *(_QWORD *)&v33->fields.svtId.fields.currentCryptoKey;
      v35 = *(_QWORD *)&v33->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v69.fields.currentCryptoKey = v36;
      *(_QWORD *)&v69.fields.fakeValue = v35;
      svtCostumeEntity_k__BackingField = (ServantCostumeEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                                                     v69,
                                                                     0);
      if ( svtId == (_DWORD)svtCostumeEntity_k__BackingField )
        break;
      if ( (v31 & 1) != 0 )
      {
        v43 = baseSvtId;
        v45 = *(_QWORD *)&v33->fields.svtId.fields.currentCryptoKey;
        v44 = *(_QWORD *)&v33->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v70.fields.currentCryptoKey = v45;
        *(_QWORD *)&v70.fields.fakeValue = v44;
        svtCostumeEntity_k__BackingField = (ServantCostumeEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                                                       v70,
                                                                       0);
        if ( v43 == (_DWORD)svtCostumeEntity_k__BackingField )
          break;
      }
      max_length = userSvtCollList->max_length;
      if ( (int)++v32 >= max_length )
        goto LABEL_20;
    }
    *p_userSvtCollectionEntity_k__BackingField = v33;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields._userSvtCollectionEntity_k__BackingField,
      (int32_t)v33,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
LABEL_20:
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_55;
  svtCostumeEntity_k__BackingField = (ServantCostumeEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !svtCostumeEntity_k__BackingField )
    goto LABEL_57;
  svtCostumeEntity_k__BackingField = (ServantCostumeEntity_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)svtCostumeEntity_k__BackingField,
                                                                 (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*p_svtCostumeEntity_k__BackingField )
    goto LABEL_57;
  if ( !svtCostumeEntity_k__BackingField )
    goto LABEL_57;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)svtCostumeEntity_k__BackingField,
             (*p_svtCostumeEntity_k__BackingField)->fields.svtId,
             (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, (int32_t)Entity, v47, v48, v49, v50, v51, v52);
  v53 = this->fields._svtCostumeEntity_k__BackingField;
  if ( !v53 )
    goto LABEL_57;
  v54 = *p_userSvtCollectionEntity_k__BackingField;
  id = v53->fields.id;
  v56 = (ServantOverwriteStatus_o *)sub_1CE694C(ServantOverwriteStatus_TypeInfo);
  ServantOverwriteStatus___ctor_35036972(v56, v54, id, 0);
  if ( !v56 )
    goto LABEL_57;
  servantEntity = this->fields.servantEntity;
  this->fields.rarity = v56->fields._Rarity_k__BackingField;
  if ( !servantEntity )
    goto LABEL_57;
  classId = servantEntity->fields.classId;
  userSvtCollectionEntity_k__BackingField = this->fields._userSvtCollectionEntity_k__BackingField;
  this->fields.classId = classId;
  if ( !userSvtCollectionEntity_k__BackingField )
    goto LABEL_57;
  status = userSvtCollectionEntity_k__BackingField->fields.status;
  v61 = this->fields._svtCostumeEntity_k__BackingField;
  this->fields.collectiionStatus = status;
  if ( !v61 )
    goto LABEL_57;
  this->fields.sortValue2 = -v61->fields.costumeCollectionNo;
  svtCostumeEntity_k__BackingField = (ServantCostumeEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !svtCostumeEntity_k__BackingField )
    goto LABEL_57;
  svtCostumeEntity_k__BackingField = (ServantCostumeEntity_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)svtCostumeEntity_k__BackingField,
                                                                 (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  if ( !*p_svtCostumeEntity_k__BackingField )
    goto LABEL_57;
  v62 = (ServantCostumeReleaseMaster_o *)svtCostumeEntity_k__BackingField;
  if ( !svtCostumeEntity_k__BackingField )
    goto LABEL_57;
  svtCostumeEntity_k__BackingField = (ServantCostumeEntity_o *)ServantCostumeReleaseMaster__checkItemHaving(
                                                                 (ServantCostumeReleaseMaster_o *)svtCostumeEntity_k__BackingField,
                                                                 (*p_svtCostumeEntity_k__BackingField)->fields.svtId,
                                                                 (*p_svtCostumeEntity_k__BackingField)->fields.id,
                                                                 0);
  if ( ((unsigned __int8)svtCostumeEntity_k__BackingField & 1) != 0 )
  {
    v63 = this->fields._userSvtCollectionEntity_k__BackingField;
    this->fields._costumeOpenStatus_k__BackingField = 1;
    if ( !v63 )
      goto LABEL_57;
    costumeIds = v63->fields.costumeIds;
    if ( costumeIds )
    {
      v65 = costumeIds->max_length;
      if ( v65 >= 1 )
      {
        v66 = 0;
        while ( 1 )
        {
          if ( v66 >= LODWORD(costumeIds->max_length) )
            goto LABEL_58;
          if ( !*p_svtCostumeEntity_k__BackingField )
            goto LABEL_57;
          if ( costumeIds->m_Items[v66] == (*p_svtCostumeEntity_k__BackingField)->fields.id )
            break;
          if ( v65 == ++v66 )
            goto LABEL_43;
        }
        this->fields._costumeOpenStatus_k__BackingField = 2;
      }
    }
  }
LABEL_43:
  svtCostumeEntity_k__BackingField = *p_svtCostumeEntity_k__BackingField;
  if ( !*p_svtCostumeEntity_k__BackingField )
    goto LABEL_57;
  svtCostumeEntity_k__BackingField = (ServantCostumeEntity_o *)ServantCostumeEntity__checkFlag(
                                                                 svtCostumeEntity_k__BackingField,
                                                                 16,
                                                                 0);
  if ( ((unsigned __int8)svtCostumeEntity_k__BackingField & 1) == 0 )
    goto LABEL_49;
  if ( !*p_svtCostumeEntity_k__BackingField
    || (svtCostumeEntity_k__BackingField = (ServantCostumeEntity_o *)*p_userSvtCollectionEntity_k__BackingField) == 0 )
  {
LABEL_57:
    sub_1CE6958(svtCostumeEntity_k__BackingField, v28);
  }
  if ( !UserServantCollectionEntity__IsCostumeGet(
          (UserServantCollectionEntity_o *)svtCostumeEntity_k__BackingField,
          (*p_svtCostumeEntity_k__BackingField)->fields.id,
          0) )
    this->fields.isNotCostumeGet = 1;
LABEL_49:
  svtCostumeEntity_k__BackingField = *p_svtCostumeEntity_k__BackingField;
  if ( !*p_svtCostumeEntity_k__BackingField )
    goto LABEL_57;
  svtCostumeEntity_k__BackingField = (ServantCostumeEntity_o *)ServantCostumeEntity__checkFlag(
                                                                 svtCostumeEntity_k__BackingField,
                                                                 32,
                                                                 0);
  if ( ((unsigned __int8)svtCostumeEntity_k__BackingField & 1) != 0 )
  {
    if ( !*p_svtCostumeEntity_k__BackingField )
      goto LABEL_57;
    if ( !ServantCostumeReleaseMaster__checkItemHaving(
            v62,
            (*p_svtCostumeEntity_k__BackingField)->fields.svtId,
            (*p_svtCostumeEntity_k__BackingField)->fields.id,
            0)
      && this->fields.collectiionStatus )
    {
      this->fields.isSecret = 1;
    }
  }
LABEL_55:
  svtCostumeEntity_k__BackingField = (ServantCostumeEntity_o *)*p_iconLabelInfo;
  if ( !*p_iconLabelInfo )
    goto LABEL_57;
  IconLabelInfo__Clear((IconLabelInfo_o *)svtCostumeEntity_k__BackingField, 0);
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

  if ( (byte_4DFFAE1 & 1) == 0 )
  {
    sub_1CE6700(&FilterKindList_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4DFFAE1 = 1;
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
                                          (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                              (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
      {
        return 0;
      }
      goto LABEL_15;
    }
LABEL_43:
    sub_1CE6958(ClassGroupFilterKindList, sort);
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
                                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
          IconLabelInfo__Set_42060700(iconLabelInfo, 57, costumeCollectionNo, 0, 0, 0, 0, 0, 0, 0);
LABEL_12:
          LOBYTE(iconLabelInfo) = 1;
          return (char)iconLabelInfo;
        }
      }
LABEL_14:
      sub_1CE6958(iconLabelInfo, v6);
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
  sub_1CE66A4(
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
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._userSvtCollectionEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}