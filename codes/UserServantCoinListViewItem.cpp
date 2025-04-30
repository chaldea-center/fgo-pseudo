// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCoinListViewItem___ctor(
        UserServantCoinListViewItem_o *this,
        int32_t index,
        UserSvtCoinEntity_o *userSvtCoinEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  IconLabelInfo_o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  IconLabelInfo_o *iconLabelInfo; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct UserSvtCoinEntity_o **p_userSvtCoinEntity; // x21
  struct UserSvtCoinEntity_o *userSvtCoinEntity; // x8
  struct UserSvtCoinEntity_o *v27; // x8
  ServantEntity_o **p_servantEntity; // x20
  Il2CppObject *Master_object; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  ServantLimitMaster_o *v31; // x22
  __int64 v32; // x23
  __int64 v33; // x24
  struct ServantLimitEntity_o *servantLimitEntity; // x8
  int32_t rarity; // w9
  struct UserSvtCoinEntity_o *v36; // x8
  int32_t svtId; // w20
  BalanceConfig_c *v38; // x0
  UserServantMaster_o *v39; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4A49CAC & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1B863B8(&Method_DataManager_GetMaster_SvtCoinMaster___, v9);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v10);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantMaster___, v11);
    sub_1B863B8(&DataManager_TypeInfo, v12);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v13);
    sub_1B863B8(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v14);
    sub_1B863B8(&IconLabelInfo_TypeInfo, v15);
    sub_1B863B8(&NetworkManager_TypeInfo, v16);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    byte_4A49CAC = 1;
  }
  v18 = (IconLabelInfo_o *)sub_1B86604(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0LL);
  this->fields.iconLabelInfo = v18;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.iconLabelInfo, (int32_t)v18, v19, v20);
  ListViewItem___ctor_41775716((ListViewItem_o *)this, index, 0LL);
  iconLabelInfo = this->fields.iconLabelInfo;
  if ( !iconLabelInfo )
    goto LABEL_38;
  IconLabelInfo__Clear(iconLabelInfo, 0LL);
  if ( !userSvtCoinEnt )
    return;
  this->fields.userSvtCoinEntity = userSvtCoinEnt;
  p_userSvtCoinEntity = &this->fields.userSvtCoinEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userSvtCoinEntity, (int32_t)userSvtCoinEnt, v23, v24);
  this->fields.rarity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  iconLabelInfo = (IconLabelInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  userSvtCoinEntity = this->fields.userSvtCoinEntity;
  if ( !userSvtCoinEntity )
    goto LABEL_38;
  if ( !iconLabelInfo )
    goto LABEL_38;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)iconLabelInfo,
    (Il2CppObject **)&this->fields.svtCoinEntity,
    userSvtCoinEntity->fields.svtId,
    (const MethodInfo_32142CC *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
  iconLabelInfo = (IconLabelInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantMaster___);
  v27 = this->fields.userSvtCoinEntity;
  if ( !v27 || !iconLabelInfo )
    goto LABEL_38;
  p_servantEntity = &this->fields.servantEntity;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)iconLabelInfo,
    (Il2CppObject **)&this->fields.servantEntity,
    v27->fields.svtId,
    (const MethodInfo_32142CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v21);
    byte_4A48C25 = 1;
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
                       0LL);
  iconLabelInfo = (IconLabelInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !EntityDefinitely )
    goto LABEL_38;
  v31 = (ServantLimitMaster_o *)iconLabelInfo;
  v33 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v33;
  *(_QWORD *)&v40.fields.fakeValue = v32;
  iconLabelInfo = (IconLabelInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v40, 0LL);
  if ( !v31 )
    goto LABEL_38;
  ServantLimitMaster__TryGetEntity(
    v31,
    &this->fields.servantLimitEntity,
    (int32_t)iconLabelInfo,
    EntityDefinitely->fields.maxLimitCount,
    0LL);
  if ( !*p_servantEntity )
    return;
  iconLabelInfo = (IconLabelInfo_o *)ServantEntity__getName_40754116(
                                       *p_servantEntity,
                                       &this->fields.sortRuby,
                                       EntityDefinitely->fields.maxLimitCount,
                                       0LL);
  servantLimitEntity = this->fields.servantLimitEntity;
  if ( !servantLimitEntity )
    goto LABEL_38;
  rarity = servantLimitEntity->fields.rarity;
  v36 = this->fields.userSvtCoinEntity;
  this->fields.rarity = rarity;
  if ( !v36 )
    goto LABEL_38;
  svtId = v36->fields.svtId;
  v38 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v38 = BalanceConfig_TypeInfo;
  }
  if ( svtId == v38->static_fields->ServantIdMashu1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    iconLabelInfo = (IconLabelInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantMaster___);
    v39 = (UserServantMaster_o *)iconLabelInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( v39 )
    {
      iconLabelInfo = (IconLabelInfo_o *)UserServantMaster__getHeroineData(
                                           v39,
                                           BalanceConfig_TypeInfo->static_fields->ServantIdMashu1,
                                           0LL);
      if ( iconLabelInfo )
      {
        iconLabelInfo = (IconLabelInfo_o *)UserServantEntity__GetOverwriteStatus(
                                             (UserServantEntity_o *)iconLabelInfo,
                                             0LL,
                                             0LL);
        if ( iconLabelInfo )
        {
          this->fields.rarity = iconLabelInfo->fields.adjustData;
          return;
        }
      }
    }
LABEL_38:
    sub_1B86614(iconLabelInfo, v21);
  }
}


bool __fastcall UserServantCoinListViewItem__IsMatchFilter(
        UserServantCoinListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  FilterKindList_c *v6; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x21

  if ( (byte_4A49CAE & 1) == 0 )
  {
    sub_1B863B8(&FilterKindList_TypeInfo, sort);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_4A49CAE = 1;
  }
  v6 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v6 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v6->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_23;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_35E3C18 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_23;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
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
                                              (const MethodInfo_35E3C18 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_15;
    }
LABEL_23:
    sub_1B86614(ClassGroupFilterKindList, sort);
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
    return 0;
LABEL_15:
  v10 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v10 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v10->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_23;
  v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_35E3C18 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v11, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


bool __fastcall UserServantCoinListViewItem__SetSortValue(
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
  int64_t sortStr1; // x8
  int64_t v17; // x8
  int32_t v18; // w1
  CGThumbnailListItem_o *v19; // x19
  struct System_String_o *v20; // x8
  int32_t stringLength; // w2
  int64_t rarity; // x8
  int32_t v23; // w1
  int64_t servantEntity; // x8

  if ( (byte_4A49CAD & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1/*""*/, sort);
    byte_4A49CAD = 1;
  }
  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  v9 = ((__int64 (__fastcall *)(UserServantCoinListViewItem_o *, ListViewSort_o *, void *))klass->vtable._5_IsMatchFilter.method)(
         this,
         sort,
         klass[1]._1.image);
  iconLabelInfo = 0LL;
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
        this->fields.sortValue0B = 0LL;
        this->fields.sortValue1 = rarity;
        v23 = (int)StringLiteral_1/*""*/;
        this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_1B8635C((CGThumbnailListItem_o *)&this->fields.sortStr1, v23, v7, v8);
        servantEntity = (int64_t)this->fields.servantEntity;
        if ( servantEntity )
        {
          stringLength = *(_DWORD *)(servantEntity + 208);
          servantEntity = stringLength;
        }
        else
        {
          stringLength = 0;
        }
        iconLabelInfo = this->fields.iconLabelInfo;
        this->fields.sortValue1B = servantEntity;
        if ( !iconLabelInfo )
          goto LABEL_33;
LABEL_30:
        IconLabelInfo__Set_39094644(iconLabelInfo, 57, stringLength, 0, 0, 0, 0, 0, 0, 0LL);
        goto LABEL_31;
      }
      if ( sortKind == 14 )
      {
        userSvtCoinEntity = (int64_t)this->fields.userSvtCoinEntity;
        this->fields.sortValue0B = 0LL;
        if ( userSvtCoinEntity )
          userSvtCoinEntity = *(int *)(userSvtCoinEntity + 28);
        this->fields.sortValue1 = userSvtCoinEntity;
        LODWORD(sortRuby) = (_DWORD)StringLiteral_1/*""*/;
        this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
        p_sortStr1 = (CGThumbnailListItem_o *)&this->fields.sortStr1;
LABEL_15:
        sub_1B8635C(p_sortStr1, (int32_t)sortRuby, v7, v8);
        sortStr1 = (int64_t)p_sortStr1->fields.sortStr1;
        if ( sortStr1 )
          sortStr1 = *(int *)(sortStr1 + 208);
        iconLabelInfo = this->fields.iconLabelInfo;
        this->fields.sortValue1B = sortStr1;
        if ( iconLabelInfo )
        {
          IconLabelInfo__Clear(iconLabelInfo, 0LL);
LABEL_31:
          LOBYTE(iconLabelInfo) = 1;
          return (char)iconLabelInfo;
        }
LABEL_33:
        sub_1B86614(iconLabelInfo, v6);
      }
    }
    else if ( sortKind == 26 )
    {
      v12 = (int64_t)this->fields.servantEntity;
      this->fields.sortValue0B = 0LL;
      if ( v12 )
        v12 = -*(_DWORD *)(v12 + 212);
      sortRuby = this->fields.sortRuby;
      this->fields.sortStr1 = sortRuby;
      p_sortStr1 = (CGThumbnailListItem_o *)&this->fields.sortStr1;
      this->fields.sortValue1 = v12;
      goto LABEL_15;
    }
    v17 = (int64_t)this->fields.servantEntity;
    this->fields.sortValue0B = 0LL;
    if ( v17 )
      v17 = *(int *)(v17 + 208);
    this->fields.sortValue1 = v17;
    v18 = (int)StringLiteral_1/*""*/;
    this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
    v19 = (CGThumbnailListItem_o *)&this->fields.sortStr1;
    sub_1B8635C(v19, v18, v7, v8);
    v20 = v19->fields.sortStr1;
    iconLabelInfo = (IconLabelInfo_o *)v19->fields.viewObject;
    v19->monitor = 0LL;
    if ( v20 )
    {
      stringLength = v20[8].fields._stringLength;
      if ( !iconLabelInfo )
        goto LABEL_33;
    }
    else
    {
      stringLength = 0;
      if ( !iconLabelInfo )
        goto LABEL_33;
    }
    goto LABEL_30;
  }
  return (char)iconLabelInfo;
}


int32_t __fastcall UserServantCoinListViewItem__get_CollectionNo(
        UserServantCoinListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return servantEntity->fields.collectionNo;
  else
    return 0;
}


IconLabelInfo_o *__fastcall UserServantCoinListViewItem__get_IconInfo(
        UserServantCoinListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo;
}


int32_t __fastcall UserServantCoinListViewItem__get_ItemId(
        UserServantCoinListViewItem_o *this,
        const MethodInfo *method)
{
  struct SvtCoinEntity_o *svtCoinEntity; // x8

  svtCoinEntity = this->fields.svtCoinEntity;
  if ( svtCoinEntity )
    return svtCoinEntity->fields.itemId;
  else
    return 0;
}


int32_t __fastcall UserServantCoinListViewItem__get_Num(UserServantCoinListViewItem_o *this, const MethodInfo *method)
{
  struct UserSvtCoinEntity_o *userSvtCoinEntity; // x8

  userSvtCoinEntity = this->fields.userSvtCoinEntity;
  if ( userSvtCoinEntity )
    return userSvtCoinEntity->fields.num;
  else
    return 0;
}


int32_t __fastcall UserServantCoinListViewItem__get_Rarity(
        UserServantCoinListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rarity;
}