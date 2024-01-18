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
  IconLabelInfo_o *v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  ServantCostumeItemInfo_o **p_servantData; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int64_t Instance; // x0
  __int64 v39; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v40; // x24
  struct ServantEntity_o *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  ServantCostumeItemInfo_o *servantData; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v50; // q1
  int64_t v51; // x0
  __int128 v52; // q0
  int64_t v53; // x24
  UserServantEntity_o *v54; // x0
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int v56; // w8
  int64_t v57; // x23
  unsigned int v58; // w24
  __int64 v59; // x28
  __int64 v60; // x8
  unsigned int v61; // w25
  __int64 v62; // x8
  unsigned int v63; // w9
  __int64 v64; // x8
  struct UserServantEntity_o *v65; // x9
  __int128 v66; // q0
  __int64 v67; // x21
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x23
  ServantCostumeItemInfo_o *v69; // x8
  int64_t v70; // x22
  struct ServantEntity_o *servantEntity; // x8
  __int64 v72; // x0
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+70h] [xbp-80h]
  UserServantCollectionEntity_o *entity; // [xsp+90h] [xbp-60h] BYREF

  if ( (byte_418AAA4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, info);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserDeckMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v12);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v13);
    sub_B2C35C(&NetworkManager_TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_418AAA4 = 1;
  }
  entity = 0LL;
  v17 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0LL);
  this->fields.iconLabelInfo1 = v17;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0LL);
  this->fields.iconLabelInfo2 = v24;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.servantData = info;
  p_servantData = &this->fields.servantData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantData,
    (System_Int32_array **)info,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*p_servantData )
    goto LABEL_75;
  v40 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = ServantCostumeItemInfo__get_SvtId(*p_servantData, 0LL);
  if ( !v40 )
    goto LABEL_75;
  v41 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v40,
                                    Instance,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v41;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  Instance = (int64_t)this->fields.servantData;
  if ( !Instance )
    goto LABEL_75;
  Instance = ServantCostumeItemInfo__get_ClassId((ServantCostumeItemInfo_o *)Instance, 0LL);
  servantData = this->fields.servantData;
  this->fields.classId = Instance;
  if ( !servantData )
    goto LABEL_75;
  Instance = ServantCostumeItemInfo__get_Rarity(servantData, 0LL);
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
      v50 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v77.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v77.fields.fakeValue = v50;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v76 = v77;
      v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v76, 0LL);
      v52 = *(_OWORD *)&baseSvtEntity->fields.id.fields.fakeValue;
      v53 = v51;
      *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&baseSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v75.fields.fakeValue = v52;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v75, 0LL);
      if ( v53 == Instance )
        this->fields.isBaseSvt = 1;
    }
  }
  if ( !*p_servantData )
LABEL_75:
    sub_B2C434(Instance, v39);
  v54 = (*p_servantData)->fields.userServantEntity;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  if ( v54 )
  {
    Instance = UserServantEntity__IsHeroine(v54, 0LL);
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
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
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
    v56 = *(_DWORD *)(Instance + 24);
    v57 = Instance;
    if ( v56 >= 1 )
    {
      v58 = 0;
      while ( 1 )
      {
        if ( v58 >= v56 )
        {
LABEL_76:
          v72 = sub_B2C460(Instance);
          sub_B2C400(v72, 0LL);
        }
        v59 = *(_QWORD *)(v57 + 8LL * (int)v58 + 32);
        if ( !v59 )
          goto LABEL_75;
        v60 = *(_QWORD *)(v59 + 48);
        if ( !v60 )
          goto LABEL_75;
        v61 = 0;
        while ( 1 )
        {
          v62 = *(_QWORD *)(v60 + 16);
          if ( !v62 )
            goto LABEL_75;
          v63 = *(_DWORD *)(v62 + 24);
          if ( (int)v61 >= (int)v63 )
            break;
          if ( v61 >= v63 )
            goto LABEL_76;
          v64 = *(_QWORD *)(v62 + 8LL * (int)v61 + 32);
          if ( v64 )
          {
            if ( *p_servantData )
            {
              v65 = (*p_servantData)->fields.userServantEntity;
              if ( v65 )
              {
                v66 = *(_OWORD *)&v65->fields.id.fields.fakeValue;
                v67 = *(_QWORD *)(v64 + 24);
                *(_OWORD *)&v77.fields.currentCryptoKey = *(_OWORD *)&v65->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v77.fields.fakeValue = v66;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v74 = v77;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v74, 0LL);
                if ( v67 == Instance )
                  this->fields.isParty = 1;
                v60 = *(_QWORD *)(v59 + 48);
                ++v61;
                if ( v60 )
                  continue;
              }
            }
          }
          goto LABEL_75;
        }
        v56 = *(_DWORD *)(v57 + 24);
        if ( (int)++v58 >= v56 )
          break;
      }
    }
  }
  else
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    v69 = *p_servantData;
    if ( !*p_servantData )
      goto LABEL_75;
    v70 = Instance;
    Instance = ServantCostumeItemInfo__get_SvtId(v69, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_75;
    Instance = UserServantCollectionMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, v70, Instance, 0LL);
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
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_75;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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

  if ( (byte_418AAA5 & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_418AAA5 = 1;
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
                                                                                  (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_B2C434(ClassGroupFilterKindList, sort);
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        sub_B2C2F8(
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
    sub_B2C434(servantData, userSvtEntity);
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
  __int64 v6; // x1
  char v7; // w8
  IconLabelInfo_o *iconLabelInfo2; // x0
  struct ServantCostumeItemInfo_o *servantData; // x8
  int64_t v10; // x8
  int32_t sortKind; // w8
  struct ServantCostumeItemInfo_o *v12; // x8
  struct ServantCostumeItemInfo_o *v13; // x8
  struct IconLabelInfo_o *iconLabelInfo1; // x20
  int64_t rarity; // x8
  ServantCostumeItemInfo_o *v16; // x8
  int32_t v17; // w19
  int32_t allCostumeNum; // w3
  int32_t v19; // w1
  int32_t releaseCostumeNum; // w2
  struct ServantCostumeItemInfo_o *v21; // x8
  struct ServantCostumeItemInfo_o *v22; // x8
  struct ServantCostumeItemInfo_o *v23; // x8
  ServantCostumeItemInfo_o *v24; // x8
  ServantCostumeItemInfo_o *v25; // x8

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
      goto LABEL_53;
    if ( sort->fields.isSmartSort )
    {
      servantData = this->fields.servantData;
      if ( !servantData )
        goto LABEL_53;
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
              goto LABEL_53;
            iconLabelInfo2 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v12->fields.allCostumeNum;
            if ( !iconLabelInfo2 )
              goto LABEL_53;
            IconLabelInfo__Set_27362128(iconLabelInfo2, 50, v12->fields.allCostumeNum, 0, 0, 0, 0, 0, 0LL);
            goto LABEL_37;
          case 20:
            v21 = this->fields.servantData;
            if ( !v21 )
              goto LABEL_53;
            iconLabelInfo2 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v21->fields.releaseCostumeNum;
            if ( !iconLabelInfo2 )
              goto LABEL_53;
            allCostumeNum = v21->fields.allCostumeNum;
            releaseCostumeNum = v21->fields.releaseCostumeNum;
            v19 = 51;
            goto LABEL_36;
          case 21:
            v22 = this->fields.servantData;
            if ( !v22 )
              goto LABEL_53;
            iconLabelInfo2 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v22->fields.notHavingCostumeNum;
            if ( !iconLabelInfo2 )
              goto LABEL_53;
            allCostumeNum = v22->fields.allCostumeNum;
            releaseCostumeNum = v22->fields.notHavingCostumeNum;
            v19 = 52;
            goto LABEL_36;
          case 22:
            v23 = this->fields.servantData;
            if ( !v23 )
              goto LABEL_53;
            iconLabelInfo2 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v23->fields.notHavingReleaseItemNum;
            if ( !iconLabelInfo2 )
              goto LABEL_53;
            allCostumeNum = v23->fields.allCostumeNum;
            releaseCostumeNum = v23->fields.notHavingReleaseItemNum;
            v19 = 53;
            goto LABEL_36;
          case 23:
            iconLabelInfo2 = (IconLabelInfo_o *)this->fields.servantData;
            if ( !iconLabelInfo2 )
              goto LABEL_53;
            iconLabelInfo2 = (IconLabelInfo_o *)ServantCostumeItemInfo__get_NowLimitCount(
                                                  (ServantCostumeItemInfo_o *)iconLabelInfo2,
                                                  0LL);
            v24 = this->fields.servantData;
            this->fields.sortValue1 = (int)iconLabelInfo2;
            if ( !v24 )
              goto LABEL_53;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            iconLabelInfo2 = (IconLabelInfo_o *)ServantCostumeItemInfo__get_NowLimitCount(v24, 0LL);
            v25 = this->fields.servantData;
            if ( !v25 )
              goto LABEL_53;
            v17 = (int)iconLabelInfo2;
            iconLabelInfo2 = (IconLabelInfo_o *)ServantCostumeItemInfo__get_MaxLimitCount(v25, 0LL);
            if ( !iconLabelInfo1 )
              goto LABEL_53;
            allCostumeNum = (int)iconLabelInfo2;
            v19 = 54;
            goto LABEL_35;
          default:
            if ( sortKind != 8 )
              goto LABEL_37;
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
          goto LABEL_53;
        iconLabelInfo1 = this->fields.iconLabelInfo1;
        goto LABEL_32;
      }
      if ( sortKind != 3 )
      {
LABEL_37:
        LOBYTE(iconLabelInfo2) = 1;
        return (char)iconLabelInfo2;
      }
      iconLabelInfo2 = (IconLabelInfo_o *)this->fields.servantData;
      if ( iconLabelInfo2 )
      {
        iconLabelInfo2 = (IconLabelInfo_o *)ServantCostumeItemInfo__get_Level(
                                              (ServantCostumeItemInfo_o *)iconLabelInfo2,
                                              0LL);
        v13 = this->fields.servantData;
        this->fields.sortValue1 = (int)iconLabelInfo2;
        if ( v13 )
        {
          iconLabelInfo1 = this->fields.iconLabelInfo1;
          iconLabelInfo2 = (IconLabelInfo_o *)v13;
LABEL_32:
          iconLabelInfo2 = (IconLabelInfo_o *)ServantCostumeItemInfo__get_Level(
                                                (ServantCostumeItemInfo_o *)iconLabelInfo2,
                                                0LL);
          v16 = this->fields.servantData;
          if ( v16 )
          {
            v17 = (int)iconLabelInfo2;
            iconLabelInfo2 = (IconLabelInfo_o *)ServantCostumeItemInfo__get_MaxLevel(v16, 0LL);
            if ( iconLabelInfo1 )
            {
              allCostumeNum = (int)iconLabelInfo2;
              v19 = 2;
LABEL_35:
              iconLabelInfo2 = iconLabelInfo1;
              releaseCostumeNum = v17;
LABEL_36:
              IconLabelInfo__Set_27362128(iconLabelInfo2, v19, releaseCostumeNum, allCostumeNum, 0, 0, 0, 0, 0LL);
              goto LABEL_37;
            }
          }
        }
      }
    }
LABEL_53:
    sub_B2C434(iconLabelInfo2, v6);
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
    sub_B2C434(0LL, userSvtEntity);
  servantData->fields.userServantEntity = userSvtEntity;
  sub_B2C2F8(
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
        sub_B2C434(this, sort);
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
    sub_B2C434(this, method);
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
  if ( (byte_418AAA6 & 1) == 0 )
  {
    sub_B2C35C(&TutorialFlag_TypeInfo, method);
    byte_418AAA6 = 1;
  }
  if ( !this->fields.isHeroineSvt )
    return 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_28617756(126, 0LL);
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
    sub_B2C434(this, method);
  return servantData->fields.notHaveServantEntity;
}


int32_t __fastcall ServantCostumeListViewItem__get_SvtId(ServantCostumeListViewItem_o *this, const MethodInfo *method)
{
  ServantCostumeItemInfo_o *servantData; // x0

  servantData = this->fields.servantData;
  if ( !servantData )
    sub_B2C434(0LL, method);
  return ServantCostumeItemInfo__get_SvtId(servantData, 0LL);
}


UserServantEntity_o *__fastcall ServantCostumeListViewItem__get_UserSvtEntity(
        ServantCostumeListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantCostumeItemInfo_o *servantData; // x8

  servantData = this->fields.servantData;
  if ( !servantData )
    sub_B2C434(this, method);
  return servantData->fields.userServantEntity;
}