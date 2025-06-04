// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewItem___ctor(
        MultipleViewListViewItem_o *this,
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
  __int64 v21; // x1
  IconLabelInfo_o *v22; // x20
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  IconLabelInfo_o *v25; // x25
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct UserServantEntity_o **p_userSvtEntity; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int64_t Master_object; // x0
  __int64 v33; // x1
  struct UserServantEntity_o *v34; // x8
  __int64 v35; // x25
  __int64 v36; // x26
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct UserServantEntity_o *v41; // x8
  ServantLimitMaster_o *v42; // x26
  int32_t svtId; // w27
  const MethodInfo *v44; // x2
  struct UserServantEntity_o *v45; // x8
  __int128 v46; // q1
  UserServantCollectionMaster_o *v47; // x23
  struct UserServantEntity_o *v48; // x8
  __int128 v49; // q0
  __int64 v50; // x2
  signed int max_length; // w8
  int32_t v52; // w9
  UserServantEntity_o *v53; // x8
  struct UserServantEntity_o *v54; // x8
  __int128 v55; // q0
  __int64 v56; // x22
  int64_t v57; // x9
  int64_t rarity; // x10
  struct UserServantEntity_o *v59; // x8
  __int64 v60; // x22
  __int64 v61; // x23
  int64_t v62; // x8
  int v63; // w22
  BalanceConfig_c *v64; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  UserServantEntity_o *v66; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  struct System_Int32_array **p_tdCategoryIdList; // x19
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16

  if ( (byte_4AFD35F & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantClassMaster___, v11);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v12);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitMaster___, v13);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, v14);
    sub_1BC3008(&DataManager_TypeInfo, v15);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_1BC3008(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v17);
    sub_1BC3008(&IconLabelInfo_TypeInfo, v18);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4AFD35F = 1;
  }
  v22 = (IconLabelInfo_o *)sub_1BC3254(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v22, 0LL);
  this->fields.iconLabelInfo1 = v22;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v22, v23, v24);
  v25 = (IconLabelInfo_o *)sub_1BC3254(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v25, 0LL);
  this->fields.iconLabelInfo2 = v25;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v25, v27, v28);
  ListViewItem___ctor_42769384((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v30, v31);
  v34 = this->fields.userSvtEntity;
  if ( !v34 )
    goto LABEL_51;
  v36 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
  v35 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v78.fields.currentCryptoKey = v36;
  *(_QWORD *)&v78.fields.fakeValue = v35;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v78, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_51;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.svtId,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v39, v40);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v41 = this->fields.userSvtEntity;
  if ( !v41 )
    goto LABEL_51;
  v42 = (ServantLimitMaster_o *)Master_object;
  svtId = this->fields.svtId;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v41->fields.limitCount, 0LL);
  if ( !v42 )
    goto LABEL_51;
  Master_object = (int64_t)ServantLimitMaster__GetEntity(v42, svtId, Master_object, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_51;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Master_object )
    goto LABEL_51;
  this->fields.rarity = *(_DWORD *)(Master_object + 24);
  MultipleViewListViewItem__SetOverwriteStatus(this, userSvtEntity, v44);
  this->fields.isFavorite = isFavorite;
  if ( !userSvtEntity )
    goto LABEL_51;
  this->fields.isHeroine = UserServantEntity__IsHeroine(userSvtEntity, 0LL);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_51;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v45 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_51;
  v46 = *(_OWORD *)&v45->fields.userId.fields.fakeValue;
  v47 = (UserServantCollectionMaster_o *)Master_object;
  *(_OWORD *)&v77.fields.currentCryptoKey = *(_OWORD *)&v45->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v77.fields.fakeValue = v46;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v76 = v77;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v76, 0LL);
  if ( !v47 )
    goto LABEL_51;
  Master_object = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v47, Master_object, this->fields.svtId, 0LL);
  if ( !Master_object )
    goto LABEL_51;
  Master_object = UserServantCollectionEntity__getFriendShipRankInfo(
                    (UserServantCollectionEntity_o *)Master_object,
                    &this->fields.friendship,
                    &this->fields.friendshipMax,
                    0LL);
  v48 = this->fields.userSvtEntity;
  this->fields.partyIndex = -1;
  if ( !v48 )
    goto LABEL_51;
  v49 = *(_OWORD *)&v48->fields.id.fields.fakeValue;
  *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&v48->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v75.fields.fakeValue = v49;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v75, 0LL);
  if ( !partyUserSvtList )
    goto LABEL_51;
  max_length = partyUserSvtList->max_length;
  if ( max_length >= 1 )
  {
    v52 = 0;
    while ( 1 )
    {
      if ( max_length == v52 )
        sub_1BC326C(Master_object, v33, v50);
      if ( Master_object == partyUserSvtList->m_Items[v52] )
        break;
      if ( max_length == ++v52 )
        goto LABEL_29;
    }
    this->fields.partyIndex = v52;
  }
LABEL_29:
  Master_object = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_51;
  Master_object = UserServantEntity__IsLock((UserServantEntity_o *)Master_object, 0LL);
  v53 = this->fields.userSvtEntity;
  this->fields.isLock = Master_object & 1;
  if ( !v53 )
    goto LABEL_51;
  this->fields.isChoice = UserServantEntity__IsChoice(v53, 0LL);
  Master_object = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Master_object )
    goto LABEL_51;
  v54 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_51;
  v55 = *(_OWORD *)&v54->fields.id.fields.fakeValue;
  v56 = *(_QWORD *)(Master_object + 128);
  *(_OWORD *)&v77.fields.currentCryptoKey = *(_OWORD *)&v54->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v77.fields.fakeValue = v55;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v74 = v77;
  *(_WORD *)&this->fields.isPush = v56 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
                                            &v74,
                                            0LL);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_51;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_51;
  Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             this->fields.classId,
                             (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_51;
  v57 = *(int *)(Master_object + 52);
  rarity = this->fields.rarity;
  v59 = this->fields.userSvtEntity;
  this->fields.priority = v57;
  this->fields.sortValue1B = v57;
  this->fields.sortValue2 = rarity;
  if ( !v59 )
    goto LABEL_51;
  v61 = *(_QWORD *)&v59->fields.svtId.fields.currentCryptoKey;
  v60 = *(_QWORD *)&v59->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v79.fields.currentCryptoKey = v61;
  *(_QWORD *)&v79.fields.fakeValue = v60;
  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v79, 0LL);
  Master_object = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v62;
  this->fields.amountSortValue = -1LL;
  *(_WORD *)&this->fields.isSwapLock = 0;
  *(_WORD *)&this->fields.isSelectedSvtId = 0;
  if ( !Master_object )
    goto LABEL_51;
  v63 = *(_DWORD *)(Master_object + 276);
  v64 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v64 = BalanceConfig_TypeInfo;
    Master_object = (int64_t)*p_userSvtEntity;
  }
  static_fields = v64->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v63;
  if ( !Master_object )
    goto LABEL_51;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Master_object + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Master_object,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Master_object = (int64_t)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_51;
  Master_object = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Master_object, 0, 0LL);
  v66 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Master_object;
  if ( !v66 )
    goto LABEL_51;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v66, -1, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v68, v69);
  Master_object = (int64_t)this->fields.userSvtEntity;
  if ( !Master_object
    || (TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)Master_object,
                                         0,
                                         -1,
                                         0LL),
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList,
        p_tdCategoryIdList = &this->fields.tdCategoryIdList,
        sub_1BC2FAC((CGThumbnailListItem_o *)p_tdCategoryIdList, (int32_t)TreasureDeviceCategoryIdList, v72, v73),
        (Master_object = (int64_t)*(p_tdCategoryIdList - 6)) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0LL), (Master_object = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_51:
    sub_1BC3264(Master_object, v33);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4AFD367 & 1) == 0 )
  {
    sub_1BC3008(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4AFD367 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1BC3254(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)tdInfo, (int32_t)v7, v8, v9);
  return 0;
}


bool __fastcall MultipleViewListViewItem__IsMatchFilter(
        MultipleViewListViewItem_o *this,
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
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v31; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v33; // w0

  if ( (byte_4AFD364 & 1) == 0 )
  {
    sub_1BC3008(&FilterKindList_TypeInfo, sort);
    sub_1BC3008(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_4AFD364 = 1;
  }
  if ( (this->fields.selectNum & 0x80000000) == 0 )
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
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v23, -1, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v25, v26);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_62;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         -1,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1BC2FAC(
          (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v28,
          v29);
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
    v31 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v33 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v31) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v33 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v33 )
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


void __fastcall MultipleViewListViewItem__Modify(
        MultipleViewListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct UserServantEntity_o **p_userSvtEntity; // x20
  __int64 v7; // x1
  UserServantEntity_o *userSvtEntity; // x0
  UserServantEntity_o *v9; // x8
  bool IsChoice; // w0
  UserServantEntity_o *v11; // x1
  const MethodInfo *v12; // x2
  struct UserServantEntity_o *v13; // x8
  __int128 v14; // q1
  __int64 v15; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-40h]

  if ( (byte_4AFD362 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userServantEntity);
    byte_4AFD362 = 1;
  }
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userServantEntity, (int32_t)method, v3);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_10;
  userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userSvtEntity, 0LL);
  v9 = this->fields.userSvtEntity;
  this->fields.isLock = (unsigned __int8)userSvtEntity & 1;
  if ( !v9
    || (IsChoice = UserServantEntity__IsChoice(v9, 0LL),
        v11 = this->fields.userSvtEntity,
        this->fields.isChoice = IsChoice,
        *(_WORD *)&this->fields.isSwapLock = 0,
        MultipleViewListViewItem__SetOverwriteStatus(this, v11, v12),
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0LL)) == 0LL)
    || (v13 = *p_userSvtEntity) == 0LL )
  {
LABEL_10:
    sub_1BC3264(userSvtEntity, v7);
  }
  v14 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
  v15 = *(_QWORD *)&userSvtEntity->fields.dispLimitCount.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v14;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v16 = v17;
  this->fields.isPush = v15 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v16, 0LL);
}


void __fastcall MultipleViewListViewItem__ModifyChoiceItem(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BC3264(0LL, method);
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
  bool IsChoice; // w0
  UserServantEntity_o *v8; // x1
  const MethodInfo *v9; // x2
  struct UserServantEntity_o *v10; // x8
  __int128 v11; // q1
  __int64 v12; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-40h]

  if ( (byte_4AFD360 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isFavorite);
    byte_4AFD360 = 1;
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
        MultipleViewListViewItem__SetOverwriteStatus(this, v8, v9),
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


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewItem__ModifyItem_32506532(
        MultipleViewListViewItem_o *this,
        int32_t selectIndex,
        bool isSelectedSvtId,
        bool isSelectedMax,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  UserServantEntity_o *v10; // x8
  bool IsChoice; // w0
  UserServantEntity_o *v12; // x1
  const MethodInfo *v13; // x2
  struct UserServantEntity_o *v14; // x8
  __int128 v15; // q1
  __int64 v16; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-50h]

  if ( (byte_4AFD361 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&selectIndex);
    byte_4AFD361 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.selectNum = selectIndex;
  this->fields.isSelectedSvtId = isSelectedSvtId;
  this->fields.isSelectedMax = isSelectedMax;
  if ( !userSvtEntity )
    goto LABEL_10;
  userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userSvtEntity, 0LL);
  v10 = this->fields.userSvtEntity;
  this->fields.isLock = (unsigned __int8)userSvtEntity & 1;
  if ( !v10
    || (IsChoice = UserServantEntity__IsChoice(v10, 0LL),
        v12 = this->fields.userSvtEntity,
        this->fields.isChoice = IsChoice,
        *(_WORD *)&this->fields.isSwapLock = 0,
        MultipleViewListViewItem__SetOverwriteStatus(this, v12, v13),
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0LL)) == 0LL)
    || (v14 = this->fields.userSvtEntity) == 0LL )
  {
LABEL_10:
    sub_1BC3264(userSvtEntity, *(_QWORD *)&selectIndex);
  }
  v15 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
  v16 = *(_QWORD *)&userSvtEntity->fields.dispLimitCount.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v15;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v17 = v18;
  this->fields.isPush = v16 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v17, 0LL);
}


void __fastcall MultipleViewListViewItem__ModifyLockItem(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BC3264(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall MultipleViewListViewItem__SetOverwriteStatus(
        MultipleViewListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  MultipleViewListViewItem_o *v3; // x19

  if ( !userServantEntity
    || (v3 = this,
        (this = (MultipleViewListViewItem_o *)UserServantEntity__GetOverwriteStatus(userServantEntity, 0LL, 0LL)) == 0LL) )
  {
    sub_1BC3264(this, userServantEntity);
  }
  v3->fields.cost = this->fields.loopIndex;
  *(_QWORD *)&v3->fields.hp = *(_QWORD *)&this->fields.selectNum;
  v3->fields.rarity = this->fields.sortIndex;
}


bool __fastcall MultipleViewListViewItem__SetSortValue(
        MultipleViewListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  bool IsMatchFilter; // w8
  int64_t iconLabelInfo2; // x0
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v11; // zf
  _BOOL4 v12; // w8
  int v13; // w10
  const MethodInfo *v14; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v16; // q1
  struct UserServantEntity_o *v17; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  int64_t v19; // x20
  IconLabelInfo_o *v20; // x21
  int64_t cost; // x2
  int32_t v22; // w3
  int32_t v23; // w1
  int64_t hp; // x20
  IconLabelInfo_o *v25; // x21
  int32_t v26; // w3
  int32_t v27; // w1
  int64_t friendship; // x2
  IconLabelInfo_o *v29; // x20
  int32_t v30; // w21
  __int64 methodPtr_low; // x10
  struct ServantEntity_o *servantEntity; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v34; // x8
  int32_t lv; // w20
  int64_t hpReinforceValue; // x2
  int32_t nowMaxHpReinforceValue; // w3
  int32_t v38; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+30h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-28h] BYREF

  if ( (byte_4AFD363 & 1) == 0 )
  {
    sub_1BC3008(&MultipleViewListViewManager_TypeInfo, sort);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4AFD363 = 1;
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
    v11 = !isChoice;
    v12 = !isChoice;
    v13 = !v11;
    if ( !isSwapChoice )
      v12 = v13;
    if ( v12 )
    {
      if ( !sort )
        goto LABEL_74;
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
              goto LABEL_74;
            v16 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v41.fields.fakeValue = v16;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v40 = v41;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v40, 0LL);
            v17 = this->fields.userSvtEntity;
            this->fields.sortValue1 = iconLabelInfo2;
            if ( !v17 )
              goto LABEL_74;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v17->fields.createdAt, 0, 0, 0, 0LL);
            goto LABEL_67;
          case 2:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = this->fields.rarity;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            goto LABEL_69;
          case 3:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            v19 = *(int *)(iconLabelInfo2 + 256);
            v20 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v19;
            goto LABEL_41;
          case 4:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            UserServantEntity__getTreasureDeviceInfo_42151700(
              (UserServantEntity_o *)iconLabelInfo2,
              &tdMaxLv[1],
              tdMaxLv,
              0LL);
            LODWORD(cost) = tdMaxLv[1];
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = tdMaxLv[1];
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            v22 = tdMaxLv[0];
            v23 = 33;
            goto LABEL_38;
          case 5:
            hp = this->fields.hp;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            v25 = this->fields.iconLabelInfo1;
            iconLabelInfo2 = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v25 )
              goto LABEL_74;
            v26 = iconLabelInfo2;
            v27 = 3;
            goto LABEL_35;
          case 6:
            hp = this->fields.atk;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            v25 = this->fields.iconLabelInfo1;
            iconLabelInfo2 = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v25 )
              goto LABEL_74;
            v26 = iconLabelInfo2;
            v27 = 5;
LABEL_35:
            IconLabelInfo__Set_39947860(v25, v27, hp, v26, 0, 0, 0, 0, 0, 0LL);
            goto LABEL_67;
          case 7:
            cost = this->fields.cost;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = cost;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            v23 = 7;
            v22 = 0;
LABEL_38:
            IconLabelInfo__Set_39947860((IconLabelInfo_o *)iconLabelInfo2, v23, cost, v22, 0, 0, 0, 0, 0, 0LL);
            goto LABEL_45;
          case 8:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = -this->fields.priority;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            v19 = *(int *)(iconLabelInfo2 + 256);
            v20 = this->fields.iconLabelInfo1;
            this->fields.sortValue2 = v19;
LABEL_41:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v20 )
              goto LABEL_74;
            IconLabelInfo__Set_39947860(v20, 2, v19, iconLabelInfo2, 0, 0, 0, 0, 0, 0LL);
            goto LABEL_72;
          case 0xA:
            friendship = this->fields.friendship;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
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
LABEL_45:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            v29 = this->fields.iconLabelInfo2;
            v30 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v29 )
              goto LABEL_74;
            IconLabelInfo__Set_39947860(v29, 2, v30, iconLabelInfo2, 0, 0, 0, 0, 0, 0LL);
            iconLabelInfo2 = (int64_t)this->fields.servantEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            if ( ServantEntity__get_IsExpUp((ServantEntity_o *)iconLabelInfo2, 0LL) )
              goto LABEL_51;
            iconLabelInfo2 = (int64_t)this->fields.servantEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            if ( !ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo2, 0LL) )
              goto LABEL_72;
LABEL_51:
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
LABEL_72:
            LOBYTE(iconLabelInfo2) = 1;
            break;
          case 0xE:
            iconLabelInfo2 = this->fields.amountSortValue;
            if ( (iconLabelInfo2 & 0x8000000000000000LL) == 0 )
              goto LABEL_59;
            iconLabelInfo2 = (int64_t)sort->fields.manager;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            methodPtr_low = LOBYTE(MultipleViewListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)iconLabelInfo2 + 304LL) < (unsigned int)methodPtr_low
              || *(MultipleViewListViewManager_c **)(*(_QWORD *)(*(_QWORD *)iconLabelInfo2 + 200LL)
                                                   + 8 * methodPtr_low
                                                   - 8) != MultipleViewListViewManager_TypeInfo )
            {
              goto LABEL_74;
            }
            iconLabelInfo2 = MultipleViewListViewManager__GetAmountSortValue(
                               (MultipleViewListViewManager_o *)iconLabelInfo2,
                               this->fields.svtId,
                               v14);
            this->fields.amountSortValue = iconLabelInfo2;
LABEL_59:
            servantEntity = this->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_74;
            collectionNo = servantEntity->fields.collectionNo;
            v34 = this->fields.userSvtEntity;
            this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                     + (iconLabelInfo2 << 48)) | collectionNo;
            if ( !v34 )
              goto LABEL_74;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            lv = v34->fields.lv;
            iconLabelInfo2 = (int64_t)v34;
            goto LABEL_70;
          case 0xF:
            hpReinforceValue = this->fields.hpReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hpReinforceValue;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            nowMaxHpReinforceValue = this->fields.nowMaxHpReinforceValue;
            v38 = 44;
            goto LABEL_66;
          case 0x10:
            hpReinforceValue = this->fields.atkReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hpReinforceValue;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            nowMaxHpReinforceValue = this->fields.nowMaxAtkReinforceValue;
            v38 = 45;
LABEL_66:
            IconLabelInfo__Set_39947860(
              (IconLabelInfo_o *)iconLabelInfo2,
              v38,
              hpReinforceValue,
              nowMaxHpReinforceValue,
              0,
              0,
              0,
              0,
              0,
              0LL);
LABEL_67:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            iconLabelInfo1 = this->fields.iconLabelInfo2;
LABEL_69:
            lv = *(_DWORD *)(iconLabelInfo2 + 256);
LABEL_70:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !iconLabelInfo1 )
              goto LABEL_74;
            IconLabelInfo__Set_39947860(iconLabelInfo1, 2, lv, iconLabelInfo2, 0, 0, 0, 0, 0, 0LL);
            goto LABEL_72;
          default:
            return iconLabelInfo2;
        }
        return iconLabelInfo2;
      }
    }
LABEL_74:
    sub_1BC3264(iconLabelInfo2, v6);
  }
  return iconLabelInfo2;
}


void __fastcall MultipleViewListViewItem__SetUserServantEntity(
        MultipleViewListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.userSvtEntity = entity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)entity, (int32_t)method, v3);
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
  if ( (byte_4AFD366 & 1) == 0 )
  {
    sub_1BC3008(&TutorialFlag_TypeInfo, method);
    byte_4AFD366 = 1;
  }
  if ( this->fields.isHeroine )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_39466584(126, 0LL) )
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
  if ( (byte_4AFD365 & 1) == 0 )
  {
    sub_1BC3008(&TutorialFlag_TypeInfo, method);
    byte_4AFD365 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_39466584(126, 0LL);
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