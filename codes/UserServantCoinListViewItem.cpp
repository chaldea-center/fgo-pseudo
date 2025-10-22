void UserServantCoinListViewItem___ctor(
        UserServantCoinListViewItem_o *this,
        int32_t index,
        UserSvtCoinEntity_o *userSvtCoinEnt,
        const MethodInfo *method)
{
  IconLabelInfo_o *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  IconLabelInfo_o *iconLabelInfo; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UserSvtCoinEntity_o **p_userSvtCoinEntity; // x21
  struct UserSvtCoinEntity_o *userSvtCoinEntity; // x8
  struct UserSvtCoinEntity_o *v16; // x8
  ServantEntity_o **p_servantEntity; // x20
  Il2CppObject *Master_object; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  ServantLimitMaster_o *v20; // x22
  __int64 v21; // x23
  __int64 v22; // x24
  struct ServantLimitEntity_o *servantLimitEntity; // x8
  int32_t rarity; // w9
  struct UserSvtCoinEntity_o *v25; // x8
  int32_t svtId; // w20
  BalanceConfig_c *v27; // x0
  UserServantMaster_o *v28; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4C52402 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_1C3E564(&IconLabelInfo_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C52402 = 1;
  }
  v7 = (IconLabelInfo_o *)sub_1C3E7B0(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v7, 0);
  this->fields.iconLabelInfo = v7;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.iconLabelInfo, (int32_t)v7, v8, v9);
  ListViewItem___ctor_43860152((ListViewItem_o *)this, index, 0);
  iconLabelInfo = this->fields.iconLabelInfo;
  if ( !iconLabelInfo )
    goto LABEL_38;
  IconLabelInfo__Clear(iconLabelInfo, 0);
  if ( !userSvtCoinEnt )
    return;
  this->fields.userSvtCoinEntity = userSvtCoinEnt;
  p_userSvtCoinEntity = &this->fields.userSvtCoinEntity;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.userSvtCoinEntity, (int32_t)userSvtCoinEnt, v12, v13);
  this->fields.rarity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  iconLabelInfo = (IconLabelInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_SvtCoinMaster___);
  userSvtCoinEntity = this->fields.userSvtCoinEntity;
  if ( !userSvtCoinEntity )
    goto LABEL_38;
  if ( !iconLabelInfo )
    goto LABEL_38;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)iconLabelInfo,
    (Il2CppObject **)&this->fields.svtCoinEntity,
    userSvtCoinEntity->fields.svtId,
    (const MethodInfo_33B2FA4 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
  iconLabelInfo = (IconLabelInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantMaster___);
  v16 = this->fields.userSvtCoinEntity;
  if ( !v16 || !iconLabelInfo )
    goto LABEL_38;
  p_servantEntity = &this->fields.servantEntity;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)iconLabelInfo,
    (Il2CppObject **)&this->fields.servantEntity,
    v16->fields.svtId,
    (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
  iconLabelInfo = (IconLabelInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !EntityDefinitely )
    goto LABEL_38;
  v20 = (ServantLimitMaster_o *)iconLabelInfo;
  v22 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v29.fields.currentCryptoKey = v22;
  *(_QWORD *)&v29.fields.fakeValue = v21;
  iconLabelInfo = (IconLabelInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v29, 0);
  if ( !v20 )
    goto LABEL_38;
  ServantLimitMaster__TryGetEntity(
    v20,
    &this->fields.servantLimitEntity,
    (int32_t)iconLabelInfo,
    EntityDefinitely->fields.maxLimitCount,
    0);
  if ( !*p_servantEntity )
    return;
  iconLabelInfo = (IconLabelInfo_o *)ServantEntity__getName_42720812(
                                       *p_servantEntity,
                                       &this->fields.sortRuby,
                                       EntityDefinitely->fields.maxLimitCount,
                                       0);
  servantLimitEntity = this->fields.servantLimitEntity;
  if ( !servantLimitEntity )
    goto LABEL_38;
  rarity = servantLimitEntity->fields.rarity;
  v25 = this->fields.userSvtCoinEntity;
  this->fields.rarity = rarity;
  if ( !v25 )
    goto LABEL_38;
  svtId = v25->fields.svtId;
  v27 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v27 = BalanceConfig_TypeInfo;
  }
  if ( svtId == v27->static_fields->ServantIdMashu1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    iconLabelInfo = (IconLabelInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantMaster___);
    v28 = (UserServantMaster_o *)iconLabelInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( v28 )
    {
      iconLabelInfo = (IconLabelInfo_o *)UserServantMaster__getHeroineData(
                                           v28,
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
    sub_1C3E7C0(iconLabelInfo, v10);
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

  if ( (byte_4C52404 & 1) == 0 )
  {
    sub_1C3E564(&FilterKindList_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4C52404 = 1;
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
                                                                       (const MethodInfo_379C720 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                              (const MethodInfo_379C720 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
      {
        return 0;
      }
      goto LABEL_15;
    }
LABEL_23:
    sub_1C3E7C0(ClassGroupFilterKindList, sort);
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
                                           (const MethodInfo_379C720 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  const MethodInfo *v8; // x3
  char v9; // w8
  IconLabelInfo_o *iconLabelInfo; // x0
  int32_t sortKind; // w8
  int64_t v12; // x8
  struct System_String_o *sortRuby; // x1
  CGThumbnailListItem_o *p_sortStr1; // x20
  int64_t userSvtCoinEntity; // x8
  int64_t sortValue1B; // x8
  int64_t v17; // x8
  int32_t v18; // w1
  CGThumbnailListItem_o *v19; // x19
  int64_t v20; // x8
  int32_t v21; // w2
  int64_t rarity; // x8
  int32_t v23; // w1
  int64_t servantEntity; // x8

  if ( (byte_4C52403 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C52403 = 1;
  }
  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  v9 = ((__int64 (__fastcall *)(UserServantCoinListViewItem_o *, ListViewSort_o *, const MethodInfo *))klass->vtable._5_IsMatchFilter.methodPtr)(
         this,
         sort,
         klass->vtable._5_IsMatchFilter.method);
  iconLabelInfo = 0;
  if ( (v9 & 1) != 0 )
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
        v23 = StringLiteral_1/*""*/;
        this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.sortStr1, v23, v7, v8);
        servantEntity = (int64_t)this->fields.servantEntity;
        if ( servantEntity )
        {
          v21 = *(_DWORD *)(servantEntity + 208);
          servantEntity = v21;
        }
        else
        {
          v21 = 0;
        }
        iconLabelInfo = this->fields.iconLabelInfo;
        this->fields.sortValue1B = servantEntity;
        if ( !iconLabelInfo )
          goto LABEL_33;
LABEL_30:
        IconLabelInfo__Set_40964356(iconLabelInfo, 57, v21, 0, 0, 0, 0, 0, 0, 0);
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
        p_sortStr1 = (CGThumbnailListItem_o *)&this->fields.sortStr1;
LABEL_15:
        sub_1C3E508(p_sortStr1, (int32_t)sortRuby, v7, v8);
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
        sub_1C3E7C0(iconLabelInfo, v6);
      }
    }
    else if ( sortKind == 26 )
    {
      v12 = (int64_t)this->fields.servantEntity;
      this->fields.sortValue0B = 0;
      if ( v12 )
        v12 = -*(_DWORD *)(v12 + 212);
      sortRuby = this->fields.sortRuby;
      this->fields.sortStr1 = sortRuby;
      p_sortStr1 = (CGThumbnailListItem_o *)&this->fields.sortStr1;
      this->fields.sortValue1 = v12;
      goto LABEL_15;
    }
    v17 = (int64_t)this->fields.servantEntity;
    this->fields.sortValue0B = 0;
    if ( v17 )
      v17 = *(int *)(v17 + 208);
    this->fields.sortValue1 = v17;
    v18 = StringLiteral_1/*""*/;
    this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
    v19 = (CGThumbnailListItem_o *)&this->fields.sortStr1;
    sub_1C3E508(v19, v18, v7, v8);
    v20 = v19->fields.sortValue1B;
    iconLabelInfo = (IconLabelInfo_o *)v19->fields.viewObject;
    v19->monitor = 0;
    if ( v20 )
    {
      v21 = *(_DWORD *)(v20 + 208);
      if ( !iconLabelInfo )
        goto LABEL_33;
    }
    else
    {
      v21 = 0;
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