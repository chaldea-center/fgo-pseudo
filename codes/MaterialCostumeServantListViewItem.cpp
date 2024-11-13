void __fastcall MaterialCostumeServantListViewItem___ctor(
        MaterialCostumeServantListViewItem_o *this,
        ServantCostumeEntity_o *svtCostumeEntity,
        UserServantCollectionEntity_array *userSvtCollList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  IconLabelInfo_o *v19; // x22
  struct IconLabelInfo_o **p_iconLabelInfo; // x21
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity_k__BackingField; // x22
  __int64 Instance; // x0
  __int64 v23; // x1
  signed int max_length; // w8
  il2cpp_array_size_t v25; // w26
  Il2CppClass **v26; // x28
  int32_t svtId; // w29
  Il2CppClass *v28; // x8
  struct UserServantCollectionEntity_o **v29; // x28
  Il2CppClass *v30; // t1
  void *data; // x24
  const char *namespaze; // x25
  struct UserServantCollectionEntity_o *v33; // x1
  struct UserServantCollectionEntity_o *v34; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x23
  __int64 v36; // x24
  __int64 v37; // x25
  Il2CppObject *Entity; // x0
  ServantLimitMaster_o *v39; // x23
  struct ServantEntity_o *servantEntity; // x8
  int32_t classId; // w9
  struct UserServantCollectionEntity_o *userSvtCollectionEntity_k__BackingField; // x8
  int32_t status; // w9
  struct ServantCostumeEntity_o *svtCostumeEntity_k__BackingField; // x8
  ServantCostumeReleaseMaster_o *v45; // x23
  struct UserServantCollectionEntity_o *v46; // x8
  struct System_Int32_array *costumeIds; // x8
  int v48; // w9
  il2cpp_array_size_t v49; // w11
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4B117A4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, svtCostumeEntity, userSvtCollList);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B117A4 = 1;
  }
  v19 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, svtCostumeEntity, userSvtCollList, method);
  IconLabelInfo___ctor(v19, 0LL);
  this->fields.iconLabelInfo = v19;
  p_iconLabelInfo = &this->fields.iconLabelInfo;
  sub_1BCA784(&this->fields.iconLabelInfo, v19);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields._svtCostumeEntity_k__BackingField = svtCostumeEntity;
  sub_1BCA784(&this->fields._svtCostumeEntity_k__BackingField, svtCostumeEntity);
  this->fields._userSvtCollectionEntity_k__BackingField = 0LL;
  p_userSvtCollectionEntity_k__BackingField = &this->fields._userSvtCollectionEntity_k__BackingField;
  Instance = sub_1BCA784(&this->fields._userSvtCollectionEntity_k__BackingField, 0LL);
  this->fields._costumeOpenStatus_k__BackingField = 0;
  if ( !userSvtCollList )
    goto LABEL_54;
  max_length = userSvtCollList->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( !svtCostumeEntity )
        goto LABEL_54;
      if ( v25 >= max_length )
        goto LABEL_55;
      v26 = &userSvtCollList->obj.klass + (int)v25;
      svtId = svtCostumeEntity->fields.svtId;
      v30 = v26[4];
      v29 = (struct UserServantCollectionEntity_o **)(v26 + 4);
      v28 = v30;
      if ( !v30 )
        goto LABEL_54;
      namespaze = v28->_1.namespaze;
      data = v28->_1.byval_arg.data;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
      *(_QWORD *)&v50.fields.currentCryptoKey = namespaze;
      *(_QWORD *)&v50.fields.fakeValue = data;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v50, 0LL);
      if ( svtId == (_DWORD)Instance )
        break;
      max_length = userSvtCollList->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_16;
    }
    if ( v25 >= userSvtCollList->max_length )
LABEL_55:
      sub_1BCAA44(Instance, v23);
    v33 = *v29;
    *p_userSvtCollectionEntity_k__BackingField = *v29;
    sub_1BCA784(&this->fields._userSvtCollectionEntity_k__BackingField, v33);
  }
LABEL_16:
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_52;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v34 = *p_userSvtCollectionEntity_k__BackingField;
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_54;
  v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v37 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
  *(_QWORD *)&v51.fields.currentCryptoKey = v37;
  *(_QWORD *)&v51.fields.fakeValue = v36;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v51, 0LL);
  if ( !v35 )
    goto LABEL_54;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v35,
             Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1BCA784(&this->fields.servantEntity, Entity);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_54;
  v39 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
               (*p_userSvtCollectionEntity_k__BackingField)->fields.svtId,
               0LL);
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_54;
  if ( !v39 )
    goto LABEL_54;
  Instance = (__int64)ServantLimitMaster__GetEntity(
                        v39,
                        Instance,
                        (*p_userSvtCollectionEntity_k__BackingField)->fields.maxLimitCount,
                        0LL);
  if ( !Instance )
    goto LABEL_54;
  servantEntity = this->fields.servantEntity;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !servantEntity )
    goto LABEL_54;
  classId = servantEntity->fields.classId;
  userSvtCollectionEntity_k__BackingField = this->fields._userSvtCollectionEntity_k__BackingField;
  this->fields.classId = classId;
  if ( !userSvtCollectionEntity_k__BackingField )
    goto LABEL_54;
  status = userSvtCollectionEntity_k__BackingField->fields.status;
  svtCostumeEntity_k__BackingField = this->fields._svtCostumeEntity_k__BackingField;
  this->fields.collectiionStatus = status;
  if ( !svtCostumeEntity_k__BackingField
    || (this->fields.sortValue2 = -svtCostumeEntity_k__BackingField->fields.costumeCollectionNo,
        (Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___),
        !*p_userSvtCollectionEntity_k__BackingField)
    || (v45 = (ServantCostumeReleaseMaster_o *)Instance,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                     (*p_userSvtCollectionEntity_k__BackingField)->fields.svtId,
                     0LL),
        !svtCostumeEntity)
    || !v45 )
  {
LABEL_54:
    sub_1BCAA3C(Instance, v23);
  }
  Instance = ServantCostumeReleaseMaster__checkItemHaving(v45, Instance, svtCostumeEntity->fields.id, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v46 = this->fields._userSvtCollectionEntity_k__BackingField;
    this->fields._costumeOpenStatus_k__BackingField = 1;
    if ( !v46 )
      goto LABEL_54;
    costumeIds = v46->fields.costumeIds;
    if ( costumeIds )
    {
      v48 = costumeIds->max_length;
      if ( v48 >= 1 )
      {
        v49 = 0;
        while ( 1 )
        {
          if ( v49 >= costumeIds->max_length )
            goto LABEL_55;
          if ( costumeIds->m_Items[v49 + 1] == svtCostumeEntity->fields.id )
            break;
          if ( v48 == ++v49 )
            goto LABEL_44;
        }
        this->fields._costumeOpenStatus_k__BackingField = 2;
      }
    }
  }
LABEL_44:
  if ( ServantCostumeEntity__checkFlag(svtCostumeEntity, 16, 0LL) )
  {
    Instance = (__int64)*p_userSvtCollectionEntity_k__BackingField;
    if ( !*p_userSvtCollectionEntity_k__BackingField )
      goto LABEL_54;
    if ( !UserServantCollectionEntity__IsCostumeGet(
            (UserServantCollectionEntity_o *)Instance,
            svtCostumeEntity->fields.id,
            0LL) )
      this->fields.isNotCostumeGet = 1;
  }
  if ( ServantCostumeEntity__checkFlag(svtCostumeEntity, 32, 0LL)
    && !ServantCostumeReleaseMaster__checkItemHaving(
          v45,
          svtCostumeEntity->fields.svtId,
          svtCostumeEntity->fields.id,
          0LL)
    && this->fields.collectiionStatus )
  {
    this->fields.isSecret = 1;
  }
LABEL_52:
  Instance = (__int64)*p_iconLabelInfo;
  if ( !*p_iconLabelInfo )
    goto LABEL_54;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


bool __fastcall MaterialCostumeServantListViewItem__IsMatchFilter(
        MaterialCostumeServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  FilterKindList_c *v7; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  int32_t costumeOpenStatus_k__BackingField; // w8
  int32_t v15; // w1
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x0
  int32_t collectiionStatus; // w8
  int32_t v19; // w1
  FilterKindList_c *v20; // x0
  ListViewSort_FilterKind_array *v21; // x21

  if ( (byte_4B117A5 & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, sort, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5, v6);
    byte_4B117A5 = 1;
  }
  if ( !sort )
    return 0;
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v7 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v7->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_43;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0LL) )
  {
    v10 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
      v10 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v10->static_fields->ClassFilterKindList;
    if ( ClassGroupFilterKindList )
    {
      v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                               ClassGroupFilterKindList,
                                               (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_15;
    }
LABEL_43:
    sub_1BCAA3C(ClassGroupFilterKindList, sort);
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
    return 0;
LABEL_15:
  v12 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v12->static_fields->MaterialServantCostumeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_43;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL) )
    goto LABEL_24;
  costumeOpenStatus_k__BackingField = this->fields._costumeOpenStatus_k__BackingField;
  if ( costumeOpenStatus_k__BackingField )
  {
    if ( (unsigned int)(costumeOpenStatus_k__BackingField - 1) > 1 )
      goto LABEL_24;
    v15 = 33;
  }
  else
  {
    v15 = 32;
  }
  if ( !ListViewSort__GetFilter(sort, v15, 0LL) )
    return 0;
LABEL_24:
  v16 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v16 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v16->static_fields->CollectionStateFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_43;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL) )
    goto LABEL_35;
  collectiionStatus = this->fields.collectiionStatus;
  if ( collectiionStatus == 2 )
  {
    v19 = 12;
  }
  else if ( collectiionStatus == 1 )
  {
    v19 = 11;
  }
  else
  {
    if ( collectiionStatus )
      goto LABEL_35;
    v19 = 10;
  }
  if ( !ListViewSort__GetFilter(sort, v19, 0LL) )
    return 0;
LABEL_35:
  v20 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v20 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v20->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_43;
  v21 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v21, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v21, 0LL)
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
          IconLabelInfo__Set_38850420(iconLabelInfo, 57, costumeCollectionNo, 0, 0, 0, 0, 0, 0LL);
LABEL_12:
          LOBYTE(iconLabelInfo) = 1;
          return (char)iconLabelInfo;
        }
      }
LABEL_14:
      sub_1BCAA3C(iconLabelInfo, v6);
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
  this->fields._svtCostumeEntity_k__BackingField = value;
  sub_1BCA784(&this->fields._svtCostumeEntity_k__BackingField, value);
}


void __fastcall MaterialCostumeServantListViewItem__set_userSvtCollectionEntity(
        MaterialCostumeServantListViewItem_o *this,
        UserServantCollectionEntity_o *value,
        const MethodInfo *method)
{
  this->fields._userSvtCollectionEntity_k__BackingField = value;
  sub_1BCA784(&this->fields._userSvtCollectionEntity_k__BackingField, value);
}