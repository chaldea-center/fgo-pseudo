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
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  IconLabelInfo_o *v32; // x25
  IconLabelInfo_o **p_iconLabelInfo2; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UserServantEntity_o **p_userSvtEntity; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct UserServantEntity_o *v47; // x8
  __int64 v48; // x25
  __int64 v49; // x26
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  WebViewManager_o *v60; // x0
  WarQuestSelectionMaster_o *v61; // x0
  struct UserServantEntity_o *v62; // x8
  ServantLimitMaster_o *v63; // x26
  int32_t svtId; // w27
  int32_t v65; // w0
  ServantLimitEntity_o *v66; // x0
  int32_t rarity; // w8
  WebViewManager_o *v68; // x0
  WarQuestSelectionMaster_o *v69; // x0
  UserServantEntity_o *v70; // x8
  __int128 v71; // q1
  UserServantCollectionMaster_o *v72; // x23
  int64_t v73; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  struct UserServantEntity_o *v75; // x8
  __int128 v76; // q0
  int64_t v77; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  signed int max_length; // w8
  unsigned int v81; // w9
  bool IsLock; // w0
  UserServantEntity_o *v83; // x8
  UserGameEntity_o *SelfUserGame; // x0
  UserServantEntity_o *v85; // x8
  __int128 v86; // q0
  int64_t pushUserSvtId; // x22
  int64_t v88; // x8
  UserServantEntity_o *v89; // x0
  int32_t DispLimitCount; // w0
  UserServantEntity_o *v91; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  UserServantEntity_o *v99; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  WebViewManager_o *v107; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v108; // x0
  WarEntity_o *v109; // x0
  int64_t bannerId; // x9
  int64_t v111; // x10
  struct UserServantEntity_o *v112; // x8
  __int64 v113; // x22
  __int64 v114; // x23
  int64_t v115; // x8
  struct UserServantEntity_o *v116; // x0
  int32_t adjustHp; // w22
  BalanceConfig_c *v118; // x8
  IconLabelInfo_o *iconLabelInfo1; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v122; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v123; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16

  if ( (byte_40F9FAD & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v14);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v16);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_40F9FAD = 1;
  }
  v21 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&index,
                             userSvtEntity,
                             partyUserSvtList,
                             isFavorite);
  IconLabelInfo___ctor(v21, 0LL);
  this->fields.iconLabelInfo1 = v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v32 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v28, v29, v30, v31);
  IconLabelInfo___ctor(v32, 0LL);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  this->fields.iconLabelInfo2 = v32;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = this->fields.userSvtEntity;
  if ( !v47 )
    goto LABEL_56;
  v49 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
  v48 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v124.fields.currentCryptoKey = v49;
  *(_QWORD *)&v124.fields.fakeValue = v48;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v124, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_56;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       MasterData_WarQuestSelectionMaster,
                                       this->fields.svtId,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  p_servantEntity = &this->fields.servantEntity;
  this->fields.servantEntity = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v60 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v60 )
    goto LABEL_56;
  v61 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v60,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v62 = this->fields.userSvtEntity;
  if ( !v62 )
    goto LABEL_56;
  v63 = (ServantLimitMaster_o *)v61;
  svtId = this->fields.svtId;
  v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v62->fields.limitCount, 0LL);
  if ( !v63 )
    goto LABEL_56;
  v66 = ServantLimitMaster__GetEntity(v63, svtId, v65, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_56;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !v66 )
    goto LABEL_56;
  rarity = v66->fields.rarity;
  this->fields.isFavorite = isFavorite;
  this->fields.rarity = rarity;
  if ( !userSvtEntity )
    goto LABEL_56;
  this->fields.isHeroine = UserServantEntity__IsHeroine(userSvtEntity, 0LL);
  v68 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v68 )
    goto LABEL_56;
  v69 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v68,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v70 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_56;
  v71 = *(_OWORD *)&v70->fields.userId.fields.fakeValue;
  v72 = (UserServantCollectionMaster_o *)v69;
  *(_OWORD *)&v123.fields.currentCryptoKey = *(_OWORD *)&v70->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v123.fields.fakeValue = v71;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v122 = v123;
  v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v122, 0LL);
  if ( !v72 )
    goto LABEL_56;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v72, v73, this->fields.svtId, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_56;
  UserServantCollectionEntity__getFriendShipRankInfo(
    EntityDefinitely,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  v75 = this->fields.userSvtEntity;
  this->fields.partyIndex = -1;
  if ( !v75 )
    goto LABEL_56;
  v76 = *(_OWORD *)&v75->fields.id.fields.fakeValue;
  *(_OWORD *)&v121.fields.currentCryptoKey = *(_OWORD *)&v75->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v121.fields.fakeValue = v76;
  v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v121, 0LL);
  if ( !partyUserSvtList )
    goto LABEL_56;
  max_length = partyUserSvtList->max_length;
  if ( max_length >= 1 )
  {
    v81 = 0;
    while ( 1 )
    {
      if ( v81 >= max_length )
      {
        sub_B17100(v77, v78, v79);
        sub_B170A0();
      }
      if ( v77 == partyUserSvtList->m_Items[v81] )
        break;
      if ( (int)++v81 >= max_length )
        goto LABEL_31;
    }
    this->fields.partyIndex = v81;
  }
LABEL_31:
  if ( !*p_userSvtEntity )
    goto LABEL_56;
  IsLock = UserServantEntity__IsLock(*p_userSvtEntity, 0LL);
  v83 = this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !v83 )
    goto LABEL_56;
  this->fields.isChoice = UserServantEntity__IsChoice(v83, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_56;
  v85 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_56;
  v86 = *(_OWORD *)&v85->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v123.fields.currentCryptoKey = *(_OWORD *)&v85->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v123.fields.fakeValue = v86;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v120 = v123;
  v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v120, 0LL);
  v89 = this->fields.userSvtEntity;
  this->fields.isPush = pushUserSvtId == v88;
  this->fields.isPushMode = 0;
  if ( !v89 )
    goto LABEL_56;
  DispLimitCount = UserServantEntity__getDispLimitCount(v89, 0, 0LL);
  v91 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = DispLimitCount;
  if ( !v91 )
    goto LABEL_56;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v91, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  v99 = this->fields.userSvtEntity;
  if ( !v99 )
    goto LABEL_56;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(v99, 0, 0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  v107 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v107 )
    goto LABEL_56;
  v108 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)v107,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !v108 )
    goto LABEL_56;
  v109 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
           v108,
           this->fields.classId,
           (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !v109 )
    goto LABEL_56;
  bannerId = v109->fields.bannerId;
  v111 = this->fields.rarity;
  v112 = this->fields.userSvtEntity;
  this->fields.priority = bannerId;
  this->fields.sortValue1B = bannerId;
  this->fields.sortValue2 = v111;
  if ( !v112 )
    goto LABEL_56;
  v114 = *(_QWORD *)&v112->fields.svtId.fields.currentCryptoKey;
  v113 = *(_QWORD *)&v112->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v125.fields.currentCryptoKey = v114;
  *(_QWORD *)&v125.fields.fakeValue = v113;
  v115 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v125, 0LL);
  v116 = this->fields.userSvtEntity;
  this->fields.sortValue2B = v115;
  this->fields.amountSortValue = -1LL;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !v116 )
    goto LABEL_56;
  adjustHp = v116->fields.adjustHp;
  v118 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v118 = BalanceConfig_TypeInfo;
    v116 = *p_userSvtEntity;
  }
  this->fields.hpReinforceValue = v118->static_fields->StatusUpAdjustHp * adjustHp;
  if ( !v116
    || (this->fields.atkReinforceValue = v118->static_fields->StatusUpAdjustAtk * v116->fields.adjustAtk,
        UserServantEntity__getAdjustMaxData(
          v116,
          &this->fields.nowMaxHpReinforceValue,
          &this->fields.nowMaxAtkReinforceValue,
          0LL),
        (iconLabelInfo1 = this->fields.iconLabelInfo1) == 0LL)
    || (IconLabelInfo__Clear(iconLabelInfo1, 0LL), !*p_iconLabelInfo2) )
  {
LABEL_56:
    sub_B170D4();
  }
  IconLabelInfo__Clear(*p_iconLabelInfo2, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  UserServantEntity_o *userSvtEntity; // x0
  TreasureDvcInfo_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F9FB4 & 1) == 0 )
  {
    sub_B16FFC(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_40F9FB4 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v9 = (TreasureDvcInfo_o *)sub_B170CC(TreasureDvcInfo_TypeInfo, tdInfo, method, v3, v4);
  TreasureDvcInfo___ctor(v9, 0LL);
  *tdInfo = v9;
  sub_B16F98((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
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
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassFilterKindList; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *NpTypeFilterKindList; // x0
  ListViewSort_FilterKind_array *v16; // x0
  FilterKindList_c *v17; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *NpEffectFilterKindList; // x0
  ListViewSort_FilterKind_array *v19; // x0
  __int64 v20; // x2
  ListViewSort_FilterKind_array *v21; // x0
  __int64 v22; // x2
  ListViewSort_FilterKind_array *v23; // x1
  FilterKindList_c *v24; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v26; // x21
  UserServantEntity_o *userSvtEntity; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v29; // x0
  int32_t v30; // w0
  UserServantEntity_o *v31; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UserServantEntity_o *v39; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  __int64 v48; // x2
  _BOOL4 v49; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v51; // w0

  if ( (byte_40F9FB1 & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_40F9FB1 = 1;
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
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_63;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL) )
  {
    v11 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v11 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v11->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      goto LABEL_63;
    v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             ClassFilterKindList,
                                             (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
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
  NpTypeFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v14->static_fields->NpTypeFilterKindList;
  if ( !NpTypeFilterKindList )
    goto LABEL_63;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           NpTypeFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v17 = FilterKindList_TypeInfo;
  }
  NpEffectFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v17->static_fields->NpEffectFilterKindList;
  if ( !NpEffectFilterKindList )
LABEL_63:
    sub_B170D4();
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           NpEffectFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL)
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
        v29 = this->fields.userSvtEntity;
        if ( !v29 )
          goto LABEL_63;
        v30 = UserServantEntity__getDispLimitCount(v29, 0, 0LL);
        v31 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = v30;
        if ( !v31 )
          goto LABEL_63;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v31, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
        v39 = this->fields.userSvtEntity;
        if ( !v39 )
          goto LABEL_63;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(v39, 0, 0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
      }
    }
    v21 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v20);
    if ( !v21 )
      goto LABEL_63;
    v23 = v21;
    if ( !v21->max_length )
      goto LABEL_64;
    v21->m_Items[1] = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(sort, v21, 0LL);
    v21 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v48);
    if ( !v21 )
      goto LABEL_63;
    v23 = v21;
    if ( !v21->max_length )
    {
LABEL_64:
      sub_B17100(v21, v23, v22);
      sub_B170A0();
    }
    v21->m_Items[1] = 51;
    v49 = ListViewSort__IsUnSelectedAllTargetFilters(sort, v21, 0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v51 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v49) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v51 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v51 )
    {
      return 0;
    }
  }
  v21 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v20);
  if ( !v21 )
    goto LABEL_63;
  v23 = v21;
  if ( !v21->max_length )
    goto LABEL_64;
  v21->m_Items[1] = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v21, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields.isSwapChoice == this->fields.isChoice )
  {
    return 0;
  }
  v24 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v24 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v24->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_63;
  v26 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v26, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v26, 0LL)
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
  UserServantEntity_o *userSvtEntity; // x0
  bool IsLock; // w0
  UserServantEntity_o *v13; // x8
  UserGameEntity_o *SelfUserGame; // x0
  struct UserServantEntity_o *v15; // x8
  __int128 v16; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-40h]

  if ( (byte_40F9FAF & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userServantEntity);
    byte_40F9FAF = 1;
  }
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_B16F98(
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
    || (IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL),
        v13 = this->fields.userSvtEntity,
        this->fields.isLock = IsLock,
        !v13)
    || (this->fields.isChoice = UserServantEntity__IsChoice(v13, 0LL),
        *(_WORD *)&this->fields.isSwapLock = 0,
        (SelfUserGame = UserGameMaster__getSelfUserGame(0LL)) == 0LL)
    || (v15 = *p_userSvtEntity) == 0LL )
  {
    sub_B170D4();
  }
  v16 = *(_OWORD *)&v15->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&v15->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v19.fields.fakeValue = v16;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v18 = v19;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v18, 0LL);
}


void __fastcall FavoriteChangeListViewItem__ModifyChoiceItem(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B170D4();
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
  bool IsLock; // w0
  UserServantEntity_o *v7; // x8
  UserGameEntity_o *SelfUserGame; // x0
  struct UserServantEntity_o *v9; // x8
  __int128 v10; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-40h]

  if ( (byte_40F9FAE & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isFavorite);
    byte_40F9FAE = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.isFavorite = isFavorite;
  if ( !userSvtEntity
    || (IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL),
        v7 = this->fields.userSvtEntity,
        this->fields.isLock = IsLock,
        !v7)
    || (this->fields.isChoice = UserServantEntity__IsChoice(v7, 0LL),
        *(_WORD *)&this->fields.isSwapLock = 0,
        (SelfUserGame = UserGameMaster__getSelfUserGame(0LL)) == 0LL)
    || (v9 = this->fields.userSvtEntity) == 0LL )
  {
    sub_B170D4();
  }
  v10 = *(_OWORD *)&v9->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&v9->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v10;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v12 = v13;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v12, 0LL);
}


void __fastcall FavoriteChangeListViewItem__ModifyLockItem(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B170D4();
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
  bool result; // w0
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isFavorite; // w10
  _BOOL4 isChoice; // w9
  int64_t v11; // x8
  IconLabelInfo_o *iconLabelInfo2; // x0
  const MethodInfo *v13; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v15; // q1
  int64_t v16; // x0
  struct UserServantEntity_o *v17; // x8
  IconLabelInfo_o *iconLabelInfo1; // x0
  int64_t hpReinforceValue; // x2
  IconLabelInfo_o *v20; // x0
  int32_t adjustHp; // w3
  int32_t v22; // w1
  struct UserServantEntity_o *v23; // x0
  UserServantEntity_o *v24; // x0
  int64_t friendship; // x2
  IconLabelInfo_o *v26; // x0
  int32_t friendshipMax; // w3
  int32_t v28; // w1
  struct UserServantEntity_o *v29; // x8
  struct UserServantEntity_o *v30; // x8
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *v32; // x0
  IconLabelInfo_o *v33; // x19
  struct UserServantEntity_o *v34; // x0
  IconLabelInfo_o *v35; // x20
  int32_t lv; // w21
  int32_t LevelMax; // w0
  ServantEntity_o *v38; // x0
  ServantEntity_o *v39; // x0
  IconLabelInfo_o *v40; // x0
  IconLabelInfo_o *v41; // x0
  int64_t amountSortValue; // x0
  struct ListViewManager_o *manager; // x0
  __int64 v44; // x10
  struct ServantEntity_o *v45; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v47; // x8
  int32_t v48; // w20
  int32_t v49; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+10h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+30h] [xbp-40h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-18h] BYREF

  if ( (byte_40F9FB0 & 1) == 0 )
  {
    sub_B16FFC(&FavoriteChangeListViewManager_TypeInfo, sort);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_40F9FB0 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  v6 = FavoriteChangeListViewItem__IsMatchFilter(this, sort, method);
  result = 0;
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
        iconLabelInfo2 = this->fields.iconLabelInfo2;
        if ( iconLabelInfo2 )
        {
          IconLabelInfo__Clear(iconLabelInfo2, 0LL);
          if ( sort )
          {
            result = 1;
            switch ( sort->fields.sortKind )
            {
              case 1:
                userSvtEntity = this->fields.userSvtEntity;
                if ( !userSvtEntity )
                  goto LABEL_72;
                v15 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v51.fields.fakeValue = v15;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v50 = v51;
                v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v50, 0LL);
                v17 = this->fields.userSvtEntity;
                this->fields.sortValue1 = v16;
                if ( !v17 )
                  goto LABEL_72;
                iconLabelInfo1 = this->fields.iconLabelInfo1;
                if ( !iconLabelInfo1 )
                  goto LABEL_72;
                IconLabelInfo__SetTime(iconLabelInfo1, 49, v17->fields.createdAt, 0, 0, 0, 0LL);
                goto LABEL_65;
              case 2:
                v23 = this->fields.userSvtEntity;
                this->fields.sortValue1 = this->fields.rarity;
                if ( !v23 )
                  goto LABEL_72;
                goto LABEL_41;
              case 3:
                v23 = this->fields.userSvtEntity;
                if ( !v23 )
                  goto LABEL_72;
                this->fields.sortValue1 = v23->fields.lv;
                goto LABEL_41;
              case 4:
                v24 = this->fields.userSvtEntity;
                if ( !v24 )
                  goto LABEL_72;
                UserServantEntity__getTreasureDeviceInfo_21453148(v24, &tdMaxLv[1], tdMaxLv, 0LL);
                LODWORD(friendship) = tdMaxLv[1];
                v26 = this->fields.iconLabelInfo1;
                this->fields.sortValue1 = tdMaxLv[1];
                if ( !v26 )
                  goto LABEL_72;
                friendshipMax = tdMaxLv[0];
                v28 = 33;
                goto LABEL_44;
              case 5:
                v29 = this->fields.userSvtEntity;
                if ( !v29 )
                  goto LABEL_72;
                v20 = this->fields.iconLabelInfo1;
                this->fields.sortValue1 = v29->fields.hp;
                if ( !v20 )
                  goto LABEL_72;
                adjustHp = v29->fields.adjustHp;
                LODWORD(hpReinforceValue) = v29->fields.hp;
                v22 = 3;
                goto LABEL_64;
              case 6:
                v30 = this->fields.userSvtEntity;
                if ( !v30 )
                  goto LABEL_72;
                v20 = this->fields.iconLabelInfo1;
                this->fields.sortValue1 = v30->fields.atk;
                if ( !v20 )
                  goto LABEL_72;
                adjustHp = v30->fields.adjustAtk;
                LODWORD(hpReinforceValue) = v30->fields.atk;
                v22 = 5;
                goto LABEL_64;
              case 7:
                servantEntity = this->fields.servantEntity;
                if ( !servantEntity )
                  goto LABEL_72;
                v32 = this->fields.iconLabelInfo1;
                this->fields.sortValue1 = servantEntity->fields.cost;
                if ( !v32 )
                  goto LABEL_72;
                IconLabelInfo__Set_28888132(v32, 7, servantEntity->fields.cost, 0, 0, 0, 0, 0, 0LL);
                goto LABEL_45;
              case 8:
                v23 = this->fields.userSvtEntity;
                this->fields.sortValue1 = -this->fields.priority;
                if ( !v23 )
                  goto LABEL_72;
                this->fields.sortValue2 = v23->fields.lv;
LABEL_41:
                v33 = this->fields.iconLabelInfo1;
                goto LABEL_67;
              case 0xA:
                friendship = this->fields.friendship;
                v26 = this->fields.iconLabelInfo1;
                this->fields.sortValue1 = friendship;
                if ( !v26 )
                  goto LABEL_72;
                friendshipMax = this->fields.friendshipMax;
                v28 = 32;
LABEL_44:
                IconLabelInfo__Set_28888132(v26, v28, friendship, friendshipMax, 0, 0, 0, 0, 0LL);
LABEL_45:
                v34 = this->fields.userSvtEntity;
                if ( !v34 )
                  goto LABEL_72;
                v35 = this->fields.iconLabelInfo2;
                lv = v34->fields.lv;
                LevelMax = UserServantEntity__getLevelMax(v34, 0LL);
                if ( !v35 )
                  goto LABEL_72;
                IconLabelInfo__Set_28888132(v35, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
                v38 = this->fields.servantEntity;
                if ( !v38 )
                  goto LABEL_72;
                if ( ServantEntity__get_IsExpUp(v38, 0LL) )
                  goto LABEL_51;
                v39 = this->fields.servantEntity;
                if ( !v39 )
                  goto LABEL_72;
                if ( !ServantEntity__get_IsStatusUp(v39, 0LL) )
                  goto LABEL_70;
LABEL_51:
                v40 = this->fields.iconLabelInfo1;
                if ( !v40 )
                  goto LABEL_72;
                IconLabelInfo__Clear(v40, 0LL);
                v41 = this->fields.iconLabelInfo2;
                if ( !v41 )
                  goto LABEL_72;
                IconLabelInfo__Clear(v41, 0LL);
LABEL_70:
                result = 1;
                break;
              case 0xE:
                amountSortValue = this->fields.amountSortValue;
                if ( (amountSortValue & 0x8000000000000000LL) == 0 )
                  goto LABEL_59;
                manager = sort->fields.manager;
                if ( !manager )
                  goto LABEL_72;
                v44 = *(&FavoriteChangeListViewManager_TypeInfo->_2.bitflags2 + 1);
                if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v44
                  || (FavoriteChangeListViewManager_c *)manager->klass->_2.typeHierarchy[v44 - 1] != FavoriteChangeListViewManager_TypeInfo )
                {
                  goto LABEL_72;
                }
                amountSortValue = FavoriteChangeListViewManager__GetAmountSortValue(
                                    (FavoriteChangeListViewManager_o *)manager,
                                    this->fields.svtId,
                                    v13);
                this->fields.amountSortValue = amountSortValue;
LABEL_59:
                v45 = this->fields.servantEntity;
                if ( !v45 )
                  goto LABEL_72;
                collectionNo = v45->fields.collectionNo;
                v47 = this->fields.userSvtEntity;
                this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                         + (amountSortValue << 48)) | collectionNo;
                if ( !v47 )
                  goto LABEL_72;
                v33 = this->fields.iconLabelInfo1;
                v48 = v47->fields.lv;
                v23 = v47;
                goto LABEL_68;
              case 0xF:
                hpReinforceValue = this->fields.hpReinforceValue;
                v20 = this->fields.iconLabelInfo1;
                this->fields.sortValue1 = hpReinforceValue;
                if ( !v20 )
                  goto LABEL_72;
                adjustHp = this->fields.nowMaxHpReinforceValue;
                v22 = 44;
                goto LABEL_64;
              case 0x10:
                hpReinforceValue = this->fields.atkReinforceValue;
                v20 = this->fields.iconLabelInfo1;
                this->fields.sortValue1 = hpReinforceValue;
                if ( !v20 )
                  goto LABEL_72;
                adjustHp = this->fields.nowMaxAtkReinforceValue;
                v22 = 45;
LABEL_64:
                IconLabelInfo__Set_28888132(v20, v22, hpReinforceValue, adjustHp, 0, 0, 0, 0, 0LL);
LABEL_65:
                v23 = this->fields.userSvtEntity;
                if ( !v23 )
                  goto LABEL_72;
                v33 = this->fields.iconLabelInfo2;
LABEL_67:
                v48 = v23->fields.lv;
LABEL_68:
                v49 = UserServantEntity__getLevelMax(v23, 0LL);
                if ( !v33 )
                  goto LABEL_72;
                IconLabelInfo__Set_28888132(v33, 2, v48, v49, 0, 0, 0, 0, 0LL);
                goto LABEL_70;
              default:
                return result;
            }
            return result;
          }
        }
LABEL_72:
        sub_B170D4();
      }
      v11 = 10LL;
    }
    this->fields.sortValue0 = v11;
    goto LABEL_11;
  }
  return result;
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
  if ( (byte_40F9FB3 & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    byte_40F9FB3 = 1;
  }
  if ( !this->fields.isHeroine )
    return this->fields.isFavorite;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_28023340(126, 0LL) || this->fields.isFavorite;
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
  if ( (byte_40F9FB2 & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    byte_40F9FB2 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_28023340(126, 0LL);
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
  sub_B16F98(
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