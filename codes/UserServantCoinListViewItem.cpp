void UserServantCoinListViewItem___ctor(
        UserServantCoinListViewItem_o *this,
        int32_t index,
        UserSvtCoinEntity_o *userSvtCoinEnt,
        const MethodInfo *method)
{
  IconLabelInfo_o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x1
  IconLabelInfo_o *iconLabelInfo; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct UserSvtCoinEntity_o **p_userSvtCoinEntity; // x21
  struct UserSvtCoinEntity_o *userSvtCoinEntity; // x8
  struct UserSvtCoinEntity_o *v24; // x8
  ServantEntity_o **p_servantEntity; // x20
  Il2CppObject *Master_object; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  ServantLimitMaster_o *v28; // x22
  __int64 v29; // x23
  __int64 v30; // x24
  struct ServantLimitEntity_o *servantLimitEntity; // x8
  int32_t rarity; // w9
  struct UserSvtCoinEntity_o *v33; // x8
  int32_t svtId; // w20
  BalanceConfig_c *v35; // x0
  UserServantMaster_o *v36; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4D27DB3 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_1C94098(&IconLabelInfo_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D27DB3 = 1;
  }
  v7 = (IconLabelInfo_o *)sub_1C942E4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v7, 0);
  this->fields.iconLabelInfo = v7;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  iconLabelInfo = this->fields.iconLabelInfo;
  if ( !iconLabelInfo )
    goto LABEL_38;
  IconLabelInfo__Clear(iconLabelInfo, 0);
  if ( !userSvtCoinEnt )
    return;
  this->fields.userSvtCoinEntity = userSvtCoinEnt;
  p_userSvtCoinEntity = &this->fields.userSvtCoinEntity;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtCoinEntity,
    (int32_t)userSvtCoinEnt,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.rarity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  iconLabelInfo = (IconLabelInfo_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  userSvtCoinEntity = this->fields.userSvtCoinEntity;
  if ( !userSvtCoinEntity )
    goto LABEL_38;
  if ( !iconLabelInfo )
    goto LABEL_38;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)iconLabelInfo,
    (Il2CppObject **)&this->fields.svtCoinEntity,
    userSvtCoinEntity->fields.svtId,
    (const MethodInfo_345B50C *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
  iconLabelInfo = (IconLabelInfo_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  v24 = this->fields.userSvtCoinEntity;
  if ( !v24 || !iconLabelInfo )
    goto LABEL_38;
  p_servantEntity = &this->fields.servantEntity;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)iconLabelInfo,
    (Il2CppObject **)&this->fields.servantEntity,
    v24->fields.svtId,
    (const MethodInfo_345B50C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
  }
  iconLabelInfo = (IconLabelInfo_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
  iconLabelInfo = (IconLabelInfo_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !EntityDefinitely )
    goto LABEL_38;
  v28 = (ServantLimitMaster_o *)iconLabelInfo;
  v30 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v30;
  *(_QWORD *)&v37.fields.fakeValue = v29;
  iconLabelInfo = (IconLabelInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v37, 0);
  if ( !v28 )
    goto LABEL_38;
  ServantLimitMaster__TryGetEntity(
    v28,
    &this->fields.servantLimitEntity,
    (int32_t)iconLabelInfo,
    EntityDefinitely->fields.maxLimitCount,
    0);
  if ( !*p_servantEntity )
    return;
  iconLabelInfo = (IconLabelInfo_o *)ServantEntity__getName_43443472(
                                       *p_servantEntity,
                                       &this->fields.sortRuby,
                                       EntityDefinitely->fields.maxLimitCount,
                                       0);
  servantLimitEntity = this->fields.servantLimitEntity;
  if ( !servantLimitEntity )
    goto LABEL_38;
  rarity = servantLimitEntity->fields.rarity;
  v33 = this->fields.userSvtCoinEntity;
  this->fields.rarity = rarity;
  if ( !v33 )
    goto LABEL_38;
  svtId = v33->fields.svtId;
  v35 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v35 = BalanceConfig_TypeInfo;
  }
  if ( svtId == v35->static_fields->ServantIdMashu1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    iconLabelInfo = (IconLabelInfo_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantMaster___);
    v36 = (UserServantMaster_o *)iconLabelInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( v36 )
    {
      iconLabelInfo = (IconLabelInfo_o *)UserServantMaster__getHeroineData(
                                           v36,
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
    sub_1C942F0(iconLabelInfo, v14);
  }
}


bool UserServantCoinListViewItem__IsMatchFilter(
        UserServantCoinListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x21

  if ( (byte_4D27DB5 & 1) == 0 )
  {
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4D27DB5 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_23;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_23;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v7->static_fields->ClassFilterKindList;
    if ( ClassGroupFilterKindList )
    {
      v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                              ClassGroupFilterKindList,
                                              (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
      {
        return 0;
      }
      goto LABEL_15;
    }
LABEL_23:
    sub_1C942F0(ClassGroupFilterKindList, sort);
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
    return 0;
LABEL_15:
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v9->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_23;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v10, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


bool UserServantCoinListViewItem__SetSortValue(
        UserServantCoinListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  UserServantCoinListViewItem_c *klass; // x8
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  char v13; // w8
  IconLabelInfo_o *iconLabelInfo; // x0
  int32_t sortKind; // w8
  int64_t v16; // x8
  struct System_String_o *sortRuby; // x1
  GrandQuestFolderBoardItem_o *p_sortStr1; // x20
  int64_t userSvtCoinEntity; // x8
  int64_t sortValue1B; // x8
  int64_t v21; // x8
  int32_t v22; // w1
  GrandQuestFolderBoardItem_o *v23; // x19
  int64_t v24; // x8
  int32_t v25; // w2
  int64_t rarity; // x8
  int32_t v27; // w1
  int64_t servantEntity; // x8

  if ( (byte_4D27DB4 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D27DB4 = 1;
  }
  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  v13 = ((__int64 (__fastcall *)(UserServantCoinListViewItem_o *, ListViewSort_o *, const MethodInfo *))klass->vtable._5_IsMatchFilter.methodPtr)(
          this,
          sort,
          klass->vtable._5_IsMatchFilter.method);
  iconLabelInfo = 0;
  if ( (v13 & 1) != 0 )
  {
    if ( !sort )
      goto LABEL_33;
    sortKind = sort->fields.sortKind;
    if ( sortKind <= 14 )
    {
      if ( sortKind == 2 )
      {
        rarity = this->fields.rarity;
        this->fields.sortValue0B = 0;
        this->fields.sortValue1 = rarity;
        v27 = StringLiteral_1/*""*/;
        this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.sortStr1, v27, v7, v8, v9, v10, v11, v12);
        servantEntity = (int64_t)this->fields.servantEntity;
        if ( servantEntity )
        {
          v25 = *(_DWORD *)(servantEntity + 208);
          servantEntity = v25;
        }
        else
        {
          v25 = 0;
        }
        iconLabelInfo = this->fields.iconLabelInfo;
        this->fields.sortValue1B = servantEntity;
        if ( !iconLabelInfo )
          goto LABEL_33;
LABEL_30:
        IconLabelInfo__Set_41670428(iconLabelInfo, 57, v25, 0, 0, 0, 0, 0, 0, 0);
        goto LABEL_31;
      }
      if ( sortKind == 14 )
      {
        userSvtCoinEntity = (int64_t)this->fields.userSvtCoinEntity;
        this->fields.sortValue0B = 0;
        if ( userSvtCoinEntity )
          userSvtCoinEntity = *(int *)(userSvtCoinEntity + 28);
        this->fields.sortValue1 = userSvtCoinEntity;
        LODWORD(sortRuby) = StringLiteral_1/*""*/;
        this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
        p_sortStr1 = (GrandQuestFolderBoardItem_o *)&this->fields.sortStr1;
LABEL_15:
        sub_1C9403C(p_sortStr1, (int32_t)sortRuby, v7, v8, v9, v10, v11, v12);
        sortValue1B = p_sortStr1->fields.sortValue1B;
        if ( sortValue1B )
          sortValue1B = *(int *)(sortValue1B + 208);
        iconLabelInfo = this->fields.iconLabelInfo;
        this->fields.sortValue1B = sortValue1B;
        if ( iconLabelInfo )
        {
          IconLabelInfo__Clear(iconLabelInfo, 0);
LABEL_31:
          LOBYTE(iconLabelInfo) = 1;
          return (char)iconLabelInfo;
        }
LABEL_33:
        sub_1C942F0(iconLabelInfo, v6);
      }
    }
    else if ( sortKind == 26 )
    {
      v16 = (int64_t)this->fields.servantEntity;
      this->fields.sortValue0B = 0;
      if ( v16 )
        v16 = -*(_DWORD *)(v16 + 212);
      sortRuby = this->fields.sortRuby;
      this->fields.sortStr1 = sortRuby;
      p_sortStr1 = (GrandQuestFolderBoardItem_o *)&this->fields.sortStr1;
      this->fields.sortValue1 = v16;
      goto LABEL_15;
    }
    v21 = (int64_t)this->fields.servantEntity;
    this->fields.sortValue0B = 0;
    if ( v21 )
      v21 = *(int *)(v21 + 208);
    this->fields.sortValue1 = v21;
    v22 = StringLiteral_1/*""*/;
    this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
    v23 = (GrandQuestFolderBoardItem_o *)&this->fields.sortStr1;
    sub_1C9403C(v23, v22, v7, v8, v9, v10, v11, v12);
    v24 = v23->fields.sortValue1B;
    iconLabelInfo = (IconLabelInfo_o *)v23->fields.viewObject;
    v23->monitor = 0;
    if ( v24 )
    {
      v25 = *(_DWORD *)(v24 + 208);
      if ( !iconLabelInfo )
        goto LABEL_33;
    }
    else
    {
      v25 = 0;
      if ( !iconLabelInfo )
        goto LABEL_33;
    }
    goto LABEL_30;
  }
  return (char)iconLabelInfo;
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