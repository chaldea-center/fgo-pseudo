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
  IconLabelInfo_o *v42; // x28
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UserServantEntity_o **p_userServantEntity; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  int64_t Instance; // x0
  __int64 v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct SupportServantData_o *v64; // x1
  struct SupportServantData_o **p_supportServantData; // x24
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct UserServantEntity_o *v72; // x8
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v74; // x27
  __int64 v75; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v76; // x26
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  ServantLimitMaster_o *v91; // x25
  struct UserServantEntity_o *v92; // x8
  int32_t v93; // w27
  UserServantEntity_o *v94; // x8
  __int128 v95; // q1
  UserServantCollectionMaster_o *v96; // x25
  int64_t v97; // x26
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  struct UserServantEntity_o *v116; // x8
  __int128 v117; // q0
  SupportServantData_o *v118; // x8
  int64_t v119; // x24
  UserServantEntity_o *v120; // x8
  UserServantEntity_o *v121; // x8
  UserServantEntity_o *v122; // x8
  ServantEntity_o *servantEntity; // x8
  bool v124; // w8
  int64_t Equip; // x0
  const MethodInfo *v126; // x5
  int64_t v127; // x23
  UserServantEntity_o *v128; // x24
  UserServantEntity_o *v129; // x8
  PartyOrganizationUtility_o *v130; // x23
  __int64 v131; // x25
  __int64 v132; // x26
  int32_t v133; // w25
  int32_t v134; // w26
  int v135; // w8
  bool v136; // w0
  UserServantEntity_o *v137; // x8
  __int128 v138; // q0
  __int64 v139; // x22
  bool v140; // zf
  bool v141; // w8
  UserServantEntity_o *v142; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  int v157; // w22
  BalanceConfig_c *v158; // x8
  int64_t v159; // x8
  struct ServantEntity_o *v160; // x9
  UserServantEntity_o *v161; // x8
  __int64 v162; // x21
  __int64 v163; // x22
  int32_t v164; // w8
  __int64 v165; // x0
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v168; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v169; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v170; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v171; // [xsp+70h] [xbp-90h]
  int32_t actMaxRarity; // [xsp+94h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+98h] [xbp-68h] BYREF
  int32_t friendshipRank[3]; // [xsp+A4h] [xbp-5Ch] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v175; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v177; // 0:x0.16

  if ( (byte_418B315 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, v21);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v22);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v23);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v24);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v25);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v26);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v27);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v28);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v29);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v33);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v34);
    byte_418B315 = 1;
  }
  friendshipRank[0] = 0;
  skillName = 0LL;
  actMaxRarity = 0;
  v35 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v35, 0LL);
  this->fields.iconLabelInfo1 = v35;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v42, 0LL);
  this->fields.iconLabelInfo2 = v42;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  if ( !supportServantData )
    goto LABEL_76;
  if ( supportServantData->max_length <= nowDeckNum )
  {
    v165 = sub_B2C460(Instance);
    sub_B2C400(v165, 0LL);
  }
  v64 = supportServantData->m_Items[nowDeckNum];
  this->fields.supportServantData = v64;
  p_supportServantData = &this->fields.supportServantData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.supportServantData,
    (System_Int32_array **)v64,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)eventSetupInfo,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v72 = this->fields.userServantEntity;
  if ( !v72 )
    goto LABEL_76;
  this->fields.svtId = v72->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v75 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v74 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v76 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v175.fields.currentCryptoKey = v75;
  *(_QWORD *)&v175.fields.fakeValue = v74;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v175, 0LL);
  if ( !v76 )
    goto LABEL_76;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v76,
                                       Instance,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  this->fields.eventFriendPoints = friendPointCampaignEntityList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)friendPointCampaignEntityList,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  v91 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.svtId, 0LL);
  v92 = this->fields.userServantEntity;
  if ( !v92 )
    goto LABEL_76;
  v93 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v92->fields.limitCount, 0LL);
  if ( !v91 )
    goto LABEL_76;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v91, v93, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_76;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_76;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v94 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_76;
  v95 = *(_OWORD *)&v94->fields.userId.fields.fakeValue;
  v96 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v171.fields.currentCryptoKey = *(_OWORD *)&v94->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v171.fields.fakeValue = v95;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v170 = v171;
  v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v170, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.svtId, 0LL);
  if ( !v96 )
    goto LABEL_76;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v96, v97, Instance, 0LL);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity,
    0LL,
    v98,
    v99,
    v100,
    v101,
    v102,
    v103);
  this->fields.equipServantEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v104, v105, v106, v107, v108, v109);
  this->fields.equipIdList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v110, v111, v112, v113, v114, v115);
  v116 = this->fields.userServantEntity;
  if ( !v116 )
    goto LABEL_76;
  v117 = *(_OWORD *)&v116->fields.id.fields.fakeValue;
  *(_OWORD *)&v169.fields.currentCryptoKey = *(_OWORD *)&v116->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v169.fields.fakeValue = v117;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v169, 0LL);
  v118 = *p_supportServantData;
  if ( !*p_supportServantData )
    goto LABEL_76;
  v119 = Instance;
  Instance = SupportServantData__getMember(v118, classPos, 0LL);
  v120 = this->fields.userServantEntity;
  this->fields.isBase = v119 == Instance;
  if ( !v120 )
    goto LABEL_76;
  Instance = UserServantEntity__IsLock(v120, 0LL);
  v121 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v121 )
    goto LABEL_76;
  Instance = UserServantEntity__IsChoice(v121, 0LL);
  v122 = this->fields.userServantEntity;
  this->fields.isChoice = Instance & 1;
  if ( !v122 )
    goto LABEL_76;
  Instance = UserServantEntity__IsEventJoin(v122, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !servantEntity )
    goto LABEL_76;
  v124 = ServantEntity__checkIsHeroineSvt(servantEntity, 0LL);
  Instance = (int64_t)this->fields.supportServantData;
  this->fields.isHeroine = v124;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  if ( !Instance )
    goto LABEL_76;
  Equip = SupportServantData__getEquip((SupportServantData_o *)Instance, classPos, 0LL);
  if ( Equip < 1 )
    goto LABEL_44;
  v127 = Equip;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_76;
  v128 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
           (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
           v127,
           (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v129 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_76;
  v130 = (PartyOrganizationUtility_o *)Instance;
  v132 = *(_QWORD *)&v129->fields.svtId.fields.currentCryptoKey;
  v131 = *(_QWORD *)&v129->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v176.fields.currentCryptoKey = v132;
  *(_QWORD *)&v176.fields.fakeValue = v131;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v176, 0LL);
  if ( !*p_userServantEntity
    || (v133 = Instance, Instance = UserServantEntity__getRarity(*p_userServantEntity, 0LL), !v128)
    || (v134 = Instance,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v128->fields.svtId, 0LL),
        !v130) )
  {
LABEL_76:
    sub_B2C434(Instance, v57);
  }
  this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                   v130,
                                   &skillName,
                                   &actMaxRarity,
                                   v133,
                                   v134,
                                   Instance,
                                   -1,
                                   0LL);
LABEL_44:
  v135 = 0;
  this->fields.isUseInSet = 0;
  if ( isFixMainDeck )
  {
    v136 = SupportServantListViewItem__CheckUseInSet(
             this,
             &this->fields.useSet,
             fixMainDeckIds,
             nowDeckId,
             supportServantData,
             v126);
    v135 = v136;
    this->fields.isUseInSet = v136;
  }
  if ( !v135 && isFixEventDeck )
    this->fields.isUseInSet = SupportServantListViewItem__CheckUseInSet(
                                this,
                                &this->fields.useSet,
                                fixEventDeckIds,
                                nowDeckId,
                                supportServantData,
                                v126);
  this->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_76;
  v137 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_76;
  v138 = *(_OWORD *)&v137->fields.id.fields.fakeValue;
  v139 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v171.fields.currentCryptoKey = *(_OWORD *)&v137->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v171.fields.fakeValue = v138;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v168 = v171;
  v140 = v139 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v168, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  v141 = v140;
  this->fields.isPush = v141;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_76;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v142 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v142 )
    goto LABEL_76;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v142, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v144,
    v145,
    v146,
    v147,
    v148,
    v149);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_76;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v151,
    v152,
    v153,
    v154,
    v155,
    v156);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_76;
  v157 = *(_DWORD *)(Instance + 276);
  v158 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v158 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  this->fields.hpReinforceValue = v158->static_fields->StatusUpAdjustHp * v157;
  if ( !Instance )
    goto LABEL_76;
  this->fields.atkReinforceValue = v158->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_76;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_76;
  v159 = *(int *)(Instance + 48);
  v160 = this->fields.servantEntity;
  this->fields.priority = v159;
  this->fields.sortValue1B = v159;
  if ( !v160 )
    goto LABEL_76;
  v161 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_76;
  this->fields.sortValue2 = ((__int64)v160->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v161->fields.lv;
  v163 = *(_QWORD *)&v161->fields.svtId.fields.currentCryptoKey;
  v162 = *(_QWORD *)&v161->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v177.fields.currentCryptoKey = v163;
  *(_QWORD *)&v177.fields.fakeValue = v162;
  v164 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v177, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v164;
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
  if ( (byte_418B316 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, setNo);
    this = (SupportServantListViewItem_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_418B316 = 1;
  }
  *setNo = 0;
  if ( !fixDeckIds )
LABEL_28:
    sub_B2C434(this, setNo);
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
    UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity((SupportServantData_o *)this, i, 0LL);
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
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                               v27,
                                               0LL);
      if ( svtId == (_DWORD)this )
        break;
    }
  }
  if ( (unsigned int)v12 >= fixDeckIds->max_length )
  {
LABEL_29:
    v24 = sub_B2C460(this);
    sub_B2C400(v24, 0LL);
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
  __int64 v6; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v7; // x8
  System_Int64_array *v8; // x20
  unsigned __int64 v9; // x21
  int64_t v10; // x22
  __int64 v11; // x23
  unsigned __int64 max_length; // x9
  _OWORD *v13; // x8
  __int128 v14; // q0
  __int64 v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-50h]

  if ( (byte_418B31C & 1) == 0 )
  {
    sub_B2C35C(&long___TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    byte_418B31C = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0LL;
  v5 = sub_B2C374(long___TypeInfo, equipIdList->max_length);
  v7 = this->fields.equipIdList;
  if ( !v7 )
LABEL_14:
    sub_B2C434(v5, v6);
  v8 = (System_Int64_array *)v5;
  v9 = 0LL;
  v10 = v5 + 32;
  v11 = 32LL;
  while ( 1 )
  {
    max_length = v7->max_length;
    if ( (__int64)v9 >= (int)max_length )
      return v8;
    if ( v9 >= max_length )
      goto LABEL_17;
    v13 = (_OWORD *)((char *)v7 + v11);
    v14 = v13[1];
    *(_OWORD *)&v18.fields.currentCryptoKey = *v13;
    *(_OWORD *)&v18.fields.fakeValue = v14;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v17 = v18;
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v17, 0LL);
    if ( v8 )
    {
      if ( v9 >= v8->max_length )
      {
LABEL_17:
        v16 = sub_B2C460(v5);
        sub_B2C400(v16, 0LL);
      }
      *(_QWORD *)(v10 + 8 * v9) = v5;
      v7 = this->fields.equipIdList;
      ++v9;
      v11 += 32LL;
      if ( v7 )
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
  if ( (byte_418B323 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, method);
    this = (SupportServantListViewItem_o *)sub_B2C35C(&System_Math_TypeInfo, v3);
    byte_418B323 = 1;
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
                                               (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
      eventFriendPoints = v2->fields.eventFriendPoints;
      if ( eventFriendPoints )
      {
        if ( v8 >= eventFriendPoints->max_length )
        {
LABEL_23:
          v17 = sub_B2C460(this);
          sub_B2C400(v17, 0LL);
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
            this = (SupportServantListViewItem_o *)System_Math__Max_45012344(v5, v15, 0LL);
            eventFriendPoints = v2->fields.eventFriendPoints;
            v5 = (int)this;
          }
          ++v6;
          if ( eventFriendPoints )
            continue;
        }
      }
    }
    sub_B2C434(this, method);
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

  if ( (byte_418B322 & 1) == 0 )
  {
    sub_B2C35C(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_418B322 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_B2C42C(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_B2C2F8((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
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
  __int64 v8; // x1

  if ( (byte_418B319 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantClassMaster___, *(_QWORD *)&classType);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v6);
    byte_418B319 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantClassMaster___);
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
                 (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_12:
    sub_B2C434(Master_WarQuestSelectionMaster, v8);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  unsigned int *manager; // x8
  __int64 v10; // x11
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  UserServantEntity_o *userServantEntity; // x21
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x21
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x0
  FilterKindList_c *v21; // x0
  ListViewSort_FilterKind_array *v22; // x0
  FilterKindList_c *v23; // x0
  FilterKindList_c *v24; // x0
  ListViewSort_FilterKind_array *v25; // x0
  FilterKindList_c *v26; // x0
  ListViewSort_FilterKind_array *v27; // x0
  UserServantEntity_o *v28; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v30; // x8
  System_Int32_array **SkillCategoryIdList; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **TreasureDeviceCategoryIdList; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v46; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v48; // w0
  __int64 v49; // x0

  v3 = sort;
  v4 = this;
  if ( (byte_418B31A & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_B2C35C(&ServantEventBonusFilterController_TypeInfo, v7);
    this = (SupportServantListViewItem_o *)sub_B2C35C(&SupportServantListViewManager_TypeInfo, v8);
    byte_418B31A = 1;
  }
  if ( !v3 )
    goto LABEL_91;
  manager = (unsigned int *)v3->fields.manager;
  if ( !manager )
    goto LABEL_91;
  v10 = *(&SupportServantListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)manager + 300LL) < (unsigned int)v10
    || *(SupportServantListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * v10 - 8) != SupportServantListViewManager_TypeInfo )
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
      v19 = FilterKindList_TypeInfo;
      if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v19 = FilterKindList_TypeInfo;
      }
      this = (SupportServantListViewItem_o *)v19->static_fields->ClassGroupFilterKindList;
      if ( !this )
LABEL_91:
        sub_B2C434(this, sort);
      v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                               (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                               (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( ListViewSort__IsUnSelectedAllTargetFilters(v3, v20, 0LL) )
      {
        v21 = FilterKindList_TypeInfo;
        if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v21 = FilterKindList_TypeInfo;
        }
        this = (SupportServantListViewItem_o *)v21->static_fields->ClassExtra1InShielderFilterKindList;
        if ( !this )
          goto LABEL_91;
        v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                 (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                                 (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v22, 0LL) )
        {
LABEL_69:
          if ( !ListViewSort__IsMatchClassFilter(v3, v4->fields.servantEntity, 0LL) )
            return 0;
          goto LABEL_11;
        }
        v23 = FilterKindList_TypeInfo;
        if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v23 = FilterKindList_TypeInfo;
        }
        this = (SupportServantListViewItem_o *)v23->static_fields->ClassExtra2FilterKindList;
        if ( !this )
          goto LABEL_91;
LABEL_68:
        v27 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                 (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                                 (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( ListViewSort__IsUnSelectedAllTargetFilters(v3, v27, 0LL) )
          goto LABEL_11;
        goto LABEL_69;
      }
    }
    else
    {
      v24 = FilterKindList_TypeInfo;
      if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v24 = FilterKindList_TypeInfo;
      }
      this = (SupportServantListViewItem_o *)v24->static_fields->ClassGroupFilterKindList;
      if ( !this )
        goto LABEL_91;
      v25 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                               (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                               (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( ListViewSort__IsUnSelectedAllTargetFilters(v3, v25, 0LL) )
      {
        v26 = FilterKindList_TypeInfo;
        if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v26 = FilterKindList_TypeInfo;
        }
        this = (SupportServantListViewItem_o *)v26->static_fields->ClassFilterKindList;
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
  v11 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v11->static_fields->NpTypeFilterKindList;
  if ( !this )
    goto LABEL_91;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v12, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(v3, v4->fields.userServantEntity, 0LL) )
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
  this = (SupportServantListViewItem_o *)v13->static_fields->NpEffectFilterKindList;
  if ( !this )
    goto LABEL_91;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v14, 0LL)
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
    v28 = v4->fields.userServantEntity;
    if ( v28 )
    {
      dispLimitCount = v4->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v28, 0, 0LL) )
      {
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_91;
        this = (SupportServantListViewItem_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0LL);
        v30 = v4->fields.userServantEntity;
        v4->fields.dispLimitCount = (int)this;
        if ( !v30 )
          goto LABEL_91;
        SkillCategoryIdList = (System_Int32_array **)UserServantEntity__GetSkillCategoryIdList(v30, -1, 0LL);
        v4->fields.skillCategoryIdList = (struct System_Int32_array *)SkillCategoryIdList;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v4->fields.skillCategoryIdList,
          SkillCategoryIdList,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_91;
        TreasureDeviceCategoryIdList = (System_Int32_array **)UserServantEntity__GetTreasureDeviceCategoryIdList(
                                                                (UserServantEntity_o *)this,
                                                                0,
                                                                0LL);
        v4->fields.tdCategoryIdList = (struct System_Int32_array *)TreasureDeviceCategoryIdList;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v4->fields.tdCategoryIdList,
          TreasureDeviceCategoryIdList,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
      }
    }
    this = (SupportServantListViewItem_o *)sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_91;
    if ( !this->fields.sortIndex )
      goto LABEL_92;
    LODWORD(this->fields.sortValue0) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     v3,
                                     (ListViewSort_FilterKind_array *)this,
                                     0LL);
    this = (SupportServantListViewItem_o *)sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_91;
    if ( !this->fields.sortIndex )
    {
LABEL_92:
      v49 = sub_B2C460(this);
      sub_B2C400(v49, 0LL);
    }
    LODWORD(this->fields.sortValue0) = 51;
    v46 = ListViewSort__IsUnSelectedAllTargetFilters(v3, (ListViewSort_FilterKind_array *)this, 0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              v4->fields.tdCategoryIdList,
                              v3,
                              0LL);
    v48 = ServantEquipEffectFilterController__IsMatchEffectCategory(v4->fields.skillCategoryIdList, v3, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v46) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v48 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v48 )
    {
      return 0;
    }
  }
  this = (SupportServantListViewItem_o *)sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
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
  v16 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v16->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_91;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(v3, v17, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(v3, v17, 0LL)
      || ListViewSort__IsMatchRarityFilter(v3, v4->fields.rarity, 0LL);
}


void __fastcall SupportServantListViewItem__Modify(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleServantConfConponent_o *p_userServantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // t1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  BattleServantConfConponent_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v12; // x20
  System_Int32_array **Entity; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-30h]

  if ( (byte_418B317 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418B317 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  p_userServantEntity = (BattleServantConfConponent_o *)&this->fields.userServantEntity;
  if ( userServantEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    klass = p_userServantEntity->klass;
    if ( !p_userServantEntity->klass )
      goto LABEL_12;
    byval_arg = klass->_1.byval_arg;
    v12 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
    *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v21.fields.fakeValue = byval_arg;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v20 = v21;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v20, 0LL);
    if ( !v12 )
LABEL_12:
      sub_B2C434(Instance, v9);
    Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      v12,
                                      (int64_t)Instance,
                                      (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_userServantEntity->klass = (BattleServantConfConponent_c *)Entity;
    sub_B2C2F8(p_userServantEntity, Entity, v14, v15, v16, v17, v18, v19);
  }
}


void __fastcall SupportServantListViewItem__ModifyChoiceItem(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B2C434(0LL, method);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_userServantEntity )
    sub_B2C434(0LL, v10);
  this->fields.isEventJoin = UserServantEntity__IsEventJoin(*p_userServantEntity, 0LL);
}


void __fastcall SupportServantListViewItem__ModifyLockItem(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B2C434(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall SupportServantListViewItem__Modify_31663688(
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
  sub_B2C2F8(
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
  __int64 v44; // x1
  __int128 v45; // q1
  BattleServantConfConponent_c *v46; // x8
  Il2CppType this_arg; // q0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v48; // x21
  System_Int32_array **Entity; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  BattleServantConfConponent_c *v56; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  BattleServantConfConponent_c *v59; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v60; // x20
  Il2CppClass *v61; // x21
  Il2CppClass *v62; // x22
  System_Int32_array **v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  __int64 v70; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+40h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16

  klass = equipIdList;
  if ( (byte_418B318 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, equipIdList);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo, v15);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_418B318 = 1;
  }
  this->fields.equipUserServantEntity = 0LL;
  p_equipUserServantEntity = (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity;
  sub_B2C2F8(
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v20, v21, v22, v23, v24, v25);
  this->fields.equipIdList = 0LL;
  p_equipIdList = (BattleServantConfConponent_o *)&this->fields.equipIdList;
  sub_B2C2F8(p_equipIdList, 0LL, v27, v28, v29, v30, v31, v32);
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
    v42 = (System_Int32_array **)sub_B2C41C(v34, CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo);
    if ( v42 )
      goto LABEL_14;
    sub_B2C728(v41);
  }
  v43 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v43 = BalanceConfig_TypeInfo;
  }
  v42 = (System_Int32_array **)sub_B2C374(
                                 CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo,
                                 (unsigned int)v43->static_fields->SvtEquipMax);
LABEL_14:
  p_equipIdList->klass = (BattleServantConfConponent_c *)v42;
  sub_B2C2F8(p_equipIdList, v42, v35, v36, v37, v38, v39, v40);
  klass = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *)p_equipIdList->klass;
  if ( !p_equipIdList->klass )
    goto LABEL_40;
LABEL_15:
  if ( !klass->max_length )
    goto LABEL_41;
  v45 = *(_OWORD *)&klass->m_Items[0].fields.fakeValue;
  *(_OWORD *)&v73.fields.currentCryptoKey = *(_OWORD *)&klass->m_Items[0].fields.currentCryptoKey;
  *(_OWORD *)&v73.fields.fakeValue = v45;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v72 = v73;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v72, 0LL) < 1 )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  v46 = p_equipIdList->klass;
  if ( !p_equipIdList->klass )
    goto LABEL_40;
  if ( !LODWORD(v46->_1.namespaze) )
  {
LABEL_41:
    v70 = sub_B2C460(Instance);
    sub_B2C400(v70, 0LL);
  }
  this_arg = v46->_1.this_arg;
  v48 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  *(Il2CppType *)&v73.fields.currentCryptoKey = v46->_1.byval_arg;
  *(Il2CppType *)&v73.fields.fakeValue = this_arg;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v71 = v73;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v71, 0LL);
  if ( !v48 )
    goto LABEL_40;
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    v48,
                                    Instance,
                                    (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_equipUserServantEntity->klass = (BattleServantConfConponent_c *)Entity;
  sub_B2C2F8(p_equipUserServantEntity, Entity, v50, v51, v52, v53, v54, v55);
  v56 = p_equipUserServantEntity->klass;
  if ( p_equipUserServantEntity->klass )
  {
    declaringType = v56->_1.declaringType;
    parent = v56->_1.parent;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v74.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v74.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v74, 0LL) >= 1 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
        v59 = p_equipUserServantEntity->klass;
        if ( p_equipUserServantEntity->klass )
        {
          v60 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
          v62 = v59->_1.declaringType;
          v61 = v59->_1.parent;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v75.fields.currentCryptoKey = v62;
          *(_QWORD *)&v75.fields.fakeValue = v61;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v75, 0LL);
          if ( v60 )
          {
            v63 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v60,
                                           Instance,
                                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            p_equipServantEntity->klass = (BattleServantConfConponent_c *)v63;
            sub_B2C2F8(p_equipServantEntity, v63, v64, v65, v66, v67, v68, v69);
            return;
          }
        }
      }
LABEL_40:
      sub_B2C434(Instance, v44);
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

  if ( (byte_418B31D & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtId);
    byte_418B31D = 1;
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
      v8 = sub_B2C460(v6);
      sub_B2C400(v8, 0LL);
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
  if ( (byte_418B31B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantFilterMaster___, sort);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    this = (SupportServantListViewItem_o *)sub_B2C35C(&SupportServantListViewManager_TypeInfo, v8);
    byte_418B31B = 1;
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
      this = (SupportServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_97;
      this = (SupportServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantFilterMaster___);
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
      IsEnableServant = UserServantEntity__getEventUpVal_21652144(
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
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
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
        UserServantEntity__getTreasureDeviceInfo_21659764((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
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
          IconLabelInfo__Set_27362128((IconLabelInfo_o *)this, v30, v29, adjustHp, v27, 0, 0, 0, 0LL);
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
              IconLabelInfo__Set_27362128(iconLabelInfo2, 2, eventFriendPoints, (int32_t)this, 0, 0, 0, 0, 0LL);
              LOBYTE(this) = 1;
              return (char)this;
            }
          }
LABEL_97:
          sub_B2C434(this, sort);
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
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v55, 0LL);
        iconLabelInfo1 = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v40 = v38;
        friendship = v4->fields.friendship;
        v4->fields.sortValue1 = v40;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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
    IconLabelInfo__Set_27362128((IconLabelInfo_o *)this, v23, hpReinforceValue, adjustAtk, 0, 0, 0, 0, 0LL);
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
    sub_B2C434(this, method);
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
  if ( (byte_418B320 & 1) == 0 )
  {
    sub_B2C35C(&TutorialFlag_TypeInfo, method);
    byte_418B320 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_28617756(126, 0LL);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-30h]

  v2 = this;
  if ( (byte_418B321 & 1) == 0 )
  {
    this = (SupportServantListViewItem_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_418B321 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_9;
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  supportServantData = v2->fields.supportServantData;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v7 = v8;
  this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v7, 0LL);
  if ( !supportServantData )
LABEL_9:
    sub_B2C434(this, method);
  return SupportServantData__isUseServant(supportServantData, (int64_t)this, 0LL);
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

  if ( (byte_418B31F & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B2C35C(&StringLiteral_18395/*"error"*/, v3);
    byte_418B31F = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18395/*"error"*/;
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
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v10, 0LL);
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

  if ( (byte_418B31E & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_418B31E = 1;
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