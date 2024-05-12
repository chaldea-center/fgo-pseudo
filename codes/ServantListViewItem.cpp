void __fastcall ServantListViewItem___ctor(
        ServantListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserServantList,
        System_Int64_array *partyUserEquipList,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  IconLabelInfo_o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  IconLabelInfo_o *v20; // x25
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct UserServantEntity_o **p_userSvtEntity; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int64_t Instance; // x0
  __int64 v35; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v37; // x27
  __int64 v38; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v39; // x25
  struct ServantEntity_o *Entity; // x0
  ServantEntity_o **p_servantEntity; // x25
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  ServantLimitMaster_o *v66; // x26
  struct UserServantEntity_o *v67; // x8
  int32_t v68; // w27
  const MethodInfo *v69; // x3
  int32_t v70; // w8
  UserServantEntity_o *v71; // x8
  UserServantEntity_o *v72; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v74; // x8
  UserServantEntity_o *v75; // x8
  struct UserServantEntity_o *v76; // x8
  __int128 v77; // q1
  UserServantCollectionMaster_o *v78; // x26
  int64_t v79; // x27
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // kr10_16
  __int128 v81; // q0
  __int128 v82; // q1
  __int64 v83; // x24
  struct UserServantEntity_o *v84; // x8
  __int128 v85; // q0
  int64_t v86; // x24
  signed int max_length; // w8
  __int64 v88; // x9
  signed int v89; // w8
  __int64 v90; // x9
  struct System_Int32_array *EquipCategoryIdList; // x1
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  struct System_Int32_array **p_equipCategoryIdList; // x0
  UserServantEntity_o *v99; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  int64_t v107; // x8
  __int64 rarity; // x20
  __int64 v109; // x22
  __int64 lv; // x23
  __int64 v111; // x22
  __int64 v112; // x23
  int32_t v113; // w8
  int v114; // w20
  BalanceConfig_c *v115; // x8
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+70h] [xbp-80h]
  int32_t friendshipRank[3]; // [xsp+94h] [xbp-5Ch] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16

  if ( (byte_438D5B2 & 1) == 0 )
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
    byte_438D5B2 = 1;
  }
  friendshipRank[0] = 0;
  v13 = (IconLabelInfo_o *)sub_B77694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0LL);
  this->fields.iconLabelInfo1 = v13;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (IconLabelInfo_o *)sub_B77694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v20, 0LL);
  this->fields.iconLabelInfo2 = v20;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ListViewItem___ctor_24167012((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  if ( !this->fields.userSvtEntity )
    goto LABEL_69;
  this->fields.svtId = this->fields.userSvtEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v38 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v37 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v39 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v122.fields.currentCryptoKey = v38;
  *(_QWORD *)&v122.fields.fakeValue = v37;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v122, 0LL);
  if ( !v39 )
    goto LABEL_69;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v39,
                                       Instance,
                                       (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.userCommandCodeEntity = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.userCommandCodeEntity, 0LL, v48, v49, v50, v51, v52, v53);
  this->fields.commandCodeId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  this->fields.commandCodeEntity = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.commandCodeEntity, 0LL, v54, v55, v56, v57, v58, v59);
  this->fields.setupInfo = setupInfo;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  v66 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(this->fields.svtId, 0LL);
  v67 = this->fields.userSvtEntity;
  if ( !v67 )
    goto LABEL_69;
  v68 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v67->fields.limitCount, 0LL);
  if ( !v66 )
    goto LABEL_69;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v66, v68, Instance, v69);
  if ( !*p_servantEntity )
    goto LABEL_69;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_69;
  v70 = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.rarity = v70;
  if ( !Instance )
    goto LABEL_69;
  Instance = UserServantEntity__IsLeave((UserServantEntity_o *)Instance, 0LL);
  v71 = this->fields.userSvtEntity;
  this->fields.isLeave = Instance & 1;
  if ( !v71 )
    goto LABEL_69;
  Instance = UserServantEntity__IsLock(v71, 0LL);
  v72 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v72 )
    goto LABEL_69;
  IsChoice = UserServantEntity__IsChoice(v72, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_69;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v74 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v74 )
    goto LABEL_69;
  Instance = UserServantEntity__IsChocolateSvtEquip(v74, 0LL);
  v75 = this->fields.userSvtEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  if ( !v75 )
    goto LABEL_69;
  this->fields.isMaterialTdSvt = UserServantEntity__IsMaterialTd(v75, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v76 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_69;
  v77 = *(_OWORD *)&v76->fields.userId.fields.fakeValue;
  v78 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)&v76->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v120.fields.fakeValue = v77;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v119 = v120;
  v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v119, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(this->fields.svtId, 0LL);
  if ( !v78 )
    goto LABEL_69;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v78, v79, Instance, 0LL);
  if ( !Instance )
    goto LABEL_69;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    friendshipRank,
    &this->fields.friendshipMax,
    0LL);
  v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank[0], 0LL);
  v35 = *(_QWORD *)&v80.fields.fakeValue;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.friendship = v80;
  this->fields.partyIndex = -1;
  *(_WORD *)&this->fields.isPartyEquip = 0;
  if ( !Instance )
    goto LABEL_69;
  this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_69;
  if ( !userSvtEntity )
    goto LABEL_69;
  v82 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  v81 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v83 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v118.fields.currentCryptoKey = v82;
  *(_OWORD *)&v118.fields.fakeValue = v81;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v118, 0LL);
  v84 = this->fields.userSvtEntity;
  this->fields.isPush = v83 == Instance;
  this->fields.isEnabled = 1;
  if ( !v84 )
    goto LABEL_69;
  v85 = *(_OWORD *)&v84->fields.id.fields.fakeValue;
  *(_OWORD *)&v117.fields.currentCryptoKey = *(_OWORD *)&v84->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v117.fields.fakeValue = v85;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v117, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_69;
  v86 = Instance;
  Instance = ServantEntity__get_IsKeepServantEquip(*p_servantEntity, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( partyUserEquipList )
    {
      max_length = partyUserEquipList->max_length;
      if ( max_length >= 1 )
      {
        v88 = 0LL;
        while ( v86 != partyUserEquipList->m_Items[v88] )
        {
          if ( (int)++v88 >= max_length )
            goto LABEL_46;
        }
        this->fields.partyIndex = v88;
        *(_WORD *)&this->fields.isPartyEquip = 257;
      }
LABEL_46:
      Instance = (int64_t)*p_userSvtEntity;
      if ( *p_userSvtEntity )
      {
        EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
        p_equipCategoryIdList = &this->fields.equipCategoryIdList;
        this->fields.equipCategoryIdList = EquipCategoryIdList;
        goto LABEL_53;
      }
    }
LABEL_69:
    sub_B7769C(Instance, v35);
  }
  if ( !partyUserServantList )
    goto LABEL_69;
  v89 = partyUserServantList->max_length;
  if ( v89 >= 1 )
  {
    v90 = 0LL;
    while ( v86 != partyUserServantList->m_Items[v90] )
    {
      if ( (int)++v90 >= v89 )
        goto LABEL_49;
    }
    this->fields.partyIndex = v90;
  }
LABEL_49:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_69;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v99 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v99 )
    goto LABEL_69;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v99, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_69;
  EquipCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList((UserServantEntity_o *)Instance, 0, 0LL);
  p_equipCategoryIdList = &this->fields.tdCategoryIdList;
  this->fields.tdCategoryIdList = EquipCategoryIdList;
LABEL_53:
  sub_B77560(
    (BattleServantConfConponent_o *)p_equipCategoryIdList,
    (System_Int32_array **)EquipCategoryIdList,
    v92,
    v93,
    v94,
    v95,
    v96,
    v97);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_69;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_69;
  v107 = *(int *)(Instance + 48);
  Instance = (int64_t)this->fields.servantEntity;
  this->fields.priority = v107;
  this->fields.sortValue1B = v107;
  if ( !Instance || !*p_userSvtEntity )
    goto LABEL_69;
  rarity = (unsigned int)this->fields.rarity;
  v109 = *(int *)(Instance + 208);
  lv = (*p_userSvtEntity)->fields.lv;
  this->fields.sortValue2 = (v109 << 16) | (rarity << 48) | (2 * lv) | ServantEntity__get_IsServantMaterialTd(
                                                                         (ServantEntity_o *)Instance,
                                                                         0LL);
  v112 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v111 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v123.fields.currentCryptoKey = v112;
  *(_QWORD *)&v123.fields.fakeValue = v111;
  v113 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v123, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v113;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_69;
  v114 = *(_DWORD *)(Instance + 276);
  v115 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v115 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userSvtEntity;
  }
  this->fields.hpReinforceValue = v115->static_fields->StatusUpAdjustHp * v114;
  if ( !Instance )
    goto LABEL_69;
  this->fields.atkReinforceValue = v115->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  if ( !Instance )
    goto LABEL_69;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_69;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


void __fastcall ServantListViewItem___ctor_29408960(
        ServantListViewItem_o *this,
        int32_t index,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        System_Int64_array *attachUserCommandCodeList,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  IconLabelInfo_o *v16; // x24
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int64_t Instance; // x0
  __int64 v31; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v33; // x24
  __int64 v34; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // x23
  struct CommandCodeEntity_o *Entity; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // kr00_16
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  int32_t rarity; // w8
  UserCommandCodeEntity_o *v58; // x8
  bool IsChoice; // w0
  struct System_Int32_array *CategoryIdList; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct UserCommandCodeEntity_o *v67; // x8
  __int128 v68; // q1
  signed int max_length; // w8
  __int64 v70; // x9
  struct CommandCodeEntity_o *v71; // x8
  __int64 v72; // x23
  __int64 v73; // x21
  __int64 v74; // x22
  __int64 v75; // x9
  int32_t v76; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // 0:x0.16

  if ( (byte_438D5B3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B775C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B775C4(&IconLabelInfo_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438D5B3 = 1;
  }
  v9 = (IconLabelInfo_o *)sub_B77694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0LL);
  this->fields.iconLabelInfo1 = v9;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (IconLabelInfo_o *)sub_B77694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0LL);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  this->fields.iconLabelInfo2 = v16;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  ListViewItem___ctor_24167012((ListViewItem_o *)this, index, 0LL);
  this->fields.userCommandCodeEntity = userCommandCodeEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeEntity,
    (System_Int32_array **)userCommandCodeEntity,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( !userCommandCodeEntity )
    goto LABEL_30;
  this->fields.commandCodeId = userCommandCodeEntity->fields.commandCodeId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v34 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v33 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v35 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v79.fields.currentCryptoKey = v34;
  *(_QWORD *)&v79.fields.fakeValue = v33;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v79, 0LL);
  if ( !v35 )
    goto LABEL_30;
  Entity = (struct CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v35,
                                           Instance,
                                           (const MethodInfo_21FB894 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = Entity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
    (System_Int32_array **)Entity,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  this->fields.userSvtEntity = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.userSvtEntity, 0LL, v43, v44, v45, v46, v47, v48);
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  this->fields.servantEntity = 0LL;
  this->fields.svtId = v49;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.servantEntity, 0LL, v50, v51, v52, v53, v54, v55);
  this->fields.classId = 0;
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_30;
  rarity = commandCodeEntity->fields.rarity;
  Instance = (int64_t)this->fields.userCommandCodeEntity;
  this->fields.isLeave = 0;
  this->fields.rarity = rarity;
  if ( !Instance )
    goto LABEL_30;
  Instance = UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0LL);
  v58 = this->fields.userCommandCodeEntity;
  this->fields.isLock = Instance & 1;
  if ( !v58 )
    goto LABEL_30;
  IsChoice = UserCommandCodeEntity__IsChoice(v58, 0LL);
  *(_WORD *)&this->fields.isSwapLock = 0;
  *(_WORD *)&this->fields.isFriendShipSvtEq = 0;
  this->fields.isChoice = IsChoice;
  this->fields.friendshipMax = 0;
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  *(_WORD *)&this->fields.isPartyEquip = 0;
  *(_WORD *)&this->fields.isEventJoin = 0;
  this->fields.partyIndex = -1;
  this->fields.isEnabled = 1;
  CategoryIdList = UserCommandCodeEntity__GetCategoryIdList(userCommandCodeEntity, 0LL);
  this->fields.commandCodeCategoryIdList = CategoryIdList;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.commandCodeCategoryIdList,
    (System_Int32_array **)CategoryIdList,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v67 = this->fields.userCommandCodeEntity;
  if ( !v67 )
    goto LABEL_30;
  v68 = *(_OWORD *)&v67->fields.id.fields.fakeValue;
  *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&v67->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v78.fields.fakeValue = v68;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v77 = v78;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v77, 0LL);
  if ( !attachUserCommandCodeList )
    goto LABEL_30;
  max_length = attachUserCommandCodeList->max_length;
  if ( max_length >= 1 )
  {
    v70 = 0LL;
    while ( Instance != attachUserCommandCodeList->m_Items[v70] )
    {
      if ( (int)++v70 >= max_length )
        goto LABEL_23;
    }
    this->fields.isUse = 1;
  }
LABEL_23:
  v71 = this->fields.commandCodeEntity;
  this->fields.priority = 0;
  this->fields.sortValue1B = 0LL;
  if ( !v71 )
    goto LABEL_30;
  v72 = (unsigned int)this->fields.rarity;
  v74 = *(_QWORD *)&v71->fields.collectionNo.fields.currentCryptoKey;
  v73 = *(_QWORD *)&v71->fields.collectionNo.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v80.fields.currentCryptoKey = v74;
  *(_QWORD *)&v80.fields.fakeValue = v73;
  v75 = ((__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v80, 0LL) << 16) | (v72 << 48);
  commandCodeId = this->fields.commandCodeId;
  this->fields.sortValue2 = v75;
  v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(commandCodeId, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v76;
  this->fields.amountSortValue = -1LL;
  if ( !Instance
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_30:
    sub_B7769C(Instance, v31);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


void __fastcall ServantListViewItem__Finalize(ServantListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall ServantListViewItem__GetIsEventUpValShow(
        ServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ServantListViewItem_o *v4; // x19
  int32_t bonusKind2; // w8
  int32_t bonusKind2Id; // w2
  const MethodInfo *v8; // x4

  v4 = this;
  if ( (byte_438D5B8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    this = (ServantListViewItem_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438D5B8 = 1;
  }
  if ( !sort )
    goto LABEL_18;
  if ( !sort->fields.isBonusKind )
    return 1;
  bonusKind2 = sort->fields.bonusKind2;
  if ( (unsigned int)(bonusKind2 - 1) > 1 )
    return 1;
  if ( v4->fields.bonusKind != bonusKind2
    || (bonusKind2Id = v4->fields.bonusKindId, bonusKind2Id != sort->fields.bonusKind2Id) )
  {
    v4->fields.bonusKind = bonusKind2;
    bonusKind2Id = sort->fields.bonusKind2Id;
    v4->fields.bonusKindId = bonusKind2Id;
    bonusKind2 = sort->fields.bonusKind2;
  }
  if ( bonusKind2 == 2 )
  {
    this = (ServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_18;
    this = (ServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
    if ( !this )
      goto LABEL_18;
    return ServantFilterMaster__IsEnableServant(
             (ServantFilterMaster_o *)this,
             v4->fields.svtId,
             v4->fields.bonusKindId,
             v8);
  }
  else
  {
    if ( bonusKind2 == 1 )
    {
      this = (ServantListViewItem_o *)v4->fields.userSvtEntity;
      if ( this )
        return UserServantEntity__getEventUpVal_21829156(
                 (UserServantEntity_o *)this,
                 v4->fields.setupInfo,
                 bonusKind2Id,
                 0LL,
                 0LL);
LABEL_18:
      sub_B7769C(this, sort);
    }
    return 0;
  }
}


bool __fastcall ServantListViewItem__GetNpInfo(
        ServantListViewItem_o *this,
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

  if ( (byte_438D5BC & 1) == 0 )
  {
    sub_B775C4(&TreasureDvcInfo_TypeInfo);
    byte_438D5BC = 1;
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


bool __fastcall ServantListViewItem__IsMatchCommandCodeFilter(
        ServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  Voice_BATTLE_array *RarityFilterKindList; // x0
  __int64 v8; // x0

  if ( (byte_438D5B7 & 1) == 0 )
  {
    sub_B775C4(&FilterKindList_TypeInfo);
    sub_B775C4(&ListViewSort_FilterKind___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_438D5B7 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_19;
  RarityFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_19;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.commandCodeCategoryIdList, sort, 0LL) )
  {
    return 0;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
LABEL_19:
    sub_B7769C(RarityFilterKindList, sort);
  if ( !RarityFilterKindList->max_length )
  {
    v8 = sub_B776C8(RarityFilterKindList);
    sub_B77668(v8, 0LL);
  }
  RarityFilterKindList->m_Items[1] = 39;
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
      || !ListViewSort__GetFilter(sort, 39, 0LL)
      || !this->fields.isSwapChoice == this->fields.isChoice;
}


bool __fastcall ServantListViewItem__IsMatchFilter(
        ServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0
  const MethodInfo *v7; // x2

  if ( this->fields.userCommandCodeEntity )
  {
    if ( ServantListViewItem__IsMatchCommandCodeFilter(this, sort, method) )
      return 1;
  }
  else
  {
    servantEntity = this->fields.servantEntity;
    if ( !servantEntity )
      sub_B7769C(0LL, sort);
    if ( ServantEntity__get_IsKeepServantEquip(servantEntity, 0LL) )
    {
      if ( ServantListViewItem__IsMatchServantEquipFilter(this, sort, v7) )
        return 1;
    }
    else if ( ServantListViewItem__IsMatchServantFilter(this, sort, v7) )
    {
      return 1;
    }
  }
  return 0;
}


bool __fastcall ServantListViewItem__IsMatchServantEquipFilter(
        ServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  Voice_BATTLE_array *RarityFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  bool IsMatchServantEquipCombineStatusFilter; // w8
  bool result; // w0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  bool HaveStatusFilter; // w8
  __int64 v16; // x0

  if ( (byte_438D5B6 & 1) == 0 )
  {
    sub_B775C4(&FilterKindList_TypeInfo);
    sub_B775C4(&ListViewSort_FilterKind___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_438D5B6 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  RarityFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_38;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.equipCategoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v7 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v7->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                          (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v9->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL) )
  {
    IsMatchServantEquipCombineStatusFilter = ListViewSort__IsMatchServantEquipCombineStatusFilter(
                                               sort,
                                               this->fields.userSvtEntity,
                                               this->fields.servantEntity,
                                               0,
                                               0LL);
    result = 0;
    if ( !IsMatchServantEquipCombineStatusFilter )
      return result;
  }
  v13 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v13->static_fields->ServantEquipHaveStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL) )
  {
    HaveStatusFilter = ListViewSort__IsMatchServantEquipHaveStatusFilter(
                         sort,
                         this->fields.userSvtEntity,
                         this->fields.servantEntity,
                         0,
                         0LL);
    result = 0;
    if ( !HaveStatusFilter )
      return result;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
LABEL_38:
    sub_B7769C(RarityFilterKindList, sort);
  if ( !RarityFilterKindList->max_length )
  {
    v16 = sub_B776C8(RarityFilterKindList);
    sub_B77668(v16, 0LL);
  }
  RarityFilterKindList->m_Items[1] = 39;
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
      || !ListViewSort__GetFilter(sort, 39, 0LL)
      || !this->fields.isSwapChoice == this->fields.isChoice;
}


bool __fastcall ServantListViewItem__IsMatchServantFilter(
        ServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  UserServantEntity_o *userSvtEntity; // x21
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x21
  UserServantEntity_o *v19; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v21; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v37; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v39; // w0
  __int64 v40; // x0

  if ( (byte_438D5B5 & 1) == 0 )
  {
    sub_B775C4(&FilterKindList_TypeInfo);
    sub_B775C4(&ListViewSort_FilterKind___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_B775C4(&ServantEventBonusFilterController_TypeInfo);
    byte_438D5B5 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                        (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_72;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                            (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v11->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v13->static_fields->ServantTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_72:
    sub_B7769C(ClassGroupFilterKindList, sort);
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
    && !ListViewSort__IsMatchServantTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( (BYTE3(ServantEventBonusFilterController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    }
    if ( ServantEventBonusFilterController__IsHideServant(userSvtEntity, sort, -1, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v19 = this->fields.userSvtEntity;
    if ( v19 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v19, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_72;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v21 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v21 )
          goto LABEL_72;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v21, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_72;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
    }
    ClassGroupFilterKindList = sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_73;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_73:
      v40 = sub_B776C8(ClassGroupFilterKindList);
      sub_B77668(v40, 0LL);
    }
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v37 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v39 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v37) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v39 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v39 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_73;
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
    goto LABEL_72;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v17, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall ServantListViewItem__Modify(
        ServantListViewItem_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  this->fields.userSvtEntity = userSvtEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ServantListViewItem__ModifyLockItem(this, v9);
  ServantListViewItem__ModifyChoiceItem(this, v10);
}


void __fastcall ServantListViewItem__ModifyChoiceItem(ServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  bool IsChoice; // w0
  UserCommandCodeEntity_o *userCommandCodeEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    IsChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
LABEL_5:
    this->fields.isChoice = IsChoice;
    goto LABEL_6;
  }
  userCommandCodeEntity = this->fields.userCommandCodeEntity;
  if ( userCommandCodeEntity )
  {
    IsChoice = UserCommandCodeEntity__IsChoice(userCommandCodeEntity, 0LL);
    goto LABEL_5;
  }
LABEL_6:
  this->fields.isSwapChoice = 0;
}


void __fastcall ServantListViewItem__ModifyLockItem(ServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  bool IsLock; // w0
  UserCommandCodeEntity_o *userCommandCodeEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
LABEL_5:
    this->fields.isLock = IsLock;
    goto LABEL_6;
  }
  userCommandCodeEntity = this->fields.userCommandCodeEntity;
  if ( userCommandCodeEntity )
  {
    IsLock = UserCommandCodeEntity__IsLock(userCommandCodeEntity, 0LL);
    goto LABEL_5;
  }
LABEL_6:
  this->fields.isSwapLock = 0;
}


void __fastcall ServantListViewItem__ModifyUserCommandCodeEntity(
        ServantListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.userCommandCodeEntity = userCommandCodeEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeEntity,
    (System_Int32_array **)userCommandCodeEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantListViewItem__ModifyUserServantEntity(
        ServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.userSvtEntity = userServantEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantListViewItem__Modify_29410084(
        ServantListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  this->fields.userCommandCodeEntity = userCommandCodeEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeEntity,
    (System_Int32_array **)userCommandCodeEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ServantListViewItem__ModifyLockItem(this, v9);
  ServantListViewItem__ModifyChoiceItem(this, v10);
}


bool __fastcall ServantListViewItem__SetSortValue(
        ServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ServantListViewItem_c *klass; // x8
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  char v8; // w8
  int64_t iconLabelInfo2; // x0
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isChoice; // w9
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x9
  int32_t sortKind; // w8
  int64_t v14; // x8
  int64_t partyIndex; // x8
  __int128 v16; // q1
  struct UserCommandCodeEntity_o *v17; // x8
  int64_t amountSortValue; // x21
  struct ListViewManager_o *v19; // x8
  __int64 v20; // x11
  struct ListViewManager_o *v21; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v23; // q1
  struct UserServantEntity_o *v24; // x8
  IconLabelInfo_o *v25; // x20
  int32_t v26; // w21
  bool IsMaterialTd; // w8
  int64_t hpReinforceValue; // x2
  int32_t nowMaxHpReinforceValue; // w3
  int32_t v30; // w1
  struct UserServantEntity_o *v31; // x8
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v34; // w1
  struct UserServantEntity_o *v35; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  struct ServantEntity_o *servantEntity; // x8
  int32_t lv; // w20
  __int64 v39; // x20
  __int64 v40; // x21
  int32_t v41; // w0
  IconLabelInfo_o *v42; // x20
  int64_t v43; // x9
  struct ListViewManager_o *manager; // x8
  __int64 v45; // x11
  struct ListViewManager_o *v46; // x20
  IconLabelInfo_o *v47; // x20
  int32_t v48; // w21
  __int64 v49; // x21
  __int64 v50; // x22
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 rarity; // x23
  __int64 v53; // x20
  __int64 v54; // x22
  int32_t v55; // w8
  __int64 v56; // x21
  __int64 v57; // x22
  struct ServantEntity_o *v58; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v60; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+50h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_438D5B4 & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&ServantListViewManager_TypeInfo);
    byte_438D5B4 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.isNeedAdjustIconLabelScale = 0;
  this->fields.sortValue1 = -1LL;
  v8 = ((__int64 (__fastcall *)(ServantListViewItem_o *, ListViewSort_o *, void *))klass->vtable._5_IsMatchFilter.method)(
         this,
         sort,
         klass[1]._1.image);
  iconLabelInfo2 = 0LL;
  if ( (v8 & 1) != 0 )
  {
    if ( !this->fields.userSvtEntity
      || (iconLabelInfo2 = ServantListViewItem__GetIsEventUpValShow(this, sort, v7), (iconLabelInfo2 & 1) != 0) )
    {
      isSwapChoice = this->fields.isSwapChoice;
      isChoice = this->fields.isChoice;
      this->fields.sortValue0 = 0LL;
      if ( isSwapChoice != isChoice )
      {
        if ( !sort )
          goto LABEL_117;
        if ( sort->fields.isChoiceSort )
          this->fields.sortValue0 = 10LL;
      }
      iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
      if ( !iconLabelInfo2 || (IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL), !sort) )
LABEL_117:
        sub_B7769C(iconLabelInfo2, v6);
      userCommandCodeEntity = this->fields.userCommandCodeEntity;
      sortKind = sort->fields.sortKind;
      if ( !userCommandCodeEntity )
      {
        iconLabelInfo2 = 1LL;
        switch ( sortKind )
        {
          case 0:
            partyIndex = this->fields.partyIndex;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue0 = (int)partyIndex >= 0;
            goto LABEL_59;
          case 1:
            userSvtEntity = this->fields.userSvtEntity;
            if ( !userSvtEntity )
              goto LABEL_117;
            v23 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v64.fields.fakeValue = v23;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v62 = v64;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v62, 0LL);
            v24 = this->fields.userSvtEntity;
            this->fields.sortValue1 = iconLabelInfo2;
            if ( !v24 )
              goto LABEL_117;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v24->fields.createdAt, 0, 0, 0, 0LL);
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            v25 = this->fields.iconLabelInfo2;
            v26 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v25 )
              goto LABEL_117;
            IconLabelInfo__Set_28141596(v25, 2, v26, iconLabelInfo2, 0, 0, 0, 0, 0LL);
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)iconLabelInfo2, 0LL);
            LOBYTE(iconLabelInfo2) = 1;
            if ( IsMaterialTd )
              this->fields.isNeedAdjustIconLabelScale = 1;
            return iconLabelInfo2;
          case 2:
            partyIndex = this->fields.rarity;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            goto LABEL_59;
          case 3:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            this->fields.sortValue1 = *(int *)(iconLabelInfo2 + 256);
            goto LABEL_60;
          case 4:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            UserServantEntity__getTreasureDeviceInfo_21836884(
              (UserServantEntity_o *)iconLabelInfo2,
              &tdMaxLv[1],
              tdMaxLv,
              0LL);
            LODWORD(hpReinforceValue) = tdMaxLv[1];
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = tdMaxLv[1];
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            nowMaxHpReinforceValue = tdMaxLv[0];
            v30 = 33;
            goto LABEL_77;
          case 5:
            v31 = this->fields.userSvtEntity;
            if ( !v31 )
              goto LABEL_117;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v31->fields.hp;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            adjustHp = v31->fields.adjustHp;
            hp = v31->fields.hp;
            v34 = 3;
            goto LABEL_53;
          case 6:
            v35 = this->fields.userSvtEntity;
            if ( !v35 )
              goto LABEL_117;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v35->fields.atk;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            adjustHp = v35->fields.adjustAtk;
            hp = v35->fields.atk;
            v34 = 5;
LABEL_53:
            IconLabelInfo__Set_28141596((IconLabelInfo_o *)iconLabelInfo2, v34, hp, adjustHp, 0, 0, 0, 0, 0LL);
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            iconLabelInfo1 = this->fields.iconLabelInfo2;
            goto LABEL_61;
          case 7:
            servantEntity = this->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_117;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = servantEntity->fields.cost;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
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
            goto LABEL_78;
          case 8:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            partyIndex = -this->fields.priority;
LABEL_59:
            this->fields.sortValue1 = partyIndex;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
LABEL_60:
            iconLabelInfo1 = this->fields.iconLabelInfo1;
LABEL_61:
            lv = *(_DWORD *)(iconLabelInfo2 + 256);
            goto LABEL_62;
          case 10:
            v40 = *(_QWORD *)&this->fields.friendship.fields.currentCryptoKey;
            v39 = *(_QWORD *)&this->fields.friendship.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v66.fields.currentCryptoKey = v40;
            *(_QWORD *)&v66.fields.fakeValue = v39;
            v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v66, 0LL);
            v42 = this->fields.iconLabelInfo1;
            v43 = v41;
            friendship = this->fields.friendship;
            this->fields.sortValue1 = v43;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(friendship, 0LL);
            if ( !v42 )
              goto LABEL_117;
            IconLabelInfo__Set_28141596(v42, 32, iconLabelInfo2, this->fields.friendshipMax, 0, 0, 0, 0, 0LL);
            goto LABEL_78;
          case 14:
            iconLabelInfo2 = this->fields.amountSortValue;
            if ( (iconLabelInfo2 & 0x8000000000000000LL) == 0 )
              goto LABEL_114;
            manager = sort->fields.manager;
            if ( manager
              && (v45 = *(&ServantListViewManager_TypeInfo->_2.bitflags2 + 1),
                  *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v45) )
            {
              if ( (ServantListViewManager_c *)manager->klass->_2.typeHierarchy[v45 - 1] == ServantListViewManager_TypeInfo )
                v46 = sort->fields.manager;
              else
                v46 = 0LL;
            }
            else
            {
              v46 = 0LL;
            }
            v57 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
            v56 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v70.fields.currentCryptoKey = v57;
            *(_QWORD *)&v70.fields.fakeValue = v56;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v70, 0LL);
            if ( !v46 )
              goto LABEL_117;
            iconLabelInfo2 = ServantListViewManager__GetAmountSortValue(
                               (ServantListViewManager_o *)v46,
                               iconLabelInfo2,
                               0LL);
            this->fields.amountSortValue = iconLabelInfo2;
LABEL_114:
            v58 = this->fields.servantEntity;
            if ( !v58 )
              goto LABEL_117;
            collectionNo = v58->fields.collectionNo;
            v60 = this->fields.userSvtEntity;
            this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                     + (iconLabelInfo2 << 48)) | collectionNo;
            if ( !v60 )
              goto LABEL_117;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            lv = v60->fields.lv;
            iconLabelInfo2 = (int64_t)v60;
LABEL_62:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !iconLabelInfo1 )
              goto LABEL_117;
            IconLabelInfo__Set_28141596(iconLabelInfo1, 2, lv, iconLabelInfo2, 0, 0, 0, 0, 0LL);
            goto LABEL_104;
          case 15:
            hpReinforceValue = this->fields.hpReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hpReinforceValue;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            nowMaxHpReinforceValue = this->fields.nowMaxHpReinforceValue;
            v30 = 44;
            goto LABEL_77;
          case 16:
            hpReinforceValue = this->fields.atkReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hpReinforceValue;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            nowMaxHpReinforceValue = this->fields.nowMaxAtkReinforceValue;
            v30 = 45;
LABEL_77:
            IconLabelInfo__Set_28141596(
              (IconLabelInfo_o *)iconLabelInfo2,
              v30,
              hpReinforceValue,
              nowMaxHpReinforceValue,
              0,
              0,
              0,
              0,
              0LL);
LABEL_78:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            v47 = this->fields.iconLabelInfo2;
            v48 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v47 )
              goto LABEL_117;
            IconLabelInfo__Set_28141596(v47, 2, v48, iconLabelInfo2, 0, 0, 0, 0, 0LL);
            iconLabelInfo2 = (int64_t)this->fields.servantEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            if ( ServantEntity__get_IsExpUp((ServantEntity_o *)iconLabelInfo2, 0LL) )
              goto LABEL_86;
            iconLabelInfo2 = (int64_t)this->fields.servantEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo2, 0LL) )
              goto LABEL_86;
            iconLabelInfo2 = (int64_t)this->fields.servantEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            if ( !ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)iconLabelInfo2, 0LL) )
              goto LABEL_104;
LABEL_86:
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            goto LABEL_103;
          default:
            return iconLabelInfo2;
        }
      }
      switch ( sortKind )
      {
        case 1:
          v16 = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v64.fields.fakeValue = v16;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v63 = v64;
          iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v63, 0LL);
          v17 = this->fields.userCommandCodeEntity;
          this->fields.sortValue1 = iconLabelInfo2;
          if ( !v17 )
            goto LABEL_117;
          iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
          if ( !iconLabelInfo2 )
            goto LABEL_117;
          IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v17->fields.createdAt, 0, 0, 0, 0LL);
          break;
        case 14:
          amountSortValue = this->fields.amountSortValue;
          if ( (amountSortValue & 0x8000000000000000LL) != 0 )
          {
            v19 = sort->fields.manager;
            if ( v19
              && (v20 = *(&ServantListViewManager_TypeInfo->_2.bitflags2 + 1),
                  *(&v19->klass->_2.bitflags2 + 1) >= (unsigned int)v20) )
            {
              if ( (ServantListViewManager_c *)v19->klass->_2.typeHierarchy[v20 - 1] == ServantListViewManager_TypeInfo )
                v21 = sort->fields.manager;
              else
                v21 = 0LL;
            }
            else
            {
              v21 = 0LL;
            }
            v50 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
            v49 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v68.fields.currentCryptoKey = v50;
            *(_QWORD *)&v68.fields.fakeValue = v49;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v68, 0LL);
            if ( !v21 )
              goto LABEL_117;
            iconLabelInfo2 = ServantListViewManager__GetCommandCodeAmountSortValue(
                               (ServantListViewManager_o *)v21,
                               iconLabelInfo2,
                               0LL);
            amountSortValue = iconLabelInfo2;
            this->fields.amountSortValue = iconLabelInfo2;
          }
          commandCodeEntity = this->fields.commandCodeEntity;
          if ( !commandCodeEntity )
            goto LABEL_117;
          rarity = (unsigned int)this->fields.rarity;
          v54 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
          v53 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v69.fields.currentCryptoKey = v54;
          *(_QWORD *)&v69.fields.fakeValue = v53;
          v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v69, 0LL);
          iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
          v14 = ((rarity << 32) + (amountSortValue << 48)) | v55;
          goto LABEL_102;
        case 2:
          v14 = this->fields.rarity;
          iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
LABEL_102:
          this->fields.sortValue1 = v14;
          if ( iconLabelInfo2 )
          {
LABEL_103:
            IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
            break;
          }
          goto LABEL_117;
      }
LABEL_104:
      LOBYTE(iconLabelInfo2) = 1;
      return iconLabelInfo2;
    }
    LOBYTE(iconLabelInfo2) = 0;
  }
  return iconLabelInfo2;
}


bool __fastcall ServantListViewItem__SwapChoice(ServantListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall ServantListViewItem__SwapLock(ServantListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


CommandCodeEntity_o *__fastcall ServantListViewItem__get_CommandCode(
        ServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCodeEntity;
}


int32_t __fastcall ServantListViewItem__get_CommandCodeId(ServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_438D5BA & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438D5BA = 1;
  }
  v4 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v6, 0LL);
}


IconLabelInfo_o *__fastcall ServantListViewItem__get_IconInfo1(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall ServantListViewItem__get_IconInfo2(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall ServantListViewItem__get_IsCanNotSelect(ServantListViewItem_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall ServantListViewItem__get_IsChocolateSvtEquip(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChocolateSvtEquip;
}


bool __fastcall ServantListViewItem__get_IsChoice(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall ServantListViewItem__get_IsDispChoice(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice ^ this->fields.isChoice;
}


bool __fastcall ServantListViewItem__get_IsDispLock(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock ^ this->fields.isLock;
}


bool __fastcall ServantListViewItem__get_IsEnabled(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEnabled;
}


bool __fastcall ServantListViewItem__get_IsEventJoin(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEventJoin;
}


bool __fastcall ServantListViewItem__get_IsFriendShipSvtEq(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFriendShipSvtEq;
}


bool __fastcall ServantListViewItem__get_IsLeave(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLeave;
}


bool __fastcall ServantListViewItem__get_IsLock(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall ServantListViewItem__get_IsMaterialTdSvt(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaterialTdSvt;
}


bool __fastcall ServantListViewItem__get_IsNeedAdjustIconLabelScale(
        ServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isNeedAdjustIconLabelScale;
}


bool __fastcall ServantListViewItem__get_IsParty(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex >= 0;
}


bool __fastcall ServantListViewItem__get_IsPartyEquip(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPartyEquip;
}


bool __fastcall ServantListViewItem__get_IsPush(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool __fastcall ServantListViewItem__get_IsSwapChoice(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall ServantListViewItem__get_IsSwapLock(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool __fastcall ServantListViewItem__get_IsUse(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUse;
}


System_String_o *__fastcall ServantListViewItem__get_NameText(ServantListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_438D5BB & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&StringLiteral_18762/*"error"*/);
    byte_438D5BB = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18762/*"error"*/;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v9, 0LL);
  }
  else
  {
    v7 = -1;
  }
  return ServantEntity__getName(servantEntity, v7, -1, 0LL);
}


ServantEntity_o *__fastcall ServantListViewItem__get_Servant(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t __fastcall ServantListViewItem__get_SvtId(ServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_438D5B9 & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438D5B9 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v6, 0LL);
}


UserCommandCodeEntity_o *__fastcall ServantListViewItem__get_UserCommandCode(
        ServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userCommandCodeEntity;
}


UserServantEntity_o *__fastcall ServantListViewItem__get_UserServant(
        ServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


void __fastcall ServantListViewItem__set_IsEnabled(ServantListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isEnabled = value;
}


void __fastcall ServantListViewItem__set_IsPush(ServantListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isPush = value;
}