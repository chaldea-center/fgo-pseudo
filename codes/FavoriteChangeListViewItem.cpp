void __fastcall FavoriteChangeListViewItem___ctor(
        FavoriteChangeListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserSvtList,
        bool isFavorite,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  IconLabelInfo_o *v41; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  IconLabelInfo_o *v48; // x25
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct UserServantEntity_o **p_userSvtEntity; // x21
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  int64_t Instance; // x0
  __int64 v64; // x1
  struct UserServantEntity_o *v65; // x8
  __int64 v66; // x25
  __int64 v67; // x26
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct UserServantEntity_o *v76; // x8
  ServantLimitMaster_o *v77; // x26
  int32_t svtId; // w27
  int32_t v79; // w8
  struct UserServantEntity_o *v80; // x8
  __int128 v81; // q1
  UserServantCollectionMaster_o *v82; // x23
  struct UserServantEntity_o *v83; // x8
  __int128 v84; // q0
  signed int max_length; // w8
  unsigned int v86; // w9
  UserServantEntity_o *v87; // x8
  struct UserServantEntity_o *v88; // x8
  __int128 v89; // q0
  __int64 v90; // x22
  int64_t v91; // x8
  UserServantEntity_o *v92; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  int64_t v107; // x9
  int64_t rarity; // x10
  struct UserServantEntity_o *v109; // x8
  __int64 v110; // x22
  __int64 v111; // x23
  int64_t v112; // x8
  int v113; // w22
  BalanceConfig_c *v114; // x8
  __int64 v115; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16

  if ( (byte_42E8CD0 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, index, (_DWORD)userSvtEntity, partyUserSvtList);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v23, v24, v25);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v26, v27, v28);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38, v39, v40);
    byte_42E8CD0 = 1;
  }
  v41 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v41, 0LL);
  this->fields.iconLabelInfo1 = v41;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v48, 0LL);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  this->fields.iconLabelInfo2 = v48;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v48,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v65 = this->fields.userSvtEntity;
  if ( !v65 )
    goto LABEL_56;
  v67 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
  v66 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v120.fields.currentCryptoKey = v67;
  *(_QWORD *)&v120.fields.fakeValue = v66;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v120, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_56;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       this->fields.svtId,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  p_servantEntity = &this->fields.servantEntity;
  this->fields.servantEntity = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v76 = this->fields.userSvtEntity;
  if ( !v76 )
    goto LABEL_56;
  v77 = (ServantLimitMaster_o *)Instance;
  svtId = this->fields.svtId;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v76->fields.limitCount, 0LL);
  if ( !v77 )
    goto LABEL_56;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v77, svtId, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_56;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_56;
  v79 = *(_DWORD *)(Instance + 24);
  this->fields.isFavorite = isFavorite;
  this->fields.rarity = v79;
  if ( !userSvtEntity )
    goto LABEL_56;
  this->fields.isHeroine = UserServantEntity__IsHeroine(userSvtEntity, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v80 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_56;
  v81 = *(_OWORD *)&v80->fields.userId.fields.fakeValue;
  v82 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v119.fields.currentCryptoKey = *(_OWORD *)&v80->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v119.fields.fakeValue = v81;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v118 = v119;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v118, 0LL);
  if ( !v82 )
    goto LABEL_56;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v82, Instance, this->fields.svtId, 0LL);
  if ( !Instance )
    goto LABEL_56;
  Instance = UserServantCollectionEntity__getFriendShipRankInfo(
               (UserServantCollectionEntity_o *)Instance,
               &this->fields.friendship,
               &this->fields.friendshipMax,
               0LL);
  v83 = this->fields.userSvtEntity;
  this->fields.partyIndex = -1;
  if ( !v83 )
    goto LABEL_56;
  v84 = *(_OWORD *)&v83->fields.id.fields.fakeValue;
  *(_OWORD *)&v117.fields.currentCryptoKey = *(_OWORD *)&v83->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v117.fields.fakeValue = v84;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v117, 0LL);
  if ( !partyUserSvtList )
    goto LABEL_56;
  max_length = partyUserSvtList->max_length;
  if ( max_length >= 1 )
  {
    v86 = 0;
    while ( 1 )
    {
      if ( v86 >= max_length )
      {
        v115 = sub_B5D6C8(Instance);
        sub_B5D668(v115, 0LL);
      }
      if ( Instance == partyUserSvtList->m_Items[v86] )
        break;
      if ( (int)++v86 >= max_length )
        goto LABEL_31;
    }
    this->fields.partyIndex = v86;
  }
LABEL_31:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_56;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v87 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v87 )
    goto LABEL_56;
  this->fields.isChoice = UserServantEntity__IsChoice(v87, 0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_56;
  v88 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_56;
  v89 = *(_OWORD *)&v88->fields.id.fields.fakeValue;
  v90 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v119.fields.currentCryptoKey = *(_OWORD *)&v88->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v119.fields.fakeValue = v89;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v116 = v119;
  v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v116, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isPush = v90 == v91;
  this->fields.isPushMode = 0;
  if ( !Instance )
    goto LABEL_56;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v92 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v92 )
    goto LABEL_56;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v92, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_56;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_56;
  v107 = *(int *)(Instance + 48);
  rarity = this->fields.rarity;
  v109 = this->fields.userSvtEntity;
  this->fields.priority = v107;
  this->fields.sortValue1B = v107;
  this->fields.sortValue2 = rarity;
  if ( !v109 )
    goto LABEL_56;
  v111 = *(_QWORD *)&v109->fields.svtId.fields.currentCryptoKey;
  v110 = *(_QWORD *)&v109->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v121.fields.currentCryptoKey = v111;
  *(_QWORD *)&v121.fields.fakeValue = v110;
  v112 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v121, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v112;
  this->fields.amountSortValue = -1LL;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_56;
  v113 = *(_DWORD *)(Instance + 276);
  v114 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v114 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userSvtEntity;
  }
  this->fields.hpReinforceValue = v114->static_fields->StatusUpAdjustHp * v113;
  if ( !Instance
    || (this->fields.atkReinforceValue = v114->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272),
        UserServantEntity__getAdjustMaxData(
          (UserServantEntity_o *)Instance,
          &this->fields.nowMaxHpReinforceValue,
          &this->fields.nowMaxAtkReinforceValue,
          0LL),
        (Instance = (int64_t)this->fields.iconLabelInfo1) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_56:
    sub_B5D69C(Instance, v64);
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
  __int64 v3; // x3
  UserServantEntity_o *userSvtEntity; // x0
  TreasureDvcInfo_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E8CD7 & 1) == 0 )
  {
    sub_B5D5C4(&TreasureDvcInfo_TypeInfo, (_DWORD)tdInfo, (_DWORD)method, v3);
    byte_42E8CD7 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v8 = (TreasureDvcInfo_o *)sub_B5D694(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v8, 0LL);
  *tdInfo = v8;
  sub_B5D560((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  return 0;
}


bool __fastcall FavoriteChangeListViewItem__IsMatchFilter(
        FavoriteChangeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  FilterKindList_c *v13; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x0
  FilterKindList_c *v21; // x0
  ListViewSort_FilterKind_array *v22; // x21
  UserServantEntity_o *userSvtEntity; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v25; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v41; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v43; // w0
  __int64 v44; // x0

  if ( (byte_42E8CD4 & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&ListViewSort_FilterKind___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9, v10, v11);
    byte_42E8CD4 = 1;
  }
  if ( this->fields.isFavorite )
    return 1;
  v13 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v13->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                        (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_63;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v15 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v15 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v15->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
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
  ClassGroupFilterKindList = (__int64)v17->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v19 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v19->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_63:
    sub_B5D69C(ClassGroupFilterKindList, sort);
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
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
        v25 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v25 )
          goto LABEL_63;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v25, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_63;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
      }
    }
    ClassGroupFilterKindList = sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_64;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_64:
      v44 = sub_B5D6C8(ClassGroupFilterKindList);
      sub_B5D668(v44, 0LL);
    }
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v41 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v43 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v41) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v43 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v43 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
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
  v21 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v21 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v21->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v22, 0LL)
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

  if ( (byte_42E8CD2 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)userServantEntity, (_DWORD)method, v3);
    byte_42E8CD2 = 1;
  }
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_B5D560(
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
    sub_B5D69C(userSvtEntity, v11);
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
  this->fields.isPush = v16 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v17, 0LL);
}


void __fastcall FavoriteChangeListViewItem__ModifyChoiceItem(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B5D69C(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewItem__ModifyItem(
        FavoriteChangeListViewItem_o *this,
        bool isFavorite,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserServantEntity_o *userSvtEntity; // x0
  UserServantEntity_o *v7; // x8
  struct UserServantEntity_o *v8; // x8
  __int128 v9; // q1
  __int64 v10; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-40h]

  if ( (byte_42E8CD1 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isFavorite, (_DWORD)method, v3);
    byte_42E8CD1 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.isFavorite = isFavorite;
  if ( !userSvtEntity
    || (userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userSvtEntity, 0LL),
        v7 = this->fields.userSvtEntity,
        this->fields.isLock = (unsigned __int8)userSvtEntity & 1,
        !v7)
    || (this->fields.isChoice = UserServantEntity__IsChoice(v7, 0LL),
        *(_WORD *)&this->fields.isSwapLock = 0,
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0LL)) == 0LL)
    || (v8 = this->fields.userSvtEntity) == 0LL )
  {
    sub_B5D69C(userSvtEntity, isFavorite);
  }
  v9 = *(_OWORD *)&v8->fields.id.fields.fakeValue;
  v10 = *(_QWORD *)&userSvtEntity->fields.imageLimitCount.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&v8->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v11 = v12;
  this->fields.isPush = v10 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v11, 0LL);
}


void __fastcall FavoriteChangeListViewItem__ModifyLockItem(
        FavoriteChangeListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B5D69C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


bool __fastcall FavoriteChangeListViewItem__SetSortValue(
        FavoriteChangeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x1
  bool v10; // w8
  int64_t iconLabelInfo2; // x0
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isFavorite; // w10
  _BOOL4 isChoice; // w9
  int64_t v15; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v17; // q1
  struct UserServantEntity_o *v18; // x8
  int64_t hpReinforceValue; // x2
  int32_t adjustHp; // w3
  int32_t v21; // w1
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v24; // w1
  struct UserServantEntity_o *v25; // x8
  struct UserServantEntity_o *v26; // x8
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  IconLabelInfo_o *v29; // x20
  int32_t v30; // w21
  __int64 v31; // x10
  struct ServantEntity_o *v32; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v34; // x8
  int32_t lv; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+10h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+30h] [xbp-40h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-18h] BYREF

  if ( (byte_42E8CD3 & 1) == 0 )
  {
    sub_B5D5C4(&FavoriteChangeListViewManager_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7, v8);
    byte_42E8CD3 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  v10 = FavoriteChangeListViewItem__IsMatchFilter(this, sort, method);
  iconLabelInfo2 = 0LL;
  if ( v10 )
  {
    isSwapChoice = this->fields.isSwapChoice;
    isFavorite = this->fields.isFavorite;
    isChoice = this->fields.isChoice;
    this->fields.sortValue0 = 0LL;
    if ( isFavorite )
    {
      v15 = 20LL;
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
                v17 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v38.fields.fakeValue = v17;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v37 = v38;
                iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v37, 0LL);
                v18 = this->fields.userSvtEntity;
                this->fields.sortValue1 = iconLabelInfo2;
                if ( !v18 )
                  goto LABEL_72;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v18->fields.createdAt, 0, 0, 0, 0LL);
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
                UserServantEntity__getTreasureDeviceInfo_21848072(
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
                v24 = 33;
                goto LABEL_44;
              case 5:
                v25 = this->fields.userSvtEntity;
                if ( !v25 )
                  goto LABEL_72;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = v25->fields.hp;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                adjustHp = v25->fields.adjustHp;
                LODWORD(hpReinforceValue) = v25->fields.hp;
                v21 = 3;
                goto LABEL_64;
              case 6:
                v26 = this->fields.userSvtEntity;
                if ( !v26 )
                  goto LABEL_72;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = v26->fields.atk;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                adjustHp = v26->fields.adjustAtk;
                LODWORD(hpReinforceValue) = v26->fields.atk;
                v21 = 5;
                goto LABEL_64;
              case 7:
                servantEntity = this->fields.servantEntity;
                if ( !servantEntity )
                  goto LABEL_72;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = servantEntity->fields.cost;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                IconLabelInfo__Set_28463004(
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
                v24 = 32;
LABEL_44:
                IconLabelInfo__Set_28463004(
                  (IconLabelInfo_o *)iconLabelInfo2,
                  v24,
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
                v29 = this->fields.iconLabelInfo2;
                v30 = *(_DWORD *)(iconLabelInfo2 + 256);
                iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
                if ( !v29 )
                  goto LABEL_72;
                IconLabelInfo__Set_28463004(v29, 2, v30, iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
                v31 = *(&FavoriteChangeListViewManager_TypeInfo->_2.bitflags2 + 1);
                if ( *(unsigned __int8 *)(*(_QWORD *)iconLabelInfo2 + 300LL) < (unsigned int)v31
                  || *(FavoriteChangeListViewManager_c **)(*(_QWORD *)(*(_QWORD *)iconLabelInfo2 + 200LL) + 8 * v31 - 8) != FavoriteChangeListViewManager_TypeInfo )
                {
                  goto LABEL_72;
                }
                iconLabelInfo2 = FavoriteChangeListViewManager__GetAmountSortValue(
                                   (FavoriteChangeListViewManager_o *)iconLabelInfo2,
                                   this->fields.svtId,
                                   0LL);
                this->fields.amountSortValue = iconLabelInfo2;
LABEL_59:
                v32 = this->fields.servantEntity;
                if ( !v32 )
                  goto LABEL_72;
                collectionNo = v32->fields.collectionNo;
                v34 = this->fields.userSvtEntity;
                this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                         + (iconLabelInfo2 << 48)) | collectionNo;
                if ( !v34 )
                  goto LABEL_72;
                iconLabelInfo1 = this->fields.iconLabelInfo1;
                lv = v34->fields.lv;
                iconLabelInfo2 = (int64_t)v34;
                goto LABEL_68;
              case 0xF:
                hpReinforceValue = this->fields.hpReinforceValue;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = hpReinforceValue;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                adjustHp = this->fields.nowMaxHpReinforceValue;
                v21 = 44;
                goto LABEL_64;
              case 0x10:
                hpReinforceValue = this->fields.atkReinforceValue;
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                this->fields.sortValue1 = hpReinforceValue;
                if ( !iconLabelInfo2 )
                  goto LABEL_72;
                adjustHp = this->fields.nowMaxAtkReinforceValue;
                v21 = 45;
LABEL_64:
                IconLabelInfo__Set_28463004(
                  (IconLabelInfo_o *)iconLabelInfo2,
                  v21,
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
                IconLabelInfo__Set_28463004(iconLabelInfo1, 2, lv, iconLabelInfo2, 0, 0, 0, 0, 0LL);
                goto LABEL_70;
              default:
                return iconLabelInfo2;
            }
            return iconLabelInfo2;
          }
        }
LABEL_72:
        sub_B5D69C(iconLabelInfo2, v9);
      }
      v15 = 10LL;
    }
    this->fields.sortValue0 = v15;
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8CD6 & 1) == 0 )
  {
    sub_B5D5C4(&TutorialFlag_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8CD6 = 1;
  }
  if ( !this->fields.isHeroine )
    return this->fields.isFavorite;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_29295864(126, 0LL) || this->fields.isFavorite;
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8CD5 & 1) == 0 )
  {
    sub_B5D5C4(&TutorialFlag_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8CD5 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_29295864(126, 0LL);
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
  sub_B5D560(
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