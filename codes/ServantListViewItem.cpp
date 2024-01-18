// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewItem___ctor(
        ServantListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserServantList,
        System_Int64_array *partyUserEquipList,
        EventUpValSetupInfo_o *setupInfo,
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
  IconLabelInfo_o *v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  IconLabelInfo_o *v30; // x25
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct UserServantEntity_o **p_userSvtEntity; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  int64_t Instance; // x0
  __int64 v45; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v47; // x27
  __int64 v48; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v49; // x25
  struct ServantEntity_o *Entity; // x0
  ServantEntity_o **p_servantEntity; // x25
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  ServantLimitMaster_o *v76; // x26
  struct UserServantEntity_o *v77; // x8
  int32_t v78; // w27
  const MethodInfo *v79; // x3
  int32_t v80; // w8
  UserServantEntity_o *v81; // x8
  UserServantEntity_o *v82; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v84; // x8
  UserServantEntity_o *v85; // x8
  struct UserServantEntity_o *v86; // x8
  __int128 v87; // q1
  UserServantCollectionMaster_o *v88; // x26
  int64_t v89; // x27
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // kr10_16
  __int128 v91; // q0
  __int128 v92; // q1
  __int64 v93; // x24
  struct UserServantEntity_o *v94; // x8
  __int128 v95; // q0
  int64_t v96; // x24
  signed int max_length; // w8
  __int64 v98; // x9
  signed int v99; // w8
  __int64 v100; // x9
  struct System_Int32_array *EquipCategoryIdList; // x1
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  struct System_Int32_array **p_equipCategoryIdList; // x0
  UserServantEntity_o *v109; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  int64_t v117; // x8
  __int64 rarity; // x20
  __int64 v119; // x22
  __int64 lv; // x23
  __int64 v121; // x22
  __int64 v122; // x23
  int32_t v123; // w8
  int v124; // w20
  BalanceConfig_c *v125; // x8
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v128; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v129; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v130; // [xsp+70h] [xbp-80h]
  int32_t friendshipRank[3]; // [xsp+94h] [xbp-5Ch] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16

  if ( (byte_418A04A & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v16);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v18);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v19);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_418A04A = 1;
  }
  friendshipRank[0] = 0;
  v23 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v23, 0LL);
  this->fields.iconLabelInfo1 = v23;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v30, 0LL);
  this->fields.iconLabelInfo2 = v30;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  if ( !this->fields.userSvtEntity )
    goto LABEL_69;
  this->fields.svtId = this->fields.userSvtEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v48 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v47 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v49 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v132.fields.currentCryptoKey = v48;
  *(_QWORD *)&v132.fields.fakeValue = v47;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v132, 0LL);
  if ( !v49 )
    goto LABEL_69;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v49,
                                       Instance,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  this->fields.userCommandCodeEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.userCommandCodeEntity, 0LL, v58, v59, v60, v61, v62, v63);
  this->fields.commandCodeId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  this->fields.commandCodeEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.commandCodeEntity, 0LL, v64, v65, v66, v67, v68, v69);
  this->fields.setupInfo = setupInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  v76 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.svtId, 0LL);
  v77 = this->fields.userSvtEntity;
  if ( !v77 )
    goto LABEL_69;
  v78 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v77->fields.limitCount, 0LL);
  if ( !v76 )
    goto LABEL_69;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v76, v78, Instance, v79);
  if ( !*p_servantEntity )
    goto LABEL_69;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_69;
  v80 = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.rarity = v80;
  if ( !Instance )
    goto LABEL_69;
  Instance = UserServantEntity__IsLeave((UserServantEntity_o *)Instance, 0LL);
  v81 = this->fields.userSvtEntity;
  this->fields.isLeave = Instance & 1;
  if ( !v81 )
    goto LABEL_69;
  Instance = UserServantEntity__IsLock(v81, 0LL);
  v82 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v82 )
    goto LABEL_69;
  IsChoice = UserServantEntity__IsChoice(v82, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_69;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v84 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v84 )
    goto LABEL_69;
  Instance = UserServantEntity__IsChocolateSvtEquip(v84, 0LL);
  v85 = this->fields.userSvtEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  if ( !v85 )
    goto LABEL_69;
  this->fields.isMaterialTdSvt = UserServantEntity__IsMaterialTd(v85, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v86 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_69;
  v87 = *(_OWORD *)&v86->fields.userId.fields.fakeValue;
  v88 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v130.fields.currentCryptoKey = *(_OWORD *)&v86->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v130.fields.fakeValue = v87;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v129 = v130;
  v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v129, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.svtId, 0LL);
  if ( !v88 )
    goto LABEL_69;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v88, v89, Instance, 0LL);
  if ( !Instance )
    goto LABEL_69;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    friendshipRank,
    &this->fields.friendshipMax,
    0LL);
  v90 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank[0], 0LL);
  v45 = *(_QWORD *)&v90.fields.fakeValue;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.friendship = v90;
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
  v92 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  v91 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v93 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v128.fields.currentCryptoKey = v92;
  *(_OWORD *)&v128.fields.fakeValue = v91;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v128, 0LL);
  v94 = this->fields.userSvtEntity;
  this->fields.isPush = v93 == Instance;
  this->fields.isEnabled = 1;
  if ( !v94 )
    goto LABEL_69;
  v95 = *(_OWORD *)&v94->fields.id.fields.fakeValue;
  *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)&v94->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v127.fields.fakeValue = v95;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v127, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_69;
  v96 = Instance;
  Instance = ServantEntity__get_IsKeepServantEquip(*p_servantEntity, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( partyUserEquipList )
    {
      max_length = partyUserEquipList->max_length;
      if ( max_length >= 1 )
      {
        v98 = 0LL;
        while ( v96 != partyUserEquipList->m_Items[v98] )
        {
          if ( (int)++v98 >= max_length )
            goto LABEL_46;
        }
        this->fields.partyIndex = v98;
        *(_WORD *)&this->fields.isPartyEquip = 257;
      }
LABEL_46:
      Instance = (int64_t)*p_userSvtEntity;
      if ( *p_userSvtEntity )
      {
        EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 0LL);
        p_equipCategoryIdList = &this->fields.equipCategoryIdList;
        this->fields.equipCategoryIdList = EquipCategoryIdList;
        goto LABEL_53;
      }
    }
LABEL_69:
    sub_B2C434(Instance, v45);
  }
  if ( !partyUserServantList )
    goto LABEL_69;
  v99 = partyUserServantList->max_length;
  if ( v99 >= 1 )
  {
    v100 = 0LL;
    while ( v96 != partyUserServantList->m_Items[v100] )
    {
      if ( (int)++v100 >= v99 )
        goto LABEL_49;
    }
    this->fields.partyIndex = v100;
  }
LABEL_49:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_69;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v109 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v109 )
    goto LABEL_69;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v109, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_69;
  EquipCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList((UserServantEntity_o *)Instance, 0, 0LL);
  p_equipCategoryIdList = &this->fields.tdCategoryIdList;
  this->fields.tdCategoryIdList = EquipCategoryIdList;
LABEL_53:
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_equipCategoryIdList,
    (System_Int32_array **)EquipCategoryIdList,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_69;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_69;
  v117 = *(int *)(Instance + 48);
  Instance = (int64_t)this->fields.servantEntity;
  this->fields.priority = v117;
  this->fields.sortValue1B = v117;
  if ( !Instance || !*p_userSvtEntity )
    goto LABEL_69;
  rarity = (unsigned int)this->fields.rarity;
  v119 = *(int *)(Instance + 208);
  lv = (*p_userSvtEntity)->fields.lv;
  this->fields.sortValue2 = (v119 << 16) | (rarity << 48) | (2 * lv) | ServantEntity__get_IsServantMaterialTd(
                                                                         (ServantEntity_o *)Instance,
                                                                         0LL);
  v122 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v121 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v133.fields.currentCryptoKey = v122;
  *(_QWORD *)&v133.fields.fakeValue = v121;
  v123 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v133, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v123;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_69;
  v124 = *(_DWORD *)(Instance + 276);
  v125 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v125 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userSvtEntity;
  }
  this->fields.hpReinforceValue = v125->static_fields->StatusUpAdjustHp * v124;
  if ( !Instance )
    goto LABEL_69;
  this->fields.atkReinforceValue = v125->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewItem___ctor_29379128(
        ServantListViewItem_o *this,
        int32_t index,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        System_Int64_array *attachUserCommandCodeList,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  IconLabelInfo_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  IconLabelInfo_o *v21; // x24
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int64_t Instance; // x0
  __int64 v36; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v38; // x24
  __int64 v39; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v40; // x23
  struct CommandCodeEntity_o *Entity; // x0
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
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // kr00_16
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  int32_t rarity; // w8
  UserCommandCodeEntity_o *v63; // x8
  bool IsChoice; // w0
  struct System_Int32_array *CategoryIdList; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct UserCommandCodeEntity_o *v72; // x8
  __int128 v73; // q1
  signed int max_length; // w8
  __int64 v75; // x9
  struct CommandCodeEntity_o *v76; // x8
  __int64 v77; // x23
  __int64 v78; // x21
  __int64 v79; // x22
  __int64 v80; // x9
  int32_t v81; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // 0:x0.16

  if ( (byte_418A04B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v9);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_418A04B = 1;
  }
  v14 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v14, 0LL);
  this->fields.iconLabelInfo1 = v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0LL);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  this->fields.iconLabelInfo2 = v21;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.userCommandCodeEntity = userCommandCodeEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeEntity,
    (System_Int32_array **)userCommandCodeEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( !userCommandCodeEntity )
    goto LABEL_30;
  this->fields.commandCodeId = userCommandCodeEntity->fields.commandCodeId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v39 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v40 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v84.fields.currentCryptoKey = v39;
  *(_QWORD *)&v84.fields.fakeValue = v38;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v84, 0LL);
  if ( !v40 )
    goto LABEL_30;
  Entity = (struct CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v40,
                                           Instance,
                                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = Entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
    (System_Int32_array **)Entity,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  this->fields.userSvtEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.userSvtEntity, 0LL, v48, v49, v50, v51, v52, v53);
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  this->fields.servantEntity = 0LL;
  this->fields.svtId = v54;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.servantEntity, 0LL, v55, v56, v57, v58, v59, v60);
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
  v63 = this->fields.userCommandCodeEntity;
  this->fields.isLock = Instance & 1;
  if ( !v63 )
    goto LABEL_30;
  IsChoice = UserCommandCodeEntity__IsChoice(v63, 0LL);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCodeCategoryIdList,
    (System_Int32_array **)CategoryIdList,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v72 = this->fields.userCommandCodeEntity;
  if ( !v72 )
    goto LABEL_30;
  v73 = *(_OWORD *)&v72->fields.id.fields.fakeValue;
  *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&v72->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v83.fields.fakeValue = v73;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v82 = v83;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v82, 0LL);
  if ( !attachUserCommandCodeList )
    goto LABEL_30;
  max_length = attachUserCommandCodeList->max_length;
  if ( max_length >= 1 )
  {
    v75 = 0LL;
    while ( Instance != attachUserCommandCodeList->m_Items[v75] )
    {
      if ( (int)++v75 >= max_length )
        goto LABEL_23;
    }
    this->fields.isUse = 1;
  }
LABEL_23:
  v76 = this->fields.commandCodeEntity;
  this->fields.priority = 0;
  this->fields.sortValue1B = 0LL;
  if ( !v76 )
    goto LABEL_30;
  v77 = (unsigned int)this->fields.rarity;
  v79 = *(_QWORD *)&v76->fields.collectionNo.fields.currentCryptoKey;
  v78 = *(_QWORD *)&v76->fields.collectionNo.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v85.fields.currentCryptoKey = v79;
  *(_QWORD *)&v85.fields.fakeValue = v78;
  v80 = ((__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v85, 0LL) << 16) | (v77 << 48);
  commandCodeId = this->fields.commandCodeId;
  this->fields.sortValue2 = v80;
  v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(commandCodeId, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v81;
  this->fields.amountSortValue = -1LL;
  if ( !Instance
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_30:
    sub_B2C434(Instance, v36);
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
  __int64 v5; // x1
  int32_t bonusKind2; // w8
  int32_t bonusKind2Id; // w2
  const MethodInfo *v9; // x4

  v4 = this;
  if ( (byte_418A050 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantFilterMaster___, sort);
    this = (ServantListViewItem_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418A050 = 1;
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
    this = (ServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_18;
    this = (ServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantFilterMaster___);
    if ( !this )
      goto LABEL_18;
    return ServantFilterMaster__IsEnableServant(
             (ServantFilterMaster_o *)this,
             v4->fields.svtId,
             v4->fields.bonusKindId,
             v9);
  }
  else
  {
    if ( bonusKind2 == 1 )
    {
      this = (ServantListViewItem_o *)v4->fields.userSvtEntity;
      if ( this )
        return UserServantEntity__getEventUpVal_21652144(
                 (UserServantEntity_o *)this,
                 v4->fields.setupInfo,
                 bonusKind2Id,
                 0LL);
LABEL_18:
      sub_B2C434(this, sort);
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

  if ( (byte_418A054 & 1) == 0 )
  {
    sub_B2C35C(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_418A054 = 1;
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


bool __fastcall ServantListViewItem__IsMatchCommandCodeFilter(
        ServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *v7; // x0
  Voice_BATTLE_array *RarityFilterKindList; // x0
  __int64 v10; // x0

  if ( (byte_418A04F & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_418A04F = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v7->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_19;
  RarityFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_19;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.commandCodeCategoryIdList, sort, 0LL) )
  {
    return 0;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
LABEL_19:
    sub_B2C434(RarityFilterKindList, sort);
  if ( !RarityFilterKindList->max_length )
  {
    v10 = sub_B2C460(RarityFilterKindList);
    sub_B2C400(v10, 0LL);
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
      sub_B2C434(0LL, sort);
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
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *v7; // x0
  Voice_BATTLE_array *RarityFilterKindList; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  __int64 v12; // x0

  if ( (byte_418A04E & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_418A04E = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v7->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_25;
  RarityFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_25;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.equipCategoryIdList, sort, 0LL) )
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
  RarityFilterKindList = (Voice_BATTLE_array *)v9->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
LABEL_25:
    sub_B2C434(RarityFilterKindList, sort);
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
    goto LABEL_25;
  if ( !RarityFilterKindList->max_length )
  {
    v12 = sub_B2C460(RarityFilterKindList);
    sub_B2C400(v12, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  FilterKindList_c *v8; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x0
  UserServantEntity_o *userSvtEntity; // x21
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x21
  UserServantEntity_o *v22; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v24; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v40; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v42; // w0
  __int64 v43; // x0

  if ( (byte_418A04D & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_B2C35C(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_418A04D = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                        (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_72;
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
      goto LABEL_72;
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
    goto LABEL_72;
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
    goto LABEL_72;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0LL) )
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
  ClassGroupFilterKindList = (__int64)v16->static_fields->ServantTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_72:
    sub_B2C434(ClassGroupFilterKindList, sort);
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL)
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
    v22 = this->fields.userSvtEntity;
    if ( v22 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v22, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_72;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v24 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v24 )
          goto LABEL_72;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v24, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_72;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
    }
    ClassGroupFilterKindList = sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_73;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_73:
      v43 = sub_B2C460(ClassGroupFilterKindList);
      sub_B2C400(v43, 0LL);
    }
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v40 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v42 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v40) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v42 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v42 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
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
  v19 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v19->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v20, 0LL)
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantListViewItem__Modify_29380252(
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
  sub_B2C2F8(
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
  __int64 v5; // x1
  __int64 v6; // x1
  ServantListViewItem_c *klass; // x8
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  char v10; // w8
  int64_t iconLabelInfo2; // x0
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isChoice; // w9
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x9
  int32_t sortKind; // w8
  int64_t v16; // x8
  int64_t partyIndex; // x8
  __int128 v18; // q1
  struct UserCommandCodeEntity_o *v19; // x8
  int64_t amountSortValue; // x21
  struct ListViewManager_o *v21; // x8
  __int64 v22; // x11
  struct ListViewManager_o *v23; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v25; // q1
  struct UserServantEntity_o *v26; // x8
  IconLabelInfo_o *v27; // x20
  int32_t v28; // w21
  bool IsMaterialTd; // w8
  int64_t hpReinforceValue; // x2
  int32_t nowMaxHpReinforceValue; // w3
  int32_t v32; // w1
  struct UserServantEntity_o *v33; // x8
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v36; // w1
  struct UserServantEntity_o *v37; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  struct ServantEntity_o *servantEntity; // x8
  int32_t lv; // w20
  __int64 v41; // x20
  __int64 v42; // x21
  int32_t v43; // w0
  IconLabelInfo_o *v44; // x20
  int64_t v45; // x9
  struct ListViewManager_o *manager; // x8
  __int64 v47; // x11
  struct ListViewManager_o *v48; // x20
  IconLabelInfo_o *v49; // x20
  int32_t v50; // w21
  __int64 v51; // x21
  __int64 v52; // x22
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 rarity; // x23
  __int64 v55; // x20
  __int64 v56; // x22
  int32_t v57; // w8
  __int64 v58; // x21
  __int64 v59; // x22
  struct ServantEntity_o *v60; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v62; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+50h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_418A04C & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_B2C35C(&ServantListViewManager_TypeInfo, v6);
    byte_418A04C = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.isNeedAdjustIconLabelScale = 0;
  this->fields.sortValue1 = -1LL;
  v10 = ((__int64 (__fastcall *)(ServantListViewItem_o *, ListViewSort_o *, void *))klass->vtable._5_IsMatchFilter.method)(
          this,
          sort,
          klass[1]._1.image);
  iconLabelInfo2 = 0LL;
  if ( (v10 & 1) != 0 )
  {
    if ( !this->fields.userSvtEntity
      || (iconLabelInfo2 = ServantListViewItem__GetIsEventUpValShow(this, sort, v9), (iconLabelInfo2 & 1) != 0) )
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
        sub_B2C434(iconLabelInfo2, v8);
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
            v25 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v66.fields.fakeValue = v25;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v64 = v66;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v64, 0LL);
            v26 = this->fields.userSvtEntity;
            this->fields.sortValue1 = iconLabelInfo2;
            if ( !v26 )
              goto LABEL_117;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v26->fields.createdAt, 0, 0, 0, 0LL);
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            v27 = this->fields.iconLabelInfo2;
            v28 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v27 )
              goto LABEL_117;
            IconLabelInfo__Set_27362128(v27, 2, v28, iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
            UserServantEntity__getTreasureDeviceInfo_21659764(
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
            v32 = 33;
            goto LABEL_77;
          case 5:
            v33 = this->fields.userSvtEntity;
            if ( !v33 )
              goto LABEL_117;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v33->fields.hp;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            adjustHp = v33->fields.adjustHp;
            hp = v33->fields.hp;
            v36 = 3;
            goto LABEL_53;
          case 6:
            v37 = this->fields.userSvtEntity;
            if ( !v37 )
              goto LABEL_117;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v37->fields.atk;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            adjustHp = v37->fields.adjustAtk;
            hp = v37->fields.atk;
            v36 = 5;
LABEL_53:
            IconLabelInfo__Set_27362128((IconLabelInfo_o *)iconLabelInfo2, v36, hp, adjustHp, 0, 0, 0, 0, 0LL);
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
            v42 = *(_QWORD *)&this->fields.friendship.fields.currentCryptoKey;
            v41 = *(_QWORD *)&this->fields.friendship.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v68.fields.currentCryptoKey = v42;
            *(_QWORD *)&v68.fields.fakeValue = v41;
            v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v68, 0LL);
            v44 = this->fields.iconLabelInfo1;
            v45 = v43;
            friendship = this->fields.friendship;
            this->fields.sortValue1 = v45;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(friendship, 0LL);
            if ( !v44 )
              goto LABEL_117;
            IconLabelInfo__Set_27362128(v44, 32, iconLabelInfo2, this->fields.friendshipMax, 0, 0, 0, 0, 0LL);
            goto LABEL_78;
          case 14:
            iconLabelInfo2 = this->fields.amountSortValue;
            if ( (iconLabelInfo2 & 0x8000000000000000LL) == 0 )
              goto LABEL_114;
            manager = sort->fields.manager;
            if ( manager
              && (v47 = *(&ServantListViewManager_TypeInfo->_2.bitflags2 + 1),
                  *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v47) )
            {
              if ( (ServantListViewManager_c *)manager->klass->_2.typeHierarchy[v47 - 1] == ServantListViewManager_TypeInfo )
                v48 = sort->fields.manager;
              else
                v48 = 0LL;
            }
            else
            {
              v48 = 0LL;
            }
            v59 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
            v58 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v72.fields.currentCryptoKey = v59;
            *(_QWORD *)&v72.fields.fakeValue = v58;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v72, 0LL);
            if ( !v48 )
              goto LABEL_117;
            iconLabelInfo2 = ServantListViewManager__GetAmountSortValue(
                               (ServantListViewManager_o *)v48,
                               iconLabelInfo2,
                               0LL);
            this->fields.amountSortValue = iconLabelInfo2;
LABEL_114:
            v60 = this->fields.servantEntity;
            if ( !v60 )
              goto LABEL_117;
            collectionNo = v60->fields.collectionNo;
            v62 = this->fields.userSvtEntity;
            this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                     + (iconLabelInfo2 << 48)) | collectionNo;
            if ( !v62 )
              goto LABEL_117;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            lv = v62->fields.lv;
            iconLabelInfo2 = (int64_t)v62;
LABEL_62:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !iconLabelInfo1 )
              goto LABEL_117;
            IconLabelInfo__Set_27362128(iconLabelInfo1, 2, lv, iconLabelInfo2, 0, 0, 0, 0, 0LL);
            goto LABEL_104;
          case 15:
            hpReinforceValue = this->fields.hpReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hpReinforceValue;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            nowMaxHpReinforceValue = this->fields.nowMaxHpReinforceValue;
            v32 = 44;
            goto LABEL_77;
          case 16:
            hpReinforceValue = this->fields.atkReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hpReinforceValue;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            nowMaxHpReinforceValue = this->fields.nowMaxAtkReinforceValue;
            v32 = 45;
LABEL_77:
            IconLabelInfo__Set_27362128(
              (IconLabelInfo_o *)iconLabelInfo2,
              v32,
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
            v49 = this->fields.iconLabelInfo2;
            v50 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v49 )
              goto LABEL_117;
            IconLabelInfo__Set_27362128(v49, 2, v50, iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
          v18 = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v66.fields.fakeValue = v18;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v65 = v66;
          iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v65, 0LL);
          v19 = this->fields.userCommandCodeEntity;
          this->fields.sortValue1 = iconLabelInfo2;
          if ( !v19 )
            goto LABEL_117;
          iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
          if ( !iconLabelInfo2 )
            goto LABEL_117;
          IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v19->fields.createdAt, 0, 0, 0, 0LL);
          break;
        case 14:
          amountSortValue = this->fields.amountSortValue;
          if ( (amountSortValue & 0x8000000000000000LL) != 0 )
          {
            v21 = sort->fields.manager;
            if ( v21
              && (v22 = *(&ServantListViewManager_TypeInfo->_2.bitflags2 + 1),
                  *(&v21->klass->_2.bitflags2 + 1) >= (unsigned int)v22) )
            {
              if ( (ServantListViewManager_c *)v21->klass->_2.typeHierarchy[v22 - 1] == ServantListViewManager_TypeInfo )
                v23 = sort->fields.manager;
              else
                v23 = 0LL;
            }
            else
            {
              v23 = 0LL;
            }
            v52 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
            v51 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v70.fields.currentCryptoKey = v52;
            *(_QWORD *)&v70.fields.fakeValue = v51;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v70, 0LL);
            if ( !v23 )
              goto LABEL_117;
            iconLabelInfo2 = ServantListViewManager__GetCommandCodeAmountSortValue(
                               (ServantListViewManager_o *)v23,
                               iconLabelInfo2,
                               0LL);
            amountSortValue = iconLabelInfo2;
            this->fields.amountSortValue = iconLabelInfo2;
          }
          commandCodeEntity = this->fields.commandCodeEntity;
          if ( !commandCodeEntity )
            goto LABEL_117;
          rarity = (unsigned int)this->fields.rarity;
          v56 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
          v55 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v71.fields.currentCryptoKey = v56;
          *(_QWORD *)&v71.fields.fakeValue = v55;
          v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v71, 0LL);
          iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
          v16 = ((rarity << 32) + (amountSortValue << 48)) | v57;
          goto LABEL_102;
        case 2:
          v16 = this->fields.rarity;
          iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
LABEL_102:
          this->fields.sortValue1 = v16;
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

  if ( (byte_418A052 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_418A052 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v6, 0LL);
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
  __int64 v3; // x1
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_418A053 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B2C35C(&StringLiteral_18395/*"error"*/, v3);
    byte_418A053 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18395/*"error"*/;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v10, 0LL);
  }
  else
  {
    v8 = -1;
  }
  return ServantEntity__getName(servantEntity, v8, -1, 0LL);
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

  if ( (byte_418A051 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_418A051 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v6, 0LL);
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