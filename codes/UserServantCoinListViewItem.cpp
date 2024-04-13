void __fastcall UserServantCoinListViewItem___ctor(
        UserServantCoinListViewItem_o *this,
        int32_t index,
        UserSvtCoinEntity_o *userSvtCoinEnt,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  IconLabelInfo_o *v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
  int64_t iconLabelInfo; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct UserSvtCoinEntity_o **p_userSvtCoinEntity; // x21
  struct UserSvtCoinEntity_o *userSvtCoinEntity; // x8
  struct UserSvtCoinEntity_o *v51; // x8
  ServantEntity_o **p_servantEntity; // x20
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x22
  const MethodInfo *v54; // x3
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  ServantLimitMaster_o *v56; // x22
  __int64 v57; // x23
  __int64 v58; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_42E6ADE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitMaster___, index, (_DWORD)userSvtCoinEnt, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMaster_SvtCoinMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v13, v14, v15);
    sub_B5D5C4(&DataManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v19, v20, v21);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v22, v23, v24);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&NetworkManager_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31, v32, v33);
    byte_42E6ADE = 1;
  }
  v34 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v34, 0LL);
  this->fields.iconLabelInfo = v34;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  iconLabelInfo = (int64_t)this->fields.iconLabelInfo;
  if ( !iconLabelInfo )
    goto LABEL_25;
  IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo, 0LL);
  if ( !userSvtCoinEnt )
    return;
  this->fields.userSvtCoinEntity = userSvtCoinEnt;
  p_userSvtCoinEntity = &this->fields.userSvtCoinEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userSvtCoinEntity,
    (System_Int32_array **)userSvtCoinEnt,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  iconLabelInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SvtCoinMaster___);
  userSvtCoinEntity = this->fields.userSvtCoinEntity;
  if ( !userSvtCoinEntity )
    goto LABEL_25;
  if ( !iconLabelInfo )
    goto LABEL_25;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)iconLabelInfo,
    (WarEntity_o **)&this->fields.svtCoinEntity,
    userSvtCoinEntity->fields.svtId,
    (const MethodInfo_23FAE6C *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
  iconLabelInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  v51 = this->fields.userSvtCoinEntity;
  if ( !v51 || !iconLabelInfo )
    goto LABEL_25;
  p_servantEntity = &this->fields.servantEntity;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)iconLabelInfo,
    (WarEntity_o **)&this->fields.servantEntity,
    v51->fields.svtId,
    (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
                       v54);
  iconLabelInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !EntityDefinitely )
    goto LABEL_25;
  v56 = (ServantLimitMaster_o *)iconLabelInfo;
  v58 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v57 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v59.fields.currentCryptoKey = v58;
  *(_QWORD *)&v59.fields.fakeValue = v57;
  iconLabelInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v59, 0LL);
  if ( !v56 )
LABEL_25:
    sub_B5D69C(iconLabelInfo, v41);
  ServantLimitMaster__TryGetEntity(
    v56,
    &this->fields.servantLimitEntity,
    iconLabelInfo,
    EntityDefinitely->fields.maxLimitCount,
    0LL);
  if ( *p_servantEntity )
    ServantEntity__getName_30805492(
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  FilterKindList_c *v9; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x21
  struct ServantLimitEntity_o *servantLimitEntity; // x8
  int32_t v16; // w1

  if ( (byte_42E6AE0 & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6, v7, v8);
    byte_42E6AE0 = 1;
  }
  v9 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v9->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_29;
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                                                  ClassGroupFilterKindList,
                                                                                  (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_29;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v11 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v11 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v11->static_fields->ClassFilterKindList;
    if ( ClassGroupFilterKindList )
    {
      v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                               ClassGroupFilterKindList,
                                               (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_17;
    }
LABEL_29:
    sub_B5D69C(ClassGroupFilterKindList, sort);
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
    return 0;
LABEL_17:
  v13 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v13->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_29;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  __int64 v3; // x3
  UserServantCoinListViewItem_c *klass; // x8
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  char v14; // w8
  IconLabelInfo_o *iconLabelInfo; // x0
  int32_t sortKind; // w8
  int64_t v17; // x8
  struct System_String_o *sortRuby; // x1
  struct System_String_o **p_sortStr1; // x0
  int64_t userSvtCoinEntity; // x8
  int64_t v21; // x8
  int64_t v22; // x8
  System_Int32_array **v23; // x1
  struct ServantEntity_o *v24; // x8
  int32_t collectionNo; // w2
  int64_t servantLimitEntity; // x8
  System_Int32_array **v27; // x1
  struct ServantEntity_o *servantEntity; // x8

  if ( (byte_42E6ADF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)sort, (_DWORD)method, v3);
    byte_42E6ADF = 1;
  }
  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  v14 = ((__int64 (__fastcall *)(UserServantCoinListViewItem_o *, ListViewSort_o *, void *))klass->vtable._5_IsMatchFilter.method)(
          this,
          sort,
          klass[1]._1.image);
  iconLabelInfo = 0LL;
  if ( (v14 & 1) != 0 )
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
        v27 = (System_Int32_array **)StringLiteral_1/*""*/;
        this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.sortStr1, v27, v8, v9, v10, v11, v12, v13);
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
        IconLabelInfo__Set_28463004(iconLabelInfo, 57, collectionNo, 0, 0, 0, 0, 0, 0LL);
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
        sub_B5D560(
          (BattleServantConfConponent_o *)p_sortStr1,
          (System_Int32_array **)sortRuby,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        v21 = (int64_t)this->fields.servantEntity;
        if ( v21 )
          v21 = *(int *)(v21 + 208);
        iconLabelInfo = this->fields.iconLabelInfo;
        this->fields.sortValue1B = v21;
        if ( iconLabelInfo )
        {
          IconLabelInfo__Clear(iconLabelInfo, 0LL);
LABEL_24:
          LOBYTE(iconLabelInfo) = 1;
          return (char)iconLabelInfo;
        }
LABEL_34:
        sub_B5D69C(iconLabelInfo, v7);
      }
    }
    else if ( sortKind == 26 )
    {
      v17 = (int64_t)this->fields.servantEntity;
      this->fields.sortValue0B = 0LL;
      if ( v17 )
        v17 = -*(_DWORD *)(v17 + 212);
      sortRuby = this->fields.sortRuby;
      p_sortStr1 = &this->fields.sortStr1;
      this->fields.sortValue1 = v17;
      goto LABEL_15;
    }
    v22 = (int64_t)this->fields.servantEntity;
    this->fields.sortValue0B = 0LL;
    if ( v22 )
      v22 = *(int *)(v22 + 208);
    this->fields.sortValue1 = v22;
    v23 = (System_Int32_array **)StringLiteral_1/*""*/;
    this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.sortStr1, v23, v8, v9, v10, v11, v12, v13);
    v24 = this->fields.servantEntity;
    iconLabelInfo = this->fields.iconLabelInfo;
    this->fields.sortValue1B = 0LL;
    if ( v24 )
    {
      collectionNo = v24->fields.collectionNo;
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