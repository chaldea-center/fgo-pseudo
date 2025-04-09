// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewItem___ctor(
        PhotoCampaignListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserSvtList,
        bool isFavorite,
        bool cannotSelectSvt,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  IconLabelInfo_o *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  IconLabelInfo_o *v27; // x26
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct UserServantEntity_o **p_userSvtEntity; // x21
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int64_t Master_object; // x0
  __int64 v35; // x1
  struct UserServantEntity_o *v36; // x8
  __int64 v37; // x26
  __int64 v38; // x27
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct UserServantEntity_o *v43; // x8
  ServantLimitMaster_o *v44; // x26
  int32_t svtId; // w27
  int32_t v46; // w8
  struct UserServantEntity_o *v47; // x8
  __int128 v48; // q1
  UserServantCollectionMaster_o *v49; // x23
  struct UserServantEntity_o *v50; // x8
  __int128 v51; // q0
  signed int max_length; // w8
  int32_t v53; // w9
  UserServantEntity_o *v54; // x8
  struct UserServantEntity_o *v55; // x8
  __int128 v56; // q0
  __int64 v57; // x22
  int64_t v58; // x9
  int64_t rarity; // x10
  struct UserServantEntity_o *v60; // x8
  __int64 v61; // x22
  __int64 v62; // x23
  int64_t v63; // x8
  int v64; // w22
  BalanceConfig_c *v65; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  UserServantEntity_o *v67; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  struct System_Int32_array **p_tdCategoryIdList; // x19
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  if ( (byte_49B666C & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantClassMaster___, v13);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v14);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantLimitMaster___, v15);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantMaster___, v16);
    sub_1B4CF90(&DataManager_TypeInfo, v17);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18);
    sub_1B4CF90(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v19);
    sub_1B4CF90(&IconLabelInfo_TypeInfo, v20);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    byte_49B666C = 1;
  }
  v24 = (IconLabelInfo_o *)sub_1B4D1DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0LL);
  this->fields.iconLabelInfo1 = v24;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v24, v25, v26);
  v27 = (IconLabelInfo_o *)sub_1B4D1DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v27, 0LL);
  this->fields.iconLabelInfo2 = v27;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v27, v29, v30);
  ListViewItem___ctor_41325876((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v32, v33);
  v36 = this->fields.userSvtEntity;
  if ( !v36 )
    goto LABEL_51;
  v38 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
  v37 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v79.fields.currentCryptoKey = v38;
  *(_QWORD *)&v79.fields.fakeValue = v37;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v79, 0LL);
  this->fields._IsCannotSelectSvt_k__BackingField = cannotSelectSvt;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_51;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.svtId,
             (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v41, v42);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v43 = this->fields.userSvtEntity;
  if ( !v43 )
    goto LABEL_51;
  v44 = (ServantLimitMaster_o *)Master_object;
  svtId = this->fields.svtId;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v43->fields.limitCount, 0LL);
  if ( !v44 )
    goto LABEL_51;
  Master_object = (int64_t)ServantLimitMaster__GetEntity(v44, svtId, Master_object, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_51;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Master_object )
    goto LABEL_51;
  v46 = *(_DWORD *)(Master_object + 24);
  this->fields.isFavorite = isFavorite;
  this->fields.rarity = v46;
  if ( !userSvtEntity )
    goto LABEL_51;
  this->fields.isHeroine = UserServantEntity__IsHeroine(userSvtEntity, 0LL);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_51;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v47 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_51;
  v48 = *(_OWORD *)&v47->fields.userId.fields.fakeValue;
  v49 = (UserServantCollectionMaster_o *)Master_object;
  *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&v47->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v78.fields.fakeValue = v48;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v77 = v78;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v77, 0LL);
  if ( !v49 )
    goto LABEL_51;
  Master_object = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v49, Master_object, this->fields.svtId, 0LL);
  if ( !Master_object )
    goto LABEL_51;
  Master_object = UserServantCollectionEntity__getFriendShipRankInfo(
                    (UserServantCollectionEntity_o *)Master_object,
                    &this->fields.friendship,
                    &this->fields.friendshipMax,
                    0LL);
  v50 = this->fields.userSvtEntity;
  this->fields.partyIndex = -1;
  if ( !v50 )
    goto LABEL_51;
  v51 = *(_OWORD *)&v50->fields.id.fields.fakeValue;
  *(_OWORD *)&v76.fields.currentCryptoKey = *(_OWORD *)&v50->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v76.fields.fakeValue = v51;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v76, 0LL);
  if ( !partyUserSvtList )
    goto LABEL_51;
  max_length = partyUserSvtList->max_length;
  if ( max_length >= 1 )
  {
    v53 = 0;
    while ( 1 )
    {
      if ( max_length == v53 )
        sub_1B4D1F4(Master_object, v35);
      if ( Master_object == partyUserSvtList->m_Items[v53] )
        break;
      if ( max_length == ++v53 )
        goto LABEL_29;
    }
    this->fields.partyIndex = v53;
  }
LABEL_29:
  Master_object = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_51;
  Master_object = UserServantEntity__IsLock((UserServantEntity_o *)Master_object, 0LL);
  v54 = this->fields.userSvtEntity;
  this->fields.isLock = Master_object & 1;
  if ( !v54 )
    goto LABEL_51;
  this->fields.isChoice = UserServantEntity__IsChoice(v54, 0LL);
  Master_object = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Master_object )
    goto LABEL_51;
  v55 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_51;
  v56 = *(_OWORD *)&v55->fields.id.fields.fakeValue;
  v57 = *(_QWORD *)(Master_object + 120);
  *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&v55->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v78.fields.fakeValue = v56;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v75 = v78;
  *(_WORD *)&this->fields.isPush = v57 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(
                                            &v75,
                                            0LL);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_51;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_51;
  Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             this->fields.classId,
                             (const MethodInfo_319D99C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_51;
  v58 = *(int *)(Master_object + 52);
  rarity = this->fields.rarity;
  v60 = this->fields.userSvtEntity;
  this->fields.priority = v58;
  this->fields.sortValue1B = v58;
  this->fields.sortValue2 = rarity;
  if ( !v60 )
    goto LABEL_51;
  v62 = *(_QWORD *)&v60->fields.svtId.fields.currentCryptoKey;
  v61 = *(_QWORD *)&v60->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v80.fields.currentCryptoKey = v62;
  *(_QWORD *)&v80.fields.fakeValue = v61;
  v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v80, 0LL);
  Master_object = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v63;
  this->fields.amountSortValue = -1LL;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Master_object )
    goto LABEL_51;
  v64 = *(_DWORD *)(Master_object + 276);
  v65 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v65 = BalanceConfig_TypeInfo;
    Master_object = (int64_t)*p_userSvtEntity;
  }
  static_fields = v65->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v64;
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
  v67 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Master_object;
  if ( !v67 )
    goto LABEL_51;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v67, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v69, v70);
  Master_object = (int64_t)this->fields.userSvtEntity;
  if ( !Master_object
    || (TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)Master_object,
                                         0,
                                         0LL),
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList,
        p_tdCategoryIdList = &this->fields.tdCategoryIdList,
        sub_1B4CF34((CGThumbnailListItem_o *)p_tdCategoryIdList, (int32_t)TreasureDeviceCategoryIdList, v73, v74),
        (Master_object = (int64_t)*(p_tdCategoryIdList - 6)) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0LL), (Master_object = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_51:
    sub_1B4D1EC(Master_object, v35);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0LL);
}


void __fastcall PhotoCampaignListViewItem__Finalize(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall PhotoCampaignListViewItem__IsMatchFilter(
        PhotoCampaignListViewItem_o *this,
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
  __int64 v16; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v18; // x0
  ListViewSort_FilterKind_array *v19; // x21
  UserServantEntity_o *userSvtEntity; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v22; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v30; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v32; // w0

  if ( (byte_49B6671 & 1) == 0 )
  {
    sub_1B4CF90(&FilterKindList_TypeInfo, sort);
    sub_1B4CF90(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_49B6671 = 1;
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
                                        (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        v22 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v22 )
          goto LABEL_62;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v22, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v24, v25);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_62;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1B4CF34(
          (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v27,
          v28);
      }
    }
    ClassGroupFilterKindList = sub_1B4D038(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    v16 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_63;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1B4D038(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    v16 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_63:
      sub_1B4D1F4(ClassGroupFilterKindList, v16);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v30 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v32 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v30) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v32 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v32 )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0LL)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_1B4D038(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
LABEL_62:
    sub_1B4D1EC(ClassGroupFilterKindList, sort);
  v16 = ClassGroupFilterKindList;
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
  v18 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v18 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v18->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v19, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall PhotoCampaignListViewItem__Modify(
        PhotoCampaignListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct UserServantEntity_o **p_userSvtEntity; // x20
  __int64 v7; // x1
  UserServantEntity_o *userSvtEntity; // x0
  UserServantEntity_o *v9; // x8
  struct UserServantEntity_o *v10; // x8
  __int128 v11; // q1
  __int64 v12; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-40h]

  if ( (byte_49B666F & 1) == 0 )
  {
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userServantEntity);
    byte_49B666F = 1;
  }
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userServantEntity, (int32_t)method, v3);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity
    || (userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userSvtEntity, 0LL),
        v9 = this->fields.userSvtEntity,
        this->fields.isLock = (unsigned __int8)userSvtEntity & 1,
        !v9)
    || (this->fields.isChoice = UserServantEntity__IsChoice(v9, 0LL),
        *(_WORD *)&this->fields.isSwapLock = 0,
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0LL)) == 0LL)
    || (v10 = *p_userSvtEntity) == 0LL )
  {
    sub_1B4D1EC(userSvtEntity, v7);
  }
  v11 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
  v12 = *(_QWORD *)&userSvtEntity->fields.imageLimitCount.fields.fakeValue;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  this->fields.isPush = v12 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v13, 0LL);
}


void __fastcall PhotoCampaignListViewItem__ModifyChoiceItem(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B4D1EC(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewItem__ModifyItem(
        PhotoCampaignListViewItem_o *this,
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

  if ( (byte_49B666D & 1) == 0 )
  {
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isFavorite);
    byte_49B666D = 1;
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
    sub_1B4D1EC(userSvtEntity, isFavorite);
  }
  v8 = *(_OWORD *)&v7->fields.id.fields.fakeValue;
  v9 = *(_QWORD *)&userSvtEntity->fields.imageLimitCount.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&v7->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v10 = v11;
  this->fields.isPush = v9 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewItem__ModifyItem_31824384(
        PhotoCampaignListViewItem_o *this,
        int32_t selectIndex,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  UserServantEntity_o *v6; // x8
  struct UserServantEntity_o *v7; // x8
  __int128 v8; // q1
  __int64 v9; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  if ( (byte_49B666E & 1) == 0 )
  {
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&selectIndex);
    byte_49B666E = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.selectNum = selectIndex;
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
    sub_1B4D1EC(userSvtEntity, *(_QWORD *)&selectIndex);
  }
  v8 = *(_OWORD *)&v7->fields.id.fields.fakeValue;
  v9 = *(_QWORD *)&userSvtEntity->fields.imageLimitCount.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&v7->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v10 = v11;
  this->fields.isPush = v9 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v10, 0LL);
}


void __fastcall PhotoCampaignListViewItem__ModifyLockItem(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B4D1EC(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


bool __fastcall PhotoCampaignListViewItem__SetSortValue(
        PhotoCampaignListViewItem_o *this,
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
  int32_t friendshipMax; // w3
  int32_t v23; // w1
  struct UserServantEntity_o *v24; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v27; // w1
  struct UserServantEntity_o *v28; // x8
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *v30; // x20
  int32_t v31; // w21
  __int64 methodPtr_low; // x10
  struct ServantEntity_o *v33; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v35; // x8
  int32_t lv; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-28h] BYREF

  if ( (byte_49B6670 & 1) == 0 )
  {
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort);
    sub_1B4CF90(&PhotoCampaignListViewManager_TypeInfo, v5);
    byte_49B6670 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  IsMatchFilter = PhotoCampaignListViewItem__IsMatchFilter(this, sort, method);
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
            v16 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v39.fields.fakeValue = v16;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v38 = v39;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v38, 0LL);
            v17 = this->fields.userSvtEntity;
            this->fields.sortValue1 = iconLabelInfo2;
            if ( !v17 )
              goto LABEL_73;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v17->fields.createdAt, 0, 0, 0, 0LL);
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
            v19 = *(int *)(iconLabelInfo2 + 256);
            v20 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v19;
            goto LABEL_40;
          case 4:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            UserServantEntity__getTreasureDeviceInfo_40813636(
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
            v23 = 33;
            goto LABEL_44;
          case 5:
            v24 = this->fields.userSvtEntity;
            if ( !v24 )
              goto LABEL_73;
            hp = v24->fields.hp;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            adjustHp = v24->fields.adjustHp;
            v27 = 3;
            goto LABEL_65;
          case 6:
            v28 = this->fields.userSvtEntity;
            if ( !v28 )
              goto LABEL_73;
            hp = v28->fields.atk;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            adjustHp = v28->fields.adjustAtk;
            v27 = 5;
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
            v23 = 7;
            friendshipMax = 0;
            goto LABEL_44;
          case 8:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = -this->fields.priority;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            v19 = *(int *)(iconLabelInfo2 + 256);
            v20 = this->fields.iconLabelInfo1;
            this->fields.sortValue2 = v19;
LABEL_40:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v20 )
              goto LABEL_73;
            IconLabelInfo__Set_38677548(v20, 2, v19, iconLabelInfo2, 0, 0, 0, 0, 0LL);
            goto LABEL_71;
          case 0xA:
            cost = this->fields.friendship;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = cost;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            friendshipMax = this->fields.friendshipMax;
            v23 = 32;
LABEL_44:
            IconLabelInfo__Set_38677548((IconLabelInfo_o *)iconLabelInfo2, v23, cost, friendshipMax, 0, 0, 0, 0, 0LL);
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            v30 = this->fields.iconLabelInfo2;
            v31 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v30 )
              goto LABEL_73;
            IconLabelInfo__Set_38677548(v30, 2, v31, iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
            methodPtr_low = LOBYTE(PhotoCampaignListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)iconLabelInfo2 + 304LL) < (unsigned int)methodPtr_low
              || *(PhotoCampaignListViewManager_c **)(*(_QWORD *)(*(_QWORD *)iconLabelInfo2 + 200LL)
                                                    + 8 * methodPtr_low
                                                    - 8) != PhotoCampaignListViewManager_TypeInfo )
            {
              goto LABEL_73;
            }
            iconLabelInfo2 = PhotoCampaignListViewManager__GetAmountSortValue(
                               (PhotoCampaignListViewManager_o *)iconLabelInfo2,
                               this->fields.svtId,
                               v14);
            this->fields.amountSortValue = iconLabelInfo2;
LABEL_58:
            v33 = this->fields.servantEntity;
            if ( !v33 )
              goto LABEL_73;
            collectionNo = v33->fields.collectionNo;
            v35 = this->fields.userSvtEntity;
            this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                     + (iconLabelInfo2 << 48)) | collectionNo;
            if ( !v35 )
              goto LABEL_73;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            lv = v35->fields.lv;
            iconLabelInfo2 = (int64_t)v35;
            goto LABEL_69;
          case 0xF:
            hp = this->fields.hpReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            adjustHp = this->fields.nowMaxHpReinforceValue;
            v27 = 44;
            goto LABEL_65;
          case 0x10:
            hp = this->fields.atkReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            adjustHp = this->fields.nowMaxAtkReinforceValue;
            v27 = 45;
LABEL_65:
            IconLabelInfo__Set_38677548((IconLabelInfo_o *)iconLabelInfo2, v27, hp, adjustHp, 0, 0, 0, 0, 0LL);
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
            IconLabelInfo__Set_38677548(iconLabelInfo1, 2, lv, iconLabelInfo2, 0, 0, 0, 0, 0LL);
            goto LABEL_71;
          default:
            return iconLabelInfo2;
        }
        return iconLabelInfo2;
      }
    }
LABEL_73:
    sub_1B4D1EC(iconLabelInfo2, v6);
  }
  return iconLabelInfo2;
}


void __fastcall PhotoCampaignListViewItem__SetUserServantEntity(
        PhotoCampaignListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.userSvtEntity = entity;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)entity, (int32_t)method, v3);
}


bool __fastcall PhotoCampaignListViewItem__SwapChoice(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall PhotoCampaignListViewItem__SwapLock(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


IconLabelInfo_o *__fastcall PhotoCampaignListViewItem__get_IconInfo1(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall PhotoCampaignListViewItem__get_IconInfo2(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall PhotoCampaignListViewItem__get_IsBase(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBase;
}


bool __fastcall PhotoCampaignListViewItem__get_IsCanNotSelect(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_49B6673 & 1) == 0 )
  {
    sub_1B4CF90(&TutorialFlag_TypeInfo, method);
    byte_49B6673 = 1;
  }
  if ( !this->fields.isHeroine )
    return this->fields._IsCannotSelectSvt_k__BackingField;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_38224448(126, 0LL) || this->fields._IsCannotSelectSvt_k__BackingField;
}


bool __fastcall PhotoCampaignListViewItem__get_IsCannotSelectSvt(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsCannotSelectSvt_k__BackingField;
}


bool __fastcall PhotoCampaignListViewItem__get_IsChoice(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall PhotoCampaignListViewItem__get_IsDispChoice(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool __fastcall PhotoCampaignListViewItem__get_IsDispLock(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool __fastcall PhotoCampaignListViewItem__get_IsEventJoin(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
  return (char)userSvtEntity;
}


bool __fastcall PhotoCampaignListViewItem__get_IsFavorite(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFavorite;
}


bool __fastcall PhotoCampaignListViewItem__get_IsHerioneReave(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_49B6672 & 1) == 0 )
  {
    sub_1B4CF90(&TutorialFlag_TypeInfo, method);
    byte_49B6672 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_38224448(126, 0LL);
}


bool __fastcall PhotoCampaignListViewItem__get_IsLock(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall PhotoCampaignListViewItem__get_IsParty(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex >= 0;
}


bool __fastcall PhotoCampaignListViewItem__get_IsPush(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool __fastcall PhotoCampaignListViewItem__get_IsPushMode(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPushMode;
}


bool __fastcall PhotoCampaignListViewItem__get_IsSwapChoice(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall PhotoCampaignListViewItem__get_IsSwapLock(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


ServantEntity_o *__fastcall PhotoCampaignListViewItem__get_Servant(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t __fastcall PhotoCampaignListViewItem__get_SvtId(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


UserServantEntity_o *__fastcall PhotoCampaignListViewItem__get_UserServant(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


void __fastcall PhotoCampaignListViewItem__set_IsCannotSelectSvt(
        PhotoCampaignListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsCannotSelectSvt_k__BackingField = value;
}


void __fastcall PhotoCampaignListViewItem__set_IsPushMode(
        PhotoCampaignListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isPushMode = value;
}