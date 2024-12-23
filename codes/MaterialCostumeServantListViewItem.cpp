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
  struct IconLabelInfo_o **p_iconLabelInfo; // x21
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity_k__BackingField; // x22
  __int64 Instance; // x0
  __int64 v17; // x1
  signed int max_length; // w8
  il2cpp_array_size_t v19; // w26
  Il2CppClass **v20; // x28
  int32_t svtId; // w29
  Il2CppClass *v22; // x8
  struct UserServantCollectionEntity_o **v23; // x28
  Il2CppClass *v24; // t1
  void *data; // x24
  const char *namespaze; // x25
  struct UserServantCollectionEntity_o *v27; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x23
  __int64 v29; // x24
  __int64 v30; // x25
  ServantLimitMaster_o *v31; // x23
  struct ServantEntity_o *servantEntity; // x8
  int32_t classId; // w9
  struct UserServantCollectionEntity_o *userSvtCollectionEntity_k__BackingField; // x8
  int32_t status; // w9
  struct ServantCostumeEntity_o *svtCostumeEntity_k__BackingField; // x8
  ServantCostumeReleaseMaster_o *v37; // x23
  struct UserServantCollectionEntity_o *v38; // x8
  struct System_Int32_array *costumeIds; // x8
  int v40; // w9
  il2cpp_array_size_t v41; // w11
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4B620FD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, svtCostumeEntity);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1BE4ACC(&IconLabelInfo_TypeInfo, v10);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B620FD = 1;
  }
  v13 = (IconLabelInfo_o *)sub_1BE4D18(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0LL);
  this->fields.iconLabelInfo = v13;
  p_iconLabelInfo = &this->fields.iconLabelInfo;
  sub_1BE4A70(&this->fields.iconLabelInfo);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields._svtCostumeEntity_k__BackingField = svtCostumeEntity;
  sub_1BE4A70(&this->fields._svtCostumeEntity_k__BackingField);
  this->fields._userSvtCollectionEntity_k__BackingField = 0LL;
  p_userSvtCollectionEntity_k__BackingField = &this->fields._userSvtCollectionEntity_k__BackingField;
  Instance = sub_1BE4A70(&this->fields._userSvtCollectionEntity_k__BackingField);
  this->fields._costumeOpenStatus_k__BackingField = 0;
  if ( !userSvtCollList )
    goto LABEL_54;
  max_length = userSvtCollList->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( !svtCostumeEntity )
        goto LABEL_54;
      if ( v19 >= max_length )
        goto LABEL_55;
      v20 = &userSvtCollList->obj.klass + (int)v19;
      svtId = svtCostumeEntity->fields.svtId;
      v24 = v20[4];
      v23 = (struct UserServantCollectionEntity_o **)(v20 + 4);
      v22 = v24;
      if ( !v24 )
        goto LABEL_54;
      namespaze = v22->_1.namespaze;
      data = v22->_1.byval_arg.data;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v42.fields.currentCryptoKey = namespaze;
      *(_QWORD *)&v42.fields.fakeValue = data;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v42, 0LL);
      if ( svtId == (_DWORD)Instance )
        break;
      max_length = userSvtCollList->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_16;
    }
    if ( v19 >= userSvtCollList->max_length )
LABEL_55:
      sub_1BE4D30(Instance, v17);
    *p_userSvtCollectionEntity_k__BackingField = *v23;
    sub_1BE4A70(&this->fields._userSvtCollectionEntity_k__BackingField);
  }
LABEL_16:
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_52;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  v27 = *p_userSvtCollectionEntity_k__BackingField;
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_54;
  v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v30 = *(_QWORD *)&v27->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&v27->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v30;
  *(_QWORD *)&v43.fields.fakeValue = v29;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v43, 0LL);
  if ( !v28 )
    goto LABEL_54;
  this->fields.servantEntity = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                           v28,
                                                           Instance,
                                                           (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  sub_1BE4A70(&this->fields.servantEntity);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_54;
  v31 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
               (*p_userSvtCollectionEntity_k__BackingField)->fields.svtId,
               0LL);
  if ( !*p_userSvtCollectionEntity_k__BackingField )
    goto LABEL_54;
  if ( !v31 )
    goto LABEL_54;
  Instance = (__int64)ServantLimitMaster__GetEntity(
                        v31,
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
        (Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___),
        !*p_userSvtCollectionEntity_k__BackingField)
    || (v37 = (ServantCostumeReleaseMaster_o *)Instance,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                     (*p_userSvtCollectionEntity_k__BackingField)->fields.svtId,
                     0LL),
        !svtCostumeEntity)
    || !v37 )
  {
LABEL_54:
    sub_1BE4D28(Instance, v17);
  }
  Instance = ServantCostumeReleaseMaster__checkItemHaving(v37, Instance, svtCostumeEntity->fields.id, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v38 = this->fields._userSvtCollectionEntity_k__BackingField;
    this->fields._costumeOpenStatus_k__BackingField = 1;
    if ( !v38 )
      goto LABEL_54;
    costumeIds = v38->fields.costumeIds;
    if ( costumeIds )
    {
      v40 = costumeIds->max_length;
      if ( v40 >= 1 )
      {
        v41 = 0;
        while ( 1 )
        {
          if ( v41 >= costumeIds->max_length )
            goto LABEL_55;
          if ( costumeIds->m_Items[v41 + 1] == svtCostumeEntity->fields.id )
            break;
          if ( v40 == ++v41 )
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
          v37,
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

  if ( (byte_4B620FE & 1) == 0 )
  {
    sub_1BE4ACC(&FilterKindList_TypeInfo, sort);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_4B620FE = 1;
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
                                          (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                               (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_15;
    }
LABEL_43:
    sub_1BE4D28(ClassGroupFilterKindList, sort);
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
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
          IconLabelInfo__Set_39043324(iconLabelInfo, 57, costumeCollectionNo, 0, 0, 0, 0, 0, 0LL);
LABEL_12:
          LOBYTE(iconLabelInfo) = 1;
          return (char)iconLabelInfo;
        }
      }
LABEL_14:
      sub_1BE4D28(iconLabelInfo, v6);
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
  sub_1BE4A70(&this->fields._svtCostumeEntity_k__BackingField);
}


void __fastcall MaterialCostumeServantListViewItem__set_userSvtCollectionEntity(
        MaterialCostumeServantListViewItem_o *this,
        UserServantCollectionEntity_o *value,
        const MethodInfo *method)
{
  this->fields._userSvtCollectionEntity_k__BackingField = value;
  sub_1BE4A70(&this->fields._userSvtCollectionEntity_k__BackingField);
}