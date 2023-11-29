void __fastcall ServantCostumeListViewItem___ctor(
        ServantCostumeListViewItem_o *this,
        ServantCostumeItemInfo_o *info,
        UserServantEntity_o *baseSvtEntity,
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
  __int64 v17; // x1
  IconLabelInfo_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  IconLabelInfo_o *v29; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  ServantCostumeItemInfo_o **p_servantData; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v45; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v46; // x24
  int32_t SvtId; // w0
  struct ServantEntity_o *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  const MethodInfo *v55; // x1
  ServantCostumeItemInfo_o *servantData; // x0
  int32_t ClassId; // w0
  const MethodInfo *v58; // x1
  ServantCostumeItemInfo_o *v59; // x8
  int32_t Rarity; // w0
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v62; // q1
  int64_t v63; // x0
  __int128 v64; // q0
  UserServantEntity_o *v65; // x0
  UserServantEntity_o *v66; // x0
  UserServantEntity_o *v67; // x0
  WebViewManager_o *v68; // x0
  UserDeckMaster_o *v69; // x23
  int64_t UserId; // x0
  int64_t DeckList; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  int v74; // w8
  int64_t v75; // x23
  unsigned int v76; // w24
  __int64 v77; // x28
  __int64 v78; // x8
  unsigned int v79; // w25
  __int64 v80; // x8
  unsigned int v81; // w9
  __int64 v82; // x8
  struct UserServantEntity_o *v83; // x9
  __int128 v84; // q0
  __int64 v85; // x21
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x23
  int64_t v87; // x0
  const MethodInfo *v88; // x1
  ServantCostumeItemInfo_o *v89; // x8
  int64_t v90; // x22
  int32_t v91; // w0
  WebViewManager_o *v92; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v93; // x0
  WarEntity_o *v94; // x0
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *iconLabelInfo1; // x0
  IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+70h] [xbp-80h]
  UserServantCollectionEntity_o *entity; // [xsp+90h] [xbp-60h] BYREF

  if ( (byte_40FCED8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, info);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserDeckMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v13);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_40FCED8 = 1;
  }
  entity = 0LL;
  v18 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, info, baseSvtEntity, method, v4);
  IconLabelInfo___ctor(v18, 0LL);
  this->fields.iconLabelInfo1 = v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v29 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v25, v26, v27, v28);
  IconLabelInfo___ctor(v29, 0LL);
  this->fields.iconLabelInfo2 = v29;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.servantData = info;
  p_servantData = &this->fields.servantData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantData,
    (System_Int32_array **)info,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*p_servantData )
    goto LABEL_75;
  v46 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  SvtId = ServantCostumeItemInfo__get_SvtId(*p_servantData, v45);
  if ( !v46 )
    goto LABEL_75;
  v48 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v46,
                                    SvtId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v48;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  servantData = this->fields.servantData;
  if ( !servantData )
    goto LABEL_75;
  ClassId = ServantCostumeItemInfo__get_ClassId(servantData, v55);
  v59 = this->fields.servantData;
  this->fields.classId = ClassId;
  if ( !v59 )
    goto LABEL_75;
  Rarity = ServantCostumeItemInfo__get_Rarity(v59, v58);
  this->fields.isReleaseItemHaving = 0;
  this->fields.isHeroineSvt = 0;
  this->fields.isLetgo = 0;
  this->fields.rarity = Rarity;
  *(_DWORD *)&this->fields.isBaseSvt = 0;
  if ( baseSvtEntity )
  {
    if ( !*p_servantData )
      goto LABEL_75;
    userServantEntity = (*p_servantData)->fields.userServantEntity;
    if ( userServantEntity )
    {
      v62 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v101.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v101.fields.fakeValue = v62;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v100 = v101;
      v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v100, 0LL);
      v64 = *(_OWORD *)&baseSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v99.fields.currentCryptoKey = *(_OWORD *)&baseSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v99.fields.fakeValue = v64;
      if ( v63 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v99, 0LL) )
        this->fields.isBaseSvt = 1;
    }
  }
  if ( !*p_servantData )
LABEL_75:
    sub_B170D4();
  v65 = (*p_servantData)->fields.userServantEntity;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  if ( v65 )
  {
    if ( UserServantEntity__IsHeroine(v65, 0LL) )
      this->fields.isHeroineSvt = 1;
    if ( !*p_servantData )
      goto LABEL_75;
    v66 = (*p_servantData)->fields.userServantEntity;
    if ( !v66 )
      goto LABEL_75;
    if ( UserServantEntity__IsLock(v66, 0LL) )
      this->fields.isLock = 1;
    if ( !*p_servantData )
      goto LABEL_75;
    v67 = (*p_servantData)->fields.userServantEntity;
    if ( !v67 )
      goto LABEL_75;
    if ( UserServantEntity__IsChoice(v67, 0LL) )
      this->fields.isChoice = 1;
    v68 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v68 )
      goto LABEL_75;
    v69 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v68,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v69 )
      goto LABEL_75;
    DeckList = (int64_t)UserDeckMaster__getDeckList(v69, UserId, 0LL);
    if ( !DeckList )
      goto LABEL_75;
    v74 = *(_DWORD *)(DeckList + 24);
    v75 = DeckList;
    if ( v74 >= 1 )
    {
      v76 = 0;
      while ( 1 )
      {
        if ( v76 >= v74 )
        {
LABEL_76:
          sub_B17100(DeckList, v72, v73);
          sub_B170A0();
        }
        v77 = *(_QWORD *)(v75 + 8LL * (int)v76 + 32);
        if ( !v77 )
          goto LABEL_75;
        v78 = *(_QWORD *)(v77 + 48);
        if ( !v78 )
          goto LABEL_75;
        v79 = 0;
        while ( 1 )
        {
          v80 = *(_QWORD *)(v78 + 16);
          if ( !v80 )
            goto LABEL_75;
          v81 = *(_DWORD *)(v80 + 24);
          if ( (int)v79 >= (int)v81 )
            break;
          if ( v79 >= v81 )
            goto LABEL_76;
          v82 = *(_QWORD *)(v80 + 8LL * (int)v79 + 32);
          if ( v82 )
          {
            if ( *p_servantData )
            {
              v83 = (*p_servantData)->fields.userServantEntity;
              if ( v83 )
              {
                v84 = *(_OWORD *)&v83->fields.id.fields.fakeValue;
                v85 = *(_QWORD *)(v82 + 24);
                *(_OWORD *)&v101.fields.currentCryptoKey = *(_OWORD *)&v83->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v101.fields.fakeValue = v84;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v98 = v101;
                DeckList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v98, 0LL);
                if ( v85 == DeckList )
                  this->fields.isParty = 1;
                v78 = *(_QWORD *)(v77 + 48);
                ++v79;
                if ( v78 )
                  continue;
              }
            }
          }
          goto LABEL_75;
        }
        v74 = *(_DWORD *)(v75 + 24);
        if ( (int)++v76 >= v74 )
          break;
      }
    }
  }
  else
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v87 = NetworkManager__get_UserId(0LL);
    v89 = *p_servantData;
    if ( !*p_servantData )
      goto LABEL_75;
    v90 = v87;
    v91 = ServantCostumeItemInfo__get_SvtId(v89, v88);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_75;
    if ( UserServantCollectionMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, v90, v91, 0LL) )
    {
      if ( !entity )
        goto LABEL_75;
      if ( UserServantCollectionEntity__IsGet(entity, 0LL) )
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
  v92 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v92 )
    goto LABEL_75;
  v93 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v92,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !v93 )
    goto LABEL_75;
  v94 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v93,
          this->fields.classId,
          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !v94 )
    goto LABEL_75;
  servantEntity = this->fields.servantEntity;
  this->fields.priority = v94->fields.bannerId;
  if ( !servantEntity )
    goto LABEL_75;
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields.sortValue2 = -servantEntity->fields.collectionNo;
  if ( !iconLabelInfo1 )
    goto LABEL_75;
  IconLabelInfo__Clear(iconLabelInfo1, 0LL);
  if ( !*p_iconLabelInfo2 )
    goto LABEL_75;
  IconLabelInfo__Clear(*p_iconLabelInfo2, 0LL);
}


bool __fastcall ServantCostumeListViewItem__IsMatchFilter(
        ServantCostumeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  FilterKindList_c *v7; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassFilterKindList; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ServantCostumeFilterKind; // x0
  ListViewSort_FilterKind_array *v15; // x0
  FilterKindList_c *v16; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v18; // x21
  _BOOL4 v19; // w23
  struct ServantCostumeItemInfo_o *servantData; // x8

  if ( (byte_40FCED9 & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_40FCED9 = 1;
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
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_42;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0LL) )
  {
    v10 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v10 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v10->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      goto LABEL_42;
    v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             ClassFilterKindList,
                                             (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  ServantCostumeFilterKind = (System_Collections_Generic_List_Voice_BATTLE__o *)v13->static_fields->ServantCostumeFilterKind;
  if ( !ServantCostumeFilterKind )
    goto LABEL_42;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ServantCostumeFilterKind,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL) )
  {
    v19 = ListViewSort__GetFilter(sort, 30, 0LL)
       && !this->fields.isHavingAllReleasedCostume
       && this->fields.isReleaseItemHaving;
    if ( ListViewSort__GetFilter(sort, 31, 0LL) )
    {
      servantData = this->fields.servantData;
      if ( !servantData )
        goto LABEL_42;
      if ( !v19 && servantData->fields.notHavingReleaseItemNum <= 0 )
        return 0;
    }
    else if ( !v19 )
    {
      return 0;
    }
  }
  v16 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v16->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
LABEL_42:
    sub_B170D4();
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v18, 0LL)
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
        sub_B16F98(
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
    sub_B170D4();
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
  bool result; // w0
  struct ServantCostumeItemInfo_o *servantData; // x8
  int64_t v9; // x8
  IconLabelInfo_o *iconLabelInfo2; // x0
  const MethodInfo *v11; // x1
  int32_t sortKind; // w8
  struct ServantCostumeItemInfo_o *v13; // x8
  IconLabelInfo_o *iconLabelInfo1; // x0
  struct ServantCostumeItemInfo_o *v15; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t *p_lv; // x8
  int64_t rarity; // x8
  struct ServantCostumeItemInfo_o *v19; // x8
  IconLabelInfo_o *v20; // x0
  int32_t allCostumeNum; // w3
  int32_t releaseCostumeNum; // w2
  int32_t v23; // w1
  ServantCostumeItemInfo_o *v24; // x0
  int32_t NowLimitCount; // w0
  const MethodInfo *v26; // x1
  ServantCostumeItemInfo_o *v27; // x8
  IconLabelInfo_o *v28; // x20
  int32_t v29; // w0
  const MethodInfo *v30; // x1
  ServantCostumeItemInfo_o *v31; // x8
  int32_t v32; // w19
  int32_t MaxLimitCount; // w0
  struct ServantCostumeItemInfo_o *v34; // x8
  struct ServantCostumeItemInfo_o *v35; // x8
  struct ServantLeaderInfo_o *notHaveServantEntity; // x8
  struct UserServantEntity_o *v37; // x8
  struct IconLabelInfo_o *v38; // x19
  int32_t *v39; // x8
  struct ServantLeaderInfo_o *v40; // x8
  int32_t v41; // w20
  int32_t MaxLevel; // w0

  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  v6 = ((__int64 (__fastcall *)(ServantCostumeListViewItem_o *, ListViewSort_o *, void *))klass->vtable._5_IsMatchFilter.method)(
         this,
         sort,
         klass[1]._1.image);
  result = 0;
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
            v13 = this->fields.servantData;
            if ( !v13 )
              goto LABEL_58;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v13->fields.allCostumeNum;
            if ( !iconLabelInfo1 )
              goto LABEL_58;
            IconLabelInfo__Set_28888132(iconLabelInfo1, 50, v13->fields.allCostumeNum, 0, 0, 0, 0, 0, 0LL);
            return 1;
          case 20:
            v34 = this->fields.servantData;
            if ( !v34 )
              goto LABEL_58;
            v20 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v34->fields.releaseCostumeNum;
            if ( !v20 )
              goto LABEL_58;
            allCostumeNum = v34->fields.allCostumeNum;
            releaseCostumeNum = v34->fields.releaseCostumeNum;
            v23 = 51;
            goto LABEL_55;
          case 21:
            v19 = this->fields.servantData;
            if ( !v19 )
              goto LABEL_58;
            v20 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v19->fields.notHavingCostumeNum;
            if ( !v20 )
              goto LABEL_58;
            allCostumeNum = v19->fields.allCostumeNum;
            releaseCostumeNum = v19->fields.notHavingCostumeNum;
            v23 = 52;
            goto LABEL_55;
          case 22:
            v35 = this->fields.servantData;
            if ( !v35 )
              goto LABEL_58;
            v20 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v35->fields.notHavingReleaseItemNum;
            if ( !v20 )
              goto LABEL_58;
            allCostumeNum = v35->fields.allCostumeNum;
            releaseCostumeNum = v35->fields.notHavingReleaseItemNum;
            v23 = 53;
            goto LABEL_55;
          case 23:
            v24 = this->fields.servantData;
            if ( !v24 )
              goto LABEL_58;
            NowLimitCount = ServantCostumeItemInfo__get_NowLimitCount(v24, v11);
            v27 = this->fields.servantData;
            this->fields.sortValue1 = NowLimitCount;
            if ( !v27 )
              goto LABEL_58;
            v28 = this->fields.iconLabelInfo1;
            v29 = ServantCostumeItemInfo__get_NowLimitCount(v27, v26);
            v31 = this->fields.servantData;
            if ( !v31 )
              goto LABEL_58;
            v32 = v29;
            MaxLimitCount = ServantCostumeItemInfo__get_MaxLimitCount(v31, v30);
            if ( !v28 )
              goto LABEL_58;
            IconLabelInfo__Set_28888132(v28, 54, v32, MaxLimitCount, 0, 0, 0, 0, 0LL);
            return 1;
          default:
            if ( sortKind != 8 )
              return 1;
            v15 = this->fields.servantData;
            rarity = -this->fields.priority;
            goto LABEL_30;
        }
      }
      if ( sortKind == 2 )
      {
        rarity = this->fields.rarity;
        v15 = this->fields.servantData;
LABEL_30:
        this->fields.sortValue1 = rarity;
        if ( !v15 )
          goto LABEL_58;
      }
      else
      {
        if ( sortKind != 3 )
          return 1;
        v15 = this->fields.servantData;
        if ( !v15 )
          goto LABEL_58;
        userServantEntity = v15->fields.userServantEntity;
        if ( userServantEntity )
        {
          p_lv = &userServantEntity->fields.lv;
        }
        else
        {
          notHaveServantEntity = v15->fields.notHaveServantEntity;
          if ( !notHaveServantEntity )
            goto LABEL_58;
          p_lv = &notHaveServantEntity->fields.lv;
        }
        this->fields.sortValue1 = *p_lv;
      }
      v37 = v15->fields.userServantEntity;
      v38 = this->fields.iconLabelInfo1;
      if ( v37 )
      {
        v39 = &v37->fields.lv;
      }
      else
      {
        v40 = v15->fields.notHaveServantEntity;
        if ( !v40 )
          goto LABEL_58;
        v39 = &v40->fields.lv;
      }
      v41 = *v39;
      MaxLevel = ServantCostumeItemInfo__get_MaxLevel(v15, v11);
      if ( v38 )
      {
        allCostumeNum = MaxLevel;
        v23 = 2;
        v20 = v38;
        releaseCostumeNum = v41;
LABEL_55:
        IconLabelInfo__Set_28888132(v20, v23, releaseCostumeNum, allCostumeNum, 0, 0, 0, 0, 0LL);
        return 1;
      }
    }
LABEL_58:
    sub_B170D4();
  }
  return result;
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
    sub_B170D4();
  servantData->fields.userServantEntity = userSvtEntity;
  sub_B16F98(
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
  bool Filter; // w8
  bool result; // w0
  int32_t v7; // w1
  ServantEntity_o *servantEntity; // x0
  ServantEntity_o *v9; // x0
  ServantEntity_o *v10; // x0

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
      if ( ServantEntity__get_IsAllClass(servantEntity, 0LL) )
        return 1;
      v9 = this->fields.servantEntity;
      if ( !v9 )
        goto LABEL_28;
      if ( ServantEntity__get_IsStatusUp(v9, 0LL) )
        return 1;
      v10 = this->fields.servantEntity;
      if ( !v10 )
        goto LABEL_28;
      if ( ServantEntity__get_IsExpUp(v10, 0LL) )
        return 1;
      if ( !sort )
LABEL_28:
        sub_B170D4();
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
    sub_B170D4();
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
  if ( (byte_40FCEDA & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    byte_40FCEDA = 1;
  }
  if ( !this->fields.isHeroineSvt )
    return 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_28023340(126, 0LL);
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
    sub_B170D4();
  return servantData->fields.notHaveServantEntity;
}


int32_t __fastcall ServantCostumeListViewItem__get_SvtId(ServantCostumeListViewItem_o *this, const MethodInfo *method)
{
  ServantCostumeItemInfo_o *servantData; // x0

  servantData = this->fields.servantData;
  if ( !servantData )
    sub_B170D4();
  return ServantCostumeItemInfo__get_SvtId(servantData, method);
}


UserServantEntity_o *__fastcall ServantCostumeListViewItem__get_UserSvtEntity(
        ServantCostumeListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantCostumeItemInfo_o *servantData; // x8

  servantData = this->fields.servantData;
  if ( !servantData )
    sub_B170D4();
  return servantData->fields.userServantEntity;
}