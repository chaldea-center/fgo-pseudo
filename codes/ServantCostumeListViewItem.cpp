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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  IconLabelInfo_o *v24; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  ServantCostumeItemInfo_o **p_servantData; // x22
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t Instance; // x0
  const MethodInfo *v39; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x24
  Il2CppObject *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  ServantCostumeItemInfo_o *servantData; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v50; // q1
  int64_t v51; // x0
  __int128 v52; // q1
  int64_t v53; // x24
  UserServantEntity_o *v54; // x0
  Il2CppObject *MasterData_object; // x23
  int v56; // w8
  int64_t v57; // x23
  unsigned int v58; // w24
  __int64 v59; // x28
  __int64 v60; // x8
  unsigned int v61; // w29
  __int64 v62; // x8
  unsigned int v63; // w9
  __int64 v64; // x8
  struct UserServantEntity_o *v65; // x9
  __int128 v66; // q0
  __int64 v67; // x25
  Il2CppObject *Master_object; // x23
  __int64 v69; // x9
  ServantCostumeItemInfo_o *v70; // x0
  int64_t v71; // x22
  struct ServantEntity_o *servantEntity; // x8
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+70h] [xbp-90h]
  UserServantCollectionEntity_o *entity; // [xsp+98h] [xbp-68h] BYREF

  if ( (byte_4BB83F9 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantClassMaster___, info);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserDeckMaster___, v8);
    sub_1C13D24(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_1C13D24(&DataManager_TypeInfo, v10);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1C13D24(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v12);
    sub_1C13D24(&IconLabelInfo_TypeInfo, v13);
    sub_1C13D24(&NetworkManager_TypeInfo, v14);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4BB83F9 = 1;
  }
  entity = 0LL;
  v17 = (IconLabelInfo_o *)sub_1C13F70(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0LL);
  this->fields.iconLabelInfo1 = v17;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (IconLabelInfo_o *)sub_1C13F70(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0LL);
  this->fields.iconLabelInfo2 = v24;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.servantData = info;
  p_servantData = &this->fields.servantData;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.servantData, (int64_t)info, v32, v33, v34, v35, v36, v37);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*p_servantData )
    goto LABEL_78;
  v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = ServantCostumeItemInfo__get_SvtId(*p_servantData, v39);
  if ( !v40 )
    goto LABEL_78;
  v41 = DataMasterBase_object__object__int___GetEntity(
          v40,
          Instance,
          (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v41;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.servantEntity, (int64_t)v41, v42, v43, v44, v45, v46, v47);
  Instance = (int64_t)this->fields.servantData;
  if ( !Instance )
    goto LABEL_78;
  Instance = ServantCostumeItemInfo__get_ClassId((ServantCostumeItemInfo_o *)Instance, v39);
  servantData = this->fields.servantData;
  this->fields.classId = Instance;
  if ( !servantData )
    goto LABEL_78;
  Instance = ServantCostumeItemInfo__get_Rarity(servantData, v39);
  this->fields.isReleaseItemHaving = 0;
  this->fields.isHeroineSvt = 0;
  this->fields.isLetgo = 0;
  *(_QWORD *)&this->fields.rarity = (unsigned int)Instance;
  if ( baseSvtEntity )
  {
    if ( !*p_servantData )
      goto LABEL_78;
    userServantEntity = (*p_servantData)->fields.userServantEntity;
    if ( userServantEntity )
    {
      v50 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v77.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v77.fields.fakeValue = v50;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v76 = v77;
      v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v76, 0LL);
      v52 = *(_OWORD *)&baseSvtEntity->fields.id.fields.fakeValue;
      v53 = v51;
      *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&baseSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v75.fields.fakeValue = v52;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v75, 0LL);
      if ( v53 == Instance )
        this->fields.isBaseSvt = 1;
    }
  }
  if ( !*p_servantData )
LABEL_78:
    sub_1C13F80(Instance, v39);
  v54 = (*p_servantData)->fields.userServantEntity;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  if ( v54 )
  {
    Instance = UserServantEntity__IsHeroine(v54, 0LL);
    if ( (Instance & 1) != 0 )
      this->fields.isHeroineSvt = 1;
    if ( !*p_servantData )
      goto LABEL_78;
    Instance = (int64_t)(*p_servantData)->fields.userServantEntity;
    if ( !Instance )
      goto LABEL_78;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
      this->fields.isLock = 1;
    if ( !*p_servantData )
      goto LABEL_78;
    Instance = (int64_t)(*p_servantData)->fields.userServantEntity;
    if ( !Instance )
      goto LABEL_78;
    if ( UserServantEntity__IsChoice((UserServantEntity_o *)Instance, 0LL) )
      this->fields.isChoice = 1;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_78;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BAF1E5 )
    {
      sub_1C13D24(&NetworkManager_TypeInfo, v39);
      byte_4BAF1E5 = 1;
    }
    Instance = (int64_t)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (int64_t)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_78;
    Instance = (int64_t)UserDeckMaster__getDeckList(
                          (UserDeckMaster_o *)MasterData_object,
                          *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                          0LL);
    if ( !Instance )
      goto LABEL_78;
    v56 = *(_DWORD *)(Instance + 24);
    v57 = Instance;
    if ( v56 >= 1 )
    {
      v58 = 0;
      while ( 1 )
      {
        if ( v58 >= v56 )
LABEL_79:
          sub_1C13F88(Instance, v39);
        v59 = *(_QWORD *)(v57 + 8LL * (int)v58 + 32);
        if ( !v59 )
          goto LABEL_78;
        v60 = *(_QWORD *)(v59 + 48);
        if ( !v60 )
          goto LABEL_78;
        v61 = 0;
        while ( 1 )
        {
          v62 = *(_QWORD *)(v60 + 16);
          if ( !v62 )
            goto LABEL_78;
          v63 = *(_DWORD *)(v62 + 24);
          if ( (int)v61 >= (int)v63 )
            break;
          if ( v61 >= v63 )
            goto LABEL_79;
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
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v74 = v77;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v74, 0LL);
                if ( v67 == Instance )
                  this->fields.isParty = 1;
                v60 = *(_QWORD *)(v59 + 48);
                ++v61;
                if ( v60 )
                  continue;
              }
            }
          }
          goto LABEL_78;
        }
        v56 = *(_DWORD *)(v57 + 24);
        if ( (int)++v58 >= v56 )
          break;
      }
    }
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BAF1E5 )
    {
      sub_1C13D24(&NetworkManager_TypeInfo, v39);
      byte_4BAF1E5 = 1;
    }
    Instance = (int64_t)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (int64_t)NetworkManager_TypeInfo;
    }
    if ( !*p_servantData )
      goto LABEL_78;
    v69 = *(_QWORD *)(Instance + 184);
    v70 = *p_servantData;
    v71 = *(_QWORD *)(v69 + 64);
    Instance = ServantCostumeItemInfo__get_SvtId(v70, v39);
    if ( !Master_object )
      goto LABEL_78;
    Instance = UserServantCollectionMaster__TryGetEntity(
                 (UserServantCollectionMaster_o *)Master_object,
                 &entity,
                 v71,
                 Instance,
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      Instance = (int64_t)entity;
      if ( !entity )
        goto LABEL_78;
      Instance = UserServantCollectionEntity__IsGet(entity, 0LL);
      if ( (Instance & 1) != 0 )
        this->fields.isLetgo = 1;
    }
  }
  if ( !info )
    goto LABEL_78;
  this->fields.isReleaseItemHaving = info->fields.isReleaseItemHaving;
  this->fields.isClearAllCond = info->fields.isCanRelease;
  this->fields.isOpenEventCostume = info->fields.isEventItemOpenCond;
  this->fields.isAlreadyGet = info->fields.isCostumeGet;
  this->fields.isHavingAllReleasedCostume = info->fields.isHavingAllReleasedCostume;
  this->fields.isNotHavingAllCostumeReleaseItem = info->fields.isNotHavingAllCostumeReleaseItem;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3238624 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_78;
  servantEntity = this->fields.servantEntity;
  this->fields.priority = *(_DWORD *)(Instance + 52);
  if ( !servantEntity )
    goto LABEL_78;
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2 = -servantEntity->fields.collectionNo;
  if ( !Instance )
    goto LABEL_78;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_78;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


bool __fastcall ServantCostumeListViewItem__IsMatchFilter(
        ServantCostumeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  FilterKindList_c *v7; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  _BOOL4 v13; // w23
  struct ServantCostumeItemInfo_o *servantData; // x8
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x21

  if ( (byte_4BB83FA & 1) == 0 )
  {
    sub_1C13D24(&FilterKindList_TypeInfo, sort);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_4BB83FA = 1;
  }
  if ( this->fields.isBaseSvt )
    return 1;
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v7->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_37;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_37;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v9 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v9 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v9->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_37;
    v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             ClassGroupFilterKindList,
                                             (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v11->static_fields->ServantCostumeFilterKind;
  if ( !ClassGroupFilterKindList )
    goto LABEL_37;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL) )
  {
    v13 = ListViewSort__GetFilter(sort, 30, 0LL)
       && !this->fields.isHavingAllReleasedCostume
       && this->fields.isReleaseItemHaving;
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__GetFilter(sort, 31, 0LL);
    if ( ((unsigned __int8)ClassGroupFilterKindList & 1) != 0 )
    {
      servantData = this->fields.servantData;
      if ( !servantData )
        goto LABEL_37;
      if ( !v13 && servantData->fields.notHavingReleaseItemNum <= 0 )
        return 0;
    }
    else if ( !v13 )
    {
      return 0;
    }
  }
  v15 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v15->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_37:
    sub_1C13F80(ClassGroupFilterKindList, sort);
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v16, 0LL)
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
        sub_1C13CC8(
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
    sub_1C13F80(servantData, userSvtEntity);
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
          IconLabelInfo__Set_39281744(iconLabelInfo2, 50, allCostumeNum, 0, 0, 0, 0, 0, 0LL);
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
          IconLabelInfo__Set_39281744(iconLabelInfo2, v25, releaseCostumeNum, v24, 0, 0, 0, 0, 0LL);
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
          IconLabelInfo__Set_39281744(iconLabelInfo1, 54, v31, (int32_t)iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_39281744(v18, 2, v21, (int32_t)iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
        IconLabelInfo__Set_39281744(v34, 2, v33, (int32_t)iconLabelInfo2, 0, 0, 0, 0, 0LL);
        goto LABEL_56;
      }
LABEL_58:
      sub_1C13F80(iconLabelInfo2, v6);
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
    sub_1C13F80(0LL, userSvtEntity);
  servantData->fields.userServantEntity = userSvtEntity;
  sub_1C13CC8(
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
        sub_1C13F80(this, sort);
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
    sub_1C13F80(this, method);
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
  if ( (byte_4BB83FB & 1) == 0 )
  {
    sub_1C13D24(&TutorialFlag_TypeInfo, method);
    byte_4BB83FB = 1;
  }
  if ( !this->fields.isHeroineSvt )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_38831432(126, 0LL);
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
    sub_1C13F80(this, method);
  return servantData->fields.notHaveServantEntity;
}


int32_t __fastcall ServantCostumeListViewItem__get_SvtId(ServantCostumeListViewItem_o *this, const MethodInfo *method)
{
  ServantCostumeItemInfo_o *servantData; // x0

  servantData = this->fields.servantData;
  if ( !servantData )
    sub_1C13F80(0LL, method);
  return ServantCostumeItemInfo__get_SvtId(servantData, method);
}


UserServantEntity_o *__fastcall ServantCostumeListViewItem__get_UserSvtEntity(
        ServantCostumeListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantCostumeItemInfo_o *servantData; // x8

  servantData = this->fields.servantData;
  if ( !servantData )
    sub_1C13F80(this, method);
  return servantData->fields.userServantEntity;
}