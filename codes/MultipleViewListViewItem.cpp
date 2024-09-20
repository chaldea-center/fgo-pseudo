void __fastcall MultipleViewListViewItem___ctor(
        MultipleViewListViewItem_o *this,
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
  __int64 Master_object; // x0
  __int64 v16; // x1
  struct UserServantEntity_o *v17; // x8
  __int64 v18; // x25
  __int64 v19; // x26
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  struct UserServantEntity_o *v22; // x8
  ServantLimitMaster_o *v23; // x26
  int32_t svtId; // w27
  int32_t v25; // w8
  struct UserServantEntity_o *v26; // x8
  __int128 v27; // q1
  UserServantCollectionMaster_o *v28; // x23
  struct UserServantEntity_o *v29; // x8
  __int128 v30; // q0
  signed int max_length; // w8
  int32_t v32; // w9
  UserServantEntity_o *v33; // x8
  struct UserServantEntity_o *v34; // x8
  __int128 v35; // q0
  __int64 v36; // x22
  int64_t v37; // x9
  int64_t rarity; // x10
  struct UserServantEntity_o *v39; // x8
  __int64 v40; // x22
  __int64 v41; // x23
  int64_t v42; // x8
  int v43; // w22
  BalanceConfig_c *v44; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  UserServantEntity_o *v46; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  struct System_Int32_array **p_tdCategoryIdList; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4A56933 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56933 = 1;
  }
  v11 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v11, 0LL);
  this->fields.iconLabelInfo1 = v11;
  sub_1B88554(&this->fields.iconLabelInfo1, v11);
  v12 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v12, 0LL);
  this->fields.iconLabelInfo2 = v12;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B88554(&this->fields.iconLabelInfo2, v12);
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  Master_object = sub_1B88554(&this->fields.userSvtEntity, userSvtEntity);
  v17 = this->fields.userSvtEntity;
  if ( !v17 )
    goto LABEL_51;
  v19 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v54.fields.currentCryptoKey = v19;
  *(_QWORD *)&v54.fields.fakeValue = v18;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v54, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_51;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.svtId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B88554(&this->fields.servantEntity, Entity);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v22 = this->fields.userSvtEntity;
  if ( !v22 )
    goto LABEL_51;
  v23 = (ServantLimitMaster_o *)Master_object;
  svtId = this->fields.svtId;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v22->fields.limitCount, 0LL);
  if ( !v23 )
    goto LABEL_51;
  Master_object = (__int64)ServantLimitMaster__GetEntity(v23, svtId, Master_object, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_51;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Master_object )
    goto LABEL_51;
  v25 = *(_DWORD *)(Master_object + 24);
  this->fields.isFavorite = isFavorite;
  this->fields.rarity = v25;
  if ( !userSvtEntity )
    goto LABEL_51;
  this->fields.isHeroine = UserServantEntity__IsHeroine(userSvtEntity, 0LL);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_51;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v26 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_51;
  v27 = *(_OWORD *)&v26->fields.userId.fields.fakeValue;
  v28 = (UserServantCollectionMaster_o *)Master_object;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&v26->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v27;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v52 = v53;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v52, 0LL);
  if ( !v28 )
    goto LABEL_51;
  Master_object = (__int64)UserServantCollectionMaster__GetEntityDefinitely(v28, Master_object, this->fields.svtId, 0LL);
  if ( !Master_object )
    goto LABEL_51;
  Master_object = UserServantCollectionEntity__getFriendShipRankInfo(
                    (UserServantCollectionEntity_o *)Master_object,
                    &this->fields.friendship,
                    &this->fields.friendshipMax,
                    0LL);
  v29 = this->fields.userSvtEntity;
  this->fields.partyIndex = -1;
  if ( !v29 )
    goto LABEL_51;
  v30 = *(_OWORD *)&v29->fields.id.fields.fakeValue;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&v29->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v30;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v51, 0LL);
  if ( !partyUserSvtList )
    goto LABEL_51;
  max_length = partyUserSvtList->max_length;
  if ( max_length >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( max_length == v32 )
        sub_1B88814(Master_object, v16);
      if ( Master_object == partyUserSvtList->m_Items[v32] )
        break;
      if ( max_length == ++v32 )
        goto LABEL_29;
    }
    this->fields.partyIndex = v32;
  }
LABEL_29:
  Master_object = (__int64)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_51;
  Master_object = UserServantEntity__IsLock((UserServantEntity_o *)Master_object, 0LL);
  v33 = this->fields.userSvtEntity;
  this->fields.isLock = Master_object & 1;
  if ( !v33 )
    goto LABEL_51;
  this->fields.isChoice = UserServantEntity__IsChoice(v33, 0LL);
  Master_object = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !Master_object )
    goto LABEL_51;
  v34 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_51;
  v35 = *(_OWORD *)&v34->fields.id.fields.fakeValue;
  v36 = *(_QWORD *)(Master_object + 120);
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&v34->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v35;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v50 = v53;
  *(_WORD *)&this->fields.isPush = v36 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                            &v50,
                                            0LL);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_51;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_51;
  Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             this->fields.classId,
                             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_51;
  v37 = *(int *)(Master_object + 48);
  rarity = this->fields.rarity;
  v39 = this->fields.userSvtEntity;
  this->fields.priority = v37;
  this->fields.sortValue1B = v37;
  this->fields.sortValue2 = rarity;
  if ( !v39 )
    goto LABEL_51;
  v41 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
  v40 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v55.fields.currentCryptoKey = v41;
  *(_QWORD *)&v55.fields.fakeValue = v40;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v55, 0LL);
  Master_object = (__int64)this->fields.userSvtEntity;
  this->fields.sortValue2B = v42;
  this->fields.amountSortValue = -1LL;
  *(_WORD *)&this->fields.isSwapLock = 0;
  *(_WORD *)&this->fields.isSelectedSvtId = 0;
  if ( !Master_object )
    goto LABEL_51;
  v43 = *(_DWORD *)(Master_object + 276);
  v44 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v44 = BalanceConfig_TypeInfo;
    Master_object = (__int64)*p_userSvtEntity;
  }
  static_fields = v44->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v43;
  if ( !Master_object )
    goto LABEL_51;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Master_object + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Master_object,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Master_object = (__int64)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_51;
  Master_object = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Master_object, 0, 0LL);
  v46 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Master_object;
  if ( !v46 )
    goto LABEL_51;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v46, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1B88554(&this->fields.skillCategoryIdList, SkillCategoryIdList);
  Master_object = (__int64)this->fields.userSvtEntity;
  if ( !Master_object
    || (TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)Master_object,
                                         0,
                                         0LL),
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList,
        p_tdCategoryIdList = &this->fields.tdCategoryIdList,
        sub_1B88554(p_tdCategoryIdList, TreasureDeviceCategoryIdList),
        (Master_object = (__int64)*(p_tdCategoryIdList - 6)) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0LL), (Master_object = (__int64)*p_iconLabelInfo2) == 0) )
  {
LABEL_51:
    sub_1B8880C(Master_object, v16);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0LL);
}


void __fastcall MultipleViewListViewItem__Finalize(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall MultipleViewListViewItem__GetNpInfo(
        MultipleViewListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  TreasureDvcInfo_o *v7; // x20

  if ( (byte_4A5693B & 1) == 0 )
  {
    sub_1B885B0(&TreasureDvcInfo_TypeInfo);
    byte_4A5693B = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1B887FC(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1B88554(tdInfo, v7);
  return 0;
}


bool __fastcall MultipleViewListViewItem__IsMatchFilter(
        MultipleViewListViewItem_o *this,
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
  __int64 v14; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x21
  UserServantEntity_o *userSvtEntity; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v20; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v24; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v26; // w0

  if ( (byte_4A56938 & 1) == 0 )
  {
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterKind___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4A56938 = 1;
  }
  if ( (this->fields.selectNum & 0x80000000) == 0 )
    return 1;
  v6 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v6 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v6->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_60;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_60;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v8 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v8 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v8->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_60;
    v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
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
  ClassGroupFilterKindList = (__int64)v10->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_60;
  v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
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
LABEL_60:
    sub_1B8880C(ClassGroupFilterKindList, sort);
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
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
          goto LABEL_60;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v20 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v20 )
          goto LABEL_60;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v20, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1B88554(&this->fields.skillCategoryIdList, SkillCategoryIdList);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_60;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1B88554(&this->fields.tdCategoryIdList, TreasureDeviceCategoryIdList);
      }
    }
    ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_60;
    v14 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_61;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_60;
    v14 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_61:
      sub_1B88814(ClassGroupFilterKindList, v14);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v24 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v26 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v24) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v26 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v26 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_60;
  v14 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_61;
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
  v16 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v16->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_60;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v17, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall MultipleViewListViewItem__Modify(
        MultipleViewListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  struct UserServantEntity_o **p_userSvtEntity; // x20
  __int64 v6; // x1
  UserServantEntity_o *userSvtEntity; // x0
  UserServantEntity_o *v8; // x8
  struct UserServantEntity_o *v9; // x8
  __int128 v10; // q1
  __int64 v11; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-40h]

  if ( (byte_4A56936 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A56936 = 1;
  }
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_1B88554(&this->fields.userSvtEntity, userServantEntity);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity
    || (userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userSvtEntity, 0LL),
        v8 = this->fields.userSvtEntity,
        this->fields.isLock = (unsigned __int8)userSvtEntity & 1,
        !v8)
    || (this->fields.isChoice = UserServantEntity__IsChoice(v8, 0LL),
        *(_WORD *)&this->fields.isSwapLock = 0,
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0LL)) == 0LL)
    || (v9 = *p_userSvtEntity) == 0LL )
  {
    sub_1B8880C(userSvtEntity, v6);
  }
  v10 = *(_OWORD *)&v9->fields.id.fields.fakeValue;
  v11 = *(_QWORD *)&userSvtEntity->fields.imageLimitCount.fields.fakeValue;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&v9->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  this->fields.isPush = v11 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v12, 0LL);
}


void __fastcall MultipleViewListViewItem__ModifyChoiceItem(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B8880C(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewItem__ModifyItem(
        MultipleViewListViewItem_o *this,
        bool isFavorite,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  UserServantEntity_o *v6; // x8
  struct UserServantEntity_o *v7; // x8
  __int128 v8; // q1
  __int64 v9; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  if ( (byte_4A56934 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A56934 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.isFavorite = isFavorite;
  if ( !userSvtEntity
    || (userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userSvtEntity, 0LL),
        v6 = this->fields.userSvtEntity,
        this->fields.isLock = (unsigned __int8)userSvtEntity & 1,
        !v6)
    || (this->fields.isChoice = UserServantEntity__IsChoice(v6, 0LL),
        *(_WORD *)&this->fields.isSwapLock = 0,
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0LL)) == 0LL)
    || (v7 = this->fields.userSvtEntity) == 0LL )
  {
    sub_1B8880C(userSvtEntity, isFavorite);
  }
  v8 = *(_OWORD *)&v7->fields.id.fields.fakeValue;
  v9 = *(_QWORD *)&userSvtEntity->fields.imageLimitCount.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&v7->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v10 = v11;
  this->fields.isPush = v9 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewItem__ModifyItem_31258220(
        MultipleViewListViewItem_o *this,
        int32_t selectIndex,
        bool isSelectedSvtId,
        bool isSelectedMax,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  UserServantEntity_o *v10; // x8
  struct UserServantEntity_o *v11; // x8
  __int128 v12; // q1
  __int64 v13; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-50h]

  if ( (byte_4A56935 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A56935 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.selectNum = selectIndex;
  this->fields.isSelectedSvtId = isSelectedSvtId;
  this->fields.isSelectedMax = isSelectedMax;
  if ( !userSvtEntity
    || (userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userSvtEntity, 0LL),
        v10 = this->fields.userSvtEntity,
        this->fields.isLock = (unsigned __int8)userSvtEntity & 1,
        !v10)
    || (this->fields.isChoice = UserServantEntity__IsChoice(v10, 0LL),
        *(_WORD *)&this->fields.isSwapLock = 0,
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0LL)) == 0LL)
    || (v11 = this->fields.userSvtEntity) == 0LL )
  {
    sub_1B8880C(userSvtEntity, *(_QWORD *)&selectIndex);
  }
  v12 = *(_OWORD *)&v11->fields.id.fields.fakeValue;
  v13 = *(_QWORD *)&userSvtEntity->fields.imageLimitCount.fields.fakeValue;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&v11->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v12;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  this->fields.isPush = v13 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v14, 0LL);
}


void __fastcall MultipleViewListViewItem__ModifyLockItem(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B8880C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


bool __fastcall MultipleViewListViewItem__SetSortValue(
        MultipleViewListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool IsMatchFilter; // w8
  int64_t iconLabelInfo2; // x0
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v10; // zf
  _BOOL4 v11; // w8
  int v12; // w10
  const MethodInfo *v13; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v15; // q1
  struct UserServantEntity_o *v16; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  int64_t v18; // x20
  IconLabelInfo_o *v19; // x21
  int64_t cost; // x2
  int32_t friendshipMax; // w3
  int32_t v22; // w1
  struct UserServantEntity_o *v23; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v26; // w1
  struct UserServantEntity_o *v27; // x8
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *v29; // x20
  int32_t v30; // w21
  __int64 methodPtr_low; // x10
  struct ServantEntity_o *v32; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v34; // x8
  int32_t lv; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+30h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-28h] BYREF

  if ( (byte_4A56937 & 1) == 0 )
  {
    sub_1B885B0(&MultipleViewListViewManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A56937 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  IsMatchFilter = MultipleViewListViewItem__IsMatchFilter(this, sort, method);
  iconLabelInfo2 = 0LL;
  if ( IsMatchFilter )
  {
    isChoice = this->fields.isChoice;
    isSwapChoice = this->fields.isSwapChoice;
    this->fields.sortValue0 = 0LL;
    v10 = !isChoice;
    v11 = !isChoice;
    v12 = !v10;
    if ( !isSwapChoice )
      v11 = v12;
    if ( v11 )
    {
      if ( !sort )
        goto LABEL_73;
      if ( sort->fields.isChoiceSort )
        this->fields.sortValue0 = 10LL;
    }
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
              goto LABEL_73;
            v15 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v38.fields.fakeValue = v15;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v37 = v38;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v37, 0LL);
            v16 = this->fields.userSvtEntity;
            this->fields.sortValue1 = iconLabelInfo2;
            if ( !v16 )
              goto LABEL_73;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v16->fields.createdAt, 0, 0, 0, 0LL);
            goto LABEL_66;
          case 2:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = this->fields.rarity;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            goto LABEL_68;
          case 3:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            v18 = *(int *)(iconLabelInfo2 + 256);
            v19 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v18;
            goto LABEL_40;
          case 4:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            UserServantEntity__getTreasureDeviceInfo_40212352(
              (UserServantEntity_o *)iconLabelInfo2,
              &tdMaxLv[1],
              tdMaxLv,
              0LL);
            LODWORD(cost) = tdMaxLv[1];
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = tdMaxLv[1];
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            friendshipMax = tdMaxLv[0];
            v22 = 33;
            goto LABEL_44;
          case 5:
            v23 = this->fields.userSvtEntity;
            if ( !v23 )
              goto LABEL_73;
            hp = v23->fields.hp;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            adjustHp = v23->fields.adjustHp;
            v26 = 3;
            goto LABEL_65;
          case 6:
            v27 = this->fields.userSvtEntity;
            if ( !v27 )
              goto LABEL_73;
            hp = v27->fields.atk;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            adjustHp = v27->fields.adjustAtk;
            v26 = 5;
            goto LABEL_65;
          case 7:
            servantEntity = this->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_73;
            cost = servantEntity->fields.cost;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = cost;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            v22 = 7;
            friendshipMax = 0;
            goto LABEL_44;
          case 8:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = -this->fields.priority;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            v18 = *(int *)(iconLabelInfo2 + 256);
            v19 = this->fields.iconLabelInfo1;
            this->fields.sortValue2 = v18;
LABEL_40:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v19 )
              goto LABEL_73;
            IconLabelInfo__Set_38140136(v19, 2, v18, iconLabelInfo2, 0, 0, 0, 0, 0LL);
            goto LABEL_71;
          case 0xA:
            cost = this->fields.friendship;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = cost;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            friendshipMax = this->fields.friendshipMax;
            v22 = 32;
LABEL_44:
            IconLabelInfo__Set_38140136((IconLabelInfo_o *)iconLabelInfo2, v22, cost, friendshipMax, 0, 0, 0, 0, 0LL);
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            v29 = this->fields.iconLabelInfo2;
            v30 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v29 )
              goto LABEL_73;
            IconLabelInfo__Set_38140136(v29, 2, v30, iconLabelInfo2, 0, 0, 0, 0, 0LL);
            iconLabelInfo2 = (int64_t)this->fields.servantEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            if ( ServantEntity__get_IsExpUp((ServantEntity_o *)iconLabelInfo2, 0LL) )
              goto LABEL_50;
            iconLabelInfo2 = (int64_t)this->fields.servantEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            if ( !ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo2, 0LL) )
              goto LABEL_71;
LABEL_50:
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
LABEL_71:
            LOBYTE(iconLabelInfo2) = 1;
            break;
          case 0xE:
            iconLabelInfo2 = this->fields.amountSortValue;
            if ( (iconLabelInfo2 & 0x8000000000000000LL) == 0 )
              goto LABEL_58;
            iconLabelInfo2 = (int64_t)sort->fields.manager;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            methodPtr_low = LOBYTE(MultipleViewListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)iconLabelInfo2 + 304LL) < (unsigned int)methodPtr_low
              || *(MultipleViewListViewManager_c **)(*(_QWORD *)(*(_QWORD *)iconLabelInfo2 + 200LL)
                                                   + 8 * methodPtr_low
                                                   - 8) != MultipleViewListViewManager_TypeInfo )
            {
              goto LABEL_73;
            }
            iconLabelInfo2 = MultipleViewListViewManager__GetAmountSortValue(
                               (MultipleViewListViewManager_o *)iconLabelInfo2,
                               this->fields.svtId,
                               v13);
            this->fields.amountSortValue = iconLabelInfo2;
LABEL_58:
            v32 = this->fields.servantEntity;
            if ( !v32 )
              goto LABEL_73;
            collectionNo = v32->fields.collectionNo;
            v34 = this->fields.userSvtEntity;
            this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                     + (iconLabelInfo2 << 48)) | collectionNo;
            if ( !v34 )
              goto LABEL_73;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            lv = v34->fields.lv;
            iconLabelInfo2 = (int64_t)v34;
            goto LABEL_69;
          case 0xF:
            hp = this->fields.hpReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            adjustHp = this->fields.nowMaxHpReinforceValue;
            v26 = 44;
            goto LABEL_65;
          case 0x10:
            hp = this->fields.atkReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            adjustHp = this->fields.nowMaxAtkReinforceValue;
            v26 = 45;
LABEL_65:
            IconLabelInfo__Set_38140136((IconLabelInfo_o *)iconLabelInfo2, v26, hp, adjustHp, 0, 0, 0, 0, 0LL);
LABEL_66:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            iconLabelInfo1 = this->fields.iconLabelInfo2;
LABEL_68:
            lv = *(_DWORD *)(iconLabelInfo2 + 256);
LABEL_69:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !iconLabelInfo1 )
              goto LABEL_73;
            IconLabelInfo__Set_38140136(iconLabelInfo1, 2, lv, iconLabelInfo2, 0, 0, 0, 0, 0LL);
            goto LABEL_71;
          default:
            return iconLabelInfo2;
        }
        return iconLabelInfo2;
      }
    }
LABEL_73:
    sub_1B8880C(iconLabelInfo2, v5);
  }
  return iconLabelInfo2;
}


void __fastcall MultipleViewListViewItem__SetUserServantEntity(
        MultipleViewListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  this->fields.userSvtEntity = entity;
  sub_1B88554(&this->fields.userSvtEntity, entity);
}


bool __fastcall MultipleViewListViewItem__SwapChoice(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall MultipleViewListViewItem__SwapLock(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


IconLabelInfo_o *__fastcall MultipleViewListViewItem__get_IconInfo1(
        MultipleViewListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall MultipleViewListViewItem__get_IconInfo2(
        MultipleViewListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall MultipleViewListViewItem__get_IsBase(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBase;
}


bool __fastcall MultipleViewListViewItem__get_IsCanNotSelect(
        MultipleViewListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5693A & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5693A = 1;
  }
  if ( this->fields.isHeroine )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_37688364(126, 0LL) )
      return 1;
  }
  if ( (this->fields.selectNum & 0x80000000) == 0 )
    return 0;
  return this->fields.isSelectedSvtId || this->fields.isSelectedMax;
}


bool __fastcall MultipleViewListViewItem__get_IsChoice(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall MultipleViewListViewItem__get_IsDispChoice(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool __fastcall MultipleViewListViewItem__get_IsDispLock(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool __fastcall MultipleViewListViewItem__get_IsEventJoin(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
  return (char)userSvtEntity;
}


bool __fastcall MultipleViewListViewItem__get_IsFavorite(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFavorite;
}


bool __fastcall MultipleViewListViewItem__get_IsHerioneReave(
        MultipleViewListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A56939 & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A56939 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_37688364(126, 0LL);
}


bool __fastcall MultipleViewListViewItem__get_IsLock(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall MultipleViewListViewItem__get_IsNoPeriod(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsNoPeriod(userSvtEntity, 0LL);
  return (char)userSvtEntity;
}


bool __fastcall MultipleViewListViewItem__get_IsParty(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex >= 0;
}


bool __fastcall MultipleViewListViewItem__get_IsPush(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool __fastcall MultipleViewListViewItem__get_IsPushMode(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPushMode;
}


bool __fastcall MultipleViewListViewItem__get_IsSelectedMax(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSelectedMax;
}


bool __fastcall MultipleViewListViewItem__get_IsSelectedSvtId(
        MultipleViewListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSelectedSvtId;
}


bool __fastcall MultipleViewListViewItem__get_IsSwapChoice(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall MultipleViewListViewItem__get_IsSwapLock(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


ServantEntity_o *__fastcall MultipleViewListViewItem__get_Servant(
        MultipleViewListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t __fastcall MultipleViewListViewItem__get_SvtId(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


UserServantEntity_o *__fastcall MultipleViewListViewItem__get_UserServant(
        MultipleViewListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


void __fastcall MultipleViewListViewItem__set_IsPushMode(
        MultipleViewListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isPushMode = value;
}