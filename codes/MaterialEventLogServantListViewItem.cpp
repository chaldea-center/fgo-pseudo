// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogServantListViewItem___ctor(
        MaterialEventLogServantListViewItem_o *this,
        int32_t index,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t kind,
        MaterialEventLogListViewItem_Info_o *materialEventLogInfo,
        bool isDummy,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  bool v22; // w8
  UserServantCollectionEntity_o *v23; // x22
  void *Instance; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  struct UserServantCollectionEntity_o *v28; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x21
  __int64 v30; // x22
  __int64 v31; // x24
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x21
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  ServantLimitMaster_o *v36; // x22
  int v37; // w24
  BalanceConfig_c *v38; // x8
  UserServantMaster_o *v39; // x23
  __int64 v40; // x24
  __int64 v41; // x25
  int32_t ServantIdMashu1; // w23
  int32_t limit_count; // w2
  ServantLimitMaster_o *v44; // x0
  int32_t v45; // w1
  struct UserServantCollectionEntity_o *v46; // x8
  __int64 v47; // x23
  __int64 v48; // x24
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  int32_t v51; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_49B6399 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantLimitMaster___, v13);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserServantMaster___, v15);
    sub_1B4CF90(&DataManager_TypeInfo, v16);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B4CF90(&UserServantCollectionEntity_TypeInfo, v20);
    byte_49B6399 = 1;
  }
  MaterialCollectionServantListViewItem___ctor(
    (MaterialCollectionServantListViewItem_o *)this,
    index,
    userSvtCollectionEntity,
    kind,
    0LL);
  this->fields.index = index;
  this->fields.displayKind = kind;
  if ( isDummy )
  {
    v22 = 1;
    goto LABEL_35;
  }
  v23 = (UserServantCollectionEntity_o *)sub_1B4D1DC(UserServantCollectionEntity_TypeInfo);
  UserServantCollectionEntity___ctor_40768420(v23, userSvtCollectionEntity, 0LL);
  if ( !materialEventLogInfo )
    goto LABEL_37;
  if ( !v23 )
    goto LABEL_37;
  v23->fields.maxLimitCount = materialEventLogInfo->fields.limit_count;
  this->fields.userSvtCollectionEntity = v23;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, (int32_t)v23, v25, v26);
  this->fields.isValentineList = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
  v28 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_37;
  v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v31 = *(_QWORD *)&v28->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&v28->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v52.fields.currentCryptoKey = v31;
  *(_QWORD *)&v52.fields.fakeValue = v30;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v52, 0LL);
  if ( !v29 )
    goto LABEL_37;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v29,
             (int32_t)Instance,
             (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v34, v35);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_37;
  v36 = (ServantLimitMaster_o *)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                       (*p_userSvtCollectionEntity)->fields.svtId,
                       0LL);
  v37 = (int)Instance;
  v38 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v38 = BalanceConfig_TypeInfo;
  }
  if ( v37 != v38->static_fields->ServantIdMashu1 )
  {
    v46 = *p_userSvtCollectionEntity;
    if ( *p_userSvtCollectionEntity )
    {
      v48 = *(_QWORD *)&v46->fields.svtId.fields.currentCryptoKey;
      v47 = *(_QWORD *)&v46->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v54.fields.currentCryptoKey = v48;
      *(_QWORD *)&v54.fields.fakeValue = v47;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v54, 0LL);
      if ( v36 )
      {
        limit_count = materialEventLogInfo->fields.limit_count;
        v45 = (int)Instance;
        v44 = v36;
        goto LABEL_32;
      }
    }
LABEL_37:
    sub_1B4D1EC(Instance, v21);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserServantMaster___);
  v39 = (UserServantMaster_o *)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v39 )
    goto LABEL_37;
  Instance = UserServantMaster__getHeroineData(v39, BalanceConfig_TypeInfo->static_fields->ServantIdMashu1, 0LL);
  if ( !Instance )
    goto LABEL_37;
  v41 = *((_QWORD *)Instance + 12);
  v40 = *((_QWORD *)Instance + 13);
  ServantIdMashu1 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v53.fields.currentCryptoKey = v41;
  *(_QWORD *)&v53.fields.fakeValue = v40;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v53, 0LL);
  if ( !v36 )
    goto LABEL_37;
  limit_count = (int)Instance;
  v44 = v36;
  v45 = ServantIdMashu1;
LABEL_32:
  Instance = ServantLimitMaster__GetEntity(v44, v45, limit_count, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_37;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_37;
  v51 = *((_DWORD *)Instance + 6);
  this->fields.info = materialEventLogInfo;
  this->fields.rarity = v51;
  this->fields.collectiionStatus = 2;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.info, (int32_t)materialEventLogInfo, v49, v50);
  v22 = 0;
  this->fields.sortValue2 = 0LL;
LABEL_35:
  Instance = this->fields.iconLabelInfo;
  this->fields.isDummy = v22;
  if ( !Instance )
    goto LABEL_37;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


void __fastcall MaterialEventLogServantListViewItem__DummyVisible(
        MaterialEventLogServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *viewObject; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v9; // x0

  if ( (byte_49B639A & 1) == 0 )
  {
    sub_1B4CF90(&Method_GameObjectExtensions_SafeGetComponent_UIWidget___, method);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v4);
    byte_49B639A = 1;
  }
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
    return;
  gameObject = (UnityEngine_Component_o *)this->fields.viewObject;
  if ( !gameObject )
    goto LABEL_32;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( this->fields.isDummy )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.viewObject;
    if ( !gameObject )
      goto LABEL_32;
    ListViewObject__SetVisible((ListViewObject_o *)gameObject, 0, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(
                                              (UnityEngine_Object_o *)Component_object,
                                              0LL,
                                              0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !this->fields.isCoercionInactive )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.viewObject;
        if ( !gameObject )
          goto LABEL_32;
        v9 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             v9,
                             (const MethodInfo_2F54F2C *)Method_GameObjectExtensions_SafeGetComponent_UIWidget___);
      }
      goto LABEL_25;
    }
    if ( this->fields.isCoercionInactive )
      goto LABEL_25;
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      goto LABEL_25;
    gameObject = (UnityEngine_Component_o *)this->fields.viewObject;
    if ( !gameObject )
      goto LABEL_32;
    gameObject = (UnityEngine_Component_o *)ListViewObject__GetVisible((ListViewObject_o *)gameObject, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      goto LABEL_25;
  }
  if ( !Component_object )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0LL);
LABEL_25:
  if ( this->fields.isCoercionInactive )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)Component_object,
                                              0LL,
                                              0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( Component_object )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
        return;
      }
LABEL_32:
      sub_1B4D1EC(gameObject, v6);
    }
  }
}


void __fastcall MaterialEventLogServantListViewItem__InactiveDummy(
        MaterialEventLogServantListViewItem_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *viewObject; // x20

  if ( (byte_49B639B & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B639B = 1;
  }
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
    this->fields.isCoercionInactive = 1;
}


bool __fastcall MaterialEventLogServantListViewItem__IsItemMatchFilter(
        MaterialEventLogServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(MaterialEventLogServantListViewItem_o *, ListViewSort_o *, void *))this->klass->vtable._5_IsMatchFilter.method)(
           this,
           sort,
           this->klass[1]._1.image);
}


bool __fastcall MaterialEventLogServantListViewItem__IsMatchFilter(
        MaterialEventLogServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  return !this->fields.displayKind && MaterialEventLogServantListViewItem__IsMatchServantFilter(this, sort, method);
}


bool __fastcall MaterialEventLogServantListViewItem__IsMatchServantFilter(
        MaterialEventLogServantListViewItem_o *this,
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
  System_Collections_Generic_List_T__o *RarityFilterKindList; // x8
  ListViewSort_FilterKind_array *v13; // x21
  ListViewSort_FilterKind_array *v14; // x0

  if ( (byte_49B639D & 1) == 0 )
  {
    sub_1B4CF90(&FilterKindList_TypeInfo, sort);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_49B639D = 1;
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
    goto LABEL_24;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                               (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_15;
    }
LABEL_24:
    sub_1B4D1EC(ClassGroupFilterKindList, sort);
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
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v11->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_24;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  RarityFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_24;
  v13 = (ListViewSort_FilterKind_array *)ClassGroupFilterKindList;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v13, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall MaterialEventLogServantListViewItem__SetDummy(
        MaterialEventLogServantListViewItem_o *this,
        const MethodInfo *method)
{
  ListViewObject_o *viewObject; // x0

  if ( this->fields.isDummy )
  {
    viewObject = this->fields.viewObject;
    if ( !viewObject )
      sub_1B4D1EC(0LL, method);
    ListViewObject__SetVisible(viewObject, 0, 0LL);
  }
}


void __fastcall MaterialEventLogServantListViewItem__SetIndex(
        MaterialEventLogServantListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  this->fields.index = index;
}


void __fastcall MaterialEventLogServantListViewItem__SetServantSortParam(
        MaterialEventLogServantListViewItem_o *this,
        int32_t sortKind,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int64_t maxLimitCount; // x2
  IconLabelInfo_o *v6; // x8
  IconLabelInfo_o *iconLabelInfo; // x8
  int32_t collectionNo; // w2

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_10;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( !userSvtCollectionEntity )
    goto LABEL_10;
  if ( sortKind != 9 )
  {
    iconLabelInfo = this->fields.iconLabelInfo;
    collectionNo = servantEntity->fields.collectionNo;
    this->fields.sortValue1 = this->fields.rarity;
    if ( iconLabelInfo )
    {
      IconLabelInfo__Set_38677548(iconLabelInfo, 57, collectionNo, 0, 0, 0, 0, 0, 0LL);
      return;
    }
LABEL_10:
    sub_1B4D1EC(this, sortKind);
  }
  maxLimitCount = userSvtCollectionEntity->fields.maxLimitCount;
  v6 = this->fields.iconLabelInfo;
  this->fields.sortValue1 = maxLimitCount;
  if ( !v6 )
    goto LABEL_10;
  if ( (int)maxLimitCount < 1 )
    IconLabelInfo__Clear(v6, 0LL);
  else
    IconLabelInfo__Set_38677548(v6, 9, maxLimitCount, 0, 0, 0, 0, 0, 0LL);
}


bool __fastcall MaterialEventLogServantListViewItem__SetSortValue(
        MaterialEventLogServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  _BOOL4 isDummy; // w8
  int64_t index; // x8
  int32_t v8; // w1
  struct System_String_o **p_sortStr1; // x19
  bool result; // w0

  if ( (byte_49B639C & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_1/*""*/, sort);
    byte_49B639C = 1;
  }
  isDummy = this->fields.isDummy;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = 0LL;
  if ( !isDummy
    && (((__int64 (__fastcall *)(MaterialEventLogServantListViewItem_o *, ListViewSort_o *, void *))this->klass->vtable._5_IsMatchFilter.method)(
          this,
          sort,
          this->klass[1]._1.image) & 1) == 0 )
  {
    return 0;
  }
  index = this->fields.index;
  this->fields.sortValue0 = 0LL;
  this->fields.sortValue0B = 0LL;
  this->fields.sortValue1 = index;
  v8 = (int)StringLiteral_1/*""*/;
  this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
  p_sortStr1 = &this->fields.sortStr1;
  sub_1B4CF34((CGThumbnailListItem_o *)p_sortStr1, v8, (int32_t)method, v3);
  result = 1;
  p_sortStr1[1] = 0LL;
  p_sortStr1[2] = 0LL;
  *((_WORD *)p_sortStr1 + 16) = 0;
  p_sortStr1[3] = 0LL;
  return result;
}


MaterialEventLogListViewItem_Info_o *__fastcall MaterialEventLogServantListViewItem__get_Info(
        MaterialEventLogServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.info;
}


void __fastcall MaterialEventLogServantListViewItem__initCoercionInactive(
        MaterialEventLogServantListViewItem_o *this,
        const MethodInfo *method)
{
  this->fields.isCoercionInactive = 0;
}