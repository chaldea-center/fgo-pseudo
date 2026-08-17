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
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  IconLabelInfo_o *v29; // x28
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userServantEntity; // x22
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  int64_t Instance; // x0
  __int64 v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct SupportServantData_o *v52; // x1
  struct SupportServantData_o **p_supportServantData; // x25
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  struct ServantEntity_o *ServantEntity; // x0
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  struct ServantEntity_o *v73; // x8
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o id; // q0
  Il2CppObject *MasterData_object; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x27
  __int64 v79; // x28
  ServantLimitMaster_o *v80; // x26
  int32_t v81; // w27
  const MethodInfo *v82; // x2
  struct ServantEntity_o *v83; // x8
  const MethodInfo_47A29F8 *v84; // x0
  __int64 v85; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v86; // x8
  UserServantCollectionMaster_o *v87; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // q1
  int64_t v89; // x27
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  struct UserServantEntity_o *v108; // x8
  __int128 v109; // q1
  SupportServantData_o *v110; // x8
  int64_t v111; // x25
  int64_t Member; // x8
  bool IsLock; // w8
  bool IsChoice; // w8
  bool IsEventJoin; // w8
  bool v116; // w8
  int64_t Equip; // x0
  const MethodInfo *v118; // x5
  int64_t v119; // x24
  Il2CppObject *Entity; // x25
  __int64 v121; // x1
  __int64 v122; // x2
  Il2CppObject *v123; // x24
  __int64 v124; // x26
  __int64 v125; // x27
  int32_t v126; // w26
  int32_t rarity; // w27
  bool v128; // w0
  __int64 v129; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v130; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // q1
  __int64 v133; // x23
  int v134; // w9
  bool v135; // w9
  bool v136; // w8
  UserServantEntity_o *v137; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_o *v139; // x2
  System_String_o *v140; // x3
  int32_t v141; // w4
  int32_t v142; // w5
  bool v143; // w6
  bool v144; // w7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_o *v146; // x2
  System_String_o *v147; // x3
  int32_t v148; // w4
  int32_t v149; // w5
  bool v150; // w6
  bool v151; // w7
  __int64 v152; // x1
  __int64 v153; // x2
  BalanceConfig_c *v154; // x0
  int32_t adjustHp; // w24
  struct BalanceConfig_StaticFields *static_fields; // x8
  const MethodInfo_47A29F8 *v157; // x0
  int64_t v158; // x8
  __int64 v159; // x21
  __int64 v160; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v161; // x8
  __int64 v162; // x21
  __int64 v163; // x22
  __int64 v164; // x2
  struct UserServantEntity_o *v165; // x8
  __int128 v166; // q0
  __int128 v167; // q1
  int v168; // w8
  int64_t v169; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v170; // [xsp+10h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v171; // [xsp+30h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v172; // [xsp+50h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v173; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v174; // [xsp+90h] [xbp-A0h]
  int32_t actMaxRarity; // [xsp+BCh] [xbp-74h] BYREF
  System_String_o *skillName; // [xsp+C0h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+CCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v178; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v179; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v180; // 0:x0.16

  if ( (byte_596CD50 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_596CD50 = 1;
  }
  friendshipRank = 0;
  skillName = 0;
  actMaxRarity = 0;
  v22 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v22, 0);
  this->fields.iconLabelInfo1 = v22;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v29, 0);
  this->fields.iconLabelInfo2 = v29;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v29,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity,
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
    sub_2213CE4(Instance);
  v52 = supportServantData->m_Items[nowDeckNum];
  this->fields.supportServantData = v52;
  p_supportServantData = &this->fields.supportServantData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.supportServantData,
    (int32_t)v52,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventSetupInfo,
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
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
  id = v73->fields.id;
  this->fields.eventFriendPoints = friendPointCampaignEntityList;
  this->fields.svtId = id;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaignEntityList,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v78 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v79 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v80 = (ServantLimitMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v76, v77);
  *(_QWORD *)&v178.fields.currentCryptoKey = v78;
  *(_QWORD *)&v178.fields.fakeValue = v79;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v178, 0);
  if ( !*p_userServantEntity )
    goto LABEL_66;
  v81 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068((*p_userServantEntity)[6], 0);
  if ( !v80 )
    goto LABEL_66;
  ServantLimitMaster__GetEntity(v80, v81, Instance, 0);
  SupportServantListViewItem__SetOverwriteStatus(this, userServantEntity, v82);
  v83 = this->fields.servantEntity;
  if ( !v83 )
    goto LABEL_66;
  v84 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.classId = v83->fields.classId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v84);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v86 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  v87 = (UserServantCollectionMaster_o *)Instance;
  v88 = v86[4];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v174.fields.currentCryptoKey = v86[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v174.fields.fakeValue = v88;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v45, v85);
  v173 = v174;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v173, 0);
  if ( !*p_userServantEntity )
    goto LABEL_66;
  v89 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068((*p_userServantEntity)[5], 0);
  if ( !v87 )
    goto LABEL_66;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v87, v89, Instance, 0);
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
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipUserServantEntity, 0, v90, v91, v92, v93, v94, v95);
  this->fields.equipServantEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipServantEntity, 0, v96, v97, v98, v99, v100, v101);
  this->fields.equipIdList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipIdList, 0, v102, v103, v104, v105, v106, v107);
  v108 = this->fields.userServantEntity;
  if ( !v108 )
    goto LABEL_66;
  v109 = *(_OWORD *)&v108->fields.id.fields.fakeValue;
  *(_OWORD *)&v172.fields.currentCryptoKey = *(_OWORD *)&v108->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v172.fields.fakeValue = v109;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v172, 0);
  v110 = *p_supportServantData;
  if ( !*p_supportServantData )
    goto LABEL_66;
  v111 = Instance;
  Member = SupportServantData__getMember(v110, classPos, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isBase = v111 == Member;
  if ( !Instance )
    goto LABEL_66;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isLock = IsLock;
  if ( !Instance )
    goto LABEL_66;
  IsChoice = UserServantEntity__IsChoice((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isChoice = IsChoice;
  if ( !Instance )
    goto LABEL_66;
  IsEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.servantEntity;
  this->fields.isEventJoin = IsEventJoin;
  if ( !Instance )
    goto LABEL_66;
  v116 = ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.supportServantData;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  this->fields.isHeroine = v116;
  if ( !Instance )
    goto LABEL_66;
  Equip = SupportServantData__getEquip((SupportServantData_o *)Instance, classPos, 0);
  if ( Equip < 1 )
    goto LABEL_35;
  v119 = Equip;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_66;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v119,
             (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v123 = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v124 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v125 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v121, v122);
  *(_QWORD *)&v179.fields.currentCryptoKey = v124;
  *(_QWORD *)&v179.fields.fakeValue = v125;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v179, 0);
  if ( !Entity
    || (v126 = Instance,
        rarity = this->fields.rarity,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                     0),
        !v123) )
  {
LABEL_66:
    sub_2213CDC(Instance, v45);
  }
  this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                   (PartyOrganizationUtility_o *)v123,
                                   &skillName,
                                   &actMaxRarity,
                                   v126,
                                   rarity,
                                   Instance,
                                   -1,
                                   0);
LABEL_35:
  this->fields.isUseInSet = 0;
  if ( isFixMainDeck )
  {
    v128 = SupportServantListViewItem__CheckUseInSet(
             this,
             &this->fields.useSet,
             fixMainDeckIds,
             nowDeckId,
             supportServantData,
             v118);
    this->fields.isUseInSet = v128;
    if ( !isFixEventDeck || v128 )
      goto LABEL_41;
  }
  else if ( !isFixEventDeck )
  {
    goto LABEL_41;
  }
  this->fields.isUseInSet = SupportServantListViewItem__CheckUseInSet(
                              this,
                              &this->fields.useSet,
                              fixEventDeckIds,
                              nowDeckId,
                              supportServantData,
                              v118);
LABEL_41:
  this->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_66;
  v130 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  v131 = v130[1];
  v132 = v130[2];
  v133 = *(_QWORD *)(Instance + 128);
  v134 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v174.fields.currentCryptoKey = v131;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v174.fields.fakeValue = v132;
  if ( !v134 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v45, v129);
  v171 = v174;
  v135 = v133 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v171, 0);
  this->fields.isEnabled = 1;
  this->fields.isPush = v135;
  v136 = UserServantEntity__get_IsSaveTransformServant(userServantEntity, 0)
      && !UserServantEntity__CheckBaseServant(userServantEntity, -1, 0);
  this->fields.isTransformed = v136;
  Instance = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(userServantEntity, -1, 0, 0);
  v137 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v137 )
    goto LABEL_66;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v137, -1, Instance, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v139,
    v140,
    v141,
    v142,
    v143,
    v144);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_66;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   this->fields.dispLimitCount,
                                   0);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v146,
    v147,
    v148,
    v149,
    v150,
    v151);
  v154 = BalanceConfig_TypeInfo;
  adjustHp = userServantEntity->fields.adjustHp;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v152, v153);
    v154 = BalanceConfig_TypeInfo;
  }
  static_fields = v154->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * adjustHp;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * userServantEntity->fields.adjustAtk;
  UserServantEntity__GetAdjustMaxData(
    userServantEntity,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  v157 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v157);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_66;
  v158 = *(int *)(Instance + 52);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.priority = v158;
  this->fields.sortValue1B = v158;
  if ( !Instance )
    goto LABEL_66;
  v159 = (unsigned int)this->fields.rarity;
  Instance = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_66;
  v161 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  this->fields.sortValue2 = ((__int64)*(int *)(Instance + 208) << 16) | (v159 << 48) | v161[25].fields.currentCryptoKey;
  v162 = *(_QWORD *)&v161[5].fields.currentCryptoKey;
  v163 = *(_QWORD *)&v161[5].fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v45, v160);
  *(_QWORD *)&v180.fields.currentCryptoKey = v162;
  *(_QWORD *)&v180.fields.fakeValue = v163;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v180, 0);
  v165 = this->fields.userServantEntity;
  this->fields.sortValue2B = (int)Instance;
  if ( !v165 )
    goto LABEL_66;
  v166 = *(_OWORD *)&v165->fields.id.fields.currentCryptoKey;
  v167 = *(_OWORD *)&v165->fields.id.fields.fakeValue;
  v168 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v174.fields.currentCryptoKey = v166;
  *(_OWORD *)&v174.fields.fakeValue = v167;
  if ( !v168 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v45, v164);
  v170 = v174;
  v169 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v170, 0);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValueLast = v169;
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
  __int64 v20; // x25
  __int64 v21; // x26
  int sortValue1B; // w27
  int32_t *v24; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v9 = this;
  if ( (byte_596CD51 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    this = (SupportServantListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596CD51 = 1;
  }
  *setNo = 0;
  if ( !fixDeckIds )
LABEL_28:
    sub_2213CDC(this, setNo);
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
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, setNo, fixDeckIds);
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
        v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v21 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        sortValue1B = this->fields.sortValue1B;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setNo, fixDeckIds);
        *(_QWORD *)&v26.fields.currentCryptoKey = v20;
        *(_QWORD *)&v26.fields.fakeValue = v21;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                 v26,
                                                 0);
        if ( sortValue1B == (_DWORD)this )
          break;
      }
    }
    if ( (unsigned int)v12 >= LODWORD(fixDeckIds->max_length) )
LABEL_29:
      sub_2213CE4(this);
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
  __int64 v6; // x2
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v7; // x8
  int64_t v8; // x20
  unsigned __int64 v9; // x21
  __int64 v10; // x23
  unsigned __int64 max_length_low; // x9
  __int128 *v12; // x8
  __int128 v13; // q0
  __int128 v14; // q1
  unsigned __int64 v15; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-50h]

  if ( (byte_596CD56 & 1) == 0 )
  {
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596CD56 = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0;
  v4 = sub_2213B20(long___TypeInfo, LODWORD(equipIdList->max_length));
  v7 = this->fields.equipIdList;
  if ( !v7 )
LABEL_13:
    sub_2213CDC(v4, v5);
  v8 = v4;
  v9 = 0;
  v10 = 32;
  while ( 1 )
  {
    max_length_low = LODWORD(v7->max_length);
    if ( (__int64)v9 >= (int)max_length_low )
      return (System_Int64_array *)v8;
    if ( v9 >= max_length_low )
      goto LABEL_16;
    v12 = (__int128 *)((char *)v7 + v10);
    v13 = *v12;
    v14 = v12[1];
    LODWORD(v12) = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v18.fields.currentCryptoKey = v13;
    *(_OWORD *)&v18.fields.fakeValue = v14;
    if ( !(_DWORD)v12 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6);
    v17 = v18;
    v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v17, 0);
    if ( v8 )
    {
      if ( v9 >= *(unsigned int *)(v8 + 24) )
LABEL_16:
        sub_2213CE4(v4);
      v15 = v8 + 8 * v9;
      v7 = this->fields.equipIdList;
      ++v9;
      v10 += 32;
      *(_QWORD *)(v15 + 32) = v4;
      if ( v7 )
        continue;
    }
    goto LABEL_13;
  }
}


int32_t SupportServantListViewItem__GetFriendPointBonus(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  SupportServantListViewItem_o *v2; // x19
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  unsigned int v4; // w22
  int32_t v5; // w20
  unsigned int max_length; // w9
  EventCampaignEntity_o *v7; // x8
  System_Int32_array *targetIds; // x21
  int32_t SvtId; // w0
  __int64 v10; // x2
  EventCampaignEntity_o *v11; // x9
  struct System_Int32_array *v12; // x10
  int32_t value; // w21

  v2 = this;
  if ( (byte_596CD5A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    this = (SupportServantListViewItem_o *)sub_2213A60(&System_Math_TypeInfo);
    byte_596CD5A = 1;
  }
  eventFriendPoints = v2->fields.eventFriendPoints;
  if ( !eventFriendPoints )
    return -1;
  v4 = 0;
  v5 = -1;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    if ( (int)v4 >= (int)max_length )
      return v5;
    if ( v4 >= max_length )
      goto LABEL_21;
    v7 = eventFriendPoints->m_Items[v4];
    if ( v7 )
    {
      targetIds = v7->fields.targetIds;
      SvtId = SupportServantListViewItem__get_SvtId(v2, method);
      this = (SupportServantListViewItem_o *)System_Array__IndexOf_int_(
                                               targetIds,
                                               SvtId,
                                               (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
      eventFriendPoints = v2->fields.eventFriendPoints;
      if ( eventFriendPoints )
      {
        if ( v4 >= LODWORD(eventFriendPoints->max_length) )
LABEL_21:
          sub_2213CE4(this);
        v11 = eventFriendPoints->m_Items[v4];
        if ( v11 )
        {
          v12 = v11->fields.targetIds;
          if ( !v12 || ((unsigned int)this & 0x80000000) == 0 || !LODWORD(v12->max_length) )
          {
            value = v11->fields.value;
            if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v10);
            this = (SupportServantListViewItem_o *)System_Math__Max_77153260(v5, value, 0);
            eventFriendPoints = v2->fields.eventFriendPoints;
            v5 = (int)this;
          }
          ++v4;
          if ( eventFriendPoints )
            continue;
        }
      }
    }
    sub_2213CDC(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
bool SupportServantListViewItem__IsMatchClass(
        SupportServantListViewItem_o *this,
        int32_t classType,
        const MethodInfo *method)
{
  ServantClassMaster_o *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_596CD53 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    byte_596CD53 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&classType, method);
  Master_object = (ServantClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( classType == 8 )
  {
    if ( Master_object )
    {
      Master_object = (ServantClassMaster_o *)ServantClassMaster__getExtraClassIdList(Master_object, 0);
      if ( Master_object )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)Master_object,
                 this->fields.classId,
                 (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_11:
    sub_2213CDC(Master_object, v6);
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
  __int64 naturalAligment; // x10
  unsigned int ClassType; // w0
  const MethodInfo *v7; // x2
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  __int64 v10; // x2
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  __int64 v13; // x2
  __int64 v14; // x2
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  __int64 v17; // x2
  FilterKindList_c *v18; // x0
  ListViewSort_FilterKind_array *v19; // x0
  __int64 v20; // x2
  FilterKindList_c *v21; // x0
  FilterKindList_c *v22; // x0
  ListViewSort_FilterKind_array *v23; // x0
  __int64 v24; // x2
  FilterKindList_c *v25; // x0
  ListViewSort_FilterKind_array *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  UserServantEntity_o *userServantEntity; // x21
  __int64 v30; // x2
  _BOOL4 isChoice; // w8
  FilterKindList_c *v32; // x0
  ListViewSort_FilterKind_array *v33; // x21
  UserServantEntity_o *v35; // x0
  bool v36; // w8
  int v37; // w21
  int32_t DispLimitCountStageSealAfterIndexZero; // w2
  System_Int32_array *SkillCategoryIdList; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v54; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v56; // w0

  v3 = sort;
  v4 = this;
  if ( (byte_596CD54 & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&ListViewSort_FilterKind___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_2213A60(&ServantEventBonusFilterController_TypeInfo);
    this = (SupportServantListViewItem_o *)sub_2213A60(&SupportServantListViewManager_TypeInfo);
    byte_596CD54 = 1;
  }
  if ( !v3 )
    goto LABEL_91;
  this = (SupportServantListViewItem_o *)v3->fields.manager;
  if ( !this )
    goto LABEL_91;
  naturalAligment = SupportServantListViewManager_TypeInfo->_2.naturalAligment;
  if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SupportServantListViewManager_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantListViewManager_TypeInfo )
  {
    goto LABEL_91;
  }
  ClassType = SupportServantListViewManager__GetClassType(
                (SupportServantListViewManager_o *)this,
                (const MethodInfo *)sort);
  sort = (ListViewSort_o *)ClassType;
  if ( ClassType != 8 )
  {
    if ( ClassType )
    {
      if ( !SupportServantListViewItem__IsMatchClass(v4, ClassType, v7) )
        return 0;
      goto LABEL_36;
    }
    v8 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v7);
      v8 = FilterKindList_TypeInfo;
    }
    this = (SupportServantListViewItem_o *)v8->static_fields->ClassGroupFilterKindList;
    if ( !this )
      goto LABEL_91;
    v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)this,
                                            (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(v3, v9, 0) )
    {
      v11 = FilterKindList_TypeInfo;
      if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v10);
        v11 = FilterKindList_TypeInfo;
      }
      this = (SupportServantListViewItem_o *)v11->static_fields->ClassFilterKindList;
      if ( !this )
        goto LABEL_91;
      goto LABEL_16;
    }
LABEL_33:
    if ( !ListViewSort__IsMatchClassGroupFilter(v3, v4->fields.servantEntity, 0) )
      return 0;
    goto LABEL_36;
  }
  if ( !SupportServantListViewItem__IsMatchClass(v4, ClassType, v7) )
    return 0;
  v15 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v14);
    v15 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v15->static_fields->ClassGroupFilterKindList;
  if ( !this )
    goto LABEL_91;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v16, 0) )
    goto LABEL_33;
  v18 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v17);
    v18 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v18->static_fields->ClassExtra1InShielderFilterKindList;
  if ( !this )
    goto LABEL_91;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(v3, v19, 0) )
  {
    v21 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v20);
      v21 = FilterKindList_TypeInfo;
    }
    this = (SupportServantListViewItem_o *)v21->static_fields->ClassExtra2FilterKindList;
    if ( !this )
      goto LABEL_91;
LABEL_16:
    v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)this,
                                             (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(v3, v12, 0) )
      goto LABEL_36;
  }
  if ( !ListViewSort__IsMatchClassFilter(v3, v4->fields.servantEntity, 0) )
    return 0;
LABEL_36:
  v22 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v13);
    v22 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v22->static_fields->NpTypeFilterKindList;
  if ( !this )
    goto LABEL_91;
  v23 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v23, 0)
    && !ListViewSort__IsMatchNPTypeFilter(v3, v4->fields.userServantEntity, 0) )
  {
    return 0;
  }
  v25 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v24);
    v25 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v25->static_fields->NpEffectFilterKindList;
  if ( !this )
    goto LABEL_91;
  v26 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v26, 0)
    && !ListViewSort__IsMatchNPEffectFilter(v3, v4->fields.userServantEntity, 0) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(v3, -1, 0) )
  {
    userServantEntity = v4->fields.userServantEntity;
    if ( !*(&ServantEventBonusFilterController_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo, v27, v28);
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, v3, -1, 0) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(v3, 0) )
  {
    v35 = v4->fields.userServantEntity;
    if ( !v35 )
    {
LABEL_78:
      this = (SupportServantListViewItem_o *)sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
      if ( !this )
        goto LABEL_91;
      if ( !this->fields.sortIndex )
        goto LABEL_92;
      LODWORD(this->fields.sortValue0) = 50;
      IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                       v3,
                                       (ListViewSort_FilterKind_array *)this,
                                       0);
      this = (SupportServantListViewItem_o *)sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
      if ( !this )
        goto LABEL_91;
      if ( !this->fields.sortIndex )
LABEL_92:
        sub_2213CE4(this);
      LODWORD(this->fields.sortValue0) = 51;
      v54 = ListViewSort__IsUnSelectedAllTargetFilters(v3, (ListViewSort_FilterKind_array *)this, 0);
      IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                                v4->fields.tdCategoryIdList,
                                v3,
                                0);
      v56 = ServantEquipEffectFilterController__IsMatchEffectCategory(v4->fields.skillCategoryIdList, v3, 0);
      if ( IsUnSelectedAllTargetFilters && v54 || !IsUnSelectedAllTargetFilters && !v54 )
      {
        if ( !IsMatchEffectCategory && !v56 )
          return 0;
      }
      else if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v56 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
      goto LABEL_51;
    }
    if ( UserServantEntity__get_IsSaveTransformServant(v35, 0) )
    {
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_91;
      v36 = !UserServantEntity__CheckBaseServant((UserServantEntity_o *)this, -1, 0);
    }
    else
    {
      v36 = 0;
    }
    this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
    if ( this )
    {
      v37 = v36;
      DispLimitCountStageSealAfterIndexZero = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
                                                (UserServantEntity_o *)this,
                                                -1,
                                                0,
                                                0);
      if ( v4->fields.isTransformed != v37 || v4->fields.dispLimitCount != DispLimitCountStageSealAfterIndexZero )
      {
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        v4->fields.isTransformed = v37;
        v4->fields.dispLimitCount = DispLimitCountStageSealAfterIndexZero;
        if ( !this )
          goto LABEL_91;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(
                                (UserServantEntity_o *)this,
                                -1,
                                DispLimitCountStageSealAfterIndexZero,
                                0);
        v4->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v4->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_91;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)this,
                                         0,
                                         v4->fields.dispLimitCount,
                                         0);
        v4->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v4->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
      }
      goto LABEL_78;
    }
LABEL_91:
    sub_2213CDC(this, sort);
  }
LABEL_51:
  if ( !ListViewSort__IsMatchServantAttriFilter(v3, v4->fields.userServantEntity, v4->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(v3, v4->fields.userServantEntity, v4->fields.servantEntity, 0) )
  {
    return 0;
  }
  this = (SupportServantListViewItem_o *)sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !this )
    goto LABEL_91;
  if ( !this->fields.sortIndex )
    goto LABEL_92;
  LODWORD(this->fields.sortValue0) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, (ListViewSort_FilterKind_array *)this, 0)
    && ListViewSort__GetFilter(v3, 39, 0) )
  {
    isChoice = v4->fields.isChoice;
    if ( v4->fields.isSwapChoice )
      isChoice = !v4->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v32 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v30);
    v32 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v32->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_91;
  v33 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(v3, v33, 0)
      || ListViewSort__IsSelectedAllTargetFilters(v3, v33, 0)
      || ListViewSort__IsMatchRarityFilter(v3, v4->fields.rarity, 0);
}


void SupportServantListViewItem__ModifyChoiceItem(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  bool IsChoice; // w0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_2213CDC(0, method);
  IsChoice = UserServantEntity__IsChoice(userServantEntity, 0);
  this->fields.isSwapChoice = 0;
  this->fields.isChoice = IsChoice;
}


void SupportServantListViewItem__ModifyItem(
        SupportServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  UserServantEntity_o *Instance; // x0
  const MethodInfo *v12; // x2
  struct ServantEntity_o *ServantEntity; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct ServantEntity_o *v20; // x8
  const MethodInfo_47A29F8 *v21; // x0
  int64_t currentCryptoKey_high; // x8
  __int64 rarity; // x21

  if ( (byte_596CD52 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596CD52 = 1;
  }
  this->fields.userServantEntity = userServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    (System_String_o *)method,
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
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
  v21 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.classId = v20->fields.classId;
  Instance = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance(v21);
  if ( !Instance
    || (Instance = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0
    || (Instance = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                            this->fields.classId,
                                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0
    || (currentCryptoKey_high = SHIDWORD(Instance->fields.userId.fields.currentCryptoKey),
        rarity = (unsigned int)this->fields.rarity,
        this->fields.priority = currentCryptoKey_high,
        this->fields.sortValue1B = currentCryptoKey_high,
        (Instance = (UserServantEntity_o *)UserServantEntity__get_BaseServantEntity(userServantEntity, 0)) == 0) )
  {
LABEL_11:
    sub_2213CDC(Instance, v10);
  }
  this->fields.sortValue2 = ((__int64)Instance->fields.randomLimitCount.fields.currentCryptoKey << 16)
                          | (rarity << 48)
                          | userServantEntity->fields.lv;
}


void SupportServantListViewItem__ModifyLockItem(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  bool IsLock; // w0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_2213CDC(0, method);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0);
  this->fields.isSwapLock = 0;
  this->fields.isLock = IsLock;
}


void SupportServantListViewItem__ResetEventCampaign(
        SupportServantListViewItem_o *this,
        EventCampaignEntity_array *friendPointCampaigns,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.eventFriendPoints = friendPointCampaigns;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaigns,
    (System_String_o *)method,
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
    sub_2213CDC(this, userServantEntity);
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
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v7; // zf
  _BOOL4 v8; // w8
  int v9; // w10
  __int64 v10; // x2
  int32_t sortKind; // w8
  int64_t sortStr1_low; // x20
  IconLabelInfo_o *v13; // x21
  const MethodInfo *v14; // x2
  __int64 v15; // x20
  __int64 v16; // x21
  int64_t v17; // x8
  IconLabelInfo_o *v18; // x20
  int32_t bonusKind2; // w8
  int32_t v20; // w2
  struct UserServantEntity_o *v21; // x8
  int64_t hp; // x20
  IconLabelInfo_o *v23; // x21
  struct UserServantEntity_o *v24; // x8
  int32_t atk; // w4
  int32_t v26; // w3
  IconLabelInfo_o *v27; // x0
  int32_t v28; // w1
  int64_t atkReinforceValue; // x2
  int32_t bonusKind2Id; // w8
  int32_t v31; // w8
  struct UserServantEntity_o *v32; // x8
  __int128 v33; // q1
  struct UserServantEntity_o *v34; // x8
  int64_t cost; // x2
  int32_t v36; // w2
  int64_t amountSortValue; // x21
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v40; // x20
  int64_t v41; // x8
  struct UserServantEntity_o *equipUserServantEntity; // x8
  IconLabelInfo_o *v43; // x21
  struct UserServantEntity_o *v44; // x8
  int64_t hpReinforceValue; // x2
  bool IsEnableServant; // w0
  int32_t v47; // w8
  DataManager_c *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  Il2CppObject *Master_object; // x21
  __int64 v52; // x22
  __int64 v53; // x23
  IconLabelInfo_o *v54; // x21
  IconLabelInfo_o *v55; // x21
  IconLabelInfo_o *iconLabelInfo1; // x19
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v58; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v60; // x21
  __int64 v61; // x22
  const MethodInfo *v62; // x2
  __int64 rarity; // x20
  __int64 v64; // x9
  int32_t sortStr1; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  v4 = this;
  if ( (byte_596CD55 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SupportServantListViewItem__SetSortValue_b__54_0__);
    this = (SupportServantListViewItem_o *)sub_2213A60(&SupportServantListViewManager_TypeInfo);
    byte_596CD55 = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1;
  if ( !sort )
    goto LABEL_143;
  if ( !sort->fields.isBonusKind || v4->fields.isBase )
  {
LABEL_6:
    if ( !v4->fields.isBase )
    {
      this = (SupportServantListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_143;
      if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0) )
        goto LABEL_125;
      this = (SupportServantListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_143;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0)
        || !SupportServantListViewItem__IsMatchServantFilter(v4, sort, v14) )
      {
        goto LABEL_125;
      }
    }
    isChoice = v4->fields.isChoice;
    isSwapChoice = v4->fields.isSwapChoice;
    v4->fields.sortValue0 = 0;
    v7 = !isChoice;
    v8 = isChoice;
    v9 = v7;
    if ( isSwapChoice )
      v8 = v9;
    if ( v8 && sort->fields.isChoiceSort )
      v4->fields.sortValue0 = 10;
    this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo2;
    if ( !this )
LABEL_143:
      sub_2213CDC(this, sort);
    IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
    sortKind = sort->fields.sortKind;
    this = (SupportServantListViewItem_o *)(&dword_0 + 1);
    if ( sortKind > 6 )
    {
      if ( sortKind > 13 )
      {
        switch ( sortKind )
        {
          case 14:
            amountSortValue = v4->fields.amountSortValue;
            if ( amountSortValue < 0 )
            {
              manager = sort->fields.manager;
              if ( manager
                && (naturalAligment = SupportServantListViewManager_TypeInfo->_2.naturalAligment,
                    manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
              {
                if ( (SupportServantListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == SupportServantListViewManager_TypeInfo )
                  v40 = sort->fields.manager;
                else
                  v40 = 0;
              }
              else
              {
                v40 = 0;
              }
              userServantEntity = v4->fields.userServantEntity;
              if ( !userServantEntity )
                goto LABEL_143;
              v60 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
              v61 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort, v10);
              *(_QWORD *)&v73.fields.currentCryptoKey = v60;
              *(_QWORD *)&v73.fields.fakeValue = v61;
              this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                       v73,
                                                       0);
              if ( !v40 )
                goto LABEL_143;
              amountSortValue = SupportServantListViewManager__GetAmountSortValue(
                                  (SupportServantListViewManager_o *)v40,
                                  (int32_t)this,
                                  v62);
              v4->fields.amountSortValue = amountSortValue;
            }
            this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
            if ( !this )
              goto LABEL_143;
            rarity = v4->fields.rarity;
            this = (SupportServantListViewItem_o *)UserServantEntity__get_BaseServantEntity(
                                                     (UserServantEntity_o *)this,
                                                     0);
            if ( !this )
              goto LABEL_143;
            v64 = *(int *)&this->fields.isBase;
            this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
            v41 = ((rarity << 32) + (amountSortValue << 48)) | v64;
            goto LABEL_137;
          case 15:
            hpReinforceValue = v4->fields.hpReinforceValue;
            this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
            v4->fields.sortValue1 = hpReinforceValue;
            if ( !this )
              goto LABEL_143;
            IconLabelInfo__Set_47880948(
              (IconLabelInfo_o *)this,
              44,
              hpReinforceValue,
              v4->fields.nowMaxHpReinforceValue,
              0,
              0,
              0,
              0,
              0,
              0);
            break;
          case 16:
            atkReinforceValue = v4->fields.atkReinforceValue;
            this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
            v4->fields.sortValue1 = atkReinforceValue;
            if ( !this )
              goto LABEL_143;
            IconLabelInfo__Set_47880948(
              (IconLabelInfo_o *)this,
              45,
              atkReinforceValue,
              v4->fields.nowMaxAtkReinforceValue,
              0,
              0,
              0,
              0,
              0,
              0);
            break;
          default:
            return (char)this;
        }
      }
      else
      {
        switch ( sortKind )
        {
          case 7:
            cost = v4->fields.cost;
            this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
            v4->fields.sortValue1 = cost;
            if ( !this )
              goto LABEL_143;
            IconLabelInfo__Set_47880948((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0, 0);
            break;
          case 8:
            v41 = -v4->fields.priority;
LABEL_81:
            this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
LABEL_137:
            v4->fields.sortValue1 = v41;
            if ( !this )
              goto LABEL_143;
            iconLabelInfo1 = v4->fields.iconLabelInfo1;
            goto LABEL_139;
          case 10:
            v15 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
            v16 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort, v10);
            *(_QWORD *)&v70.fields.currentCryptoKey = v15;
            *(_QWORD *)&v70.fields.fakeValue = v16;
            v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v70, 0);
            friendship = v4->fields.friendship;
            v18 = v4->fields.iconLabelInfo1;
            v4->fields.sortValue1 = v17;
            this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                     friendship,
                                                     0);
            if ( !v18 )
              goto LABEL_143;
            IconLabelInfo__Set_47880948(v18, 32, (int32_t)this, v4->fields.friendshipMax, 0, 0, 0, 0, 0, 0);
            break;
          default:
            return (char)this;
        }
      }
    }
    else if ( sortKind > 3 )
    {
      if ( sortKind == 4 )
      {
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_143;
        UserServantEntity__getTreasureDeviceInfo_50192116((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0);
        v36 = tdMaxLv[1];
        this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = tdMaxLv[1];
        if ( !this )
          goto LABEL_143;
        IconLabelInfo__Set_47880948((IconLabelInfo_o *)this, 33, v36, tdMaxLv[0], 0, 0, 0, 0, 0, 0);
      }
      else
      {
        if ( sortKind == 5 )
        {
          equipUserServantEntity = v4->fields.equipUserServantEntity;
          hp = v4->fields.hp;
          if ( equipUserServantEntity )
          {
            this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
            v4->fields.sortValue1 = equipUserServantEntity->fields.hp + (int)hp;
            if ( !this )
              goto LABEL_143;
            v43 = v4->fields.iconLabelInfo1;
            this = (SupportServantListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0);
            v44 = v4->fields.equipUserServantEntity;
            if ( !v44 || !v43 )
              goto LABEL_143;
            atk = v44->fields.hp;
            v26 = (int)this;
            v27 = v43;
            v28 = 46;
          }
          else
          {
            this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
            v4->fields.sortValue1 = hp;
            if ( !this )
              goto LABEL_143;
            v55 = v4->fields.iconLabelInfo1;
            this = (SupportServantListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0);
            if ( !v55 )
              goto LABEL_143;
            v26 = (int)this;
            atk = 0;
            v27 = v55;
            v28 = 3;
          }
        }
        else
        {
          v21 = v4->fields.equipUserServantEntity;
          hp = v4->fields.atk;
          if ( v21 )
          {
            this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
            v4->fields.sortValue1 = v21->fields.atk + (int)hp;
            if ( !this )
              goto LABEL_143;
            v23 = v4->fields.iconLabelInfo1;
            this = (SupportServantListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0);
            v24 = v4->fields.equipUserServantEntity;
            if ( !v24 || !v23 )
              goto LABEL_143;
            atk = v24->fields.atk;
            v26 = (int)this;
            v27 = v23;
            v28 = 47;
          }
          else
          {
            this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
            v4->fields.sortValue1 = hp;
            if ( !this )
              goto LABEL_143;
            v54 = v4->fields.iconLabelInfo1;
            this = (SupportServantListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0);
            if ( !v54 )
              goto LABEL_143;
            v26 = (int)this;
            atk = 0;
            v27 = v54;
            v28 = 5;
          }
        }
        IconLabelInfo__Set_47880948(v27, v28, hp, v26, atk, 0, 0, 0, 0, 0);
      }
    }
    else
    {
      if ( sortKind != 1 )
      {
        if ( sortKind != 2 )
        {
          if ( sortKind != 3 )
            return (char)this;
          this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
          if ( this )
          {
            sortStr1_low = SLODWORD(this[1].fields.sortStr1);
            v13 = v4->fields.iconLabelInfo1;
            v4->fields.sortValue1 = sortStr1_low;
            this = (SupportServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
            if ( v13 )
            {
              IconLabelInfo__Set_47880948(v13, 2, sortStr1_low, (int32_t)this, 0, 0, 0, 0, 0, 0);
LABEL_141:
              LOBYTE(this) = 1;
              return (char)this;
            }
          }
          goto LABEL_143;
        }
        v41 = v4->fields.rarity;
        goto LABEL_81;
      }
      v32 = v4->fields.userServantEntity;
      if ( !v32 )
        goto LABEL_143;
      v33 = *(_OWORD *)&v32->fields.id.fields.fakeValue;
      *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&v32->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v68.fields.fakeValue = v33;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort, v10);
      v67 = v68;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                               &v67,
                                               0);
      v34 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v34 )
        goto LABEL_143;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_143;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v34->fields.createdAt, 0, 0, 0, 0);
    }
    this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
    if ( !this )
      goto LABEL_143;
    iconLabelInfo1 = v4->fields.iconLabelInfo2;
LABEL_139:
    sortStr1 = (int32_t)this[1].fields.sortStr1;
    this = (SupportServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
    if ( iconLabelInfo1 )
    {
      IconLabelInfo__Set_47880948(iconLabelInfo1, 2, sortStr1, (int32_t)this, 0, 0, 0, 0, 0, 0);
      goto LABEL_141;
    }
    goto LABEL_143;
  }
  bonusKind2 = sort->fields.bonusKind2;
  if ( bonusKind2 <= 3 )
  {
    if ( bonusKind2 )
    {
      if ( bonusKind2 != 3 )
        goto LABEL_6;
      if ( v4->fields.bonusKind == 3 )
      {
        bonusKind2Id = sort->fields.bonusKind2Id;
        if ( v4->fields.bonusKindId == bonusKind2Id )
          goto LABEL_124;
      }
      else
      {
        bonusKind2Id = sort->fields.bonusKind2Id;
      }
      v48 = DataManager_TypeInfo;
      v4->fields.bonusKind = 3;
      v4->fields.bonusKindId = bonusKind2Id;
      if ( !*(&v48->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v48, sort, method);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      v52 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v53 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v49, v50);
      *(_QWORD *)&v72.fields.currentCryptoKey = v52;
      *(_QWORD *)&v72.fields.fakeValue = v53;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v72, 0);
      if ( !Master_object )
        goto LABEL_143;
      IsEnableServant = EventCampaignMaster__IsEnableServant(
                          (EventCampaignMaster_o *)Master_object,
                          (int32_t)this,
                          v4->fields.bonusKindId,
                          0);
      goto LABEL_105;
    }
    if ( v4->fields.bonusKind )
    {
      v47 = sort->fields.bonusKind2Id;
    }
    else
    {
      v47 = sort->fields.bonusKind2Id;
      if ( v4->fields.bonusKindId == v47 )
        goto LABEL_124;
    }
    v4->fields.bonusKind = 0;
    v4->fields.bonusKindId = v47;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort, method);
    this = (SupportServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventGroupMaster___);
    if ( !this )
      goto LABEL_143;
    EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0);
    this = (SupportServantListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                             (System_Collections_ICollection_o *)EntitiesByGroupId,
                                             0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !EntitiesByGroupId )
        goto LABEL_143;
      if ( EntitiesByGroupId->fields._size >= 2 )
      {
        v58 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventGroupEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v58,
          (Il2CppObject *)v4,
          Method_SupportServantListViewItem__SetSortValue_b__54_0__,
          0);
        v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                    (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                    (System_Func_T__bool__o *)v58,
                                    (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_EventGroupEntity___);
      }
    }
LABEL_124:
    if ( v4->fields.isEventUpVal )
      goto LABEL_6;
    goto LABEL_125;
  }
  if ( (unsigned int)(bonusKind2 - 4) >= 2 )
  {
    if ( bonusKind2 != 7 )
      goto LABEL_6;
    if ( v4->fields.bonusKind == 7 )
    {
      v31 = sort->fields.bonusKind2Id;
      if ( v4->fields.bonusKindId == v31 )
        goto LABEL_124;
    }
    else
    {
      v31 = sort->fields.bonusKind2Id;
    }
    v4->fields.bonusKind = 7;
    v4->fields.bonusKindId = v31;
    this = (SupportServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_143;
    this = (SupportServantListViewItem_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantFilterMaster___);
    if ( !this )
      goto LABEL_143;
    IsEnableServant = ServantFilterMaster__IsEnableServant(
                        (ServantFilterMaster_o *)this,
                        v4->fields.svtId,
                        v4->fields.bonusKindId,
                        0);
    goto LABEL_105;
  }
  if ( v4->fields.bonusKind == bonusKind2 )
  {
    v20 = sort->fields.bonusKind2Id;
    if ( v4->fields.bonusKindId == v20 )
      goto LABEL_124;
  }
  else
  {
    v20 = sort->fields.bonusKind2Id;
  }
  this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
  v4->fields.bonusKind = bonusKind2;
  v4->fields.bonusKindId = v20;
  if ( !this )
    goto LABEL_143;
  IsEnableServant = UserServantEntity__getEventUpVal((UserServantEntity_o *)this, v4->fields.eventSetupInfo, v20, 0, 0);
LABEL_105:
  v4->fields.isEventUpVal = IsEnableServant;
  if ( IsEnableServant )
    goto LABEL_6;
LABEL_125:
  LOBYTE(this) = 0;
  return (char)this;
}


bool SupportServantListViewItem__SwapChoice(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  _BOOL4 isSwapChoice; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  isSwapChoice = this->fields.isSwapChoice;
  v4 = !isSwapChoice;
  v5 = !isSwapChoice;
  result = v4;
  this->fields.isSwapChoice = v5;
  return result;
}


bool SupportServantListViewItem__SwapLock(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  _BOOL4 isSwapLock; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  isSwapLock = this->fields.isSwapLock;
  v4 = !isSwapLock;
  v5 = !isSwapLock;
  result = v4;
  this->fields.isSwapLock = v5;
  return result;
}


bool SupportServantListViewItem___SetSortValue_b__54_0(
        SupportServantListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x22
  __int64 v9; // x23
  EventCampaignMaster_o *v10; // x21
  ServantFilterMaster_o *userServantEntity; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_596CD5B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596CD5B = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (EventCampaignMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
  *(_QWORD *)&v16.fields.currentCryptoKey = v8;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  userServantEntity = (ServantFilterMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                 v16,
                                                 0);
  if ( !entity || !v10 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v10, (int32_t)userServantEntity, entity->fields.eventId, 0) )
    return 1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13, v14);
  userServantEntity = (ServantFilterMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !userServantEntity )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant(userServantEntity, this->fields.svtId, entity->fields.eventId, 0) )
    return 1;
  userServantEntity = (ServantFilterMaster_o *)this->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_17:
    sub_2213CDC(userServantEntity, v12);
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
  __int64 v2; // x2

  if ( (byte_596CD58 & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596CD58 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  return TutorialFlag__Get_47388504(126, 0);
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
  __int64 v2; // x2
  SupportServantListViewItem_o *v3; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v5; // q1
  SupportServantData_o *supportServantData; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_596CD59 & 1) == 0 )
  {
    this = (SupportServantListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596CD59 = 1;
  }
  userServantEntity = v3->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_8;
  v5 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  supportServantData = v3->fields.supportServantData;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v5;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
  v8 = v9;
  this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v8, 0);
  if ( !supportServantData )
LABEL_8:
    sub_2213CDC(this, method);
  return SupportServantData__isUseServant(supportServantData, (int64_t)this, 0);
}


ServantEntity_o *SupportServantListViewItem__get_Servant(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t SupportServantListViewItem__get_SvtId(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_596CD57 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596CD57 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v7, 0);
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