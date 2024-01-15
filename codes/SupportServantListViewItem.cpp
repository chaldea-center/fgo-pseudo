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
  __int64 v44; // x3
  __int64 v45; // x4
  IconLabelInfo_o *v46; // x28
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  UserServantEntity_o **p_userServantEntity; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x0
  __int64 v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct SupportServantData_o *v68; // x1
  struct SupportServantData_o **p_supportServantData; // x24
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct UserServantEntity_o *v76; // x8
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v79; // x27
  __int64 v80; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v81; // x26
  int32_t v82; // w0
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  WebViewManager_o *v97; // x0
  ServantLimitMaster_o *v98; // x25
  int32_t v99; // w0
  struct UserServantEntity_o *v100; // x8
  int32_t v101; // w27
  int32_t v102; // w0
  ServantLimitEntity_o *v103; // x0
  WebViewManager_o *v104; // x0
  WarQuestSelectionMaster_o *v105; // x0
  UserServantEntity_o *v106; // x8
  __int128 v107; // q1
  UserServantCollectionMaster_o *v108; // x25
  int64_t v109; // x26
  int32_t v110; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  struct UserServantEntity_o *v130; // x8
  __int128 v131; // q0
  int64_t v132; // x0
  SupportServantData_o *v133; // x8
  int64_t v134; // x24
  int64_t Member; // x0
  UserServantEntity_o *v136; // x8
  bool IsLock; // w0
  UserServantEntity_o *v138; // x8
  bool IsChoice; // w0
  UserServantEntity_o *v140; // x8
  bool IsEventJoin; // w0
  ServantEntity_o *servantEntity; // x8
  bool v143; // w8
  SupportServantData_o *v144; // x0
  int64_t Equip; // x0
  const MethodInfo *v146; // x5
  int64_t v147; // x23
  WebViewManager_o *v148; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v149; // x0
  UserServantEntity_o *v150; // x24
  clsQuestCheck_o *v151; // x0
  UserServantEntity_o *v152; // x8
  PartyOrganizationUtility_o *v153; // x23
  __int64 v154; // x25
  __int64 v155; // x26
  int32_t v156; // w0
  int32_t v157; // w25
  int32_t Rarity; // w0
  int32_t v159; // w26
  int32_t v160; // w0
  int v161; // w8
  bool v162; // w0
  UserGameEntity_o *SelfUserGame; // x0
  UserServantEntity_o *v164; // x8
  __int128 v165; // q0
  int64_t pushUserSvtId; // x22
  bool v167; // zf
  UserServantEntity_o *v168; // x0
  bool v169; // w8
  int32_t DispLimitCount; // w0
  UserServantEntity_o *v171; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  UserServantEntity_o *v179; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v181; // x2
  System_String_array **v182; // x3
  System_Boolean_array **v183; // x4
  System_Int32_array **v184; // x5
  System_Int32_array *v185; // x6
  System_Int32_array *v186; // x7
  struct UserServantEntity_o *v187; // x0
  int32_t adjustHp; // w22
  BalanceConfig_c *v189; // x8
  WebViewManager_o *v190; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v191; // x0
  WarEntity_o *v192; // x0
  int64_t bannerId; // x8
  struct ServantEntity_o *v194; // x9
  UserServantEntity_o *v195; // x8
  __int64 v196; // x21
  __int64 v197; // x22
  int32_t v198; // w8
  IconLabelInfo_o *iconLabelInfo1; // x0
  IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v202; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v203; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v204; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v205; // [xsp+70h] [xbp-90h]
  int32_t actMaxRarity; // [xsp+94h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+98h] [xbp-68h] BYREF
  int32_t friendshipRank[3]; // [xsp+A4h] [xbp-5Ch] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v209; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v210; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v211; // 0:x0.16

  if ( (byte_40FD9F8 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, v21);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v22);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v23);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v24);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v25);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v26);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v27);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v28);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v29);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v33);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v34);
    byte_40FD9F8 = 1;
  }
  friendshipRank[0] = 0;
  skillName = 0LL;
  actMaxRarity = 0;
  v35 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&index,
                             userServantEntity,
                             supportServantData,
                             *(_QWORD *)&nowDeckNum);
  IconLabelInfo___ctor(v35, 0LL);
  this->fields.iconLabelInfo1 = v35;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v46 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v42, v43, v44, v45);
  IconLabelInfo___ctor(v46, 0LL);
  this->fields.iconLabelInfo2 = v46;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  if ( !supportServantData )
    goto LABEL_76;
  if ( supportServantData->max_length <= nowDeckNum )
  {
    sub_B17100(v60, v61, v62);
    sub_B170A0();
  }
  v68 = supportServantData->m_Items[nowDeckNum];
  this->fields.supportServantData = v68;
  p_supportServantData = &this->fields.supportServantData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.supportServantData,
    (System_Int32_array **)v68,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)eventSetupInfo,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = this->fields.userServantEntity;
  if ( !v76 )
    goto LABEL_76;
  this->fields.svtId = v76->fields.svtId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v80 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v79 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v81 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v209.fields.currentCryptoKey = v80;
  *(_QWORD *)&v209.fields.fakeValue = v79;
  v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v209, 0LL);
  if ( !v81 )
    goto LABEL_76;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v81,
                                       v82,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  this->fields.eventFriendPoints = friendPointCampaignEntityList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)friendPointCampaignEntityList,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  v97 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v97 )
    goto LABEL_76;
  v98 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v97,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v99 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.svtId, 0LL);
  v100 = this->fields.userServantEntity;
  if ( !v100 )
    goto LABEL_76;
  v101 = v99;
  v102 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v100->fields.limitCount, 0LL);
  if ( !v98 )
    goto LABEL_76;
  v103 = ServantLimitMaster__GetEntity(v98, v101, v102, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_76;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !v103 )
    goto LABEL_76;
  this->fields.rarity = v103->fields.rarity;
  v104 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v104 )
    goto LABEL_76;
  v105 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)v104,
           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v106 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_76;
  v107 = *(_OWORD *)&v106->fields.userId.fields.fakeValue;
  v108 = (UserServantCollectionMaster_o *)v105;
  *(_OWORD *)&v205.fields.currentCryptoKey = *(_OWORD *)&v106->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v205.fields.fakeValue = v107;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v204 = v205;
  v109 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v204, 0LL);
  v110 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.svtId, 0LL);
  if ( !v108 )
    goto LABEL_76;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v108, v109, v110, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_76;
  UserServantCollectionEntity__getFriendShipRankInfo(EntityDefinitely, friendshipRank, &this->fields.friendshipMax, 0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank[0], 0LL);
  this->fields.isSame = 0;
  this->fields.equipUserServantEntity = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity,
    0LL,
    v112,
    v113,
    v114,
    v115,
    v116,
    v117);
  this->fields.equipServantEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v118, v119, v120, v121, v122, v123);
  this->fields.equipIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v124, v125, v126, v127, v128, v129);
  v130 = this->fields.userServantEntity;
  if ( !v130 )
    goto LABEL_76;
  v131 = *(_OWORD *)&v130->fields.id.fields.fakeValue;
  *(_OWORD *)&v203.fields.currentCryptoKey = *(_OWORD *)&v130->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v203.fields.fakeValue = v131;
  v132 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v203, 0LL);
  v133 = *p_supportServantData;
  if ( !*p_supportServantData )
    goto LABEL_76;
  v134 = v132;
  Member = SupportServantData__getMember(v133, classPos, 0LL);
  v136 = this->fields.userServantEntity;
  this->fields.isBase = v134 == Member;
  if ( !v136 )
    goto LABEL_76;
  IsLock = UserServantEntity__IsLock(v136, 0LL);
  v138 = this->fields.userServantEntity;
  this->fields.isLock = IsLock;
  if ( !v138 )
    goto LABEL_76;
  IsChoice = UserServantEntity__IsChoice(v138, 0LL);
  v140 = this->fields.userServantEntity;
  this->fields.isChoice = IsChoice;
  if ( !v140 )
    goto LABEL_76;
  IsEventJoin = UserServantEntity__IsEventJoin(v140, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isEventJoin = IsEventJoin;
  if ( !servantEntity )
    goto LABEL_76;
  v143 = ServantEntity__checkIsHeroineSvt(servantEntity, 0LL);
  v144 = this->fields.supportServantData;
  this->fields.isHeroine = v143;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  if ( !v144 )
    goto LABEL_76;
  Equip = SupportServantData__getEquip(v144, classPos, 0LL);
  if ( Equip < 1 )
    goto LABEL_44;
  v147 = Equip;
  v148 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v148 )
    goto LABEL_76;
  v149 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)v148,
                                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !v149 )
    goto LABEL_76;
  v150 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
           v149,
           v147,
           (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v151 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v152 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_76;
  v153 = (PartyOrganizationUtility_o *)v151;
  v155 = *(_QWORD *)&v152->fields.svtId.fields.currentCryptoKey;
  v154 = *(_QWORD *)&v152->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v210.fields.currentCryptoKey = v155;
  *(_QWORD *)&v210.fields.fakeValue = v154;
  v156 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v210, 0LL);
  if ( !*p_userServantEntity
    || (v157 = v156, Rarity = UserServantEntity__getRarity(*p_userServantEntity, 0LL), !v150)
    || (v159 = Rarity,
        v160 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v150->fields.svtId, 0LL),
        !v153) )
  {
LABEL_76:
    sub_B170D4();
  }
  this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                   v153,
                                   &skillName,
                                   &actMaxRarity,
                                   v157,
                                   v159,
                                   v160,
                                   -1,
                                   0LL);
LABEL_44:
  v161 = 0;
  this->fields.isUseInSet = 0;
  if ( isFixMainDeck )
  {
    v162 = SupportServantListViewItem__CheckUseInSet(
             this,
             &this->fields.useSet,
             fixMainDeckIds,
             nowDeckId,
             supportServantData,
             v146);
    v161 = v162;
    this->fields.isUseInSet = v162;
  }
  if ( !v161 && isFixEventDeck )
    this->fields.isUseInSet = SupportServantListViewItem__CheckUseInSet(
                                this,
                                &this->fields.useSet,
                                fixEventDeckIds,
                                nowDeckId,
                                supportServantData,
                                v146);
  this->fields.isPushMode = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_76;
  v164 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_76;
  v165 = *(_OWORD *)&v164->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v205.fields.currentCryptoKey = *(_OWORD *)&v164->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v205.fields.fakeValue = v165;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v202 = v205;
  v167 = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v202, 0LL);
  v168 = this->fields.userServantEntity;
  v169 = v167;
  this->fields.isPush = v169;
  this->fields.isEnabled = 1;
  if ( !v168 )
    goto LABEL_76;
  DispLimitCount = UserServantEntity__getDispLimitCount(v168, 0, 0LL);
  v171 = this->fields.userServantEntity;
  this->fields.dispLimitCount = DispLimitCount;
  if ( !v171 )
    goto LABEL_76;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v171, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v173,
    v174,
    v175,
    v176,
    v177,
    v178);
  v179 = this->fields.userServantEntity;
  if ( !v179 )
    goto LABEL_76;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(v179, 0, 0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v181,
    v182,
    v183,
    v184,
    v185,
    v186);
  v187 = this->fields.userServantEntity;
  if ( !v187 )
    goto LABEL_76;
  adjustHp = v187->fields.adjustHp;
  v189 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v189 = BalanceConfig_TypeInfo;
    v187 = *p_userServantEntity;
  }
  this->fields.hpReinforceValue = v189->static_fields->StatusUpAdjustHp * adjustHp;
  if ( !v187 )
    goto LABEL_76;
  this->fields.atkReinforceValue = v189->static_fields->StatusUpAdjustAtk * v187->fields.adjustAtk;
  UserServantEntity__getAdjustMaxData(
    v187,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  v190 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v190 )
    goto LABEL_76;
  v191 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)v190,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !v191 )
    goto LABEL_76;
  v192 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
           v191,
           this->fields.classId,
           (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !v192 )
    goto LABEL_76;
  bannerId = v192->fields.bannerId;
  v194 = this->fields.servantEntity;
  this->fields.priority = bannerId;
  this->fields.sortValue1B = bannerId;
  if ( !v194 )
    goto LABEL_76;
  v195 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_76;
  this->fields.sortValue2 = ((__int64)v194->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v195->fields.lv;
  v197 = *(_QWORD *)&v195->fields.svtId.fields.currentCryptoKey;
  v196 = *(_QWORD *)&v195->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v211.fields.currentCryptoKey = v197;
  *(_QWORD *)&v211.fields.fakeValue = v196;
  v198 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v211, 0LL);
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v198;
  this->fields.amountSortValue = -1LL;
  if ( !iconLabelInfo1 )
    goto LABEL_76;
  IconLabelInfo__Clear(iconLabelInfo1, 0LL);
  if ( !*p_iconLabelInfo2 )
    goto LABEL_76;
  IconLabelInfo__Clear(*p_iconLabelInfo2, 0LL);
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
  SupportServantData_o *v19; // x0
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x0
  int32_t svtId; // w19
  __int64 v22; // x25
  __int64 v23; // x26
  bool result; // w0
  int32_t *v25; // [xsp+0h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  v9 = this;
  if ( (byte_40FD9F9 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, setNo);
    this = (SupportServantListViewItem_o *)sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_40FD9F9 = 1;
  }
  *setNo = 0;
  if ( !fixDeckIds )
LABEL_28:
    sub_B170D4();
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
    v19 = supportServantData->m_Items[v18];
    if ( !v19 )
      goto LABEL_28;
    UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(v19, i, 0LL);
    if ( UserServantLeaderEntity )
    {
      svtId = UserServantLeaderEntity->fields.svtId;
      v23 = *(_QWORD *)&v9->fields.svtId.fields.currentCryptoKey;
      v22 = *(_QWORD *)&v9->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v27.fields.currentCryptoKey = v23;
      *(_QWORD *)&v27.fields.fakeValue = v22;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                               v27,
                                               0LL);
      if ( svtId == (_DWORD)this )
        break;
    }
  }
  if ( (unsigned int)v12 >= fixDeckIds->max_length )
  {
LABEL_29:
    sub_B17100(this, setNo, fixDeckIds);
    sub_B170A0();
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
  __int64 v2; // x2
  __int64 v4; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIdList; // x8
  int64_t v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v9; // x8
  System_Int64_array *v10; // x20
  unsigned __int64 v11; // x21
  int64_t v12; // x22
  __int64 v13; // x23
  unsigned __int64 max_length; // x9
  _OWORD *v15; // x8
  __int128 v16; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-50h]

  if ( (byte_40FD9FF & 1) == 0 )
  {
    sub_B16FFC(&long___TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    byte_40FD9FF = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0LL;
  v6 = sub_B17014(long___TypeInfo, equipIdList->max_length, v2);
  v9 = this->fields.equipIdList;
  if ( !v9 )
LABEL_14:
    sub_B170D4();
  v10 = (System_Int64_array *)v6;
  v11 = 0LL;
  v12 = v6 + 32;
  v13 = 32LL;
  while ( 1 )
  {
    max_length = v9->max_length;
    if ( (__int64)v11 >= (int)max_length )
      return v10;
    if ( v11 >= max_length )
      goto LABEL_17;
    v15 = (_OWORD *)((char *)v9 + v13);
    v16 = v15[1];
    *(_OWORD *)&v19.fields.currentCryptoKey = *v15;
    *(_OWORD *)&v19.fields.fakeValue = v16;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v18 = v19;
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v18, 0LL);
    if ( v10 )
    {
      if ( v11 >= v10->max_length )
      {
LABEL_17:
        sub_B17100(v6, v7, v8);
        sub_B170A0();
      }
      *(_QWORD *)(v12 + 8 * v11) = v6;
      v9 = this->fields.equipIdList;
      ++v11;
      v13 += 32LL;
      if ( v9 )
        continue;
    }
    goto LABEL_14;
  }
}


int32_t __fastcall SupportServantListViewItem__GetFriendPointBonus(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SupportServantListViewItem_o *v3; // x19
  __int64 v4; // x1
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  int32_t v6; // w20
  __int64 v7; // x22
  int max_length; // w9
  unsigned int v9; // w25
  __int64 v10; // x8
  System_Int32_array *v11; // x21
  int32_t SvtId; // w0
  __int64 v13; // x9
  __int64 v14; // x10
  _BOOL4 v15; // w10
  int32_t v16; // w21

  v3 = this;
  if ( (byte_40FDA06 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, method);
    this = (SupportServantListViewItem_o *)sub_B16FFC(&System_Math_TypeInfo, v4);
    byte_40FDA06 = 1;
  }
  eventFriendPoints = v3->fields.eventFriendPoints;
  if ( !eventFriendPoints )
    return -1;
  v6 = -1;
  v7 = 4LL;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    v9 = v7 - 4;
    if ( (int)v7 - 4 >= max_length )
      return v6;
    if ( v9 >= max_length )
      goto LABEL_23;
    v10 = *((_QWORD *)&eventFriendPoints->obj.klass + v7);
    if ( v10 )
    {
      v11 = *(System_Int32_array **)(v10 + 40);
      SvtId = SupportServantListViewItem__get_SvtId(v3, method);
      this = (SupportServantListViewItem_o *)System_Array__IndexOf_int_(
                                               v11,
                                               SvtId,
                                               (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
      eventFriendPoints = v3->fields.eventFriendPoints;
      if ( eventFriendPoints )
      {
        if ( v9 >= eventFriendPoints->max_length )
        {
LABEL_23:
          sub_B17100(this, method, v2);
          sub_B170A0();
        }
        v13 = *((_QWORD *)&eventFriendPoints->obj.klass + v7);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 40);
          if ( v14 )
            v15 = *(_DWORD *)(v14 + 24) == 0;
          else
            v15 = 1;
          if ( v15 || (int)this >= 0 )
          {
            v16 = *(_DWORD *)(v13 + 48);
            if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Math_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            }
            this = (SupportServantListViewItem_o *)System_Math__Max_44463768(v6, v16, 0LL);
            eventFriendPoints = v3->fields.eventFriendPoints;
            v6 = (int)this;
          }
          ++v7;
          if ( eventFriendPoints )
            continue;
        }
      }
    }
    sub_B170D4();
  }
}


bool __fastcall SupportServantListViewItem__GetNpInfo(
        SupportServantListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  UserServantEntity_o *userServantEntity; // x0
  TreasureDvcInfo_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40FDA05 & 1) == 0 )
  {
    sub_B16FFC(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_40FDA05 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0LL);
  v9 = (TreasureDvcInfo_o *)sub_B170CC(TreasureDvcInfo_TypeInfo, tdInfo, method, v3, v4);
  TreasureDvcInfo___ctor(v9, 0LL);
  *tdInfo = v9;
  sub_B16F98((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
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
  System_Collections_Generic_List_int__o *ExtraClassIdList; // x0

  if ( (byte_40FD9FC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantClassMaster___, *(_QWORD *)&classType);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v6);
    byte_40FD9FC = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( classType == 8 )
  {
    if ( Master_WarQuestSelectionMaster )
    {
      ExtraClassIdList = ServantClassMaster__getExtraClassIdList(Master_WarQuestSelectionMaster, 0LL);
      if ( ExtraClassIdList )
        return System_Collections_Generic_List_int___Contains(
                 ExtraClassIdList,
                 this->fields.classId,
                 (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_12:
    sub_B170D4();
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v10; // x11
  int32_t dropDragPrefab; // w1
  FilterKindList_c *v12; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *NpTypeFilterKindList; // x0
  ListViewSort_FilterKind_array *v14; // x0
  FilterKindList_c *v15; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *NpEffectFilterKindList; // x0
  ListViewSort_FilterKind_array *v17; // x0
  UserServantEntity_o *userServantEntity; // x21
  __int64 v19; // x2
  ListViewSort_FilterKind_array *v20; // x0
  __int64 v21; // x2
  ListViewSort_FilterKind_array *v22; // x1
  FilterKindList_c *v23; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v25; // x21
  FilterKindList_c *v27; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v29; // x0
  FilterKindList_c *v30; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassExtra1InShielderFilterKindList; // x0
  ListViewSort_FilterKind_array *v32; // x0
  FilterKindList_c *v33; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassExtra2FilterKindList; // x0
  FilterKindList_c *v35; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *v36; // x0
  ListViewSort_FilterKind_array *v37; // x0
  FilterKindList_c *v38; // x0
  ListViewSort_FilterKind_array *v39; // x0
  UserServantEntity_o *v40; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v42; // x0
  int32_t v43; // w0
  UserServantEntity_o *v44; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UserServantEntity_o *v52; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  __int64 v61; // x2
  _BOOL4 v62; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v64; // w0

  if ( (byte_40FD9FD & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_B16FFC(&ServantEventBonusFilterController_TypeInfo, v7);
    sub_B16FFC(&SupportServantListViewManager_TypeInfo, v8);
    byte_40FD9FD = 1;
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
      if ( !SupportServantListViewItem__IsMatchClass(this, 8, method) )
        return 0;
      v27 = FilterKindList_TypeInfo;
      if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v27 = FilterKindList_TypeInfo;
      }
      ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v27->static_fields->ClassGroupFilterKindList;
      if ( !ClassGroupFilterKindList )
LABEL_91:
        sub_B170D4();
      v29 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                               ClassGroupFilterKindList,
                                               (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v29, 0LL) )
      {
        v30 = FilterKindList_TypeInfo;
        if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v30 = FilterKindList_TypeInfo;
        }
        ClassExtra1InShielderFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v30->static_fields->ClassExtra1InShielderFilterKindList;
        if ( !ClassExtra1InShielderFilterKindList )
          goto LABEL_91;
        v32 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                 ClassExtra1InShielderFilterKindList,
                                                 (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v32, 0LL) )
        {
LABEL_69:
          if ( !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
            return 0;
          goto LABEL_11;
        }
        v33 = FilterKindList_TypeInfo;
        if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v33 = FilterKindList_TypeInfo;
        }
        ClassExtra2FilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v33->static_fields->ClassExtra2FilterKindList;
        if ( !ClassExtra2FilterKindList )
          goto LABEL_91;
LABEL_68:
        v39 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                 ClassExtra2FilterKindList,
                                                 (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v39, 0LL) )
          goto LABEL_11;
        goto LABEL_69;
      }
    }
    else
    {
      v35 = FilterKindList_TypeInfo;
      if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v35 = FilterKindList_TypeInfo;
      }
      v36 = (System_Collections_Generic_List_Voice_BATTLE__o *)v35->static_fields->ClassGroupFilterKindList;
      if ( !v36 )
        goto LABEL_91;
      v37 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                               v36,
                                               (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v37, 0LL) )
      {
        v38 = FilterKindList_TypeInfo;
        if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v38 = FilterKindList_TypeInfo;
        }
        ClassExtra2FilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v38->static_fields->ClassFilterKindList;
        if ( !ClassExtra2FilterKindList )
          goto LABEL_91;
        goto LABEL_68;
      }
    }
    if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
      return 0;
    goto LABEL_11;
  }
  if ( !SupportServantListViewItem__IsMatchClass(this, dropDragPrefab, method) )
    return 0;
LABEL_11:
  v12 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  NpTypeFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v12->static_fields->NpTypeFilterKindList;
  if ( !NpTypeFilterKindList )
    goto LABEL_91;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           NpTypeFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v15 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v15 = FilterKindList_TypeInfo;
  }
  NpEffectFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v15->static_fields->NpEffectFilterKindList;
  if ( !NpEffectFilterKindList )
    goto LABEL_91;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           NpEffectFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userServantEntity = this->fields.userServantEntity;
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
    v40 = this->fields.userServantEntity;
    if ( v40 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v40, 0, 0LL) )
      {
        v42 = this->fields.userServantEntity;
        if ( !v42 )
          goto LABEL_91;
        v43 = UserServantEntity__getDispLimitCount(v42, 0, 0LL);
        v44 = this->fields.userServantEntity;
        this->fields.dispLimitCount = v43;
        if ( !v44 )
          goto LABEL_91;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v44, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
        v52 = this->fields.userServantEntity;
        if ( !v52 )
          goto LABEL_91;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(v52, 0, 0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59);
      }
    }
    v20 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v19);
    if ( !v20 )
      goto LABEL_91;
    v22 = v20;
    if ( !v20->max_length )
      goto LABEL_92;
    v20->m_Items[1] = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL);
    v20 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v61);
    if ( !v20 )
      goto LABEL_91;
    v22 = v20;
    if ( !v20->max_length )
    {
LABEL_92:
      sub_B17100(v20, v22, v21);
      sub_B170A0();
    }
    v20->m_Items[1] = 51;
    v62 = ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v64 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v62) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v64 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v64 )
    {
      return 0;
    }
  }
  v20 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v19);
  if ( !v20 )
    goto LABEL_91;
  v22 = v20;
  if ( !v20->max_length )
    goto LABEL_92;
  v20->m_Items[1] = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields.isSwapChoice == this->fields.isChoice )
  {
    return 0;
  }
  v23 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v23 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v23->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_91;
  v25 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v25, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v25, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall SupportServantListViewItem__Modify(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleServantConfConponent_o *p_userServantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // t1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  BattleServantConfConponent_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v12; // x20
  int64_t v13; // x0
  System_Int32_array **Entity; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-30h]

  if ( (byte_40FD9FA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FD9FA = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  p_userServantEntity = (BattleServantConfConponent_o *)&this->fields.userServantEntity;
  if ( userServantEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    klass = p_userServantEntity->klass;
    if ( !p_userServantEntity->klass )
      goto LABEL_12;
    byval_arg = klass->_1.byval_arg;
    v12 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster;
    *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v22.fields.fakeValue = byval_arg;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v21 = v22;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v21, 0LL);
    if ( !v12 )
LABEL_12:
      sub_B170D4();
    Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      v12,
                                      v13,
                                      (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_userServantEntity->klass = (BattleServantConfConponent_c *)Entity;
    sub_B16F98(p_userServantEntity, Entity, v15, v16, v17, v18, v19, v20);
  }
}


void __fastcall SupportServantListViewItem__ModifyChoiceItem(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B170D4();
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_userServantEntity )
    sub_B170D4();
  this->fields.isEventJoin = UserServantEntity__IsEventJoin(*p_userServantEntity, 0LL);
}


void __fastcall SupportServantListViewItem__ModifyLockItem(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B170D4();
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall SupportServantListViewItem__Modify_31931444(
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
  sub_B16F98(
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  Il2CppObject *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  Il2CppObject *v43; // x22
  System_Int32_array **v44; // x1
  BalanceConfig_c *v45; // x0
  __int128 v46; // q1
  WebViewManager_o *Instance; // x0
  BattleServantConfConponent_c *v48; // x8
  Il2CppType this_arg; // q0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v50; // x21
  int64_t v51; // x0
  System_Int32_array **Entity; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  BattleServantConfConponent_c *v59; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  WebViewManager_o *v62; // x0
  WarQuestSelectionMaster_o *v63; // x0
  BattleServantConfConponent_c *v64; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v65; // x20
  Il2CppClass *v66; // x21
  Il2CppClass *v67; // x22
  int32_t v68; // w0
  System_Int32_array **v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+40h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  klass = equipIdList;
  if ( (byte_40FD9FB & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, equipIdList);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_40FD9FB = 1;
  }
  this->fields.equipUserServantEntity = 0LL;
  p_equipUserServantEntity = (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity;
  sub_B16F98(
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v20, v21, v22, v23, v24, v25);
  this->fields.equipIdList = 0LL;
  p_equipIdList = (BattleServantConfConponent_o *)&this->fields.equipIdList;
  sub_B16F98(p_equipIdList, 0LL, v27, v28, v29, v30, v31, v32);
  if ( !p_equipIdList->monitor )
    return;
  if ( klass )
  {
    if ( (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *)p_equipIdList->klass == klass )
      goto LABEL_15;
    v36 = System_Array__Clone((System_Array_o *)klass, 0LL);
    if ( !v36 )
    {
      v44 = 0LL;
      goto LABEL_14;
    }
    v43 = v36;
    v44 = (System_Int32_array **)sub_B170BC(v36, CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo);
    if ( v44 )
      goto LABEL_14;
    sub_B173C8(v43);
  }
  v45 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v45 = BalanceConfig_TypeInfo;
  }
  v44 = (System_Int32_array **)sub_B17014(
                                 CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo,
                                 (unsigned int)v45->static_fields->SvtEquipMax,
                                 v35);
LABEL_14:
  p_equipIdList->klass = (BattleServantConfConponent_c *)v44;
  sub_B16F98(p_equipIdList, v44, v37, v38, v39, v40, v41, v42);
  klass = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *)p_equipIdList->klass;
  if ( !p_equipIdList->klass )
    goto LABEL_40;
LABEL_15:
  if ( !klass->max_length )
    goto LABEL_41;
  v46 = *(_OWORD *)&klass->m_Items[0].fields.fakeValue;
  *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&klass->m_Items[0].fields.currentCryptoKey;
  *(_OWORD *)&v78.fields.fakeValue = v46;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v77 = v78;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v77, 0LL) < 1 )
    return;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v48 = p_equipIdList->klass;
  if ( !p_equipIdList->klass )
    goto LABEL_40;
  if ( !LODWORD(v48->_1.namespaze) )
  {
LABEL_41:
    sub_B17100(MasterData_WarQuestSelectionMaster, v34, v35);
    sub_B170A0();
  }
  this_arg = v48->_1.this_arg;
  v50 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster;
  *(Il2CppType *)&v78.fields.currentCryptoKey = v48->_1.byval_arg;
  *(Il2CppType *)&v78.fields.fakeValue = this_arg;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v76 = v78;
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v76, 0LL);
  if ( !v50 )
    goto LABEL_40;
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    v50,
                                    v51,
                                    (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_equipUserServantEntity->klass = (BattleServantConfConponent_c *)Entity;
  sub_B16F98(p_equipUserServantEntity, Entity, v53, v54, v55, v56, v57, v58);
  v59 = p_equipUserServantEntity->klass;
  if ( p_equipUserServantEntity->klass )
  {
    declaringType = v59->_1.declaringType;
    parent = v59->_1.parent;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v79.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v79.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v79, 0LL) >= 1 )
    {
      v62 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( v62 )
      {
        v63 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)v62,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
        v64 = p_equipUserServantEntity->klass;
        if ( p_equipUserServantEntity->klass )
        {
          v65 = (DataMasterBase_WarMaster__WarEntity__int__o *)v63;
          v67 = v64->_1.declaringType;
          v66 = v64->_1.parent;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v80.fields.currentCryptoKey = v67;
          *(_QWORD *)&v80.fields.fakeValue = v66;
          v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v80, 0LL);
          if ( v65 )
          {
            v69 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v65,
                                           v68,
                                           (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            p_equipServantEntity->klass = (BattleServantConfConponent_c *)v69;
            sub_B16F98(p_equipServantEntity, v69, v70, v71, v72, v73, v74, v75);
            return;
          }
        }
      }
LABEL_40:
      sub_B170D4();
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

  if ( (byte_40FDA00 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtId);
    byte_40FDA00 = 1;
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
      sub_B17100(v6, v7, v8);
      sub_B170A0();
    }
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t bonusKind2; // w8
  int32_t *v10; // x8
  int32_t *p_bonusKind2Id; // x8
  int32_t v12; // w2
  UserServantEntity_o *userServantEntity; // x0
  bool IsEnableServant; // w0
  WebViewManager_o *Instance; // x0
  ServantFilterMaster_o *MasterData_WarQuestSelectionMaster; // x0
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isChoice; // w9
  IconLabelInfo_o *iconLabelInfo2; // x0
  bool result; // w0
  struct UserServantEntity_o *v21; // x8
  __int128 v22; // q1
  int64_t v23; // x0
  struct UserServantEntity_o *v24; // x8
  IconLabelInfo_o *iconLabelInfo1; // x0
  ServantEntity_o *servantEntity; // x0
  ServantEntity_o *v27; // x0
  const MethodInfo *v28; // x2
  int64_t rarity; // x8
  struct UserServantEntity_o *v30; // x0
  UserServantEntity_o *v31; // x0
  int64_t hpReinforceValue; // x2
  IconLabelInfo_o *v33; // x0
  int32_t adjustAtk; // w3
  int32_t v35; // w1
  struct UserServantEntity_o *v36; // x8
  struct UserServantEntity_o *equipUserServantEntity; // x9
  int64_t hp; // x10
  IconLabelInfo_o *v39; // x0
  int32_t v40; // w4
  int32_t adjustHp; // w3
  int32_t v42; // w2
  int32_t v43; // w1
  struct UserServantEntity_o *v44; // x8
  struct UserServantEntity_o *v45; // x9
  int64_t atk; // x10
  struct ServantEntity_o *v47; // x8
  IconLabelInfo_o *v48; // x19
  __int64 v49; // x20
  __int64 v50; // x21
  int32_t v51; // w0
  struct IconLabelInfo_o *v52; // x20
  int64_t v53; // x9
  int32_t v54; // w0
  int64_t amountSortValue; // x0
  struct ListViewManager_o *manager; // x8
  __int64 v57; // x11
  struct ListViewManager_o *v58; // x20
  int32_t lv; // w20
  int32_t LevelMax; // w0
  __int64 v61; // x21
  __int64 v62; // x22
  int32_t v63; // w0
  const MethodInfo *v64; // x2
  struct ServantEntity_o *v65; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v67; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+30h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_40FD9FE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantFilterMaster___, sort);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&SupportServantListViewManager_TypeInfo, v8);
    byte_40FD9FE = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  if ( !sort )
LABEL_97:
    sub_B170D4();
  if ( sort->fields.isBonusKind )
  {
    if ( this->fields.isBase )
      goto LABEL_24;
    bonusKind2 = sort->fields.bonusKind2;
    if ( bonusKind2 == 2 )
    {
      if ( this->fields.bonusKind == 2 )
      {
        p_bonusKind2Id = &sort->fields.bonusKind2Id;
        if ( this->fields.bonusKindId == sort->fields.bonusKind2Id )
          goto LABEL_13;
      }
      else
      {
        p_bonusKind2Id = &sort->fields.bonusKind2Id;
      }
      this->fields.bonusKind = 2;
      this->fields.bonusKindId = *p_bonusKind2Id;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_97;
      MasterData_WarQuestSelectionMaster = (ServantFilterMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_97;
      IsEnableServant = ServantFilterMaster__IsEnableServant(
                          MasterData_WarQuestSelectionMaster,
                          this->fields.svtId,
                          this->fields.bonusKindId,
                          0LL);
    }
    else
    {
      if ( bonusKind2 != 1 )
        goto LABEL_36;
      if ( this->fields.bonusKind == 1 )
      {
        v10 = &sort->fields.bonusKind2Id;
        if ( this->fields.bonusKindId == sort->fields.bonusKind2Id )
        {
LABEL_13:
          if ( !this->fields.isEventUpVal )
            return 0;
          goto LABEL_23;
        }
      }
      else
      {
        v10 = &sort->fields.bonusKind2Id;
      }
      this->fields.bonusKind = 1;
      v12 = *v10;
      userServantEntity = this->fields.userServantEntity;
      this->fields.bonusKindId = *v10;
      if ( !userServantEntity )
        goto LABEL_97;
      IsEnableServant = UserServantEntity__getEventUpVal_21445528(
                          userServantEntity,
                          this->fields.eventSetupInfo,
                          v12,
                          0LL);
    }
    this->fields.isEventUpVal = IsEnableServant;
    if ( !IsEnableServant )
      return 0;
  }
LABEL_23:
  if ( this->fields.isBase )
    goto LABEL_24;
LABEL_36:
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_97;
  if ( ServantEntity__get_IsExpUp(servantEntity, 0LL) )
    return 0;
  v27 = this->fields.servantEntity;
  if ( !v27 )
    goto LABEL_97;
  if ( ServantEntity__get_IsStatusUp(v27, 0LL) || !SupportServantListViewItem__IsMatchServantFilter(this, sort, v28) )
    return 0;
LABEL_24:
  isSwapChoice = this->fields.isSwapChoice;
  isChoice = this->fields.isChoice;
  this->fields.sortValue0 = 0LL;
  if ( isSwapChoice != isChoice && sort->fields.isChoiceSort )
    this->fields.sortValue0 = 10LL;
  iconLabelInfo2 = this->fields.iconLabelInfo2;
  if ( !iconLabelInfo2 )
    goto LABEL_97;
  IconLabelInfo__Clear(iconLabelInfo2, 0LL);
  result = 1;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v21 = this->fields.userServantEntity;
      if ( !v21 )
        goto LABEL_97;
      v22 = *(_OWORD *)&v21->fields.id.fields.fakeValue;
      *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&v21->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v69.fields.fakeValue = v22;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v68 = v69;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v68, 0LL);
      v24 = this->fields.userServantEntity;
      this->fields.sortValue1 = v23;
      if ( !v24 )
        goto LABEL_97;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      if ( !iconLabelInfo1 )
        goto LABEL_97;
      IconLabelInfo__SetTime(iconLabelInfo1, 49, v24->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_77;
    case 2:
      rarity = this->fields.rarity;
      v30 = this->fields.userServantEntity;
      goto LABEL_61;
    case 3:
      v30 = this->fields.userServantEntity;
      if ( !v30 )
        goto LABEL_97;
      this->fields.sortValue1 = v30->fields.lv;
      goto LABEL_62;
    case 4:
      v31 = this->fields.userServantEntity;
      if ( !v31 )
        goto LABEL_97;
      UserServantEntity__getTreasureDeviceInfo_21453148(v31, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(hpReinforceValue) = tdMaxLv[1];
      v33 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !v33 )
        goto LABEL_97;
      adjustAtk = tdMaxLv[0];
      v35 = 33;
      goto LABEL_76;
    case 5:
      v36 = this->fields.userServantEntity;
      if ( !v36 )
        goto LABEL_97;
      equipUserServantEntity = this->fields.equipUserServantEntity;
      hp = v36->fields.hp;
      if ( equipUserServantEntity )
      {
        v39 = this->fields.iconLabelInfo1;
        this->fields.sortValue1 = equipUserServantEntity->fields.hp + (int)hp;
        if ( !v39 )
          goto LABEL_97;
        v40 = equipUserServantEntity->fields.hp;
        adjustHp = v36->fields.adjustHp;
        v42 = v36->fields.hp;
        v43 = 46;
LABEL_56:
        IconLabelInfo__Set_28888132(v39, v43, v42, adjustHp, v40, 0, 0, 0, 0LL);
      }
      else
      {
        v33 = this->fields.iconLabelInfo1;
        this->fields.sortValue1 = hp;
        if ( !v33 )
          goto LABEL_97;
        adjustAtk = v36->fields.adjustHp;
        LODWORD(hpReinforceValue) = v36->fields.hp;
        v35 = 3;
LABEL_76:
        IconLabelInfo__Set_28888132(v33, v35, hpReinforceValue, adjustAtk, 0, 0, 0, 0, 0LL);
      }
LABEL_77:
      v30 = this->fields.userServantEntity;
      if ( !v30 )
        goto LABEL_97;
      v48 = this->fields.iconLabelInfo2;
LABEL_79:
      lv = v30->fields.lv;
LABEL_80:
      LevelMax = UserServantEntity__getLevelMax(v30, 0LL);
      if ( !v48 )
        goto LABEL_97;
      IconLabelInfo__Set_28888132(v48, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
      return 1;
    case 6:
      v44 = this->fields.userServantEntity;
      if ( !v44 )
        goto LABEL_97;
      v45 = this->fields.equipUserServantEntity;
      atk = v44->fields.atk;
      if ( v45 )
      {
        v39 = this->fields.iconLabelInfo1;
        this->fields.sortValue1 = v45->fields.atk + (int)atk;
        if ( !v39 )
          goto LABEL_97;
        v40 = v45->fields.atk;
        adjustHp = v44->fields.adjustAtk;
        v42 = v44->fields.atk;
        v43 = 47;
        goto LABEL_56;
      }
      v33 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = atk;
      if ( !v33 )
        goto LABEL_97;
      adjustAtk = v44->fields.adjustAtk;
      LODWORD(hpReinforceValue) = v44->fields.atk;
      v35 = 5;
      goto LABEL_76;
    case 7:
      v47 = this->fields.servantEntity;
      if ( !v47 )
        goto LABEL_97;
      v33 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v47->fields.cost;
      if ( !v33 )
        goto LABEL_97;
      LODWORD(hpReinforceValue) = v47->fields.cost;
      v35 = 7;
      adjustAtk = 0;
      goto LABEL_76;
    case 8:
      v30 = this->fields.userServantEntity;
      rarity = -this->fields.priority;
LABEL_61:
      this->fields.sortValue1 = rarity;
      if ( !v30 )
        goto LABEL_97;
LABEL_62:
      v48 = this->fields.iconLabelInfo1;
      goto LABEL_79;
    case 0xA:
      v50 = *(_QWORD *)&this->fields.friendship.fields.currentCryptoKey;
      v49 = *(_QWORD *)&this->fields.friendship.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v71.fields.currentCryptoKey = v50;
      *(_QWORD *)&v71.fields.fakeValue = v49;
      v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v71, 0LL);
      v52 = this->fields.iconLabelInfo1;
      v53 = v51;
      friendship = this->fields.friendship;
      this->fields.sortValue1 = v53;
      v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(friendship, 0LL);
      if ( !v52 )
        goto LABEL_97;
      adjustAtk = this->fields.friendshipMax;
      LODWORD(hpReinforceValue) = v54;
      v35 = 32;
      v33 = v52;
      goto LABEL_76;
    case 0xE:
      amountSortValue = this->fields.amountSortValue;
      if ( (amountSortValue & 0x8000000000000000LL) == 0 )
        goto LABEL_94;
      manager = sort->fields.manager;
      if ( manager
        && (v57 = *(&SupportServantListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v57) )
      {
        if ( (SupportServantListViewManager_c *)manager->klass->_2.typeHierarchy[v57 - 1] == SupportServantListViewManager_TypeInfo )
          v58 = sort->fields.manager;
        else
          v58 = 0LL;
      }
      else
      {
        v58 = 0LL;
      }
      v62 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v61 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v73.fields.currentCryptoKey = v62;
      *(_QWORD *)&v73.fields.fakeValue = v61;
      v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v73, 0LL);
      if ( !v58 )
        goto LABEL_97;
      amountSortValue = SupportServantListViewManager__GetAmountSortValue(
                          (SupportServantListViewManager_o *)v58,
                          v63,
                          v64);
      this->fields.amountSortValue = amountSortValue;
LABEL_94:
      v65 = this->fields.servantEntity;
      if ( !v65 )
        goto LABEL_97;
      collectionNo = v65->fields.collectionNo;
      v67 = this->fields.userServantEntity;
      this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (amountSortValue << 48)) | collectionNo;
      if ( !v67 )
        goto LABEL_97;
      v48 = this->fields.iconLabelInfo1;
      lv = v67->fields.lv;
      v30 = v67;
      goto LABEL_80;
    case 0xF:
      hpReinforceValue = this->fields.hpReinforceValue;
      v33 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hpReinforceValue;
      if ( !v33 )
        goto LABEL_97;
      adjustAtk = this->fields.nowMaxHpReinforceValue;
      v35 = 44;
      goto LABEL_76;
    case 0x10:
      hpReinforceValue = this->fields.atkReinforceValue;
      v33 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hpReinforceValue;
      if ( !v33 )
        goto LABEL_97;
      adjustAtk = this->fields.nowMaxAtkReinforceValue;
      v35 = 45;
      goto LABEL_76;
    default:
      return result;
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
    sub_B170D4();
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
  if ( (byte_40FDA03 & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    byte_40FDA03 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_28023340(126, 0LL);
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
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  SupportServantData_o *supportServantData; // x19
  int64_t v6; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-30h]

  if ( (byte_40FDA04 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40FDA04 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_9;
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  supportServantData = this->fields.supportServantData;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v8 = v9;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v8, 0LL);
  if ( !supportServantData )
LABEL_9:
    sub_B170D4();
  return SupportServantData__isUseServant(supportServantData, v6, 0LL);
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

  if ( (byte_40FDA02 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B16FFC(&StringLiteral_18326/*"error"*/, v3);
    byte_40FDA02 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18326/*"error"*/;
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
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v10, 0LL);
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

  if ( (byte_40FDA01 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40FDA01 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v6, 0LL);
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