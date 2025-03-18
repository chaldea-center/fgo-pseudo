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
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  struct UserServantCollectionEntity_o *v26; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x21
  __int64 v28; // x22
  __int64 v29; // x24
  struct ServantEntity_o **p_servantEntity; // x21
  ServantLimitMaster_o *v31; // x22
  int v32; // w24
  BalanceConfig_c *v33; // x8
  UserServantMaster_o *v34; // x23
  __int64 v35; // x24
  __int64 v36; // x25
  int32_t ServantIdMashu1; // w23
  int32_t limit_count; // w2
  ServantLimitMaster_o *v39; // x0
  int32_t v40; // w1
  struct UserServantCollectionEntity_o *v41; // x8
  __int64 v42; // x23
  __int64 v43; // x24
  int32_t v44; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4C1D3F3 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitMaster___, v13);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_1C3B764(&Method_DataManager_GetMaster_UserServantMaster___, v15);
    sub_1C3B764(&DataManager_TypeInfo, v16);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1C3B764(&UserServantCollectionEntity_TypeInfo, v20);
    byte_4C1D3F3 = 1;
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
  v23 = (UserServantCollectionEntity_o *)sub_1C3B9B0(UserServantCollectionEntity_TypeInfo);
  UserServantCollectionEntity___ctor_41641948(v23, userSvtCollectionEntity, 0LL);
  if ( !materialEventLogInfo )
    goto LABEL_37;
  if ( !v23 )
    goto LABEL_37;
  v23->fields.maxLimitCount = materialEventLogInfo->fields.limit_count;
  this->fields.userSvtCollectionEntity = v23;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1C3B708(&this->fields.userSvtCollectionEntity);
  this->fields.isValentineList = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  v26 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_37;
  v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v29 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v29;
  *(_QWORD *)&v45.fields.fakeValue = v28;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v45, 0LL);
  if ( !v27 )
    goto LABEL_37;
  this->fields.servantEntity = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                           v27,
                                                           (int32_t)Instance,
                                                           (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  p_servantEntity = &this->fields.servantEntity;
  sub_1C3B708(&this->fields.servantEntity);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_37;
  v31 = (ServantLimitMaster_o *)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                       (*p_userSvtCollectionEntity)->fields.svtId,
                       0LL);
  v32 = (int)Instance;
  v33 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v33 = BalanceConfig_TypeInfo;
  }
  if ( v32 != v33->static_fields->ServantIdMashu1 )
  {
    v41 = *p_userSvtCollectionEntity;
    if ( *p_userSvtCollectionEntity )
    {
      v43 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
      v42 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v47.fields.currentCryptoKey = v43;
      *(_QWORD *)&v47.fields.fakeValue = v42;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v47, 0LL);
      if ( v31 )
      {
        limit_count = materialEventLogInfo->fields.limit_count;
        v40 = (int)Instance;
        v39 = v31;
        goto LABEL_32;
      }
    }
LABEL_37:
    sub_1C3B9C0(Instance, v21);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantMaster___);
  v34 = (UserServantMaster_o *)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v34 )
    goto LABEL_37;
  Instance = UserServantMaster__getHeroineData(v34, BalanceConfig_TypeInfo->static_fields->ServantIdMashu1, 0LL);
  if ( !Instance )
    goto LABEL_37;
  v36 = *((_QWORD *)Instance + 12);
  v35 = *((_QWORD *)Instance + 13);
  ServantIdMashu1 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v46.fields.currentCryptoKey = v36;
  *(_QWORD *)&v46.fields.fakeValue = v35;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v46, 0LL);
  if ( !v31 )
    goto LABEL_37;
  limit_count = (int)Instance;
  v39 = v31;
  v40 = ServantIdMashu1;
LABEL_32:
  Instance = ServantLimitMaster__GetEntity(v39, v40, limit_count, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_37;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_37;
  v44 = *((_DWORD *)Instance + 6);
  this->fields.info = materialEventLogInfo;
  this->fields.rarity = v44;
  this->fields.collectiionStatus = 2;
  sub_1C3B708(&this->fields.info);
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

  if ( (byte_4C1D3F4 & 1) == 0 )
  {
    sub_1C3B764(&Method_GameObjectExtensions_SafeGetComponent_UIWidget___, method);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    byte_4C1D3F4 = 1;
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
                       (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
                             (const MethodInfo_3043500 *)Method_GameObjectExtensions_SafeGetComponent_UIWidget___);
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
      sub_1C3B9C0(gameObject, v6);
    }
  }
}


void __fastcall MaterialEventLogServantListViewItem__InactiveDummy(
        MaterialEventLogServantListViewItem_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *viewObject; // x20

  if ( (byte_4C1D3F5 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1D3F5 = 1;
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

  if ( (byte_4C1D3F7 & 1) == 0 )
  {
    sub_1C3B764(&FilterKindList_TypeInfo, sort);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_4C1D3F7 = 1;
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
                                          (const MethodInfo_3672F2C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                               (const MethodInfo_3672F2C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_15;
    }
LABEL_24:
    sub_1C3B9C0(ClassGroupFilterKindList, sort);
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
                                                                       (const MethodInfo_3672F2C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  RarityFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_24;
  v13 = (ListViewSort_FilterKind_array *)ClassGroupFilterKindList;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_3672F2C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
      sub_1C3B9C0(0LL, method);
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
      IconLabelInfo__Set_39561332(iconLabelInfo, 57, collectionNo, 0, 0, 0, 0, 0, 0LL);
      return;
    }
LABEL_10:
    sub_1C3B9C0(this, sortKind);
  }
  maxLimitCount = userSvtCollectionEntity->fields.maxLimitCount;
  v6 = this->fields.iconLabelInfo;
  this->fields.sortValue1 = maxLimitCount;
  if ( !v6 )
    goto LABEL_10;
  if ( (int)maxLimitCount < 1 )
    IconLabelInfo__Clear(v6, 0LL);
  else
    IconLabelInfo__Set_39561332(v6, 9, maxLimitCount, 0, 0, 0, 0, 0, 0LL);
}


bool __fastcall MaterialEventLogServantListViewItem__SetSortValue(
        MaterialEventLogServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  _BOOL4 isDummy; // w8
  int64_t index; // x8
  struct System_String_o **p_sortStr1; // x19
  bool result; // w0

  if ( (byte_4C1D3F6 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, sort);
    byte_4C1D3F6 = 1;
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
  this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
  p_sortStr1 = &this->fields.sortStr1;
  sub_1C3B708(p_sortStr1);
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