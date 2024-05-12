void __fastcall FavoriteChangeListViewItem___ctor(
        FavoriteChangeListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserSvtList,
        bool isFavorite,
        const MethodInfo *method)
{
  IconLabelInfo_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  IconLabelInfo_o *v18; // x25
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct UserServantEntity_o **p_userSvtEntity; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int64_t Instance; // x0
  __int64 v34; // x1
  struct UserServantEntity_o *v35; // x8
  __int64 v36; // x25
  __int64 v37; // x26
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct UserServantEntity_o *v46; // x8
  ServantLimitMaster_o *v47; // x26
  int32_t svtId; // w27
  int32_t v49; // w8
  struct UserServantEntity_o *v50; // x8
  __int128 v51; // q1
  UserServantCollectionMaster_o *v52; // x23
  struct UserServantEntity_o *v53; // x8
  __int128 v54; // q0
  signed int max_length; // w8
  unsigned int v56; // w9
  UserServantEntity_o *v57; // x8
  struct UserServantEntity_o *v58; // x8
  __int128 v59; // q0
  __int64 v60; // x22
  int64_t v61; // x8
  UserServantEntity_o *v62; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  int64_t v77; // x9
  int64_t rarity; // x10
  struct UserServantEntity_o *v79; // x8
  __int64 v80; // x22
  __int64 v81; // x23
  int64_t v82; // x8
  int v83; // w22
  BalanceConfig_c *v84; // x8
  __int64 v85; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  if ( (byte_438B90A & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B775C4(&IconLabelInfo_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438B90A = 1;
  }
  v11 = (IconLabelInfo_o *)sub_B77694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v11, 0LL);
  this->fields.iconLabelInfo1 = v11;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (IconLabelInfo_o *)sub_B77694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0LL);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  this->fields.iconLabelInfo2 = v18;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  ListViewItem___ctor_24167012((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v35 = this->fields.userSvtEntity;
  if ( !v35 )
    goto LABEL_56;
  v37 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v90.fields.currentCryptoKey = v37;
  *(_QWORD *)&v90.fields.fakeValue = v36;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v90, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_56;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       this->fields.svtId,
                                       (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  p_servantEntity = &this->fields.servantEntity;
  this->fields.servantEntity = Entity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v46 = this->fields.userSvtEntity;
  if ( !v46 )
    goto LABEL_56;
  v47 = (ServantLimitMaster_o *)Instance;
  svtId = this->fields.svtId;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v46->fields.limitCount, 0LL);
  if ( !v47 )
    goto LABEL_56;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v47, svtId, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_56;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_56;
  v49 = *(_DWORD *)(Instance + 24);
  this->fields.isFavorite = isFavorite;
  this->fields.rarity = v49;
  if ( !userSvtEntity )
    goto LABEL_56;
  this->fields.isHeroine = UserServantEntity__IsHeroine(userSvtEntity, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v50 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_56;
  v51 = *(_OWORD *)&v50->fields.userId.fields.fakeValue;
  v52 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&v50->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v89.fields.fakeValue = v51;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v88 = v89;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v88, 0LL);
  if ( !v52 )
    goto LABEL_56;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v52, Instance, this->fields.svtId, 0LL);
  if ( !Instance )
    goto LABEL_56;
  Instance = UserServantCollectionEntity__getFriendShipRankInfo(
               (UserServantCollectionEntity_o *)Instance,
               &this->fields.friendship,
               &this->fields.friendshipMax,
               0LL);
  v53 = this->fields.userSvtEntity;
  this->fields.partyIndex = -1;
  if ( !v53 )
    goto LABEL_56;
  v54 = *(_OWORD *)&v53->fields.id.fields.fakeValue;
  *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)&v53->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v87.fields.fakeValue = v54;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v87, 0LL);
  if ( !partyUserSvtList )
    goto LABEL_56;
  max_length = partyUserSvtList->max_length;
  if ( max_length >= 1 )
  {
    v56 = 0;
    while ( 1 )
    {
      if ( v56 >= max_length )
      {
        v85 = sub_B776C8(Instance);
        sub_B77668(v85, 0LL);
      }
      if ( Instance == partyUserSvtList->m_Items[v56] )
        break;
      if ( (int)++v56 >= max_length )
        goto LABEL_31;
    }
    this->fields.partyIndex = v56;
  }
LABEL_31:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_56;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v57 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v57 )
    goto LABEL_56;
  this->fields.isChoice = UserServantEntity__IsChoice(v57, 0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_56;
  v58 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_56;
  v59 = *(_OWORD *)&v58->fields.id.fields.fakeValue;
  v60 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&v58->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v89.fields.fakeValue = v59;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v86 = v89;
  v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v86, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isPush = v60 == v61;
  this->fields.isPushMode = 0;
  if ( !Instance )
    goto LABEL_56;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v62 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v62 )
    goto LABEL_56;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v62, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_56;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_56;
  v77 = *(int *)(Instance + 48);
  rarity = this->fields.rarity;
  v79 = this->fields.userSvtEntity;
  this->fields.priority = v77;
  this->fields.sortValue1B = v77;
  this->fields.sortValue2 = rarity;
  if ( !v79 )
    goto LABEL_56;
  v81 = *(_QWORD *)&v79->fields.svtId.fields.currentCryptoKey;
  v80 = *(_QWORD *)&v79->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v91.fields.currentCryptoKey = v81;
  *(_QWORD *)&v91.fields.fakeValue = v80;
  v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v91, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v82;
  this->fields.amountSortValue = -1LL;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_56;
  v83 = *(_DWORD *)(Instance + 276);
  v84 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v84 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userSvtEntity;
  }
  this->fields.hpReinforceValue = v84->static_fields->StatusUpAdjustHp * v83;
  if ( !Instance
    || (this->fields.atkReinforceValue = v84->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272),
        UserServantEntity__getAdjustMaxData(
          (UserServantEntity_o *)Instance,
          &this->fields.nowMaxHpReinforceValue,
          &this->fields.nowMaxAtkReinforceValue,
          0LL),
        (Instance = (int64_t)this->fields.iconLabelInfo1) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_56:
    sub_B7769C(Instance, v34);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_438B911 & 1) == 0 )
  {
    sub_B775C4(&TreasureDvcInfo_TypeInfo);
    byte_438B911 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_B77694(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_B77560((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  return 0;
}


bool __fastcall FavoriteChangeListViewItem__IsMatchFilter(
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
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x21
  UserServantEntity_o *userSvtEntity; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v18; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v34; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v36; // w0
  __int64 v37; // x0

  if ( (byte_438B90E & 1) == 0 )
  {
    sub_B775C4(&FilterKindList_TypeInfo);
    sub_B775C4(&ListViewSort_FilterKind___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_438B90E = 1;
  }
  if ( this->fields.isFavorite )
    return 1;
  v6 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v6 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v6->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                        (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_63;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v8 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v8 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v8->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                            (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v10 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v10->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v12 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v12->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_63:
    sub_B7769C(ClassGroupFilterKindList, sort);
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
          goto LABEL_63;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v18 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v18 )
          goto LABEL_63;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v18, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_63;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
      }
    }
    ClassGroupFilterKindList = sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_64;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_64:
      v37 = sub_B776C8(ClassGroupFilterKindList);
      sub_B77668(v37, 0LL);
    }
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v34 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v36 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v34) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v36 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v36 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_64;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields.isSwapChoice == this->fields.isChoice )
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
  ClassGroupFilterKindList = (__int64)v14->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v15, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall FavoriteChangeListViewItem__Modify(
        FavoriteChangeListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UserServantEntity_o **p_userSvtEntity; // x20
  __int64 v11; // x1
  UserServantEntity_o *userSvtEntity; // x0
  UserServantEntity_o *v13; // x8
  struct UserServantEntity_o *v14; // x8
  __int128 v15; // q1
  __int64 v16; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-40h]

  if ( (byte_438B90C & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438B90C = 1;
  }
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity
    || (userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userSvtEntity, 0LL),
        v13 = this->fields.userSvtEntity,
        this->fields.isLock = (unsigned __int8)userSvtEntity & 1,
        !v13)
    || (this->fields.isChoice = UserServantEntity__IsChoice(v13, 0LL),
        *(_WORD *)&this->fields.isSwapLock = 0,
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0LL)) == 0LL)
    || (v14 = *p_userSvtEntity) == 0LL )
  {
    sub_B7769C(userSvtEntity, v11);
  }
  v15 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
  v16 = *(_QWORD *)&userSvtEntity->fields.imageLimitCount.fields.fakeValue;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v15;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v17 = v18;
  this->fields.isPush = v16 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v17, 0LL);
}


void __fastcall FavoriteChangeListViewItem__ModifyChoiceItem(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B7769C(0LL, method);
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
  struct UserServantEntity_o *v7; // x8
  __int128 v8; // q1
  __int64 v9; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  if ( (byte_438B90B & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438B90B = 1;
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
    sub_B7769C(userSvtEntity, isFavorite);
  }
  v8 = *(_OWORD *)&v7->fields.id.fields.fakeValue;
  v9 = *(_QWORD *)&userSvtEntity->fields.imageLimitCount.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&v7->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v10 = v11;
  this->fields.isPush = v9 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v10, 0LL);
}


void __fastcall FavoriteChangeListViewItem__ModifyLockItem(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B7769C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


bool __fastcall FavoriteChangeListViewItem__SetSortValue(
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
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v13; // q1
  struct UserServantEntity_o *v14; // x8
  int64_t hpReinforceValue; // x2
  int32_t adjustHp; // w3
  int32_t v17; // w1
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v20; // w1
  struct UserServantEntity_o *v21; // x8
  struct UserServantEntity_o *v22; // x8
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  IconLabelInfo_o *v25; // x20
  int32_t v26; // w21
  __int64 v27; // x10
  struct ServantEntity_o *v28; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v30; // x8
  int32_t lv; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+10h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+30h] [xbp-40h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-18h] BYREF

  if ( (byte_438B90D & 1) == 0 )
  {
    sub_B775C4(&FavoriteChangeListViewManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438B90D = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  v6 = FavoriteChangeListViewItem__IsMatchFilter(this, sort, method);
  iconLabelInfo2 = 0LL;
  if ( v6 )
  {
    isSwapChoice = this->fields.isSwapChoice;
    isFavorite = this->fields.isFavorite;
    isChoice = this->fields.isChoice;
    this->fields.sortValue0 = 0LL;
    if ( isFavorite )
    {
      v11 = 20LL;
    }
    else
    {
      if ( isSwapChoice == isChoice )
        goto LABEL_11;
      if ( !sort )
        goto LABEL_72;
      if ( !sort->fields.isChoiceSort )
      {
LABEL_11:
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
                  goto LABEL_72;
                v13 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v34.fields.fakeValue = v13;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v33 = v34;
                iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v33, 0LL);
                v14 = this->fields.userSvtEntity;
                this->fields.sortValue1 = iconLabelInfo2;
                if ( !v14 )
                  goto LABEL_72;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v14->fields.createdAt, 0, 0, 0, 0LL);
                goto LABEL_65;
              case 2:
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                this->fields.sortValue1 = this->fields.rarity;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                goto LABEL_41;
              case 3:
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                this->fields.sortValue1 = *(int *)(iconLabelInfo2 + 256);
                goto LABEL_41;
              case 4:
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                UserServantEntity__getTreasureDeviceInfo_21836884(
                  (UserServantEntity_o *)iconLabelInfo2,
                  &tdMaxLv[1],
                  tdMaxLv,
                  0LL);
                LODWORD(friendship) = tdMaxLv[1];
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = tdMaxLv[1];
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                friendshipMax = tdMaxLv[0];
                v20 = 33;
                goto LABEL_44;
              case 5:
                v21 = this->fields.userSvtEntity;
                if ( !v21 )
                  goto LABEL_72;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = v21->fields.hp;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                adjustHp = v21->fields.adjustHp;
                LODWORD(hpReinforceValue) = v21->fields.hp;
                v17 = 3;
                goto LABEL_64;
              case 6:
                v22 = this->fields.userSvtEntity;
                if ( !v22 )
                  goto LABEL_72;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = v22->fields.atk;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                adjustHp = v22->fields.adjustAtk;
                LODWORD(hpReinforceValue) = v22->fields.atk;
                v17 = 5;
                goto LABEL_64;
              case 7:
                servantEntity = this->fields.servantEntity;
                if ( !servantEntity )
                  goto LABEL_72;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = servantEntity->fields.cost;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                IconLabelInfo__Set_28141596(
                  (IconLabelInfo_o *)iconLabelInfo2,
                  7,
                  servantEntity->fields.cost,
                  0,
                  0,
                  0,
                  0,
                  0,
                  0LL);
                goto LABEL_45;
              case 8:
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                this->fields.sortValue1 = -this->fields.priority;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                this->fields.sortValue2 = *(int *)(iconLabelInfo2 + 256);
LABEL_41:
                iconLabelInfo1 = this->fields.iconLabelInfo1;
                goto LABEL_67;
              case 0xA:
                friendship = this->fields.friendship;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = friendship;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                friendshipMax = this->fields.friendshipMax;
                v20 = 32;
LABEL_44:
                IconLabelInfo__Set_28141596(
                  (IconLabelInfo_o *)iconLabelInfo2,
                  v20,
                  friendship,
                  friendshipMax,
                  0,
                  0,
                  0,
                  0,
                  0LL);
LABEL_45:
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                v25 = this->fields.iconLabelInfo2;
                v26 = *(_DWORD *)(iconLabelInfo2 + 256);
                iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
                if ( !v25 )
                  goto LABEL_72;
                IconLabelInfo__Set_28141596(v25, 2, v26, iconLabelInfo2, 0, 0, 0, 0, 0LL);
                iconLabelInfo2 = (int64_t)this->fields.servantEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                if ( ServantEntity__get_IsExpUp((ServantEntity_o *)iconLabelInfo2, 0LL) )
                  goto LABEL_51;
                iconLabelInfo2 = (int64_t)this->fields.servantEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                if ( !ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo2, 0LL) )
                  goto LABEL_70;
LABEL_51:
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
LABEL_70:
                LOBYTE(iconLabelInfo2) = 1;
                break;
              case 0xE:
                iconLabelInfo2 = this->fields.amountSortValue;
                if ( (iconLabelInfo2 & 0x8000000000000000LL) == 0 )
                  goto LABEL_59;
                iconLabelInfo2 = (int64_t)sort->fields.manager;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                v27 = *(&FavoriteChangeListViewManager_TypeInfo->_2.bitflags2 + 1);
                if ( *(unsigned __int8 *)(*(_QWORD *)iconLabelInfo2 + 300LL) < (unsigned int)v27
                  || *(FavoriteChangeListViewManager_c **)(*(_QWORD *)(*(_QWORD *)iconLabelInfo2 + 200LL) + 8 * v27 - 8) != FavoriteChangeListViewManager_TypeInfo )
                {
                  goto LABEL_72;
                }
                iconLabelInfo2 = FavoriteChangeListViewManager__GetAmountSortValue(
                                   (FavoriteChangeListViewManager_o *)iconLabelInfo2,
                                   this->fields.svtId,
                                   0LL);
                this->fields.amountSortValue = iconLabelInfo2;
LABEL_59:
                v28 = this->fields.servantEntity;
                if ( !v28 )
                  goto LABEL_72;
                collectionNo = v28->fields.collectionNo;
                v30 = this->fields.userSvtEntity;
                this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                         + (iconLabelInfo2 << 48)) | collectionNo;
                if ( !v30 )
                  goto LABEL_72;
                iconLabelInfo1 = this->fields.iconLabelInfo1;
                lv = v30->fields.lv;
                iconLabelInfo2 = (int64_t)v30;
                goto LABEL_68;
              case 0xF:
                hpReinforceValue = this->fields.hpReinforceValue;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = hpReinforceValue;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                adjustHp = this->fields.nowMaxHpReinforceValue;
                v17 = 44;
                goto LABEL_64;
              case 0x10:
                hpReinforceValue = this->fields.atkReinforceValue;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = hpReinforceValue;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                adjustHp = this->fields.nowMaxAtkReinforceValue;
                v17 = 45;
LABEL_64:
                IconLabelInfo__Set_28141596(
                  (IconLabelInfo_o *)iconLabelInfo2,
                  v17,
                  hpReinforceValue,
                  adjustHp,
                  0,
                  0,
                  0,
                  0,
                  0LL);
LABEL_65:
                iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                iconLabelInfo1 = this->fields.iconLabelInfo2;
LABEL_67:
                lv = *(_DWORD *)(iconLabelInfo2 + 256);
LABEL_68:
                iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
                if ( !iconLabelInfo1 )
                  goto LABEL_72;
                IconLabelInfo__Set_28141596(iconLabelInfo1, 2, lv, iconLabelInfo2, 0, 0, 0, 0, 0LL);
                goto LABEL_70;
              default:
                return iconLabelInfo2;
            }
            return iconLabelInfo2;
          }
        }
LABEL_72:
        sub_B7769C(iconLabelInfo2, v5);
      }
      v11 = 10LL;
    }
    this->fields.sortValue0 = v11;
    goto LABEL_11;
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
  if ( (byte_438B910 & 1) == 0 )
  {
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438B910 = 1;
  }
  if ( !this->fields.isHeroine )
    return this->fields.isFavorite;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_29515752(126, 0LL) || this->fields.isFavorite;
}


bool __fastcall FavoriteChangeListViewItem__get_IsChoice(FavoriteChangeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall FavoriteChangeListViewItem__get_IsDispChoice(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice ^ this->fields.isChoice;
}


bool __fastcall FavoriteChangeListViewItem__get_IsDispLock(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapLock ^ this->fields.isLock;
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
  if ( (byte_438B90F & 1) == 0 )
  {
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438B90F = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_29515752(126, 0LL);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.userSvtEntity = entity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FavoriteChangeListViewItem__set_IsPushMode(
        FavoriteChangeListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isPushMode = value;
}