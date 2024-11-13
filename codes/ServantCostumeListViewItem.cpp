void __fastcall ServantCostumeListViewItem___ctor(
        ServantCostumeListViewItem_o *this,
        ServantCostumeItemInfo_o *info,
        UserServantEntity_o *baseSvtEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  IconLabelInfo_o *v27; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  IconLabelInfo_o *v37; // x22
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  ServantCostumeItemInfo_o **p_servantData; // x22
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t Instance; // x0
  const MethodInfo *v52; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v53; // x24
  Il2CppObject *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  ServantCostumeItemInfo_o *servantData; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v63; // q1
  int64_t v64; // x0
  __int128 v65; // q1
  int64_t v66; // x24
  UserServantEntity_o *v67; // x0
  __int64 v68; // x1
  Il2CppObject *MasterData_object; // x23
  int v70; // w8
  int64_t v71; // x23
  unsigned int v72; // w24
  __int64 v73; // x28
  __int64 v74; // x8
  unsigned int v75; // w29
  __int64 v76; // x8
  unsigned int v77; // w9
  __int64 v78; // x8
  struct UserServantEntity_o *v79; // x9
  __int128 v80; // q0
  __int64 v81; // x25
  __int64 v82; // x1
  Il2CppObject *Master_object; // x23
  ServantCostumeItemInfo_o *v84; // x8
  int64_t v85; // x22
  struct ServantEntity_o *servantEntity; // x8
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+70h] [xbp-90h]
  UserServantCollectionEntity_o *entity; // [xsp+98h] [xbp-68h] BYREF

  if ( (byte_4B19E63 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, info, baseSvtEntity);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserDeckMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v19, v20);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    byte_4B19E63 = 1;
  }
  entity = 0LL;
  v27 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, info, baseSvtEntity, method);
  IconLabelInfo___ctor(v27, 0LL);
  this->fields.iconLabelInfo1 = v27;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v27, v28, v29, v30, v31, v32, v33);
  v37 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v34, v35, v36);
  IconLabelInfo___ctor(v37, 0LL);
  this->fields.iconLabelInfo2 = v37;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v37, v38, v39, v40, v41, v42, v43);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.servantData = info;
  p_servantData = &this->fields.servantData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantData, (int64_t)info, v45, v46, v47, v48, v49, v50);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*p_servantData )
    goto LABEL_70;
  v53 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = ServantCostumeItemInfo__get_SvtId(*p_servantData, v52);
  if ( !v53 )
    goto LABEL_70;
  v54 = DataMasterBase_object__object__int___GetEntity(
          v53,
          Instance,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v54;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantEntity, (int64_t)v54, v55, v56, v57, v58, v59, v60);
  Instance = (int64_t)this->fields.servantData;
  if ( !Instance )
    goto LABEL_70;
  Instance = ServantCostumeItemInfo__get_ClassId((ServantCostumeItemInfo_o *)Instance, v52);
  servantData = this->fields.servantData;
  this->fields.classId = Instance;
  if ( !servantData )
    goto LABEL_70;
  Instance = ServantCostumeItemInfo__get_Rarity(servantData, v52);
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
      v63 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v91.fields.fakeValue = v63;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v52);
      v90 = v91;
      v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v90, 0LL);
      v65 = *(_OWORD *)&baseSvtEntity->fields.id.fields.fakeValue;
      v66 = v64;
      *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&baseSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v89.fields.fakeValue = v65;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v89, 0LL);
      if ( v66 == Instance )
        this->fields.isBaseSvt = 1;
    }
  }
  if ( !*p_servantData )
LABEL_70:
    sub_1BCAA3C(Instance, v52);
  v67 = (*p_servantData)->fields.userServantEntity;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  if ( v67 )
  {
    Instance = UserServantEntity__IsHeroine(v67, 0LL);
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
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_70;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v68);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_70;
    Instance = (int64_t)UserDeckMaster__getDeckList((UserDeckMaster_o *)MasterData_object, Instance, 0LL);
    if ( !Instance )
      goto LABEL_70;
    v70 = *(_DWORD *)(Instance + 24);
    v71 = Instance;
    if ( v70 >= 1 )
    {
      v72 = 0;
      while ( 1 )
      {
        if ( v72 >= v70 )
LABEL_71:
          sub_1BCAA44(Instance, v52);
        v73 = *(_QWORD *)(v71 + 8LL * (int)v72 + 32);
        if ( !v73 )
          goto LABEL_70;
        v74 = *(_QWORD *)(v73 + 48);
        if ( !v74 )
          goto LABEL_70;
        v75 = 0;
        while ( 1 )
        {
          v76 = *(_QWORD *)(v74 + 16);
          if ( !v76 )
            goto LABEL_70;
          v77 = *(_DWORD *)(v76 + 24);
          if ( (int)v75 >= (int)v77 )
            break;
          if ( v75 >= v77 )
            goto LABEL_71;
          v78 = *(_QWORD *)(v76 + 8LL * (int)v75 + 32);
          if ( v78 )
          {
            if ( *p_servantData )
            {
              v79 = (*p_servantData)->fields.userServantEntity;
              if ( v79 )
              {
                v80 = *(_OWORD *)&v79->fields.id.fields.fakeValue;
                v81 = *(_QWORD *)(v78 + 24);
                *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&v79->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v91.fields.fakeValue = v80;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v52);
                v88 = v91;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v88, 0LL);
                if ( v81 == Instance )
                  this->fields.isParty = 1;
                v74 = *(_QWORD *)(v73 + 48);
                ++v75;
                if ( v74 )
                  continue;
              }
            }
          }
          goto LABEL_70;
        }
        v70 = *(_DWORD *)(v71 + 24);
        if ( (int)++v72 >= v70 )
          break;
      }
    }
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v52);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v82);
    Instance = NetworkManager__get_UserId(0LL);
    v84 = *p_servantData;
    if ( !*p_servantData )
      goto LABEL_70;
    v85 = Instance;
    Instance = ServantCostumeItemInfo__get_SvtId(v84, v52);
    if ( !Master_object )
      goto LABEL_70;
    Instance = UserServantCollectionMaster__TryGetEntity(
                 (UserServantCollectionMaster_o *)Master_object,
                 &entity,
                 v85,
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_70;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_70;
  servantEntity = this->fields.servantEntity;
  this->fields.priority = *(_DWORD *)(Instance + 52);
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
  __int64 v5; // x1
  __int64 v6; // x2
  FilterKindList_c *v8; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  _BOOL4 v14; // w23
  struct ServantCostumeItemInfo_o *servantData; // x8
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x21

  if ( (byte_4B19E64 & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, sort, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5, v6);
    byte_4B19E64 = 1;
  }
  if ( this->fields.isBaseSvt )
    return 1;
  v8 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_37;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_37;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v10 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
      v10 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v10->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_37;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             ClassGroupFilterKindList,
                                             (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v12 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v12->static_fields->ServantCostumeFilterKind;
  if ( !ClassGroupFilterKindList )
    goto LABEL_37;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL) )
  {
    v14 = ListViewSort__GetFilter(sort, 30, 0LL)
       && !this->fields.isHavingAllReleasedCostume
       && this->fields.isReleaseItemHaving;
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__GetFilter(sort, 31, 0LL);
    if ( ((unsigned __int8)ClassGroupFilterKindList & 1) != 0 )
    {
      servantData = this->fields.servantData;
      if ( !servantData )
        goto LABEL_37;
      if ( !v14 && servantData->fields.notHavingReleaseItemNum <= 0 )
        return 0;
    }
    else if ( !v14 )
    {
      return 0;
    }
  }
  v16 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v16 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v16->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_37:
    sub_1BCAA3C(ClassGroupFilterKindList, sort);
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v17, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall ServantCostumeListViewItem__ModifyItem(
        ServantCostumeListViewItem_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct ServantCostumeItemInfo_o *servantData; // x0

  servantData = this->fields.servantData;
  if ( !servantData
    || (servantData->fields.userServantEntity = userSvtEntity,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&servantData->fields,
          (int64_t)userSvtEntity,
          (int64_t)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        !userSvtEntity) )
  {
    sub_1BCAA3C(servantData, userSvtEntity);
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
          IconLabelInfo__Set_38850420(iconLabelInfo2, 50, allCostumeNum, 0, 0, 0, 0, 0, 0LL);
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
          IconLabelInfo__Set_38850420(iconLabelInfo2, v25, releaseCostumeNum, v24, 0, 0, 0, 0, 0LL);
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
          IconLabelInfo__Set_38850420(iconLabelInfo1, 54, v31, (int32_t)iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_38850420(v18, 2, v21, (int32_t)iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
        IconLabelInfo__Set_38850420(v34, 2, v33, (int32_t)iconLabelInfo2, 0, 0, 0, 0, 0LL);
        goto LABEL_56;
      }
LABEL_58:
      sub_1BCAA3C(iconLabelInfo2, v6);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct ServantCostumeItemInfo_o *servantData; // x0

  servantData = this->fields.servantData;
  if ( !servantData )
    sub_1BCAA3C(0LL, userSvtEntity);
  servantData->fields.userServantEntity = userSvtEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&servantData->fields,
    (int64_t)userSvtEntity,
    (int64_t)method,
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
        sub_1BCAA3C(this, sort);
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2

  if ( (byte_4B19E65 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B19E65 = 1;
  }
  if ( !this->fields.isHeroineSvt )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  return TutorialFlag__Get_38402052(126, 0LL);
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
    sub_1BCAA3C(this, method);
  return servantData->fields.notHaveServantEntity;
}


int32_t __fastcall ServantCostumeListViewItem__get_SvtId(ServantCostumeListViewItem_o *this, const MethodInfo *method)
{
  ServantCostumeItemInfo_o *servantData; // x0

  servantData = this->fields.servantData;
  if ( !servantData )
    sub_1BCAA3C(0LL, method);
  return ServantCostumeItemInfo__get_SvtId(servantData, method);
}


UserServantEntity_o *__fastcall ServantCostumeListViewItem__get_UserSvtEntity(
        ServantCostumeListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantCostumeItemInfo_o *servantData; // x8

  servantData = this->fields.servantData;
  if ( !servantData )
    sub_1BCAA3C(this, method);
  return servantData->fields.userServantEntity;
}