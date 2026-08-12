void UserServantCoinListViewItem___ctor(
        UserServantCoinListViewItem_o *this,
        int32_t index,
        UserSvtCoinEntity_o *userSvtCoinEnt,
        const MethodInfo *method)
{
  IconLabelInfo_o *v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  IconLabelInfo_o *iconLabelInfo; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct UserSvtCoinEntity_o **p_userSvtCoinEntity; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  DataManager_c *v25; // x0
  struct UserSvtCoinEntity_o *userSvtCoinEntity; // x8
  struct UserSvtCoinEntity_o *v27; // x8
  __int64 v28; // x2
  Il2CppObject *Master_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x20
  __int64 v31; // x2
  ServantLimitMaster_o *v32; // x21
  __int64 v33; // x22
  __int64 v34; // x23
  ServantEntity_o *servantEntity; // x0
  __int64 v36; // x2
  struct ServantLimitEntity_o *servantLimitEntity; // x8
  int32_t rarity; // w9
  struct UserSvtCoinEntity_o *v39; // x8
  int32_t svtId; // w20
  BalanceConfig_c *v41; // x0
  __int64 v42; // x2
  UserServantMaster_o *v43; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_596BC97 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596BC97 = 1;
  }
  v7 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v7, 0);
  this->fields.iconLabelInfo = v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  iconLabelInfo = this->fields.iconLabelInfo;
  if ( !iconLabelInfo )
    goto LABEL_38;
  IconLabelInfo__Clear(iconLabelInfo, 0);
  if ( !userSvtCoinEnt )
    return;
  this->fields.userSvtCoinEntity = userSvtCoinEnt;
  p_userSvtCoinEntity = &this->fields.userSvtCoinEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtCoinEntity,
    (int32_t)userSvtCoinEnt,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v25 = DataManager_TypeInfo;
  this->fields.rarity = 0;
  if ( !*(&v25->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v25, v23, v24);
  iconLabelInfo = (IconLabelInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  userSvtCoinEntity = this->fields.userSvtCoinEntity;
  if ( !userSvtCoinEntity )
    goto LABEL_38;
  if ( !iconLabelInfo )
    goto LABEL_38;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)iconLabelInfo,
    (Il2CppObject **)&this->fields.svtCoinEntity,
    userSvtCoinEntity->fields.svtId,
    (const MethodInfo_3F10B80 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
  iconLabelInfo = (IconLabelInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  v27 = this->fields.userSvtCoinEntity;
  if ( !v27 || !iconLabelInfo )
    goto LABEL_38;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)iconLabelInfo,
    (Il2CppObject **)&this->fields.servantEntity,
    v27->fields.svtId,
    (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14, v28);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  iconLabelInfo = (IconLabelInfo_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14, v28);
    iconLabelInfo = (IconLabelInfo_o *)NetworkManager_TypeInfo;
  }
  if ( !*p_userSvtCoinEntity )
    goto LABEL_38;
  if ( !Master_object )
    goto LABEL_38;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       *(_QWORD *)(*(_QWORD *)&iconLabelInfo[3].fields.iconKind + 64LL),
                       (*p_userSvtCoinEntity)->fields.svtId,
                       0);
  iconLabelInfo = (IconLabelInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !EntityDefinitely )
    goto LABEL_38;
  v32 = (ServantLimitMaster_o *)iconLabelInfo;
  v33 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v31);
  *(_QWORD *)&v44.fields.currentCryptoKey = v33;
  *(_QWORD *)&v44.fields.fakeValue = v34;
  iconLabelInfo = (IconLabelInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v44, 0);
  if ( !v32 )
    goto LABEL_38;
  ServantLimitMaster__TryGetEntity(
    v32,
    &this->fields.servantLimitEntity,
    (int32_t)iconLabelInfo,
    EntityDefinitely->fields.maxLimitCount,
    0);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return;
  iconLabelInfo = (IconLabelInfo_o *)ServantEntity__getName_49690872(
                                       servantEntity,
                                       &this->fields.sortRuby,
                                       EntityDefinitely->fields.maxLimitCount,
                                       0);
  servantLimitEntity = this->fields.servantLimitEntity;
  if ( !servantLimitEntity )
    goto LABEL_38;
  rarity = servantLimitEntity->fields.rarity;
  v39 = this->fields.userSvtCoinEntity;
  this->fields.rarity = rarity;
  if ( !v39 )
    goto LABEL_38;
  svtId = v39->fields.svtId;
  v41 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14, v36);
    v41 = BalanceConfig_TypeInfo;
  }
  if ( svtId == v41->static_fields->ServantIdMashu1 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v36);
    iconLabelInfo = (IconLabelInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
    v43 = (UserServantMaster_o *)iconLabelInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14, v42);
    if ( v43 )
    {
      iconLabelInfo = (IconLabelInfo_o *)UserServantMaster__getHeroineData(
                                           v43,
                                           BalanceConfig_TypeInfo->static_fields->ServantIdMashu1,
                                           0);
      if ( iconLabelInfo )
      {
        iconLabelInfo = (IconLabelInfo_o *)UserServantEntity__GetOverwriteStatus(
                                             (UserServantEntity_o *)iconLabelInfo,
                                             0,
                                             0);
        if ( iconLabelInfo )
        {
          this->fields.rarity = iconLabelInfo->fields.adjustData;
          return;
        }
      }
    }
LABEL_38:
    sub_2213CDC(iconLabelInfo, v14);
  }
}


bool UserServantCoinListViewItem__IsMatchFilter(
        UserServantCoinListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  __int64 v7; // x2
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  __int64 v10; // x2
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x21

  if ( (byte_596BC99 & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_596BC99 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_23;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_23;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v8 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v7);
      v8 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v8->static_fields->ClassFilterKindList;
    if ( ClassGroupFilterKindList )
    {
      v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                              ClassGroupFilterKindList,
                                              (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
      {
        return 0;
      }
      goto LABEL_15;
    }
LABEL_23:
    sub_2213CDC(ClassGroupFilterKindList, sort);
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
    return 0;
LABEL_15:
  v11 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v10);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v11->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_23;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v12, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


bool UserServantCoinListViewItem__SetSortValue(
        UserServantCoinListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  UserServantCoinListViewItem_c *klass; // x8
  IconLabelInfo_o *iconLabelInfo; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  char v14; // w19
  int32_t sortKind; // w8
  int64_t userSvtCoinEntity; // x8
  struct System_String_o *sortRuby; // x1
  int64_t v18; // x8
  struct ServantEntity_o *collectionNo; // x8
  int32_t v20; // w1
  MissionNaviTransitionBoardItem_o *p_sortStr1; // x20
  int64_t sortValue1B; // x8
  int32_t v23; // w2
  int32_t v24; // w1
  int64_t rarity; // x8
  int64_t servantEntity; // x8

  if ( (byte_596BC98 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BC98 = 1;
  }
  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  iconLabelInfo = (IconLabelInfo_o *)((__int64 (__fastcall *)(UserServantCoinListViewItem_o *, ListViewSort_o *, const MethodInfo *))klass->vtable._5_IsMatchFilter.methodPtr)(
                                       this,
                                       sort,
                                       klass->vtable._5_IsMatchFilter.method);
  v14 = (char)iconLabelInfo;
  if ( ((unsigned __int8)iconLabelInfo & 1) != 0 )
  {
    if ( !sort )
      goto LABEL_32;
    sortKind = sort->fields.sortKind;
    if ( sortKind <= 14 )
    {
      if ( sortKind == 2 )
      {
        v24 = (int)StringLiteral_1/*""*/;
        this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
        rarity = this->fields.rarity;
        this->fields.sortValue0B = 0;
        this->fields.sortValue1 = rarity;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sortStr1, v24, v8, v9, v10, v11, v12, v13);
        servantEntity = (int64_t)this->fields.servantEntity;
        if ( servantEntity )
        {
          v23 = *(_DWORD *)(servantEntity + 208);
          servantEntity = v23;
        }
        else
        {
          v23 = 0;
        }
        iconLabelInfo = this->fields.iconLabelInfo;
        this->fields.sortValue1B = servantEntity;
        if ( !iconLabelInfo )
          goto LABEL_32;
LABEL_30:
        IconLabelInfo__Set_47880948(iconLabelInfo, 57, v23, 0, 0, 0, 0, 0, 0, 0);
        return v14 & 1;
      }
      if ( sortKind == 14 )
      {
        userSvtCoinEntity = (int64_t)this->fields.userSvtCoinEntity;
        this->fields.sortValue0B = 0;
        if ( userSvtCoinEntity )
          userSvtCoinEntity = *(int *)(userSvtCoinEntity + 28);
        sortRuby = (struct System_String_o *)StringLiteral_1/*""*/;
LABEL_15:
        this->fields.sortStr1 = sortRuby;
        this->fields.sortValue1 = userSvtCoinEntity;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.sortStr1,
          (int32_t)sortRuby,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        v18 = (int64_t)this->fields.servantEntity;
        if ( v18 )
          v18 = *(int *)(v18 + 208);
        iconLabelInfo = this->fields.iconLabelInfo;
        this->fields.sortValue1B = v18;
        if ( iconLabelInfo )
        {
          IconLabelInfo__Clear(iconLabelInfo, 0);
          return v14 & 1;
        }
LABEL_32:
        sub_2213CDC(iconLabelInfo, v7);
      }
    }
    else if ( sortKind == 26 )
    {
      userSvtCoinEntity = (int64_t)this->fields.servantEntity;
      this->fields.sortValue0B = 0;
      if ( userSvtCoinEntity )
        userSvtCoinEntity = -*(_DWORD *)(userSvtCoinEntity + 212);
      sortRuby = this->fields.sortRuby;
      goto LABEL_15;
    }
    collectionNo = this->fields.servantEntity;
    this->fields.sortValue0B = 0;
    if ( collectionNo )
      collectionNo = (struct ServantEntity_o *)collectionNo->fields.collectionNo;
    v20 = (int)StringLiteral_1/*""*/;
    this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
    p_sortStr1 = (MissionNaviTransitionBoardItem_o *)&this->fields.sortStr1;
    *(_QWORD *)&p_sortStr1[-1].fields._BoardType_k__BackingField = collectionNo;
    sub_2213A04(p_sortStr1, v20, v8, v9, v10, v11, v12, v13);
    sortValue1B = p_sortStr1->fields.sortValue1B;
    iconLabelInfo = (IconLabelInfo_o *)p_sortStr1->fields.viewObject;
    p_sortStr1->monitor = 0;
    if ( sortValue1B )
    {
      v23 = *(_DWORD *)(sortValue1B + 208);
      if ( !iconLabelInfo )
        goto LABEL_32;
    }
    else
    {
      v23 = 0;
      if ( !iconLabelInfo )
        goto LABEL_32;
    }
    goto LABEL_30;
  }
  return v14 & 1;
}


int32_t UserServantCoinListViewItem__get_CollectionNo(UserServantCoinListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return servantEntity->fields.collectionNo;
  else
    return 0;
}


IconLabelInfo_o *UserServantCoinListViewItem__get_IconInfo(
        UserServantCoinListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo;
}


int32_t UserServantCoinListViewItem__get_ItemId(UserServantCoinListViewItem_o *this, const MethodInfo *method)
{
  struct SvtCoinEntity_o *svtCoinEntity; // x8

  svtCoinEntity = this->fields.svtCoinEntity;
  if ( svtCoinEntity )
    return svtCoinEntity->fields.itemId;
  else
    return 0;
}


int32_t UserServantCoinListViewItem__get_Num(UserServantCoinListViewItem_o *this, const MethodInfo *method)
{
  struct UserSvtCoinEntity_o *userSvtCoinEntity; // x8

  userSvtCoinEntity = this->fields.userSvtCoinEntity;
  if ( userSvtCoinEntity )
    return userSvtCoinEntity->fields.num;
  else
    return 0;
}


int32_t UserServantCoinListViewItem__get_Rarity(UserServantCoinListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rarity;
}