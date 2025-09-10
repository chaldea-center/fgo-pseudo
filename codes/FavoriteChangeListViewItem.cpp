void FavoriteChangeListViewItem___ctor(
        FavoriteChangeListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserSvtList,
        bool isFavorite,
        const MethodInfo *method)
{
  IconLabelInfo_o *v11; // x20
  IconLabelInfo_o *v12; // x25
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  struct UserServantEntity_o **p_userSvtEntity; // x21
  __int64 Instance; // x0
  __int64 v16; // x1
  struct UserServantEntity_o *v17; // x8
  __int64 v18; // x25
  __int64 v19; // x26
  struct ServantEntity_o **p_servantEntity; // x25
  struct UserServantEntity_o *v21; // x8
  ServantLimitMaster_o *v22; // x26
  int32_t svtId; // w27
  const MethodInfo *v24; // x2
  struct UserServantEntity_o *v25; // x8
  __int128 v26; // q1
  UserServantCollectionMaster_o *v27; // x23
  struct UserServantEntity_o *v28; // x8
  __int128 v29; // q0
  __int64 v30; // x2
  int max_length; // w8
  int32_t v32; // w9
  UserServantEntity_o *v33; // x8
  struct UserServantEntity_o *v34; // x8
  __int128 v35; // q0
  __int64 v36; // x22
  int64_t v37; // x8
  UserServantEntity_o *v38; // x8
  int64_t v39; // x9
  int64_t rarity; // x10
  struct UserServantEntity_o *v41; // x8
  __int64 v42; // x22
  __int64 v43; // x23
  struct UserServantEntity_o *v44; // x8
  __int128 v45; // q0
  int64_t v46; // x8
  int v47; // w22
  BalanceConfig_c *v48; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_4C22251 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C2D490(&IconLabelInfo_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22251 = 1;
  }
  v11 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v11, 0);
  this->fields.iconLabelInfo1 = v11;
  sub_1C2D434(&this->fields.iconLabelInfo1);
  v12 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v12, 0);
  this->fields.iconLabelInfo2 = v12;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C2D434(&this->fields.iconLabelInfo2);
  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  Instance = sub_1C2D434(&this->fields.userSvtEntity);
  v17 = this->fields.userSvtEntity;
  if ( !v17 )
    goto LABEL_52;
  v19 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v55.fields.currentCryptoKey = v19;
  *(_QWORD *)&v55.fields.fakeValue = v18;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v55, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_52;
  this->fields.servantEntity = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                           this->fields.svtId,
                                                           (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  p_servantEntity = &this->fields.servantEntity;
  sub_1C2D434(&this->fields.servantEntity);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v21 = this->fields.userSvtEntity;
  if ( !v21 )
    goto LABEL_52;
  v22 = (ServantLimitMaster_o *)Instance;
  svtId = this->fields.svtId;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v21->fields.limitCount, 0);
  if ( !v22 )
    goto LABEL_52;
  Instance = (__int64)ServantLimitMaster__GetEntity(v22, svtId, Instance, 0);
  if ( !*p_servantEntity )
    goto LABEL_52;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_52;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  FavoriteChangeListViewItem__SetOverwriteStatus(this, userSvtEntity, v24);
  this->fields.isFavorite = isFavorite;
  if ( !userSvtEntity )
    goto LABEL_52;
  this->fields.isHeroine = UserServantEntity__IsHeroine(userSvtEntity, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v25 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  v26 = *(_OWORD *)&v25->fields.userId.fields.fakeValue;
  v27 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&v25->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v54.fields.fakeValue = v26;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v53 = v54;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v53, 0);
  if ( !v27 )
    goto LABEL_52;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(v27, Instance, this->fields.svtId, 0);
  if ( !Instance )
    goto LABEL_52;
  Instance = UserServantCollectionEntity__getFriendShipRankInfo(
               (UserServantCollectionEntity_o *)Instance,
               &this->fields.friendship,
               &this->fields.friendshipMax,
               0);
  v28 = this->fields.userSvtEntity;
  this->fields.partyIndex = -1;
  if ( !v28 )
    goto LABEL_52;
  v29 = *(_OWORD *)&v28->fields.id.fields.fakeValue;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&v28->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v29;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v52, 0);
  if ( !partyUserSvtList )
    goto LABEL_52;
  max_length = partyUserSvtList->max_length;
  if ( max_length >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( max_length == v32 )
        sub_1C2D6F4(Instance, v16, v30);
      if ( Instance == partyUserSvtList->m_Items[v32] )
        break;
      if ( max_length == ++v32 )
        goto LABEL_29;
    }
    this->fields.partyIndex = v32;
  }
LABEL_29:
  Instance = (__int64)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v33 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v33 )
    goto LABEL_52;
  this->fields.isChoice = UserServantEntity__IsChoice(v33, 0);
  Instance = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_52;
  v34 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  v35 = *(_OWORD *)&v34->fields.id.fields.fakeValue;
  v36 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&v34->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v54.fields.fakeValue = v35;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v51 = v54;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v51, 0);
  Instance = (__int64)this->fields.userSvtEntity;
  this->fields.isPush = v36 == v37;
  this->fields.isPushMode = 0;
  if ( !Instance )
    goto LABEL_52;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
  v38 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v38 )
    goto LABEL_52;
  this->fields.skillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v38, -1, -1, 0);
  sub_1C2D434(&this->fields.skillCategoryIdList);
  Instance = (__int64)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_52;
  this->fields.tdCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                    (UserServantEntity_o *)Instance,
                                    0,
                                    -1,
                                    0);
  sub_1C2D434(&this->fields.tdCategoryIdList);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_52;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_52;
  v39 = *(int *)(Instance + 52);
  rarity = this->fields.rarity;
  v41 = this->fields.userSvtEntity;
  this->fields.priority = v39;
  this->fields.sortValue1B = v39;
  this->fields.sortValue2 = rarity;
  if ( !v41 )
    goto LABEL_52;
  v43 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
  v42 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v56.fields.currentCryptoKey = v43;
  *(_QWORD *)&v56.fields.fakeValue = v42;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v56, 0);
  v44 = this->fields.userSvtEntity;
  this->fields.sortValue2B = (int)Instance;
  if ( !v44 )
    goto LABEL_52;
  v45 = *(_OWORD *)&v44->fields.id.fields.fakeValue;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&v44->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v45;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v50, 0);
  Instance = (__int64)this->fields.userSvtEntity;
  this->fields.sortValueLast = v46;
  this->fields.amountSortValue = -1;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_52;
  v47 = *(_DWORD *)(Instance + 276);
  v48 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v48 = BalanceConfig_TypeInfo;
    Instance = (__int64)*p_userSvtEntity;
  }
  static_fields = v48->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v47;
  if ( !Instance
    || (this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272),
        UserServantEntity__getAdjustMaxData(
          (UserServantEntity_o *)Instance,
          &this->fields.nowMaxHpReinforceValue,
          &this->fields.nowMaxAtkReinforceValue,
          0),
        (Instance = (__int64)this->fields.iconLabelInfo1) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0), (Instance = (__int64)*p_iconLabelInfo2) == 0) )
  {
LABEL_52:
    sub_1C2D6EC(Instance, v16);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void FavoriteChangeListViewItem__Finalize(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool FavoriteChangeListViewItem__GetNpInfo(
        FavoriteChangeListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  TreasureDvcInfo_o *v7; // x20

  if ( (byte_4C22258 & 1) == 0 )
  {
    sub_1C2D490(&TreasureDvcInfo_TypeInfo);
    byte_4C22258 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0);
  v7 = (TreasureDvcInfo_o *)sub_1C2D6DC(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0);
  *tdInfo = v7;
  sub_1C2D434(tdInfo);
  return 0;
}


bool FavoriteChangeListViewItem__IsMatchFilter(
        FavoriteChangeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v6; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  __int64 v14; // x2
  __int64 v15; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x21
  UserServantEntity_o *userSvtEntity; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v21; // x8
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v23; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v25; // w0

  if ( (byte_4C22255 & 1) == 0 )
  {
    sub_1C2D490(&FilterKindList_TypeInfo);
    sub_1C2D490(&ListViewSort_FilterKind___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4C22255 = 1;
  }
  if ( this->fields.isFavorite )
    return 1;
  v6 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v6 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v6->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_62;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v8 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v8 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v8->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v10 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v10 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v10->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  v12 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v12->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(userSvtEntity, 0, 0) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_62;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0);
        v21 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v21 )
          goto LABEL_62;
        this->fields.skillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v21, -1, -1, 0);
        sub_1C2D434(&this->fields.skillCategoryIdList);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_62;
        this->fields.tdCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                          (UserServantEntity_o *)ClassGroupFilterKindList,
                                          0,
                                          -1,
                                          0);
        sub_1C2D434(&this->fields.tdCategoryIdList);
      }
    }
    ClassGroupFilterKindList = sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    v15 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_63;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0);
    ClassGroupFilterKindList = sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    v15 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_63:
      sub_1C2D6F4(ClassGroupFilterKindList, v15, v14);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v23 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0);
    v25 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
    if ( ((IsUnSelectedAllTargetFilters ^ v23) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v25 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v25 )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_62:
    sub_1C2D6EC(ClassGroupFilterKindList, sort);
  v15 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_63;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    && ListViewSort__GetFilter(sort, 39, 0) )
  {
    isChoice = !this->fields.isChoice;
    if ( !this->fields.isSwapChoice )
      isChoice = this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v17 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v17->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v18, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


void FavoriteChangeListViewItem__Modify(
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

  if ( (byte_4C22253 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C22253 = 1;
  }
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_1C2D434(&this->fields.userSvtEntity);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_10;
  userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userSvtEntity, 0);
  v8 = this->fields.userSvtEntity;
  this->fields.isLock = (unsigned __int8)userSvtEntity & 1;
  if ( !v8
    || (this->fields.isChoice = UserServantEntity__IsChoice(v8, 0),
        *(_WORD *)&this->fields.isSwapLock = 0,
        FavoriteChangeListViewItem__SetOverwriteStatus(this, userServantEntity, v9),
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0)) == 0)
    || (v10 = *p_userSvtEntity) == 0 )
  {
LABEL_10:
    sub_1C2D6EC(userSvtEntity, v6);
  }
  v11 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
  v12 = *(_QWORD *)&userSvtEntity->fields.dispLimitCount.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  this->fields.isPush = v12 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v13, 0);
}


void FavoriteChangeListViewItem__ModifyChoiceItem(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C2D6EC(0, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0);
  this->fields.isSwapChoice = 0;
}


// local variable allocation has failed, the output may be wrong!
void FavoriteChangeListViewItem__ModifyItem(
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

  if ( (byte_4C22252 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C22252 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.isFavorite = isFavorite;
  if ( !userSvtEntity )
    goto LABEL_10;
  userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userSvtEntity, 0);
  v6 = this->fields.userSvtEntity;
  this->fields.isLock = (unsigned __int8)userSvtEntity & 1;
  if ( !v6
    || (IsChoice = UserServantEntity__IsChoice(v6, 0),
        v8 = this->fields.userSvtEntity,
        this->fields.isChoice = IsChoice,
        *(_WORD *)&this->fields.isSwapLock = 0,
        FavoriteChangeListViewItem__SetOverwriteStatus(this, v8, v9),
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0)) == 0)
    || (v10 = this->fields.userSvtEntity) == 0 )
  {
LABEL_10:
    sub_1C2D6EC(userSvtEntity, isFavorite);
  }
  v11 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
  v12 = *(_QWORD *)&userSvtEntity->fields.dispLimitCount.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  this->fields.isPush = v12 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v13, 0);
}


void FavoriteChangeListViewItem__ModifyLockItem(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C2D6EC(0, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0);
  this->fields.isSwapLock = 0;
}


void FavoriteChangeListViewItem__SetOverwriteStatus(
        FavoriteChangeListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  FavoriteChangeListViewItem_o *v3; // x19

  if ( !userServantEntity
    || (v3 = this,
        (this = (FavoriteChangeListViewItem_o *)UserServantEntity__GetOverwriteStatus(userServantEntity, 0, 0)) == 0) )
  {
    sub_1C2D6EC(this, userServantEntity);
  }
  v3->fields.cost = this->fields.loopIndex;
  *(_QWORD *)&v3->fields.hp = *(_QWORD *)&this->fields.selectNum;
  v3->fields.rarity = this->fields.sortIndex;
}


bool FavoriteChangeListViewItem__SetSortValue(
        FavoriteChangeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool v6; // w8
  int64_t iconLabelInfo2; // x0
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isFavorite; // w10
  _BOOL4 isChoice; // w9
  int64_t v11; // x8
  bool v12; // zf
  _BOOL4 v13; // w9
  int v14; // w10
  int v15; // w8
  const MethodInfo *v16; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v18; // q1
  struct UserServantEntity_o *v19; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  int64_t v21; // x20
  IconLabelInfo_o *v22; // x21
  int64_t cost; // x2
  int32_t v24; // w3
  int32_t v25; // w1
  int64_t hp; // x20
  IconLabelInfo_o *v27; // x21
  int32_t v28; // w3
  int32_t v29; // w1
  int64_t friendship; // x2
  IconLabelInfo_o *v31; // x20
  int32_t v32; // w21
  __int64 naturalAligment; // x10
  struct ServantEntity_o *servantEntity; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v36; // x8
  int32_t lv; // w20
  int64_t hpReinforceValue; // x2
  int32_t nowMaxHpReinforceValue; // w3
  int32_t v40; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+30h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-28h] BYREF

  if ( (byte_4C22254 & 1) == 0 )
  {
    sub_1C2D490(&FavoriteChangeListViewManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C22254 = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  v6 = FavoriteChangeListViewItem__IsMatchFilter(this, sort, method);
  iconLabelInfo2 = 0;
  if ( v6 )
  {
    isSwapChoice = this->fields.isSwapChoice;
    isFavorite = this->fields.isFavorite;
    isChoice = this->fields.isChoice;
    this->fields.sortValue0 = 0;
    if ( isFavorite )
    {
      v11 = 20;
    }
    else
    {
      v12 = !isChoice;
      v13 = isChoice;
      v14 = v12;
      if ( isSwapChoice )
        v15 = v14;
      else
        v15 = v13;
      if ( v15 != 1 )
        goto LABEL_17;
      if ( !sort )
        goto LABEL_78;
      if ( !sort->fields.isChoiceSort )
      {
LABEL_17:
        iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
        if ( iconLabelInfo2 )
        {
          IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
          if ( sort )
          {
            iconLabelInfo2 = 1;
            switch ( sort->fields.sortKind )
            {
              case 1:
                userSvtEntity = this->fields.userSvtEntity;
                if ( !userSvtEntity )
                  goto LABEL_78;
                v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v43.fields.fakeValue = v18;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v42 = v43;
                iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v42, 0);
                v19 = this->fields.userSvtEntity;
                this->fields.sortValue1 = iconLabelInfo2;
                if ( !v19 )
                  goto LABEL_78;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v19->fields.createdAt, 0, 0, 0, 0);
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
                v21 = *(int *)(iconLabelInfo2 + 256);
                v22 = this->fields.iconLabelInfo1;
                this->fields.sortValue1 = v21;
                goto LABEL_45;
              case 4:
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                UserServantEntity__getTreasureDeviceInfo_42942260(
                  (UserServantEntity_o *)iconLabelInfo2,
                  &tdMaxLv[1],
                  tdMaxLv,
                  0);
                LODWORD(cost) = tdMaxLv[1];
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = tdMaxLv[1];
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                v24 = tdMaxLv[0];
                v25 = 33;
                goto LABEL_42;
              case 5:
                hp = this->fields.hp;
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                this->fields.sortValue1 = hp;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                v27 = this->fields.iconLabelInfo1;
                iconLabelInfo2 = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)iconLabelInfo2, 0);
                if ( !v27 )
                  goto LABEL_78;
                v28 = iconLabelInfo2;
                v29 = 3;
                goto LABEL_39;
              case 6:
                hp = this->fields.atk;
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                this->fields.sortValue1 = hp;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                v27 = this->fields.iconLabelInfo1;
                iconLabelInfo2 = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)iconLabelInfo2, 0);
                if ( !v27 )
                  goto LABEL_78;
                v28 = iconLabelInfo2;
                v29 = 5;
LABEL_39:
                IconLabelInfo__Set_40696284(v27, v29, hp, v28, 0, 0, 0, 0, 0, 0);
                goto LABEL_71;
              case 7:
                cost = this->fields.cost;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = cost;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                v25 = 7;
                v24 = 0;
LABEL_42:
                IconLabelInfo__Set_40696284((IconLabelInfo_o *)iconLabelInfo2, v25, cost, v24, 0, 0, 0, 0, 0, 0);
                goto LABEL_49;
              case 8:
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                this->fields.sortValue1 = -this->fields.priority;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                v21 = *(int *)(iconLabelInfo2 + 256);
                v22 = this->fields.iconLabelInfo1;
                this->fields.sortValue2 = v21;
LABEL_45:
                iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
                if ( !v22 )
                  goto LABEL_78;
                IconLabelInfo__Set_40696284(v22, 2, v21, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
                goto LABEL_76;
              case 0xA:
                friendship = this->fields.friendship;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = friendship;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                IconLabelInfo__Set_40696284(
                  (IconLabelInfo_o *)iconLabelInfo2,
                  32,
                  friendship,
                  this->fields.friendshipMax,
                  0,
                  0,
                  0,
                  0,
                  0,
                  0);
LABEL_49:
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                v31 = this->fields.iconLabelInfo2;
                v32 = *(_DWORD *)(iconLabelInfo2 + 256);
                iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
                if ( !v31 )
                  goto LABEL_78;
                IconLabelInfo__Set_40696284(v31, 2, v32, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
                iconLabelInfo2 = (int64_t)this->fields.servantEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                if ( ServantEntity__get_IsExpUp((ServantEntity_o *)iconLabelInfo2, 0) )
                  goto LABEL_55;
                iconLabelInfo2 = (int64_t)this->fields.servantEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                if ( !ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo2, 0) )
                  goto LABEL_76;
LABEL_55:
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
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
                naturalAligment = FavoriteChangeListViewManager_TypeInfo->_2.naturalAligment;
                if ( *(unsigned __int8 *)(*(_QWORD *)iconLabelInfo2 + 304LL) < (unsigned int)naturalAligment
                  || *(FavoriteChangeListViewManager_c **)(*(_QWORD *)(*(_QWORD *)iconLabelInfo2 + 200LL)
                                                         + 8 * naturalAligment
                                                         - 8) != FavoriteChangeListViewManager_TypeInfo )
                {
                  goto LABEL_78;
                }
                iconLabelInfo2 = FavoriteChangeListViewManager__GetAmountSortValue(
                                   (FavoriteChangeListViewManager_o *)iconLabelInfo2,
                                   this->fields.svtId,
                                   v16);
                this->fields.amountSortValue = iconLabelInfo2;
LABEL_63:
                servantEntity = this->fields.servantEntity;
                if ( !servantEntity )
                  goto LABEL_78;
                collectionNo = servantEntity->fields.collectionNo;
                v36 = this->fields.userSvtEntity;
                this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                         + (iconLabelInfo2 << 48))
                                        | collectionNo;
                if ( !v36 )
                  goto LABEL_78;
                iconLabelInfo1 = this->fields.iconLabelInfo1;
                lv = v36->fields.lv;
                iconLabelInfo2 = (int64_t)v36;
                goto LABEL_74;
              case 0xF:
                hpReinforceValue = this->fields.hpReinforceValue;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = hpReinforceValue;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                nowMaxHpReinforceValue = this->fields.nowMaxHpReinforceValue;
                v40 = 44;
                goto LABEL_70;
              case 0x10:
                hpReinforceValue = this->fields.atkReinforceValue;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = hpReinforceValue;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                nowMaxHpReinforceValue = this->fields.nowMaxAtkReinforceValue;
                v40 = 45;
LABEL_70:
                IconLabelInfo__Set_40696284(
                  (IconLabelInfo_o *)iconLabelInfo2,
                  v40,
                  hpReinforceValue,
                  nowMaxHpReinforceValue,
                  0,
                  0,
                  0,
                  0,
                  0,
                  0);
LABEL_71:
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_78;
                iconLabelInfo1 = this->fields.iconLabelInfo2;
LABEL_73:
                lv = *(_DWORD *)(iconLabelInfo2 + 256);
LABEL_74:
                iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
                if ( !iconLabelInfo1 )
                  goto LABEL_78;
                IconLabelInfo__Set_40696284(iconLabelInfo1, 2, lv, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
                goto LABEL_76;
              default:
                return iconLabelInfo2;
            }
            return iconLabelInfo2;
          }
        }
LABEL_78:
        sub_1C2D6EC(iconLabelInfo2, v5);
      }
      v11 = 10;
    }
    this->fields.sortValue0 = v11;
    goto LABEL_17;
  }
  return iconLabelInfo2;
}


bool FavoriteChangeListViewItem__SwapChoice(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool FavoriteChangeListViewItem__SwapLock(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


IconLabelInfo_o *FavoriteChangeListViewItem__get_IconInfo1(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *FavoriteChangeListViewItem__get_IconInfo2(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool FavoriteChangeListViewItem__get_IsBase(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBase;
}


bool FavoriteChangeListViewItem__get_IsCanNotSelect(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  if ( (byte_4C22257 & 1) == 0 )
  {
    sub_1C2D490(&TutorialFlag_TypeInfo);
    byte_4C22257 = 1;
  }
  if ( !this->fields.isHeroine )
    return this->fields.isFavorite;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_40206092(126, 0) || this->fields.isFavorite;
}


bool FavoriteChangeListViewItem__get_IsChoice(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool FavoriteChangeListViewItem__get_IsDispChoice(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool FavoriteChangeListViewItem__get_IsDispLock(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool FavoriteChangeListViewItem__get_IsEventJoin(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsEventJoin(userSvtEntity, 0);
  return (char)userSvtEntity;
}


bool FavoriteChangeListViewItem__get_IsFavorite(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFavorite;
}


bool FavoriteChangeListViewItem__get_IsHerioneReave(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  if ( (byte_4C22256 & 1) == 0 )
  {
    sub_1C2D490(&TutorialFlag_TypeInfo);
    byte_4C22256 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_40206092(126, 0);
}


bool FavoriteChangeListViewItem__get_IsLock(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool FavoriteChangeListViewItem__get_IsNoPeriod(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsNoPeriod(userSvtEntity, 0);
  return (char)userSvtEntity;
}


bool FavoriteChangeListViewItem__get_IsParty(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex >= 0;
}


bool FavoriteChangeListViewItem__get_IsPush(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool FavoriteChangeListViewItem__get_IsPushMode(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPushMode;
}


bool FavoriteChangeListViewItem__get_IsSwapChoice(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool FavoriteChangeListViewItem__get_IsSwapLock(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


ServantEntity_o *FavoriteChangeListViewItem__get_Servant(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t FavoriteChangeListViewItem__get_SvtId(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


UserServantEntity_o *FavoriteChangeListViewItem__get_UserServant(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


void FavoriteChangeListViewItem__setUserServantEntity(
        FavoriteChangeListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  this->fields.userSvtEntity = entity;
  sub_1C2D434(&this->fields.userSvtEntity);
}


void FavoriteChangeListViewItem__set_IsPushMode(
        FavoriteChangeListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isPushMode = value;
}