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
  IconLabelInfo_o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  IconLabelInfo_o *v29; // x28
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userServantEntity; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int64_t Instance; // x0
  __int64 v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  struct SupportServantData_o *v52; // x1
  struct SupportServantData_o **p_supportServantData; // x25
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  struct ServantEntity_o *ServantEntity; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  struct ServantEntity_o *v73; // x8
  Il2CppObject *MasterData_object; // x0
  __int64 v75; // x27
  __int64 v76; // x28
  ServantLimitMaster_o *v77; // x26
  int32_t v78; // w27
  const MethodInfo *v79; // x2
  struct ServantEntity_o *v80; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v81; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // q1
  UserServantCollectionMaster_o *v83; // x26
  int64_t v84; // x27
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
  int64_t v106; // x25
  UserServantEntity_o *v107; // x8
  UserServantEntity_o *v108; // x8
  UserServantEntity_o *v109; // x8
  ServantEntity_o *v110; // x8
  bool v111; // w8
  int64_t Equip; // x0
  const MethodInfo *v113; // x5
  int64_t v114; // x24
  Il2CppObject *Entity; // x25
  Il2CppObject *v116; // x0
  __int64 v117; // x26
  __int64 v118; // x27
  PartyOrganizationUtility_o *v119; // x24
  int32_t v120; // w26
  int32_t rarity; // w27
  bool v122; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v123; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // q0
  __int64 v125; // x23
  bool v126; // w8
  UserServantEntity_o *v127; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v129; // w2
  int32_t v130; // w3
  System_String_o *v131; // x4
  int32_t v132; // w5
  int64_t v133; // x6
  System_String_o *v134; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v136; // w2
  int32_t v137; // w3
  System_String_o *v138; // x4
  int32_t v139; // w5
  int64_t v140; // x6
  System_String_o *v141; // x7
  int v142; // w22
  BalanceConfig_c *v143; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t v145; // x8
  __int64 v146; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v147; // x8
  __int64 v148; // x21
  __int64 v149; // x22
  struct UserServantEntity_o *v150; // x8
  __int128 v151; // q0
  int64_t v152; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v153; // [xsp+10h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v154; // [xsp+30h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v155; // [xsp+50h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v156; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+90h] [xbp-A0h]
  int32_t actMaxRarity; // [xsp+BCh] [xbp-74h] BYREF
  System_String_o *skillName; // [xsp+C0h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+CCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16

  if ( (byte_4E73C5A & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1D0F0B4(&IconLabelInfo_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4E73C5A = 1;
  }
  friendshipRank = 0;
  skillName = 0;
  actMaxRarity = 0;
  v22 = (IconLabelInfo_o *)sub_1D0F300(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v22, 0);
  this->fields.iconLabelInfo1 = v22;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo1, (int32_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = (IconLabelInfo_o *)sub_1D0F300(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v29, 0);
  this->fields.iconLabelInfo2 = v29;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo2, (int32_t)v29, v31, v32, v33, v34, v35, v36);
  ListViewItem___ctor_45157124((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userServantEntity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  if ( !supportServantData )
    goto LABEL_66;
  if ( LODWORD(supportServantData->max_length) <= nowDeckNum )
    sub_1D0F314(Instance);
  v52 = supportServantData->m_Items[nowDeckNum];
  this->fields.supportServantData = v52;
  p_supportServantData = &this->fields.supportServantData;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.supportServantData,
    (int32_t)v52,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventSetupInfo,
    (int32_t)eventSetupInfo,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  if ( !userServantEntity )
    goto LABEL_66;
  ServantEntity = UserServantEntity__GetServantEntity(userServantEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantEntity,
    (int32_t)ServantEntity,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v73 = this->fields.servantEntity;
  if ( !v73 )
    goto LABEL_66;
  this->fields.svtId = v73->fields.id;
  this->fields.eventFriendPoints = friendPointCampaignEntityList;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaignEntityList,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v76 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v75 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v77 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v161.fields.currentCryptoKey = v76;
  *(_QWORD *)&v161.fields.fakeValue = v75;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v161, 0);
  if ( !*p_userServantEntity )
    goto LABEL_66;
  v78 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200((*p_userServantEntity)[6], 0);
  if ( !v77 )
    goto LABEL_66;
  ServantLimitMaster__GetEntity(v77, v78, Instance, 0);
  SupportServantListViewItem__SetOverwriteStatus(this, userServantEntity, v79);
  v80 = this->fields.servantEntity;
  if ( !v80 )
    goto LABEL_66;
  this->fields.classId = v80->fields.classId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v81 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  v82 = v81[4];
  v83 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v157.fields.currentCryptoKey = v81[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v157.fields.fakeValue = v82;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v156 = v157;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v156, 0);
  if ( !*p_userServantEntity )
    goto LABEL_66;
  v84 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200((*p_userServantEntity)[5], 0);
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
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.equipUserServantEntity, 0, v85, v86, v87, v88, v89, v90);
  this->fields.equipServantEntity = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntity, 0, v91, v92, v93, v94, v95, v96);
  this->fields.equipIdList = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, 0, v97, v98, v99, v100, v101, v102);
  v103 = this->fields.userServantEntity;
  if ( !v103 )
    goto LABEL_66;
  v104 = *(_OWORD *)&v103->fields.id.fields.fakeValue;
  *(_OWORD *)&v155.fields.currentCryptoKey = *(_OWORD *)&v103->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v155.fields.fakeValue = v104;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v155, 0);
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
    goto LABEL_35;
  v114 = Equip;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_66;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v114,
             (const MethodInfo_353832C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v116 = SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v118 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v117 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v119 = (PartyOrganizationUtility_o *)v116;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v162.fields.currentCryptoKey = v118;
  *(_QWORD *)&v162.fields.fakeValue = v117;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v162, 0);
  if ( !Entity
    || (v120 = Instance,
        rarity = this->fields.rarity,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                     0),
        !v119) )
  {
LABEL_66:
    sub_1D0F30C(Instance, v45);
  }
  this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                   v119,
                                   &skillName,
                                   &actMaxRarity,
                                   v120,
                                   rarity,
                                   Instance,
                                   -1,
                                   0);
LABEL_35:
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
  v124 = v123[2];
  v125 = *(_QWORD *)(Instance + 128);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v157.fields.currentCryptoKey = v123[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v157.fields.fakeValue = v124;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v154 = v157;
  this->fields.isPush = v125 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v154, 0);
  this->fields.isEnabled = 1;
  v126 = UserServantEntity__get_IsSaveTransformServant(userServantEntity, 0)
      && !UserServantEntity__CheckBaseServant(userServantEntity, -1, 0);
  this->fields.isTransformed = v126;
  Instance = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(userServantEntity, -1, 0, 0);
  v127 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v127 )
    goto LABEL_66;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v127, -1, Instance, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v129,
    v130,
    v131,
    v132,
    v133,
    v134);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_66;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   this->fields.dispLimitCount,
                                   0);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v136,
    v137,
    v138,
    v139,
    v140,
    v141);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_66;
  v142 = *(_DWORD *)(Instance + 420);
  v143 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v143 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v143->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v142;
  if ( !Instance )
    goto LABEL_66;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 416);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_66;
  v145 = *(int *)(Instance + 52);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.priority = v145;
  this->fields.sortValue1B = v145;
  if ( !Instance )
    goto LABEL_66;
  v146 = (unsigned int)this->fields.rarity;
  Instance = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_66;
  v147 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  this->fields.sortValue2 = ((__int64)*(int *)(Instance + 208) << 16) | (v146 << 48) | v147[25].fields.currentCryptoKey;
  v149 = *(_QWORD *)&v147[5].fields.currentCryptoKey;
  v148 = *(_QWORD *)&v147[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v163.fields.currentCryptoKey = v149;
  *(_QWORD *)&v163.fields.fakeValue = v148;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v163, 0);
  v150 = this->fields.userServantEntity;
  this->fields.sortValue2B = (int)Instance;
  if ( !v150 )
    goto LABEL_66;
  v151 = *(_OWORD *)&v150->fields.id.fields.fakeValue;
  *(_OWORD *)&v157.fields.currentCryptoKey = *(_OWORD *)&v150->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v157.fields.fakeValue = v151;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v153 = v157;
  v152 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v153, 0);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValueLast = v152;
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
  struct UserServantEntity_o *userServantEntity; // x9
  int sortValue1B; // w27
  __int64 v21; // x25
  __int64 v22; // x26
  int32_t *v24; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v9 = this;
  if ( (byte_4E73C5B & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    this = (SupportServantListViewItem_o *)sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E73C5B = 1;
  }
  *setNo = 0;
  if ( !fixDeckIds )
LABEL_28:
    sub_1D0F30C(this, setNo);
  max_length = fixDeckIds->max_length;
  v11 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v24 = setNo;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)max_length )
        goto LABEL_29;
      v13 = (char *)fixDeckIds + 4 * v12;
      v16 = *((_DWORD *)v13 + 8);
      v15 = (int32_t *)(v13 + 32);
      v14 = v16;
      if ( v16 != nowDeckId && v14 >= 1 )
        break;
LABEL_23:
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
        goto LABEL_23;
      if ( v12 >= LODWORD(fixDeckIds->max_length) )
        goto LABEL_29;
      if ( !supportServantData )
        goto LABEL_28;
      v18 = *v15 - 1;
      if ( v18 >= LODWORD(supportServantData->max_length) )
        goto LABEL_29;
      this = (SupportServantListViewItem_o *)supportServantData->m_Items[v18];
      if ( !this )
        goto LABEL_28;
      this = (SupportServantListViewItem_o *)SupportServantData__getUserServantLeaderEntity(
                                               (SupportServantData_o *)this,
                                               i,
                                               0);
      if ( this )
      {
        userServantEntity = v9->fields.userServantEntity;
        if ( !userServantEntity )
          goto LABEL_28;
        sortValue1B = this->fields.sortValue1B;
        v22 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v21 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v26.fields.currentCryptoKey = v22;
        *(_QWORD *)&v26.fields.fakeValue = v21;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                 v26,
                                                 0);
        if ( sortValue1B == (_DWORD)this )
          break;
      }
    }
    if ( (unsigned int)v12 >= LODWORD(fixDeckIds->max_length) )
LABEL_29:
      sub_1D0F314(this);
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

  if ( (byte_4E73C60 & 1) == 0 )
  {
    sub_1D0F0B4(&long___TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E73C60 = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0;
  v4 = sub_1D0F15C(long___TypeInfo, LODWORD(equipIdList->max_length));
  v6 = this->fields.equipIdList;
  if ( !v6 )
LABEL_13:
    sub_1D0F30C(v4, v5);
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
    v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v15, 0);
    if ( v7 )
    {
      if ( v8 >= *(unsigned int *)(v7 + 24) )
LABEL_16:
        sub_1D0F314(v4);
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
  if ( (byte_4E73C64 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_IndexOf_int___);
    this = (SupportServantListViewItem_o *)sub_1D0F0B4(&System_Math_TypeInfo);
    byte_4E73C64 = 1;
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
                                               (const MethodInfo_33590E4 *)Method_System_Array_IndexOf_int___);
      eventFriendPoints = v2->fields.eventFriendPoints;
      if ( eventFriendPoints )
      {
        if ( v7 >= LODWORD(eventFriendPoints->max_length) )
LABEL_22:
          sub_1D0F314(this);
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
            this = (SupportServantListViewItem_o *)System_Math__Max_67084744(v4, v14, 0);
            eventFriendPoints = v2->fields.eventFriendPoints;
            v4 = (int)this;
          }
          ++v5;
          if ( eventFriendPoints )
            continue;
        }
      }
    }
    sub_1D0F30C(this, method);
  }
}


bool SupportServantListViewItem__IsMatchClass(
        SupportServantListViewItem_o *this,
        int32_t classType,
        const MethodInfo *method)
{
  ServantClassMaster_o *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_4E73C5D & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4E73C5D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( classType == 8 )
  {
    if ( Master_object )
    {
      Master_object = (ServantClassMaster_o *)ServantClassMaster__getExtraClassIdList(Master_object, 0);
      if ( Master_object )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)Master_object,
                 this->fields.classId,
                 (const MethodInfo_393F764 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_11:
    sub_1D0F30C(Master_object, v6);
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
  _BOOL4 v26; // w21
  int32_t DispLimitCountStageSealAfterIndexZero; // w2
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
  if ( (byte_4E73C5E & 1) == 0 )
  {
    sub_1D0F0B4(&FilterKindList_TypeInfo);
    sub_1D0F0B4(&ListViewSort_FilterKind___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1D0F0B4(&ServantEventBonusFilterController_TypeInfo);
    this = (SupportServantListViewItem_o *)sub_1D0F0B4(&SupportServantListViewManager_TypeInfo);
    byte_4E73C5E = 1;
  }
  if ( !v3 )
    goto LABEL_89;
  manager = (unsigned int *)v3->fields.manager;
  if ( !manager )
    goto LABEL_89;
  naturalAligment = SupportServantListViewManager_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)manager + 304LL) < (unsigned int)naturalAligment
    || *(SupportServantListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * naturalAligment - 8) != SupportServantListViewManager_TypeInfo )
  {
    goto LABEL_89;
  }
  sort = (ListViewSort_o *)manager[106];
  if ( (unsigned int)((_DWORD)sort - 1) >= 7 )
  {
    if ( (_DWORD)sort == 8 )
    {
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
        goto LABEL_89;
      v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                               (System_Collections_Generic_List_T__o *)this,
                                               (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( ListViewSort__IsUnSelectedAllTargetFilters(v3, v17, 0) )
      {
        v18 = FilterKindList_TypeInfo;
        if ( !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v18 = FilterKindList_TypeInfo;
        }
        this = (SupportServantListViewItem_o *)v18->static_fields->ClassExtra1InShielderFilterKindList;
        if ( !this )
          goto LABEL_89;
        v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                 (System_Collections_Generic_List_T__o *)this,
                                                 (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v19, 0) )
        {
LABEL_62:
          if ( !ListViewSort__IsMatchClassFilter(v3, v4->fields.servantEntity, 0) )
            return 0;
          goto LABEL_9;
        }
        v20 = FilterKindList_TypeInfo;
        if ( !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v20 = FilterKindList_TypeInfo;
        }
        this = (SupportServantListViewItem_o *)v20->static_fields->ClassExtra2FilterKindList;
        if ( !this )
          goto LABEL_89;
LABEL_61:
        v24 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                 (System_Collections_Generic_List_T__o *)this,
                                                 (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( ListViewSort__IsUnSelectedAllTargetFilters(v3, v24, 0) )
          goto LABEL_9;
        goto LABEL_62;
      }
    }
    else
    {
      v21 = FilterKindList_TypeInfo;
      if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v21 = FilterKindList_TypeInfo;
      }
      this = (SupportServantListViewItem_o *)v21->static_fields->ClassGroupFilterKindList;
      if ( !this )
        goto LABEL_89;
      v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                               (System_Collections_Generic_List_T__o *)this,
                                               (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
          goto LABEL_89;
        goto LABEL_61;
      }
    }
    if ( !ListViewSort__IsMatchClassGroupFilter(v3, v4->fields.servantEntity, 0) )
      return 0;
    goto LABEL_9;
  }
  if ( !SupportServantListViewItem__IsMatchClass(v4, (int32_t)sort, method) )
    return 0;
LABEL_9:
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v7->static_fields->NpTypeFilterKindList;
  if ( !this )
    goto LABEL_89;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          (System_Collections_Generic_List_T__o *)this,
                                          (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    goto LABEL_89;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    if ( !v25 )
    {
LABEL_77:
      this = (SupportServantListViewItem_o *)sub_1D0F15C(ListViewSort_FilterKind___TypeInfo, 1);
      if ( !this )
        goto LABEL_89;
      if ( !this->fields.sortIndex )
        goto LABEL_90;
      LODWORD(this->fields.sortValue0) = 50;
      IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                       v3,
                                       (ListViewSort_FilterKind_array *)this,
                                       0);
      this = (SupportServantListViewItem_o *)sub_1D0F15C(ListViewSort_FilterKind___TypeInfo, 1);
      if ( !this )
        goto LABEL_89;
      if ( !this->fields.sortIndex )
LABEL_90:
        sub_1D0F314(this);
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
      goto LABEL_24;
    }
    if ( UserServantEntity__get_IsSaveTransformServant(v25, 0) )
    {
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_89;
      v26 = !UserServantEntity__CheckBaseServant((UserServantEntity_o *)this, -1, 0);
    }
    else
    {
      v26 = 0;
    }
    this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
    if ( this )
    {
      DispLimitCountStageSealAfterIndexZero = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
                                                (UserServantEntity_o *)this,
                                                -1,
                                                0,
                                                0);
      if ( v26 != v4->fields.isTransformed || v4->fields.dispLimitCount != DispLimitCountStageSealAfterIndexZero )
      {
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        v4->fields.isTransformed = v26;
        v4->fields.dispLimitCount = DispLimitCountStageSealAfterIndexZero;
        if ( !this )
          goto LABEL_89;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(
                                (UserServantEntity_o *)this,
                                -1,
                                DispLimitCountStageSealAfterIndexZero,
                                0);
        v4->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1D0F058(
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
          goto LABEL_89;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)this,
                                         0,
                                         v4->fields.dispLimitCount,
                                         0);
        v4->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&v4->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
      }
      goto LABEL_77;
    }
LABEL_89:
    sub_1D0F30C(this, sort);
  }
LABEL_24:
  if ( !ListViewSort__IsMatchServantAttriFilter(v3, v4->fields.userServantEntity, v4->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(v3, v4->fields.userServantEntity, v4->fields.servantEntity, 0) )
  {
    return 0;
  }
  this = (SupportServantListViewItem_o *)sub_1D0F15C(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !this )
    goto LABEL_89;
  if ( !this->fields.sortIndex )
    goto LABEL_90;
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
    goto LABEL_89;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(v3, v14, 0)
      || ListViewSort__IsSelectedAllTargetFilters(v3, v14, 0)
      || ListViewSort__IsMatchRarityFilter(v3, v4->fields.rarity, 0);
}


void SupportServantListViewItem__ModifyChoiceItem(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1D0F30C(0, method);
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
  __int64 v10; // x1
  UserServantEntity_o *Instance; // x0
  const MethodInfo *v12; // x2
  struct ServantEntity_o *ServantEntity; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct ServantEntity_o *v20; // x8
  int64_t currentCryptoKey_high; // x8
  __int64 rarity; // x21

  if ( (byte_4E73C5C & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E73C5C = 1;
  }
  this->fields.userServantEntity = userServantEntity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  Instance = this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_11;
  this->fields.isEventJoin = UserServantEntity__IsEventJoin(Instance, 0);
  SupportServantListViewItem__SetOverwriteStatus(this, userServantEntity, v12);
  if ( !userServantEntity )
    goto LABEL_11;
  ServantEntity = UserServantEntity__GetServantEntity(userServantEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantEntity,
    (int32_t)ServantEntity,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = this->fields.servantEntity;
  if ( !v20 )
    goto LABEL_11;
  this->fields.svtId = v20->fields.id;
  this->fields.classId = v20->fields.classId;
  Instance = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0
    || (Instance = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                            this->fields.classId,
                                            (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0
    || (currentCryptoKey_high = SHIDWORD(Instance->fields.userId.fields.currentCryptoKey),
        rarity = (unsigned int)this->fields.rarity,
        this->fields.priority = currentCryptoKey_high,
        this->fields.sortValue1B = currentCryptoKey_high,
        (Instance = (UserServantEntity_o *)UserServantEntity__get_BaseServantEntity(userServantEntity, 0)) == 0) )
  {
LABEL_11:
    sub_1D0F30C(Instance, v10);
  }
  this->fields.sortValue2 = ((__int64)Instance->fields.randomLimitCount.fields.currentCryptoKey << 16)
                          | (rarity << 48)
                          | userServantEntity->fields.lv;
}


void SupportServantListViewItem__ModifyLockItem(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1D0F30C(0, method);
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
  sub_1D0F058(
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
    sub_1D0F30C(this, userServantEntity);
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
  int64_t sortStr1_low; // x20
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
  __int64 v41; // x20
  __int64 v42; // x21
  int32_t v43; // w0
  SupportServantListViewItem_o *v44; // x20
  int64_t v45; // x9
  int64_t amountSortValue; // x21
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v49; // x20
  IconLabelInfo_o *iconLabelInfo2; // x19
  SupportServantListViewItem_o *v51; // x21
  struct UserServantEntity_o *v52; // x8
  __int64 v53; // x21
  __int64 v54; // x22
  const MethodInfo *v55; // x2
  __int64 v56; // x20
  __int64 v57; // x8
  int32_t sortStr1; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  v4 = this;
  if ( (byte_4E73C5F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_SupportServantListViewItem__SetSortValue_b__54_0__);
    this = (SupportServantListViewItem_o *)sub_1D0F0B4(&SupportServantListViewManager_TypeInfo);
    byte_4E73C5F = 1;
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
        this = (SupportServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventGroupMaster___);
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
            v16 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_EventGroupEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v16,
              (Il2CppObject *)v4,
              Method_SupportServantListViewItem__SetSortValue_b__54_0__,
              0);
            v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                        (System_Func_T__bool__o *)v16,
                                        (const MethodInfo_32382EC *)Method_BasicHelper_Any_EventGroupEntity___);
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventCampaignMaster___);
        v13 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
        v12 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
        v14 = (EventCampaignMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v63.fields.currentCryptoKey = v13;
        *(_QWORD *)&v63.fields.fakeValue = v12;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                 v63,
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
        this = (SupportServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_125;
        this = (SupportServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
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
    sub_1D0F30C(this, sort);
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
  this = (SupportServantListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      userServantEntity = v4->fields.userServantEntity;
      if ( !userServantEntity )
        goto LABEL_125;
      v23 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v61.fields.fakeValue = v23;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v60 = v61;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(
                                               &v60,
                                               0);
      v24 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v24 )
        goto LABEL_125;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_125;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v24->fields.createdAt, 0, 0, 0, 0);
      goto LABEL_100;
    case 2:
      rarity = v4->fields.rarity;
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      goto LABEL_120;
    case 3:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_125;
      sortStr1_low = SLODWORD(this[1].fields.sortStr1);
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = sortStr1_low;
      this = (SupportServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !iconLabelInfo1 )
        goto LABEL_125;
      IconLabelInfo__Set_42279788(iconLabelInfo1, 2, sortStr1_low, (int32_t)this, 0, 0, 0, 0, 0, 0);
      goto LABEL_124;
    case 4:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_125;
      UserServantEntity__getTreasureDeviceInfo_44543568((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0);
      LODWORD(cost) = tdMaxLv[1];
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = tdMaxLv[1];
      if ( !this )
        goto LABEL_125;
      friendshipMax = tdMaxLv[0];
      v31 = 33;
      goto LABEL_99;
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
      goto LABEL_108;
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
        IconLabelInfo__Set_42279788(v34, v38, hp, v37, atk, 0, 0, 0, 0, 0);
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
LABEL_108:
        this = v51;
        LODWORD(cost) = hp;
LABEL_99:
        IconLabelInfo__Set_42279788((IconLabelInfo_o *)this, v31, cost, friendshipMax, 0, 0, 0, 0, 0, 0);
      }
LABEL_100:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_125;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
LABEL_122:
      sortStr1 = (int32_t)this[1].fields.sortStr1;
      this = (SupportServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !iconLabelInfo2 )
        goto LABEL_125;
      IconLabelInfo__Set_42279788(iconLabelInfo2, 2, sortStr1, (int32_t)this, 0, 0, 0, 0, 0, 0);
LABEL_124:
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
      goto LABEL_99;
    case 8:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      rarity = -v4->fields.priority;
      goto LABEL_120;
    case 0xA:
      v41 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
      v42 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v64.fields.currentCryptoKey = v41;
      *(_QWORD *)&v64.fields.fakeValue = v42;
      v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v64, 0);
      v44 = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v45 = v43;
      friendship = v4->fields.friendship;
      v4->fields.sortValue1 = v45;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                               friendship,
                                               0);
      if ( !v44 )
        goto LABEL_125;
      friendshipMax = v4->fields.friendshipMax;
      LODWORD(cost) = (_DWORD)this;
      v31 = 32;
      this = v44;
      goto LABEL_99;
    case 0xE:
      amountSortValue = v4->fields.amountSortValue;
      if ( (amountSortValue & 0x8000000000000000LL) == 0 )
        goto LABEL_117;
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
      v52 = v4->fields.userServantEntity;
      if ( !v52 )
        goto LABEL_125;
      v54 = *(_QWORD *)&v52->fields.svtId.fields.currentCryptoKey;
      v53 = *(_QWORD *)&v52->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v66.fields.currentCryptoKey = v54;
      *(_QWORD *)&v66.fields.fakeValue = v53;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v66, 0);
      if ( !v49 )
        goto LABEL_125;
      amountSortValue = SupportServantListViewManager__GetAmountSortValue(
                          (SupportServantListViewManager_o *)v49,
                          (int32_t)this,
                          v55);
      v4->fields.amountSortValue = amountSortValue;
LABEL_117:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_125;
      v56 = (unsigned int)v4->fields.rarity;
      this = (SupportServantListViewItem_o *)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)this, 0);
      if ( !this )
        goto LABEL_125;
      v57 = *(int *)&this->fields.isBase;
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      rarity = ((v56 << 32) + (amountSortValue << 48)) | v57;
LABEL_120:
      v4->fields.sortValue1 = rarity;
      if ( !this )
        goto LABEL_125;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      goto LABEL_122;
    case 0xF:
      cost = v4->fields.hpReinforceValue;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_125;
      friendshipMax = v4->fields.nowMaxHpReinforceValue;
      v31 = 44;
      goto LABEL_99;
    case 0x10:
      cost = v4->fields.atkReinforceValue;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_125;
      friendshipMax = v4->fields.nowMaxAtkReinforceValue;
      v31 = 45;
      goto LABEL_99;
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


bool SupportServantListViewItem___SetSortValue_b__54_0(
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

  if ( (byte_4E73C65 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E73C65 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  userServantEntity = (ServantFilterMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                 v12,
                                                 0);
  if ( !entity || !v8 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)userServantEntity, entity->fields.eventId, 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  userServantEntity = (ServantFilterMaster_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !userServantEntity )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant(userServantEntity, this->fields.svtId, entity->fields.eventId, 0) )
    return 1;
  userServantEntity = (ServantFilterMaster_o *)this->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_17:
    sub_1D0F30C(userServantEntity, v10);
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
  if ( (byte_4E73C62 & 1) == 0 )
  {
    sub_1D0F0B4(&TutorialFlag_TypeInfo);
    byte_4E73C62 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_41786532(126, 0);
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
  if ( (byte_4E73C63 & 1) == 0 )
  {
    this = (SupportServantListViewItem_o *)sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E73C63 = 1;
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
  this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v7, 0);
  if ( !supportServantData )
LABEL_8:
    sub_1D0F30C(this, method);
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

  if ( (byte_4E73C61 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E73C61 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v6, 0);
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