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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  IconLabelInfo_o *v28; // x25
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct UserServantEntity_o **p_userSvtEntity; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  int64_t Instance; // x0
  __int64 v44; // x1
  struct UserServantEntity_o *v45; // x8
  __int64 v46; // x25
  __int64 v47; // x26
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct UserServantEntity_o *v56; // x8
  ServantLimitMaster_o *v57; // x26
  int32_t svtId; // w27
  int32_t v59; // w8
  struct UserServantEntity_o *v60; // x8
  __int128 v61; // q1
  UserServantCollectionMaster_o *v62; // x23
  struct UserServantEntity_o *v63; // x8
  __int128 v64; // q0
  signed int max_length; // w8
  unsigned int v66; // w9
  UserServantEntity_o *v67; // x8
  struct UserServantEntity_o *v68; // x8
  __int128 v69; // q0
  __int64 v70; // x22
  int64_t v71; // x8
  UserServantEntity_o *v72; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  int64_t v87; // x9
  int64_t rarity; // x10
  struct UserServantEntity_o *v89; // x8
  __int64 v90; // x22
  __int64 v91; // x23
  int64_t v92; // x8
  int v93; // w22
  BalanceConfig_c *v94; // x8
  __int64 v95; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16

  if ( (byte_4188600 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v14);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v16);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v17);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_4188600 = 1;
  }
  v21 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0LL);
  this->fields.iconLabelInfo1 = v21;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v28, 0LL);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  this->fields.iconLabelInfo2 = v28;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v28,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v45 = this->fields.userSvtEntity;
  if ( !v45 )
    goto LABEL_56;
  v47 = *(_QWORD *)&v45->fields.svtId.fields.currentCryptoKey;
  v46 = *(_QWORD *)&v45->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v100.fields.currentCryptoKey = v47;
  *(_QWORD *)&v100.fields.fakeValue = v46;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v100, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_56;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       this->fields.svtId,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  p_servantEntity = &this->fields.servantEntity;
  this->fields.servantEntity = Entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v56 = this->fields.userSvtEntity;
  if ( !v56 )
    goto LABEL_56;
  v57 = (ServantLimitMaster_o *)Instance;
  svtId = this->fields.svtId;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v56->fields.limitCount, 0LL);
  if ( !v57 )
    goto LABEL_56;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v57, svtId, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_56;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_56;
  v59 = *(_DWORD *)(Instance + 24);
  this->fields.isFavorite = isFavorite;
  this->fields.rarity = v59;
  if ( !userSvtEntity )
    goto LABEL_56;
  this->fields.isHeroine = UserServantEntity__IsHeroine(userSvtEntity, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v60 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_56;
  v61 = *(_OWORD *)&v60->fields.userId.fields.fakeValue;
  v62 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v99.fields.currentCryptoKey = *(_OWORD *)&v60->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v99.fields.fakeValue = v61;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v98 = v99;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v98, 0LL);
  if ( !v62 )
    goto LABEL_56;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v62, Instance, this->fields.svtId, 0LL);
  if ( !Instance )
    goto LABEL_56;
  Instance = UserServantCollectionEntity__getFriendShipRankInfo(
               (UserServantCollectionEntity_o *)Instance,
               &this->fields.friendship,
               &this->fields.friendshipMax,
               0LL);
  v63 = this->fields.userSvtEntity;
  this->fields.partyIndex = -1;
  if ( !v63 )
    goto LABEL_56;
  v64 = *(_OWORD *)&v63->fields.id.fields.fakeValue;
  *(_OWORD *)&v97.fields.currentCryptoKey = *(_OWORD *)&v63->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v97.fields.fakeValue = v64;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v97, 0LL);
  if ( !partyUserSvtList )
    goto LABEL_56;
  max_length = partyUserSvtList->max_length;
  if ( max_length >= 1 )
  {
    v66 = 0;
    while ( 1 )
    {
      if ( v66 >= max_length )
      {
        v95 = sub_B2C460(Instance);
        sub_B2C400(v95, 0LL);
      }
      if ( Instance == partyUserSvtList->m_Items[v66] )
        break;
      if ( (int)++v66 >= max_length )
        goto LABEL_31;
    }
    this->fields.partyIndex = v66;
  }
LABEL_31:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_56;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v67 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v67 )
    goto LABEL_56;
  this->fields.isChoice = UserServantEntity__IsChoice(v67, 0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_56;
  v68 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_56;
  v69 = *(_OWORD *)&v68->fields.id.fields.fakeValue;
  v70 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v99.fields.currentCryptoKey = *(_OWORD *)&v68->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v99.fields.fakeValue = v69;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v96 = v99;
  v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v96, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isPush = v70 == v71;
  this->fields.isPushMode = 0;
  if ( !Instance )
    goto LABEL_56;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v72 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v72 )
    goto LABEL_56;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v72, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_56;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_56;
  v87 = *(int *)(Instance + 48);
  rarity = this->fields.rarity;
  v89 = this->fields.userSvtEntity;
  this->fields.priority = v87;
  this->fields.sortValue1B = v87;
  this->fields.sortValue2 = rarity;
  if ( !v89 )
    goto LABEL_56;
  v91 = *(_QWORD *)&v89->fields.svtId.fields.currentCryptoKey;
  v90 = *(_QWORD *)&v89->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v101.fields.currentCryptoKey = v91;
  *(_QWORD *)&v101.fields.fakeValue = v90;
  v92 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v101, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v92;
  this->fields.amountSortValue = -1LL;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_56;
  v93 = *(_DWORD *)(Instance + 276);
  v94 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v94 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userSvtEntity;
  }
  this->fields.hpReinforceValue = v94->static_fields->StatusUpAdjustHp * v93;
  if ( !Instance
    || (this->fields.atkReinforceValue = v94->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272),
        UserServantEntity__getAdjustMaxData(
          (UserServantEntity_o *)Instance,
          &this->fields.nowMaxHpReinforceValue,
          &this->fields.nowMaxAtkReinforceValue,
          0LL),
        (Instance = (int64_t)this->fields.iconLabelInfo1) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_56:
    sub_B2C434(Instance, v44);
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

  if ( (byte_4188607 & 1) == 0 )
  {
    sub_B2C35C(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4188607 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_B2C42C(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_B2C2F8((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
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
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x21
  UserServantEntity_o *userSvtEntity; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v20; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v36; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v38; // w0
  __int64 v39; // x0

  if ( (byte_4188604 & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_4188604 = 1;
  }
  if ( this->fields.isFavorite )
    return 1;
  v8 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                        (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_63;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v10 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v10 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v10->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v12->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
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
  ClassGroupFilterKindList = (__int64)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_63:
    sub_B2C434(ClassGroupFilterKindList, sort);
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
          goto LABEL_63;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v20 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v20 )
          goto LABEL_63;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v20, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_63;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
      }
    }
    ClassGroupFilterKindList = sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_64;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_64:
      v39 = sub_B2C460(ClassGroupFilterKindList);
      sub_B2C400(v39, 0LL);
    }
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v36 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v38 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v36) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v38 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v38 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
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
  v16 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v16->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v17, 0LL)
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

  if ( (byte_4188602 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userServantEntity);
    byte_4188602 = 1;
  }
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_B2C2F8(
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
    sub_B2C434(userSvtEntity, v11);
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
  this->fields.isPush = v16 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v17, 0LL);
}


void __fastcall FavoriteChangeListViewItem__ModifyChoiceItem(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B2C434(0LL, method);
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

  if ( (byte_4188601 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isFavorite);
    byte_4188601 = 1;
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
    sub_B2C434(userSvtEntity, isFavorite);
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
  this->fields.isPush = v9 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v10, 0LL);
}


void __fastcall FavoriteChangeListViewItem__ModifyLockItem(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B2C434(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
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
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v14; // q1
  struct UserServantEntity_o *v15; // x8
  int64_t hpReinforceValue; // x2
  int32_t adjustHp; // w3
  int32_t v18; // w1
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v21; // w1
  struct UserServantEntity_o *v22; // x8
  struct UserServantEntity_o *v23; // x8
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  IconLabelInfo_o *v26; // x20
  int32_t v27; // w21
  __int64 v28; // x10
  struct ServantEntity_o *v29; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v31; // x8
  int32_t lv; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+10h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+30h] [xbp-40h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-18h] BYREF

  if ( (byte_4188603 & 1) == 0 )
  {
    sub_B2C35C(&FavoriteChangeListViewManager_TypeInfo, sort);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4188603 = 1;
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
                v14 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v35.fields.fakeValue = v14;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v34 = v35;
                iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v34, 0LL);
                v15 = this->fields.userSvtEntity;
                this->fields.sortValue1 = iconLabelInfo2;
                if ( !v15 )
                  goto LABEL_72;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v15->fields.createdAt, 0, 0, 0, 0LL);
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
                UserServantEntity__getTreasureDeviceInfo_21659764(
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
                v21 = 33;
                goto LABEL_44;
              case 5:
                v22 = this->fields.userSvtEntity;
                if ( !v22 )
                  goto LABEL_72;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = v22->fields.hp;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                adjustHp = v22->fields.adjustHp;
                LODWORD(hpReinforceValue) = v22->fields.hp;
                v18 = 3;
                goto LABEL_64;
              case 6:
                v23 = this->fields.userSvtEntity;
                if ( !v23 )
                  goto LABEL_72;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = v23->fields.atk;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                adjustHp = v23->fields.adjustAtk;
                LODWORD(hpReinforceValue) = v23->fields.atk;
                v18 = 5;
                goto LABEL_64;
              case 7:
                servantEntity = this->fields.servantEntity;
                if ( !servantEntity )
                  goto LABEL_72;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = servantEntity->fields.cost;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                IconLabelInfo__Set_27362128(
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
                v21 = 32;
LABEL_44:
                IconLabelInfo__Set_27362128(
                  (IconLabelInfo_o *)iconLabelInfo2,
                  v21,
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
                v26 = this->fields.iconLabelInfo2;
                v27 = *(_DWORD *)(iconLabelInfo2 + 256);
                iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
                if ( !v26 )
                  goto LABEL_72;
                IconLabelInfo__Set_27362128(v26, 2, v27, iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
                v28 = *(&FavoriteChangeListViewManager_TypeInfo->_2.bitflags2 + 1);
                if ( *(unsigned __int8 *)(*(_QWORD *)iconLabelInfo2 + 300LL) < (unsigned int)v28
                  || *(FavoriteChangeListViewManager_c **)(*(_QWORD *)(*(_QWORD *)iconLabelInfo2 + 200LL) + 8 * v28 - 8) != FavoriteChangeListViewManager_TypeInfo )
                {
                  goto LABEL_72;
                }
                iconLabelInfo2 = FavoriteChangeListViewManager__GetAmountSortValue(
                                   (FavoriteChangeListViewManager_o *)iconLabelInfo2,
                                   this->fields.svtId,
                                   0LL);
                this->fields.amountSortValue = iconLabelInfo2;
LABEL_59:
                v29 = this->fields.servantEntity;
                if ( !v29 )
                  goto LABEL_72;
                collectionNo = v29->fields.collectionNo;
                v31 = this->fields.userSvtEntity;
                this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                         + (iconLabelInfo2 << 48)) | collectionNo;
                if ( !v31 )
                  goto LABEL_72;
                iconLabelInfo1 = this->fields.iconLabelInfo1;
                lv = v31->fields.lv;
                iconLabelInfo2 = (int64_t)v31;
                goto LABEL_68;
              case 0xF:
                hpReinforceValue = this->fields.hpReinforceValue;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = hpReinforceValue;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                adjustHp = this->fields.nowMaxHpReinforceValue;
                v18 = 44;
                goto LABEL_64;
              case 0x10:
                hpReinforceValue = this->fields.atkReinforceValue;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = hpReinforceValue;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                adjustHp = this->fields.nowMaxAtkReinforceValue;
                v18 = 45;
LABEL_64:
                IconLabelInfo__Set_27362128(
                  (IconLabelInfo_o *)iconLabelInfo2,
                  v18,
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
                IconLabelInfo__Set_27362128(iconLabelInfo1, 2, lv, iconLabelInfo2, 0, 0, 0, 0, 0LL);
                goto LABEL_70;
              default:
                return iconLabelInfo2;
            }
            return iconLabelInfo2;
          }
        }
LABEL_72:
        sub_B2C434(iconLabelInfo2, v6);
      }
      v12 = 10LL;
    }
    this->fields.sortValue0 = v12;
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
  if ( (byte_4188606 & 1) == 0 )
  {
    sub_B2C35C(&TutorialFlag_TypeInfo, method);
    byte_4188606 = 1;
  }
  if ( !this->fields.isHeroine )
    return this->fields.isFavorite;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_28617756(126, 0LL) || this->fields.isFavorite;
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
  if ( (byte_4188605 & 1) == 0 )
  {
    sub_B2C35C(&TutorialFlag_TypeInfo, method);
    byte_4188605 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_28617756(126, 0LL);
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
  sub_B2C2F8(
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