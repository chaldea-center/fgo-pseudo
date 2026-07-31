void ServantCostumeListViewItem___ctor(
        ServantCostumeListViewItem_o *this,
        ServantCostumeItemInfo_o *info,
        UserServantEntity_o *baseSvtEntity,
        const MethodInfo *method)
{
  IconLabelInfo_o *v7; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  IconLabelInfo_o *v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  ServantCostumeItemInfo_o **p_servantData; // x22
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int64_t Instance; // x0
  const MethodInfo *v29; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x24
  Il2CppObject *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  ServantCostumeItemInfo_o *servantData; // x8
  __int64 v39; // x2
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v41; // q1
  int64_t v42; // x0
  __int128 v43; // q1
  int64_t v44; // x24
  UserServantEntity_o *v45; // x0
  __int64 v46; // x2
  Il2CppObject *MasterData_object; // x23
  __int64 v48; // x2
  unsigned __int64 v49; // x8
  int64_t v50; // x23
  unsigned __int64 v51; // x24
  __int64 v52; // x28
  __int64 v53; // x8
  unsigned int v54; // w29
  __int64 v55; // x8
  unsigned int v56; // w9
  __int64 v57; // x8
  struct UserServantEntity_o *v58; // x9
  __int128 v59; // q0
  __int128 v60; // q1
  __int64 v61; // x25
  int v62; // w9
  __int64 v63; // x2
  Il2CppObject *Master_object; // x23
  __int64 v65; // x9
  ServantCostumeItemInfo_o *v66; // x0
  int64_t v67; // x22
  const MethodInfo_476E8C0 *v68; // x0
  struct ServantEntity_o *servantEntity; // x8
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+70h] [xbp-90h]
  UserServantCollectionEntity_o *entity; // [xsp+98h] [xbp-68h] BYREF

  if ( (byte_5932260 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_21FFC50(&IconLabelInfo_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5932260 = 1;
  }
  entity = 0;
  v7 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v7, 0);
  this->fields.iconLabelInfo1 = v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v14, 0);
  this->fields.iconLabelInfo2 = v14;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.servantData = info;
  p_servantData = &this->fields.servantData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantData,
    (int32_t)info,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*p_servantData )
    goto LABEL_78;
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = ServantCostumeItemInfo__get_SvtId(*p_servantData, v29);
  if ( !v30 )
    goto LABEL_78;
  v31 = DataMasterBase_object__object__int___GetEntity(
          v30,
          Instance,
          (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v31;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  Instance = (int64_t)this->fields.servantData;
  if ( !Instance )
    goto LABEL_78;
  Instance = ServantCostumeItemInfo__get_ClassId((ServantCostumeItemInfo_o *)Instance, v29);
  servantData = this->fields.servantData;
  this->fields.classId = Instance;
  if ( !servantData )
    goto LABEL_78;
  Instance = ServantCostumeItemInfo__get_Rarity(servantData, v29);
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
      v41 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v74.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v74.fields.fakeValue = v41;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v29, v39);
      v73 = v74;
      v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v73, 0);
      v43 = *(_OWORD *)&baseSvtEntity->fields.id.fields.fakeValue;
      v44 = v42;
      *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&baseSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v72.fields.fakeValue = v43;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v72, 0);
      if ( v44 == Instance )
        this->fields.isBaseSvt = 1;
    }
  }
  if ( !*p_servantData )
LABEL_78:
    sub_21FFECC(Instance, v29);
  v45 = (*p_servantData)->fields.userServantEntity;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  if ( v45 )
  {
    Instance = UserServantEntity__IsHeroine(v45, 0);
    if ( (Instance & 1) != 0 )
      this->fields.isHeroineSvt = 1;
    if ( !*p_servantData )
      goto LABEL_78;
    Instance = (int64_t)(*p_servantData)->fields.userServantEntity;
    if ( !Instance )
      goto LABEL_78;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
    if ( (Instance & 1) != 0 )
      this->fields.isLock = 1;
    if ( !*p_servantData )
      goto LABEL_78;
    Instance = (int64_t)(*p_servantData)->fields.userServantEntity;
    if ( !Instance )
      goto LABEL_78;
    if ( UserServantEntity__IsChoice((UserServantEntity_o *)Instance, 0) )
      this->fields.isChoice = 1;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_78;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29, v46);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    Instance = (int64_t)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29, v46);
      Instance = (int64_t)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_78;
    Instance = (int64_t)UserDeckMaster__getDeckList(
                          (UserDeckMaster_o *)MasterData_object,
                          *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                          0);
    if ( !Instance )
      goto LABEL_78;
    v49 = *(unsigned int *)(Instance + 24);
    v50 = Instance;
    if ( (int)v49 >= 1 )
    {
      v51 = 0;
      while ( 1 )
      {
        if ( v51 >= v49 )
LABEL_79:
          sub_21FFED4(Instance);
        v52 = *(_QWORD *)(v50 + 8 * v51 + 32);
        if ( !v52 )
          goto LABEL_78;
        v53 = *(_QWORD *)(v52 + 48);
        if ( !v53 )
          goto LABEL_78;
        v54 = 0;
        while ( 1 )
        {
          v55 = *(_QWORD *)(v53 + 16);
          if ( !v55 )
            goto LABEL_78;
          v56 = *(_DWORD *)(v55 + 24);
          if ( (int)v54 >= (int)v56 )
            break;
          if ( v54 >= v56 )
            goto LABEL_79;
          v57 = *(_QWORD *)(v55 + 8LL * (int)v54 + 32);
          if ( v57 )
          {
            if ( *p_servantData )
            {
              v58 = (*p_servantData)->fields.userServantEntity;
              if ( v58 )
              {
                v59 = *(_OWORD *)&v58->fields.id.fields.currentCryptoKey;
                v60 = *(_OWORD *)&v58->fields.id.fields.fakeValue;
                v61 = *(_QWORD *)(v57 + 24);
                v62 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                *(_OWORD *)&v74.fields.currentCryptoKey = v59;
                *(_OWORD *)&v74.fields.fakeValue = v60;
                if ( !v62 )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v29, v48);
                v71 = v74;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v71, 0);
                if ( v61 == Instance )
                  this->fields.isParty = 1;
                v53 = *(_QWORD *)(v52 + 48);
                ++v54;
                if ( v53 )
                  continue;
              }
            }
          }
          goto LABEL_78;
        }
        v49 = *(unsigned int *)(v50 + 24);
        if ( (int)++v51 >= (int)v49 )
          break;
      }
    }
  }
  else
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29, v39);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29, v63);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    Instance = (int64_t)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29, v63);
      Instance = (int64_t)NetworkManager_TypeInfo;
    }
    if ( !*p_servantData )
      goto LABEL_78;
    v65 = *(_QWORD *)(Instance + 184);
    v66 = *p_servantData;
    v67 = *(_QWORD *)(v65 + 64);
    Instance = ServantCostumeItemInfo__get_SvtId(v66, v29);
    if ( !Master_object )
      goto LABEL_78;
    Instance = UserServantCollectionMaster__TryGetEntity(
                 (UserServantCollectionMaster_o *)Master_object,
                 &entity,
                 v67,
                 Instance,
                 0);
    if ( (Instance & 1) != 0 )
    {
      Instance = (int64_t)entity;
      if ( !entity )
        goto LABEL_78;
      Instance = UserServantCollectionEntity__IsGet(entity, 0);
      if ( (Instance & 1) != 0 )
        this->fields.isLetgo = 1;
    }
  }
  if ( !info )
    goto LABEL_78;
  v68 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isReleaseItemHaving = info->fields.isReleaseItemHaving;
  *(_WORD *)&this->fields.isClearAllCond = *(_WORD *)&info->fields.isCanRelease;
  this->fields.isAlreadyGet = info->fields.isCostumeGet;
  *(_WORD *)&this->fields.isHavingAllReleasedCostume = *(_WORD *)&info->fields.isHavingAllReleasedCostume;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v68);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_78;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


bool ServantCostumeListViewItem__IsMatchFilter(
        ServantCostumeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v6; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  __int64 v8; // x2
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  __int64 v11; // x2
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  __int64 v14; // x2
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x21
  _BOOL4 v17; // w23
  struct ServantCostumeItemInfo_o *servantData; // x8
  char v19; // w8

  if ( (byte_5932261 & 1) == 0 )
  {
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_5932261 = 1;
  }
  if ( this->fields.isBaseSvt )
    return 1;
  v6 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v6 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v6->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_41;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_41;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v9 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v8);
      v9 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v9->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_41;
    v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             ClassGroupFilterKindList,
                                             (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v12 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v11);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v12->static_fields->ServantCostumeFilterKind;
  if ( !ClassGroupFilterKindList )
    goto LABEL_41;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0) )
  {
    v17 = ListViewSort__GetFilter(sort, 30, 0)
       && !this->fields.isHavingAllReleasedCostume
       && this->fields.isReleaseItemHaving;
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__GetFilter(sort, 31, 0);
    if ( ((unsigned __int8)ClassGroupFilterKindList & 1) != 0 )
    {
      servantData = this->fields.servantData;
      if ( !servantData )
        goto LABEL_41;
      v19 = servantData->fields.notHavingReleaseItemNum > 0 || v17;
      if ( (v19 & 1) == 0 )
        return 0;
    }
    else if ( !v17 )
    {
      return 0;
    }
  }
  v15 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v14);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v15->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_41:
    sub_21FFECC(ClassGroupFilterKindList, sort);
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v16, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


void ServantCostumeListViewItem__ModifyItem(
        ServantCostumeListViewItem_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  char *servantData; // x0

  servantData = (char *)this->fields.servantData;
  if ( !servantData
    || (*((_QWORD *)servantData + 2) = userSvtEntity,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(servantData + 16),
          (int32_t)userSvtEntity,
          (System_String_o *)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        !userSvtEntity)
    || (this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0),
        this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0),
        (servantData = (char *)UserServantEntity__GetOverwriteStatus(userSvtEntity, 0, 0)) == 0) )
  {
    sub_21FFECC(servantData, userSvtEntity);
  }
  this->fields.rarity = *((_DWORD *)servantData + 6);
}


bool ServantCostumeListViewItem__SetSortValue(
        ServantCostumeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ServantCostumeListViewItem_c *klass; // x9
  __int64 iconLabelInfo2; // x0
  const MethodInfo *v7; // x1
  char v8; // w19
  struct ServantCostumeItemInfo_o *servantData; // x8
  int64_t v10; // x8
  int32_t sortKind; // w8
  struct ServantCostumeItemInfo_o *v12; // x8
  int64_t releaseCostumeNum; // x2
  __int64 v14; // x8
  int *v15; // x8
  int32_t NowLimitCount; // w8
  IconLabelInfo_o *v17; // x21
  ServantCostumeItemInfo_o *v18; // x8
  int32_t v19; // w20
  int64_t rarity; // x8
  __int64 v21; // x8
  IconLabelInfo_o *iconLabelInfo1; // x20
  int32_t *v23; // x8
  __int64 v24; // x8
  int32_t v25; // w21
  struct ServantCostumeItemInfo_o *v26; // x8
  int64_t notHavingCostumeNum; // x2
  struct ServantCostumeItemInfo_o *v28; // x8
  int64_t allCostumeNum; // x2
  struct ServantCostumeItemInfo_o *v30; // x8
  int64_t notHavingReleaseItemNum; // x2
  __int64 v32; // x8
  int64_t v33; // x21
  IconLabelInfo_o *v34; // x22

  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  iconLabelInfo2 = ((__int64 (__fastcall *)(ServantCostumeListViewItem_o *, ListViewSort_o *, const MethodInfo *))klass->vtable._5_IsMatchFilter.methodPtr)(
                     this,
                     sort,
                     klass->vtable._5_IsMatchFilter.method);
  v8 = iconLabelInfo2;
  if ( (iconLabelInfo2 & 1) == 0 )
    return v8 & 1;
  this->fields.sortValue0 = 0;
  if ( !sort )
    goto LABEL_61;
  if ( sort->fields.isSmartSort )
  {
    servantData = this->fields.servantData;
    if ( !servantData )
      goto LABEL_61;
    if ( servantData->fields.userServantEntity )
    {
      if ( this->fields.isOpenEventCostume )
      {
        v10 = 40;
      }
      else if ( this->fields.isClearAllCond )
      {
        v10 = 30;
      }
      else if ( this->fields.isReleaseItemHaving )
      {
        v10 = 20;
      }
      else
      {
        v10 = -10;
        if ( this->fields.isAlreadyGet )
          v10 = 10;
      }
    }
    else
    {
      v10 = -20;
    }
    this->fields.sortValue0 = v10;
  }
  iconLabelInfo2 = (__int64)this->fields.iconLabelInfo2;
  if ( !iconLabelInfo2 )
    goto LABEL_61;
  IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
  sortKind = sort->fields.sortKind;
  if ( sortKind <= 3 )
  {
    if ( sortKind == 2 )
    {
      rarity = this->fields.rarity;
LABEL_40:
      iconLabelInfo2 = (__int64)this->fields.servantData;
      this->fields.sortValue1 = rarity;
      if ( !iconLabelInfo2 )
        goto LABEL_61;
      v21 = *(_QWORD *)(iconLabelInfo2 + 16);
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      if ( v21 )
      {
        v23 = (int32_t *)(v21 + 400);
      }
      else
      {
        v24 = *(_QWORD *)(iconLabelInfo2 + 24);
        if ( !v24 )
          goto LABEL_61;
        v23 = (int32_t *)(v24 + 68);
      }
      v25 = *v23;
      iconLabelInfo2 = ServantCostumeItemInfo__get_MaxLevel((ServantCostumeItemInfo_o *)iconLabelInfo2, v7);
      if ( iconLabelInfo1 )
      {
        IconLabelInfo__Set_47932852(iconLabelInfo1, 2, v25, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
        return v8 & 1;
      }
      goto LABEL_61;
    }
    if ( sortKind != 3 )
      return v8 & 1;
    iconLabelInfo2 = (__int64)this->fields.servantData;
    if ( iconLabelInfo2 )
    {
      v14 = *(_QWORD *)(iconLabelInfo2 + 16);
      if ( v14 )
      {
        v15 = (int *)(v14 + 400);
      }
      else
      {
        v32 = *(_QWORD *)(iconLabelInfo2 + 24);
        if ( !v32 )
          goto LABEL_61;
        v15 = (int *)(v32 + 68);
      }
      v33 = *v15;
      v34 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v33;
      iconLabelInfo2 = ServantCostumeItemInfo__get_MaxLevel((ServantCostumeItemInfo_o *)iconLabelInfo2, v7);
      if ( v34 )
      {
        IconLabelInfo__Set_47932852(v34, 2, v33, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
        return v8 & 1;
      }
    }
LABEL_61:
    sub_21FFECC(iconLabelInfo2, v7);
  }
  if ( sortKind > 20 )
  {
    switch ( sortKind )
    {
      case 21:
        v26 = this->fields.servantData;
        if ( v26 )
        {
          notHavingCostumeNum = v26->fields.notHavingCostumeNum;
          iconLabelInfo2 = (__int64)this->fields.iconLabelInfo1;
          this->fields.sortValue1 = notHavingCostumeNum;
          if ( iconLabelInfo2 )
          {
            IconLabelInfo__Set_47932852(
              (IconLabelInfo_o *)iconLabelInfo2,
              52,
              notHavingCostumeNum,
              v26->fields.allCostumeNum,
              0,
              0,
              0,
              0,
              0,
              0);
            return v8 & 1;
          }
        }
        break;
      case 22:
        v30 = this->fields.servantData;
        if ( v30 )
        {
          notHavingReleaseItemNum = v30->fields.notHavingReleaseItemNum;
          iconLabelInfo2 = (__int64)this->fields.iconLabelInfo1;
          this->fields.sortValue1 = notHavingReleaseItemNum;
          if ( iconLabelInfo2 )
          {
            IconLabelInfo__Set_47932852(
              (IconLabelInfo_o *)iconLabelInfo2,
              53,
              notHavingReleaseItemNum,
              v30->fields.allCostumeNum,
              0,
              0,
              0,
              0,
              0,
              0);
            return v8 & 1;
          }
        }
        break;
      case 23:
        iconLabelInfo2 = (__int64)this->fields.servantData;
        if ( iconLabelInfo2 )
        {
          NowLimitCount = ServantCostumeItemInfo__get_NowLimitCount((ServantCostumeItemInfo_o *)iconLabelInfo2, v7);
          iconLabelInfo2 = (__int64)this->fields.servantData;
          this->fields.sortValue1 = NowLimitCount;
          if ( iconLabelInfo2 )
          {
            v17 = this->fields.iconLabelInfo1;
            iconLabelInfo2 = ServantCostumeItemInfo__get_NowLimitCount((ServantCostumeItemInfo_o *)iconLabelInfo2, v7);
            v18 = this->fields.servantData;
            if ( v18 )
            {
              v19 = iconLabelInfo2;
              iconLabelInfo2 = ServantCostumeItemInfo__get_MaxLimitCount(v18, v7);
              if ( v17 )
              {
                IconLabelInfo__Set_47932852(v17, 54, v19, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
                return v8 & 1;
              }
            }
          }
        }
        break;
      default:
        return v8 & 1;
    }
    goto LABEL_61;
  }
  switch ( sortKind )
  {
    case 8:
      rarity = -this->fields.priority;
      goto LABEL_40;
    case 19:
      v28 = this->fields.servantData;
      if ( v28 )
      {
        allCostumeNum = v28->fields.allCostumeNum;
        iconLabelInfo2 = (__int64)this->fields.iconLabelInfo1;
        this->fields.sortValue1 = allCostumeNum;
        if ( iconLabelInfo2 )
        {
          IconLabelInfo__Set_47932852((IconLabelInfo_o *)iconLabelInfo2, 50, allCostumeNum, 0, 0, 0, 0, 0, 0, 0);
          return v8 & 1;
        }
      }
      goto LABEL_61;
    case 20:
      v12 = this->fields.servantData;
      if ( v12 )
      {
        releaseCostumeNum = v12->fields.releaseCostumeNum;
        iconLabelInfo2 = (__int64)this->fields.iconLabelInfo1;
        this->fields.sortValue1 = releaseCostumeNum;
        if ( iconLabelInfo2 )
        {
          IconLabelInfo__Set_47932852(
            (IconLabelInfo_o *)iconLabelInfo2,
            51,
            releaseCostumeNum,
            v12->fields.allCostumeNum,
            0,
            0,
            0,
            0,
            0,
            0);
          return v8 & 1;
        }
      }
      goto LABEL_61;
  }
  return v8 & 1;
}


IconLabelInfo_o *ServantCostumeListViewItem__get_IconInfo1(
        ServantCostumeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *ServantCostumeListViewItem__get_IconInfo2(
        ServantCostumeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool ServantCostumeListViewItem__get_IsBaseSvt(ServantCostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBaseSvt;
}


bool ServantCostumeListViewItem__get_IsCanNotSelect(ServantCostumeListViewItem_o *this, const MethodInfo *method)
{
  struct ServantCostumeItemInfo_o *servantData; // x8

  servantData = this->fields.servantData;
  if ( !servantData )
    sub_21FFECC(this, method);
  return !servantData->fields.userServantEntity
      || !this->fields.isAlreadyGet && !this->fields.isReleaseItemHaving
      || ServantCostumeListViewItem__get_IsHeroineLeave(this, method);
}


bool ServantCostumeListViewItem__get_IsCanRelease(ServantCostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isClearAllCond;
}


bool ServantCostumeListViewItem__get_IsChoice(ServantCostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool ServantCostumeListViewItem__get_IsHavingAllReleasedCostume(
        ServantCostumeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isHavingAllReleasedCostume;
}


bool ServantCostumeListViewItem__get_IsHeroineLeave(ServantCostumeListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5932262 & 1) == 0 )
  {
    sub_21FFC50(&TutorialFlag_TypeInfo);
    byte_5932262 = 1;
  }
  if ( !this->fields.isHeroineSvt )
    return 0;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  return TutorialFlag__Get_47357952(126, 0);
}


bool ServantCostumeListViewItem__get_IsLetgo(ServantCostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLetgo;
}


bool ServantCostumeListViewItem__get_IsLock(ServantCostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool ServantCostumeListViewItem__get_IsOpenEventCostume(ServantCostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isOpenEventCostume;
}


bool ServantCostumeListViewItem__get_IsParty(ServantCostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isParty;
}


bool ServantCostumeListViewItem__get_IsReleaseItemHaving(ServantCostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isReleaseItemHaving;
}


ServantLeaderInfo_o *ServantCostumeListViewItem__get_NotHaveSvtData(
        ServantCostumeListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantCostumeItemInfo_o *servantData; // x8

  servantData = this->fields.servantData;
  if ( !servantData )
    sub_21FFECC(this, method);
  return servantData->fields.notHaveServantEntity;
}


int32_t ServantCostumeListViewItem__get_SvtId(ServantCostumeListViewItem_o *this, const MethodInfo *method)
{
  ServantCostumeItemInfo_o *servantData; // x0

  servantData = this->fields.servantData;
  if ( !servantData )
    sub_21FFECC(0, method);
  return ServantCostumeItemInfo__get_SvtId(servantData, method);
}


UserServantEntity_o *ServantCostumeListViewItem__get_UserSvtEntity(
        ServantCostumeListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantCostumeItemInfo_o *servantData; // x8

  servantData = this->fields.servantData;
  if ( !servantData )
    sub_21FFECC(this, method);
  return servantData->fields.userServantEntity;
}