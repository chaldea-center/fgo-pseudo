// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewItem___ctor(
        PhotoCampaignListViewItem_o *this,
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
  IconLabelInfo_o *v23; // x25
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  struct UserServantEntity_o **p_userSvtEntity; // x21
  __int64 Master_object; // x0
  __int64 v27; // x1
  struct UserServantEntity_o *v28; // x8
  __int64 v29; // x25
  __int64 v30; // x26
  struct ServantEntity_o **p_servantEntity; // x25
  struct UserServantEntity_o *v32; // x8
  ServantLimitMaster_o *v33; // x26
  int32_t svtId; // w27
  int32_t v35; // w8
  struct UserServantEntity_o *v36; // x8
  __int128 v37; // q1
  UserServantCollectionMaster_o *v38; // x23
  struct UserServantEntity_o *v39; // x8
  __int128 v40; // q0
  signed int max_length; // w8
  int32_t v42; // w9
  UserServantEntity_o *v43; // x8
  struct UserServantEntity_o *v44; // x8
  __int128 v45; // q0
  __int64 v46; // x22
  int64_t v47; // x9
  int64_t rarity; // x10
  struct UserServantEntity_o *v49; // x8
  __int64 v50; // x22
  __int64 v51; // x23
  int64_t v52; // x8
  int v53; // w22
  BalanceConfig_c *v54; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  UserServantEntity_o *v56; // x8
  struct System_Int32_array **p_tdCategoryIdList; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_4A299BB & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantClassMaster___, v11);
    sub_1B761C0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v12);
    sub_1B761C0(&Method_DataManager_GetMaster_ServantLimitMaster___, v13);
    sub_1B761C0(&Method_DataManager_GetMaster_ServantMaster___, v14);
    sub_1B761C0(&DataManager_TypeInfo, v15);
    sub_1B761C0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_1B761C0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v17);
    sub_1B761C0(&IconLabelInfo_TypeInfo, v18);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4A299BB = 1;
  }
  v22 = (IconLabelInfo_o *)sub_1B7640C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v22, 0LL);
  this->fields.iconLabelInfo1 = v22;
  sub_1B76164(&this->fields.iconLabelInfo1);
  v23 = (IconLabelInfo_o *)sub_1B7640C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v23, 0LL);
  this->fields.iconLabelInfo2 = v23;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B76164(&this->fields.iconLabelInfo2);
  ListViewItem___ctor_40521064((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  Master_object = sub_1B76164(&this->fields.userSvtEntity);
  v28 = this->fields.userSvtEntity;
  if ( !v28 )
    goto LABEL_51;
  v30 = *(_QWORD *)&v28->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&v28->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v62.fields.currentCryptoKey = v30;
  *(_QWORD *)&v62.fields.fakeValue = v29;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v62, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_51;
  this->fields.servantEntity = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                           this->fields.svtId,
                                                           (const MethodInfo_30FF780 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  p_servantEntity = &this->fields.servantEntity;
  sub_1B76164(&this->fields.servantEntity);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v32 = this->fields.userSvtEntity;
  if ( !v32 )
    goto LABEL_51;
  v33 = (ServantLimitMaster_o *)Master_object;
  svtId = this->fields.svtId;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v32->fields.limitCount, 0LL);
  if ( !v33 )
    goto LABEL_51;
  Master_object = (__int64)ServantLimitMaster__GetEntity(v33, svtId, Master_object, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_51;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Master_object )
    goto LABEL_51;
  v35 = *(_DWORD *)(Master_object + 24);
  this->fields.isFavorite = isFavorite;
  this->fields.rarity = v35;
  if ( !userSvtEntity )
    goto LABEL_51;
  this->fields.isHeroine = UserServantEntity__IsHeroine(userSvtEntity, 0LL);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_51;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v36 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_51;
  v37 = *(_OWORD *)&v36->fields.userId.fields.fakeValue;
  v38 = (UserServantCollectionMaster_o *)Master_object;
  *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&v36->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v61.fields.fakeValue = v37;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v60 = v61;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v60, 0LL);
  if ( !v38 )
    goto LABEL_51;
  Master_object = (__int64)UserServantCollectionMaster__GetEntityDefinitely(v38, Master_object, this->fields.svtId, 0LL);
  if ( !Master_object )
    goto LABEL_51;
  Master_object = UserServantCollectionEntity__getFriendShipRankInfo(
                    (UserServantCollectionEntity_o *)Master_object,
                    &this->fields.friendship,
                    &this->fields.friendshipMax,
                    0LL);
  v39 = this->fields.userSvtEntity;
  this->fields.partyIndex = -1;
  if ( !v39 )
    goto LABEL_51;
  v40 = *(_OWORD *)&v39->fields.id.fields.fakeValue;
  *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&v39->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v59.fields.fakeValue = v40;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v59, 0LL);
  if ( !partyUserSvtList )
    goto LABEL_51;
  max_length = partyUserSvtList->max_length;
  if ( max_length >= 1 )
  {
    v42 = 0;
    while ( 1 )
    {
      if ( max_length == v42 )
        sub_1B76424(Master_object, v27);
      if ( Master_object == partyUserSvtList->m_Items[v42] )
        break;
      if ( max_length == ++v42 )
        goto LABEL_29;
    }
    this->fields.partyIndex = v42;
  }
LABEL_29:
  Master_object = (__int64)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_51;
  Master_object = UserServantEntity__IsLock((UserServantEntity_o *)Master_object, 0LL);
  v43 = this->fields.userSvtEntity;
  this->fields.isLock = Master_object & 1;
  if ( !v43 )
    goto LABEL_51;
  this->fields.isChoice = UserServantEntity__IsChoice(v43, 0LL);
  Master_object = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !Master_object )
    goto LABEL_51;
  v44 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_51;
  v45 = *(_OWORD *)&v44->fields.id.fields.fakeValue;
  v46 = *(_QWORD *)(Master_object + 120);
  *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&v44->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v61.fields.fakeValue = v45;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v58 = v61;
  *(_WORD *)&this->fields.isPush = v46 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(
                                            &v58,
                                            0LL);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_51;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_51;
  Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             this->fields.classId,
                             (const MethodInfo_30FF780 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_51;
  v47 = *(int *)(Master_object + 48);
  rarity = this->fields.rarity;
  v49 = this->fields.userSvtEntity;
  this->fields.priority = v47;
  this->fields.sortValue1B = v47;
  this->fields.sortValue2 = rarity;
  if ( !v49 )
    goto LABEL_51;
  v51 = *(_QWORD *)&v49->fields.svtId.fields.currentCryptoKey;
  v50 = *(_QWORD *)&v49->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v63.fields.currentCryptoKey = v51;
  *(_QWORD *)&v63.fields.fakeValue = v50;
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v63, 0LL);
  Master_object = (__int64)this->fields.userSvtEntity;
  this->fields.sortValue2B = v52;
  this->fields.amountSortValue = -1LL;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Master_object )
    goto LABEL_51;
  v53 = *(_DWORD *)(Master_object + 276);
  v54 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v54 = BalanceConfig_TypeInfo;
    Master_object = (__int64)*p_userSvtEntity;
  }
  static_fields = v54->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v53;
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
  v56 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Master_object;
  if ( !v56 )
    goto LABEL_51;
  this->fields.skillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v56, -1, 0LL);
  sub_1B76164(&this->fields.skillCategoryIdList);
  Master_object = (__int64)this->fields.userSvtEntity;
  if ( !Master_object
    || (this->fields.tdCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                          (UserServantEntity_o *)Master_object,
                                          0,
                                          0LL),
        p_tdCategoryIdList = &this->fields.tdCategoryIdList,
        sub_1B76164(p_tdCategoryIdList),
        (Master_object = (__int64)*(p_tdCategoryIdList - 6)) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0LL), (Master_object = (__int64)*p_iconLabelInfo2) == 0) )
  {
LABEL_51:
    sub_1B7641C(Master_object, v27);
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
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v24; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v26; // w0

  if ( (byte_4A299C0 & 1) == 0 )
  {
    sub_1B761C0(&FilterKindList_TypeInfo, sort);
    sub_1B761C0(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_4A299C0 = 1;
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
    goto LABEL_60;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_34BE894 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_60;
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
      goto LABEL_60;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_34BE894 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    goto LABEL_60;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34BE894 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
LABEL_60:
    sub_1B7641C(ClassGroupFilterKindList, sort);
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34BE894 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
          goto LABEL_60;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v22 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v22 )
          goto LABEL_60;
        this->fields.skillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v22, -1, 0LL);
        sub_1B76164(&this->fields.skillCategoryIdList);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_60;
        this->fields.tdCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                          (UserServantEntity_o *)ClassGroupFilterKindList,
                                          0,
                                          0LL);
        sub_1B76164(&this->fields.tdCategoryIdList);
      }
    }
    ClassGroupFilterKindList = sub_1B76268(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_60;
    v16 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_61;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1B76268(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_60;
    v16 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_61:
      sub_1B76424(ClassGroupFilterKindList, v16);
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
  ClassGroupFilterKindList = sub_1B76268(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_60;
  v16 = ClassGroupFilterKindList;
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
  v18 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v18 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v18->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_60;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34BE894 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v19, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall PhotoCampaignListViewItem__Modify(
        PhotoCampaignListViewItem_o *this,
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

  if ( (byte_4A299BE & 1) == 0 )
  {
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userServantEntity);
    byte_4A299BE = 1;
  }
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_1B76164(&this->fields.userSvtEntity);
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
    sub_1B7641C(userSvtEntity, v6);
  }
  v10 = *(_OWORD *)&v9->fields.id.fields.fakeValue;
  v11 = *(_QWORD *)&userSvtEntity->fields.imageLimitCount.fields.fakeValue;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&v9->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  this->fields.isPush = v11 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v12, 0LL);
}


void __fastcall PhotoCampaignListViewItem__ModifyChoiceItem(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B7641C(0LL, method);
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

  if ( (byte_4A299BC & 1) == 0 )
  {
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isFavorite);
    byte_4A299BC = 1;
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
    sub_1B7641C(userSvtEntity, isFavorite);
  }
  v8 = *(_OWORD *)&v7->fields.id.fields.fakeValue;
  v9 = *(_QWORD *)&userSvtEntity->fields.imageLimitCount.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&v7->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v10 = v11;
  this->fields.isPush = v9 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewItem__ModifyItem_31396184(
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

  if ( (byte_4A299BD & 1) == 0 )
  {
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&selectIndex);
    byte_4A299BD = 1;
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
    sub_1B7641C(userSvtEntity, *(_QWORD *)&selectIndex);
  }
  v8 = *(_OWORD *)&v7->fields.id.fields.fakeValue;
  v9 = *(_QWORD *)&userSvtEntity->fields.imageLimitCount.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&v7->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v10 = v11;
  this->fields.isPush = v9 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v10, 0LL);
}


void __fastcall PhotoCampaignListViewItem__ModifyLockItem(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B7641C(0LL, method);
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

  if ( (byte_4A299BF & 1) == 0 )
  {
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort);
    sub_1B761C0(&PhotoCampaignListViewManager_TypeInfo, v5);
    byte_4A299BF = 1;
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
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v38, 0LL);
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
            UserServantEntity__getTreasureDeviceInfo_40027404(
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
            IconLabelInfo__Set_37960168(v20, 2, v19, iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
            IconLabelInfo__Set_37960168((IconLabelInfo_o *)iconLabelInfo2, v23, cost, friendshipMax, 0, 0, 0, 0, 0LL);
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_73;
            v30 = this->fields.iconLabelInfo2;
            v31 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v30 )
              goto LABEL_73;
            IconLabelInfo__Set_37960168(v30, 2, v31, iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
            IconLabelInfo__Set_37960168((IconLabelInfo_o *)iconLabelInfo2, v27, hp, adjustHp, 0, 0, 0, 0, 0LL);
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
            IconLabelInfo__Set_37960168(iconLabelInfo1, 2, lv, iconLabelInfo2, 0, 0, 0, 0, 0LL);
            goto LABEL_71;
          default:
            return iconLabelInfo2;
        }
        return iconLabelInfo2;
      }
    }
LABEL_73:
    sub_1B7641C(iconLabelInfo2, v6);
  }
  return iconLabelInfo2;
}


void __fastcall PhotoCampaignListViewItem__SetUserServantEntity(
        PhotoCampaignListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  this->fields.userSvtEntity = entity;
  sub_1B76164(&this->fields.userSvtEntity);
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
  if ( (byte_4A299C2 & 1) == 0 )
  {
    sub_1B761C0(&TutorialFlag_TypeInfo, method);
    byte_4A299C2 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_37510088(126, 0LL);
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
  if ( (byte_4A299C1 & 1) == 0 )
  {
    sub_1B761C0(&TutorialFlag_TypeInfo, method);
    byte_4A299C1 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_37510088(126, 0LL);
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


void __fastcall PhotoCampaignListViewItem__set_IsPushMode(
        PhotoCampaignListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isPushMode = value;
}