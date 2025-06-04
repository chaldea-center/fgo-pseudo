// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewItem___ctor(
        FavoriteChangeListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserSvtList,
        bool isFavorite,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  IconLabelInfo_o *v21; // x20
  IconLabelInfo_o *v22; // x25
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  struct UserServantEntity_o **p_userSvtEntity; // x21
  __int64 Instance; // x0
  __int64 v26; // x1
  struct UserServantEntity_o *v27; // x8
  __int64 v28; // x25
  __int64 v29; // x26
  struct ServantEntity_o **p_servantEntity; // x25
  struct UserServantEntity_o *v31; // x8
  ServantLimitMaster_o *v32; // x26
  int32_t svtId; // w27
  const MethodInfo *v34; // x2
  struct UserServantEntity_o *v35; // x8
  __int128 v36; // q1
  UserServantCollectionMaster_o *v37; // x23
  struct UserServantEntity_o *v38; // x8
  __int128 v39; // q0
  __int64 v40; // x2
  signed int max_length; // w8
  int32_t v42; // w9
  UserServantEntity_o *v43; // x8
  struct UserServantEntity_o *v44; // x8
  __int128 v45; // q0
  __int64 v46; // x22
  int64_t v47; // x8
  UserServantEntity_o *v48; // x8
  int64_t v49; // x9
  int64_t rarity; // x10
  struct UserServantEntity_o *v51; // x8
  __int64 v52; // x22
  __int64 v53; // x23
  int64_t v54; // x8
  int v55; // w22
  BalanceConfig_c *v56; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_4AFD042 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantClassMaster___, v11);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitMaster___, v12);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v14);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_1BC3008(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v16);
    sub_1BC3008(&IconLabelInfo_TypeInfo, v17);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_4AFD042 = 1;
  }
  v21 = (IconLabelInfo_o *)sub_1BC3254(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0LL);
  this->fields.iconLabelInfo1 = v21;
  sub_1BC2FAC(&this->fields.iconLabelInfo1);
  v22 = (IconLabelInfo_o *)sub_1BC3254(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v22, 0LL);
  this->fields.iconLabelInfo2 = v22;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1BC2FAC(&this->fields.iconLabelInfo2);
  ListViewItem___ctor_42769384((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  Instance = sub_1BC2FAC(&this->fields.userSvtEntity);
  v27 = this->fields.userSvtEntity;
  if ( !v27 )
    goto LABEL_51;
  v29 = *(_QWORD *)&v27->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&v27->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v62.fields.currentCryptoKey = v29;
  *(_QWORD *)&v62.fields.fakeValue = v28;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v62, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_51;
  this->fields.servantEntity = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                           this->fields.svtId,
                                                           (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  p_servantEntity = &this->fields.servantEntity;
  sub_1BC2FAC(&this->fields.servantEntity);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v31 = this->fields.userSvtEntity;
  if ( !v31 )
    goto LABEL_51;
  v32 = (ServantLimitMaster_o *)Instance;
  svtId = this->fields.svtId;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v31->fields.limitCount, 0LL);
  if ( !v32 )
    goto LABEL_51;
  Instance = (__int64)ServantLimitMaster__GetEntity(v32, svtId, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_51;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_51;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  FavoriteChangeListViewItem__SetOverwriteStatus(this, userSvtEntity, v34);
  this->fields.isFavorite = isFavorite;
  if ( !userSvtEntity )
    goto LABEL_51;
  this->fields.isHeroine = UserServantEntity__IsHeroine(userSvtEntity, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v35 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_51;
  v36 = *(_OWORD *)&v35->fields.userId.fields.fakeValue;
  v37 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&v35->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v61.fields.fakeValue = v36;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v60 = v61;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v60, 0LL);
  if ( !v37 )
    goto LABEL_51;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(v37, Instance, this->fields.svtId, 0LL);
  if ( !Instance )
    goto LABEL_51;
  Instance = UserServantCollectionEntity__getFriendShipRankInfo(
               (UserServantCollectionEntity_o *)Instance,
               &this->fields.friendship,
               &this->fields.friendshipMax,
               0LL);
  v38 = this->fields.userSvtEntity;
  this->fields.partyIndex = -1;
  if ( !v38 )
    goto LABEL_51;
  v39 = *(_OWORD *)&v38->fields.id.fields.fakeValue;
  *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&v38->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v59.fields.fakeValue = v39;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v59, 0LL);
  if ( !partyUserSvtList )
    goto LABEL_51;
  max_length = partyUserSvtList->max_length;
  if ( max_length >= 1 )
  {
    v42 = 0;
    while ( 1 )
    {
      if ( max_length == v42 )
        sub_1BC326C(Instance, v26, v40);
      if ( Instance == partyUserSvtList->m_Items[v42] )
        break;
      if ( max_length == ++v42 )
        goto LABEL_29;
    }
    this->fields.partyIndex = v42;
  }
LABEL_29:
  Instance = (__int64)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_51;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v43 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v43 )
    goto LABEL_51;
  this->fields.isChoice = UserServantEntity__IsChoice(v43, 0LL);
  Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_51;
  v44 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_51;
  v45 = *(_OWORD *)&v44->fields.id.fields.fakeValue;
  v46 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&v44->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v61.fields.fakeValue = v45;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v58 = v61;
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v58, 0LL);
  Instance = (__int64)this->fields.userSvtEntity;
  this->fields.isPush = v46 == v47;
  this->fields.isPushMode = 0;
  if ( !Instance )
    goto LABEL_51;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v48 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v48 )
    goto LABEL_51;
  this->fields.skillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v48, -1, -1, 0LL);
  sub_1BC2FAC(&this->fields.skillCategoryIdList);
  Instance = (__int64)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_51;
  this->fields.tdCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                    (UserServantEntity_o *)Instance,
                                    0,
                                    -1,
                                    0LL);
  sub_1BC2FAC(&this->fields.tdCategoryIdList);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_51;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_51;
  v49 = *(int *)(Instance + 52);
  rarity = this->fields.rarity;
  v51 = this->fields.userSvtEntity;
  this->fields.priority = v49;
  this->fields.sortValue1B = v49;
  this->fields.sortValue2 = rarity;
  if ( !v51 )
    goto LABEL_51;
  v53 = *(_QWORD *)&v51->fields.svtId.fields.currentCryptoKey;
  v52 = *(_QWORD *)&v51->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v63.fields.currentCryptoKey = v53;
  *(_QWORD *)&v63.fields.fakeValue = v52;
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v63, 0LL);
  Instance = (__int64)this->fields.userSvtEntity;
  this->fields.sortValue2B = v54;
  this->fields.amountSortValue = -1LL;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_51;
  v55 = *(_DWORD *)(Instance + 276);
  v56 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v56 = BalanceConfig_TypeInfo;
    Instance = (__int64)*p_userSvtEntity;
  }
  static_fields = v56->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v55;
  if ( !Instance
    || (this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272),
        UserServantEntity__getAdjustMaxData(
          (UserServantEntity_o *)Instance,
          &this->fields.nowMaxHpReinforceValue,
          &this->fields.nowMaxAtkReinforceValue,
          0LL),
        (Instance = (__int64)this->fields.iconLabelInfo1) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (__int64)*p_iconLabelInfo2) == 0) )
  {
LABEL_51:
    sub_1BC3264(Instance, v26);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


void __fastcall FavoriteChangeListViewItem__Finalize(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall FavoriteChangeListViewItem__GetNpInfo(
        FavoriteChangeListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  TreasureDvcInfo_o *v7; // x20

  if ( (byte_4AFD049 & 1) == 0 )
  {
    sub_1BC3008(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4AFD049 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1BC3254(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1BC2FAC(tdInfo);
  return 0;
}


bool __fastcall FavoriteChangeListViewItem__IsMatchFilter(
        FavoriteChangeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *v8; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  __int64 v16; // x2
  __int64 v17; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x21
  UserServantEntity_o *userSvtEntity; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v23; // x8
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v25; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v27; // w0

  if ( (byte_4AFD046 & 1) == 0 )
  {
    sub_1BC3008(&FilterKindList_TypeInfo, sort);
    sub_1BC3008(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_4AFD046 = 1;
  }
  if ( this->fields.isFavorite )
    return 1;
  v8 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_62;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v10 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v10 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v10->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v12->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(userSvtEntity, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_62;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v23 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v23 )
          goto LABEL_62;
        this->fields.skillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v23, -1, -1, 0LL);
        sub_1BC2FAC(&this->fields.skillCategoryIdList);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_62;
        this->fields.tdCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                          (UserServantEntity_o *)ClassGroupFilterKindList,
                                          0,
                                          -1,
                                          0LL);
        sub_1BC2FAC(&this->fields.tdCategoryIdList);
      }
    }
    ClassGroupFilterKindList = sub_1BC30B0(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    v17 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_63;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1BC30B0(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    v17 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_63:
      sub_1BC326C(ClassGroupFilterKindList, v17, v16);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v25 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v27 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v25) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v27 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v27 )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0LL)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_1BC30B0(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
LABEL_62:
    sub_1BC3264(ClassGroupFilterKindList, sort);
  v17 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_63;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL) )
  {
    isChoice = !this->fields.isChoice;
    if ( !this->fields.isSwapChoice )
      isChoice = this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v19 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v19->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v20, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall FavoriteChangeListViewItem__Modify(
        FavoriteChangeListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  struct UserServantEntity_o **p_userSvtEntity; // x21
  __int64 v6; // x1
  UserServantEntity_o *userSvtEntity; // x0
  UserServantEntity_o *v8; // x8
  const MethodInfo *v9; // x2
  struct UserServantEntity_o *v10; // x8
  __int128 v11; // q1
  __int64 v12; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-40h]

  if ( (byte_4AFD044 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userServantEntity);
    byte_4AFD044 = 1;
  }
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_1BC2FAC(&this->fields.userSvtEntity);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_10;
  userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userSvtEntity, 0LL);
  v8 = this->fields.userSvtEntity;
  this->fields.isLock = (unsigned __int8)userSvtEntity & 1;
  if ( !v8
    || (this->fields.isChoice = UserServantEntity__IsChoice(v8, 0LL),
        *(_WORD *)&this->fields.isSwapLock = 0,
        FavoriteChangeListViewItem__SetOverwriteStatus(this, userServantEntity, v9),
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0LL)) == 0LL)
    || (v10 = *p_userSvtEntity) == 0LL )
  {
LABEL_10:
    sub_1BC3264(userSvtEntity, v6);
  }
  v11 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
  v12 = *(_QWORD *)&userSvtEntity->fields.dispLimitCount.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  this->fields.isPush = v12 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v13, 0LL);
}


void __fastcall FavoriteChangeListViewItem__ModifyChoiceItem(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BC3264(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewItem__ModifyItem(
        FavoriteChangeListViewItem_o *this,
        bool isFavorite,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  UserServantEntity_o *v6; // x8
  bool IsChoice; // w0
  UserServantEntity_o *v8; // x1
  const MethodInfo *v9; // x2
  struct UserServantEntity_o *v10; // x8
  __int128 v11; // q1
  __int64 v12; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-40h]

  if ( (byte_4AFD043 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isFavorite);
    byte_4AFD043 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.isFavorite = isFavorite;
  if ( !userSvtEntity )
    goto LABEL_10;
  userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userSvtEntity, 0LL);
  v6 = this->fields.userSvtEntity;
  this->fields.isLock = (unsigned __int8)userSvtEntity & 1;
  if ( !v6
    || (IsChoice = UserServantEntity__IsChoice(v6, 0LL),
        v8 = this->fields.userSvtEntity,
        this->fields.isChoice = IsChoice,
        *(_WORD *)&this->fields.isSwapLock = 0,
        FavoriteChangeListViewItem__SetOverwriteStatus(this, v8, v9),
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0LL)) == 0LL)
    || (v10 = this->fields.userSvtEntity) == 0LL )
  {
LABEL_10:
    sub_1BC3264(userSvtEntity, isFavorite);
  }
  v11 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
  v12 = *(_QWORD *)&userSvtEntity->fields.dispLimitCount.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  this->fields.isPush = v12 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v13, 0LL);
}


void __fastcall FavoriteChangeListViewItem__ModifyLockItem(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BC3264(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall FavoriteChangeListViewItem__SetOverwriteStatus(
        FavoriteChangeListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  FavoriteChangeListViewItem_o *v3; // x19

  if ( !userServantEntity
    || (v3 = this,
        (this = (FavoriteChangeListViewItem_o *)UserServantEntity__GetOverwriteStatus(userServantEntity, 0LL, 0LL)) == 0LL) )
  {
    sub_1BC3264(this, userServantEntity);
  }
  v3->fields.cost = this->fields.loopIndex;
  *(_QWORD *)&v3->fields.hp = *(_QWORD *)&this->fields.selectNum;
  v3->fields.rarity = this->fields.sortIndex;
}


bool __fastcall FavoriteChangeListViewItem__SetSortValue(
        FavoriteChangeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  bool v7; // w8
  int64_t iconLabelInfo2; // x0
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isFavorite; // w10
  _BOOL4 isChoice; // w9
  int64_t v12; // x8
  bool v13; // zf
  _BOOL4 v14; // w9
  int v15; // w10
  int v16; // w8
  const MethodInfo *v17; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v19; // q1
  struct UserServantEntity_o *v20; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  int64_t v22; // x20
  IconLabelInfo_o *v23; // x21
  int64_t cost; // x2
  int32_t v25; // w3
  int32_t v26; // w1
  int64_t hp; // x20
  IconLabelInfo_o *v28; // x21
  int32_t v29; // w3
  int32_t v30; // w1
  int64_t friendship; // x2
  IconLabelInfo_o *v32; // x20
  int32_t v33; // w21
  __int64 methodPtr_low; // x10
  struct ServantEntity_o *servantEntity; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v37; // x8
  int32_t lv; // w20
  int64_t hpReinforceValue; // x2
  int32_t nowMaxHpReinforceValue; // w3
  int32_t v41; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+30h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-28h] BYREF

  if ( (byte_4AFD045 & 1) == 0 )
  {
    sub_1BC3008(&FavoriteChangeListViewManager_TypeInfo, sort);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4AFD045 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  v7 = FavoriteChangeListViewItem__IsMatchFilter(this, sort, method);
  iconLabelInfo2 = 0LL;
  if ( v7 )
  {
    isSwapChoice = this->fields.isSwapChoice;
    isFavorite = this->fields.isFavorite;
    isChoice = this->fields.isChoice;
    this->fields.sortValue0 = 0LL;
    if ( isFavorite )
    {
      v12 = 20LL;
    }
    else
    {
      v13 = !isChoice;
      v14 = isChoice;
      v15 = v13;
      if ( isSwapChoice )
        v16 = v15;
      else
        v16 = v14;
      if ( v16 != 1 )
        goto LABEL_17;
      if ( !sort )
        goto LABEL_78;
      if ( !sort->fields.isChoiceSort )
      {
LABEL_17:
        iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
        if ( iconLabelInfo2 )
        {
          IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
          if ( sort )
          {
            iconLabelInfo2 = 1LL;
            switch ( sort->fields.sortKind )
            {
              case 1:
                userSvtEntity = this->fields.userSvtEntity;
                if ( !userSvtEntity )
                  goto LABEL_78;
                v19 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v44.fields.fakeValue = v19;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v43 = v44;
                iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v43, 0LL);
                v20 = this->fields.userSvtEntity;
                this->fields.sortValue1 = iconLabelInfo2;
                if ( !v20 )
                  goto LABEL_78;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v20->fields.createdAt, 0, 0, 0, 0LL);
                goto LABEL_71;
              case 2:
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                this->fields.sortValue1 = this->fields.rarity;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                iconLabelInfo1 = this->fields.iconLabelInfo1;
                goto LABEL_73;
              case 3:
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                v22 = *(int *)(iconLabelInfo2 + 256);
                v23 = this->fields.iconLabelInfo1;
                this->fields.sortValue1 = v22;
                goto LABEL_45;
              case 4:
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                UserServantEntity__getTreasureDeviceInfo_42151700(
                  (UserServantEntity_o *)iconLabelInfo2,
                  &tdMaxLv[1],
                  tdMaxLv,
                  0LL);
                LODWORD(cost) = tdMaxLv[1];
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = tdMaxLv[1];
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                v25 = tdMaxLv[0];
                v26 = 33;
                goto LABEL_42;
              case 5:
                hp = this->fields.hp;
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                this->fields.sortValue1 = hp;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                v28 = this->fields.iconLabelInfo1;
                iconLabelInfo2 = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)iconLabelInfo2, 0LL);
                if ( !v28 )
                  goto LABEL_78;
                v29 = iconLabelInfo2;
                v30 = 3;
                goto LABEL_39;
              case 6:
                hp = this->fields.atk;
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                this->fields.sortValue1 = hp;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                v28 = this->fields.iconLabelInfo1;
                iconLabelInfo2 = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)iconLabelInfo2, 0LL);
                if ( !v28 )
                  goto LABEL_78;
                v29 = iconLabelInfo2;
                v30 = 5;
LABEL_39:
                IconLabelInfo__Set_39947860(v28, v30, hp, v29, 0, 0, 0, 0, 0, 0LL);
                goto LABEL_71;
              case 7:
                cost = this->fields.cost;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = cost;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                v26 = 7;
                v25 = 0;
LABEL_42:
                IconLabelInfo__Set_39947860((IconLabelInfo_o *)iconLabelInfo2, v26, cost, v25, 0, 0, 0, 0, 0, 0LL);
                goto LABEL_49;
              case 8:
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                this->fields.sortValue1 = -this->fields.priority;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                v22 = *(int *)(iconLabelInfo2 + 256);
                v23 = this->fields.iconLabelInfo1;
                this->fields.sortValue2 = v22;
LABEL_45:
                iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
                if ( !v23 )
                  goto LABEL_78;
                IconLabelInfo__Set_39947860(v23, 2, v22, iconLabelInfo2, 0, 0, 0, 0, 0, 0LL);
                goto LABEL_76;
              case 0xA:
                friendship = this->fields.friendship;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = friendship;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                IconLabelInfo__Set_39947860(
                  (IconLabelInfo_o *)iconLabelInfo2,
                  32,
                  friendship,
                  this->fields.friendshipMax,
                  0,
                  0,
                  0,
                  0,
                  0,
                  0LL);
LABEL_49:
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                v32 = this->fields.iconLabelInfo2;
                v33 = *(_DWORD *)(iconLabelInfo2 + 256);
                iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
                if ( !v32 )
                  goto LABEL_78;
                IconLabelInfo__Set_39947860(v32, 2, v33, iconLabelInfo2, 0, 0, 0, 0, 0, 0LL);
                iconLabelInfo2 = (int64_t)this->fields.servantEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                if ( ServantEntity__get_IsExpUp((ServantEntity_o *)iconLabelInfo2, 0LL) )
                  goto LABEL_55;
                iconLabelInfo2 = (int64_t)this->fields.servantEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                if ( !ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo2, 0LL) )
                  goto LABEL_76;
LABEL_55:
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
LABEL_76:
                LOBYTE(iconLabelInfo2) = 1;
                break;
              case 0xE:
                iconLabelInfo2 = this->fields.amountSortValue;
                if ( (iconLabelInfo2 & 0x8000000000000000LL) == 0 )
                  goto LABEL_63;
                iconLabelInfo2 = (int64_t)sort->fields.manager;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                methodPtr_low = LOBYTE(FavoriteChangeListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
                if ( *(unsigned __int8 *)(*(_QWORD *)iconLabelInfo2 + 304LL) < (unsigned int)methodPtr_low
                  || *(FavoriteChangeListViewManager_c **)(*(_QWORD *)(*(_QWORD *)iconLabelInfo2 + 200LL)
                                                         + 8 * methodPtr_low
                                                         - 8) != FavoriteChangeListViewManager_TypeInfo )
                {
                  goto LABEL_78;
                }
                iconLabelInfo2 = FavoriteChangeListViewManager__GetAmountSortValue(
                                   (FavoriteChangeListViewManager_o *)iconLabelInfo2,
                                   this->fields.svtId,
                                   v17);
                this->fields.amountSortValue = iconLabelInfo2;
LABEL_63:
                servantEntity = this->fields.servantEntity;
                if ( !servantEntity )
                  goto LABEL_78;
                collectionNo = servantEntity->fields.collectionNo;
                v37 = this->fields.userSvtEntity;
                this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                         + (iconLabelInfo2 << 48)) | collectionNo;
                if ( !v37 )
                  goto LABEL_78;
                iconLabelInfo1 = this->fields.iconLabelInfo1;
                lv = v37->fields.lv;
                iconLabelInfo2 = (int64_t)v37;
                goto LABEL_74;
              case 0xF:
                hpReinforceValue = this->fields.hpReinforceValue;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = hpReinforceValue;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                nowMaxHpReinforceValue = this->fields.nowMaxHpReinforceValue;
                v41 = 44;
                goto LABEL_70;
              case 0x10:
                hpReinforceValue = this->fields.atkReinforceValue;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = hpReinforceValue;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                nowMaxHpReinforceValue = this->fields.nowMaxAtkReinforceValue;
                v41 = 45;
LABEL_70:
                IconLabelInfo__Set_39947860(
                  (IconLabelInfo_o *)iconLabelInfo2,
                  v41,
                  hpReinforceValue,
                  nowMaxHpReinforceValue,
                  0,
                  0,
                  0,
                  0,
                  0,
                  0LL);
LABEL_71:
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                iconLabelInfo1 = this->fields.iconLabelInfo2;
LABEL_73:
                lv = *(_DWORD *)(iconLabelInfo2 + 256);
LABEL_74:
                iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
                if ( !iconLabelInfo1 )
                  goto LABEL_78;
                IconLabelInfo__Set_39947860(iconLabelInfo1, 2, lv, iconLabelInfo2, 0, 0, 0, 0, 0, 0LL);
                goto LABEL_76;
              default:
                return iconLabelInfo2;
            }
            return iconLabelInfo2;
          }
        }
LABEL_78:
        sub_1BC3264(iconLabelInfo2, v6);
      }
      v12 = 10LL;
    }
    this->fields.sortValue0 = v12;
    goto LABEL_17;
  }
  return iconLabelInfo2;
}


bool __fastcall FavoriteChangeListViewItem__SwapChoice(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall FavoriteChangeListViewItem__SwapLock(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


IconLabelInfo_o *__fastcall FavoriteChangeListViewItem__get_IconInfo1(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall FavoriteChangeListViewItem__get_IconInfo2(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall FavoriteChangeListViewItem__get_IsBase(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBase;
}


bool __fastcall FavoriteChangeListViewItem__get_IsCanNotSelect(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AFD048 & 1) == 0 )
  {
    sub_1BC3008(&TutorialFlag_TypeInfo, method);
    byte_4AFD048 = 1;
  }
  if ( !this->fields.isHeroine )
    return this->fields.isFavorite;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_39466584(126, 0LL) || this->fields.isFavorite;
}


bool __fastcall FavoriteChangeListViewItem__get_IsChoice(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall FavoriteChangeListViewItem__get_IsDispChoice(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool __fastcall FavoriteChangeListViewItem__get_IsDispLock(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool __fastcall FavoriteChangeListViewItem__get_IsEventJoin(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
  return (char)userSvtEntity;
}


bool __fastcall FavoriteChangeListViewItem__get_IsFavorite(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFavorite;
}


bool __fastcall FavoriteChangeListViewItem__get_IsHerioneReave(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AFD047 & 1) == 0 )
  {
    sub_1BC3008(&TutorialFlag_TypeInfo, method);
    byte_4AFD047 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_39466584(126, 0LL);
}


bool __fastcall FavoriteChangeListViewItem__get_IsLock(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall FavoriteChangeListViewItem__get_IsNoPeriod(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsNoPeriod(userSvtEntity, 0LL);
  return (char)userSvtEntity;
}


bool __fastcall FavoriteChangeListViewItem__get_IsParty(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex >= 0;
}


bool __fastcall FavoriteChangeListViewItem__get_IsPush(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool __fastcall FavoriteChangeListViewItem__get_IsPushMode(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isPushMode;
}


bool __fastcall FavoriteChangeListViewItem__get_IsSwapChoice(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall FavoriteChangeListViewItem__get_IsSwapLock(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


ServantEntity_o *__fastcall FavoriteChangeListViewItem__get_Servant(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t __fastcall FavoriteChangeListViewItem__get_SvtId(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


UserServantEntity_o *__fastcall FavoriteChangeListViewItem__get_UserServant(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


void __fastcall FavoriteChangeListViewItem__setUserServantEntity(
        FavoriteChangeListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  this->fields.userSvtEntity = entity;
  sub_1BC2FAC(&this->fields.userSvtEntity);
}


void __fastcall FavoriteChangeListViewItem__set_IsPushMode(
        FavoriteChangeListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isPushMode = value;
}