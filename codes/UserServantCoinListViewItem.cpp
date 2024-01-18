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
  IconLabelInfo_o *v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  int64_t iconLabelInfo; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct UserSvtCoinEntity_o **p_userSvtCoinEntity; // x21
  struct UserSvtCoinEntity_o *userSvtCoinEntity; // x8
  struct UserSvtCoinEntity_o *v33; // x8
  ServantEntity_o **p_servantEntity; // x20
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x22
  const MethodInfo *v36; // x3
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  ServantLimitMaster_o *v38; // x22
  __int64 v39; // x23
  __int64 v40; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4185E2B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitMaster___, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_SvtCoinMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v12);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v13);
    sub_B2C35C(&NetworkManager_TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    byte_4185E2B = 1;
  }
  v16 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0LL);
  this->fields.iconLabelInfo = v16;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  iconLabelInfo = (int64_t)this->fields.iconLabelInfo;
  if ( !iconLabelInfo )
    goto LABEL_25;
  IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo, 0LL);
  if ( !userSvtCoinEnt )
    return;
  this->fields.userSvtCoinEntity = userSvtCoinEnt;
  p_userSvtCoinEntity = &this->fields.userSvtCoinEntity;
  sub_B2C2F8(
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
  iconLabelInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SvtCoinMaster___);
  userSvtCoinEntity = this->fields.userSvtCoinEntity;
  if ( !userSvtCoinEntity )
    goto LABEL_25;
  if ( !iconLabelInfo )
    goto LABEL_25;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)iconLabelInfo,
    (WarEntity_o **)&this->fields.svtCoinEntity,
    userSvtCoinEntity->fields.svtId,
    (const MethodInfo_24E412C *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
  iconLabelInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  v33 = this->fields.userSvtCoinEntity;
  if ( !v33 || !iconLabelInfo )
    goto LABEL_25;
  p_servantEntity = &this->fields.servantEntity;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)iconLabelInfo,
    (WarEntity_o **)&this->fields.servantEntity,
    v33->fields.svtId,
    (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
                       v36);
  iconLabelInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !EntityDefinitely )
    goto LABEL_25;
  v38 = (ServantLimitMaster_o *)iconLabelInfo;
  v40 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v41.fields.currentCryptoKey = v40;
  *(_QWORD *)&v41.fields.fakeValue = v39;
  iconLabelInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v41, 0LL);
  if ( !v38 )
LABEL_25:
    sub_B2C434(iconLabelInfo, v23);
  ServantLimitMaster__TryGetEntity(
    v38,
    &this->fields.servantLimitEntity,
    iconLabelInfo,
    EntityDefinitely->fields.maxLimitCount,
    0LL);
  if ( *p_servantEntity )
    ServantEntity__getName_30749432(
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
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x21
  struct ServantLimitEntity_o *servantLimitEntity; // x8
  int32_t v13; // w1

  if ( (byte_4185E2D & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_4185E2D = 1;
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
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                                                  ClassGroupFilterKindList,
                                                                                  (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_29;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v8 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v8 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v8->static_fields->ClassFilterKindList;
    if ( ClassGroupFilterKindList )
    {
      v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                              ClassGroupFilterKindList,
                                              (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_17;
    }
LABEL_29:
    sub_B2C434(ClassGroupFilterKindList, sort);
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
    return 0;
LABEL_17:
  v10 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v10 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v10->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_29;
  v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL)
    || ListViewSort__IsSelectedAllTargetFilters(sort, v11, 0LL) )
  {
    return 1;
  }
  servantLimitEntity = this->fields.servantLimitEntity;
  v13 = servantLimitEntity ? servantLimitEntity->fields.rarity : 0;
  return ListViewSort__IsMatchRarityFilter(sort, v13, 0LL);
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

  if ( (byte_4185E2C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, sort);
    byte_4185E2C = 1;
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
        sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.sortStr1, v26, v7, v8, v9, v10, v11, v12);
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
        IconLabelInfo__Set_27362128(iconLabelInfo, 57, collectionNo, 0, 0, 0, 0, 0, 0LL);
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
        sub_B2C2F8(
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
        sub_B2C434(iconLabelInfo, v6);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.sortStr1, v22, v7, v8, v9, v10, v11, v12);
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