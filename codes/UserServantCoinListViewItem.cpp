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
  __int64 v17; // x1
  IconLabelInfo_o *iconLabelInfo; // x0
  struct UserSvtCoinEntity_o **p_userSvtCoinEntity; // x21
  struct UserSvtCoinEntity_o *userSvtCoinEntity; // x8
  struct UserSvtCoinEntity_o *v21; // x8
  ServantEntity_o **p_servantEntity; // x20
  Il2CppObject *Master_object; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  ServantLimitMaster_o *v25; // x22
  __int64 v26; // x23
  __int64 v27; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4BB0067 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_ServantLimitMaster___, *(_QWORD *)&index);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1C13D24(&Method_DataManager_GetMaster_SvtCoinMaster___, v8);
    sub_1C13D24(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_1C13D24(&DataManager_TypeInfo, v10);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v11);
    sub_1C13D24(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v12);
    sub_1C13D24(&IconLabelInfo_TypeInfo, v13);
    sub_1C13D24(&NetworkManager_TypeInfo, v14);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    byte_4BB0067 = 1;
  }
  v16 = (IconLabelInfo_o *)sub_1C13F70(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0LL);
  this->fields.iconLabelInfo = v16;
  sub_1C13CC8(&this->fields.iconLabelInfo);
  ListViewItem___ctor_41884928((ListViewItem_o *)this, index, 0LL);
  iconLabelInfo = this->fields.iconLabelInfo;
  if ( !iconLabelInfo )
    goto LABEL_26;
  IconLabelInfo__Clear(iconLabelInfo, 0LL);
  if ( !userSvtCoinEnt )
    return;
  this->fields.userSvtCoinEntity = userSvtCoinEnt;
  p_userSvtCoinEntity = &this->fields.userSvtCoinEntity;
  sub_1C13CC8(&this->fields.userSvtCoinEntity);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  iconLabelInfo = (IconLabelInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  userSvtCoinEntity = this->fields.userSvtCoinEntity;
  if ( !userSvtCoinEntity )
    goto LABEL_26;
  if ( !iconLabelInfo )
    goto LABEL_26;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)iconLabelInfo,
    (Il2CppObject **)&this->fields.svtCoinEntity,
    userSvtCoinEntity->fields.svtId,
    (const MethodInfo_3238670 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
  iconLabelInfo = (IconLabelInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantMaster___);
  v21 = this->fields.userSvtCoinEntity;
  if ( !v21 || !iconLabelInfo )
    goto LABEL_26;
  p_servantEntity = &this->fields.servantEntity;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)iconLabelInfo,
    (Il2CppObject **)&this->fields.servantEntity,
    v21->fields.svtId,
    (const MethodInfo_3238670 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v17);
    byte_4BAF1E5 = 1;
  }
  iconLabelInfo = (IconLabelInfo_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    iconLabelInfo = (IconLabelInfo_o *)NetworkManager_TypeInfo;
  }
  if ( !*p_userSvtCoinEntity )
    goto LABEL_26;
  if ( !Master_object )
    goto LABEL_26;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       *(_QWORD *)(*(_QWORD *)&iconLabelInfo[3].fields.isHide + 64LL),
                       (*p_userSvtCoinEntity)->fields.svtId,
                       0LL);
  iconLabelInfo = (IconLabelInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !EntityDefinitely )
    goto LABEL_26;
  v25 = (ServantLimitMaster_o *)iconLabelInfo;
  v27 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v27;
  *(_QWORD *)&v28.fields.fakeValue = v26;
  iconLabelInfo = (IconLabelInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v28, 0LL);
  if ( !v25 )
LABEL_26:
    sub_1C13F80(iconLabelInfo, v17);
  ServantLimitMaster__TryGetEntity(
    v25,
    &this->fields.servantLimitEntity,
    (int32_t)iconLabelInfo,
    EntityDefinitely->fields.maxLimitCount,
    0LL);
  if ( *p_servantEntity )
    ServantEntity__getName_40818080(
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

  if ( (byte_4BB0069 & 1) == 0 )
  {
    sub_1C13D24(&FilterKindList_TypeInfo, sort);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_4BB0069 = 1;
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
                                                                       (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                              (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_15;
    }
LABEL_26:
    sub_1C13F80(ClassGroupFilterKindList, sort);
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
                                           (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  char v7; // w8
  IconLabelInfo_o *iconLabelInfo; // x0
  int32_t sortKind; // w8
  int64_t v10; // x8
  struct System_String_o **p_sortStr1; // x20
  int64_t userSvtCoinEntity; // x8
  int64_t v13; // x8
  int64_t v14; // x8
  struct System_String_o **v15; // x19
  struct System_String_o *v16; // x8
  int32_t stringLength; // w2
  int64_t servantLimitEntity; // x8
  int64_t servantEntity; // x8

  if ( (byte_4BB0068 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1/*""*/, sort);
    byte_4BB0068 = 1;
  }
  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  v7 = ((__int64 (__fastcall *)(UserServantCoinListViewItem_o *, ListViewSort_o *, void *))klass->vtable._5_IsMatchFilter.method)(
         this,
         sort,
         klass[1]._1.image);
  iconLabelInfo = 0LL;
  if ( (v7 & 1) != 0 )
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
        this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_1C13CC8(&this->fields.sortStr1);
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
        IconLabelInfo__Set_39281744(iconLabelInfo, 57, stringLength, 0, 0, 0, 0, 0, 0LL);
        goto LABEL_33;
      }
      if ( sortKind == 14 )
      {
        userSvtCoinEntity = (int64_t)this->fields.userSvtCoinEntity;
        this->fields.sortValue0B = 0LL;
        if ( userSvtCoinEntity )
          userSvtCoinEntity = *(int *)(userSvtCoinEntity + 28);
        this->fields.sortValue1 = userSvtCoinEntity;
        this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
        p_sortStr1 = &this->fields.sortStr1;
LABEL_15:
        sub_1C13CC8(p_sortStr1);
        v13 = (int64_t)p_sortStr1[7];
        if ( v13 )
          v13 = *(int *)(v13 + 208);
        iconLabelInfo = this->fields.iconLabelInfo;
        this->fields.sortValue1B = v13;
        if ( iconLabelInfo )
        {
          IconLabelInfo__Clear(iconLabelInfo, 0LL);
LABEL_33:
          LOBYTE(iconLabelInfo) = 1;
          return (char)iconLabelInfo;
        }
LABEL_35:
        sub_1C13F80(iconLabelInfo, v6);
      }
    }
    else if ( sortKind == 26 )
    {
      v10 = (int64_t)this->fields.servantEntity;
      this->fields.sortValue0B = 0LL;
      if ( v10 )
        v10 = -*(_DWORD *)(v10 + 212);
      this->fields.sortStr1 = this->fields.sortRuby;
      p_sortStr1 = &this->fields.sortStr1;
      this->fields.sortValue1 = v10;
      goto LABEL_15;
    }
    v14 = (int64_t)this->fields.servantEntity;
    this->fields.sortValue0B = 0LL;
    if ( v14 )
      v14 = *(int *)(v14 + 208);
    this->fields.sortValue1 = v14;
    this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
    v15 = &this->fields.sortStr1;
    sub_1C13CC8(v15);
    v16 = v15[7];
    iconLabelInfo = (IconLabelInfo_o *)v15[12];
    v15[1] = 0LL;
    if ( v16 )
    {
      stringLength = v16[8].fields._stringLength;
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