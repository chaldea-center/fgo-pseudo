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
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  IconLabelInfo_o *v47; // x20
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  IconLabelInfo_o *v57; // x28
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  UserServantEntity_o **p_userServantEntity; // x21
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t Instance; // x0
  __int64 v73; // x1
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  struct SupportServantData_o *v80; // x1
  struct SupportServantData_o **p_supportServantData; // x24
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct UserServantEntity_o *v88; // x8
  Il2CppObject *MasterData_object; // x0
  __int64 v90; // x1
  __int64 v91; // x27
  __int64 v92; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v93; // x26
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  Il2CppObject *v108; // x25
  struct UserServantEntity_o *v109; // x8
  int32_t v110; // w27
  UserServantEntity_o *v111; // x8
  __int128 v112; // q1
  UserServantCollectionMaster_o *v113; // x25
  int64_t v114; // x26
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  struct UserServantEntity_o *v133; // x8
  __int128 v134; // q0
  const MethodInfo *v135; // x2
  SupportServantData_o *v136; // x8
  int64_t v137; // x24
  UserServantEntity_o *v138; // x8
  UserServantEntity_o *v139; // x8
  UserServantEntity_o *v140; // x8
  ServantEntity_o *servantEntity; // x8
  const MethodInfo *v142; // x2
  bool v143; // w8
  int64_t Equip; // x0
  const MethodInfo *v145; // x5
  int64_t v146; // x23
  Il2CppObject *v147; // x24
  UserServantEntity_o *v148; // x8
  PartyOrganizationUtility_o *v149; // x23
  __int64 v150; // x25
  __int64 v151; // x26
  int32_t v152; // w25
  int32_t v153; // w26
  bool v154; // w0
  UserServantEntity_o *v155; // x8
  __int128 v156; // q0
  __int64 v157; // x22
  bool v158; // zf
  bool v159; // w8
  UserServantEntity_o *v160; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  int v175; // w22
  BalanceConfig_c *v176; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t v178; // x8
  struct ServantEntity_o *v179; // x9
  UserServantEntity_o *v180; // x8
  __int64 v181; // x21
  __int64 v182; // x22
  int32_t v183; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v185; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v186; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v187; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v188; // [xsp+70h] [xbp-A0h]
  int32_t actMaxRarity; // [xsp+9Ch] [xbp-74h] BYREF
  System_String_o *skillName; // [xsp+A0h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+ACh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v192; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v193; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v194; // 0:x0.16

  if ( (byte_4B12BFB & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&index, userServantEntity);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v25, v26);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v27, v28);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v29, v30);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v31, v32);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v33, v34);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v35, v36);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v37, v38);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39, v40);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v41, v42);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43, v44);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v45, v46);
    byte_4B12BFB = 1;
  }
  friendshipRank = 0;
  skillName = 0LL;
  actMaxRarity = 0;
  v47 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, *(_QWORD *)&index, userServantEntity, supportServantData);
  IconLabelInfo___ctor(v47, 0LL);
  this->fields.iconLabelInfo1 = v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v47, v48, v49, v50, v51, v52, v53);
  v57 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v54, v55, v56);
  IconLabelInfo___ctor(v57, 0LL);
  this->fields.iconLabelInfo2 = v57;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v57, v59, v60, v61, v62, v63, v64);
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
    (int64_t)userServantEntity,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  if ( !supportServantData )
    goto LABEL_66;
  if ( supportServantData->max_length <= nowDeckNum )
    sub_1BCAA44(Instance, v73);
  v80 = supportServantData->m_Items[nowDeckNum];
  this->fields.supportServantData = v80;
  p_supportServantData = &this->fields.supportServantData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.supportServantData,
    (int64_t)v80,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventSetupInfo,
    (int64_t)eventSetupInfo,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  v88 = this->fields.userServantEntity;
  if ( !v88 )
    goto LABEL_66;
  this->fields.svtId = v88->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v92 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v91 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v93 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v90);
  *(_QWORD *)&v192.fields.currentCryptoKey = v92;
  *(_QWORD *)&v192.fields.fakeValue = v91;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v192, 0LL);
  if ( !v93 )
    goto LABEL_66;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v93,
             Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantEntity,
    (int64_t)Entity,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  this->fields.eventFriendPoints = friendPointCampaignEntityList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventFriendPoints,
    (int64_t)friendPointCampaignEntityList,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v108 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.svtId, 0LL);
  v109 = this->fields.userServantEntity;
  if ( !v109 )
    goto LABEL_66;
  v110 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v109->fields.limitCount, 0LL);
  if ( !v108 )
    goto LABEL_66;
  Instance = (int64_t)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v108, v110, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_66;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_66;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v111 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  v112 = *(_OWORD *)&v111->fields.userId.fields.fakeValue;
  v113 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v188.fields.currentCryptoKey = *(_OWORD *)&v111->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v188.fields.fakeValue = v112;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v73);
  v187 = v188;
  v114 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v187, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.svtId, 0LL);
  if ( !v113 )
    goto LABEL_66;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v113, v114, Instance, 0LL);
  if ( !Instance )
    goto LABEL_66;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &friendshipRank,
    &this->fields.friendshipMax,
    0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0LL);
  this->fields.isSame = 0;
  this->fields.equipUserServantEntity = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.equipUserServantEntity,
    0LL,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120);
  this->fields.equipServantEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipServantEntity, 0LL, v121, v122, v123, v124, v125, v126);
  this->fields.equipIdList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipIdList, 0LL, v127, v128, v129, v130, v131, v132);
  v133 = this->fields.userServantEntity;
  if ( !v133 )
    goto LABEL_66;
  v134 = *(_OWORD *)&v133->fields.id.fields.fakeValue;
  *(_OWORD *)&v186.fields.currentCryptoKey = *(_OWORD *)&v133->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v186.fields.fakeValue = v134;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v186, 0LL);
  v136 = *p_supportServantData;
  if ( !*p_supportServantData )
    goto LABEL_66;
  v137 = Instance;
  Instance = SupportServantData__getMember(v136, classPos, v135);
  v138 = this->fields.userServantEntity;
  this->fields.isBase = v137 == Instance;
  if ( !v138 )
    goto LABEL_66;
  Instance = UserServantEntity__IsLock(v138, 0LL);
  v139 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v139 )
    goto LABEL_66;
  Instance = UserServantEntity__IsChoice(v139, 0LL);
  v140 = this->fields.userServantEntity;
  this->fields.isChoice = Instance & 1;
  if ( !v140 )
    goto LABEL_66;
  Instance = UserServantEntity__IsEventJoin(v140, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !servantEntity )
    goto LABEL_66;
  v143 = ServantEntity__checkIsHeroineSvt(servantEntity, 0LL);
  Instance = (int64_t)this->fields.supportServantData;
  this->fields.isHeroine = v143;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  if ( !Instance )
    goto LABEL_66;
  Equip = SupportServantData__getEquip((SupportServantData_o *)Instance, classPos, v142);
  if ( Equip < 1 )
    goto LABEL_38;
  v146 = Equip;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_66;
  v147 = DataMasterBase_object__object__long___GetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           v146,
           (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v148 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  v149 = (PartyOrganizationUtility_o *)Instance;
  v151 = *(_QWORD *)&v148->fields.svtId.fields.currentCryptoKey;
  v150 = *(_QWORD *)&v148->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v73);
  *(_QWORD *)&v193.fields.currentCryptoKey = v151;
  *(_QWORD *)&v193.fields.fakeValue = v150;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v193, 0LL);
  if ( !*p_userServantEntity
    || (v152 = Instance, Instance = UserServantEntity__getRarity(*p_userServantEntity, 0LL), !v147)
    || (v153 = Instance,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v147[5],
                     0LL),
        !v149) )
  {
LABEL_66:
    sub_1BCAA3C(Instance, v73);
  }
  this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                   v149,
                                   &skillName,
                                   &actMaxRarity,
                                   v152,
                                   v153,
                                   Instance,
                                   -1,
                                   0LL);
LABEL_38:
  this->fields.isUseInSet = 0;
  if ( !isFixMainDeck
    || (v154 = SupportServantListViewItem__CheckUseInSet(
                 this,
                 &this->fields.useSet,
                 fixMainDeckIds,
                 nowDeckId,
                 supportServantData,
                 v145),
        !(this->fields.isUseInSet = v154)) )
  {
    if ( isFixEventDeck )
      this->fields.isUseInSet = SupportServantListViewItem__CheckUseInSet(
                                  this,
                                  &this->fields.useSet,
                                  fixEventDeckIds,
                                  nowDeckId,
                                  supportServantData,
                                  v145);
  }
  this->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_66;
  v155 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  v156 = *(_OWORD *)&v155->fields.id.fields.fakeValue;
  v157 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v188.fields.currentCryptoKey = *(_OWORD *)&v155->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v188.fields.fakeValue = v156;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v73);
  v185 = v188;
  v158 = v157 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v185, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  v159 = v158;
  this->fields.isPush = v159;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_66;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v160 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v160 )
    goto LABEL_66;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v160, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
    (int64_t)SkillCategoryIdList,
    v162,
    v163,
    v164,
    v165,
    v166,
    v167);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_66;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
    (int64_t)TreasureDeviceCategoryIdList,
    v169,
    v170,
    v171,
    v172,
    v173,
    v174);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_66;
  v175 = *(_DWORD *)(Instance + 276);
  v176 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v73);
    v176 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v176->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v175;
  if ( !Instance )
    goto LABEL_66;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_66;
  v178 = *(int *)(Instance + 52);
  v179 = this->fields.servantEntity;
  this->fields.priority = v178;
  this->fields.sortValue1B = v178;
  if ( !v179 )
    goto LABEL_66;
  v180 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  this->fields.sortValue2 = ((__int64)v179->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v180->fields.lv;
  v182 = *(_QWORD *)&v180->fields.svtId.fields.currentCryptoKey;
  v181 = *(_QWORD *)&v180->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v73);
  *(_QWORD *)&v194.fields.currentCryptoKey = v182;
  *(_QWORD *)&v194.fields.fakeValue = v181;
  v183 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v194, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v183;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_66;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_66;
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
  __int64 v11; // x2
  __int64 v12; // x8
  bool v13; // w19
  unsigned __int64 v14; // x28
  char *v15; // x22
  int v16; // w8
  int32_t *v17; // x22
  int v18; // t1
  int32_t i; // w24
  il2cpp_array_size_t v20; // w8
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x0
  int32_t svtId; // w27
  __int64 v23; // x25
  __int64 v24; // x26
  int32_t *v26; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  v9 = this;
  if ( (byte_4B12BFC & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, setNo, fixDeckIds);
    this = (SupportServantListViewItem_o *)sub_1BCA7E0(
                                             &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                             v10,
                                             v11);
    byte_4B12BFC = 1;
  }
  *setNo = 0;
  if ( !fixDeckIds )
LABEL_28:
    sub_1BCAA3C(this, setNo);
  v12 = *(_QWORD *)&fixDeckIds->max_length;
  v13 = (int)v12 > 0;
  if ( (int)v12 >= 1 )
  {
    v26 = setNo;
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v12 )
        goto LABEL_27;
      v15 = (char *)fixDeckIds + 4 * v14;
      v18 = *((_DWORD *)v15 + 8);
      v17 = (int32_t *)(v15 + 32);
      v16 = v18;
      if ( v18 != nowDeckId && v16 >= 1 )
        break;
LABEL_22:
      LODWORD(v12) = fixDeckIds->max_length;
      v13 = (__int64)++v14 < (int)v12;
      if ( (__int64)v14 >= (int)v12 )
        return v13;
    }
    for ( i = 0; ; ++i )
    {
      this = (SupportServantListViewItem_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, setNo);
        this = (SupportServantListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( i >= *(_DWORD *)(*(_QWORD *)&this->fields.friendshipMax + 164LL) )
        goto LABEL_22;
      if ( v14 >= fixDeckIds->max_length )
        goto LABEL_27;
      if ( !supportServantData )
        goto LABEL_28;
      v20 = *v17 - 1;
      if ( v20 >= supportServantData->max_length )
        goto LABEL_27;
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
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setNo);
        *(_QWORD *)&v28.fields.currentCryptoKey = v24;
        *(_QWORD *)&v28.fields.fakeValue = v23;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                 v28,
                                                 0LL);
        if ( svtId == (_DWORD)this )
          break;
      }
    }
    if ( (unsigned int)v14 >= fixDeckIds->max_length )
LABEL_27:
      sub_1BCAA44(this, setNo);
    *v26 = *v17;
  }
  return v13;
}


void __fastcall SupportServantListViewItem__Finalize(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_Int64_array *__fastcall SupportServantListViewItem__GetEquipList(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIdList; // x8
  int64_t v7; // x0
  __int64 v8; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v9; // x8
  System_Int64_array *v10; // x20
  unsigned __int64 v11; // x21
  int64_t v12; // x23
  __int64 v13; // x24
  unsigned __int64 max_length; // x9
  _OWORD *v15; // x8
  __int128 v16; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-60h]

  if ( (byte_4B12C02 & 1) == 0 )
  {
    sub_1BCA7E0(&long___TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v5);
    byte_4B12C02 = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0LL;
  v7 = sub_1BCA888(long___TypeInfo, equipIdList->max_length);
  v9 = this->fields.equipIdList;
  if ( !v9 )
LABEL_13:
    sub_1BCAA3C(v7, v8);
  v10 = (System_Int64_array *)v7;
  v11 = 0LL;
  v12 = v7 + 32;
  v13 = 32LL;
  while ( 1 )
  {
    max_length = v9->max_length;
    if ( (__int64)v11 >= (int)max_length )
      return v10;
    if ( v11 >= max_length )
      goto LABEL_16;
    v15 = (_OWORD *)((char *)v9 + v13);
    v16 = v15[1];
    *(_OWORD *)&v19.fields.currentCryptoKey = *v15;
    *(_OWORD *)&v19.fields.fakeValue = v16;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    v18 = v19;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v18, 0LL);
    if ( v10 )
    {
      if ( v11 >= v10->max_length )
LABEL_16:
        sub_1BCAA44(v7, v8);
      *(_QWORD *)(v12 + 8 * v11) = v7;
      v9 = this->fields.equipIdList;
      ++v11;
      v13 += 32LL;
      if ( v9 )
        continue;
    }
    goto LABEL_13;
  }
}


int32_t __fastcall SupportServantListViewItem__GetFriendPointBonus(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SupportServantListViewItem_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  int32_t v7; // w20
  __int64 v8; // x24
  int max_length; // w9
  unsigned int v10; // w25
  __int64 v11; // x8
  System_Int32_array *v12; // x21
  int32_t SvtId; // w0
  __int64 v14; // x9
  __int64 v15; // x10
  _BOOL4 v16; // w10
  int32_t v17; // w21

  v3 = this;
  if ( (byte_4B12C09 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, method, v2);
    this = (SupportServantListViewItem_o *)sub_1BCA7E0(&System_Math_TypeInfo, v4, v5);
    byte_4B12C09 = 1;
  }
  eventFriendPoints = v3->fields.eventFriendPoints;
  if ( !eventFriendPoints )
    return -1;
  v7 = -1;
  v8 = 4LL;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    v10 = v8 - 4;
    if ( (int)v8 - 4 >= max_length )
      return v7;
    if ( v10 >= max_length )
      goto LABEL_22;
    v11 = *((_QWORD *)&eventFriendPoints->obj.klass + v8);
    if ( v11 )
    {
      v12 = *(System_Int32_array **)(v11 + 40);
      SvtId = SupportServantListViewItem__get_SvtId(v3, method);
      this = (SupportServantListViewItem_o *)System_Array__IndexOf_int_(
                                               v12,
                                               SvtId,
                                               (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
      eventFriendPoints = v3->fields.eventFriendPoints;
      if ( eventFriendPoints )
      {
        if ( v10 >= eventFriendPoints->max_length )
LABEL_22:
          sub_1BCAA44(this, method);
        v14 = *((_QWORD *)&eventFriendPoints->obj.klass + v8);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 40);
          if ( v15 )
            v16 = *(_DWORD *)(v15 + 24) == 0;
          else
            v16 = 1;
          if ( v16 || (int)this >= 0 )
          {
            v17 = *(_DWORD *)(v14 + 48);
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
            this = (SupportServantListViewItem_o *)System_Math__Max_63220196(v7, v17, 0LL);
            eventFriendPoints = v3->fields.eventFriendPoints;
            v7 = (int)this;
          }
          ++v8;
          if ( eventFriendPoints )
            continue;
        }
      }
    }
    sub_1BCAA3C(this, method);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B12C08 & 1) == 0 )
  {
    sub_1BCA7E0(&TreasureDvcInfo_TypeInfo, tdInfo, method);
    byte_4B12C08 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0LL);
  v8 = (TreasureDvcInfo_o *)sub_1BCAA2C(TreasureDvcInfo_TypeInfo, tdInfo, method, v3);
  TreasureDvcInfo___ctor(v8, 0LL);
  *tdInfo = v8;
  sub_1BCA784((PartyOrganizationUtility_o *)tdInfo, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportServantListViewItem__IsMatchClass(
        SupportServantListViewItem_o *this,
        int32_t classType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ServantClassMaster_o *Master_object; // x0
  __int64 v10; // x1

  if ( (byte_4B12BFF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantClassMaster___, *(_QWORD *)&classType, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v7, v8);
    byte_4B12BFF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&classType);
  Master_object = (ServantClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( classType == 8 )
  {
    if ( Master_object )
    {
      Master_object = (ServantClassMaster_o *)ServantClassMaster__getExtraClassIdList(Master_object, 0LL);
      if ( Master_object )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)Master_object,
                 this->fields.classId,
                 (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_11:
    sub_1BCAA3C(Master_object, v10);
  }
  if ( !Master_object )
    goto LABEL_11;
  return ServantClassMaster__getSupportGroupType(Master_object, this->fields.classId, 0LL) == classType;
}


bool __fastcall SupportServantListViewItem__IsMatchServantFilter(
        SupportServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ListViewSort_o *v3; // x19
  SupportServantListViewItem_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  unsigned int *manager; // x8
  __int64 methodPtr_low; // x11
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  __int64 v19; // x1
  UserServantEntity_o *userServantEntity; // x21
  SupportServantListViewItem_o *v21; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v23; // x0
  ListViewSort_FilterKind_array *v24; // x21
  FilterKindList_c *v26; // x0
  ListViewSort_FilterKind_array *v27; // x0
  FilterKindList_c *v28; // x0
  ListViewSort_FilterKind_array *v29; // x0
  FilterKindList_c *v30; // x0
  FilterKindList_c *v31; // x0
  ListViewSort_FilterKind_array *v32; // x0
  FilterKindList_c *v33; // x0
  ListViewSort_FilterKind_array *v34; // x0
  UserServantEntity_o *v35; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v37; // x8
  System_Int32_array *SkillCategoryIdList; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v53; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v55; // w0

  v3 = sort;
  v4 = this;
  if ( (byte_4B12C00 & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, sort, method);
    sub_1BCA7E0(&ListViewSort_FilterKind___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v7, v8);
    sub_1BCA7E0(&ServantEventBonusFilterController_TypeInfo, v9, v10);
    this = (SupportServantListViewItem_o *)sub_1BCA7E0(&SupportServantListViewManager_TypeInfo, v11, v12);
    byte_4B12C00 = 1;
  }
  if ( !v3 )
    goto LABEL_82;
  manager = (unsigned int *)v3->fields.manager;
  if ( !manager )
    goto LABEL_82;
  methodPtr_low = LOBYTE(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)manager + 304LL) < (unsigned int)methodPtr_low
    || *(SupportServantListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * methodPtr_low - 8) != SupportServantListViewManager_TypeInfo )
  {
    goto LABEL_82;
  }
  sort = (ListViewSort_o *)manager[106];
  if ( (unsigned int)((_DWORD)sort - 1) >= 7 )
  {
    if ( (_DWORD)sort == 8 )
    {
      if ( !SupportServantListViewItem__IsMatchClass(v4, 8, method) )
        return 0;
      v26 = FilterKindList_TypeInfo;
      if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
        v26 = FilterKindList_TypeInfo;
      }
      this = (SupportServantListViewItem_o *)v26->static_fields->ClassGroupFilterKindList;
      if ( !this )
LABEL_82:
        sub_1BCAA3C(this, sort);
      v27 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                               (System_Collections_Generic_List_T__o *)this,
                                               (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( ListViewSort__IsUnSelectedAllTargetFilters(v3, v27, 0LL) )
      {
        v28 = FilterKindList_TypeInfo;
        if ( !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
          v28 = FilterKindList_TypeInfo;
        }
        this = (SupportServantListViewItem_o *)v28->static_fields->ClassExtra1InShielderFilterKindList;
        if ( !this )
          goto LABEL_82;
        v29 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                 (System_Collections_Generic_List_T__o *)this,
                                                 (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v29, 0LL) )
        {
LABEL_60:
          if ( !ListViewSort__IsMatchClassFilter(v3, v4->fields.servantEntity, 0LL) )
            return 0;
          goto LABEL_9;
        }
        v30 = FilterKindList_TypeInfo;
        if ( !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
          v30 = FilterKindList_TypeInfo;
        }
        this = (SupportServantListViewItem_o *)v30->static_fields->ClassExtra2FilterKindList;
        if ( !this )
          goto LABEL_82;
LABEL_59:
        v34 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                 (System_Collections_Generic_List_T__o *)this,
                                                 (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( ListViewSort__IsUnSelectedAllTargetFilters(v3, v34, 0LL) )
          goto LABEL_9;
        goto LABEL_60;
      }
    }
    else
    {
      v31 = FilterKindList_TypeInfo;
      if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
        v31 = FilterKindList_TypeInfo;
      }
      this = (SupportServantListViewItem_o *)v31->static_fields->ClassGroupFilterKindList;
      if ( !this )
        goto LABEL_82;
      v32 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                               (System_Collections_Generic_List_T__o *)this,
                                               (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( ListViewSort__IsUnSelectedAllTargetFilters(v3, v32, 0LL) )
      {
        v33 = FilterKindList_TypeInfo;
        if ( !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
          v33 = FilterKindList_TypeInfo;
        }
        this = (SupportServantListViewItem_o *)v33->static_fields->ClassFilterKindList;
        if ( !this )
          goto LABEL_82;
        goto LABEL_59;
      }
    }
    if ( !ListViewSort__IsMatchClassGroupFilter(v3, v4->fields.servantEntity, 0LL) )
      return 0;
    goto LABEL_9;
  }
  if ( !SupportServantListViewItem__IsMatchClass(v4, (int32_t)sort, method) )
    return 0;
LABEL_9:
  v15 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v15 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v15->static_fields->NpTypeFilterKindList;
  if ( !this )
    goto LABEL_82;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v16, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(v3, v4->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v17 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v17->static_fields->NpEffectFilterKindList;
  if ( !this )
    goto LABEL_82;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v18, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(v3, v4->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(v3, -1, 0LL) )
  {
    userServantEntity = v4->fields.userServantEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo, v19);
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, v3, -1, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(v3, 0LL) )
  {
    v35 = v4->fields.userServantEntity;
    if ( v35 )
    {
      dispLimitCount = v4->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v35, 0, 0LL) )
      {
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_82;
        this = (SupportServantListViewItem_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0LL);
        v37 = v4->fields.userServantEntity;
        v4->fields.dispLimitCount = (int)this;
        if ( !v37 )
          goto LABEL_82;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v37, -1, 0LL);
        v4->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v4->fields.skillCategoryIdList,
          (int64_t)SkillCategoryIdList,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_82;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)this,
                                         0,
                                         0LL);
        v4->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v4->fields.tdCategoryIdList,
          (int64_t)TreasureDeviceCategoryIdList,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
      }
    }
    this = (SupportServantListViewItem_o *)sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_82;
    v21 = this;
    if ( !this->fields.sortIndex )
      goto LABEL_83;
    LODWORD(this->fields.sortValue0) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     v3,
                                     (ListViewSort_FilterKind_array *)this,
                                     0LL);
    this = (SupportServantListViewItem_o *)sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_82;
    v21 = this;
    if ( !this->fields.sortIndex )
LABEL_83:
      sub_1BCAA44(this, v21);
    LODWORD(this->fields.sortValue0) = 51;
    v53 = ListViewSort__IsUnSelectedAllTargetFilters(v3, (ListViewSort_FilterKind_array *)this, 0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              v4->fields.tdCategoryIdList,
                              v3,
                              0LL);
    v55 = ServantEquipEffectFilterController__IsMatchEffectCategory(v4->fields.skillCategoryIdList, v3, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v53) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v55 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v55 )
    {
      return 0;
    }
  }
  this = (SupportServantListViewItem_o *)sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_82;
  v21 = this;
  if ( !this->fields.sortIndex )
    goto LABEL_83;
  LODWORD(this->fields.sortValue0) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, (ListViewSort_FilterKind_array *)this, 0LL)
    && ListViewSort__GetFilter(v3, 39, 0LL) )
  {
    isChoice = !v4->fields.isChoice;
    if ( !v4->fields.isSwapChoice )
      isChoice = v4->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v23 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v23 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v23->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_82;
  v24 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(v3, v24, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(v3, v24, 0LL)
      || ListViewSort__IsMatchRarityFilter(v3, v4->fields.rarity, 0LL);
}


void __fastcall SupportServantListViewItem__Modify(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  PartyOrganizationUtility_o *p_userServantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // t1
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  PartyOrganizationUtility_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x20
  Il2CppObject *Entity; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-40h]

  if ( (byte_4B12BFD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B12BFD = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  p_userServantEntity = (PartyOrganizationUtility_o *)&this->fields.userServantEntity;
  if ( userServantEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_11;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    klass = p_userServantEntity->klass;
    if ( !p_userServantEntity->klass )
      goto LABEL_11;
    byval_arg = klass->_1.byval_arg;
    v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v25.fields.fakeValue = byval_arg;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    v24 = v25;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v24, 0LL);
    if ( !v16 )
LABEL_11:
      sub_1BCAA3C(Instance, v13);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v16,
               (int64_t)Instance,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_userServantEntity->klass = (PartyOrganizationUtility_c *)Entity;
    sub_1BCA784(p_userServantEntity, (int64_t)Entity, v18, v19, v20, v21, v22, v23);
  }
}


void __fastcall SupportServantListViewItem__ModifyChoiceItem(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1BCAA3C(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userServantEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall SupportServantListViewItem__ModifyItem(
        SupportServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UserServantEntity_o **p_userServantEntity; // x20
  __int64 v10; // x1

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
    (int64_t)userServantEntity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_userServantEntity )
    sub_1BCAA3C(0LL, v10);
  this->fields.isEventJoin = UserServantEntity__IsEventJoin(*p_userServantEntity, 0LL);
}


void __fastcall SupportServantListViewItem__ModifyLockItem(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1BCAA3C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall SupportServantListViewItem__Modify_34037692(
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.eventFriendPoints = friendPointCampaigns;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventFriendPoints,
    (int64_t)friendPointCampaigns,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  PartyOrganizationUtility_o *p_equipUserServantEntity; // x20
  PartyOrganizationUtility_o *p_equipServantEntity; // x19
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  PartyOrganizationUtility_o *p_equipIdList; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t Instance; // x0
  __int64 v42; // x1
  PartyOrganizationUtility_c *klass; // x8
  Il2CppObject *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  Il2CppObject *v51; // x22
  int64_t v52; // x1
  BalanceConfig_c *v53; // x0
  Il2CppType this_arg; // q1
  PartyOrganizationUtility_c *v55; // x8
  Il2CppType v56; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v57; // x21
  Il2CppObject *Entity; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  __int64 v65; // x1
  PartyOrganizationUtility_c *v66; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  PartyOrganizationUtility_c *v69; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v70; // x20
  Il2CppClass *v71; // x21
  Il2CppClass *v72; // x22
  Il2CppObject *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+40h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_4B12BFE & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, equipIdList, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v16, v17);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    byte_4B12BFE = 1;
  }
  this->fields.equipUserServantEntity = 0LL;
  p_equipUserServantEntity = (PartyOrganizationUtility_o *)&this->fields.equipUserServantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.equipUserServantEntity,
    0LL,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.equipServantEntity = 0LL;
  p_equipServantEntity = (PartyOrganizationUtility_o *)&this->fields.equipServantEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipServantEntity, 0LL, v28, v29, v30, v31, v32, v33);
  this->fields.equipIdList = 0LL;
  p_equipIdList = (PartyOrganizationUtility_o *)&this->fields.equipIdList;
  sub_1BCA784(p_equipIdList, 0LL, v35, v36, v37, v38, v39, v40);
  if ( !p_equipIdList->monitor )
    return;
  if ( !equipIdList )
    goto LABEL_9;
  klass = p_equipIdList->klass;
  if ( (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *)p_equipIdList->klass == equipIdList )
    goto LABEL_14;
  v44 = System_Array__Clone((System_Array_o *)equipIdList, 0LL);
  if ( v44 )
  {
    v51 = v44;
    v52 = sub_1BCA91C(v44, CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo);
    if ( !v52 )
    {
      sub_1BCACFC(v51);
LABEL_9:
      v53 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v42);
        v53 = BalanceConfig_TypeInfo;
      }
      v52 = sub_1BCA888(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo,
              (unsigned int)v53->static_fields->SvtEquipMax);
    }
  }
  else
  {
    v52 = 0LL;
  }
  p_equipIdList->klass = (PartyOrganizationUtility_c *)v52;
  sub_1BCA784(p_equipIdList, v52, v45, v46, v47, v48, v49, v50);
  klass = p_equipIdList->klass;
LABEL_14:
  if ( !klass )
    goto LABEL_36;
  if ( !LODWORD(klass->_1.namespaze) )
    goto LABEL_37;
  this_arg = klass->_1.this_arg;
  *(Il2CppType *)&v82.fields.currentCryptoKey = klass->_1.byval_arg;
  *(Il2CppType *)&v82.fields.fakeValue = this_arg;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v42);
  v81 = v82;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v81, 0LL) < 1 )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v55 = p_equipIdList->klass;
  if ( !p_equipIdList->klass )
    goto LABEL_36;
  if ( !LODWORD(v55->_1.namespaze) )
LABEL_37:
    sub_1BCAA44(Instance, v42);
  v56 = v55->_1.this_arg;
  v57 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  *(Il2CppType *)&v82.fields.currentCryptoKey = v55->_1.byval_arg;
  *(Il2CppType *)&v82.fields.fakeValue = v56;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v42);
  v80 = v82;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v80, 0LL);
  if ( !v57 )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v57,
             Instance,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_equipUserServantEntity->klass = (PartyOrganizationUtility_c *)Entity;
  sub_1BCA784(p_equipUserServantEntity, (int64_t)Entity, v59, v60, v61, v62, v63, v64);
  v66 = p_equipUserServantEntity->klass;
  if ( p_equipUserServantEntity->klass )
  {
    declaringType = v66->_1.declaringType;
    parent = v66->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v65);
    *(_QWORD *)&v83.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v83.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v83, 0LL) >= 1 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
        v69 = p_equipUserServantEntity->klass;
        if ( p_equipUserServantEntity->klass )
        {
          v70 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v72 = v69->_1.declaringType;
          v71 = v69->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v42);
          *(_QWORD *)&v84.fields.currentCryptoKey = v72;
          *(_QWORD *)&v84.fields.fakeValue = v71;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v84, 0LL);
          if ( v70 )
          {
            v73 = DataMasterBase_object__object__int___GetEntity(
                    v70,
                    Instance,
                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            p_equipServantEntity->klass = (PartyOrganizationUtility_c *)v73;
            sub_1BCA784(p_equipServantEntity, (int64_t)v73, v74, v75, v76, v77, v78, v79);
            return;
          }
        }
      }
LABEL_36:
      sub_1BCAA3C(Instance, v42);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int128 v9; // [xsp+10h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4B12C03 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtId, method);
    byte_4B12C03 = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtId);
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v10, userSvtId, 0LL);
    v9 = *(_OWORD *)&v10.fields.fakeValue;
    if ( !equipIdList->max_length )
      sub_1BCAA44(v6, v7);
    *(_OWORD *)&equipIdList->m_Items[0].fields.currentCryptoKey = *(_OWORD *)&v10.fields.currentCryptoKey;
    *(_OWORD *)&equipIdList->m_Items[0].fields.fakeValue = v9;
    SupportServantListViewItem__SetEquipStatus(this, this->fields.equipIdList, v8);
  }
}


bool __fastcall SupportServantListViewItem__SetSortValue(
        SupportServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  SupportServantListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  int32_t bonusKind2; // w8
  int32_t v28; // w2
  int32_t bonusKind2Id; // w8
  int32_t v30; // w8
  int32_t v31; // w8
  bool IsEnableServant; // w0
  Il2CppObject *Master_object; // x0
  __int64 v34; // x1
  __int64 v35; // x22
  __int64 v36; // x23
  EventCampaignMaster_o *v37; // x21
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  __int64 v39; // x2
  __int64 v40; // x3
  System_Func_object__bool__o *v41; // x22
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v44; // zf
  _BOOL4 v45; // w8
  int v46; // w10
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v48; // q1
  struct UserServantEntity_o *v49; // x8
  const MethodInfo *v50; // x2
  int64_t rarity; // x8
  int64_t eventFriendPoints_low; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t hp; // x2
  int32_t adjustAtk; // w3
  int32_t v56; // w1
  struct UserServantEntity_o *v57; // x8
  struct UserServantEntity_o *equipUserServantEntity; // x9
  int32_t atk; // w4
  int32_t adjustHp; // w3
  int32_t v61; // w1
  struct UserServantEntity_o *v62; // x8
  struct UserServantEntity_o *v63; // x9
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *iconLabelInfo2; // x19
  __int64 v66; // x20
  __int64 v67; // x21
  int32_t v68; // w0
  SupportServantListViewItem_o *v69; // x20
  int64_t v70; // x9
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v73; // x20
  int32_t eventFriendPoints; // w20
  __int64 v75; // x21
  __int64 v76; // x22
  const MethodInfo *v77; // x2
  struct ServantEntity_o *v78; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v80; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  v4 = this;
  if ( (byte_4B12C01 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_EventGroupEntity___, sort, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantFilterMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventGroupMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Func_EventGroupEntity__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&Method_SupportServantListViewItem__SetSortValue_b__53_0__, v23, v24);
    this = (SupportServantListViewItem_o *)sub_1BCA7E0(&SupportServantListViewManager_TypeInfo, v25, v26);
    byte_4B12C01 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  if ( !sort )
    goto LABEL_121;
  if ( sort->fields.isBonusKind && !v4->fields.isBase )
  {
    bonusKind2 = sort->fields.bonusKind2;
    switch ( bonusKind2 )
    {
      case 0:
        if ( v4->fields.bonusKind )
        {
          bonusKind2Id = sort->fields.bonusKind2Id;
        }
        else
        {
          bonusKind2Id = sort->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == bonusKind2Id )
            goto LABEL_42;
        }
        v4->fields.bonusKind = 0;
        v4->fields.bonusKindId = bonusKind2Id;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
        this = (SupportServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( !this )
          goto LABEL_121;
        EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                              (EventGroupMaster_o *)this,
                              v4->fields.bonusKindId,
                              0LL);
        this = (SupportServantListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !EntitiesByGroupId )
            goto LABEL_121;
          if ( EntitiesByGroupId->fields._size >= 2 )
          {
            v41 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                   System_Func_EventGroupEntity__bool__TypeInfo,
                                                   sort,
                                                   v39,
                                                   v40);
            System_Func_object__bool____ctor(
              v41,
              (Il2CppObject *)v4,
              Method_SupportServantListViewItem__SetSortValue_b__53_0__,
              0LL);
            v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                        (System_Func_T__bool__o *)v41,
                                        (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_EventGroupEntity___);
          }
        }
        goto LABEL_42;
      case 3:
        if ( v4->fields.bonusKind == 3 )
        {
          v30 = sort->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == v30 )
          {
LABEL_42:
            if ( !v4->fields.isEventUpVal )
              goto LABEL_65;
            break;
          }
        }
        else
        {
          v30 = sort->fields.bonusKind2Id;
        }
        v4->fields.bonusKind = 3;
        v4->fields.bonusKindId = v30;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
        v36 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
        v35 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
        v37 = (EventCampaignMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34);
        *(_QWORD *)&v85.fields.currentCryptoKey = v36;
        *(_QWORD *)&v85.fields.fakeValue = v35;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                 v85,
                                                 0LL);
        if ( !v37 )
          goto LABEL_121;
        IsEnableServant = EventCampaignMaster__IsEnableServant(v37, (int32_t)this, v4->fields.bonusKindId, 0LL);
LABEL_32:
        v4->fields.isEventUpVal = IsEnableServant;
        if ( !IsEnableServant )
          goto LABEL_65;
        break;
      case 4:
      case 5:
        if ( v4->fields.bonusKind == bonusKind2 )
        {
          v28 = sort->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == v28 )
            goto LABEL_42;
        }
        else
        {
          v28 = sort->fields.bonusKind2Id;
        }
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        v4->fields.bonusKind = bonusKind2;
        v4->fields.bonusKindId = v28;
        if ( !this )
          goto LABEL_121;
        IsEnableServant = UserServantEntity__getEventUpVal_40936552(
                            (UserServantEntity_o *)this,
                            v4->fields.eventSetupInfo,
                            v28,
                            0LL,
                            0LL);
        goto LABEL_32;
      case 7:
        if ( v4->fields.bonusKind == 7 )
        {
          v31 = sort->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == v31 )
            goto LABEL_42;
        }
        else
        {
          v31 = sort->fields.bonusKind2Id;
        }
        v4->fields.bonusKind = 7;
        v4->fields.bonusKindId = v31;
        this = (SupportServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_121;
        this = (SupportServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
        if ( !this )
          goto LABEL_121;
        IsEnableServant = ServantFilterMaster__IsEnableServant(
                            (ServantFilterMaster_o *)this,
                            v4->fields.svtId,
                            v4->fields.bonusKindId,
                            0LL);
        goto LABEL_32;
      default:
        break;
    }
  }
  if ( !v4->fields.isBase )
  {
    this = (SupportServantListViewItem_o *)v4->fields.servantEntity;
    if ( !this )
      goto LABEL_121;
    if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0LL) )
      goto LABEL_65;
    this = (SupportServantListViewItem_o *)v4->fields.servantEntity;
    if ( !this )
      goto LABEL_121;
    if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0LL)
      || !SupportServantListViewItem__IsMatchServantFilter(v4, sort, v50) )
    {
LABEL_65:
      LOBYTE(this) = 0;
      return (char)this;
    }
  }
  isChoice = v4->fields.isChoice;
  isSwapChoice = v4->fields.isSwapChoice;
  v4->fields.sortValue0 = 0LL;
  v44 = !isChoice;
  v45 = !isChoice;
  v46 = !v44;
  if ( !isSwapChoice )
    v45 = v46;
  if ( v45 && sort->fields.isChoiceSort )
    v4->fields.sortValue0 = 10LL;
  this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
LABEL_121:
    sub_1BCAA3C(this, sort);
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  this = (SupportServantListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      userServantEntity = v4->fields.userServantEntity;
      if ( !userServantEntity )
        goto LABEL_121;
      v48 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v83.fields.fakeValue = v48;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort);
      v82 = v83;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                               &v82,
                                               0LL);
      v49 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v49 )
        goto LABEL_121;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_121;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v49->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_105;
    case 2:
      rarity = v4->fields.rarity;
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      goto LABEL_86;
    case 3:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_121;
      eventFriendPoints_low = SLODWORD(this->fields.eventFriendPoints);
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = eventFriendPoints_low;
      this = (SupportServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_121;
      IconLabelInfo__Set_38850420(iconLabelInfo1, 2, eventFriendPoints_low, (int32_t)this, 0, 0, 0, 0, 0LL);
      goto LABEL_110;
    case 4:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_121;
      UserServantEntity__getTreasureDeviceInfo_40943792((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(hp) = tdMaxLv[1];
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = tdMaxLv[1];
      if ( !this )
        goto LABEL_121;
      adjustAtk = tdMaxLv[0];
      v56 = 33;
      goto LABEL_104;
    case 5:
      v57 = v4->fields.userServantEntity;
      if ( !v57 )
        goto LABEL_121;
      equipUserServantEntity = v4->fields.equipUserServantEntity;
      hp = v57->fields.hp;
      if ( equipUserServantEntity )
      {
        atk = equipUserServantEntity->fields.hp;
        this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = atk + (int)hp;
        if ( !this )
          goto LABEL_121;
        adjustHp = v57->fields.adjustHp;
        v61 = 46;
        goto LABEL_81;
      }
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_121;
      adjustAtk = v57->fields.adjustHp;
      v56 = 3;
      goto LABEL_104;
    case 6:
      v62 = v4->fields.userServantEntity;
      if ( !v62 )
        goto LABEL_121;
      v63 = v4->fields.equipUserServantEntity;
      hp = v62->fields.atk;
      if ( v63 )
      {
        atk = v63->fields.atk;
        this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = atk + (int)hp;
        if ( !this )
          goto LABEL_121;
        adjustHp = v62->fields.adjustAtk;
        v61 = 47;
LABEL_81:
        IconLabelInfo__Set_38850420((IconLabelInfo_o *)this, v61, hp, adjustHp, atk, 0, 0, 0, 0LL);
      }
      else
      {
        this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = hp;
        if ( !this )
          goto LABEL_121;
        adjustAtk = v62->fields.adjustAtk;
        v56 = 5;
LABEL_104:
        IconLabelInfo__Set_38850420((IconLabelInfo_o *)this, v56, hp, adjustAtk, 0, 0, 0, 0, 0LL);
      }
LABEL_105:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_121;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
LABEL_107:
      eventFriendPoints = (int32_t)this->fields.eventFriendPoints;
LABEL_108:
      this = (SupportServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo2 )
        goto LABEL_121;
      IconLabelInfo__Set_38850420(iconLabelInfo2, 2, eventFriendPoints, (int32_t)this, 0, 0, 0, 0, 0LL);
LABEL_110:
      LOBYTE(this) = 1;
      return (char)this;
    case 7:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_121;
      hp = servantEntity->fields.cost;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_121;
      v56 = 7;
      adjustAtk = 0;
      goto LABEL_104;
    case 8:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      rarity = -v4->fields.priority;
LABEL_86:
      v4->fields.sortValue1 = rarity;
      if ( !this )
        goto LABEL_121;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      goto LABEL_107;
    case 0xA:
      v67 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
      v66 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
      *(_QWORD *)&v86.fields.currentCryptoKey = v67;
      *(_QWORD *)&v86.fields.fakeValue = v66;
      v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v86, 0LL);
      v69 = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v70 = v68;
      friendship = v4->fields.friendship;
      v4->fields.sortValue1 = v70;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                               friendship,
                                               0LL);
      if ( !v69 )
        goto LABEL_121;
      adjustAtk = v4->fields.friendshipMax;
      LODWORD(hp) = (_DWORD)this;
      v56 = 32;
      this = v69;
      goto LABEL_104;
    case 0xE:
      this = (SupportServantListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_118;
      manager = sort->fields.manager;
      if ( manager
        && (methodPtr_low = LOBYTE(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (SupportServantListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportServantListViewManager_TypeInfo )
          v73 = sort->fields.manager;
        else
          v73 = 0LL;
      }
      else
      {
        v73 = 0LL;
      }
      v76 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v75 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
      *(_QWORD *)&v88.fields.currentCryptoKey = v76;
      *(_QWORD *)&v88.fields.fakeValue = v75;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                               v88,
                                               0LL);
      if ( !v73 )
        goto LABEL_121;
      this = (SupportServantListViewItem_o *)SupportServantListViewManager__GetAmountSortValue(
                                               (SupportServantListViewManager_o *)v73,
                                               (int32_t)this,
                                               v77);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_118:
      v78 = v4->fields.servantEntity;
      if ( !v78 )
        goto LABEL_121;
      collectionNo = v78->fields.collectionNo;
      v80 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v80 )
        goto LABEL_121;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      eventFriendPoints = v80->fields.lv;
      this = (SupportServantListViewItem_o *)v80;
      goto LABEL_108;
    case 0xF:
      hp = v4->fields.hpReinforceValue;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_121;
      adjustAtk = v4->fields.nowMaxHpReinforceValue;
      v56 = 44;
      goto LABEL_104;
    case 0x10:
      hp = v4->fields.atkReinforceValue;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_121;
      adjustAtk = v4->fields.nowMaxAtkReinforceValue;
      v56 = 45;
      goto LABEL_104;
    default:
      return (char)this;
  }
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


bool __fastcall SupportServantListViewItem___SetSortValue_b__53_0(
        SupportServantListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  __int64 v13; // x22
  __int64 v14; // x23
  EventCampaignMaster_o *v15; // x21
  ServantFilterMaster_o *userServantEntity; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B12C0A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, entity, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantFilterMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    byte_4B12C0A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v20.fields.currentCryptoKey = v14;
  *(_QWORD *)&v20.fields.fakeValue = v13;
  userServantEntity = (ServantFilterMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                 v20,
                                                 0LL);
  if ( !entity || !v15 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v15, (int32_t)userServantEntity, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
  userServantEntity = (ServantFilterMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !userServantEntity )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant(userServantEntity, this->fields.svtId, entity->fields.eventId, 0LL) )
    return 1;
  userServantEntity = (ServantFilterMaster_o *)this->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_17:
    sub_1BCAA3C(userServantEntity, v17);
  return UserServantEntity__getEventUpVal_40936552(
           (UserServantEntity_o *)userServantEntity,
           this->fields.eventSetupInfo,
           entity->fields.eventId,
           0LL,
           0LL);
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2

  if ( (byte_4B12C06 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B12C06 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  return TutorialFlag__Get_38402052(126, 0LL);
}


bool __fastcall SupportServantListViewItem__get_IsChoice(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall SupportServantListViewItem__get_IsDispChoice(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool __fastcall SupportServantListViewItem__get_IsDispLock(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
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
  __int64 v2; // x2
  SupportServantListViewItem_o *v3; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v5; // q1
  SupportServantData_o *supportServantData; // x19
  const MethodInfo *v7; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_4B12C07 & 1) == 0 )
  {
    this = (SupportServantListViewItem_o *)sub_1BCA7E0(
                                             &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                             method,
                                             v2);
    byte_4B12C07 = 1;
  }
  userServantEntity = v3->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_8;
  v5 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  supportServantData = v3->fields.supportServantData;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v9 = v10;
  this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v9, 0LL);
  if ( !supportServantData )
LABEL_8:
    sub_1BCAA3C(this, method);
  return SupportServantData__isUseServant(supportServantData, (int64_t)this, v7);
}


System_String_o *__fastcall SupportServantListViewItem__get_NameText(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4B12C05 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19249/*"error"*/, v4, v5);
    byte_4B12C05 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19249/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v9 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v8 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    *(_QWORD *)&v12.fields.currentCryptoKey = v9;
    *(_QWORD *)&v12.fields.fakeValue = v8;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v12, 0LL);
  }
  else
  {
    v10 = -1;
  }
  return ServantEntity__getName(servantEntity, v10, -1, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4B12C04 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B12C04 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v7, 0LL);
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