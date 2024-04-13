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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  IconLabelInfo_o *v63; // x20
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  IconLabelInfo_o *v70; // x28
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  UserServantEntity_o **p_userServantEntity; // x21
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  int64_t Instance; // x0
  __int64 v85; // x1
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  struct SupportServantData_o *v92; // x1
  struct SupportServantData_o **p_supportServantData; // x24
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  struct UserServantEntity_o *v100; // x8
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v102; // x27
  __int64 v103; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v104; // x26
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  ServantLimitMaster_o *v119; // x25
  struct UserServantEntity_o *v120; // x8
  int32_t v121; // w27
  UserServantEntity_o *v122; // x8
  __int128 v123; // q1
  UserServantCollectionMaster_o *v124; // x25
  int64_t v125; // x26
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  struct UserServantEntity_o *v144; // x8
  __int128 v145; // q0
  const MethodInfo *v146; // x2
  SupportServantData_o *v147; // x8
  int64_t v148; // x24
  UserServantEntity_o *v149; // x8
  UserServantEntity_o *v150; // x8
  UserServantEntity_o *v151; // x8
  ServantEntity_o *servantEntity; // x8
  const MethodInfo *v153; // x2
  bool v154; // w8
  int64_t Equip; // x0
  const MethodInfo *v156; // x5
  int64_t v157; // x23
  UserServantEntity_o *v158; // x24
  UserServantEntity_o *v159; // x8
  PartyOrganizationUtility_o *v160; // x23
  __int64 v161; // x25
  __int64 v162; // x26
  int32_t v163; // w25
  int32_t v164; // w26
  int v165; // w8
  bool v166; // w0
  UserServantEntity_o *v167; // x8
  __int128 v168; // q0
  __int64 v169; // x22
  bool v170; // zf
  bool v171; // w8
  UserServantEntity_o *v172; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v174; // x2
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v181; // x2
  System_String_array **v182; // x3
  System_Boolean_array **v183; // x4
  System_Int32_array **v184; // x5
  System_Int32_array *v185; // x6
  System_Int32_array *v186; // x7
  int v187; // w22
  BalanceConfig_c *v188; // x8
  int64_t v189; // x8
  struct ServantEntity_o *v190; // x9
  UserServantEntity_o *v191; // x8
  __int64 v192; // x21
  __int64 v193; // x22
  int32_t v194; // w8
  __int64 v195; // x0
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v198; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v199; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v200; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v201; // [xsp+70h] [xbp-90h]
  int32_t actMaxRarity; // [xsp+94h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+98h] [xbp-68h] BYREF
  int32_t friendshipRank[3]; // [xsp+A4h] [xbp-5Ch] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v205; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v206; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v207; // 0:x0.16

  if ( (byte_42EC471 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, index, (_DWORD)userServantEntity, supportServantData);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v27, v28, v29);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v30, v31, v32);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v33, v34, v35);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v36, v37, v38);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v39, v40, v41);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v42, v43, v44);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v54, v55, v56);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v57, v58, v59);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v60, v61, v62);
    byte_42EC471 = 1;
  }
  friendshipRank[0] = 0;
  skillName = 0LL;
  actMaxRarity = 0;
  v63 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v63, 0LL);
  this->fields.iconLabelInfo1 = v63;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v70 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v70, 0LL);
  this->fields.iconLabelInfo2 = v70;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  if ( !supportServantData )
    goto LABEL_76;
  if ( supportServantData->max_length <= nowDeckNum )
  {
    v195 = sub_B5D6C8(Instance);
    sub_B5D668(v195, 0LL);
  }
  v92 = supportServantData->m_Items[nowDeckNum];
  this->fields.supportServantData = v92;
  p_supportServantData = &this->fields.supportServantData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.supportServantData,
    (System_Int32_array **)v92,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)eventSetupInfo,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
  v100 = this->fields.userServantEntity;
  if ( !v100 )
    goto LABEL_76;
  this->fields.svtId = v100->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v103 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v102 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v104 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v205.fields.currentCryptoKey = v103;
  *(_QWORD *)&v205.fields.fakeValue = v102;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v205, 0LL);
  if ( !v104 )
    goto LABEL_76;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v104,
                                       Instance,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  this->fields.eventFriendPoints = friendPointCampaignEntityList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)friendPointCampaignEntityList,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  v119 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.svtId, 0LL);
  v120 = this->fields.userServantEntity;
  if ( !v120 )
    goto LABEL_76;
  v121 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v120->fields.limitCount, 0LL);
  if ( !v119 )
    goto LABEL_76;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v119, v121, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_76;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_76;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v122 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_76;
  v123 = *(_OWORD *)&v122->fields.userId.fields.fakeValue;
  v124 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v201.fields.currentCryptoKey = *(_OWORD *)&v122->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v201.fields.fakeValue = v123;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v200 = v201;
  v125 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v200, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.svtId, 0LL);
  if ( !v124 )
    goto LABEL_76;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v124, v125, Instance, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity,
    0LL,
    v126,
    v127,
    v128,
    v129,
    v130,
    v131);
  this->fields.equipServantEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v132, v133, v134, v135, v136, v137);
  this->fields.equipIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v138, v139, v140, v141, v142, v143);
  v144 = this->fields.userServantEntity;
  if ( !v144 )
    goto LABEL_76;
  v145 = *(_OWORD *)&v144->fields.id.fields.fakeValue;
  *(_OWORD *)&v199.fields.currentCryptoKey = *(_OWORD *)&v144->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v199.fields.fakeValue = v145;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v199, 0LL);
  v147 = *p_supportServantData;
  if ( !*p_supportServantData )
    goto LABEL_76;
  v148 = Instance;
  Instance = SupportServantData__getMember(v147, classPos, v146);
  v149 = this->fields.userServantEntity;
  this->fields.isBase = v148 == Instance;
  if ( !v149 )
    goto LABEL_76;
  Instance = UserServantEntity__IsLock(v149, 0LL);
  v150 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v150 )
    goto LABEL_76;
  Instance = UserServantEntity__IsChoice(v150, 0LL);
  v151 = this->fields.userServantEntity;
  this->fields.isChoice = Instance & 1;
  if ( !v151 )
    goto LABEL_76;
  Instance = UserServantEntity__IsEventJoin(v151, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !servantEntity )
    goto LABEL_76;
  v154 = ServantEntity__checkIsHeroineSvt(servantEntity, 0LL);
  Instance = (int64_t)this->fields.supportServantData;
  this->fields.isHeroine = v154;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  if ( !Instance )
    goto LABEL_76;
  Equip = SupportServantData__getEquip((SupportServantData_o *)Instance, classPos, v153);
  if ( Equip < 1 )
    goto LABEL_44;
  v157 = Equip;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_76;
  v158 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
           (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
           v157,
           (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v159 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_76;
  v160 = (PartyOrganizationUtility_o *)Instance;
  v162 = *(_QWORD *)&v159->fields.svtId.fields.currentCryptoKey;
  v161 = *(_QWORD *)&v159->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v206.fields.currentCryptoKey = v162;
  *(_QWORD *)&v206.fields.fakeValue = v161;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v206, 0LL);
  if ( !*p_userServantEntity
    || (v163 = Instance, Instance = UserServantEntity__getRarity(*p_userServantEntity, 0LL), !v158)
    || (v164 = Instance,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v158->fields.svtId, 0LL),
        !v160) )
  {
LABEL_76:
    sub_B5D69C(Instance, v85);
  }
  this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                   v160,
                                   &skillName,
                                   &actMaxRarity,
                                   v163,
                                   v164,
                                   Instance,
                                   -1,
                                   0LL);
LABEL_44:
  v165 = 0;
  this->fields.isUseInSet = 0;
  if ( isFixMainDeck )
  {
    v166 = SupportServantListViewItem__CheckUseInSet(
             this,
             &this->fields.useSet,
             fixMainDeckIds,
             nowDeckId,
             supportServantData,
             v156);
    v165 = v166;
    this->fields.isUseInSet = v166;
  }
  if ( !v165 && isFixEventDeck )
    this->fields.isUseInSet = SupportServantListViewItem__CheckUseInSet(
                                this,
                                &this->fields.useSet,
                                fixEventDeckIds,
                                nowDeckId,
                                supportServantData,
                                v156);
  this->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_76;
  v167 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_76;
  v168 = *(_OWORD *)&v167->fields.id.fields.fakeValue;
  v169 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v201.fields.currentCryptoKey = *(_OWORD *)&v167->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v201.fields.fakeValue = v168;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v198 = v201;
  v170 = v169 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v198, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  v171 = v170;
  this->fields.isPush = v171;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_76;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v172 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v172 )
    goto LABEL_76;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v172, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v174,
    v175,
    v176,
    v177,
    v178,
    v179);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_76;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v181,
    v182,
    v183,
    v184,
    v185,
    v186);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_76;
  v187 = *(_DWORD *)(Instance + 276);
  v188 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v188 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  this->fields.hpReinforceValue = v188->static_fields->StatusUpAdjustHp * v187;
  if ( !Instance )
    goto LABEL_76;
  this->fields.atkReinforceValue = v188->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_76;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_76;
  v189 = *(int *)(Instance + 48);
  v190 = this->fields.servantEntity;
  this->fields.priority = v189;
  this->fields.sortValue1B = v189;
  if ( !v190 )
    goto LABEL_76;
  v191 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_76;
  this->fields.sortValue2 = ((__int64)v190->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v191->fields.lv;
  v193 = *(_QWORD *)&v191->fields.svtId.fields.currentCryptoKey;
  v192 = *(_QWORD *)&v191->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v207.fields.currentCryptoKey = v193;
  *(_QWORD *)&v207.fields.fakeValue = v192;
  v194 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v207, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v194;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_76;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_76;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportServantListViewItem__CheckUseInSet(
        SupportServantListViewItem_o *this,
        int32_t *setNo,
        System_Int32_array *fixDeckIds,
        int32_t nowDeckId,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  SupportServantListViewItem_o *v9; // x23
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x27
  char *v15; // x22
  int v16; // w8
  int32_t *v17; // x22
  int v18; // t1
  int32_t i; // w24
  il2cpp_array_size_t v20; // w8
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x0
  int32_t svtId; // w19
  __int64 v23; // x25
  __int64 v24; // x26
  bool result; // w0
  __int64 v26; // x0
  int32_t *v27; // [xsp+0h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  v9 = this;
  if ( (byte_42EC472 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)setNo, (_DWORD)fixDeckIds, *(_QWORD *)&nowDeckId);
    this = (SupportServantListViewItem_o *)sub_B5D5C4(
                                             &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                             v10,
                                             v11,
                                             v12);
    byte_42EC472 = 1;
  }
  *setNo = 0;
  if ( !fixDeckIds )
LABEL_28:
    sub_B5D69C(this, setNo);
  v13 = *(_QWORD *)&fixDeckIds->max_length;
  if ( (int)v13 < 1 )
    return 0;
  v27 = setNo;
  v14 = 0LL;
  while ( 1 )
  {
    if ( v14 >= (unsigned int)v13 )
      goto LABEL_29;
    v15 = (char *)fixDeckIds + 4 * v14;
    v18 = *((_DWORD *)v15 + 8);
    v17 = (int32_t *)(v15 + 32);
    v16 = v18;
    if ( v18 != nowDeckId && v16 >= 1 )
      break;
LABEL_24:
    LODWORD(v13) = fixDeckIds->max_length;
    if ( (__int64)++v14 >= (int)v13 )
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
    if ( v14 >= fixDeckIds->max_length )
      goto LABEL_29;
    if ( !supportServantData )
      goto LABEL_28;
    v20 = *v17 - 1;
    if ( v20 >= supportServantData->max_length )
      goto LABEL_29;
    this = (SupportServantListViewItem_o *)supportServantData->m_Items[v20];
    if ( !this )
      goto LABEL_28;
    UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(
                                (SupportServantData_o *)this,
                                i,
                                (const MethodInfo *)fixDeckIds);
    if ( UserServantLeaderEntity )
    {
      svtId = UserServantLeaderEntity->fields.svtId;
      v24 = *(_QWORD *)&v9->fields.svtId.fields.currentCryptoKey;
      v23 = *(_QWORD *)&v9->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v29.fields.currentCryptoKey = v24;
      *(_QWORD *)&v29.fields.fakeValue = v23;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                               v29,
                                               0LL);
      if ( svtId == (_DWORD)this )
        break;
    }
  }
  if ( (unsigned int)v14 >= fixDeckIds->max_length )
  {
LABEL_29:
    v26 = sub_B5D6C8(this);
    sub_B5D668(v26, 0LL);
  }
  result = 1;
  *v27 = *v17;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIdList; // x8
  int64_t v9; // x0
  __int64 v10; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v11; // x8
  System_Int64_array *v12; // x20
  unsigned __int64 v13; // x21
  int64_t v14; // x22
  __int64 v15; // x23
  unsigned __int64 max_length; // x9
  _OWORD *v17; // x8
  __int128 v18; // q0
  __int64 v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-50h]

  if ( (byte_42EC478 & 1) == 0 )
  {
    sub_B5D5C4(&long___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6, v7);
    byte_42EC478 = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0LL;
  v9 = sub_B5D5DC(long___TypeInfo, equipIdList->max_length);
  v11 = this->fields.equipIdList;
  if ( !v11 )
LABEL_14:
    sub_B5D69C(v9, v10);
  v12 = (System_Int64_array *)v9;
  v13 = 0LL;
  v14 = v9 + 32;
  v15 = 32LL;
  while ( 1 )
  {
    max_length = v11->max_length;
    if ( (__int64)v13 >= (int)max_length )
      return v12;
    if ( v13 >= max_length )
      goto LABEL_17;
    v17 = (_OWORD *)((char *)v11 + v15);
    v18 = v17[1];
    *(_OWORD *)&v22.fields.currentCryptoKey = *v17;
    *(_OWORD *)&v22.fields.fakeValue = v18;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v21 = v22;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v21, 0LL);
    if ( v12 )
    {
      if ( v13 >= v12->max_length )
      {
LABEL_17:
        v20 = sub_B5D6C8(v9);
        sub_B5D668(v20, 0LL);
      }
      *(_QWORD *)(v14 + 8 * v13) = v9;
      v11 = this->fields.equipIdList;
      ++v13;
      v15 += 32LL;
      if ( v11 )
        continue;
    }
    goto LABEL_14;
  }
}


int32_t __fastcall SupportServantListViewItem__GetFriendPointBonus(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SupportServantListViewItem_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  int32_t v9; // w20
  __int64 v10; // x22
  int max_length; // w9
  unsigned int v12; // w25
  __int64 v13; // x8
  System_Int32_array *v14; // x21
  int32_t SvtId; // w0
  __int64 v16; // x9
  __int64 v17; // x10
  _BOOL4 v18; // w10
  int32_t v19; // w21
  __int64 v21; // x0

  v4 = this;
  if ( (byte_42EC47F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, (_DWORD)method, v2, v3);
    this = (SupportServantListViewItem_o *)sub_B5D5C4(&System_Math_TypeInfo, v5, v6, v7);
    byte_42EC47F = 1;
  }
  eventFriendPoints = v4->fields.eventFriendPoints;
  if ( !eventFriendPoints )
    return -1;
  v9 = -1;
  v10 = 4LL;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    v12 = v10 - 4;
    if ( (int)v10 - 4 >= max_length )
      return v9;
    if ( v12 >= max_length )
      goto LABEL_23;
    v13 = *((_QWORD *)&eventFriendPoints->obj.klass + v10);
    if ( v13 )
    {
      v14 = *(System_Int32_array **)(v13 + 40);
      SvtId = SupportServantListViewItem__get_SvtId(v4, method);
      this = (SupportServantListViewItem_o *)System_Array__IndexOf_int_(
                                               v14,
                                               SvtId,
                                               (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
      eventFriendPoints = v4->fields.eventFriendPoints;
      if ( eventFriendPoints )
      {
        if ( v12 >= eventFriendPoints->max_length )
        {
LABEL_23:
          v21 = sub_B5D6C8(this);
          sub_B5D668(v21, 0LL);
        }
        v16 = *((_QWORD *)&eventFriendPoints->obj.klass + v10);
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 40);
          if ( v17 )
            v18 = *(_DWORD *)(v17 + 24) == 0;
          else
            v18 = 1;
          if ( v18 || (int)this >= 0 )
          {
            v19 = *(_DWORD *)(v16 + 48);
            if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Math_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            }
            this = (SupportServantListViewItem_o *)System_Math__Max_45149472(v9, v19, 0LL);
            eventFriendPoints = v4->fields.eventFriendPoints;
            v9 = (int)this;
          }
          ++v10;
          if ( eventFriendPoints )
            continue;
        }
      }
    }
    sub_B5D69C(this, method);
  }
}


bool __fastcall SupportServantListViewItem__GetNpInfo(
        SupportServantListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserServantEntity_o *userServantEntity; // x0
  TreasureDvcInfo_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EC47E & 1) == 0 )
  {
    sub_B5D5C4(&TreasureDvcInfo_TypeInfo, (_DWORD)tdInfo, (_DWORD)method, v3);
    byte_42EC47E = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0LL);
  v8 = (TreasureDvcInfo_o *)sub_B5D694(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v8, 0LL);
  *tdInfo = v8;
  sub_B5D560((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  return 0;
}


bool __fastcall SupportServantListViewItem__IsMatchClass(
        SupportServantListViewItem_o *this,
        int32_t classType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ServantClassMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1

  if ( (byte_42EC475 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantClassMaster___, classType, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v9, v10, v11);
    byte_42EC475 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantClassMaster___);
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
                 (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_12:
    sub_B5D69C(Master_WarQuestSelectionMaster, v13);
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
  __int64 v3; // x3
  ListViewSort_o *v4; // x19
  SupportServantListViewItem_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  unsigned int *manager; // x8
  __int64 v19; // x11
  FilterKindList_c *v20; // x0
  ListViewSort_FilterKind_array *v21; // x0
  FilterKindList_c *v22; // x0
  ListViewSort_FilterKind_array *v23; // x0
  UserServantEntity_o *userServantEntity; // x21
  FilterKindList_c *v25; // x0
  ListViewSort_FilterKind_array *v26; // x21
  FilterKindList_c *v28; // x0
  ListViewSort_FilterKind_array *v29; // x0
  FilterKindList_c *v30; // x0
  ListViewSort_FilterKind_array *v31; // x0
  FilterKindList_c *v32; // x0
  FilterKindList_c *v33; // x0
  ListViewSort_FilterKind_array *v34; // x0
  FilterKindList_c *v35; // x0
  ListViewSort_FilterKind_array *v36; // x0
  UserServantEntity_o *v37; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v39; // x8
  System_Int32_array **SkillCategoryIdList; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **TreasureDeviceCategoryIdList; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v55; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v57; // w0
  __int64 v58; // x0

  v4 = sort;
  v5 = this;
  if ( (byte_42EC476 & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&ListViewSort_FilterKind___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9, v10, v11);
    sub_B5D5C4(&ServantEventBonusFilterController_TypeInfo, v12, v13, v14);
    this = (SupportServantListViewItem_o *)sub_B5D5C4(&SupportServantListViewManager_TypeInfo, v15, v16, v17);
    byte_42EC476 = 1;
  }
  if ( !v4 )
    goto LABEL_91;
  manager = (unsigned int *)v4->fields.manager;
  if ( !manager )
    goto LABEL_91;
  v19 = *(&SupportServantListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)manager + 300LL) < (unsigned int)v19
    || *(SupportServantListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * v19 - 8) != SupportServantListViewManager_TypeInfo )
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
      if ( !SupportServantListViewItem__IsMatchClass(v5, 8, method) )
        return 0;
      v28 = FilterKindList_TypeInfo;
      if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v28 = FilterKindList_TypeInfo;
      }
      this = (SupportServantListViewItem_o *)v28->static_fields->ClassGroupFilterKindList;
      if ( !this )
LABEL_91:
        sub_B5D69C(this, sort);
      v29 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                               (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                               (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( ListViewSort__IsUnSelectedAllTargetFilters(v4, v29, 0LL) )
      {
        v30 = FilterKindList_TypeInfo;
        if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v30 = FilterKindList_TypeInfo;
        }
        this = (SupportServantListViewItem_o *)v30->static_fields->ClassExtra1InShielderFilterKindList;
        if ( !this )
          goto LABEL_91;
        v31 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                 (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                                 (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( !ListViewSort__IsUnSelectedAllTargetFilters(v4, v31, 0LL) )
        {
LABEL_69:
          if ( !ListViewSort__IsMatchClassFilter(v4, v5->fields.servantEntity, 0LL) )
            return 0;
          goto LABEL_11;
        }
        v32 = FilterKindList_TypeInfo;
        if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v32 = FilterKindList_TypeInfo;
        }
        this = (SupportServantListViewItem_o *)v32->static_fields->ClassExtra2FilterKindList;
        if ( !this )
          goto LABEL_91;
LABEL_68:
        v36 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                 (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                                 (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( ListViewSort__IsUnSelectedAllTargetFilters(v4, v36, 0LL) )
          goto LABEL_11;
        goto LABEL_69;
      }
    }
    else
    {
      v33 = FilterKindList_TypeInfo;
      if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v33 = FilterKindList_TypeInfo;
      }
      this = (SupportServantListViewItem_o *)v33->static_fields->ClassGroupFilterKindList;
      if ( !this )
        goto LABEL_91;
      v34 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                               (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                               (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( ListViewSort__IsUnSelectedAllTargetFilters(v4, v34, 0LL) )
      {
        v35 = FilterKindList_TypeInfo;
        if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v35 = FilterKindList_TypeInfo;
        }
        this = (SupportServantListViewItem_o *)v35->static_fields->ClassFilterKindList;
        if ( !this )
          goto LABEL_91;
        goto LABEL_68;
      }
    }
    if ( !ListViewSort__IsMatchClassGroupFilter(v4, v5->fields.servantEntity, 0LL) )
      return 0;
    goto LABEL_11;
  }
  if ( !SupportServantListViewItem__IsMatchClass(v5, (int32_t)sort, method) )
    return 0;
LABEL_11:
  v20 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v20 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v20->static_fields->NpTypeFilterKindList;
  if ( !this )
    goto LABEL_91;
  v21 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v4, v21, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(v4, v5->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v22 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v22 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v22->static_fields->NpEffectFilterKindList;
  if ( !this )
    goto LABEL_91;
  v23 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v4, v23, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(v4, v5->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(v4, -1, 0LL) )
  {
    userServantEntity = v5->fields.userServantEntity;
    if ( (BYTE3(ServantEventBonusFilterController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    }
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, v4, -1, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(v4, 0LL) )
  {
    v37 = v5->fields.userServantEntity;
    if ( v37 )
    {
      dispLimitCount = v5->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v37, 0, 0LL) )
      {
        this = (SupportServantListViewItem_o *)v5->fields.userServantEntity;
        if ( !this )
          goto LABEL_91;
        this = (SupportServantListViewItem_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0LL);
        v39 = v5->fields.userServantEntity;
        v5->fields.dispLimitCount = (int)this;
        if ( !v39 )
          goto LABEL_91;
        SkillCategoryIdList = (System_Int32_array **)UserServantEntity__GetSkillCategoryIdList(v39, -1, 0LL);
        v5->fields.skillCategoryIdList = (struct System_Int32_array *)SkillCategoryIdList;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v5->fields.skillCategoryIdList,
          SkillCategoryIdList,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
        this = (SupportServantListViewItem_o *)v5->fields.userServantEntity;
        if ( !this )
          goto LABEL_91;
        TreasureDeviceCategoryIdList = (System_Int32_array **)UserServantEntity__GetTreasureDeviceCategoryIdList(
                                                                (UserServantEntity_o *)this,
                                                                0,
                                                                0LL);
        v5->fields.tdCategoryIdList = (struct System_Int32_array *)TreasureDeviceCategoryIdList;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v5->fields.tdCategoryIdList,
          TreasureDeviceCategoryIdList,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53);
      }
    }
    this = (SupportServantListViewItem_o *)sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_91;
    if ( !this->fields.sortIndex )
      goto LABEL_92;
    LODWORD(this->fields.sortValue0) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     v4,
                                     (ListViewSort_FilterKind_array *)this,
                                     0LL);
    this = (SupportServantListViewItem_o *)sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_91;
    if ( !this->fields.sortIndex )
    {
LABEL_92:
      v58 = sub_B5D6C8(this);
      sub_B5D668(v58, 0LL);
    }
    LODWORD(this->fields.sortValue0) = 51;
    v55 = ListViewSort__IsUnSelectedAllTargetFilters(v4, (ListViewSort_FilterKind_array *)this, 0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              v5->fields.tdCategoryIdList,
                              v4,
                              0LL);
    v57 = ServantEquipEffectFilterController__IsMatchEffectCategory(v5->fields.skillCategoryIdList, v4, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v55) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v57 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v57 )
    {
      return 0;
    }
  }
  this = (SupportServantListViewItem_o *)sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_91;
  if ( !this->fields.sortIndex )
    goto LABEL_92;
  LODWORD(this->fields.sortValue0) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v4, (ListViewSort_FilterKind_array *)this, 0LL)
    && ListViewSort__GetFilter(v4, 39, 0LL)
    && v5->fields.isSwapChoice == v5->fields.isChoice )
  {
    return 0;
  }
  v25 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v25 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v25->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_91;
  v26 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(v4, v26, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(v4, v26, 0LL)
      || ListViewSort__IsMatchRarityFilter(v4, v5->fields.rarity, 0LL);
}


void __fastcall SupportServantListViewItem__Modify(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *p_userServantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // t1
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  BattleServantConfConponent_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v20; // x20
  System_Int32_array **Entity; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-30h]

  if ( (byte_42EC473 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EC473 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  p_userServantEntity = (BattleServantConfConponent_o *)&this->fields.userServantEntity;
  if ( userServantEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    klass = p_userServantEntity->klass;
    if ( !p_userServantEntity->klass )
      goto LABEL_12;
    byval_arg = klass->_1.byval_arg;
    v20 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
    *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v29.fields.fakeValue = byval_arg;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v28 = v29;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v28, 0LL);
    if ( !v20 )
LABEL_12:
      sub_B5D69C(Instance, v17);
    Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      v20,
                                      (int64_t)Instance,
                                      (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_userServantEntity->klass = (BattleServantConfConponent_c *)Entity;
    sub_B5D560(p_userServantEntity, Entity, v22, v23, v24, v25, v26, v27);
  }
}


void __fastcall SupportServantListViewItem__ModifyChoiceItem(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B5D69C(0LL, method);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_userServantEntity )
    sub_B5D69C(0LL, v10);
  this->fields.isEventJoin = UserServantEntity__IsEventJoin(*p_userServantEntity, 0LL);
}


void __fastcall SupportServantListViewItem__ModifyLockItem(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B5D69C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall SupportServantListViewItem__Modify_32164348(
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
  sub_B5D560(
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *klass; // x22
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  BattleServantConfConponent_o *p_equipUserServantEntity; // x20
  BattleServantConfConponent_o *p_equipServantEntity; // x19
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  BattleServantConfConponent_o *p_equipIdList; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  int64_t Instance; // x0
  Il2CppObject *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  Il2CppObject *v57; // x22
  System_Int32_array **v58; // x1
  BalanceConfig_c *v59; // x0
  __int64 v60; // x1
  __int128 v61; // q1
  BattleServantConfConponent_c *v62; // x8
  Il2CppType this_arg; // q0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v64; // x21
  System_Int32_array **Entity; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  BattleServantConfConponent_c *v72; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  BattleServantConfConponent_c *v75; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v76; // x20
  Il2CppClass *v77; // x21
  Il2CppClass *v78; // x22
  System_Int32_array **v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  __int64 v86; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+40h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  klass = equipIdList;
  if ( (byte_42EC474 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)equipIdList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16, v17, v18);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v19, v20, v21);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo, v25, v26, v27);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32, v33);
    byte_42EC474 = 1;
  }
  this->fields.equipUserServantEntity = 0LL;
  p_equipUserServantEntity = (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity;
  sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v36, v37, v38, v39, v40, v41);
  this->fields.equipIdList = 0LL;
  p_equipIdList = (BattleServantConfConponent_o *)&this->fields.equipIdList;
  sub_B5D560(p_equipIdList, 0LL, v43, v44, v45, v46, v47, v48);
  if ( !p_equipIdList->monitor )
    return;
  if ( klass )
  {
    if ( (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *)p_equipIdList->klass == klass )
      goto LABEL_15;
    v50 = System_Array__Clone((System_Array_o *)klass, 0LL);
    if ( !v50 )
    {
      v58 = 0LL;
      goto LABEL_14;
    }
    v57 = v50;
    v58 = (System_Int32_array **)sub_B5D684(v50, CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo);
    if ( v58 )
      goto LABEL_14;
    sub_B5D990(v57);
  }
  v59 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v59 = BalanceConfig_TypeInfo;
  }
  v58 = (System_Int32_array **)sub_B5D5DC(
                                 CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo,
                                 (unsigned int)v59->static_fields->SvtEquipMax);
LABEL_14:
  p_equipIdList->klass = (BattleServantConfConponent_c *)v58;
  sub_B5D560(p_equipIdList, v58, v51, v52, v53, v54, v55, v56);
  klass = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *)p_equipIdList->klass;
  if ( !p_equipIdList->klass )
    goto LABEL_40;
LABEL_15:
  if ( !klass->max_length )
    goto LABEL_41;
  v61 = *(_OWORD *)&klass->m_Items[0].fields.fakeValue;
  *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&klass->m_Items[0].fields.currentCryptoKey;
  *(_OWORD *)&v89.fields.fakeValue = v61;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v88 = v89;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v88, 0LL) < 1 )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  v62 = p_equipIdList->klass;
  if ( !p_equipIdList->klass )
    goto LABEL_40;
  if ( !LODWORD(v62->_1.namespaze) )
  {
LABEL_41:
    v86 = sub_B5D6C8(Instance);
    sub_B5D668(v86, 0LL);
  }
  this_arg = v62->_1.this_arg;
  v64 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  *(Il2CppType *)&v89.fields.currentCryptoKey = v62->_1.byval_arg;
  *(Il2CppType *)&v89.fields.fakeValue = this_arg;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v87 = v89;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v87, 0LL);
  if ( !v64 )
    goto LABEL_40;
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    v64,
                                    Instance,
                                    (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_equipUserServantEntity->klass = (BattleServantConfConponent_c *)Entity;
  sub_B5D560(p_equipUserServantEntity, Entity, v66, v67, v68, v69, v70, v71);
  v72 = p_equipUserServantEntity->klass;
  if ( p_equipUserServantEntity->klass )
  {
    declaringType = v72->_1.declaringType;
    parent = v72->_1.parent;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v90.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v90.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v90, 0LL) >= 1 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
        v75 = p_equipUserServantEntity->klass;
        if ( p_equipUserServantEntity->klass )
        {
          v76 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
          v78 = v75->_1.declaringType;
          v77 = v75->_1.parent;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v91.fields.currentCryptoKey = v78;
          *(_QWORD *)&v91.fields.fakeValue = v77;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v91, 0LL);
          if ( v76 )
          {
            v79 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v76,
                                           Instance,
                                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            p_equipServantEntity->klass = (BattleServantConfConponent_c *)v79;
            sub_B5D560(p_equipServantEntity, v79, v80, v81, v82, v83, v84, v85);
            return;
          }
        }
      }
LABEL_40:
      sub_B5D69C(Instance, v60);
    }
  }
}


void __fastcall SupportServantListViewItem__SetEquipUserServantId(
        SupportServantListViewItem_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIdList; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v7; // x0
  const MethodInfo *v8; // x2
  __int64 v9; // x0
  __int128 v10; // [xsp+10h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42EC479 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtId, (_DWORD)method, v3);
    byte_42EC479 = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v11, userSvtId, 0LL);
    v10 = *(_OWORD *)&v11.fields.fakeValue;
    if ( !equipIdList->max_length )
    {
      v9 = sub_B5D6C8(v7);
      sub_B5D668(v9, 0LL);
    }
    *(_OWORD *)&equipIdList->m_Items[0].fields.currentCryptoKey = *(_OWORD *)&v11.fields.currentCryptoKey;
    *(_OWORD *)&equipIdList->m_Items[0].fields.fakeValue = v10;
    SupportServantListViewItem__SetEquipStatus(this, this->fields.equipIdList, v8);
  }
}


bool __fastcall SupportServantListViewItem__SetSortValue(
        SupportServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SupportServantListViewItem_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int32_t bonusKind2; // w8
  int32_t *v19; // x8
  int32_t *p_bonusKind2Id; // x8
  int32_t v21; // w2
  bool IsEnableServant; // w0
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isChoice; // w9
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v26; // q1
  struct UserServantEntity_o *v27; // x8
  const MethodInfo *v28; // x2
  int64_t rarity; // x8
  int64_t hpReinforceValue; // x2
  int32_t adjustAtk; // w3
  int32_t v32; // w1
  struct UserServantEntity_o *v33; // x8
  struct UserServantEntity_o *equipUserServantEntity; // x9
  int64_t hp; // x10
  int32_t v36; // w4
  int32_t adjustHp; // w3
  int32_t v38; // w2
  int32_t v39; // w1
  struct UserServantEntity_o *v40; // x8
  struct UserServantEntity_o *v41; // x9
  int64_t atk; // x10
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *iconLabelInfo2; // x19
  __int64 v45; // x20
  __int64 v46; // x21
  int32_t v47; // w0
  SupportServantListViewItem_o *iconLabelInfo1; // x20
  int64_t v49; // x9
  struct ListViewManager_o *manager; // x8
  __int64 v51; // x11
  struct ListViewManager_o *v52; // x20
  int32_t eventFriendPoints; // w20
  __int64 v54; // x21
  __int64 v55; // x22
  const MethodInfo *v56; // x2
  struct ServantEntity_o *v57; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v59; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+30h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  v5 = this;
  if ( (byte_42EC477 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantFilterMaster___, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    this = (SupportServantListViewItem_o *)sub_B5D5C4(&SupportServantListViewManager_TypeInfo, v15, v16, v17);
    byte_42EC477 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&v5->fields.isTermination = 0;
  v5->fields.sortValue1 = -1LL;
  if ( !sort )
    goto LABEL_97;
  if ( sort->fields.isBonusKind )
  {
    if ( v5->fields.isBase )
      goto LABEL_24;
    bonusKind2 = sort->fields.bonusKind2;
    if ( bonusKind2 == 2 )
    {
      if ( v5->fields.bonusKind == 2 )
      {
        p_bonusKind2Id = &sort->fields.bonusKind2Id;
        if ( v5->fields.bonusKindId == sort->fields.bonusKind2Id )
          goto LABEL_13;
      }
      else
      {
        p_bonusKind2Id = &sort->fields.bonusKind2Id;
      }
      v5->fields.bonusKind = 2;
      v5->fields.bonusKindId = *p_bonusKind2Id;
      this = (SupportServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_97;
      this = (SupportServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantFilterMaster___);
      if ( !this )
        goto LABEL_97;
      IsEnableServant = ServantFilterMaster__IsEnableServant(
                          (ServantFilterMaster_o *)this,
                          v5->fields.svtId,
                          v5->fields.bonusKindId,
                          0LL);
    }
    else
    {
      if ( bonusKind2 != 1 )
        goto LABEL_36;
      if ( v5->fields.bonusKind == 1 )
      {
        v19 = &sort->fields.bonusKind2Id;
        if ( v5->fields.bonusKindId == sort->fields.bonusKind2Id )
        {
LABEL_13:
          if ( !v5->fields.isEventUpVal )
            goto LABEL_41;
          goto LABEL_23;
        }
      }
      else
      {
        v19 = &sort->fields.bonusKind2Id;
      }
      v5->fields.bonusKind = 1;
      v21 = *v19;
      this = (SupportServantListViewItem_o *)v5->fields.userServantEntity;
      v5->fields.bonusKindId = *v19;
      if ( !this )
        goto LABEL_97;
      IsEnableServant = UserServantEntity__getEventUpVal_21840416(
                          (UserServantEntity_o *)this,
                          v5->fields.eventSetupInfo,
                          v21,
                          0LL);
    }
    v5->fields.isEventUpVal = IsEnableServant;
    if ( !IsEnableServant )
      goto LABEL_41;
  }
LABEL_23:
  if ( v5->fields.isBase )
    goto LABEL_24;
LABEL_36:
  this = (SupportServantListViewItem_o *)v5->fields.servantEntity;
  if ( !this )
    goto LABEL_97;
  if ( !ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0LL) )
  {
    this = (SupportServantListViewItem_o *)v5->fields.servantEntity;
    if ( !this )
      goto LABEL_97;
    if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0LL)
      || !SupportServantListViewItem__IsMatchServantFilter(v5, sort, v28) )
    {
      goto LABEL_41;
    }
LABEL_24:
    isSwapChoice = v5->fields.isSwapChoice;
    isChoice = v5->fields.isChoice;
    v5->fields.sortValue0 = 0LL;
    if ( isSwapChoice != isChoice && sort->fields.isChoiceSort )
      v5->fields.sortValue0 = 10LL;
    this = (SupportServantListViewItem_o *)v5->fields.iconLabelInfo2;
    if ( !this )
      goto LABEL_97;
    IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
    this = (SupportServantListViewItem_o *)(&dword_0 + 1);
    switch ( sort->fields.sortKind )
    {
      case 1:
        userServantEntity = v5->fields.userServantEntity;
        if ( !userServantEntity )
          goto LABEL_97;
        v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v62.fields.fakeValue = v26;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v61 = v62;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                 &v61,
                                                 0LL);
        v27 = v5->fields.userServantEntity;
        v5->fields.sortValue1 = (int64_t)this;
        if ( !v27 )
          goto LABEL_97;
        this = (SupportServantListViewItem_o *)v5->fields.iconLabelInfo1;
        if ( !this )
          goto LABEL_97;
        IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v27->fields.createdAt, 0, 0, 0, 0LL);
        goto LABEL_77;
      case 2:
        rarity = v5->fields.rarity;
        this = (SupportServantListViewItem_o *)v5->fields.userServantEntity;
        goto LABEL_61;
      case 3:
        this = (SupportServantListViewItem_o *)v5->fields.userServantEntity;
        if ( !this )
          goto LABEL_97;
        v5->fields.sortValue1 = SLODWORD(this->fields.eventFriendPoints);
        goto LABEL_62;
      case 4:
        this = (SupportServantListViewItem_o *)v5->fields.userServantEntity;
        if ( !this )
          goto LABEL_97;
        UserServantEntity__getTreasureDeviceInfo_21848072((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
        LODWORD(hpReinforceValue) = tdMaxLv[1];
        this = (SupportServantListViewItem_o *)v5->fields.iconLabelInfo1;
        v5->fields.sortValue1 = tdMaxLv[1];
        if ( !this )
          goto LABEL_97;
        adjustAtk = tdMaxLv[0];
        v32 = 33;
        break;
      case 5:
        v33 = v5->fields.userServantEntity;
        if ( !v33 )
          goto LABEL_97;
        equipUserServantEntity = v5->fields.equipUserServantEntity;
        hp = v33->fields.hp;
        if ( equipUserServantEntity )
        {
          this = (SupportServantListViewItem_o *)v5->fields.iconLabelInfo1;
          v5->fields.sortValue1 = equipUserServantEntity->fields.hp + (int)hp;
          if ( !this )
            goto LABEL_97;
          v36 = equipUserServantEntity->fields.hp;
          adjustHp = v33->fields.adjustHp;
          v38 = v33->fields.hp;
          v39 = 46;
LABEL_56:
          IconLabelInfo__Set_28463004((IconLabelInfo_o *)this, v39, v38, adjustHp, v36, 0, 0, 0, 0LL);
LABEL_77:
          this = (SupportServantListViewItem_o *)v5->fields.userServantEntity;
          if ( this )
          {
            iconLabelInfo2 = v5->fields.iconLabelInfo2;
LABEL_79:
            eventFriendPoints = (int32_t)this->fields.eventFriendPoints;
LABEL_80:
            this = (SupportServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
            if ( iconLabelInfo2 )
            {
              IconLabelInfo__Set_28463004(iconLabelInfo2, 2, eventFriendPoints, (int32_t)this, 0, 0, 0, 0, 0LL);
              LOBYTE(this) = 1;
              return (char)this;
            }
          }
LABEL_97:
          sub_B5D69C(this, sort);
        }
        this = (SupportServantListViewItem_o *)v5->fields.iconLabelInfo1;
        v5->fields.sortValue1 = hp;
        if ( !this )
          goto LABEL_97;
        adjustAtk = v33->fields.adjustHp;
        LODWORD(hpReinforceValue) = v33->fields.hp;
        v32 = 3;
        break;
      case 6:
        v40 = v5->fields.userServantEntity;
        if ( !v40 )
          goto LABEL_97;
        v41 = v5->fields.equipUserServantEntity;
        atk = v40->fields.atk;
        if ( v41 )
        {
          this = (SupportServantListViewItem_o *)v5->fields.iconLabelInfo1;
          v5->fields.sortValue1 = v41->fields.atk + (int)atk;
          if ( !this )
            goto LABEL_97;
          v36 = v41->fields.atk;
          adjustHp = v40->fields.adjustAtk;
          v38 = v40->fields.atk;
          v39 = 47;
          goto LABEL_56;
        }
        this = (SupportServantListViewItem_o *)v5->fields.iconLabelInfo1;
        v5->fields.sortValue1 = atk;
        if ( !this )
          goto LABEL_97;
        adjustAtk = v40->fields.adjustAtk;
        LODWORD(hpReinforceValue) = v40->fields.atk;
        v32 = 5;
        break;
      case 7:
        servantEntity = v5->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_97;
        this = (SupportServantListViewItem_o *)v5->fields.iconLabelInfo1;
        v5->fields.sortValue1 = servantEntity->fields.cost;
        if ( !this )
          goto LABEL_97;
        LODWORD(hpReinforceValue) = servantEntity->fields.cost;
        v32 = 7;
        adjustAtk = 0;
        break;
      case 8:
        this = (SupportServantListViewItem_o *)v5->fields.userServantEntity;
        rarity = -v5->fields.priority;
LABEL_61:
        v5->fields.sortValue1 = rarity;
        if ( !this )
          goto LABEL_97;
LABEL_62:
        iconLabelInfo2 = v5->fields.iconLabelInfo1;
        goto LABEL_79;
      case 0xA:
        v46 = *(_QWORD *)&v5->fields.friendship.fields.currentCryptoKey;
        v45 = *(_QWORD *)&v5->fields.friendship.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v64.fields.currentCryptoKey = v46;
        *(_QWORD *)&v64.fields.fakeValue = v45;
        v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v64, 0LL);
        iconLabelInfo1 = (SupportServantListViewItem_o *)v5->fields.iconLabelInfo1;
        v49 = v47;
        friendship = v5->fields.friendship;
        v5->fields.sortValue1 = v49;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                 friendship,
                                                 0LL);
        if ( !iconLabelInfo1 )
          goto LABEL_97;
        adjustAtk = v5->fields.friendshipMax;
        LODWORD(hpReinforceValue) = (_DWORD)this;
        v32 = 32;
        this = iconLabelInfo1;
        break;
      case 0xE:
        this = (SupportServantListViewItem_o *)v5->fields.amountSortValue;
        if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
          goto LABEL_94;
        manager = sort->fields.manager;
        if ( manager
          && (v51 = *(&SupportServantListViewManager_TypeInfo->_2.bitflags2 + 1),
              *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v51) )
        {
          if ( (SupportServantListViewManager_c *)manager->klass->_2.typeHierarchy[v51 - 1] == SupportServantListViewManager_TypeInfo )
            v52 = sort->fields.manager;
          else
            v52 = 0LL;
        }
        else
        {
          v52 = 0LL;
        }
        v55 = *(_QWORD *)&v5->fields.svtId.fields.currentCryptoKey;
        v54 = *(_QWORD *)&v5->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v66.fields.currentCryptoKey = v55;
        *(_QWORD *)&v66.fields.fakeValue = v54;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                 v66,
                                                 0LL);
        if ( !v52 )
          goto LABEL_97;
        this = (SupportServantListViewItem_o *)SupportServantListViewManager__GetAmountSortValue(
                                                 (SupportServantListViewManager_o *)v52,
                                                 (int32_t)this,
                                                 v56);
        v5->fields.amountSortValue = (int64_t)this;
LABEL_94:
        v57 = v5->fields.servantEntity;
        if ( !v57 )
          goto LABEL_97;
        collectionNo = v57->fields.collectionNo;
        v59 = v5->fields.userServantEntity;
        v5->fields.sortValue1 = (((unsigned __int64)(unsigned int)v5->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
        if ( !v59 )
          goto LABEL_97;
        iconLabelInfo2 = v5->fields.iconLabelInfo1;
        eventFriendPoints = v59->fields.lv;
        this = (SupportServantListViewItem_o *)v59;
        goto LABEL_80;
      case 0xF:
        hpReinforceValue = v5->fields.hpReinforceValue;
        this = (SupportServantListViewItem_o *)v5->fields.iconLabelInfo1;
        v5->fields.sortValue1 = hpReinforceValue;
        if ( !this )
          goto LABEL_97;
        adjustAtk = v5->fields.nowMaxHpReinforceValue;
        v32 = 44;
        break;
      case 0x10:
        hpReinforceValue = v5->fields.atkReinforceValue;
        this = (SupportServantListViewItem_o *)v5->fields.iconLabelInfo1;
        v5->fields.sortValue1 = hpReinforceValue;
        if ( !this )
          goto LABEL_97;
        adjustAtk = v5->fields.nowMaxAtkReinforceValue;
        v32 = 45;
        break;
      default:
        return (char)this;
    }
    IconLabelInfo__Set_28463004((IconLabelInfo_o *)this, v32, hpReinforceValue, adjustAtk, 0, 0, 0, 0, 0LL);
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC47C & 1) == 0 )
  {
    sub_B5D5C4(&TutorialFlag_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC47C = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_29295864(126, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  SupportServantListViewItem_o *v4; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  SupportServantData_o *supportServantData; // x19
  const MethodInfo *v8; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-30h]

  v4 = this;
  if ( (byte_42EC47D & 1) == 0 )
  {
    this = (SupportServantListViewItem_o *)sub_B5D5C4(
                                             &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                             (_DWORD)method,
                                             v2,
                                             v3);
    byte_42EC47D = 1;
  }
  userServantEntity = v4->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_9;
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  supportServantData = v4->fields.supportServantData;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v10 = v11;
  this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v10, 0LL);
  if ( !supportServantData )
LABEL_9:
    sub_B5D69C(this, method);
  return SupportServantData__isUseServant(supportServantData, (int64_t)this, v8);
}


System_String_o *__fastcall SupportServantListViewItem__get_NameText(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v10; // x20
  __int64 v11; // x21
  int32_t v12; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42EC47B & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_18624/*"error"*/, v5, v6, v7);
    byte_42EC47B = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18624/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v11 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v10 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v14.fields.currentCryptoKey = v11;
    *(_QWORD *)&v14.fields.fakeValue = v10;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v14, 0LL);
  }
  else
  {
    v12 = -1;
  }
  return ServantEntity__getName(servantEntity, v12, -1, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_42EC47A & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC47A = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v8, 0LL);
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