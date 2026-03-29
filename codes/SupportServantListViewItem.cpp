void SupportServantListViewItem___ctor(
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
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  IconLabelInfo_o *v28; // x28
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  UserServantEntity_o **p_userServantEntity; // x21
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int64_t Instance; // x0
  __int64 v43; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  struct SupportServantData_o *v50; // x1
  struct SupportServantData_o **p_supportServantData; // x24
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  struct UserServantEntity_o *v58; // x8
  Il2CppObject *MasterData_object; // x0
  __int64 v60; // x28
  __int64 v61; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *v62; // x27
  Il2CppObject *Entity; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  Il2CppObject *v76; // x26
  struct UserServantEntity_o *v77; // x8
  int32_t v78; // w27
  const MethodInfo *v79; // x2
  struct ServantEntity_o *servantEntity; // x8
  UserServantEntity_o *v81; // x8
  __int128 v82; // q1
  UserServantCollectionMaster_o *v83; // x25
  int64_t v84; // x26
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  struct UserServantEntity_o *v103; // x8
  __int128 v104; // q0
  SupportServantData_o *v105; // x8
  int64_t v106; // x24
  UserServantEntity_o *v107; // x8
  UserServantEntity_o *v108; // x8
  UserServantEntity_o *v109; // x8
  ServantEntity_o *v110; // x8
  bool v111; // w8
  int64_t Equip; // x0
  const MethodInfo *v113; // x5
  int64_t v114; // x23
  Il2CppObject *v115; // x24
  UserServantEntity_o *v116; // x8
  PartyOrganizationUtility_o *v117; // x23
  __int64 v118; // x25
  __int64 v119; // x26
  int32_t v120; // w25
  int32_t v121; // w26
  bool v122; // w0
  UserServantEntity_o *v123; // x8
  __int128 v124; // q0
  __int64 v125; // x22
  bool v126; // zf
  bool v127; // w8
  UserServantEntity_o *v128; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v130; // w2
  int32_t v131; // w3
  System_String_o *v132; // x4
  int32_t v133; // w5
  int64_t v134; // x6
  System_String_o *v135; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v137; // w2
  int32_t v138; // w3
  System_String_o *v139; // x4
  int32_t v140; // w5
  int64_t v141; // x6
  System_String_o *v142; // x7
  int v143; // w22
  BalanceConfig_c *v144; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t v146; // x8
  struct ServantEntity_o *v147; // x9
  UserServantEntity_o *v148; // x8
  __int64 v149; // x21
  __int64 v150; // x22
  struct UserServantEntity_o *v151; // x8
  __int128 v152; // q0
  int64_t v153; // x8
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+10h] [xbp-130h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v156; // [xsp+20h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+40h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+60h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v159; // [xsp+80h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v160; // [xsp+A0h] [xbp-A0h]
  int32_t actMaxRarity; // [xsp+CCh] [xbp-74h] BYREF
  System_String_o *skillName; // [xsp+D0h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+DCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16

  if ( (byte_4D2CFCC & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&IconLabelInfo_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D2CFCC = 1;
  }
  friendshipRank = 0;
  skillName = 0;
  actMaxRarity = 0;
  v21 = (IconLabelInfo_o *)sub_1C93D20(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0);
  this->fields.iconLabelInfo1 = v21;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo1, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  v28 = (IconLabelInfo_o *)sub_1C93D20(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v28, 0);
  this->fields.iconLabelInfo2 = v28;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo2, (int32_t)v28, v29, v30, v31, v32, v33, v34);
  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  if ( !supportServantData )
    goto LABEL_66;
  if ( LODWORD(supportServantData->max_length) <= nowDeckNum )
    sub_1C93D34(Instance);
  v50 = supportServantData->m_Items[nowDeckNum];
  this->fields.supportServantData = v50;
  p_supportServantData = &this->fields.supportServantData;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.supportServantData,
    (int32_t)v50,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventSetupInfo,
    (int32_t)eventSetupInfo,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v58 = this->fields.userServantEntity;
  if ( !v58 )
    goto LABEL_66;
  this->fields.svtId = v58->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  v61 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v60 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v62 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v164.fields.currentCryptoKey = v61;
  *(_QWORD *)&v164.fields.fakeValue = v60;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v164, 0);
  if ( !v62 )
    goto LABEL_66;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v62,
             Instance,
             (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, (int32_t)Entity, v64, v65, v66, v67, v68, v69);
  this->fields.eventFriendPoints = friendPointCampaignEntityList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaignEntityList,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v76 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(this->fields.svtId, 0);
  v77 = this->fields.userServantEntity;
  if ( !v77 )
    goto LABEL_66;
  v78 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v77->fields.limitCount, 0);
  if ( !v76 )
    goto LABEL_66;
  ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v76, v78, Instance, 0);
  SupportServantListViewItem__SetOverwriteStatus(this, userServantEntity, v79);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_66;
  this->fields.classId = servantEntity->fields.classId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v81 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  v82 = *(_OWORD *)&v81->fields.userId.fields.fakeValue;
  v83 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v160.fields.currentCryptoKey = *(_OWORD *)&v81->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v160.fields.fakeValue = v82;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v159 = v160;
  v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v159, 0);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(this->fields.svtId, 0);
  if ( !v83 )
    goto LABEL_66;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v83, v84, Instance, 0);
  if ( !Instance )
    goto LABEL_66;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &friendshipRank,
    &this->fields.friendshipMax,
    0);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0);
  this->fields.isSame = 0;
  this->fields.equipUserServantEntity = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipUserServantEntity, 0, v85, v86, v87, v88, v89, v90);
  this->fields.equipServantEntity = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntity, 0, v91, v92, v93, v94, v95, v96);
  this->fields.equipIdList = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, 0, v97, v98, v99, v100, v101, v102);
  v103 = this->fields.userServantEntity;
  if ( !v103 )
    goto LABEL_66;
  v104 = *(_OWORD *)&v103->fields.id.fields.fakeValue;
  *(_OWORD *)&v158.fields.currentCryptoKey = *(_OWORD *)&v103->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v158.fields.fakeValue = v104;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v158, 0);
  v105 = *p_supportServantData;
  if ( !*p_supportServantData )
    goto LABEL_66;
  v106 = Instance;
  Instance = SupportServantData__getMember(v105, classPos, 0);
  v107 = this->fields.userServantEntity;
  this->fields.isBase = v106 == Instance;
  if ( !v107 )
    goto LABEL_66;
  Instance = UserServantEntity__IsLock(v107, 0);
  v108 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v108 )
    goto LABEL_66;
  Instance = UserServantEntity__IsChoice(v108, 0);
  v109 = this->fields.userServantEntity;
  this->fields.isChoice = Instance & 1;
  if ( !v109 )
    goto LABEL_66;
  Instance = UserServantEntity__IsEventJoin(v109, 0);
  v110 = this->fields.servantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v110 )
    goto LABEL_66;
  v111 = ServantEntity__checkIsHeroineSvt(v110, 0);
  Instance = (int64_t)this->fields.supportServantData;
  this->fields.isHeroine = v111;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  if ( !Instance )
    goto LABEL_66;
  Equip = SupportServantData__getEquip((SupportServantData_o *)Instance, classPos, 0);
  if ( Equip < 1 )
    goto LABEL_37;
  v114 = Equip;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_66;
  v115 = DataMasterBase_object__object__long___GetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           v114,
           (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v116 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  v117 = (PartyOrganizationUtility_o *)Instance;
  v119 = *(_QWORD *)&v116->fields.svtId.fields.currentCryptoKey;
  v118 = *(_QWORD *)&v116->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v165.fields.currentCryptoKey = v119;
  *(_QWORD *)&v165.fields.fakeValue = v118;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v165, 0);
  if ( !*p_userServantEntity
    || (v120 = Instance, Instance = UserServantEntity__getRarity(*p_userServantEntity, 0), !v115)
    || (v121 = Instance,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v115[5],
                     0),
        !v117) )
  {
LABEL_66:
    sub_1C93D2C(Instance, v43);
  }
  this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                   v117,
                                   &skillName,
                                   &actMaxRarity,
                                   v120,
                                   v121,
                                   Instance,
                                   -1,
                                   0);
LABEL_37:
  this->fields.isUseInSet = 0;
  if ( !isFixMainDeck
    || (v122 = SupportServantListViewItem__CheckUseInSet(
                 this,
                 &this->fields.useSet,
                 fixMainDeckIds,
                 nowDeckId,
                 supportServantData,
                 v113),
        !(this->fields.isUseInSet = v122)) )
  {
    if ( isFixEventDeck )
      this->fields.isUseInSet = SupportServantListViewItem__CheckUseInSet(
                                  this,
                                  &this->fields.useSet,
                                  fixEventDeckIds,
                                  nowDeckId,
                                  supportServantData,
                                  v113);
  }
  this->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_66;
  v123 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  v124 = *(_OWORD *)&v123->fields.id.fields.fakeValue;
  v125 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)&v160.fields.currentCryptoKey = *(_OWORD *)&v123->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v160.fields.fakeValue = v124;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v157 = v160;
  v126 = v125 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v157, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  v127 = v126;
  this->fields.isPush = v127;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_66;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
  v128 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v128 )
    goto LABEL_66;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v128, -1, -1, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_66;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   -1,
                                   0);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v137,
    v138,
    v139,
    v140,
    v141,
    v142);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_66;
  v143 = *(_DWORD *)(Instance + 276);
  v144 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v144 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v144->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v143;
  if ( !Instance )
    goto LABEL_66;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3463274 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_66;
  v146 = *(int *)(Instance + 52);
  v147 = this->fields.servantEntity;
  this->fields.priority = v146;
  this->fields.sortValue1B = v146;
  if ( !v147 )
    goto LABEL_66;
  v148 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  this->fields.sortValue2 = ((__int64)v147->fields.collectionNo << 16)
                          | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                          | v148->fields.lv;
  v150 = *(_QWORD *)&v148->fields.svtId.fields.currentCryptoKey;
  v149 = *(_QWORD *)&v148->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v166.fields.currentCryptoKey = v150;
  *(_QWORD *)&v166.fields.fakeValue = v149;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v166, 0);
  v151 = this->fields.userServantEntity;
  this->fields.sortValue2B = (int)Instance;
  if ( !v151 )
    goto LABEL_66;
  v152 = *(_OWORD *)&v151->fields.id.fields.fakeValue;
  *(_OWORD *)&v156.fields.currentCryptoKey = *(_OWORD *)&v151->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v156.fields.fakeValue = v152;
  v153 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v156, 0);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValueLast = v153;
  this->fields.amountSortValue = -1;
  if ( !Instance )
    goto LABEL_66;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_66;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


bool SupportServantListViewItem__CheckUseInSet(
        SupportServantListViewItem_o *this,
        int32_t *setNo,
        System_Int32_array *fixDeckIds,
        int32_t nowDeckId,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  SupportServantListViewItem_o *v9; // x23
  il2cpp_array_size_t max_length; // x8
  bool v11; // w19
  unsigned __int64 v12; // x28
  char *v13; // x22
  int v14; // w8
  int32_t *v15; // x22
  int v16; // t1
  int32_t i; // w24
  unsigned int v18; // w8
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x0
  int32_t svtId; // w27
  __int64 v21; // x25
  __int64 v22; // x26
  int32_t *v24; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v9 = this;
  if ( (byte_4D2CFCD & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    this = (SupportServantListViewItem_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2CFCD = 1;
  }
  *setNo = 0;
  if ( !fixDeckIds )
LABEL_28:
    sub_1C93D2C(this, setNo);
  max_length = fixDeckIds->max_length;
  v11 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v24 = setNo;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)max_length )
        goto LABEL_27;
      v13 = (char *)fixDeckIds + 4 * v12;
      v16 = *((_DWORD *)v13 + 8);
      v15 = (int32_t *)(v13 + 32);
      v14 = v16;
      if ( v16 != nowDeckId && v14 >= 1 )
        break;
LABEL_22:
      LODWORD(max_length) = fixDeckIds->max_length;
      v11 = (__int64)++v12 < (int)max_length;
      if ( (__int64)v12 >= (int)max_length )
        return v11;
    }
    for ( i = 0; ; ++i )
    {
      this = (SupportServantListViewItem_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (SupportServantListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( i >= *(_DWORD *)(*(_QWORD *)&this->fields.atk + 180LL) )
        goto LABEL_22;
      if ( v12 >= LODWORD(fixDeckIds->max_length) )
        goto LABEL_27;
      if ( !supportServantData )
        goto LABEL_28;
      v18 = *v15 - 1;
      if ( v18 >= LODWORD(supportServantData->max_length) )
        goto LABEL_27;
      this = (SupportServantListViewItem_o *)supportServantData->m_Items[v18];
      if ( !this )
        goto LABEL_28;
      UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity((SupportServantData_o *)this, i, 0);
      if ( UserServantLeaderEntity )
      {
        svtId = UserServantLeaderEntity->fields.svtId;
        v22 = *(_QWORD *)&v9->fields.svtId.fields.currentCryptoKey;
        v21 = *(_QWORD *)&v9->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v26.fields.currentCryptoKey = v22;
        *(_QWORD *)&v26.fields.fakeValue = v21;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                 v26,
                                                 0);
        if ( svtId == (_DWORD)this )
          break;
      }
    }
    if ( (unsigned int)v12 >= LODWORD(fixDeckIds->max_length) )
LABEL_27:
      sub_1C93D34(this);
    *v24 = *v15;
  }
  return v11;
}


void SupportServantListViewItem__Finalize(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_Int64_array *SupportServantListViewItem__GetEquipList(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIdList; // x8
  int64_t v4; // x0
  __int64 v5; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v6; // x8
  int64_t v7; // x20
  unsigned __int64 v8; // x21
  int64_t v9; // x23
  __int64 v10; // x24
  unsigned __int64 max_length_low; // x9
  _OWORD *v12; // x8
  __int128 v13; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-60h]

  if ( (byte_4D2CFD1 & 1) == 0 )
  {
    sub_1C93AD4(&long___TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2CFD1 = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0;
  v4 = sub_1C93B7C(long___TypeInfo, LODWORD(equipIdList->max_length));
  v6 = this->fields.equipIdList;
  if ( !v6 )
LABEL_13:
    sub_1C93D2C(v4, v5);
  v7 = v4;
  v8 = 0;
  v9 = v4 + 32;
  v10 = 32;
  while ( 1 )
  {
    max_length_low = LODWORD(v6->max_length);
    if ( (__int64)v8 >= (int)max_length_low )
      return (System_Int64_array *)v7;
    if ( v8 >= max_length_low )
      goto LABEL_16;
    v12 = (_OWORD *)((char *)v6 + v10);
    v13 = v12[1];
    *(_OWORD *)&v16.fields.currentCryptoKey = *v12;
    *(_OWORD *)&v16.fields.fakeValue = v13;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v15 = v16;
    v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v15, 0);
    if ( v7 )
    {
      if ( v8 >= *(unsigned int *)(v7 + 24) )
LABEL_16:
        sub_1C93D34(v4);
      *(_QWORD *)(v9 + 8 * v8) = v4;
      v6 = this->fields.equipIdList;
      ++v8;
      v10 += 32;
      if ( v6 )
        continue;
    }
    goto LABEL_13;
  }
}


int32_t SupportServantListViewItem__GetFriendPointBonus(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  SupportServantListViewItem_o *v2; // x19
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  int32_t v4; // w20
  __int64 v5; // x24
  int max_length; // w9
  unsigned int v7; // w25
  __int64 v8; // x8
  System_Int32_array *v9; // x21
  int32_t SvtId; // w0
  __int64 v11; // x9
  __int64 v12; // x10
  _BOOL4 v13; // w10
  int32_t v14; // w21

  v2 = this;
  if ( (byte_4D2CFD5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_IndexOf_int___);
    this = (SupportServantListViewItem_o *)sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2CFD5 = 1;
  }
  eventFriendPoints = v2->fields.eventFriendPoints;
  if ( !eventFriendPoints )
    return -1;
  v4 = -1;
  v5 = 4;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    v7 = v5 - 4;
    if ( (int)v5 - 4 >= max_length )
      return v4;
    if ( v7 >= max_length )
      goto LABEL_22;
    v8 = *((_QWORD *)&eventFriendPoints->obj.klass + v5);
    if ( v8 )
    {
      v9 = *(System_Int32_array **)(v8 + 40);
      SvtId = SupportServantListViewItem__get_SvtId(v2, method);
      this = (SupportServantListViewItem_o *)System_Array__IndexOf_int_(
                                               v9,
                                               SvtId,
                                               (const MethodInfo_32AB154 *)Method_System_Array_IndexOf_int___);
      eventFriendPoints = v2->fields.eventFriendPoints;
      if ( eventFriendPoints )
      {
        if ( v7 >= LODWORD(eventFriendPoints->max_length) )
LABEL_22:
          sub_1C93D34(this);
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
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            this = (SupportServantListViewItem_o *)System_Math__Max_65947544(v4, v14, 0);
            eventFriendPoints = v2->fields.eventFriendPoints;
            v4 = (int)this;
          }
          ++v5;
          if ( eventFriendPoints )
            continue;
        }
      }
    }
    sub_1C93D2C(this, method);
  }
}


bool SupportServantListViewItem__IsMatchClass(
        SupportServantListViewItem_o *this,
        int32_t classType,
        const MethodInfo *method)
{
  ServantClassMaster_o *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_4D2CFCE & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4D2CFCE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( classType == 8 )
  {
    if ( Master_object )
    {
      Master_object = (ServantClassMaster_o *)ServantClassMaster__getExtraClassIdList(Master_object, 0);
      if ( Master_object )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)Master_object,
                 this->fields.classId,
                 (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_11:
    sub_1C93D2C(Master_object, v6);
  }
  if ( !Master_object )
    goto LABEL_11;
  return ServantClassMaster__getSupportGroupType(Master_object, this->fields.classId, 0) == classType;
}


bool SupportServantListViewItem__IsMatchServantFilter(
        SupportServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ListViewSort_o *v3; // x19
  SupportServantListViewItem_o *v4; // x20
  unsigned int *manager; // x8
  __int64 naturalAligment; // x11
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  UserServantEntity_o *userServantEntity; // x21
  _BOOL4 isChoice; // w8
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x21
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x0
  FilterKindList_c *v18; // x0
  ListViewSort_FilterKind_array *v19; // x0
  FilterKindList_c *v20; // x0
  FilterKindList_c *v21; // x0
  ListViewSort_FilterKind_array *v22; // x0
  FilterKindList_c *v23; // x0
  ListViewSort_FilterKind_array *v24; // x0
  UserServantEntity_o *v25; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v27; // x8
  System_Int32_array *SkillCategoryIdList; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v43; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v45; // w0

  v3 = sort;
  v4 = this;
  if ( (byte_4D2CFCF & 1) == 0 )
  {
    sub_1C93AD4(&FilterKindList_TypeInfo);
    sub_1C93AD4(&ListViewSort_FilterKind___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C93AD4(&ServantEventBonusFilterController_TypeInfo);
    this = (SupportServantListViewItem_o *)sub_1C93AD4(&SupportServantListViewManager_TypeInfo);
    byte_4D2CFCF = 1;
  }
  if ( !v3 )
    goto LABEL_84;
  manager = (unsigned int *)v3->fields.manager;
  if ( !manager )
    goto LABEL_84;
  naturalAligment = SupportServantListViewManager_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)manager + 304LL) < (unsigned int)naturalAligment
    || *(SupportServantListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * naturalAligment - 8) != SupportServantListViewManager_TypeInfo )
  {
    goto LABEL_84;
  }
  sort = (ListViewSort_o *)manager[106];
  if ( (unsigned int)((_DWORD)sort - 1) < 7 )
  {
    if ( !SupportServantListViewItem__IsMatchClass(v4, (int32_t)sort, method) )
      return 0;
    goto LABEL_9;
  }
  if ( (_DWORD)sort != 8 )
  {
    v21 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v21 = FilterKindList_TypeInfo;
    }
    this = (SupportServantListViewItem_o *)v21->static_fields->ClassGroupFilterKindList;
    if ( !this )
      goto LABEL_84;
    v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)this,
                                             (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(v3, v22, 0) )
    {
      v23 = FilterKindList_TypeInfo;
      if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v23 = FilterKindList_TypeInfo;
      }
      this = (SupportServantListViewItem_o *)v23->static_fields->ClassFilterKindList;
      if ( !this )
        goto LABEL_84;
      goto LABEL_61;
    }
LABEL_78:
    if ( !ListViewSort__IsMatchClassGroupFilter(v3, v4->fields.servantEntity, 0) )
      return 0;
    goto LABEL_9;
  }
  if ( !SupportServantListViewItem__IsMatchClass(v4, 8, method) )
    return 0;
  v16 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v16->static_fields->ClassGroupFilterKindList;
  if ( !this )
    goto LABEL_84;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v17, 0) )
    goto LABEL_78;
  v18 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v18 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v18->static_fields->ClassExtra1InShielderFilterKindList;
  if ( !this )
    goto LABEL_84;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v19, 0) )
    goto LABEL_62;
  v20 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v20 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v20->static_fields->ClassExtra2FilterKindList;
  if ( !this )
    goto LABEL_84;
LABEL_61:
  v24 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v24, 0) )
  {
LABEL_62:
    if ( !ListViewSort__IsMatchClassFilter(v3, v4->fields.servantEntity, 0) )
      return 0;
  }
LABEL_9:
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v7->static_fields->NpTypeFilterKindList;
  if ( !this )
    goto LABEL_84;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          (System_Collections_Generic_List_T__o *)this,
                                          (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v8, 0)
    && !ListViewSort__IsMatchNPTypeFilter(v3, v4->fields.userServantEntity, 0) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v9->static_fields->NpEffectFilterKindList;
  if ( !this )
    goto LABEL_84;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v10, 0)
    && !ListViewSort__IsMatchNPEffectFilter(v3, v4->fields.userServantEntity, 0) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(v3, -1, 0) )
  {
    userServantEntity = v4->fields.userServantEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, v3, -1, 0) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(v3, 0) )
  {
    v25 = v4->fields.userServantEntity;
    if ( v25 )
    {
      dispLimitCount = v4->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v25, 0, 0) )
      {
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_84;
        this = (SupportServantListViewItem_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0);
        v27 = v4->fields.userServantEntity;
        v4->fields.dispLimitCount = (int)this;
        if ( !v27 )
          goto LABEL_84;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v27, -1, -1, 0);
        v4->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v4->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_84;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)this,
                                         0,
                                         -1,
                                         0);
        v4->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v4->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
      }
    }
    this = (SupportServantListViewItem_o *)sub_1C93B7C(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !this )
      goto LABEL_84;
    if ( !this->fields.sortIndex )
      goto LABEL_85;
    LODWORD(this->fields.sortValue0) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     v3,
                                     (ListViewSort_FilterKind_array *)this,
                                     0);
    this = (SupportServantListViewItem_o *)sub_1C93B7C(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !this )
      goto LABEL_84;
    if ( !this->fields.sortIndex )
LABEL_85:
      sub_1C93D34(this);
    LODWORD(this->fields.sortValue0) = 51;
    v43 = ListViewSort__IsUnSelectedAllTargetFilters(v3, (ListViewSort_FilterKind_array *)this, 0);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              v4->fields.tdCategoryIdList,
                              v3,
                              0);
    v45 = ServantEquipEffectFilterController__IsMatchEffectCategory(v4->fields.skillCategoryIdList, v3, 0);
    if ( ((IsUnSelectedAllTargetFilters ^ v43) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v45 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v45 )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(v3, v4->fields.userServantEntity, v4->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(v3, v4->fields.userServantEntity, v4->fields.servantEntity, 0) )
  {
    return 0;
  }
  this = (SupportServantListViewItem_o *)sub_1C93B7C(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !this )
LABEL_84:
    sub_1C93D2C(this, sort);
  if ( !this->fields.sortIndex )
    goto LABEL_85;
  LODWORD(this->fields.sortValue0) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, (ListViewSort_FilterKind_array *)this, 0)
    && ListViewSort__GetFilter(v3, 39, 0) )
  {
    isChoice = !v4->fields.isChoice;
    if ( !v4->fields.isSwapChoice )
      isChoice = v4->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v13->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_84;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(v3, v14, 0)
      || ListViewSort__IsSelectedAllTargetFilters(v3, v14, 0)
      || ListViewSort__IsMatchRarityFilter(v3, v4->fields.rarity, 0);
}


void SupportServantListViewItem__ModifyChoiceItem(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1C93D2C(0, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userServantEntity, 0);
  this->fields.isSwapChoice = 0;
}


void SupportServantListViewItem__ModifyItem(
        SupportServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UserServantEntity_o **p_userServantEntity; // x21
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_userServantEntity )
    sub_1C93D2C(0, v11);
  this->fields.isEventJoin = UserServantEntity__IsEventJoin(*p_userServantEntity, 0);
  SupportServantListViewItem__SetOverwriteStatus(this, userServantEntity, v12);
}


void SupportServantListViewItem__ModifyLockItem(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1C93D2C(0, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0);
  this->fields.isSwapLock = 0;
}


void SupportServantListViewItem__ResetEventCampaign(
        SupportServantListViewItem_o *this,
        EventCampaignEntity_array *friendPointCampaigns,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.eventFriendPoints = friendPointCampaigns;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaigns,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SupportServantListViewItem__SetOverwriteStatus(
        SupportServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  SupportServantListViewItem_o *v3; // x19

  if ( !userServantEntity
    || (v3 = this,
        (this = (SupportServantListViewItem_o *)UserServantEntity__GetOverwriteStatus(userServantEntity, 0, 0)) == 0) )
  {
    sub_1C93D2C(this, userServantEntity);
  }
  *(int8x16_t *)&v3->fields.rarity = vextq_s8(
                                       *(int8x16_t *)&this->fields.selectNum,
                                       *(int8x16_t *)&this->fields.selectNum,
                                       8u);
}


bool SupportServantListViewItem__SetSortValue(
        SupportServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  SupportServantListViewItem_o *v4; // x19
  int32_t bonusKind2; // w8
  int32_t v6; // w2
  int32_t bonusKind2Id; // w8
  int32_t v8; // w8
  int32_t v9; // w8
  bool IsEnableServant; // w0
  Il2CppObject *Master_object; // x0
  __int64 v12; // x22
  __int64 v13; // x23
  EventCampaignMaster_o *v14; // x21
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v16; // x22
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v19; // zf
  _BOOL4 v20; // w8
  int v21; // w10
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v23; // q1
  struct UserServantEntity_o *v24; // x8
  const MethodInfo *v25; // x2
  int64_t rarity; // x8
  int64_t equipUserServantEntity_low; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t cost; // x2
  int32_t friendshipMax; // w3
  int32_t v31; // w1
  struct UserServantEntity_o *equipUserServantEntity; // x8
  int64_t hp; // x20
  IconLabelInfo_o *v34; // x21
  struct UserServantEntity_o *v35; // x8
  int32_t atk; // w4
  int32_t v37; // w3
  int32_t v38; // w1
  struct UserServantEntity_o *v39; // x8
  struct UserServantEntity_o *v40; // x8
  IconLabelInfo_o *iconLabelInfo2; // x19
  __int64 v42; // x20
  __int64 v43; // x21
  int32_t v44; // w0
  SupportServantListViewItem_o *v45; // x20
  int64_t v46; // x9
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v49; // x20
  int32_t lv; // w20
  SupportServantListViewItem_o *v51; // x21
  __int64 v52; // x21
  __int64 v53; // x22
  const MethodInfo *v54; // x2
  struct ServantEntity_o *servantEntity; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v57; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  v4 = this;
  if ( (byte_4D2CFD0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SupportServantListViewItem__SetSortValue_b__53_0__);
    this = (SupportServantListViewItem_o *)sub_1C93AD4(&SupportServantListViewManager_TypeInfo);
    byte_4D2CFD0 = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1;
  if ( !sort )
    goto LABEL_125;
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
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (SupportServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( !this )
          goto LABEL_125;
        EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                              (EventGroupMaster_o *)this,
                              v4->fields.bonusKindId,
                              0);
        this = (SupportServantListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !EntitiesByGroupId )
            goto LABEL_125;
          if ( EntitiesByGroupId->fields._size >= 2 )
          {
            v16 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EventGroupEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v16,
              (Il2CppObject *)v4,
              Method_SupportServantListViewItem__SetSortValue_b__53_0__,
              0);
            v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                        (System_Func_T__bool__o *)v16,
                                        (const MethodInfo_318DB78 *)Method_BasicHelper_Any_EventGroupEntity___);
          }
        }
        goto LABEL_42;
      case 3:
        if ( v4->fields.bonusKind == 3 )
        {
          v8 = sort->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == v8 )
          {
LABEL_42:
            if ( !v4->fields.isEventUpVal )
              goto LABEL_65;
            break;
          }
        }
        else
        {
          v8 = sort->fields.bonusKind2Id;
        }
        v4->fields.bonusKind = 3;
        v4->fields.bonusKindId = v8;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventCampaignMaster___);
        v13 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
        v12 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
        v14 = (EventCampaignMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v62.fields.currentCryptoKey = v13;
        *(_QWORD *)&v62.fields.fakeValue = v12;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                 v62,
                                                 0);
        if ( !v14 )
          goto LABEL_125;
        IsEnableServant = EventCampaignMaster__IsEnableServant(v14, (int32_t)this, v4->fields.bonusKindId, 0);
LABEL_32:
        v4->fields.isEventUpVal = IsEnableServant;
        if ( !IsEnableServant )
          goto LABEL_65;
        break;
      case 4:
      case 5:
        if ( v4->fields.bonusKind == bonusKind2 )
        {
          v6 = sort->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == v6 )
            goto LABEL_42;
        }
        else
        {
          v6 = sort->fields.bonusKind2Id;
        }
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        v4->fields.bonusKind = bonusKind2;
        v4->fields.bonusKindId = v6;
        if ( !this )
          goto LABEL_125;
        IsEnableServant = UserServantEntity__getEventUpVal(
                            (UserServantEntity_o *)this,
                            v4->fields.eventSetupInfo,
                            v6,
                            0,
                            0);
        goto LABEL_32;
      case 7:
        if ( v4->fields.bonusKind == 7 )
        {
          v9 = sort->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == v9 )
            goto LABEL_42;
        }
        else
        {
          v9 = sort->fields.bonusKind2Id;
        }
        v4->fields.bonusKind = 7;
        v4->fields.bonusKindId = v9;
        this = (SupportServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_125;
        this = (SupportServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantFilterMaster___);
        if ( !this )
          goto LABEL_125;
        IsEnableServant = ServantFilterMaster__IsEnableServant(
                            (ServantFilterMaster_o *)this,
                            v4->fields.svtId,
                            v4->fields.bonusKindId,
                            0);
        goto LABEL_32;
      default:
        break;
    }
  }
  if ( !v4->fields.isBase )
  {
    this = (SupportServantListViewItem_o *)v4->fields.servantEntity;
    if ( !this )
      goto LABEL_125;
    if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0) )
      goto LABEL_65;
    this = (SupportServantListViewItem_o *)v4->fields.servantEntity;
    if ( !this )
      goto LABEL_125;
    if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0)
      || !SupportServantListViewItem__IsMatchServantFilter(v4, sort, v25) )
    {
LABEL_65:
      LOBYTE(this) = 0;
      return (char)this;
    }
  }
  isChoice = v4->fields.isChoice;
  isSwapChoice = v4->fields.isSwapChoice;
  v4->fields.sortValue0 = 0;
  v19 = !isChoice;
  v20 = !isChoice;
  v21 = !v19;
  if ( !isSwapChoice )
    v20 = v21;
  if ( v20 && sort->fields.isChoiceSort )
    v4->fields.sortValue0 = 10;
  this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
LABEL_125:
    sub_1C93D2C(this, sort);
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
  this = (SupportServantListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      userServantEntity = v4->fields.userServantEntity;
      if ( !userServantEntity )
        goto LABEL_125;
      v23 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v60.fields.fakeValue = v23;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v59 = v60;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(
                                               &v59,
                                               0);
      v24 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v24 )
        goto LABEL_125;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_125;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v24->fields.createdAt, 0, 0, 0, 0);
      goto LABEL_102;
    case 2:
      rarity = v4->fields.rarity;
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      goto LABEL_87;
    case 3:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_125;
      equipUserServantEntity_low = SLODWORD(this->fields.equipUserServantEntity);
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = equipUserServantEntity_low;
      this = (SupportServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !iconLabelInfo1 )
        goto LABEL_125;
      IconLabelInfo__Set_41636824(iconLabelInfo1, 2, equipUserServantEntity_low, (int32_t)this, 0, 0, 0, 0, 0, 0);
      goto LABEL_107;
    case 4:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_125;
      UserServantEntity__getTreasureDeviceInfo_43875668((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0);
      LODWORD(cost) = tdMaxLv[1];
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = tdMaxLv[1];
      if ( !this )
        goto LABEL_125;
      friendshipMax = tdMaxLv[0];
      v31 = 33;
      goto LABEL_101;
    case 5:
      equipUserServantEntity = v4->fields.equipUserServantEntity;
      hp = v4->fields.hp;
      if ( equipUserServantEntity )
      {
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        v4->fields.sortValue1 = equipUserServantEntity->fields.hp + (int)hp;
        if ( !this )
          goto LABEL_125;
        v34 = v4->fields.iconLabelInfo1;
        this = (SupportServantListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0);
        v35 = v4->fields.equipUserServantEntity;
        if ( !v35 || !v34 )
          goto LABEL_125;
        atk = v35->fields.hp;
        v37 = (int)this;
        v38 = 46;
        goto LABEL_83;
      }
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_125;
      v51 = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      this = (SupportServantListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0);
      if ( !v51 )
        goto LABEL_125;
      friendshipMax = (int)this;
      v31 = 3;
      goto LABEL_114;
    case 6:
      v39 = v4->fields.equipUserServantEntity;
      hp = v4->fields.atk;
      if ( v39 )
      {
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        v4->fields.sortValue1 = v39->fields.atk + (int)hp;
        if ( !this )
          goto LABEL_125;
        v34 = v4->fields.iconLabelInfo1;
        this = (SupportServantListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0);
        v40 = v4->fields.equipUserServantEntity;
        if ( !v40 || !v34 )
          goto LABEL_125;
        atk = v40->fields.atk;
        v37 = (int)this;
        v38 = 47;
LABEL_83:
        IconLabelInfo__Set_41636824(v34, v38, hp, v37, atk, 0, 0, 0, 0, 0);
      }
      else
      {
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        v4->fields.sortValue1 = hp;
        if ( !this )
          goto LABEL_125;
        v51 = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        this = (SupportServantListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0);
        if ( !v51 )
          goto LABEL_125;
        friendshipMax = (int)this;
        v31 = 5;
LABEL_114:
        this = v51;
        LODWORD(cost) = hp;
LABEL_101:
        IconLabelInfo__Set_41636824((IconLabelInfo_o *)this, v31, cost, friendshipMax, 0, 0, 0, 0, 0, 0);
      }
LABEL_102:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_125;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
LABEL_104:
      lv = (int32_t)this->fields.equipUserServantEntity;
LABEL_105:
      this = (SupportServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !iconLabelInfo2 )
        goto LABEL_125;
      IconLabelInfo__Set_41636824(iconLabelInfo2, 2, lv, (int32_t)this, 0, 0, 0, 0, 0, 0);
LABEL_107:
      LOBYTE(this) = 1;
      return (char)this;
    case 7:
      cost = v4->fields.cost;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_125;
      v31 = 7;
      friendshipMax = 0;
      goto LABEL_101;
    case 8:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      rarity = -v4->fields.priority;
LABEL_87:
      v4->fields.sortValue1 = rarity;
      if ( !this )
        goto LABEL_125;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      goto LABEL_104;
    case 0xA:
      v42 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
      v43 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v63.fields.currentCryptoKey = v42;
      *(_QWORD *)&v63.fields.fakeValue = v43;
      v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v63, 0);
      v45 = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v46 = v44;
      friendship = v4->fields.friendship;
      v4->fields.sortValue1 = v46;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                               friendship,
                                               0);
      if ( !v45 )
        goto LABEL_125;
      friendshipMax = v4->fields.friendshipMax;
      LODWORD(cost) = (_DWORD)this;
      v31 = 32;
      this = v45;
      goto LABEL_101;
    case 0xE:
      this = (SupportServantListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_122;
      manager = sort->fields.manager;
      if ( manager
        && (naturalAligment = SupportServantListViewManager_TypeInfo->_2.naturalAligment,
            manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (SupportServantListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == SupportServantListViewManager_TypeInfo )
          v49 = sort->fields.manager;
        else
          v49 = 0;
      }
      else
      {
        v49 = 0;
      }
      v53 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v52 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v65.fields.currentCryptoKey = v53;
      *(_QWORD *)&v65.fields.fakeValue = v52;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v65, 0);
      if ( !v49 )
        goto LABEL_125;
      this = (SupportServantListViewItem_o *)SupportServantListViewManager__GetAmountSortValue(
                                               (SupportServantListViewManager_o *)v49,
                                               (int32_t)this,
                                               v54);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_122:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_125;
      collectionNo = servantEntity->fields.collectionNo;
      v57 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48))
                            | collectionNo;
      if ( !v57 )
        goto LABEL_125;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      lv = v57->fields.lv;
      this = (SupportServantListViewItem_o *)v57;
      goto LABEL_105;
    case 0xF:
      cost = v4->fields.hpReinforceValue;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_125;
      friendshipMax = v4->fields.nowMaxHpReinforceValue;
      v31 = 44;
      goto LABEL_101;
    case 0x10:
      cost = v4->fields.atkReinforceValue;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_125;
      friendshipMax = v4->fields.nowMaxAtkReinforceValue;
      v31 = 45;
      goto LABEL_101;
    default:
      return (char)this;
  }
}


bool SupportServantListViewItem__SwapChoice(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool SupportServantListViewItem__SwapLock(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


bool SupportServantListViewItem___SetSortValue_b__53_0(
        SupportServantListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  EventCampaignMaster_o *v8; // x21
  ServantFilterMaster_o *userServantEntity; // x0
  __int64 v10; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4D2CFD6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2CFD6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  userServantEntity = (ServantFilterMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                 v12,
                                                 0);
  if ( !entity || !v8 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)userServantEntity, entity->fields.eventId, 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  userServantEntity = (ServantFilterMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !userServantEntity )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant(userServantEntity, this->fields.svtId, entity->fields.eventId, 0) )
    return 1;
  userServantEntity = (ServantFilterMaster_o *)this->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_17:
    sub_1C93D2C(userServantEntity, v10);
  return UserServantEntity__getEventUpVal(
           (UserServantEntity_o *)userServantEntity,
           this->fields.eventSetupInfo,
           entity->fields.eventId,
           0,
           0);
}


IconLabelInfo_o *SupportServantListViewItem__get_IconInfo1(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *SupportServantListViewItem__get_IconInfo2(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool SupportServantListViewItem__get_IsBase(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBase;
}


bool SupportServantListViewItem__get_IsCanNotSelectHeroine(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2CFD3 & 1) == 0 )
  {
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D2CFD3 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_41140656(126, 0);
}


bool SupportServantListViewItem__get_IsChoice(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool SupportServantListViewItem__get_IsDispChoice(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool SupportServantListViewItem__get_IsDispLock(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool SupportServantListViewItem__get_IsEnabled(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEnabled;
}


bool SupportServantListViewItem__get_IsEventJoin(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEventJoin;
}


bool SupportServantListViewItem__get_IsInvalidRarity(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isInvalidRarity;
}


bool SupportServantListViewItem__get_IsLock(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool SupportServantListViewItem__get_IsPush(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool SupportServantListViewItem__get_IsPushMode(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPushMode;
}


bool SupportServantListViewItem__get_IsSame(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSame;
}


bool SupportServantListViewItem__get_IsSwapChoice(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool SupportServantListViewItem__get_IsSwapLock(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool SupportServantListViewItem__get_IsUseInSet(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUseInSet;
}


bool SupportServantListViewItem__get_IsUseServant(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  SupportServantListViewItem_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  SupportServantData_o *supportServantData; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4D2CFD4 & 1) == 0 )
  {
    this = (SupportServantListViewItem_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2CFD4 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_8;
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  supportServantData = v2->fields.supportServantData;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v7, 0);
  if ( !supportServantData )
LABEL_8:
    sub_1C93D2C(this, method);
  return SupportServantData__isUseServant(supportServantData, (int64_t)this, 0);
}


ServantEntity_o *SupportServantListViewItem__get_Servant(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t SupportServantListViewItem__get_SvtId(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4D2CFD2 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2CFD2 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v6, 0);
}


int32_t SupportServantListViewItem__get_UseSet(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.useSet;
}


UserServantEntity_o *SupportServantListViewItem__get_UserServant(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


void SupportServantListViewItem__set_IsEnabled(
        SupportServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isEnabled = value;
}


void SupportServantListViewItem__set_IsPush(SupportServantListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isPush = value;
}


void SupportServantListViewItem__set_IsPushMode(
        SupportServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isPushMode = value;
}