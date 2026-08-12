void MaterialCostumeServantListViewItem___ctor(
        MaterialCostumeServantListViewItem_o *this,
        ServantCostumeEntity_o *servantCostumeEntity,
        UserServantCollectionEntity_array *userSvtCollList,
        const MethodInfo *method)
{
  IconLabelInfo_o *v7; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct ServantCostumeEntity_o **p_svtCostumeEntity_k__BackingField; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity_k__BackingField; // x22
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  ServantCostumeEntity_o *svtCostumeEntity_k__BackingField; // x0
  System_String_o *v30; // x2
  int max_length; // w8
  char v32; // w24
  unsigned int v33; // w29
  UserServantCollectionEntity_o *v34; // x25
  __int64 v35; // x26
  __int64 v36; // x27
  int32_t svtId; // w20
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x26
  __int64 v44; // x27
  int32_t v45; // w20
  Il2CppObject *Entity; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  struct ServantCostumeEntity_o *v53; // x8
  UserServantCollectionEntity_o *v54; // x24
  int32_t id; // w25
  ServantOverwriteStatus_o *v56; // x23
  struct ServantEntity_o *servantEntity; // x8
  int32_t classId; // w9
  struct UserServantCollectionEntity_o *userSvtCollectionEntity_k__BackingField; // x8
  int32_t status; // w9
  struct ServantCostumeEntity_o *v61; // x8
  const MethodInfo_47A29F8 *v62; // x0
  ServantCostumeReleaseMaster_o *v63; // x23
  struct UserServantCollectionEntity_o *v64; // x8
  struct System_Int32_array *costumeIds; // x10
  int v66; // w8
  int v67; // w9
  int32_t *m_Items; // x10
  struct IconLabelInfo_o **p_iconLabelInfo; // [xsp+0h] [xbp-70h]
  int32_t baseSvtId; // [xsp+Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_596B70B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantOverwriteStatus_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596B70B = 1;
  }
  baseSvtId = 0;
  v7 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v7, 0);
  this->fields.iconLabelInfo = v7;
  p_iconLabelInfo = &this->fields.iconLabelInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields._svtCostumeEntity_k__BackingField = servantCostumeEntity;
  p_svtCostumeEntity_k__BackingField = &this->fields._svtCostumeEntity_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._svtCostumeEntity_k__BackingField,
    (int32_t)servantCostumeEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields._userSvtCollectionEntity_k__BackingField = 0;
  p_userSvtCollectionEntity_k__BackingField = &this->fields._userSvtCollectionEntity_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._userSvtCollectionEntity_k__BackingField,
    0,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  svtCostumeEntity_k__BackingField = this->fields._svtCostumeEntity_k__BackingField;
  this->fields._costumeOpenStatus_k__BackingField = 0;
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
    v32 = (char)svtCostumeEntity_k__BackingField;
    v33 = 0;
    while ( 1 )
    {
      if ( v33 >= max_length )
LABEL_58:
        sub_2213CE4(svtCostumeEntity_k__BackingField);
      if ( !*p_svtCostumeEntity_k__BackingField )
        goto LABEL_57;
      v34 = userSvtCollList->m_Items[v33];
      if ( !v34 )
        goto LABEL_57;
      v35 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
      v36 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
      svtId = (*p_svtCostumeEntity_k__BackingField)->fields.svtId;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28, v30);
      *(_QWORD *)&v71.fields.currentCryptoKey = v35;
      *(_QWORD *)&v71.fields.fakeValue = v36;
      svtCostumeEntity_k__BackingField = (ServantCostumeEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                     v71,
                                                                     0);
      if ( svtId == (_DWORD)svtCostumeEntity_k__BackingField )
        break;
      if ( (v32 & 1) != 0 )
      {
        v43 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
        v44 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
        v45 = baseSvtId;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28, v30);
        *(_QWORD *)&v72.fields.currentCryptoKey = v43;
        *(_QWORD *)&v72.fields.fakeValue = v44;
        svtCostumeEntity_k__BackingField = (ServantCostumeEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                       v72,
                                                                       0);
        if ( v45 == (_DWORD)svtCostumeEntity_k__BackingField )
          break;
      }
      max_length = userSvtCollList->max_length;
      if ( (int)++v33 >= max_length )
        goto LABEL_20;
    }
    *p_userSvtCollectionEntity_k__BackingField = v34;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._userSvtCollectionEntity_k__BackingField,
      (int32_t)v34,
      v30,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
LABEL_20:
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_55;
  svtCostumeEntity_k__BackingField = (ServantCostumeEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !svtCostumeEntity_k__BackingField )
    goto LABEL_57;
  svtCostumeEntity_k__BackingField = (ServantCostumeEntity_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)svtCostumeEntity_k__BackingField,
                                                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*p_svtCostumeEntity_k__BackingField )
    goto LABEL_57;
  if ( !svtCostumeEntity_k__BackingField )
    goto LABEL_57;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)svtCostumeEntity_k__BackingField,
             (*p_svtCostumeEntity_k__BackingField)->fields.svtId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)Entity,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = this->fields._svtCostumeEntity_k__BackingField;
  if ( !v53 )
    goto LABEL_57;
  v54 = *p_userSvtCollectionEntity_k__BackingField;
  id = v53->fields.id;
  v56 = (ServantOverwriteStatus_o *)sub_2213CCC(ServantOverwriteStatus_TypeInfo);
  ServantOverwriteStatus___ctor_40472260(v56, v54, id, 0);
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
  v62 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.sortValue2 = -v61->fields.costumeCollectionNo;
  svtCostumeEntity_k__BackingField = (ServantCostumeEntity_o *)SingletonMonoBehaviour_object___get_Instance(v62);
  if ( !svtCostumeEntity_k__BackingField )
    goto LABEL_57;
  svtCostumeEntity_k__BackingField = (ServantCostumeEntity_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)svtCostumeEntity_k__BackingField,
                                                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  if ( !*p_svtCostumeEntity_k__BackingField )
    goto LABEL_57;
  v63 = (ServantCostumeReleaseMaster_o *)svtCostumeEntity_k__BackingField;
  if ( !svtCostumeEntity_k__BackingField )
    goto LABEL_57;
  svtCostumeEntity_k__BackingField = (ServantCostumeEntity_o *)ServantCostumeReleaseMaster__checkItemHaving(
                                                                 (ServantCostumeReleaseMaster_o *)svtCostumeEntity_k__BackingField,
                                                                 (*p_svtCostumeEntity_k__BackingField)->fields.svtId,
                                                                 (*p_svtCostumeEntity_k__BackingField)->fields.id,
                                                                 0);
  if ( ((unsigned __int8)svtCostumeEntity_k__BackingField & 1) != 0 )
  {
    v64 = this->fields._userSvtCollectionEntity_k__BackingField;
    this->fields._costumeOpenStatus_k__BackingField = 1;
    if ( !v64 )
      goto LABEL_57;
    costumeIds = v64->fields.costumeIds;
    if ( costumeIds )
    {
      v66 = costumeIds->max_length;
      if ( v66 >= 1 )
      {
        v67 = costumeIds->max_length;
        m_Items = costumeIds->m_Items;
        while ( 1 )
        {
          if ( !v67 )
            goto LABEL_58;
          if ( !*p_svtCostumeEntity_k__BackingField )
            goto LABEL_57;
          if ( *m_Items == (*p_svtCostumeEntity_k__BackingField)->fields.id )
            break;
          --v66;
          ++m_Items;
          --v67;
          if ( !v66 )
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
    sub_2213CDC(svtCostumeEntity_k__BackingField, v28);
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
            v63,
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
  __int64 v8; // x2
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  __int64 v11; // x2
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  __int64 v14; // x2
  int32_t costumeOpenStatus_k__BackingField; // w8
  ListViewSort_o *v16; // x0
  int32_t v17; // w1
  FilterKindList_c *v18; // x0
  ListViewSort_FilterKind_array *v19; // x0
  __int64 v20; // x2
  int32_t collectiionStatus; // w8
  ListViewSort_o *v22; // x0
  int32_t v23; // w1
  FilterKindList_c *v24; // x0
  ListViewSort_FilterKind_array *v25; // x21

  if ( (byte_596B70C & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_596B70C = 1;
  }
  if ( !sort )
    return 0;
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_43;
  v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v7, 0) )
  {
    v9 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v8);
      v9 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v9->static_fields->ClassFilterKindList;
    if ( ClassGroupFilterKindList )
    {
      v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                               ClassGroupFilterKindList,
                                               (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
      {
        return 0;
      }
      goto LABEL_15;
    }
LABEL_43:
    sub_2213CDC(ClassGroupFilterKindList, sort);
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
    return 0;
LABEL_15:
  v12 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v11);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v12->static_fields->MaterialServantCostumeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_43;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0) )
    goto LABEL_24;
  costumeOpenStatus_k__BackingField = this->fields._costumeOpenStatus_k__BackingField;
  if ( costumeOpenStatus_k__BackingField )
  {
    if ( (unsigned int)(costumeOpenStatus_k__BackingField - 3) < 0xFFFFFFFE )
      goto LABEL_24;
    v16 = sort;
    v17 = 33;
  }
  else
  {
    v16 = sort;
    v17 = 32;
  }
  if ( !ListViewSort__GetFilter(v16, v17, 0) )
    return 0;
LABEL_24:
  v18 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v14);
    v18 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v18->static_fields->CollectionStateFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_43;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0) )
    goto LABEL_35;
  collectiionStatus = this->fields.collectiionStatus;
  if ( collectiionStatus == 2 )
  {
    v22 = sort;
    v23 = 12;
  }
  else if ( collectiionStatus == 1 )
  {
    v22 = sort;
    v23 = 11;
  }
  else
  {
    if ( collectiionStatus )
      goto LABEL_35;
    v22 = sort;
    v23 = 10;
  }
  if ( !ListViewSort__GetFilter(v22, v23, 0) )
    return 0;
LABEL_35:
  v24 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v20);
    v24 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v24->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_43;
  v25 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v25, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v25, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


bool MaterialCostumeServantListViewItem__SetSortValue(
        MaterialCostumeServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  MaterialCostumeServantListViewItem_c *klass; // x9
  IconLabelInfo_o *iconLabelInfo; // x0
  __int64 v7; // x1
  char v8; // w19
  struct ServantCostumeEntity_o *svtCostumeEntity_k__BackingField; // x8
  int64_t costumeCollectionNo; // x2
  int32_t collectiionStatus; // w8
  int64_t v12; // x8

  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  iconLabelInfo = (IconLabelInfo_o *)((__int64 (__fastcall *)(MaterialCostumeServantListViewItem_o *, ListViewSort_o *, const MethodInfo *))klass->vtable._5_IsMatchFilter.methodPtr)(
                                       this,
                                       sort,
                                       klass->vtable._5_IsMatchFilter.method);
  v8 = (char)iconLabelInfo;
  if ( ((unsigned __int8)iconLabelInfo & 1) != 0 )
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
          IconLabelInfo__Set_47880948(iconLabelInfo, 57, costumeCollectionNo, 0, 0, 0, 0, 0, 0, 0);
          return v8 & 1;
        }
      }
LABEL_14:
      sub_2213CDC(iconLabelInfo, v7);
    }
    collectiionStatus = this->fields.collectiionStatus;
    if ( collectiionStatus == 1 )
    {
      v12 = 1;
    }
    else
    {
      if ( collectiionStatus != 2 )
      {
        this->fields.sortValue0 = 0;
        return v8 & 1;
      }
      v12 = 2;
    }
    this->fields.sortValue0 = v12;
  }
  return v8 & 1;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._svtCostumeEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._svtCostumeEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._userSvtCollectionEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._userSvtCollectionEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}