// local variable allocation has failed, the output may be wrong!
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  IconLabelInfo_o *v35; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  IconLabelInfo_o *v44; // x28
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UserServantEntity_o **p_userServantEntity; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  int64_t Instance; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct SupportServantData_o *v65; // x1
  struct SupportServantData_o **p_supportServantData; // x24
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct UserServantEntity_o *v73; // x8
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v75; // x27
  __int64 v76; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v77; // x26
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  ServantLimitMaster_o *v92; // x25
  struct UserServantEntity_o *v93; // x8
  int32_t v94; // w27
  UserServantEntity_o *v95; // x8
  __int128 v96; // q1
  UserServantCollectionMaster_o *v97; // x25
  int64_t v98; // x26
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  struct UserServantEntity_o *v117; // x8
  __int128 v118; // q0
  const MethodInfo *v119; // x2
  SupportServantData_o *v120; // x8
  int64_t v121; // x24
  UserServantEntity_o *v122; // x8
  UserServantEntity_o *v123; // x8
  UserServantEntity_o *v124; // x8
  ServantEntity_o *servantEntity; // x8
  const MethodInfo *v126; // x2
  bool v127; // w8
  int64_t Equip; // x0
  const MethodInfo *v129; // x5
  int64_t v130; // x23
  UserServantEntity_o *v131; // x24
  UserServantEntity_o *v132; // x8
  PartyOrganizationUtility_o *v133; // x23
  __int64 v134; // x25
  __int64 v135; // x26
  int32_t v136; // w25
  int32_t v137; // w26
  int v138; // w8
  bool v139; // w0
  UserServantEntity_o *v140; // x8
  __int128 v141; // q0
  __int64 v142; // x22
  bool v143; // zf
  bool v144; // w8
  UserServantEntity_o *v145; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  int v160; // w22
  BalanceConfig_c *v161; // x8
  int64_t v162; // x8
  struct ServantEntity_o *v163; // x9
  UserServantEntity_o *v164; // x8
  __int64 v165; // x21
  __int64 v166; // x22
  int32_t v167; // w8
  __int64 v168; // x0
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v171; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v172; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v173; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v174; // [xsp+70h] [xbp-90h]
  int32_t actMaxRarity; // [xsp+94h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+98h] [xbp-68h] BYREF
  int32_t friendshipRank[3]; // [xsp+A4h] [xbp-5Ch] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v178; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v179; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v180; // 0:x0.16

  if ( (byte_4217F1B & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantClassMaster___, v21);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v22);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v23);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v24);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v25);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v26);
    sub_B0D8A4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v27);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v28);
    sub_B0D8A4(&IconLabelInfo_TypeInfo, v29);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v33);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v34);
    byte_4217F1B = 1;
  }
  friendshipRank[0] = 0;
  skillName = 0LL;
  actMaxRarity = 0;
  v35 = (IconLabelInfo_o *)sub_B0D974(IconLabelInfo_TypeInfo, *(_QWORD *)&index, userServantEntity);
  IconLabelInfo___ctor(v35, 0LL);
  this->fields.iconLabelInfo1 = v35;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v44 = (IconLabelInfo_o *)sub_B0D974(IconLabelInfo_TypeInfo, v42, v43);
  IconLabelInfo___ctor(v44, 0LL);
  this->fields.iconLabelInfo2 = v44;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  if ( !supportServantData )
    goto LABEL_76;
  if ( supportServantData->max_length <= nowDeckNum )
  {
    v168 = sub_B0D9A8(Instance);
    sub_B0D948(v168, 0LL);
  }
  v65 = supportServantData->m_Items[nowDeckNum];
  this->fields.supportServantData = v65;
  p_supportServantData = &this->fields.supportServantData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.supportServantData,
    (System_Int32_array **)v65,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)eventSetupInfo,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  v73 = this->fields.userServantEntity;
  if ( !v73 )
    goto LABEL_76;
  this->fields.svtId = v73->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v76 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v75 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v77 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v178.fields.currentCryptoKey = v76;
  *(_QWORD *)&v178.fields.fakeValue = v75;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v178, 0LL);
  if ( !v77 )
    goto LABEL_76;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v77,
                                       Instance,
                                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  this->fields.eventFriendPoints = friendPointCampaignEntityList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)friendPointCampaignEntityList,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  v92 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(this->fields.svtId, 0LL);
  v93 = this->fields.userServantEntity;
  if ( !v93 )
    goto LABEL_76;
  v94 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v93->fields.limitCount, 0LL);
  if ( !v92 )
    goto LABEL_76;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v92, v94, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_76;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_76;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v95 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_76;
  v96 = *(_OWORD *)&v95->fields.userId.fields.fakeValue;
  v97 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v174.fields.currentCryptoKey = *(_OWORD *)&v95->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v174.fields.fakeValue = v96;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v173 = v174;
  v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v173, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(this->fields.svtId, 0LL);
  if ( !v97 )
    goto LABEL_76;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v97, v98, Instance, 0LL);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity,
    0LL,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  this->fields.equipServantEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v105, v106, v107, v108, v109, v110);
  this->fields.equipIdList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v111, v112, v113, v114, v115, v116);
  v117 = this->fields.userServantEntity;
  if ( !v117 )
    goto LABEL_76;
  v118 = *(_OWORD *)&v117->fields.id.fields.fakeValue;
  *(_OWORD *)&v172.fields.currentCryptoKey = *(_OWORD *)&v117->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v172.fields.fakeValue = v118;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v172, 0LL);
  v120 = *p_supportServantData;
  if ( !*p_supportServantData )
    goto LABEL_76;
  v121 = Instance;
  Instance = SupportServantData__getMember(v120, classPos, v119);
  v122 = this->fields.userServantEntity;
  this->fields.isBase = v121 == Instance;
  if ( !v122 )
    goto LABEL_76;
  Instance = UserServantEntity__IsLock(v122, 0LL);
  v123 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v123 )
    goto LABEL_76;
  Instance = UserServantEntity__IsChoice(v123, 0LL);
  v124 = this->fields.userServantEntity;
  this->fields.isChoice = Instance & 1;
  if ( !v124 )
    goto LABEL_76;
  Instance = UserServantEntity__IsEventJoin(v124, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !servantEntity )
    goto LABEL_76;
  v127 = ServantEntity__checkIsHeroineSvt(servantEntity, 0LL);
  Instance = (int64_t)this->fields.supportServantData;
  this->fields.isHeroine = v127;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  if ( !Instance )
    goto LABEL_76;
  Equip = SupportServantData__getEquip((SupportServantData_o *)Instance, classPos, v126);
  if ( Equip < 1 )
    goto LABEL_44;
  v130 = Equip;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_76;
  v131 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
           (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
           v130,
           (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v132 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_76;
  v133 = (PartyOrganizationUtility_o *)Instance;
  v135 = *(_QWORD *)&v132->fields.svtId.fields.currentCryptoKey;
  v134 = *(_QWORD *)&v132->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v179.fields.currentCryptoKey = v135;
  *(_QWORD *)&v179.fields.fakeValue = v134;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v179, 0LL);
  if ( !*p_userServantEntity
    || (v136 = Instance, Instance = UserServantEntity__getRarity(*p_userServantEntity, 0LL), !v131)
    || (v137 = Instance,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v131->fields.svtId, 0LL),
        !v133) )
  {
LABEL_76:
    sub_B0D97C(Instance);
  }
  this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                   v133,
                                   &skillName,
                                   &actMaxRarity,
                                   v136,
                                   v137,
                                   Instance,
                                   -1,
                                   0LL);
LABEL_44:
  v138 = 0;
  this->fields.isUseInSet = 0;
  if ( isFixMainDeck )
  {
    v139 = SupportServantListViewItem__CheckUseInSet(
             this,
             &this->fields.useSet,
             fixMainDeckIds,
             nowDeckId,
             supportServantData,
             v129);
    v138 = v139;
    this->fields.isUseInSet = v139;
  }
  if ( !v138 && isFixEventDeck )
    this->fields.isUseInSet = SupportServantListViewItem__CheckUseInSet(
                                this,
                                &this->fields.useSet,
                                fixEventDeckIds,
                                nowDeckId,
                                supportServantData,
                                v129);
  this->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_76;
  v140 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_76;
  v141 = *(_OWORD *)&v140->fields.id.fields.fakeValue;
  v142 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v174.fields.currentCryptoKey = *(_OWORD *)&v140->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v174.fields.fakeValue = v141;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v171 = v174;
  v143 = v142 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v171, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  v144 = v143;
  this->fields.isPush = v144;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_76;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v145 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v145 )
    goto LABEL_76;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v145, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v147,
    v148,
    v149,
    v150,
    v151,
    v152);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_76;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v154,
    v155,
    v156,
    v157,
    v158,
    v159);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_76;
  v160 = *(_DWORD *)(Instance + 276);
  v161 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v161 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  this->fields.hpReinforceValue = v161->static_fields->StatusUpAdjustHp * v160;
  if ( !Instance )
    goto LABEL_76;
  this->fields.atkReinforceValue = v161->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_76;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_76;
  v162 = *(int *)(Instance + 48);
  v163 = this->fields.servantEntity;
  this->fields.priority = v162;
  this->fields.sortValue1B = v162;
  if ( !v163 )
    goto LABEL_76;
  v164 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_76;
  this->fields.sortValue2 = ((__int64)v163->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v164->fields.lv;
  v166 = *(_QWORD *)&v164->fields.svtId.fields.currentCryptoKey;
  v165 = *(_QWORD *)&v164->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v180.fields.currentCryptoKey = v166;
  *(_QWORD *)&v180.fields.fakeValue = v165;
  v167 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v180, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v167;
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
  __int64 v10; // x1
  __int64 v11; // x8
  unsigned __int64 v12; // x27
  char *v13; // x22
  int v14; // w8
  int32_t *v15; // x22
  int v16; // t1
  int32_t i; // w24
  il2cpp_array_size_t v18; // w8
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x0
  int32_t svtId; // w19
  __int64 v21; // x25
  __int64 v22; // x26
  bool result; // w0
  __int64 v24; // x0
  int32_t *v25; // [xsp+0h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  v9 = this;
  if ( (byte_4217F1C & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, setNo);
    this = (SupportServantListViewItem_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_4217F1C = 1;
  }
  *setNo = 0;
  if ( !fixDeckIds )
LABEL_28:
    sub_B0D97C(this);
  v11 = *(_QWORD *)&fixDeckIds->max_length;
  if ( (int)v11 < 1 )
    return 0;
  v25 = setNo;
  v12 = 0LL;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)v11 )
      goto LABEL_29;
    v13 = (char *)fixDeckIds + 4 * v12;
    v16 = *((_DWORD *)v13 + 8);
    v15 = (int32_t *)(v13 + 32);
    v14 = v16;
    if ( v16 != nowDeckId && v14 >= 1 )
      break;
LABEL_24:
    LODWORD(v11) = fixDeckIds->max_length;
    if ( (__int64)++v12 >= (int)v11 )
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
    if ( v12 >= fixDeckIds->max_length )
      goto LABEL_29;
    if ( !supportServantData )
      goto LABEL_28;
    v18 = *v15 - 1;
    if ( v18 >= supportServantData->max_length )
      goto LABEL_29;
    this = (SupportServantListViewItem_o *)supportServantData->m_Items[v18];
    if ( !this )
      goto LABEL_28;
    UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(
                                (SupportServantData_o *)this,
                                i,
                                (const MethodInfo *)fixDeckIds);
    if ( UserServantLeaderEntity )
    {
      svtId = UserServantLeaderEntity->fields.svtId;
      v22 = *(_QWORD *)&v9->fields.svtId.fields.currentCryptoKey;
      v21 = *(_QWORD *)&v9->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v27.fields.currentCryptoKey = v22;
      *(_QWORD *)&v27.fields.fakeValue = v21;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                               v27,
                                               0LL);
      if ( svtId == (_DWORD)this )
        break;
    }
  }
  if ( (unsigned int)v12 >= fixDeckIds->max_length )
  {
LABEL_29:
    v24 = sub_B0D9A8(this);
    sub_B0D948(v24, 0LL);
  }
  result = 1;
  *v25 = *v15;
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
  __int64 v3; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIdList; // x8
  int64_t v5; // x0
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

  if ( (byte_4217F22 & 1) == 0 )
  {
    sub_B0D8A4(&long___TypeInfo, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    byte_4217F22 = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0LL;
  v5 = sub_B0D8BC(long___TypeInfo, equipIdList->max_length);
  v6 = this->fields.equipIdList;
  if ( !v6 )
LABEL_14:
    sub_B0D97C(v5);
  v7 = (System_Int64_array *)v5;
  v8 = 0LL;
  v9 = v5 + 32;
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
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v16, 0LL);
    if ( v7 )
    {
      if ( v8 >= v7->max_length )
      {
LABEL_17:
        v15 = sub_B0D9A8(v5);
        sub_B0D948(v15, 0LL);
      }
      *(_QWORD *)(v9 + 8 * v8) = v5;
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
  __int64 v3; // x1
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  int32_t v5; // w20
  __int64 v6; // x22
  int max_length; // w9
  unsigned int v8; // w25
  __int64 v9; // x8
  System_Int32_array *v10; // x21
  int32_t SvtId; // w0
  __int64 v12; // x9
  __int64 v13; // x10
  _BOOL4 v14; // w10
  int32_t v15; // w21
  __int64 v17; // x0

  v2 = this;
  if ( (byte_4217F29 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, method);
    this = (SupportServantListViewItem_o *)sub_B0D8A4(&System_Math_TypeInfo, v3);
    byte_4217F29 = 1;
  }
  eventFriendPoints = v2->fields.eventFriendPoints;
  if ( !eventFriendPoints )
    return -1;
  v5 = -1;
  v6 = 4LL;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= max_length )
      return v5;
    if ( v8 >= max_length )
      goto LABEL_23;
    v9 = *((_QWORD *)&eventFriendPoints->obj.klass + v6);
    if ( v9 )
    {
      v10 = *(System_Int32_array **)(v9 + 40);
      SvtId = SupportServantListViewItem__get_SvtId(v2, method);
      this = (SupportServantListViewItem_o *)System_Array__IndexOf_int_(
                                               v10,
                                               SvtId,
                                               (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___);
      eventFriendPoints = v2->fields.eventFriendPoints;
      if ( eventFriendPoints )
      {
        if ( v8 >= eventFriendPoints->max_length )
        {
LABEL_23:
          v17 = sub_B0D9A8(this);
          sub_B0D948(v17, 0LL);
        }
        v12 = *((_QWORD *)&eventFriendPoints->obj.klass + v6);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v12 + 40);
          if ( v13 )
            v14 = *(_DWORD *)(v13 + 24) == 0;
          else
            v14 = 1;
          if ( v14 || (int)this >= 0 )
          {
            v15 = *(_DWORD *)(v12 + 48);
            if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Math_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            }
            this = (SupportServantListViewItem_o *)System_Math__Max_44559528(v5, v15, 0LL);
            eventFriendPoints = v2->fields.eventFriendPoints;
            v5 = (int)this;
          }
          ++v6;
          if ( eventFriendPoints )
            continue;
        }
      }
    }
    sub_B0D97C(this);
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

  if ( (byte_4217F28 & 1) == 0 )
  {
    sub_B0D8A4(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4217F28 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_B0D974(TreasureDvcInfo_TypeInfo, tdInfo, method);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_B0D840((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportServantListViewItem__IsMatchClass(
        SupportServantListViewItem_o *this,
        int32_t classType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ServantClassMaster_o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_4217F1F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantClassMaster___, *(_QWORD *)&classType);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v6);
    byte_4217F1F = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantClassMaster___);
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
                 (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_12:
    sub_B0D97C(Master_WarQuestSelectionMaster);
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
  SupportServantListViewItem_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v10; // x11
  int32_t dropDragPrefab; // w1
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  UserServantEntity_o *userServantEntity; // x21
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x21
  FilterKindList_c *v20; // x0
  ListViewSort_FilterKind_array *v21; // x0
  FilterKindList_c *v22; // x0
  ListViewSort_FilterKind_array *v23; // x0
  FilterKindList_c *v24; // x0
  FilterKindList_c *v25; // x0
  ListViewSort_FilterKind_array *v26; // x0
  FilterKindList_c *v27; // x0
  ListViewSort_FilterKind_array *v28; // x0
  UserServantEntity_o *v29; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v31; // x8
  System_Int32_array **SkillCategoryIdList; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **TreasureDeviceCategoryIdList; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v47; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v49; // w0
  __int64 v50; // x0

  v4 = this;
  if ( (byte_4217F20 & 1) == 0 )
  {
    sub_B0D8A4(&FilterKindList_TypeInfo, sort);
    sub_B0D8A4(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_B0D8A4(&ServantEventBonusFilterController_TypeInfo, v7);
    this = (SupportServantListViewItem_o *)sub_B0D8A4(&SupportServantListViewManager_TypeInfo, v8);
    byte_4217F20 = 1;
  }
  if ( !sort )
    goto LABEL_91;
  manager = sort->fields.manager;
  if ( !manager )
    goto LABEL_91;
  v10 = *(&SupportServantListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v10
    || (SupportServantListViewManager_c *)manager->klass->_2.typeHierarchy[v10 - 1] != SupportServantListViewManager_TypeInfo )
  {
    goto LABEL_91;
  }
  if ( (SupportServantListViewManager_c *)manager->klass->_2.typeHierarchy[*(&SupportServantListViewManager_TypeInfo->_2.bitflags2
                                                                           + 1)
                                                                         - 1] != SupportServantListViewManager_TypeInfo )
    manager = 0LL;
  dropDragPrefab = (int32_t)manager[1].fields.dropDragPrefab;
  if ( (unsigned int)(dropDragPrefab - 1) >= 7 )
  {
    if ( dropDragPrefab == 8 )
    {
      if ( !SupportServantListViewItem__IsMatchClass(v4, 8, method) )
        return 0;
      v20 = FilterKindList_TypeInfo;
      if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v20 = FilterKindList_TypeInfo;
      }
      this = (SupportServantListViewItem_o *)v20->static_fields->ClassGroupFilterKindList;
      if ( !this )
LABEL_91:
        sub_B0D97C(this);
      v21 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                               (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                               (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v21, 0LL) )
      {
        v22 = FilterKindList_TypeInfo;
        if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v22 = FilterKindList_TypeInfo;
        }
        this = (SupportServantListViewItem_o *)v22->static_fields->ClassExtra1InShielderFilterKindList;
        if ( !this )
          goto LABEL_91;
        v23 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                 (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                                 (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v23, 0LL) )
        {
LABEL_69:
          if ( !ListViewSort__IsMatchClassFilter(sort, v4->fields.servantEntity, 0LL) )
            return 0;
          goto LABEL_11;
        }
        v24 = FilterKindList_TypeInfo;
        if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v24 = FilterKindList_TypeInfo;
        }
        this = (SupportServantListViewItem_o *)v24->static_fields->ClassExtra2FilterKindList;
        if ( !this )
          goto LABEL_91;
LABEL_68:
        v28 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                 (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                                 (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v28, 0LL) )
          goto LABEL_11;
        goto LABEL_69;
      }
    }
    else
    {
      v25 = FilterKindList_TypeInfo;
      if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v25 = FilterKindList_TypeInfo;
      }
      this = (SupportServantListViewItem_o *)v25->static_fields->ClassGroupFilterKindList;
      if ( !this )
        goto LABEL_91;
      v26 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                               (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                               (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v26, 0LL) )
      {
        v27 = FilterKindList_TypeInfo;
        if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v27 = FilterKindList_TypeInfo;
        }
        this = (SupportServantListViewItem_o *)v27->static_fields->ClassFilterKindList;
        if ( !this )
          goto LABEL_91;
        goto LABEL_68;
      }
    }
    if ( !ListViewSort__IsMatchClassGroupFilter(sort, v4->fields.servantEntity, 0LL) )
      return 0;
    goto LABEL_11;
  }
  if ( !SupportServantListViewItem__IsMatchClass(v4, dropDragPrefab, method) )
    return 0;
LABEL_11:
  v12 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v12->static_fields->NpTypeFilterKindList;
  if ( !this )
    goto LABEL_91;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, v4->fields.userServantEntity, 0LL) )
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
  this = (SupportServantListViewItem_o *)v14->static_fields->NpEffectFilterKindList;
  if ( !this )
    goto LABEL_91;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, v4->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userServantEntity = v4->fields.userServantEntity;
    if ( (BYTE3(ServantEventBonusFilterController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    }
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, sort, -1, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v29 = v4->fields.userServantEntity;
    if ( v29 )
    {
      dispLimitCount = v4->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v29, 0, 0LL) )
      {
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_91;
        this = (SupportServantListViewItem_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0LL);
        v31 = v4->fields.userServantEntity;
        v4->fields.dispLimitCount = (int)this;
        if ( !v31 )
          goto LABEL_91;
        SkillCategoryIdList = (System_Int32_array **)UserServantEntity__GetSkillCategoryIdList(v31, -1, 0LL);
        v4->fields.skillCategoryIdList = (struct System_Int32_array *)SkillCategoryIdList;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v4->fields.skillCategoryIdList,
          SkillCategoryIdList,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_91;
        TreasureDeviceCategoryIdList = (System_Int32_array **)UserServantEntity__GetTreasureDeviceCategoryIdList(
                                                                (UserServantEntity_o *)this,
                                                                0,
                                                                0LL);
        v4->fields.tdCategoryIdList = (struct System_Int32_array *)TreasureDeviceCategoryIdList;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v4->fields.tdCategoryIdList,
          TreasureDeviceCategoryIdList,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
      }
    }
    this = (SupportServantListViewItem_o *)sub_B0D8BC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_91;
    if ( !this->fields.sortIndex )
      goto LABEL_92;
    LODWORD(this->fields.sortValue0) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)this,
                                     0LL);
    this = (SupportServantListViewItem_o *)sub_B0D8BC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_91;
    if ( !this->fields.sortIndex )
    {
LABEL_92:
      v50 = sub_B0D9A8(this);
      sub_B0D948(v50, 0LL);
    }
    LODWORD(this->fields.sortValue0) = 51;
    v47 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              v4->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v49 = ServantEquipEffectFilterController__IsMatchEffectCategory(v4->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v47) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v49 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v49 )
    {
      return 0;
    }
  }
  this = (SupportServantListViewItem_o *)sub_B0D8BC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_91;
  if ( !this->fields.sortIndex )
    goto LABEL_92;
  LODWORD(this->fields.sortValue0) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && v4->fields.isSwapChoice == v4->fields.isChoice )
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
  this = (SupportServantListViewItem_o *)v17->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_91;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v18, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, v4->fields.rarity, 0LL);
}


void __fastcall SupportServantListViewItem__Modify(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleServantConfConponent_o *p_userServantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // t1
  DataManager_o *Instance; // x0
  BattleServantConfConponent_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v11; // x20
  System_Int32_array **Entity; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-30h]

  if ( (byte_4217F1D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4217F1D = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  p_userServantEntity = (BattleServantConfConponent_o *)&this->fields.userServantEntity;
  if ( userServantEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    klass = p_userServantEntity->klass;
    if ( !p_userServantEntity->klass )
      goto LABEL_12;
    byval_arg = klass->_1.byval_arg;
    v11 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
    *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v20.fields.fakeValue = byval_arg;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v19 = v20;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v19, 0LL);
    if ( !v11 )
LABEL_12:
      sub_B0D97C(Instance);
    Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      v11,
                                      (int64_t)Instance,
                                      (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_userServantEntity->klass = (BattleServantConfConponent_c *)Entity;
    sub_B0D840(p_userServantEntity, Entity, v13, v14, v15, v16, v17, v18);
  }
}


void __fastcall SupportServantListViewItem__ModifyChoiceItem(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B0D97C(0LL);
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

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_userServantEntity )
    sub_B0D97C(0LL);
  this->fields.isEventJoin = UserServantEntity__IsEventJoin(*p_userServantEntity, 0LL);
}


void __fastcall SupportServantListViewItem__ModifyLockItem(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B0D97C(0LL);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall SupportServantListViewItem__Modify_31009488(
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
  sub_B0D840(
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  BattleServantConfConponent_o *p_equipUserServantEntity; // x20
  BattleServantConfConponent_o *p_equipServantEntity; // x19
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  BattleServantConfConponent_o *p_equipIdList; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int64_t Instance; // x0
  Il2CppObject *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  Il2CppObject *v41; // x22
  System_Int32_array **v42; // x1
  BalanceConfig_c *v43; // x0
  __int128 v44; // q1
  BattleServantConfConponent_c *v45; // x8
  Il2CppType this_arg; // q0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v47; // x21
  System_Int32_array **Entity; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  BattleServantConfConponent_c *v55; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  BattleServantConfConponent_c *v58; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v59; // x20
  Il2CppClass *v60; // x21
  Il2CppClass *v61; // x22
  System_Int32_array **v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  __int64 v69; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+40h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  klass = equipIdList;
  if ( (byte_4217F1E & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, equipIdList);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo, v15);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4217F1E = 1;
  }
  this->fields.equipUserServantEntity = 0LL;
  p_equipUserServantEntity = (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity;
  sub_B0D840(
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v20, v21, v22, v23, v24, v25);
  this->fields.equipIdList = 0LL;
  p_equipIdList = (BattleServantConfConponent_o *)&this->fields.equipIdList;
  sub_B0D840(p_equipIdList, 0LL, v27, v28, v29, v30, v31, v32);
  if ( !p_equipIdList->monitor )
    return;
  if ( klass )
  {
    if ( (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *)p_equipIdList->klass == klass )
      goto LABEL_15;
    v34 = System_Array__Clone((System_Array_o *)klass, 0LL);
    if ( !v34 )
    {
      v42 = 0LL;
      goto LABEL_14;
    }
    v41 = v34;
    v42 = (System_Int32_array **)sub_B0D964(v34, CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo);
    if ( v42 )
      goto LABEL_14;
    sub_B0DC70(v41);
  }
  v43 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v43 = BalanceConfig_TypeInfo;
  }
  v42 = (System_Int32_array **)sub_B0D8BC(
                                 CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo,
                                 (unsigned int)v43->static_fields->SvtEquipMax);
LABEL_14:
  p_equipIdList->klass = (BattleServantConfConponent_c *)v42;
  sub_B0D840(p_equipIdList, v42, v35, v36, v37, v38, v39, v40);
  klass = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *)p_equipIdList->klass;
  if ( !p_equipIdList->klass )
    goto LABEL_40;
LABEL_15:
  if ( !klass->max_length )
    goto LABEL_41;
  v44 = *(_OWORD *)&klass->m_Items[0].fields.fakeValue;
  *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&klass->m_Items[0].fields.currentCryptoKey;
  *(_OWORD *)&v72.fields.fakeValue = v44;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v71 = v72;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v71, 0LL) < 1 )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v45 = p_equipIdList->klass;
  if ( !p_equipIdList->klass )
    goto LABEL_40;
  if ( !LODWORD(v45->_1.namespaze) )
  {
LABEL_41:
    v69 = sub_B0D9A8(Instance);
    sub_B0D948(v69, 0LL);
  }
  this_arg = v45->_1.this_arg;
  v47 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  *(Il2CppType *)&v72.fields.currentCryptoKey = v45->_1.byval_arg;
  *(Il2CppType *)&v72.fields.fakeValue = this_arg;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v70 = v72;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v70, 0LL);
  if ( !v47 )
    goto LABEL_40;
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    v47,
                                    Instance,
                                    (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_equipUserServantEntity->klass = (BattleServantConfConponent_c *)Entity;
  sub_B0D840(p_equipUserServantEntity, Entity, v49, v50, v51, v52, v53, v54);
  v55 = p_equipUserServantEntity->klass;
  if ( p_equipUserServantEntity->klass )
  {
    declaringType = v55->_1.declaringType;
    parent = v55->_1.parent;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v73.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v73.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v73, 0LL) >= 1 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
        v58 = p_equipUserServantEntity->klass;
        if ( p_equipUserServantEntity->klass )
        {
          v59 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
          v61 = v58->_1.declaringType;
          v60 = v58->_1.parent;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v74.fields.currentCryptoKey = v61;
          *(_QWORD *)&v74.fields.fakeValue = v60;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v74, 0LL);
          if ( v59 )
          {
            v62 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v59,
                                           Instance,
                                           (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            p_equipServantEntity->klass = (BattleServantConfConponent_c *)v62;
            sub_B0D840(p_equipServantEntity, v62, v63, v64, v65, v66, v67, v68);
            return;
          }
        }
      }
LABEL_40:
      sub_B0D97C(Instance);
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

  if ( (byte_4217F23 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtId);
    byte_4217F23 = 1;
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
      v8 = sub_B0D9A8(v6);
      sub_B0D948(v8, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t bonusKind2; // w8
  int32_t *v10; // x8
  int32_t *p_bonusKind2Id; // x8
  int32_t v12; // w2
  bool IsEnableServant; // w0
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isChoice; // w9
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v17; // q1
  struct UserServantEntity_o *v18; // x8
  const MethodInfo *v19; // x2
  int64_t rarity; // x8
  int64_t hpReinforceValue; // x2
  int32_t adjustAtk; // w3
  int32_t v23; // w1
  struct UserServantEntity_o *v24; // x8
  struct UserServantEntity_o *equipUserServantEntity; // x9
  int64_t hp; // x10
  int32_t v27; // w4
  int32_t adjustHp; // w3
  int32_t v29; // w2
  int32_t v30; // w1
  struct UserServantEntity_o *v31; // x8
  struct UserServantEntity_o *v32; // x9
  int64_t atk; // x10
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *iconLabelInfo2; // x19
  __int64 v36; // x20
  __int64 v37; // x21
  int32_t v38; // w0
  SupportServantListViewItem_o *iconLabelInfo1; // x20
  int64_t v40; // x9
  struct ListViewManager_o *manager; // x8
  __int64 v42; // x11
  struct ListViewManager_o *v43; // x20
  int32_t eventFriendPoints; // w20
  __int64 v45; // x21
  __int64 v46; // x22
  const MethodInfo *v47; // x2
  struct ServantEntity_o *v48; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v50; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+30h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  v4 = this;
  if ( (byte_4217F21 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantFilterMaster___, sort);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    this = (SupportServantListViewItem_o *)sub_B0D8A4(&SupportServantListViewManager_TypeInfo, v8);
    byte_4217F21 = 1;
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
      this = (SupportServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_97;
      this = (SupportServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
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
        v10 = &sort->fields.bonusKind2Id;
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
        v10 = &sort->fields.bonusKind2Id;
      }
      v4->fields.bonusKind = 1;
      v12 = *v10;
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      v4->fields.bonusKindId = *v10;
      if ( !this )
        goto LABEL_97;
      IsEnableServant = UserServantEntity__getEventUpVal_21263896(
                          (UserServantEntity_o *)this,
                          v4->fields.eventSetupInfo,
                          v12,
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
      || !SupportServantListViewItem__IsMatchServantFilter(v4, sort, v19) )
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
        v17 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v53.fields.fakeValue = v17;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v52 = v53;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                 &v52,
                                                 0LL);
        v18 = v4->fields.userServantEntity;
        v4->fields.sortValue1 = (int64_t)this;
        if ( !v18 )
          goto LABEL_97;
        this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        if ( !this )
          goto LABEL_97;
        IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v18->fields.createdAt, 0, 0, 0, 0LL);
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
        UserServantEntity__getTreasureDeviceInfo_21271516((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
        LODWORD(hpReinforceValue) = tdMaxLv[1];
        this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = tdMaxLv[1];
        if ( !this )
          goto LABEL_97;
        adjustAtk = tdMaxLv[0];
        v23 = 33;
        break;
      case 5:
        v24 = v4->fields.userServantEntity;
        if ( !v24 )
          goto LABEL_97;
        equipUserServantEntity = v4->fields.equipUserServantEntity;
        hp = v24->fields.hp;
        if ( equipUserServantEntity )
        {
          this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = equipUserServantEntity->fields.hp + (int)hp;
          if ( !this )
            goto LABEL_97;
          v27 = equipUserServantEntity->fields.hp;
          adjustHp = v24->fields.adjustHp;
          v29 = v24->fields.hp;
          v30 = 46;
LABEL_56:
          IconLabelInfo__Set_26821248((IconLabelInfo_o *)this, v30, v29, adjustHp, v27, 0, 0, 0, 0LL);
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
              IconLabelInfo__Set_26821248(iconLabelInfo2, 2, eventFriendPoints, (int32_t)this, 0, 0, 0, 0, 0LL);
              LOBYTE(this) = 1;
              return (char)this;
            }
          }
LABEL_97:
          sub_B0D97C(this);
        }
        this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = hp;
        if ( !this )
          goto LABEL_97;
        adjustAtk = v24->fields.adjustHp;
        LODWORD(hpReinforceValue) = v24->fields.hp;
        v23 = 3;
        break;
      case 6:
        v31 = v4->fields.userServantEntity;
        if ( !v31 )
          goto LABEL_97;
        v32 = v4->fields.equipUserServantEntity;
        atk = v31->fields.atk;
        if ( v32 )
        {
          this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = v32->fields.atk + (int)atk;
          if ( !this )
            goto LABEL_97;
          v27 = v32->fields.atk;
          adjustHp = v31->fields.adjustAtk;
          v29 = v31->fields.atk;
          v30 = 47;
          goto LABEL_56;
        }
        this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = atk;
        if ( !this )
          goto LABEL_97;
        adjustAtk = v31->fields.adjustAtk;
        LODWORD(hpReinforceValue) = v31->fields.atk;
        v23 = 5;
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
        v23 = 7;
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
        v37 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
        v36 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v55.fields.currentCryptoKey = v37;
        *(_QWORD *)&v55.fields.fakeValue = v36;
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v55, 0LL);
        iconLabelInfo1 = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v40 = v38;
        friendship = v4->fields.friendship;
        v4->fields.sortValue1 = v40;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                 friendship,
                                                 0LL);
        if ( !iconLabelInfo1 )
          goto LABEL_97;
        adjustAtk = v4->fields.friendshipMax;
        LODWORD(hpReinforceValue) = (_DWORD)this;
        v23 = 32;
        this = iconLabelInfo1;
        break;
      case 0xE:
        this = (SupportServantListViewItem_o *)v4->fields.amountSortValue;
        if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
          goto LABEL_94;
        manager = sort->fields.manager;
        if ( manager
          && (v42 = *(&SupportServantListViewManager_TypeInfo->_2.bitflags2 + 1),
              *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v42) )
        {
          if ( (SupportServantListViewManager_c *)manager->klass->_2.typeHierarchy[v42 - 1] == SupportServantListViewManager_TypeInfo )
            v43 = sort->fields.manager;
          else
            v43 = 0LL;
        }
        else
        {
          v43 = 0LL;
        }
        v46 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
        v45 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v57.fields.currentCryptoKey = v46;
        *(_QWORD *)&v57.fields.fakeValue = v45;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                 v57,
                                                 0LL);
        if ( !v43 )
          goto LABEL_97;
        this = (SupportServantListViewItem_o *)SupportServantListViewManager__GetAmountSortValue(
                                                 (SupportServantListViewManager_o *)v43,
                                                 (int32_t)this,
                                                 v47);
        v4->fields.amountSortValue = (int64_t)this;
LABEL_94:
        v48 = v4->fields.servantEntity;
        if ( !v48 )
          goto LABEL_97;
        collectionNo = v48->fields.collectionNo;
        v50 = v4->fields.userServantEntity;
        v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
        if ( !v50 )
          goto LABEL_97;
        iconLabelInfo2 = v4->fields.iconLabelInfo1;
        eventFriendPoints = v50->fields.lv;
        this = (SupportServantListViewItem_o *)v50;
        goto LABEL_80;
      case 0xF:
        hpReinforceValue = v4->fields.hpReinforceValue;
        this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = hpReinforceValue;
        if ( !this )
          goto LABEL_97;
        adjustAtk = v4->fields.nowMaxHpReinforceValue;
        v23 = 44;
        break;
      case 0x10:
        hpReinforceValue = v4->fields.atkReinforceValue;
        this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = hpReinforceValue;
        if ( !this )
          goto LABEL_97;
        adjustAtk = v4->fields.nowMaxAtkReinforceValue;
        v23 = 45;
        break;
      default:
        return (char)this;
    }
    IconLabelInfo__Set_26821248((IconLabelInfo_o *)this, v23, hpReinforceValue, adjustAtk, 0, 0, 0, 0, 0LL);
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
    sub_B0D97C(this);
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
  if ( (byte_4217F26 & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, method);
    byte_4217F26 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_28088484(126, 0LL);
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
  if ( (byte_4217F27 & 1) == 0 )
  {
    this = (SupportServantListViewItem_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4217F27 = 1;
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
  this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v8, 0LL);
  if ( !supportServantData )
LABEL_9:
    sub_B0D97C(this);
  return SupportServantData__isUseServant(supportServantData, (int64_t)this, v6);
}


System_String_o *__fastcall SupportServantListViewItem__get_NameText(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4217F25 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_18452/*"error"*/, v3);
    byte_4217F25 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18452/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v7 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v10, 0LL);
  }
  else
  {
    v8 = -1;
  }
  return ServantEntity__getName(servantEntity, v8, -1, 0LL);
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

  if ( (byte_4217F24 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4217F24 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v6, 0LL);
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