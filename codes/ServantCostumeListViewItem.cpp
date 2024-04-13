void __fastcall ServantCostumeListViewItem___ctor(
        ServantCostumeListViewItem_o *this,
        ServantCostumeItemInfo_o *info,
        UserServantEntity_o *baseSvtEntity,
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
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  IconLabelInfo_o *v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  IconLabelInfo_o *v44; // x22
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  ServantCostumeItemInfo_o **p_servantData; // x22
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  int64_t Instance; // x0
  const MethodInfo *v59; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v60; // x24
  struct ServantEntity_o *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  ServantCostumeItemInfo_o *servantData; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v70; // q1
  int64_t v71; // x0
  __int128 v72; // q0
  int64_t v73; // x24
  UserServantEntity_o *v74; // x0
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int v76; // w8
  int64_t v77; // x23
  unsigned int v78; // w24
  __int64 v79; // x28
  __int64 v80; // x8
  unsigned int v81; // w25
  __int64 v82; // x8
  unsigned int v83; // w9
  __int64 v84; // x8
  struct UserServantEntity_o *v85; // x9
  __int128 v86; // q0
  __int64 v87; // x21
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x23
  ServantCostumeItemInfo_o *v89; // x8
  int64_t v90; // x22
  struct ServantEntity_o *servantEntity; // x8
  __int64 v92; // x0
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+70h] [xbp-80h]
  UserServantCollectionEntity_o *entity; // [xsp+90h] [xbp-60h] BYREF

  if ( (byte_42EB8EB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, (_DWORD)info, (_DWORD)baseSvtEntity, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserDeckMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v13, v14, v15);
    sub_B5D5C4(&DataManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19, v20, v21);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v22, v23, v24);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&NetworkManager_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35, v36);
    byte_42EB8EB = 1;
  }
  entity = 0LL;
  v37 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v37, 0LL);
  this->fields.iconLabelInfo1 = v37;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v44, 0LL);
  this->fields.iconLabelInfo2 = v44;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.servantData = info;
  p_servantData = &this->fields.servantData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantData,
    (System_Int32_array **)info,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*p_servantData )
    goto LABEL_75;
  v60 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = ServantCostumeItemInfo__get_SvtId(*p_servantData, v59);
  if ( !v60 )
    goto LABEL_75;
  v61 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v60,
                                    Instance,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v61;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  Instance = (int64_t)this->fields.servantData;
  if ( !Instance )
    goto LABEL_75;
  Instance = ServantCostumeItemInfo__get_ClassId((ServantCostumeItemInfo_o *)Instance, v59);
  servantData = this->fields.servantData;
  this->fields.classId = Instance;
  if ( !servantData )
    goto LABEL_75;
  Instance = ServantCostumeItemInfo__get_Rarity(servantData, v59);
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
      v70 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v97.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v97.fields.fakeValue = v70;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v96 = v97;
      v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v96, 0LL);
      v72 = *(_OWORD *)&baseSvtEntity->fields.id.fields.fakeValue;
      v73 = v71;
      *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)&baseSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v95.fields.fakeValue = v72;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v95, 0LL);
      if ( v73 == Instance )
        this->fields.isBaseSvt = 1;
    }
  }
  if ( !*p_servantData )
LABEL_75:
    sub_B5D69C(Instance, v59);
  v74 = (*p_servantData)->fields.userServantEntity;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  if ( v74 )
  {
    Instance = UserServantEntity__IsHeroine(v74, 0LL);
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
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserDeckMaster___);
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
    v76 = *(_DWORD *)(Instance + 24);
    v77 = Instance;
    if ( v76 >= 1 )
    {
      v78 = 0;
      while ( 1 )
      {
        if ( v78 >= v76 )
        {
LABEL_76:
          v92 = sub_B5D6C8(Instance);
          sub_B5D668(v92, 0LL);
        }
        v79 = *(_QWORD *)(v77 + 8LL * (int)v78 + 32);
        if ( !v79 )
          goto LABEL_75;
        v80 = *(_QWORD *)(v79 + 48);
        if ( !v80 )
          goto LABEL_75;
        v81 = 0;
        while ( 1 )
        {
          v82 = *(_QWORD *)(v80 + 16);
          if ( !v82 )
            goto LABEL_75;
          v83 = *(_DWORD *)(v82 + 24);
          if ( (int)v81 >= (int)v83 )
            break;
          if ( v81 >= v83 )
            goto LABEL_76;
          v84 = *(_QWORD *)(v82 + 8LL * (int)v81 + 32);
          if ( v84 )
          {
            if ( *p_servantData )
            {
              v85 = (*p_servantData)->fields.userServantEntity;
              if ( v85 )
              {
                v86 = *(_OWORD *)&v85->fields.id.fields.fakeValue;
                v87 = *(_QWORD *)(v84 + 24);
                *(_OWORD *)&v97.fields.currentCryptoKey = *(_OWORD *)&v85->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v97.fields.fakeValue = v86;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v94 = v97;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v94, 0LL);
                if ( v87 == Instance )
                  this->fields.isParty = 1;
                v80 = *(_QWORD *)(v79 + 48);
                ++v81;
                if ( v80 )
                  continue;
              }
            }
          }
          goto LABEL_75;
        }
        v76 = *(_DWORD *)(v77 + 24);
        if ( (int)++v78 >= v76 )
          break;
      }
    }
  }
  else
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    v89 = *p_servantData;
    if ( !*p_servantData )
      goto LABEL_75;
    v90 = Instance;
    Instance = ServantCostumeItemInfo__get_SvtId(v89, v59);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_75;
    Instance = UserServantCollectionMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, v90, Instance, 0LL);
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
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_75;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  FilterKindList_c *v10; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x21
  _BOOL4 v18; // w23
  struct ServantCostumeItemInfo_o *servantData; // x8

  if ( (byte_42EB8EC & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6, v7, v8);
    byte_42EB8EC = 1;
  }
  if ( this->fields.isBaseSvt )
    return 1;
  v10 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v10 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v10->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_42;
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                                                  ClassGroupFilterKindList,
                                                                                  (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_42;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v12 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v12 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v12->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_42;
    v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             ClassGroupFilterKindList,
                                             (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v14->static_fields->ServantCostumeFilterKind;
  if ( !ClassGroupFilterKindList )
    goto LABEL_42;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL) )
  {
    v18 = ListViewSort__GetFilter(sort, 30, 0LL)
       && !this->fields.isHavingAllReleasedCostume
       && this->fields.isReleaseItemHaving;
    ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)ListViewSort__GetFilter(sort, 31, 0LL);
    if ( ((unsigned __int8)ClassGroupFilterKindList & 1) != 0 )
    {
      servantData = this->fields.servantData;
      if ( !servantData )
        goto LABEL_42;
      if ( !v18 && servantData->fields.notHavingReleaseItemNum <= 0 )
        return 0;
    }
    else if ( !v18 )
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
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v16->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_42:
    sub_B5D69C(ClassGroupFilterKindList, sort);
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v17, 0LL)
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
        sub_B5D560(
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
    sub_B5D69C(servantData, userSvtEntity);
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
  __int64 v13; // x8
  int *v14; // x8
  int64_t rarity; // x8
  struct ServantCostumeItemInfo_o *v16; // x8
  int32_t allCostumeNum; // w3
  int32_t releaseCostumeNum; // w2
  int32_t v19; // w1
  ServantCostumeItemInfo_o *v20; // x8
  IconLabelInfo_o *iconLabelInfo1; // x20
  ServantCostumeItemInfo_o *v22; // x8
  int32_t v23; // w19
  struct ServantCostumeItemInfo_o *v24; // x8
  struct ServantCostumeItemInfo_o *v25; // x8
  __int64 v26; // x8
  __int64 v27; // x8
  struct IconLabelInfo_o *v28; // x19
  int32_t *v29; // x8
  __int64 v30; // x8
  int32_t v31; // w20

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
            IconLabelInfo__Set_28463004(iconLabelInfo2, 50, v12->fields.allCostumeNum, 0, 0, 0, 0, 0, 0LL);
            goto LABEL_56;
          case 20:
            v24 = this->fields.servantData;
            if ( !v24 )
              goto LABEL_58;
            iconLabelInfo2 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v24->fields.releaseCostumeNum;
            if ( !iconLabelInfo2 )
              goto LABEL_58;
            allCostumeNum = v24->fields.allCostumeNum;
            releaseCostumeNum = v24->fields.releaseCostumeNum;
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
            v25 = this->fields.servantData;
            if ( !v25 )
              goto LABEL_58;
            iconLabelInfo2 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v25->fields.notHavingReleaseItemNum;
            if ( !iconLabelInfo2 )
              goto LABEL_58;
            allCostumeNum = v25->fields.allCostumeNum;
            releaseCostumeNum = v25->fields.notHavingReleaseItemNum;
            v19 = 53;
            goto LABEL_55;
          case 23:
            iconLabelInfo2 = (IconLabelInfo_o *)this->fields.servantData;
            if ( !iconLabelInfo2 )
              goto LABEL_58;
            iconLabelInfo2 = (IconLabelInfo_o *)ServantCostumeItemInfo__get_NowLimitCount(
                                                  (ServantCostumeItemInfo_o *)iconLabelInfo2,
                                                  v6);
            v20 = this->fields.servantData;
            this->fields.sortValue1 = (int)iconLabelInfo2;
            if ( !v20 )
              goto LABEL_58;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            iconLabelInfo2 = (IconLabelInfo_o *)ServantCostumeItemInfo__get_NowLimitCount(v20, v6);
            v22 = this->fields.servantData;
            if ( !v22 )
              goto LABEL_58;
            v23 = (int)iconLabelInfo2;
            iconLabelInfo2 = (IconLabelInfo_o *)ServantCostumeItemInfo__get_MaxLimitCount(v22, v6);
            if ( !iconLabelInfo1 )
              goto LABEL_58;
            IconLabelInfo__Set_28463004(iconLabelInfo1, 54, v23, (int32_t)iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
          v26 = *(_QWORD *)&iconLabelInfo2->fields.adjustData;
          if ( !v26 )
            goto LABEL_58;
          v14 = (int *)(v26 + 68);
        }
        this->fields.sortValue1 = *v14;
      }
      v27 = *(_QWORD *)&iconLabelInfo2->fields.iconKind;
      v28 = this->fields.iconLabelInfo1;
      if ( v27 )
      {
        v29 = (int32_t *)(v27 + 256);
      }
      else
      {
        v30 = *(_QWORD *)&iconLabelInfo2->fields.adjustData;
        if ( !v30 )
          goto LABEL_58;
        v29 = (int32_t *)(v30 + 68);
      }
      v31 = *v29;
      iconLabelInfo2 = (IconLabelInfo_o *)ServantCostumeItemInfo__get_MaxLevel(
                                            (ServantCostumeItemInfo_o *)iconLabelInfo2,
                                            v6);
      if ( v28 )
      {
        allCostumeNum = (int)iconLabelInfo2;
        v19 = 2;
        iconLabelInfo2 = v28;
        releaseCostumeNum = v31;
LABEL_55:
        IconLabelInfo__Set_28463004(iconLabelInfo2, v19, releaseCostumeNum, allCostumeNum, 0, 0, 0, 0, 0LL);
        goto LABEL_56;
      }
    }
LABEL_58:
    sub_B5D69C(iconLabelInfo2, v6);
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
    sub_B5D69C(0LL, userSvtEntity);
  servantData->fields.userServantEntity = userSvtEntity;
  sub_B5D560(
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
        sub_B5D69C(this, sort);
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB8ED & 1) == 0 )
  {
    sub_B5D5C4(&TutorialFlag_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB8ED = 1;
  }
  if ( !this->fields.isHeroineSvt )
    return 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_29295864(126, 0LL);
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
    sub_B5D69C(this, method);
  return servantData->fields.notHaveServantEntity;
}


int32_t __fastcall ServantCostumeListViewItem__get_SvtId(ServantCostumeListViewItem_o *this, const MethodInfo *method)
{
  ServantCostumeItemInfo_o *servantData; // x0

  servantData = this->fields.servantData;
  if ( !servantData )
    sub_B5D69C(0LL, method);
  return ServantCostumeItemInfo__get_SvtId(servantData, method);
}


UserServantEntity_o *__fastcall ServantCostumeListViewItem__get_UserSvtEntity(
        ServantCostumeListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantCostumeItemInfo_o *servantData; // x8

  servantData = this->fields.servantData;
  if ( !servantData )
    sub_B5D69C(this, method);
  return servantData->fields.userServantEntity;
}