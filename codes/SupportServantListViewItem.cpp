void __fastcall SupportServantListViewItem___ctor(
        SupportServantListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userServantEntity,
        SupportServantData_array *supportServantData,
        int32_t nowDeckNum,
        int32_t classPos,
        EventUpValSetupInfo_o *eventSetupInfo,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        int32_t nowDeckId,
        System_Int32_array *fixMainDeckIds,
        System_Int32_array *fixEventDeckIds,
        bool isFixMainDeck,
        bool isFixEventDeck,
        const MethodInfo *method)
{
  IconLabelInfo_o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  IconLabelInfo_o *v28; // x28
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UserServantEntity_o **p_userServantEntity; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int64_t Instance; // x0
  __int64 v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct SupportServantData_o *v50; // x1
  struct SupportServantData_o **p_supportServantData; // x24
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct UserServantEntity_o *v58; // x8
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v60; // x27
  __int64 v61; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v62; // x26
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  ServantLimitMaster_o *v77; // x25
  struct UserServantEntity_o *v78; // x8
  int32_t v79; // w27
  UserServantEntity_o *v80; // x8
  __int128 v81; // q1
  UserServantCollectionMaster_o *v82; // x25
  int64_t v83; // x26
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  struct UserServantEntity_o *v102; // x8
  __int128 v103; // q0
  const MethodInfo *v104; // x2
  SupportServantData_o *v105; // x8
  int64_t v106; // x24
  UserServantEntity_o *v107; // x8
  UserServantEntity_o *v108; // x8
  UserServantEntity_o *v109; // x8
  ServantEntity_o *servantEntity; // x8
  const MethodInfo *v111; // x2
  bool v112; // w8
  int64_t Equip; // x0
  const MethodInfo *v114; // x5
  int64_t v115; // x23
  UserServantEntity_o *v116; // x24
  UserServantEntity_o *v117; // x8
  PartyOrganizationUtility_o *v118; // x23
  __int64 v119; // x25
  __int64 v120; // x26
  int32_t v121; // w25
  int32_t v122; // w26
  int v123; // w8
  bool v124; // w0
  UserServantEntity_o *v125; // x8
  __int128 v126; // q0
  __int64 v127; // x22
  bool v128; // zf
  bool v129; // w8
  UserServantEntity_o *v130; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  int v145; // w22
  BalanceConfig_c *v146; // x8
  int64_t v147; // x8
  struct ServantEntity_o *v148; // x9
  UserServantEntity_o *v149; // x8
  __int64 v150; // x21
  __int64 v151; // x22
  int32_t v152; // w8
  __int64 v153; // x0
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v156; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v159; // [xsp+70h] [xbp-90h]
  int32_t actMaxRarity; // [xsp+94h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+98h] [xbp-68h] BYREF
  int32_t friendshipRank[3]; // [xsp+A4h] [xbp-5Ch] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16

  if ( (byte_42B38F7 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&IconLabelInfo_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_42B38F7 = 1;
  }
  friendshipRank[0] = 0;
  skillName = 0LL;
  actMaxRarity = 0;
  v21 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0LL);
  this->fields.iconLabelInfo1 = v21;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v28, 0LL);
  this->fields.iconLabelInfo2 = v28;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  if ( !supportServantData )
    goto LABEL_76;
  if ( supportServantData->max_length <= nowDeckNum )
  {
    v153 = sub_B52A88(Instance);
    sub_B52A28(v153, 0LL);
  }
  v50 = supportServantData->m_Items[nowDeckNum];
  this->fields.supportServantData = v50;
  p_supportServantData = &this->fields.supportServantData;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.supportServantData,
    (System_Int32_array **)v50,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)eventSetupInfo,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v58 = this->fields.userServantEntity;
  if ( !v58 )
    goto LABEL_76;
  this->fields.svtId = v58->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v61 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v60 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v62 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v163.fields.currentCryptoKey = v61;
  *(_QWORD *)&v163.fields.fakeValue = v60;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v163, 0LL);
  if ( !v62 )
    goto LABEL_76;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v62,
                                       Instance,
                                       (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  this->fields.eventFriendPoints = friendPointCampaignEntityList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)friendPointCampaignEntityList,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  v77 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.svtId, 0LL);
  v78 = this->fields.userServantEntity;
  if ( !v78 )
    goto LABEL_76;
  v79 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v78->fields.limitCount, 0LL);
  if ( !v77 )
    goto LABEL_76;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v77, v79, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_76;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_76;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v80 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_76;
  v81 = *(_OWORD *)&v80->fields.userId.fields.fakeValue;
  v82 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v159.fields.currentCryptoKey = *(_OWORD *)&v80->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v159.fields.fakeValue = v81;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v158 = v159;
  v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v158, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.svtId, 0LL);
  if ( !v82 )
    goto LABEL_76;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v82, v83, Instance, 0LL);
  if ( !Instance )
    goto LABEL_76;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    friendshipRank,
    &this->fields.friendshipMax,
    0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank[0], 0LL);
  this->fields.isSame = 0;
  this->fields.equipUserServantEntity = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.equipUserServantEntity, 0LL, v84, v85, v86, v87, v88, v89);
  this->fields.equipServantEntity = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v90, v91, v92, v93, v94, v95);
  this->fields.equipIdList = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v96, v97, v98, v99, v100, v101);
  v102 = this->fields.userServantEntity;
  if ( !v102 )
    goto LABEL_76;
  v103 = *(_OWORD *)&v102->fields.id.fields.fakeValue;
  *(_OWORD *)&v157.fields.currentCryptoKey = *(_OWORD *)&v102->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v157.fields.fakeValue = v103;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v157, 0LL);
  v105 = *p_supportServantData;
  if ( !*p_supportServantData )
    goto LABEL_76;
  v106 = Instance;
  Instance = SupportServantData__getMember(v105, classPos, v104);
  v107 = this->fields.userServantEntity;
  this->fields.isBase = v106 == Instance;
  if ( !v107 )
    goto LABEL_76;
  Instance = UserServantEntity__IsLock(v107, 0LL);
  v108 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v108 )
    goto LABEL_76;
  Instance = UserServantEntity__IsChoice(v108, 0LL);
  v109 = this->fields.userServantEntity;
  this->fields.isChoice = Instance & 1;
  if ( !v109 )
    goto LABEL_76;
  Instance = UserServantEntity__IsEventJoin(v109, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !servantEntity )
    goto LABEL_76;
  v112 = ServantEntity__checkIsHeroineSvt(servantEntity, 0LL);
  Instance = (int64_t)this->fields.supportServantData;
  this->fields.isHeroine = v112;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  if ( !Instance )
    goto LABEL_76;
  Equip = SupportServantData__getEquip((SupportServantData_o *)Instance, classPos, v111);
  if ( Equip < 1 )
    goto LABEL_44;
  v115 = Equip;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_76;
  v116 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
           (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
           v115,
           (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v117 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_76;
  v118 = (PartyOrganizationUtility_o *)Instance;
  v120 = *(_QWORD *)&v117->fields.svtId.fields.currentCryptoKey;
  v119 = *(_QWORD *)&v117->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v164.fields.currentCryptoKey = v120;
  *(_QWORD *)&v164.fields.fakeValue = v119;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v164, 0LL);
  if ( !*p_userServantEntity
    || (v121 = Instance, Instance = UserServantEntity__getRarity(*p_userServantEntity, 0LL), !v116)
    || (v122 = Instance,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v116->fields.svtId, 0LL),
        !v118) )
  {
LABEL_76:
    sub_B52A5C(Instance, v43);
  }
  this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                   v118,
                                   &skillName,
                                   &actMaxRarity,
                                   v121,
                                   v122,
                                   Instance,
                                   -1,
                                   0LL);
LABEL_44:
  v123 = 0;
  this->fields.isUseInSet = 0;
  if ( isFixMainDeck )
  {
    v124 = SupportServantListViewItem__CheckUseInSet(
             this,
             &this->fields.useSet,
             fixMainDeckIds,
             nowDeckId,
             supportServantData,
             v114);
    v123 = v124;
    this->fields.isUseInSet = v124;
  }
  if ( !v123 && isFixEventDeck )
    this->fields.isUseInSet = SupportServantListViewItem__CheckUseInSet(
                                this,
                                &this->fields.useSet,
                                fixEventDeckIds,
                                nowDeckId,
                                supportServantData,
                                v114);
  this->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_76;
  v125 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_76;
  v126 = *(_OWORD *)&v125->fields.id.fields.fakeValue;
  v127 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v159.fields.currentCryptoKey = *(_OWORD *)&v125->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v159.fields.fakeValue = v126;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v156 = v159;
  v128 = v127 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v156, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  v129 = v128;
  this->fields.isPush = v129;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_76;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v130 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v130 )
    goto LABEL_76;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v130, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v132,
    v133,
    v134,
    v135,
    v136,
    v137);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_76;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v139,
    v140,
    v141,
    v142,
    v143,
    v144);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_76;
  v145 = *(_DWORD *)(Instance + 276);
  v146 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v146 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  this->fields.hpReinforceValue = v146->static_fields->StatusUpAdjustHp * v145;
  if ( !Instance )
    goto LABEL_76;
  this->fields.atkReinforceValue = v146->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_76;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_76;
  v147 = *(int *)(Instance + 48);
  v148 = this->fields.servantEntity;
  this->fields.priority = v147;
  this->fields.sortValue1B = v147;
  if ( !v148 )
    goto LABEL_76;
  v149 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_76;
  this->fields.sortValue2 = ((__int64)v148->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v149->fields.lv;
  v151 = *(_QWORD *)&v149->fields.svtId.fields.currentCryptoKey;
  v150 = *(_QWORD *)&v149->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v165.fields.currentCryptoKey = v151;
  *(_QWORD *)&v165.fields.fakeValue = v150;
  v152 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v165, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v152;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_76;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_76;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


bool __fastcall SupportServantListViewItem__CheckUseInSet(
        SupportServantListViewItem_o *this,
        int32_t *setNo,
        System_Int32_array *fixDeckIds,
        int32_t nowDeckId,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  SupportServantListViewItem_o *v9; // x23
  __int64 v10; // x8
  unsigned __int64 v11; // x27
  char *v12; // x22
  int v13; // w8
  int32_t *v14; // x22
  int v15; // t1
  int32_t i; // w24
  il2cpp_array_size_t v17; // w8
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x0
  int32_t svtId; // w19
  __int64 v20; // x25
  __int64 v21; // x26
  bool result; // w0
  __int64 v23; // x0
  int32_t *v24; // [xsp+0h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v9 = this;
  if ( (byte_42B38F8 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    this = (SupportServantListViewItem_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B38F8 = 1;
  }
  *setNo = 0;
  if ( !fixDeckIds )
LABEL_28:
    sub_B52A5C(this, setNo);
  v10 = *(_QWORD *)&fixDeckIds->max_length;
  if ( (int)v10 < 1 )
    return 0;
  v24 = setNo;
  v11 = 0LL;
  while ( 1 )
  {
    if ( v11 >= (unsigned int)v10 )
      goto LABEL_29;
    v12 = (char *)fixDeckIds + 4 * v11;
    v15 = *((_DWORD *)v12 + 8);
    v14 = (int32_t *)(v12 + 32);
    v13 = v15;
    if ( v15 != nowDeckId && v13 >= 1 )
      break;
LABEL_24:
    LODWORD(v10) = fixDeckIds->max_length;
    if ( (__int64)++v11 >= (int)v10 )
      return 0;
  }
  for ( i = 0; ; ++i )
  {
    this = (SupportServantListViewItem_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (SupportServantListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( i >= *(_DWORD *)(*(_QWORD *)&this->fields.friendshipMax + 164LL) )
      goto LABEL_24;
    if ( v11 >= fixDeckIds->max_length )
      goto LABEL_29;
    if ( !supportServantData )
      goto LABEL_28;
    v17 = *v14 - 1;
    if ( v17 >= supportServantData->max_length )
      goto LABEL_29;
    this = (SupportServantListViewItem_o *)supportServantData->m_Items[v17];
    if ( !this )
      goto LABEL_28;
    UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(
                                (SupportServantData_o *)this,
                                i,
                                (const MethodInfo *)fixDeckIds);
    if ( UserServantLeaderEntity )
    {
      svtId = UserServantLeaderEntity->fields.svtId;
      v21 = *(_QWORD *)&v9->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&v9->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v26.fields.currentCryptoKey = v21;
      *(_QWORD *)&v26.fields.fakeValue = v20;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                               v26,
                                               0LL);
      if ( svtId == (_DWORD)this )
        break;
    }
  }
  if ( (unsigned int)v11 >= fixDeckIds->max_length )
  {
LABEL_29:
    v23 = sub_B52A88(this);
    sub_B52A28(v23, 0LL);
  }
  result = 1;
  *v24 = *v14;
  return result;
}


void __fastcall SupportServantListViewItem__Finalize(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_Int64_array *__fastcall SupportServantListViewItem__GetEquipList(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIdList; // x8
  int64_t v4; // x0
  __int64 v5; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v6; // x8
  System_Int64_array *v7; // x20
  unsigned __int64 v8; // x21
  int64_t v9; // x22
  __int64 v10; // x23
  unsigned __int64 max_length; // x9
  _OWORD *v12; // x8
  __int128 v13; // q0
  __int64 v15; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-50h]

  if ( (byte_42B38FE & 1) == 0 )
  {
    sub_B52984(&long___TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B38FE = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0LL;
  v4 = sub_B5299C(long___TypeInfo, equipIdList->max_length);
  v6 = this->fields.equipIdList;
  if ( !v6 )
LABEL_14:
    sub_B52A5C(v4, v5);
  v7 = (System_Int64_array *)v4;
  v8 = 0LL;
  v9 = v4 + 32;
  v10 = 32LL;
  while ( 1 )
  {
    max_length = v6->max_length;
    if ( (__int64)v8 >= (int)max_length )
      return v7;
    if ( v8 >= max_length )
      goto LABEL_17;
    v12 = (_OWORD *)((char *)v6 + v10);
    v13 = v12[1];
    *(_OWORD *)&v17.fields.currentCryptoKey = *v12;
    *(_OWORD *)&v17.fields.fakeValue = v13;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v16 = v17;
    v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v16, 0LL);
    if ( v7 )
    {
      if ( v8 >= v7->max_length )
      {
LABEL_17:
        v15 = sub_B52A88(v4);
        sub_B52A28(v15, 0LL);
      }
      *(_QWORD *)(v9 + 8 * v8) = v4;
      v6 = this->fields.equipIdList;
      ++v8;
      v10 += 32LL;
      if ( v6 )
        continue;
    }
    goto LABEL_14;
  }
}


int32_t __fastcall SupportServantListViewItem__GetFriendPointBonus(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  SupportServantListViewItem_o *v2; // x19
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  int32_t v4; // w20
  __int64 v5; // x22
  int max_length; // w9
  unsigned int v7; // w25
  __int64 v8; // x8
  System_Int32_array *v9; // x21
  int32_t SvtId; // w0
  __int64 v11; // x9
  __int64 v12; // x10
  _BOOL4 v13; // w10
  int32_t v14; // w21
  __int64 v16; // x0

  v2 = this;
  if ( (byte_42B3905 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_IndexOf_int___);
    this = (SupportServantListViewItem_o *)sub_B52984(&System_Math_TypeInfo);
    byte_42B3905 = 1;
  }
  eventFriendPoints = v2->fields.eventFriendPoints;
  if ( !eventFriendPoints )
    return -1;
  v4 = -1;
  v5 = 4LL;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    v7 = v5 - 4;
    if ( (int)v5 - 4 >= max_length )
      return v4;
    if ( v7 >= max_length )
      goto LABEL_23;
    v8 = *((_QWORD *)&eventFriendPoints->obj.klass + v5);
    if ( v8 )
    {
      v9 = *(System_Int32_array **)(v8 + 40);
      SvtId = SupportServantListViewItem__get_SvtId(v2, method);
      this = (SupportServantListViewItem_o *)System_Array__IndexOf_int_(
                                               v9,
                                               SvtId,
                                               (const MethodInfo_201BBC8 *)Method_System_Array_IndexOf_int___);
      eventFriendPoints = v2->fields.eventFriendPoints;
      if ( eventFriendPoints )
      {
        if ( v7 >= eventFriendPoints->max_length )
        {
LABEL_23:
          v16 = sub_B52A88(this);
          sub_B52A28(v16, 0LL);
        }
        v11 = *((_QWORD *)&eventFriendPoints->obj.klass + v5);
        if ( v11 )
        {
          v12 = *(_QWORD *)(v11 + 40);
          if ( v12 )
            v13 = *(_DWORD *)(v12 + 24) == 0;
          else
            v13 = 1;
          if ( v13 || (int)this >= 0 )
          {
            v14 = *(_DWORD *)(v11 + 48);
            if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Math_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            }
            this = (SupportServantListViewItem_o *)System_Math__Max_45036604(v4, v14, 0LL);
            eventFriendPoints = v2->fields.eventFriendPoints;
            v4 = (int)this;
          }
          ++v5;
          if ( eventFriendPoints )
            continue;
        }
      }
    }
    sub_B52A5C(this, method);
  }
}


bool __fastcall SupportServantListViewItem__GetNpInfo(
        SupportServantListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  TreasureDvcInfo_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42B3904 & 1) == 0 )
  {
    sub_B52984(&TreasureDvcInfo_TypeInfo);
    byte_42B3904 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_B52A54(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_B52920((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  return 0;
}


bool __fastcall SupportServantListViewItem__IsMatchClass(
        SupportServantListViewItem_o *this,
        int32_t classType,
        const MethodInfo *method)
{
  ServantClassMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1

  if ( (byte_42B38FB & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    byte_42B38FB = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( classType == 8 )
  {
    if ( Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = (ServantClassMaster_o *)ServantClassMaster__getExtraClassIdList(
                                                                 Master_WarQuestSelectionMaster,
                                                                 0LL);
      if ( Master_WarQuestSelectionMaster )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
                 this->fields.classId,
                 (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_12:
    sub_B52A5C(Master_WarQuestSelectionMaster, v6);
  }
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  return ServantClassMaster__getSupportGroupType(Master_WarQuestSelectionMaster, this->fields.classId, 0LL) == classType;
}


bool __fastcall SupportServantListViewItem__IsMatchServantFilter(
        SupportServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ListViewSort_o *v3; // x19
  SupportServantListViewItem_o *v4; // x20
  unsigned int *manager; // x8
  __int64 v6; // x11
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  UserServantEntity_o *userServantEntity; // x21
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x21
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  FilterKindList_c *v19; // x0
  FilterKindList_c *v20; // x0
  ListViewSort_FilterKind_array *v21; // x0
  FilterKindList_c *v22; // x0
  ListViewSort_FilterKind_array *v23; // x0
  UserServantEntity_o *v24; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v26; // x8
  System_Int32_array **SkillCategoryIdList; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **TreasureDeviceCategoryIdList; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v42; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v44; // w0
  __int64 v45; // x0

  v3 = sort;
  v4 = this;
  if ( (byte_42B38FC & 1) == 0 )
  {
    sub_B52984(&FilterKindList_TypeInfo);
    sub_B52984(&ListViewSort_FilterKind___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_B52984(&ServantEventBonusFilterController_TypeInfo);
    this = (SupportServantListViewItem_o *)sub_B52984(&SupportServantListViewManager_TypeInfo);
    byte_42B38FC = 1;
  }
  if ( !v3 )
    goto LABEL_91;
  manager = (unsigned int *)v3->fields.manager;
  if ( !manager )
    goto LABEL_91;
  v6 = *(&SupportServantListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)manager + 300LL) < (unsigned int)v6
    || *(SupportServantListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * v6 - 8) != SupportServantListViewManager_TypeInfo )
  {
    goto LABEL_91;
  }
  if ( *(SupportServantListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL)
                                           + 8LL * *(&SupportServantListViewManager_TypeInfo->_2.bitflags2 + 1)
                                           - 8) != SupportServantListViewManager_TypeInfo )
    manager = 0LL;
  sort = (ListViewSort_o *)manager[104];
  if ( (unsigned int)((_DWORD)sort - 1) >= 7 )
  {
    if ( (_DWORD)sort == 8 )
    {
      if ( !SupportServantListViewItem__IsMatchClass(v4, 8, method) )
        return 0;
      v15 = FilterKindList_TypeInfo;
      if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v15 = FilterKindList_TypeInfo;
      }
      this = (SupportServantListViewItem_o *)v15->static_fields->ClassGroupFilterKindList;
      if ( !this )
LABEL_91:
        sub_B52A5C(this, sort);
      v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                               (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                               (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( ListViewSort__IsUnSelectedAllTargetFilters(v3, v16, 0LL) )
      {
        v17 = FilterKindList_TypeInfo;
        if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v17 = FilterKindList_TypeInfo;
        }
        this = (SupportServantListViewItem_o *)v17->static_fields->ClassExtra1InShielderFilterKindList;
        if ( !this )
          goto LABEL_91;
        v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                 (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                                 (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v18, 0LL) )
        {
LABEL_69:
          if ( !ListViewSort__IsMatchClassFilter(v3, v4->fields.servantEntity, 0LL) )
            return 0;
          goto LABEL_11;
        }
        v19 = FilterKindList_TypeInfo;
        if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v19 = FilterKindList_TypeInfo;
        }
        this = (SupportServantListViewItem_o *)v19->static_fields->ClassExtra2FilterKindList;
        if ( !this )
          goto LABEL_91;
LABEL_68:
        v23 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                 (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                                 (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( ListViewSort__IsUnSelectedAllTargetFilters(v3, v23, 0LL) )
          goto LABEL_11;
        goto LABEL_69;
      }
    }
    else
    {
      v20 = FilterKindList_TypeInfo;
      if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v20 = FilterKindList_TypeInfo;
      }
      this = (SupportServantListViewItem_o *)v20->static_fields->ClassGroupFilterKindList;
      if ( !this )
        goto LABEL_91;
      v21 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                               (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                               (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( ListViewSort__IsUnSelectedAllTargetFilters(v3, v21, 0LL) )
      {
        v22 = FilterKindList_TypeInfo;
        if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v22 = FilterKindList_TypeInfo;
        }
        this = (SupportServantListViewItem_o *)v22->static_fields->ClassFilterKindList;
        if ( !this )
          goto LABEL_91;
        goto LABEL_68;
      }
    }
    if ( !ListViewSort__IsMatchClassGroupFilter(v3, v4->fields.servantEntity, 0LL) )
      return 0;
    goto LABEL_11;
  }
  if ( !SupportServantListViewItem__IsMatchClass(v4, (int32_t)sort, method) )
    return 0;
LABEL_11:
  v7 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v7->static_fields->NpTypeFilterKindList;
  if ( !this )
    goto LABEL_91;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                          (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v8, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(v3, v4->fields.userServantEntity, 0LL) )
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
  this = (SupportServantListViewItem_o *)v9->static_fields->NpEffectFilterKindList;
  if ( !this )
    goto LABEL_91;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v10, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(v3, v4->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(v3, -1, 0LL) )
  {
    userServantEntity = v4->fields.userServantEntity;
    if ( (BYTE3(ServantEventBonusFilterController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    }
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, v3, -1, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(v3, 0LL) )
  {
    v24 = v4->fields.userServantEntity;
    if ( v24 )
    {
      dispLimitCount = v4->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v24, 0, 0LL) )
      {
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_91;
        this = (SupportServantListViewItem_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0LL);
        v26 = v4->fields.userServantEntity;
        v4->fields.dispLimitCount = (int)this;
        if ( !v26 )
          goto LABEL_91;
        SkillCategoryIdList = (System_Int32_array **)UserServantEntity__GetSkillCategoryIdList(v26, -1, 0LL);
        v4->fields.skillCategoryIdList = (struct System_Int32_array *)SkillCategoryIdList;
        sub_B52920(
          (BattleServantConfConponent_o *)&v4->fields.skillCategoryIdList,
          SkillCategoryIdList,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_91;
        TreasureDeviceCategoryIdList = (System_Int32_array **)UserServantEntity__GetTreasureDeviceCategoryIdList(
                                                                (UserServantEntity_o *)this,
                                                                0,
                                                                0LL);
        v4->fields.tdCategoryIdList = (struct System_Int32_array *)TreasureDeviceCategoryIdList;
        sub_B52920(
          (BattleServantConfConponent_o *)&v4->fields.tdCategoryIdList,
          TreasureDeviceCategoryIdList,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
      }
    }
    this = (SupportServantListViewItem_o *)sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_91;
    if ( !this->fields.sortIndex )
      goto LABEL_92;
    LODWORD(this->fields.sortValue0) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     v3,
                                     (ListViewSort_FilterKind_array *)this,
                                     0LL);
    this = (SupportServantListViewItem_o *)sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_91;
    if ( !this->fields.sortIndex )
    {
LABEL_92:
      v45 = sub_B52A88(this);
      sub_B52A28(v45, 0LL);
    }
    LODWORD(this->fields.sortValue0) = 51;
    v42 = ListViewSort__IsUnSelectedAllTargetFilters(v3, (ListViewSort_FilterKind_array *)this, 0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              v4->fields.tdCategoryIdList,
                              v3,
                              0LL);
    v44 = ServantEquipEffectFilterController__IsMatchEffectCategory(v4->fields.skillCategoryIdList, v3, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v42) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v44 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v44 )
    {
      return 0;
    }
  }
  this = (SupportServantListViewItem_o *)sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_91;
  if ( !this->fields.sortIndex )
    goto LABEL_92;
  LODWORD(this->fields.sortValue0) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, (ListViewSort_FilterKind_array *)this, 0LL)
    && ListViewSort__GetFilter(v3, 39, 0LL)
    && v4->fields.isSwapChoice == v4->fields.isChoice )
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
  this = (SupportServantListViewItem_o *)v12->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_91;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(v3, v13, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(v3, v13, 0LL)
      || ListViewSort__IsMatchRarityFilter(v3, v4->fields.rarity, 0LL);
}


void __fastcall SupportServantListViewItem__Modify(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_userServantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // t1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  BattleServantConfConponent_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v9; // x20
  System_Int32_array **Entity; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-30h]

  if ( (byte_42B38F9 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B38F9 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  p_userServantEntity = (BattleServantConfConponent_o *)&this->fields.userServantEntity;
  if ( userServantEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
    klass = p_userServantEntity->klass;
    if ( !p_userServantEntity->klass )
      goto LABEL_12;
    byval_arg = klass->_1.byval_arg;
    v9 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
    *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v18.fields.fakeValue = byval_arg;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v17 = v18;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v17, 0LL);
    if ( !v9 )
LABEL_12:
      sub_B52A5C(Instance, v6);
    Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      v9,
                                      (int64_t)Instance,
                                      (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_userServantEntity->klass = (BattleServantConfConponent_c *)Entity;
    sub_B52920(p_userServantEntity, Entity, v11, v12, v13, v14, v15, v16);
  }
}


void __fastcall SupportServantListViewItem__ModifyChoiceItem(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B52A5C(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userServantEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall SupportServantListViewItem__ModifyItem(
        SupportServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UserServantEntity_o **p_userServantEntity; // x20
  __int64 v10; // x1

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_userServantEntity )
    sub_B52A5C(0LL, v10);
  this->fields.isEventJoin = UserServantEntity__IsEventJoin(*p_userServantEntity, 0LL);
}


void __fastcall SupportServantListViewItem__ModifyLockItem(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B52A5C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall SupportServantListViewItem__Modify_31836296(
        SupportServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  SupportServantListViewItem__ModifyItem(this, userServantEntity, method);
  SupportServantListViewItem__ModifyLockItem(this, v4);
  SupportServantListViewItem__ModifyChoiceItem(this, v5);
}


void __fastcall SupportServantListViewItem__ResetEventCampaign(
        SupportServantListViewItem_o *this,
        EventCampaignEntity_array *friendPointCampaigns,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.eventFriendPoints = friendPointCampaigns;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)friendPointCampaigns,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SupportServantListViewItem__SetEquipStatus(
        SupportServantListViewItem_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIdList,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_equipUserServantEntity; // x20
  BattleServantConfConponent_o *p_equipServantEntity; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  BattleServantConfConponent_o *p_equipIdList; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int64_t Instance; // x0
  Il2CppObject *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  Il2CppObject *v33; // x22
  System_Int32_array **v34; // x1
  BalanceConfig_c *v35; // x0
  __int64 v36; // x1
  __int128 v37; // q1
  BattleServantConfConponent_c *klass; // x8
  Il2CppType this_arg; // q0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v40; // x21
  System_Int32_array **Entity; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  BattleServantConfConponent_c *v48; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  BattleServantConfConponent_c *v51; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v52; // x20
  Il2CppClass *v53; // x21
  Il2CppClass *v54; // x22
  System_Int32_array **v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+40h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_42B38FA & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B38FA = 1;
  }
  this->fields.equipUserServantEntity = 0LL;
  p_equipUserServantEntity = (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.equipServantEntity = 0LL;
  p_equipServantEntity = (BattleServantConfConponent_o *)&this->fields.equipServantEntity;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v12, v13, v14, v15, v16, v17);
  this->fields.equipIdList = 0LL;
  p_equipIdList = (BattleServantConfConponent_o *)&this->fields.equipIdList;
  sub_B52920(p_equipIdList, 0LL, v19, v20, v21, v22, v23, v24);
  if ( !p_equipIdList->monitor )
    return;
  if ( equipIdList )
  {
    if ( (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *)p_equipIdList->klass == equipIdList )
      goto LABEL_15;
    v26 = System_Array__Clone((System_Array_o *)equipIdList, 0LL);
    if ( !v26 )
    {
      v34 = 0LL;
      goto LABEL_14;
    }
    v33 = v26;
    v34 = (System_Int32_array **)sub_B52A44(v26, CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo);
    if ( v34 )
      goto LABEL_14;
    sub_B52D50(v33);
  }
  v35 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v35 = BalanceConfig_TypeInfo;
  }
  v34 = (System_Int32_array **)sub_B5299C(
                                 CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo,
                                 (unsigned int)v35->static_fields->SvtEquipMax);
LABEL_14:
  p_equipIdList->klass = (BattleServantConfConponent_c *)v34;
  sub_B52920(p_equipIdList, v34, v27, v28, v29, v30, v31, v32);
  equipIdList = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *)p_equipIdList->klass;
  if ( !p_equipIdList->klass )
    goto LABEL_40;
LABEL_15:
  if ( !equipIdList->max_length )
    goto LABEL_41;
  v37 = *(_OWORD *)&equipIdList->m_Items[0].fields.fakeValue;
  *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&equipIdList->m_Items[0].fields.currentCryptoKey;
  *(_OWORD *)&v65.fields.fakeValue = v37;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v64 = v65;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v64, 0LL) < 1 )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  klass = p_equipIdList->klass;
  if ( !p_equipIdList->klass )
    goto LABEL_40;
  if ( !LODWORD(klass->_1.namespaze) )
  {
LABEL_41:
    v62 = sub_B52A88(Instance);
    sub_B52A28(v62, 0LL);
  }
  this_arg = klass->_1.this_arg;
  v40 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  *(Il2CppType *)&v65.fields.currentCryptoKey = klass->_1.byval_arg;
  *(Il2CppType *)&v65.fields.fakeValue = this_arg;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v63 = v65;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v63, 0LL);
  if ( !v40 )
    goto LABEL_40;
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    v40,
                                    Instance,
                                    (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_equipUserServantEntity->klass = (BattleServantConfConponent_c *)Entity;
  sub_B52920(p_equipUserServantEntity, Entity, v42, v43, v44, v45, v46, v47);
  v48 = p_equipUserServantEntity->klass;
  if ( p_equipUserServantEntity->klass )
  {
    declaringType = v48->_1.declaringType;
    parent = v48->_1.parent;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v66.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v66.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v66, 0LL) >= 1 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
        v51 = p_equipUserServantEntity->klass;
        if ( p_equipUserServantEntity->klass )
        {
          v52 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
          v54 = v51->_1.declaringType;
          v53 = v51->_1.parent;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v67.fields.currentCryptoKey = v54;
          *(_QWORD *)&v67.fields.fakeValue = v53;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v67, 0LL);
          if ( v52 )
          {
            v55 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v52,
                                           Instance,
                                           (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            p_equipServantEntity->klass = (BattleServantConfConponent_c *)v55;
            sub_B52920(p_equipServantEntity, v55, v56, v57, v58, v59, v60, v61);
            return;
          }
        }
      }
LABEL_40:
      sub_B52A5C(Instance, v36);
    }
  }
}


void __fastcall SupportServantListViewItem__SetEquipUserServantId(
        SupportServantListViewItem_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIdList; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v6; // x0
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  __int128 v9; // [xsp+10h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42B38FF & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B38FF = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v10, userSvtId, 0LL);
    v9 = *(_OWORD *)&v10.fields.fakeValue;
    if ( !equipIdList->max_length )
    {
      v8 = sub_B52A88(v6);
      sub_B52A28(v8, 0LL);
    }
    *(_OWORD *)&equipIdList->m_Items[0].fields.currentCryptoKey = *(_OWORD *)&v10.fields.currentCryptoKey;
    *(_OWORD *)&equipIdList->m_Items[0].fields.fakeValue = v9;
    SupportServantListViewItem__SetEquipStatus(this, this->fields.equipIdList, v7);
  }
}


bool __fastcall SupportServantListViewItem__SetSortValue(
        SupportServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  SupportServantListViewItem_o *v4; // x19
  int32_t bonusKind2; // w8
  int32_t *v6; // x8
  int32_t *p_bonusKind2Id; // x8
  int32_t v8; // w2
  bool IsEnableServant; // w0
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isChoice; // w9
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v13; // q1
  struct UserServantEntity_o *v14; // x8
  const MethodInfo *v15; // x2
  int64_t rarity; // x8
  int64_t hpReinforceValue; // x2
  int32_t adjustAtk; // w3
  int32_t v19; // w1
  struct UserServantEntity_o *v20; // x8
  struct UserServantEntity_o *equipUserServantEntity; // x9
  int64_t hp; // x10
  int32_t v23; // w4
  int32_t adjustHp; // w3
  int32_t v25; // w2
  int32_t v26; // w1
  struct UserServantEntity_o *v27; // x8
  struct UserServantEntity_o *v28; // x9
  int64_t atk; // x10
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *iconLabelInfo2; // x19
  __int64 v32; // x20
  __int64 v33; // x21
  int32_t v34; // w0
  SupportServantListViewItem_o *iconLabelInfo1; // x20
  int64_t v36; // x9
  struct ListViewManager_o *manager; // x8
  __int64 v38; // x11
  struct ListViewManager_o *v39; // x20
  int32_t eventFriendPoints; // w20
  __int64 v41; // x21
  __int64 v42; // x22
  const MethodInfo *v43; // x2
  struct ServantEntity_o *v44; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v46; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+30h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  v4 = this;
  if ( (byte_42B38FD & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (SupportServantListViewItem_o *)sub_B52984(&SupportServantListViewManager_TypeInfo);
    byte_42B38FD = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  if ( !sort )
    goto LABEL_97;
  if ( sort->fields.isBonusKind )
  {
    if ( v4->fields.isBase )
      goto LABEL_24;
    bonusKind2 = sort->fields.bonusKind2;
    if ( bonusKind2 == 2 )
    {
      if ( v4->fields.bonusKind == 2 )
      {
        p_bonusKind2Id = &sort->fields.bonusKind2Id;
        if ( v4->fields.bonusKindId == sort->fields.bonusKind2Id )
          goto LABEL_13;
      }
      else
      {
        p_bonusKind2Id = &sort->fields.bonusKind2Id;
      }
      v4->fields.bonusKind = 2;
      v4->fields.bonusKindId = *p_bonusKind2Id;
      this = (SupportServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_97;
      this = (SupportServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
      if ( !this )
        goto LABEL_97;
      IsEnableServant = ServantFilterMaster__IsEnableServant(
                          (ServantFilterMaster_o *)this,
                          v4->fields.svtId,
                          v4->fields.bonusKindId,
                          0LL);
    }
    else
    {
      if ( bonusKind2 != 1 )
        goto LABEL_36;
      if ( v4->fields.bonusKind == 1 )
      {
        v6 = &sort->fields.bonusKind2Id;
        if ( v4->fields.bonusKindId == sort->fields.bonusKind2Id )
        {
LABEL_13:
          if ( !v4->fields.isEventUpVal )
            goto LABEL_41;
          goto LABEL_23;
        }
      }
      else
      {
        v6 = &sort->fields.bonusKind2Id;
      }
      v4->fields.bonusKind = 1;
      v8 = *v6;
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      v4->fields.bonusKindId = *v6;
      if ( !this )
        goto LABEL_97;
      IsEnableServant = UserServantEntity__getEventUpVal_21508832(
                          (UserServantEntity_o *)this,
                          v4->fields.eventSetupInfo,
                          v8,
                          0LL);
    }
    v4->fields.isEventUpVal = IsEnableServant;
    if ( !IsEnableServant )
      goto LABEL_41;
  }
LABEL_23:
  if ( v4->fields.isBase )
    goto LABEL_24;
LABEL_36:
  this = (SupportServantListViewItem_o *)v4->fields.servantEntity;
  if ( !this )
    goto LABEL_97;
  if ( !ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0LL) )
  {
    this = (SupportServantListViewItem_o *)v4->fields.servantEntity;
    if ( !this )
      goto LABEL_97;
    if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0LL)
      || !SupportServantListViewItem__IsMatchServantFilter(v4, sort, v15) )
    {
      goto LABEL_41;
    }
LABEL_24:
    isSwapChoice = v4->fields.isSwapChoice;
    isChoice = v4->fields.isChoice;
    v4->fields.sortValue0 = 0LL;
    if ( isSwapChoice != isChoice && sort->fields.isChoiceSort )
      v4->fields.sortValue0 = 10LL;
    this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo2;
    if ( !this )
      goto LABEL_97;
    IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
    this = (SupportServantListViewItem_o *)(&dword_0 + 1);
    switch ( sort->fields.sortKind )
    {
      case 1:
        userServantEntity = v4->fields.userServantEntity;
        if ( !userServantEntity )
          goto LABEL_97;
        v13 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v49.fields.fakeValue = v13;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v48 = v49;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(
                                                 &v48,
                                                 0LL);
        v14 = v4->fields.userServantEntity;
        v4->fields.sortValue1 = (int64_t)this;
        if ( !v14 )
          goto LABEL_97;
        this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        if ( !this )
          goto LABEL_97;
        IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v14->fields.createdAt, 0, 0, 0, 0LL);
        goto LABEL_77;
      case 2:
        rarity = v4->fields.rarity;
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        goto LABEL_61;
      case 3:
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_97;
        v4->fields.sortValue1 = SLODWORD(this->fields.eventFriendPoints);
        goto LABEL_62;
      case 4:
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_97;
        UserServantEntity__getTreasureDeviceInfo_21516452((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
        LODWORD(hpReinforceValue) = tdMaxLv[1];
        this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = tdMaxLv[1];
        if ( !this )
          goto LABEL_97;
        adjustAtk = tdMaxLv[0];
        v19 = 33;
        break;
      case 5:
        v20 = v4->fields.userServantEntity;
        if ( !v20 )
          goto LABEL_97;
        equipUserServantEntity = v4->fields.equipUserServantEntity;
        hp = v20->fields.hp;
        if ( equipUserServantEntity )
        {
          this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = equipUserServantEntity->fields.hp + (int)hp;
          if ( !this )
            goto LABEL_97;
          v23 = equipUserServantEntity->fields.hp;
          adjustHp = v20->fields.adjustHp;
          v25 = v20->fields.hp;
          v26 = 46;
LABEL_56:
          IconLabelInfo__Set_28274368((IconLabelInfo_o *)this, v26, v25, adjustHp, v23, 0, 0, 0, 0LL);
LABEL_77:
          this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
          if ( this )
          {
            iconLabelInfo2 = v4->fields.iconLabelInfo2;
LABEL_79:
            eventFriendPoints = (int32_t)this->fields.eventFriendPoints;
LABEL_80:
            this = (SupportServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
            if ( iconLabelInfo2 )
            {
              IconLabelInfo__Set_28274368(iconLabelInfo2, 2, eventFriendPoints, (int32_t)this, 0, 0, 0, 0, 0LL);
              LOBYTE(this) = 1;
              return (char)this;
            }
          }
LABEL_97:
          sub_B52A5C(this, sort);
        }
        this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = hp;
        if ( !this )
          goto LABEL_97;
        adjustAtk = v20->fields.adjustHp;
        LODWORD(hpReinforceValue) = v20->fields.hp;
        v19 = 3;
        break;
      case 6:
        v27 = v4->fields.userServantEntity;
        if ( !v27 )
          goto LABEL_97;
        v28 = v4->fields.equipUserServantEntity;
        atk = v27->fields.atk;
        if ( v28 )
        {
          this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = v28->fields.atk + (int)atk;
          if ( !this )
            goto LABEL_97;
          v23 = v28->fields.atk;
          adjustHp = v27->fields.adjustAtk;
          v25 = v27->fields.atk;
          v26 = 47;
          goto LABEL_56;
        }
        this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = atk;
        if ( !this )
          goto LABEL_97;
        adjustAtk = v27->fields.adjustAtk;
        LODWORD(hpReinforceValue) = v27->fields.atk;
        v19 = 5;
        break;
      case 7:
        servantEntity = v4->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_97;
        this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = servantEntity->fields.cost;
        if ( !this )
          goto LABEL_97;
        LODWORD(hpReinforceValue) = servantEntity->fields.cost;
        v19 = 7;
        adjustAtk = 0;
        break;
      case 8:
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        rarity = -v4->fields.priority;
LABEL_61:
        v4->fields.sortValue1 = rarity;
        if ( !this )
          goto LABEL_97;
LABEL_62:
        iconLabelInfo2 = v4->fields.iconLabelInfo1;
        goto LABEL_79;
      case 0xA:
        v33 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
        v32 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v51.fields.currentCryptoKey = v33;
        *(_QWORD *)&v51.fields.fakeValue = v32;
        v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v51, 0LL);
        iconLabelInfo1 = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v36 = v34;
        friendship = v4->fields.friendship;
        v4->fields.sortValue1 = v36;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                 friendship,
                                                 0LL);
        if ( !iconLabelInfo1 )
          goto LABEL_97;
        adjustAtk = v4->fields.friendshipMax;
        LODWORD(hpReinforceValue) = (_DWORD)this;
        v19 = 32;
        this = iconLabelInfo1;
        break;
      case 0xE:
        this = (SupportServantListViewItem_o *)v4->fields.amountSortValue;
        if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
          goto LABEL_94;
        manager = sort->fields.manager;
        if ( manager
          && (v38 = *(&SupportServantListViewManager_TypeInfo->_2.bitflags2 + 1),
              *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v38) )
        {
          if ( (SupportServantListViewManager_c *)manager->klass->_2.typeHierarchy[v38 - 1] == SupportServantListViewManager_TypeInfo )
            v39 = sort->fields.manager;
          else
            v39 = 0LL;
        }
        else
        {
          v39 = 0LL;
        }
        v42 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
        v41 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v53.fields.currentCryptoKey = v42;
        *(_QWORD *)&v53.fields.fakeValue = v41;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                 v53,
                                                 0LL);
        if ( !v39 )
          goto LABEL_97;
        this = (SupportServantListViewItem_o *)SupportServantListViewManager__GetAmountSortValue(
                                                 (SupportServantListViewManager_o *)v39,
                                                 (int32_t)this,
                                                 v43);
        v4->fields.amountSortValue = (int64_t)this;
LABEL_94:
        v44 = v4->fields.servantEntity;
        if ( !v44 )
          goto LABEL_97;
        collectionNo = v44->fields.collectionNo;
        v46 = v4->fields.userServantEntity;
        v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
        if ( !v46 )
          goto LABEL_97;
        iconLabelInfo2 = v4->fields.iconLabelInfo1;
        eventFriendPoints = v46->fields.lv;
        this = (SupportServantListViewItem_o *)v46;
        goto LABEL_80;
      case 0xF:
        hpReinforceValue = v4->fields.hpReinforceValue;
        this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = hpReinforceValue;
        if ( !this )
          goto LABEL_97;
        adjustAtk = v4->fields.nowMaxHpReinforceValue;
        v19 = 44;
        break;
      case 0x10:
        hpReinforceValue = v4->fields.atkReinforceValue;
        this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = hpReinforceValue;
        if ( !this )
          goto LABEL_97;
        adjustAtk = v4->fields.nowMaxAtkReinforceValue;
        v19 = 45;
        break;
      default:
        return (char)this;
    }
    IconLabelInfo__Set_28274368((IconLabelInfo_o *)this, v19, hpReinforceValue, adjustAtk, 0, 0, 0, 0, 0LL);
    goto LABEL_77;
  }
LABEL_41:
  LOBYTE(this) = 0;
  return (char)this;
}


bool __fastcall SupportServantListViewItem__SwapChoice(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall SupportServantListViewItem__SwapLock(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


int32_t __fastcall SupportServantListViewItem__get_ClassId(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.classId;
}


int32_t __fastcall SupportServantListViewItem__get_Cost(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_B52A5C(this, method);
  return servantEntity->fields.cost;
}


int32_t __fastcall SupportServantListViewItem__get_EquipCost(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *equipServantEntity; // x8

  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity )
    return equipServantEntity->fields.cost;
  else
    return 0;
}


IconLabelInfo_o *__fastcall SupportServantListViewItem__get_IconInfo1(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall SupportServantListViewItem__get_IconInfo2(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall SupportServantListViewItem__get_IsBase(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBase;
}


bool __fastcall SupportServantListViewItem__get_IsCanNotSelectHeroine(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B3902 & 1) == 0 )
  {
    sub_B52984(&TutorialFlag_TypeInfo);
    byte_42B3902 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_29217932(126, 0LL);
}


bool __fastcall SupportServantListViewItem__get_IsChoice(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall SupportServantListViewItem__get_IsDispChoice(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice ^ this->fields.isChoice;
}


bool __fastcall SupportServantListViewItem__get_IsDispLock(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapLock ^ this->fields.isLock;
}


bool __fastcall SupportServantListViewItem__get_IsEnabled(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEnabled;
}


bool __fastcall SupportServantListViewItem__get_IsEquip(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.equipServantEntity != 0LL;
}


bool __fastcall SupportServantListViewItem__get_IsEventJoin(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isEventJoin;
}


bool __fastcall SupportServantListViewItem__get_IsInvalidRarity(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isInvalidRarity;
}


bool __fastcall SupportServantListViewItem__get_IsLock(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall SupportServantListViewItem__get_IsPush(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool __fastcall SupportServantListViewItem__get_IsPushMode(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isPushMode;
}


bool __fastcall SupportServantListViewItem__get_IsSame(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSame;
}


bool __fastcall SupportServantListViewItem__get_IsSwapChoice(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall SupportServantListViewItem__get_IsSwapLock(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool __fastcall SupportServantListViewItem__get_IsUseInSet(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUseInSet;
}


bool __fastcall SupportServantListViewItem__get_IsUseServant(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  SupportServantListViewItem_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  SupportServantData_o *supportServantData; // x19
  const MethodInfo *v6; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-30h]

  v2 = this;
  if ( (byte_42B3903 & 1) == 0 )
  {
    this = (SupportServantListViewItem_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B3903 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_9;
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  supportServantData = v2->fields.supportServantData;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v8 = v9;
  this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v8, 0LL);
  if ( !supportServantData )
LABEL_9:
    sub_B52A5C(this, method);
  return SupportServantData__isUseServant(supportServantData, (int64_t)this, v6);
}


System_String_o *__fastcall SupportServantListViewItem__get_NameText(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_42B3901 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&StringLiteral_18529/*"error"*/);
    byte_42B3901 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18529/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v9, 0LL);
  }
  else
  {
    v7 = -1;
  }
  return ServantEntity__getName(servantEntity, v7, -1, 0LL);
}


int32_t __fastcall SupportServantListViewItem__get_Rarity(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rarity;
}


ServantEntity_o *__fastcall SupportServantListViewItem__get_Servant(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t __fastcall SupportServantListViewItem__get_SvtId(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_42B3900 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B3900 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v6, 0LL);
}


int32_t __fastcall SupportServantListViewItem__get_UseSet(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.useSet;
}


UserServantEntity_o *__fastcall SupportServantListViewItem__get_UserServant(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


void __fastcall SupportServantListViewItem__set_IsEnabled(
        SupportServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isEnabled = value;
}


void __fastcall SupportServantListViewItem__set_IsPush(
        SupportServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isPush = value;
}


void __fastcall SupportServantListViewItem__set_IsPushMode(
        SupportServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isPushMode = value;
}