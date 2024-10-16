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
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x1
  int64_t iconLabelInfo; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct UserSvtCoinEntity_o **p_userSvtCoinEntity; // x21
  struct UserSvtCoinEntity_o *userSvtCoinEntity; // x8
  struct UserSvtCoinEntity_o *v25; // x8
  ServantEntity_o **p_servantEntity; // x20
  Il2CppObject *Master_object; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  ServantLimitMaster_o *v29; // x22
  __int64 v30; // x23
  __int64 v31; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4AB181D & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantLimitMaster___, *(_QWORD *)&index);
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1BAB41C(&Method_DataManager_GetMaster_SvtCoinMaster___, v8);
    sub_1BAB41C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_1BAB41C(&DataManager_TypeInfo, v10);
    sub_1BAB41C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v11);
    sub_1BAB41C(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v12);
    sub_1BAB41C(&IconLabelInfo_TypeInfo, v13);
    sub_1BAB41C(&NetworkManager_TypeInfo, v14);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    byte_4AB181D = 1;
  }
  v16 = (IconLabelInfo_o *)sub_1BAB668(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0LL);
  this->fields.iconLabelInfo = v16;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo, (int32_t)v16, v17, v18);
  ListViewItem___ctor_41102532((ListViewItem_o *)this, index, 0LL);
  iconLabelInfo = (int64_t)this->fields.iconLabelInfo;
  if ( !iconLabelInfo )
    goto LABEL_22;
  IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo, 0LL);
  if ( !userSvtCoinEnt )
    return;
  this->fields.userSvtCoinEntity = userSvtCoinEnt;
  p_userSvtCoinEntity = &this->fields.userSvtCoinEntity;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.userSvtCoinEntity, (int32_t)userSvtCoinEnt, v21, v22);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  iconLabelInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  userSvtCoinEntity = this->fields.userSvtCoinEntity;
  if ( !userSvtCoinEntity )
    goto LABEL_22;
  if ( !iconLabelInfo )
    goto LABEL_22;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)iconLabelInfo,
    (Il2CppObject **)&this->fields.svtCoinEntity,
    userSvtCoinEntity->fields.svtId,
    (const MethodInfo_3163DE4 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
  iconLabelInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantMaster___);
  v25 = this->fields.userSvtCoinEntity;
  if ( !v25 || !iconLabelInfo )
    goto LABEL_22;
  p_servantEntity = &this->fields.servantEntity;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)iconLabelInfo,
    (Il2CppObject **)&this->fields.servantEntity,
    v25->fields.svtId,
    (const MethodInfo_3163DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  iconLabelInfo = NetworkManager__get_UserId(0LL);
  if ( !*p_userSvtCoinEntity )
    goto LABEL_22;
  if ( !Master_object )
    goto LABEL_22;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       iconLabelInfo,
                       (*p_userSvtCoinEntity)->fields.svtId,
                       0LL);
  iconLabelInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !EntityDefinitely )
    goto LABEL_22;
  v29 = (ServantLimitMaster_o *)iconLabelInfo;
  v31 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v32.fields.currentCryptoKey = v31;
  *(_QWORD *)&v32.fields.fakeValue = v30;
  iconLabelInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v32, 0LL);
  if ( !v29 )
LABEL_22:
    sub_1BAB678(iconLabelInfo, v19);
  ServantLimitMaster__TryGetEntity(
    v29,
    &this->fields.servantLimitEntity,
    iconLabelInfo,
    EntityDefinitely->fields.maxLimitCount,
    0LL);
  if ( *p_servantEntity )
    ServantEntity__getName_40048420(
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
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x21
  struct ServantLimitEntity_o *servantLimitEntity; // x8
  int32_t v13; // w1

  if ( (byte_4AB181F & 1) == 0 )
  {
    sub_1BAB41C(&FilterKindList_TypeInfo, sort);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_4AB181F = 1;
  }
  v6 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v6 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v6->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_26;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_3534B7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_26;
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
                                              (const MethodInfo_3534B7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_15;
    }
LABEL_26:
    sub_1BAB678(ClassGroupFilterKindList, sort);
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
    goto LABEL_26;
  v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_3534B7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  int32_t v7; // w2
  int32_t v8; // w3
  char v9; // w8
  IconLabelInfo_o *iconLabelInfo; // x0
  int32_t sortKind; // w8
  int64_t v12; // x8
  struct System_String_o *sortRuby; // x1
  ServantStatusBattleListViewItem_o *p_sortStr1; // x20
  int64_t userSvtCoinEntity; // x8
  int64_t sortStr1; // x8
  int64_t v17; // x8
  int32_t v18; // w1
  struct System_String_o **v19; // x19
  struct System_String_o *v20; // x8
  int32_t stringLength; // w2
  int64_t servantLimitEntity; // x8
  int32_t v23; // w1
  int64_t servantEntity; // x8

  if ( (byte_4AB181E & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_1/*""*/, sort);
    byte_4AB181E = 1;
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
      goto LABEL_35;
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
        v23 = (int)StringLiteral_1/*""*/;
        this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.sortStr1, v23, v7, v8);
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
          goto LABEL_35;
LABEL_32:
        IconLabelInfo__Set_38519944(iconLabelInfo, 57, stringLength, 0, 0, 0, 0, 0, 0LL);
        goto LABEL_33;
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
        p_sortStr1 = (ServantStatusBattleListViewItem_o *)&this->fields.sortStr1;
LABEL_15:
        sub_1BAB3C0(p_sortStr1, (int32_t)sortRuby, v7, v8);
        sortStr1 = (int64_t)p_sortStr1->fields.sortStr1;
        if ( sortStr1 )
          sortStr1 = *(int *)(sortStr1 + 208);
        iconLabelInfo = this->fields.iconLabelInfo;
        this->fields.sortValue1B = sortStr1;
        if ( iconLabelInfo )
        {
          IconLabelInfo__Clear(iconLabelInfo, 0LL);
LABEL_33:
          LOBYTE(iconLabelInfo) = 1;
          return (char)iconLabelInfo;
        }
LABEL_35:
        sub_1BAB678(iconLabelInfo, v6);
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
      p_sortStr1 = (ServantStatusBattleListViewItem_o *)&this->fields.sortStr1;
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
    v19 = &this->fields.sortStr1;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v19, v18, v7, v8);
    v20 = v19[7];
    iconLabelInfo = (IconLabelInfo_o *)v19[12];
    v19[1] = 0LL;
    if ( v20 )
    {
      stringLength = v20[8].fields._stringLength;
      if ( !iconLabelInfo )
        goto LABEL_35;
    }
    else
    {
      stringLength = 0;
      if ( !iconLabelInfo )
        goto LABEL_35;
    }
    goto LABEL_32;
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