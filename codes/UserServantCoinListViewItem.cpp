// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCoinListViewItem___ctor(
        UserServantCoinListViewItem_o *this,
        int32_t index,
        UserSvtCoinEntity_o *userSvtCoinEnt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  IconLabelInfo_o *v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  IconLabelInfo_o *iconLabelInfo; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct UserSvtCoinEntity_o **p_userSvtCoinEntity; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct UserSvtCoinEntity_o *userSvtCoinEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v34; // x0
  struct UserSvtCoinEntity_o *v35; // x8
  ServantEntity_o **p_servantEntity; // x20
  UserServantCollectionMaster_o *v37; // x22
  int64_t UserId; // x0
  const MethodInfo *v39; // x3
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  WarQuestSelectionMaster_o *v41; // x0
  ServantLimitMaster_o *v42; // x22
  __int64 v43; // x23
  __int64 v44; // x24
  int32_t v45; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_40F8113 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_SvtCoinMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v13);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    byte_40F8113 = 1;
  }
  v17 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, *(_QWORD *)&index, userSvtCoinEnt, method, v4);
  IconLabelInfo___ctor(v17, 0LL);
  this->fields.iconLabelInfo = v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  iconLabelInfo = this->fields.iconLabelInfo;
  if ( !iconLabelInfo )
    goto LABEL_25;
  IconLabelInfo__Clear(iconLabelInfo, 0LL);
  if ( !userSvtCoinEnt )
    return;
  this->fields.userSvtCoinEntity = userSvtCoinEnt;
  p_userSvtCoinEntity = &this->fields.userSvtCoinEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtCoinEntity,
    (System_Int32_array **)userSvtCoinEnt,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  userSvtCoinEntity = this->fields.userSvtCoinEntity;
  if ( !userSvtCoinEntity )
    goto LABEL_25;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_25;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    Master_WarQuestSelectionMaster,
    (WarEntity_o **)&this->fields.svtCoinEntity,
    userSvtCoinEntity->fields.svtId,
    (const MethodInfo_266F3E4 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
  v34 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  v35 = this->fields.userSvtCoinEntity;
  if ( !v35 || !v34 )
    goto LABEL_25;
  p_servantEntity = &this->fields.servantEntity;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    v34,
    (WarEntity_o **)&this->fields.servantEntity,
    v35->fields.svtId,
    (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  v37 = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !*p_userSvtCoinEntity )
    goto LABEL_25;
  if ( !v37 )
    goto LABEL_25;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       v37,
                       UserId,
                       (*p_userSvtCoinEntity)->fields.svtId,
                       v39);
  v41 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !EntityDefinitely )
    goto LABEL_25;
  v42 = (ServantLimitMaster_o *)v41;
  v44 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v43 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v46.fields.currentCryptoKey = v44;
  *(_QWORD *)&v46.fields.fakeValue = v43;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v46, 0LL);
  if ( !v42 )
LABEL_25:
    sub_B170D4();
  ServantLimitMaster__TryGetEntity(
    v42,
    &this->fields.servantLimitEntity,
    v45,
    EntityDefinitely->fields.maxLimitCount,
    0LL);
  if ( *p_servantEntity )
    ServantEntity__getName_30661760(
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
  __int64 v5; // x1
  FilterKindList_c *v6; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassFilterKindList; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v14; // x21
  struct ServantLimitEntity_o *servantLimitEntity; // x8
  int32_t v16; // w1

  if ( (byte_40F8115 & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_40F8115 = 1;
  }
  v6 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v6 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v6->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_29;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_29;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL) )
  {
    v9 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v9 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v9->static_fields->ClassFilterKindList;
    if ( ClassFilterKindList )
    {
      v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                               ClassFilterKindList,
                                               (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_17;
    }
LABEL_29:
    sub_B170D4();
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
    return 0;
LABEL_17:
  v12 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v12->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_29;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
    || ListViewSort__IsSelectedAllTargetFilters(sort, v14, 0LL) )
  {
    return 1;
  }
  servantLimitEntity = this->fields.servantLimitEntity;
  v16 = servantLimitEntity ? servantLimitEntity->fields.rarity : 0;
  return ListViewSort__IsMatchRarityFilter(sort, v16, 0LL);
}


bool __fastcall UserServantCoinListViewItem__SetSortValue(
        UserServantCoinListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  UserServantCoinListViewItem_c *klass; // x8
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  char v12; // w8
  bool result; // w0
  int32_t sortKind; // w8
  int64_t v15; // x8
  struct System_String_o *sortRuby; // x1
  struct System_String_o **p_sortStr1; // x0
  int64_t userSvtCoinEntity; // x8
  int64_t v19; // x8
  IconLabelInfo_o *v20; // x0
  int64_t v21; // x8
  System_Int32_array **v22; // x1
  struct ServantEntity_o *v23; // x8
  IconLabelInfo_o *iconLabelInfo; // x0
  int32_t collectionNo; // w2
  int64_t servantLimitEntity; // x8
  System_Int32_array **v27; // x1
  struct ServantEntity_o *servantEntity; // x8

  if ( (byte_40F8114 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, sort);
    byte_40F8114 = 1;
  }
  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  v12 = ((__int64 (__fastcall *)(UserServantCoinListViewItem_o *, ListViewSort_o *, void *))klass->vtable._5_IsMatchFilter.method)(
          this,
          sort,
          klass[1]._1.image);
  result = 0;
  if ( (v12 & 1) != 0 )
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
        v27 = (System_Int32_array **)StringLiteral_1;
        this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.sortStr1, v27, v6, v7, v8, v9, v10, v11);
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
        IconLabelInfo__Set_28888132(iconLabelInfo, 57, collectionNo, 0, 0, 0, 0, 0, 0LL);
        return 1;
      }
      if ( sortKind == 14 )
      {
        userSvtCoinEntity = (int64_t)this->fields.userSvtCoinEntity;
        this->fields.sortValue0B = 0LL;
        if ( userSvtCoinEntity )
          userSvtCoinEntity = *(int *)(userSvtCoinEntity + 28);
        this->fields.sortValue1 = userSvtCoinEntity;
        p_sortStr1 = &this->fields.sortStr1;
        sortRuby = (struct System_String_o *)StringLiteral_1;
LABEL_15:
        this->fields.sortStr1 = sortRuby;
        sub_B16F98(
          (BattleServantConfConponent_o *)p_sortStr1,
          (System_Int32_array **)sortRuby,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11);
        v19 = (int64_t)this->fields.servantEntity;
        if ( v19 )
          v19 = *(int *)(v19 + 208);
        v20 = this->fields.iconLabelInfo;
        this->fields.sortValue1B = v19;
        if ( v20 )
        {
          IconLabelInfo__Clear(v20, 0LL);
          return 1;
        }
LABEL_34:
        sub_B170D4();
      }
    }
    else if ( sortKind == 26 )
    {
      v15 = (int64_t)this->fields.servantEntity;
      this->fields.sortValue0B = 0LL;
      if ( v15 )
        v15 = -*(_DWORD *)(v15 + 212);
      sortRuby = this->fields.sortRuby;
      p_sortStr1 = &this->fields.sortStr1;
      this->fields.sortValue1 = v15;
      goto LABEL_15;
    }
    v21 = (int64_t)this->fields.servantEntity;
    this->fields.sortValue0B = 0LL;
    if ( v21 )
      v21 = *(int *)(v21 + 208);
    this->fields.sortValue1 = v21;
    v22 = (System_Int32_array **)StringLiteral_1;
    this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.sortStr1, v22, v6, v7, v8, v9, v10, v11);
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
  return result;
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