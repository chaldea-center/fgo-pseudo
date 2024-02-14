void __fastcall ServantCostumeListViewItem___ctor(
        ServantCostumeListViewItem_o *this,
        ServantCostumeItemInfo_o *info,
        UserServantEntity_o *baseSvtEntity,
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
  IconLabelInfo_o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  IconLabelInfo_o *v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  ServantCostumeItemInfo_o **p_servantData; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  int64_t Instance; // x0
  const MethodInfo *v41; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v42; // x24
  struct ServantEntity_o *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x1
  ServantCostumeItemInfo_o *servantData; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v54; // q1
  int64_t v55; // x0
  __int128 v56; // q0
  int64_t v57; // x24
  UserServantEntity_o *v58; // x0
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int v60; // w8
  int64_t v61; // x23
  unsigned int v62; // w24
  __int64 v63; // x28
  __int64 v64; // x8
  unsigned int v65; // w25
  __int64 v66; // x8
  unsigned int v67; // w9
  __int64 v68; // x8
  struct UserServantEntity_o *v69; // x9
  __int128 v70; // q0
  __int64 v71; // x21
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x23
  const MethodInfo *v73; // x1
  ServantCostumeItemInfo_o *v74; // x8
  int64_t v75; // x22
  struct ServantEntity_o *servantEntity; // x8
  __int64 v77; // x0
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+70h] [xbp-80h]
  UserServantCollectionEntity_o *entity; // [xsp+90h] [xbp-60h] BYREF

  if ( (byte_4217470 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantClassMaster___, info);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserDeckMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_B0D8A4(&DataManager_TypeInfo, v10);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B0D8A4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v12);
    sub_B0D8A4(&IconLabelInfo_TypeInfo, v13);
    sub_B0D8A4(&NetworkManager_TypeInfo, v14);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4217470 = 1;
  }
  entity = 0LL;
  v17 = (IconLabelInfo_o *)sub_B0D974(IconLabelInfo_TypeInfo, info, baseSvtEntity);
  IconLabelInfo___ctor(v17, 0LL);
  this->fields.iconLabelInfo1 = v17;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v26 = (IconLabelInfo_o *)sub_B0D974(IconLabelInfo_TypeInfo, v24, v25);
  IconLabelInfo___ctor(v26, 0LL);
  this->fields.iconLabelInfo2 = v26;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.servantData = info;
  p_servantData = &this->fields.servantData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.servantData,
    (System_Int32_array **)info,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*p_servantData )
    goto LABEL_75;
  v42 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = ServantCostumeItemInfo__get_SvtId(*p_servantData, v41);
  if ( !v42 )
    goto LABEL_75;
  v43 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v42,
                                    Instance,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v43;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  Instance = (int64_t)this->fields.servantData;
  if ( !Instance )
    goto LABEL_75;
  Instance = ServantCostumeItemInfo__get_ClassId((ServantCostumeItemInfo_o *)Instance, v50);
  servantData = this->fields.servantData;
  this->fields.classId = Instance;
  if ( !servantData )
    goto LABEL_75;
  Instance = ServantCostumeItemInfo__get_Rarity(servantData, v51);
  this->fields.isReleaseItemHaving = 0;
  this->fields.isHeroineSvt = 0;
  this->fields.isLetgo = 0;
  *(_QWORD *)&this->fields.rarity = (unsigned int)Instance;
  if ( baseSvtEntity )
  {
    if ( !*p_servantData )
      goto LABEL_75;
    userServantEntity = (*p_servantData)->fields.userServantEntity;
    if ( userServantEntity )
    {
      v54 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v82.fields.fakeValue = v54;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v81 = v82;
      v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v81, 0LL);
      v56 = *(_OWORD *)&baseSvtEntity->fields.id.fields.fakeValue;
      v57 = v55;
      *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&baseSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v80.fields.fakeValue = v56;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v80, 0LL);
      if ( v57 == Instance )
        this->fields.isBaseSvt = 1;
    }
  }
  if ( !*p_servantData )
LABEL_75:
    sub_B0D97C(Instance);
  v58 = (*p_servantData)->fields.userServantEntity;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  if ( v58 )
  {
    Instance = UserServantEntity__IsHeroine(v58, 0LL);
    if ( (Instance & 1) != 0 )
      this->fields.isHeroineSvt = 1;
    if ( !*p_servantData )
      goto LABEL_75;
    Instance = (int64_t)(*p_servantData)->fields.userServantEntity;
    if ( !Instance )
      goto LABEL_75;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
      this->fields.isLock = 1;
    if ( !*p_servantData )
      goto LABEL_75;
    Instance = (int64_t)(*p_servantData)->fields.userServantEntity;
    if ( !Instance )
      goto LABEL_75;
    if ( UserServantEntity__IsChoice((UserServantEntity_o *)Instance, 0LL) )
      this->fields.isChoice = 1;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_75;
    Instance = (int64_t)UserDeckMaster__getDeckList(MasterData_WarQuestSelectionMaster, Instance, 0LL);
    if ( !Instance )
      goto LABEL_75;
    v60 = *(_DWORD *)(Instance + 24);
    v61 = Instance;
    if ( v60 >= 1 )
    {
      v62 = 0;
      while ( 1 )
      {
        if ( v62 >= v60 )
        {
LABEL_76:
          v77 = sub_B0D9A8(Instance);
          sub_B0D948(v77, 0LL);
        }
        v63 = *(_QWORD *)(v61 + 8LL * (int)v62 + 32);
        if ( !v63 )
          goto LABEL_75;
        v64 = *(_QWORD *)(v63 + 48);
        if ( !v64 )
          goto LABEL_75;
        v65 = 0;
        while ( 1 )
        {
          v66 = *(_QWORD *)(v64 + 16);
          if ( !v66 )
            goto LABEL_75;
          v67 = *(_DWORD *)(v66 + 24);
          if ( (int)v65 >= (int)v67 )
            break;
          if ( v65 >= v67 )
            goto LABEL_76;
          v68 = *(_QWORD *)(v66 + 8LL * (int)v65 + 32);
          if ( v68 )
          {
            if ( *p_servantData )
            {
              v69 = (*p_servantData)->fields.userServantEntity;
              if ( v69 )
              {
                v70 = *(_OWORD *)&v69->fields.id.fields.fakeValue;
                v71 = *(_QWORD *)(v68 + 24);
                *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&v69->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v82.fields.fakeValue = v70;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v79 = v82;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v79, 0LL);
                if ( v71 == Instance )
                  this->fields.isParty = 1;
                v64 = *(_QWORD *)(v63 + 48);
                ++v65;
                if ( v64 )
                  continue;
              }
            }
          }
          goto LABEL_75;
        }
        v60 = *(_DWORD *)(v61 + 24);
        if ( (int)++v62 >= v60 )
          break;
      }
    }
  }
  else
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    v74 = *p_servantData;
    if ( !*p_servantData )
      goto LABEL_75;
    v75 = Instance;
    Instance = ServantCostumeItemInfo__get_SvtId(v74, v73);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_75;
    Instance = UserServantCollectionMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, v75, Instance, 0LL);
    if ( (Instance & 1) != 0 )
    {
      Instance = (int64_t)entity;
      if ( !entity )
        goto LABEL_75;
      Instance = UserServantCollectionEntity__IsGet(entity, 0LL);
      if ( (Instance & 1) != 0 )
        this->fields.isLetgo = 1;
    }
  }
  if ( !info )
    goto LABEL_75;
  this->fields.isReleaseItemHaving = info->fields.isReleaseItemHaving;
  this->fields.isClearAllCond = info->fields.isCanRelease;
  this->fields.isOpenEventCostume = info->fields.isEventItemOpenCond;
  this->fields.isAlreadyGet = info->fields.isCostumeGet;
  this->fields.isHavingAllReleasedCostume = info->fields.isHavingAllReleasedCostume;
  this->fields.isNotHavingAllCostumeReleaseItem = info->fields.isNotHavingAllCostumeReleaseItem;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_75;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_75;
  servantEntity = this->fields.servantEntity;
  this->fields.priority = *(_DWORD *)(Instance + 48);
  if ( !servantEntity )
    goto LABEL_75;
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2 = -servantEntity->fields.collectionNo;
  if ( !Instance )
    goto LABEL_75;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_75;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


bool __fastcall ServantCostumeListViewItem__IsMatchFilter(
        ServantCostumeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  FilterKindList_c *v7; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x21
  _BOOL4 v15; // w23
  struct ServantCostumeItemInfo_o *servantData; // x8

  if ( (byte_4217471 & 1) == 0 )
  {
    sub_B0D8A4(&FilterKindList_TypeInfo, sort);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_4217471 = 1;
  }
  if ( this->fields.isBaseSvt )
    return 1;
  v7 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v7->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_42;
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                                                  ClassGroupFilterKindList,
                                                                                  (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_42;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v9 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v9 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v9->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_42;
    v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             ClassGroupFilterKindList,
                                             (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v11->static_fields->ServantCostumeFilterKind;
  if ( !ClassGroupFilterKindList )
    goto LABEL_42;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL) )
  {
    v15 = ListViewSort__GetFilter(sort, 30, 0LL)
       && !this->fields.isHavingAllReleasedCostume
       && this->fields.isReleaseItemHaving;
    ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)ListViewSort__GetFilter(sort, 31, 0LL);
    if ( ((unsigned __int8)ClassGroupFilterKindList & 1) != 0 )
    {
      servantData = this->fields.servantData;
      if ( !servantData )
        goto LABEL_42;
      if ( !v15 && servantData->fields.notHavingReleaseItemNum <= 0 )
        return 0;
    }
    else if ( !v15 )
    {
      return 0;
    }
  }
  v13 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v13->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_42:
    sub_B0D97C(ClassGroupFilterKindList);
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v14, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall ServantCostumeListViewItem__ModifyItem(
        ServantCostumeListViewItem_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct ServantCostumeItemInfo_o *servantData; // x0

  servantData = this->fields.servantData;
  if ( !servantData
    || (servantData->fields.userServantEntity = userSvtEntity,
        sub_B0D840(
          (BattleServantConfConponent_o *)&servantData->fields,
          (System_Int32_array **)userSvtEntity,
          (System_String_array **)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        !userSvtEntity) )
  {
    sub_B0D97C(servantData);
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
  char v6; // w8
  IconLabelInfo_o *iconLabelInfo2; // x0
  struct ServantCostumeItemInfo_o *servantData; // x8
  int64_t v9; // x8
  const MethodInfo *v10; // x1
  int32_t sortKind; // w8
  struct ServantCostumeItemInfo_o *v12; // x8
  __int64 v13; // x8
  int *v14; // x8
  int64_t rarity; // x8
  struct ServantCostumeItemInfo_o *v16; // x8
  int32_t allCostumeNum; // w3
  int32_t releaseCostumeNum; // w2
  int32_t v19; // w1
  const MethodInfo *v20; // x1
  ServantCostumeItemInfo_o *v21; // x8
  IconLabelInfo_o *iconLabelInfo1; // x20
  const MethodInfo *v23; // x1
  ServantCostumeItemInfo_o *v24; // x8
  int32_t v25; // w19
  struct ServantCostumeItemInfo_o *v26; // x8
  struct ServantCostumeItemInfo_o *v27; // x8
  __int64 v28; // x8
  __int64 v29; // x8
  struct IconLabelInfo_o *v30; // x19
  int32_t *v31; // x8
  __int64 v32; // x8
  int32_t v33; // w20

  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  v6 = ((__int64 (__fastcall *)(ServantCostumeListViewItem_o *, ListViewSort_o *, void *))klass->vtable._5_IsMatchFilter.method)(
         this,
         sort,
         klass[1]._1.image);
  iconLabelInfo2 = 0LL;
  if ( (v6 & 1) != 0 )
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
          v9 = 40LL;
        }
        else if ( this->fields.isClearAllCond )
        {
          v9 = 30LL;
        }
        else if ( this->fields.isReleaseItemHaving )
        {
          v9 = 20LL;
        }
        else
        {
          v9 = -10LL;
          if ( this->fields.isAlreadyGet )
            v9 = 10LL;
        }
      }
      else
      {
        v9 = -20LL;
      }
      this->fields.sortValue0 = v9;
    }
    iconLabelInfo2 = this->fields.iconLabelInfo2;
    if ( iconLabelInfo2 )
    {
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
            iconLabelInfo2 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v12->fields.allCostumeNum;
            if ( !iconLabelInfo2 )
              goto LABEL_58;
            IconLabelInfo__Set_26821248(iconLabelInfo2, 50, v12->fields.allCostumeNum, 0, 0, 0, 0, 0, 0LL);
            goto LABEL_56;
          case 20:
            v26 = this->fields.servantData;
            if ( !v26 )
              goto LABEL_58;
            iconLabelInfo2 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v26->fields.releaseCostumeNum;
            if ( !iconLabelInfo2 )
              goto LABEL_58;
            allCostumeNum = v26->fields.allCostumeNum;
            releaseCostumeNum = v26->fields.releaseCostumeNum;
            v19 = 51;
            goto LABEL_55;
          case 21:
            v16 = this->fields.servantData;
            if ( !v16 )
              goto LABEL_58;
            iconLabelInfo2 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v16->fields.notHavingCostumeNum;
            if ( !iconLabelInfo2 )
              goto LABEL_58;
            allCostumeNum = v16->fields.allCostumeNum;
            releaseCostumeNum = v16->fields.notHavingCostumeNum;
            v19 = 52;
            goto LABEL_55;
          case 22:
            v27 = this->fields.servantData;
            if ( !v27 )
              goto LABEL_58;
            iconLabelInfo2 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v27->fields.notHavingReleaseItemNum;
            if ( !iconLabelInfo2 )
              goto LABEL_58;
            allCostumeNum = v27->fields.allCostumeNum;
            releaseCostumeNum = v27->fields.notHavingReleaseItemNum;
            v19 = 53;
            goto LABEL_55;
          case 23:
            iconLabelInfo2 = (IconLabelInfo_o *)this->fields.servantData;
            if ( !iconLabelInfo2 )
              goto LABEL_58;
            iconLabelInfo2 = (IconLabelInfo_o *)ServantCostumeItemInfo__get_NowLimitCount(
                                                  (ServantCostumeItemInfo_o *)iconLabelInfo2,
                                                  v10);
            v21 = this->fields.servantData;
            this->fields.sortValue1 = (int)iconLabelInfo2;
            if ( !v21 )
              goto LABEL_58;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            iconLabelInfo2 = (IconLabelInfo_o *)ServantCostumeItemInfo__get_NowLimitCount(v21, v20);
            v24 = this->fields.servantData;
            if ( !v24 )
              goto LABEL_58;
            v25 = (int)iconLabelInfo2;
            iconLabelInfo2 = (IconLabelInfo_o *)ServantCostumeItemInfo__get_MaxLimitCount(v24, v23);
            if ( !iconLabelInfo1 )
              goto LABEL_58;
            IconLabelInfo__Set_26821248(iconLabelInfo1, 54, v25, (int32_t)iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
      }
      else
      {
        if ( sortKind != 3 )
        {
LABEL_56:
          LOBYTE(iconLabelInfo2) = 1;
          return (char)iconLabelInfo2;
        }
        iconLabelInfo2 = (IconLabelInfo_o *)this->fields.servantData;
        if ( !iconLabelInfo2 )
          goto LABEL_58;
        v13 = *(_QWORD *)&iconLabelInfo2->fields.iconKind;
        if ( v13 )
        {
          v14 = (int *)(v13 + 256);
        }
        else
        {
          v28 = *(_QWORD *)&iconLabelInfo2->fields.adjustData;
          if ( !v28 )
            goto LABEL_58;
          v14 = (int *)(v28 + 68);
        }
        this->fields.sortValue1 = *v14;
      }
      v29 = *(_QWORD *)&iconLabelInfo2->fields.iconKind;
      v30 = this->fields.iconLabelInfo1;
      if ( v29 )
      {
        v31 = (int32_t *)(v29 + 256);
      }
      else
      {
        v32 = *(_QWORD *)&iconLabelInfo2->fields.adjustData;
        if ( !v32 )
          goto LABEL_58;
        v31 = (int32_t *)(v32 + 68);
      }
      v33 = *v31;
      iconLabelInfo2 = (IconLabelInfo_o *)ServantCostumeItemInfo__get_MaxLevel(
                                            (ServantCostumeItemInfo_o *)iconLabelInfo2,
                                            v10);
      if ( v30 )
      {
        allCostumeNum = (int)iconLabelInfo2;
        v19 = 2;
        iconLabelInfo2 = v30;
        releaseCostumeNum = v33;
LABEL_55:
        IconLabelInfo__Set_26821248(iconLabelInfo2, v19, releaseCostumeNum, allCostumeNum, 0, 0, 0, 0, 0LL);
        goto LABEL_56;
      }
    }
LABEL_58:
    sub_B0D97C(iconLabelInfo2);
  }
  return (char)iconLabelInfo2;
}


void __fastcall ServantCostumeListViewItem__SetUpdateUserSvtEntity(
        ServantCostumeListViewItem_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct ServantCostumeItemInfo_o *servantData; // x0

  servantData = this->fields.servantData;
  if ( !servantData )
    sub_B0D97C(0LL);
  servantData->fields.userServantEntity = userSvtEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&servantData->fields,
    (System_Int32_array **)userSvtEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  struct ServantEntity_o *servantEntity; // x8
  struct ServantEntity_o *v9; // x8
  struct ServantEntity_o *v10; // x8

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
      servantEntity = this->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_28;
      this = (ServantCostumeListViewItem_o *)SvtType__IsAll(servantEntity->fields.classId, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        return 1;
      v9 = v3->fields.servantEntity;
      if ( !v9 )
        goto LABEL_28;
      this = (ServantCostumeListViewItem_o *)SvtType__IsStatusUp(v9->fields.type, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        return 1;
      v10 = v3->fields.servantEntity;
      if ( !v10 )
        goto LABEL_28;
      this = (ServantCostumeListViewItem_o *)SvtType__IsExpUp(v10->fields.type, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        return 1;
      if ( !sort )
LABEL_28:
        sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  if ( (byte_4217472 & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, method);
    byte_4217472 = 1;
  }
  if ( !this->fields.isHeroineSvt )
    return 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_28088484(126, 0LL);
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
    sub_B0D97C(this);
  return servantData->fields.notHaveServantEntity;
}


int32_t __fastcall ServantCostumeListViewItem__get_SvtId(ServantCostumeListViewItem_o *this, const MethodInfo *method)
{
  ServantCostumeItemInfo_o *servantData; // x0

  servantData = this->fields.servantData;
  if ( !servantData )
    sub_B0D97C(0LL);
  return ServantCostumeItemInfo__get_SvtId(servantData, method);
}


UserServantEntity_o *__fastcall ServantCostumeListViewItem__get_UserSvtEntity(
        ServantCostumeListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantCostumeItemInfo_o *servantData; // x8

  servantData = this->fields.servantData;
  if ( !servantData )
    sub_B0D97C(this);
  return servantData->fields.userServantEntity;
}