void __fastcall UserServantCoinListViewItem___ctor(
        UserServantCoinListViewItem_o *this,
        int32_t index,
        UserSvtCoinEntity_o *userSvtCoinEnt,
        const MethodInfo *method)
{
  IconLabelInfo_o *v7; // x22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  int64_t iconLabelInfo; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UserSvtCoinEntity_o **p_userSvtCoinEntity; // x21
  struct UserSvtCoinEntity_o *userSvtCoinEntity; // x8
  struct UserSvtCoinEntity_o *v24; // x8
  ServantEntity_o **p_servantEntity; // x20
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x22
  const MethodInfo *v27; // x3
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  ServantLimitMaster_o *v29; // x22
  __int64 v30; // x23
  __int64 v31; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_42AE177 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B52984(&IconLabelInfo_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE177 = 1;
  }
  v7 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v7, 0LL);
  this->fields.iconLabelInfo = v7;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  iconLabelInfo = (int64_t)this->fields.iconLabelInfo;
  if ( !iconLabelInfo )
    goto LABEL_25;
  IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo, 0LL);
  if ( !userSvtCoinEnt )
    return;
  this->fields.userSvtCoinEntity = userSvtCoinEnt;
  p_userSvtCoinEntity = &this->fields.userSvtCoinEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userSvtCoinEntity,
    (System_Int32_array **)userSvtCoinEnt,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  iconLabelInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  userSvtCoinEntity = this->fields.userSvtCoinEntity;
  if ( !userSvtCoinEntity )
    goto LABEL_25;
  if ( !iconLabelInfo )
    goto LABEL_25;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)iconLabelInfo,
    (WarEntity_o **)&this->fields.svtCoinEntity,
    userSvtCoinEntity->fields.svtId,
    (const MethodInfo_23E2334 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
  iconLabelInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
  v24 = this->fields.userSvtCoinEntity;
  if ( !v24 || !iconLabelInfo )
    goto LABEL_25;
  p_servantEntity = &this->fields.servantEntity;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)iconLabelInfo,
    (WarEntity_o **)&this->fields.servantEntity,
    v24->fields.svtId,
    (const MethodInfo_23E2334 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  iconLabelInfo = NetworkManager__get_UserId(0LL);
  if ( !*p_userSvtCoinEntity )
    goto LABEL_25;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_25;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       Master_WarQuestSelectionMaster,
                       iconLabelInfo,
                       (*p_userSvtCoinEntity)->fields.svtId,
                       v27);
  iconLabelInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !EntityDefinitely )
    goto LABEL_25;
  v29 = (ServantLimitMaster_o *)iconLabelInfo;
  v31 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v32.fields.currentCryptoKey = v31;
  *(_QWORD *)&v32.fields.fakeValue = v30;
  iconLabelInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v32, 0LL);
  if ( !v29 )
LABEL_25:
    sub_B52A5C(iconLabelInfo, v14);
  ServantLimitMaster__TryGetEntity(
    v29,
    &this->fields.servantLimitEntity,
    iconLabelInfo,
    EntityDefinitely->fields.maxLimitCount,
    0LL);
  if ( *p_servantEntity )
    ServantEntity__getName_30426176(
      *p_servantEntity,
      &this->fields.sortRuby,
      EntityDefinitely->fields.maxLimitCount,
      0LL);
}


bool __fastcall UserServantCoinListViewItem__IsMatchFilter(
        UserServantCoinListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x21
  struct ServantLimitEntity_o *servantLimitEntity; // x8
  int32_t v12; // w1

  if ( (byte_42AE179 & 1) == 0 )
  {
    sub_B52984(&FilterKindList_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_42AE179 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_29;
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                                                  ClassGroupFilterKindList,
                                                                                  (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_29;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v7->static_fields->ClassFilterKindList;
    if ( ClassGroupFilterKindList )
    {
      v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                              ClassGroupFilterKindList,
                                              (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_17;
    }
LABEL_29:
    sub_B52A5C(ClassGroupFilterKindList, sort);
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
    return 0;
LABEL_17:
  v9 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v9->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_29;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    || ListViewSort__IsSelectedAllTargetFilters(sort, v10, 0LL) )
  {
    return 1;
  }
  servantLimitEntity = this->fields.servantLimitEntity;
  v12 = servantLimitEntity ? servantLimitEntity->fields.rarity : 0;
  return ListViewSort__IsMatchRarityFilter(sort, v12, 0LL);
}


bool __fastcall UserServantCoinListViewItem__SetSortValue(
        UserServantCoinListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  UserServantCoinListViewItem_c *klass; // x8
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  char v13; // w8
  IconLabelInfo_o *iconLabelInfo; // x0
  int32_t sortKind; // w8
  int64_t v16; // x8
  struct System_String_o *sortRuby; // x1
  struct System_String_o **p_sortStr1; // x0
  int64_t userSvtCoinEntity; // x8
  int64_t v20; // x8
  int64_t v21; // x8
  System_Int32_array **v22; // x1
  struct ServantEntity_o *v23; // x8
  int32_t collectionNo; // w2
  int64_t servantLimitEntity; // x8
  System_Int32_array **v26; // x1
  struct ServantEntity_o *servantEntity; // x8

  if ( (byte_42AE178 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AE178 = 1;
  }
  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  v13 = ((__int64 (__fastcall *)(UserServantCoinListViewItem_o *, ListViewSort_o *, void *))klass->vtable._5_IsMatchFilter.method)(
          this,
          sort,
          klass[1]._1.image);
  iconLabelInfo = 0LL;
  if ( (v13 & 1) != 0 )
  {
    if ( !sort )
      goto LABEL_34;
    sortKind = sort->fields.sortKind;
    if ( sortKind <= 14 )
    {
      if ( sortKind == 2 )
      {
        servantLimitEntity = (int64_t)this->fields.servantLimitEntity;
        this->fields.sortValue0B = 0LL;
        if ( servantLimitEntity )
          servantLimitEntity = *(int *)(servantLimitEntity + 24);
        this->fields.sortValue1 = servantLimitEntity;
        v26 = (System_Int32_array **)StringLiteral_1/*""*/;
        this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_B52920((BattleServantConfConponent_o *)&this->fields.sortStr1, v26, v7, v8, v9, v10, v11, v12);
        servantEntity = this->fields.servantEntity;
        if ( servantEntity )
        {
          this->fields.sortValue1B = servantEntity->fields.collectionNo;
          collectionNo = servantEntity->fields.collectionNo;
        }
        else
        {
          collectionNo = 0;
          this->fields.sortValue1B = 0LL;
        }
        iconLabelInfo = this->fields.iconLabelInfo;
        if ( !iconLabelInfo )
          goto LABEL_34;
LABEL_23:
        IconLabelInfo__Set_28274368(iconLabelInfo, 57, collectionNo, 0, 0, 0, 0, 0, 0LL);
        goto LABEL_24;
      }
      if ( sortKind == 14 )
      {
        userSvtCoinEntity = (int64_t)this->fields.userSvtCoinEntity;
        this->fields.sortValue0B = 0LL;
        if ( userSvtCoinEntity )
          userSvtCoinEntity = *(int *)(userSvtCoinEntity + 28);
        this->fields.sortValue1 = userSvtCoinEntity;
        p_sortStr1 = &this->fields.sortStr1;
        sortRuby = (struct System_String_o *)StringLiteral_1/*""*/;
LABEL_15:
        this->fields.sortStr1 = sortRuby;
        sub_B52920(
          (BattleServantConfConponent_o *)p_sortStr1,
          (System_Int32_array **)sortRuby,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12);
        v20 = (int64_t)this->fields.servantEntity;
        if ( v20 )
          v20 = *(int *)(v20 + 208);
        iconLabelInfo = this->fields.iconLabelInfo;
        this->fields.sortValue1B = v20;
        if ( iconLabelInfo )
        {
          IconLabelInfo__Clear(iconLabelInfo, 0LL);
LABEL_24:
          LOBYTE(iconLabelInfo) = 1;
          return (char)iconLabelInfo;
        }
LABEL_34:
        sub_B52A5C(iconLabelInfo, v6);
      }
    }
    else if ( sortKind == 26 )
    {
      v16 = (int64_t)this->fields.servantEntity;
      this->fields.sortValue0B = 0LL;
      if ( v16 )
        v16 = -*(_DWORD *)(v16 + 212);
      sortRuby = this->fields.sortRuby;
      p_sortStr1 = &this->fields.sortStr1;
      this->fields.sortValue1 = v16;
      goto LABEL_15;
    }
    v21 = (int64_t)this->fields.servantEntity;
    this->fields.sortValue0B = 0LL;
    if ( v21 )
      v21 = *(int *)(v21 + 208);
    this->fields.sortValue1 = v21;
    v22 = (System_Int32_array **)StringLiteral_1/*""*/;
    this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.sortStr1, v22, v7, v8, v9, v10, v11, v12);
    v23 = this->fields.servantEntity;
    iconLabelInfo = this->fields.iconLabelInfo;
    this->fields.sortValue1B = 0LL;
    if ( v23 )
    {
      collectionNo = v23->fields.collectionNo;
      if ( !iconLabelInfo )
        goto LABEL_34;
    }
    else
    {
      collectionNo = 0;
      if ( !iconLabelInfo )
        goto LABEL_34;
    }
    goto LABEL_23;
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
  struct ServantLimitEntity_o *servantLimitEntity; // x8

  servantLimitEntity = this->fields.servantLimitEntity;
  if ( servantLimitEntity )
    return servantLimitEntity->fields.rarity;
  else
    return 0;
}