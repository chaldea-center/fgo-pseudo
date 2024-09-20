void __fastcall ServantCostumeListViewItem___ctor(
        ServantCostumeListViewItem_o *this,
        ServantCostumeItemInfo_o *info,
        UserServantEntity_o *baseSvtEntity,
        const MethodInfo *method)
{
  IconLabelInfo_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  IconLabelInfo_o *v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  ServantCostumeItemInfo_o **p_servantData; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  int64_t Instance; // x0
  const MethodInfo *v17; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x24
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  ServantCostumeItemInfo_o *servantData; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v24; // q1
  int64_t v25; // x0
  __int128 v26; // q1
  int64_t v27; // x24
  UserServantEntity_o *v28; // x0
  Il2CppObject *MasterData_object; // x23
  int v30; // w8
  int64_t v31; // x23
  unsigned int v32; // w24
  __int64 v33; // x28
  __int64 v34; // x8
  unsigned int v35; // w29
  __int64 v36; // x8
  unsigned int v37; // w9
  __int64 v38; // x8
  struct UserServantEntity_o *v39; // x9
  __int128 v40; // q0
  __int64 v41; // x25
  Il2CppObject *Master_object; // x23
  ServantCostumeItemInfo_o *v43; // x8
  int64_t v44; // x22
  struct ServantEntity_o *servantEntity; // x8
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+70h] [xbp-90h]
  UserServantCollectionEntity_o *entity; // [xsp+98h] [xbp-68h] BYREF

  if ( (byte_4A5ECF7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5ECF7 = 1;
  }
  entity = 0LL;
  v7 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v7, 0LL);
  this->fields.iconLabelInfo1 = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v7, v8, v9);
  v10 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v10, 0LL);
  this->fields.iconLabelInfo2 = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v10, v11, v12);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.servantData = info;
  p_servantData = &this->fields.servantData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantData, (int32_t)info, v14, v15);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*p_servantData )
    goto LABEL_70;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = ServantCostumeItemInfo__get_SvtId(*p_servantData, v17);
  if ( !v18 )
    goto LABEL_70;
  v19 = DataMasterBase_object__object__int___GetEntity(
          v18,
          Instance,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)v19, v20, v21);
  Instance = (int64_t)this->fields.servantData;
  if ( !Instance )
    goto LABEL_70;
  Instance = ServantCostumeItemInfo__get_ClassId((ServantCostumeItemInfo_o *)Instance, v17);
  servantData = this->fields.servantData;
  this->fields.classId = Instance;
  if ( !servantData )
    goto LABEL_70;
  Instance = ServantCostumeItemInfo__get_Rarity(servantData, v17);
  this->fields.isReleaseItemHaving = 0;
  this->fields.isHeroineSvt = 0;
  this->fields.isLetgo = 0;
  *(_QWORD *)&this->fields.rarity = (unsigned int)Instance;
  if ( baseSvtEntity )
  {
    if ( !*p_servantData )
      goto LABEL_70;
    userServantEntity = (*p_servantData)->fields.userServantEntity;
    if ( userServantEntity )
    {
      v24 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v50.fields.fakeValue = v24;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v49 = v50;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v49, 0LL);
      v26 = *(_OWORD *)&baseSvtEntity->fields.id.fields.fakeValue;
      v27 = v25;
      *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&baseSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v48.fields.fakeValue = v26;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v48, 0LL);
      if ( v27 == Instance )
        this->fields.isBaseSvt = 1;
    }
  }
  if ( !*p_servantData )
LABEL_70:
    sub_1B8880C(Instance, v17);
  v28 = (*p_servantData)->fields.userServantEntity;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  if ( v28 )
  {
    Instance = UserServantEntity__IsHeroine(v28, 0LL);
    if ( (Instance & 1) != 0 )
      this->fields.isHeroineSvt = 1;
    if ( !*p_servantData )
      goto LABEL_70;
    Instance = (int64_t)(*p_servantData)->fields.userServantEntity;
    if ( !Instance )
      goto LABEL_70;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
      this->fields.isLock = 1;
    if ( !*p_servantData )
      goto LABEL_70;
    Instance = (int64_t)(*p_servantData)->fields.userServantEntity;
    if ( !Instance )
      goto LABEL_70;
    if ( UserServantEntity__IsChoice((UserServantEntity_o *)Instance, 0LL) )
      this->fields.isChoice = 1;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_70;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_70;
    Instance = (int64_t)UserDeckMaster__getDeckList((UserDeckMaster_o *)MasterData_object, Instance, 0LL);
    if ( !Instance )
      goto LABEL_70;
    v30 = *(_DWORD *)(Instance + 24);
    v31 = Instance;
    if ( v30 >= 1 )
    {
      v32 = 0;
      while ( 1 )
      {
        if ( v32 >= v30 )
LABEL_71:
          sub_1B88814(Instance, v17);
        v33 = *(_QWORD *)(v31 + 8LL * (int)v32 + 32);
        if ( !v33 )
          goto LABEL_70;
        v34 = *(_QWORD *)(v33 + 48);
        if ( !v34 )
          goto LABEL_70;
        v35 = 0;
        while ( 1 )
        {
          v36 = *(_QWORD *)(v34 + 16);
          if ( !v36 )
            goto LABEL_70;
          v37 = *(_DWORD *)(v36 + 24);
          if ( (int)v35 >= (int)v37 )
            break;
          if ( v35 >= v37 )
            goto LABEL_71;
          v38 = *(_QWORD *)(v36 + 8LL * (int)v35 + 32);
          if ( v38 )
          {
            if ( *p_servantData )
            {
              v39 = (*p_servantData)->fields.userServantEntity;
              if ( v39 )
              {
                v40 = *(_OWORD *)&v39->fields.id.fields.fakeValue;
                v41 = *(_QWORD *)(v38 + 24);
                *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&v39->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v50.fields.fakeValue = v40;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v47 = v50;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v47, 0LL);
                if ( v41 == Instance )
                  this->fields.isParty = 1;
                v34 = *(_QWORD *)(v33 + 48);
                ++v35;
                if ( v34 )
                  continue;
              }
            }
          }
          goto LABEL_70;
        }
        v30 = *(_DWORD *)(v31 + 24);
        if ( (int)++v32 >= v30 )
          break;
      }
    }
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    v43 = *p_servantData;
    if ( !*p_servantData )
      goto LABEL_70;
    v44 = Instance;
    Instance = ServantCostumeItemInfo__get_SvtId(v43, v17);
    if ( !Master_object )
      goto LABEL_70;
    Instance = UserServantCollectionMaster__TryGetEntity(
                 (UserServantCollectionMaster_o *)Master_object,
                 &entity,
                 v44,
                 Instance,
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      Instance = (int64_t)entity;
      if ( !entity )
        goto LABEL_70;
      Instance = UserServantCollectionEntity__IsGet(entity, 0LL);
      if ( (Instance & 1) != 0 )
        this->fields.isLetgo = 1;
    }
  }
  if ( !info )
    goto LABEL_70;
  this->fields.isReleaseItemHaving = info->fields.isReleaseItemHaving;
  this->fields.isClearAllCond = info->fields.isCanRelease;
  this->fields.isOpenEventCostume = info->fields.isEventItemOpenCond;
  this->fields.isAlreadyGet = info->fields.isCostumeGet;
  this->fields.isHavingAllReleasedCostume = info->fields.isHavingAllReleasedCostume;
  this->fields.isNotHavingAllCostumeReleaseItem = info->fields.isNotHavingAllCostumeReleaseItem;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_70;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_70;
  servantEntity = this->fields.servantEntity;
  this->fields.priority = *(_DWORD *)(Instance + 48);
  if ( !servantEntity )
    goto LABEL_70;
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2 = -servantEntity->fields.collectionNo;
  if ( !Instance )
    goto LABEL_70;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_70;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


bool __fastcall ServantCostumeListViewItem__IsMatchFilter(
        ServantCostumeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v6; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  _BOOL4 v12; // w23
  struct ServantCostumeItemInfo_o *servantData; // x8
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x21

  if ( (byte_4A5ECF8 & 1) == 0 )
  {
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4A5ECF8 = 1;
  }
  if ( this->fields.isBaseSvt )
    return 1;
  v6 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v6 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v6->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_37;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_37;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v8 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v8 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v8->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_37;
    v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            ClassGroupFilterKindList,
                                            (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v10 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v10 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v10->static_fields->ServantCostumeFilterKind;
  if ( !ClassGroupFilterKindList )
    goto LABEL_37;
  v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL) )
  {
    v12 = ListViewSort__GetFilter(sort, 30, 0LL)
       && !this->fields.isHavingAllReleasedCostume
       && this->fields.isReleaseItemHaving;
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__GetFilter(sort, 31, 0LL);
    if ( ((unsigned __int8)ClassGroupFilterKindList & 1) != 0 )
    {
      servantData = this->fields.servantData;
      if ( !servantData )
        goto LABEL_37;
      if ( !v12 && servantData->fields.notHavingReleaseItemNum <= 0 )
        return 0;
    }
    else if ( !v12 )
    {
      return 0;
    }
  }
  v14 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v14->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_37:
    sub_1B8880C(ClassGroupFilterKindList, sort);
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v15, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall ServantCostumeListViewItem__ModifyItem(
        ServantCostumeListViewItem_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct ServantCostumeItemInfo_o *servantData; // x0

  servantData = this->fields.servantData;
  if ( !servantData
    || (servantData->fields.userServantEntity = userSvtEntity,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&servantData->fields,
          (int32_t)userSvtEntity,
          (int32_t)method,
          v3),
        !userSvtEntity) )
  {
    sub_1B8880C(servantData, userSvtEntity);
  }
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
}


bool __fastcall ServantCostumeListViewItem__SetSortValue(
        ServantCostumeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ServantCostumeListViewItem_c *klass; // x8
  const MethodInfo *v6; // x1
  char v7; // w8
  IconLabelInfo_o *iconLabelInfo2; // x0
  struct ServantCostumeItemInfo_o *servantData; // x8
  int64_t v10; // x8
  int32_t sortKind; // w8
  struct ServantCostumeItemInfo_o *v12; // x8
  int64_t allCostumeNum; // x2
  __int64 v14; // x8
  int *v15; // x8
  int64_t rarity; // x8
  __int64 v17; // x8
  IconLabelInfo_o *v18; // x19
  int32_t *v19; // x8
  __int64 v20; // x8
  int32_t v21; // w20
  struct ServantCostumeItemInfo_o *v22; // x8
  int64_t releaseCostumeNum; // x2
  int32_t v24; // w3
  int32_t v25; // w1
  struct ServantCostumeItemInfo_o *v26; // x8
  struct ServantCostumeItemInfo_o *v27; // x8
  ServantCostumeItemInfo_o *v28; // x8
  IconLabelInfo_o *iconLabelInfo1; // x20
  ServantCostumeItemInfo_o *v30; // x8
  int32_t v31; // w19
  __int64 v32; // x8
  int64_t v33; // x20
  IconLabelInfo_o *v34; // x21

  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  v7 = ((__int64 (__fastcall *)(ServantCostumeListViewItem_o *, ListViewSort_o *, void *))klass->vtable._5_IsMatchFilter.method)(
         this,
         sort,
         klass[1]._1.image);
  iconLabelInfo2 = 0LL;
  if ( (v7 & 1) != 0 )
  {
    this->fields.sortValue0 = 0LL;
    if ( !sort )
      goto LABEL_58;
    if ( sort->fields.isSmartSort )
    {
      servantData = this->fields.servantData;
      if ( !servantData )
        goto LABEL_58;
      if ( servantData->fields.userServantEntity )
      {
        if ( this->fields.isOpenEventCostume )
        {
          v10 = 40LL;
        }
        else if ( this->fields.isClearAllCond )
        {
          v10 = 30LL;
        }
        else if ( this->fields.isReleaseItemHaving )
        {
          v10 = 20LL;
        }
        else
        {
          v10 = -10LL;
          if ( this->fields.isAlreadyGet )
            v10 = 10LL;
        }
      }
      else
      {
        v10 = -20LL;
      }
      this->fields.sortValue0 = v10;
    }
    iconLabelInfo2 = this->fields.iconLabelInfo2;
    if ( !iconLabelInfo2 )
      goto LABEL_58;
    IconLabelInfo__Clear(iconLabelInfo2, 0LL);
    sortKind = sort->fields.sortKind;
    if ( sortKind > 3 )
    {
      switch ( sortKind )
      {
        case 19:
          v12 = this->fields.servantData;
          if ( !v12 )
            goto LABEL_58;
          allCostumeNum = v12->fields.allCostumeNum;
          iconLabelInfo2 = this->fields.iconLabelInfo1;
          this->fields.sortValue1 = allCostumeNum;
          if ( !iconLabelInfo2 )
            goto LABEL_58;
          IconLabelInfo__Set_38140136(iconLabelInfo2, 50, allCostumeNum, 0, 0, 0, 0, 0, 0LL);
          goto LABEL_56;
        case 20:
          v22 = this->fields.servantData;
          if ( !v22 )
            goto LABEL_58;
          releaseCostumeNum = v22->fields.releaseCostumeNum;
          iconLabelInfo2 = this->fields.iconLabelInfo1;
          this->fields.sortValue1 = releaseCostumeNum;
          if ( !iconLabelInfo2 )
            goto LABEL_58;
          v24 = v22->fields.allCostumeNum;
          v25 = 51;
          goto LABEL_46;
        case 21:
          v26 = this->fields.servantData;
          if ( !v26 )
            goto LABEL_58;
          releaseCostumeNum = v26->fields.notHavingCostumeNum;
          iconLabelInfo2 = this->fields.iconLabelInfo1;
          this->fields.sortValue1 = releaseCostumeNum;
          if ( !iconLabelInfo2 )
            goto LABEL_58;
          v24 = v26->fields.allCostumeNum;
          v25 = 52;
          goto LABEL_46;
        case 22:
          v27 = this->fields.servantData;
          if ( !v27 )
            goto LABEL_58;
          releaseCostumeNum = v27->fields.notHavingReleaseItemNum;
          iconLabelInfo2 = this->fields.iconLabelInfo1;
          this->fields.sortValue1 = releaseCostumeNum;
          if ( !iconLabelInfo2 )
            goto LABEL_58;
          v24 = v27->fields.allCostumeNum;
          v25 = 53;
LABEL_46:
          IconLabelInfo__Set_38140136(iconLabelInfo2, v25, releaseCostumeNum, v24, 0, 0, 0, 0, 0LL);
          goto LABEL_56;
        case 23:
          iconLabelInfo2 = (IconLabelInfo_o *)this->fields.servantData;
          if ( !iconLabelInfo2 )
            goto LABEL_58;
          iconLabelInfo2 = (IconLabelInfo_o *)ServantCostumeItemInfo__get_NowLimitCount(
                                                (ServantCostumeItemInfo_o *)iconLabelInfo2,
                                                v6);
          v28 = this->fields.servantData;
          this->fields.sortValue1 = (int)iconLabelInfo2;
          if ( !v28 )
            goto LABEL_58;
          iconLabelInfo1 = this->fields.iconLabelInfo1;
          iconLabelInfo2 = (IconLabelInfo_o *)ServantCostumeItemInfo__get_NowLimitCount(v28, v6);
          v30 = this->fields.servantData;
          if ( !v30 )
            goto LABEL_58;
          v31 = (int)iconLabelInfo2;
          iconLabelInfo2 = (IconLabelInfo_o *)ServantCostumeItemInfo__get_MaxLimitCount(v30, v6);
          if ( !iconLabelInfo1 )
            goto LABEL_58;
          IconLabelInfo__Set_38140136(iconLabelInfo1, 54, v31, (int32_t)iconLabelInfo2, 0, 0, 0, 0, 0LL);
          goto LABEL_56;
        default:
          if ( sortKind != 8 )
            goto LABEL_56;
          iconLabelInfo2 = (IconLabelInfo_o *)this->fields.servantData;
          rarity = -this->fields.priority;
          goto LABEL_30;
      }
    }
    if ( sortKind == 2 )
    {
      rarity = this->fields.rarity;
      iconLabelInfo2 = (IconLabelInfo_o *)this->fields.servantData;
LABEL_30:
      this->fields.sortValue1 = rarity;
      if ( !iconLabelInfo2 )
        goto LABEL_58;
      v17 = *(_QWORD *)&iconLabelInfo2->fields.iconKind;
      v18 = this->fields.iconLabelInfo1;
      if ( v17 )
      {
        v19 = (int32_t *)(v17 + 256);
      }
      else
      {
        v20 = *(_QWORD *)&iconLabelInfo2->fields.adjustData;
        if ( !v20 )
          goto LABEL_58;
        v19 = (int32_t *)(v20 + 68);
      }
      v21 = *v19;
      iconLabelInfo2 = (IconLabelInfo_o *)ServantCostumeItemInfo__get_MaxLevel(
                                            (ServantCostumeItemInfo_o *)iconLabelInfo2,
                                            v6);
      if ( !v18 )
        goto LABEL_58;
      IconLabelInfo__Set_38140136(v18, 2, v21, (int32_t)iconLabelInfo2, 0, 0, 0, 0, 0LL);
    }
    else if ( sortKind == 3 )
    {
      iconLabelInfo2 = (IconLabelInfo_o *)this->fields.servantData;
      if ( !iconLabelInfo2 )
        goto LABEL_58;
      v14 = *(_QWORD *)&iconLabelInfo2->fields.iconKind;
      if ( v14 )
      {
        v15 = (int *)(v14 + 256);
      }
      else
      {
        v32 = *(_QWORD *)&iconLabelInfo2->fields.adjustData;
        if ( !v32 )
          goto LABEL_58;
        v15 = (int *)(v32 + 68);
      }
      v33 = *v15;
      v34 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v33;
      iconLabelInfo2 = (IconLabelInfo_o *)ServantCostumeItemInfo__get_MaxLevel(
                                            (ServantCostumeItemInfo_o *)iconLabelInfo2,
                                            v6);
      if ( v34 )
      {
        IconLabelInfo__Set_38140136(v34, 2, v33, (int32_t)iconLabelInfo2, 0, 0, 0, 0, 0LL);
        goto LABEL_56;
      }
LABEL_58:
      sub_1B8880C(iconLabelInfo2, v6);
    }
LABEL_56:
    LOBYTE(iconLabelInfo2) = 1;
  }
  return (char)iconLabelInfo2;
}


void __fastcall ServantCostumeListViewItem__SetUpdateUserSvtEntity(
        ServantCostumeListViewItem_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct ServantCostumeItemInfo_o *servantData; // x0

  servantData = this->fields.servantData;
  if ( !servantData )
    sub_1B8880C(0LL, userSvtEntity);
  servantData->fields.userServantEntity = userSvtEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&servantData->fields, (int32_t)userSvtEntity, (int32_t)method, v3);
}


bool __fastcall ServantCostumeListViewItem__checkClassFilter(
        ServantCostumeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ServantCostumeListViewItem_o *v3; // x20
  bool Filter; // w8
  bool result; // w0
  int32_t v7; // w1

  v3 = this;
  switch ( this->fields.classId )
  {
    case 1:
    case 0xD:
      if ( !sort )
        goto LABEL_28;
      Filter = ListViewSort__GetFilter(sort, 0, 0LL);
      result = 0;
      if ( !Filter )
        return result;
      return 1;
    case 2:
    case 0xE:
      if ( !sort )
        goto LABEL_28;
      v7 = 1;
      return ListViewSort__GetFilter(sort, v7, 0LL);
    case 3:
    case 0xF:
      if ( !sort )
        goto LABEL_28;
      v7 = 2;
      return ListViewSort__GetFilter(sort, v7, 0LL);
    case 4:
    case 0x10:
      if ( !sort )
        goto LABEL_28;
      v7 = 3;
      return ListViewSort__GetFilter(sort, v7, 0LL);
    case 5:
    case 0x11:
      if ( !sort )
        goto LABEL_28;
      v7 = 4;
      return ListViewSort__GetFilter(sort, v7, 0LL);
    case 6:
    case 0x12:
      if ( !sort )
        goto LABEL_28;
      v7 = 5;
      return ListViewSort__GetFilter(sort, v7, 0LL);
    case 7:
    case 0x13:
      if ( !sort )
        goto LABEL_28;
      v7 = 6;
      return ListViewSort__GetFilter(sort, v7, 0LL);
    default:
      this = (ServantCostumeListViewItem_o *)this->fields.servantEntity;
      if ( !this )
        goto LABEL_28;
      if ( ServantEntity__get_IsAllClass((ServantEntity_o *)this, 0LL) )
        return 1;
      this = (ServantCostumeListViewItem_o *)v3->fields.servantEntity;
      if ( !this )
        goto LABEL_28;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0LL) )
        return 1;
      this = (ServantCostumeListViewItem_o *)v3->fields.servantEntity;
      if ( !this )
        goto LABEL_28;
      this = (ServantCostumeListViewItem_o *)ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        return 1;
      if ( !sort )
LABEL_28:
        sub_1B8880C(this, sort);
      v7 = 7;
      return ListViewSort__GetFilter(sort, v7, 0LL);
  }
}


IconLabelInfo_o *__fastcall ServantCostumeListViewItem__get_IconInfo1(
        ServantCostumeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall ServantCostumeListViewItem__get_IconInfo2(
        ServantCostumeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall ServantCostumeListViewItem__get_IsBaseSvt(ServantCostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBaseSvt;
}


bool __fastcall ServantCostumeListViewItem__get_IsCanNotSelect(
        ServantCostumeListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantCostumeItemInfo_o *servantData; // x8

  servantData = this->fields.servantData;
  if ( !servantData )
    sub_1B8880C(this, method);
  return !servantData->fields.userServantEntity
      || !this->fields.isAlreadyGet && !this->fields.isReleaseItemHaving
      || ServantCostumeListViewItem__get_IsHeroineLeave(this, method);
}


bool __fastcall ServantCostumeListViewItem__get_IsCanRelease(
        ServantCostumeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isClearAllCond;
}


bool __fastcall ServantCostumeListViewItem__get_IsChoice(ServantCostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall ServantCostumeListViewItem__get_IsHavingAllReleasedCostume(
        ServantCostumeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isHavingAllReleasedCostume;
}


bool __fastcall ServantCostumeListViewItem__get_IsHeroineLeave(
        ServantCostumeListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5ECF9 & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5ECF9 = 1;
  }
  if ( !this->fields.isHeroineSvt )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_37688364(126, 0LL);
}


bool __fastcall ServantCostumeListViewItem__get_IsLetgo(ServantCostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLetgo;
}


bool __fastcall ServantCostumeListViewItem__get_IsLock(ServantCostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall ServantCostumeListViewItem__get_IsOpenEventCostume(
        ServantCostumeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isOpenEventCostume;
}


bool __fastcall ServantCostumeListViewItem__get_IsParty(ServantCostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isParty;
}


bool __fastcall ServantCostumeListViewItem__get_IsReleaseItemHaving(
        ServantCostumeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isReleaseItemHaving;
}


ServantLeaderInfo_o *__fastcall ServantCostumeListViewItem__get_NotHaveSvtData(
        ServantCostumeListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantCostumeItemInfo_o *servantData; // x8

  servantData = this->fields.servantData;
  if ( !servantData )
    sub_1B8880C(this, method);
  return servantData->fields.notHaveServantEntity;
}


int32_t __fastcall ServantCostumeListViewItem__get_SvtId(ServantCostumeListViewItem_o *this, const MethodInfo *method)
{
  ServantCostumeItemInfo_o *servantData; // x0

  servantData = this->fields.servantData;
  if ( !servantData )
    sub_1B8880C(0LL, method);
  return ServantCostumeItemInfo__get_SvtId(servantData, method);
}


UserServantEntity_o *__fastcall ServantCostumeListViewItem__get_UserSvtEntity(
        ServantCostumeListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantCostumeItemInfo_o *servantData; // x8

  servantData = this->fields.servantData;
  if ( !servantData )
    sub_1B8880C(this, method);
  return servantData->fields.userServantEntity;
}