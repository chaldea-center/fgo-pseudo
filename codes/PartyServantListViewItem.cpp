void __fastcall PartyServantListViewItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewItem_c *v2; // x8

  if ( (byte_418B805 & 1) == 0 )
  {
    sub_B2C35C(&PartyServantListViewItem_TypeInfo, v1);
    byte_418B805 = 1;
  }
  PartyServantListViewItem_TypeInfo->static_fields->PRIORITY_NORMAL = 0LL;
  v2 = PartyServantListViewItem_TypeInfo;
  PartyServantListViewItem_TypeInfo->static_fields->PRIORITY_TOP = 10LL;
  v2->static_fields->PRIORITY_LOWEST = -10LL;
  v2->static_fields->PRIORITY_LOWEST_HEROIN_LEAVE = -20LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewItem___ctor(
        PartyServantListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userServantEntity,
        PartyListViewItem_array *baseDeckItemList,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t tutorialMode,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
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
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  IconLabelInfo_o *v46; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  IconLabelInfo_o *v53; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  PartyServantListViewItem_o *v60; // x19
  IconLabelInfo_o *v61; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  int64_t Instance; // x0
  const MethodInfo *partyIndex; // x1
  struct PartyOrganizationListViewItem_o *Member; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  struct PartyOrganizationListViewItem_o *baseItem; // x8
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v97; // x21
  __int64 v98; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v99; // x20
  struct ServantEntity_o *v100; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // x20
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  ServantLimitMaster_o *v108; // x21
  struct UserServantEntity_o *v109; // x8
  int32_t v110; // w27
  ServantLimitEntity_o *v111; // x21
  UserServantEntity_o *v112; // x8
  __int128 v113; // q1
  UserServantCollectionMaster_o *v114; // x27
  int64_t v115; // x24
  UserServantCollectionEntity_o *v116; // x27
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  int32_t i; // w28
  PartyOrganizationListViewItem_o *v136; // x21
  UserServantEntity_o *v137; // x8
  __int128 v138; // q0
  struct UserServantEntity_o *v139; // x8
  __int128 v140; // q0
  int64_t v141; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v142; // x8
  __int64 v143; // x24
  __int64 v144; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *servantEntity; // x8
  int v146; // w24
  struct ServantEntity_o *v147; // x8
  __int64 v148; // x21
  __int64 v149; // x24
  int32_t v150; // w21
  int32_t v151; // w27
  int32_t IncludedRestrictionIds; // w0
  BalanceConfig_c *v153; // x0
  System_Int64_array *EquipList; // x0
  const MethodInfo *v155; // x2
  int32_t cost; // w19
  int v157; // w10
  UserServantEntity_o *v158; // x8
  bool IsChoice; // w0
  UserServantEntity_o *v160; // x8
  __int128 v161; // q0
  __int64 v162; // x19
  bool v163; // zf
  PartyServantListViewItem_o *v164; // x19
  bool v165; // w8
  UserServantEntity_o *v166; // x8
  bool IsLeave; // w0
  const MethodInfo *v168; // x1
  UserServantEntity_o *v169; // x8
  UserServantEntity_o *v170; // x8
  bool IsUniqueIndividualityRestriction_21657940; // w0
  const MethodInfo *v172; // x1
  struct QuestRestrictionInfo_o *v173; // x8
  UserEventServantFatigueMaster_o *v174; // x21
  int32_t eventId; // w27
  __int64 v176; // x24
  __int64 v177; // x28
  int64_t v178; // x19
  bool v179; // cc
  bool AllOutBattleAlreadyUsed; // w0
  struct QuestRestrictionInfo_o *v181; // x8
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x20
  UserServantEntity_o *v183; // x8
  UserEventDataLostEntity_o *v184; // x20
  __int64 v185; // x21
  __int64 v186; // x24
  UserServantEntity_o *v187; // x9
  UserEventDataLostEntity_o *v188; // x20
  __int64 v189; // x21
  __int64 v190; // x27
  int32_t v191; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr10_16
  UserServantEntity_o *v193; // x8
  int64_t v194; // x20
  __int64 v195; // x21
  __int64 v196; // x24
  int32_t v197; // w21
  int32_t Rarity; // w28
  const MethodInfo *v199; // x7
  System_String_o **p_skillName; // x1
  int *p_actMaxRarity; // x2
  int32_t v202; // w3
  int32_t v203; // w4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v204; // kr20_16
  UserServantEntity_o *v205; // x8
  int64_t v206; // x20
  __int64 v207; // x21
  __int64 v208; // x24
  int32_t v209; // w21
  int32_t v210; // w26
  struct QuestRestrictionInfo_o *v211; // x8
  EventServantPointRankMaster_o *v212; // x20
  UserServantEntity_o *v213; // x8
  __int128 v214; // q0
  UserEventServantPointMaster_o *v215; // x21
  int64_t v216; // x25
  int32_t *p_SvtPoint_k__BackingField; // x19
  int32_t v218; // w21
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  System_Collections_Generic_List_int__o *v221; // x20
  PartyListViewItem_array *v222; // x10
  PartyServantListViewItem_o *v223; // x9
  __int64 v224; // x8
  unsigned __int64 v225; // x24
  int32_t v226; // w19
  PartyListViewItem_o *v227; // x25
  int32_t j; // w26
  PartyOrganizationListViewItem_o *v229; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v230; // kr30_16
  UserServantEntity_o *v231; // x8
  struct UserServantEntity_o *v232; // x9
  __int128 v233; // q0
  System_Int64_array *v234; // x0
  const MethodInfo *v235; // x2
  __int64 v236; // x21
  __int64 v237; // x23
  bool v238; // w0
  struct QuestRestrictionInfo_o *v239; // x8
  PartyServantListViewItem_o *v240; // x19
  System_Collections_Generic_List_EventCampaignEntity__o *FriendshipUpCampaigns; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v242; // x21
  EventQuestMaster_o *v243; // x20
  __int64 v244; // x0
  __int64 v245; // x1
  EventCampaignEntity_o *current; // x21
  System_Int32_array *monitor; // x23
  UserServantEntity_o *v248; // x8
  __int64 v249; // x25
  __int64 v250; // x26
  int32_t v251; // w1
  UserServantEntity_o *v252; // x8
  System_Int32_array **SkillCategoryIdList; // x0
  System_String_array **v254; // x2
  System_String_array **v255; // x3
  System_Boolean_array **v256; // x4
  System_Int32_array **v257; // x5
  System_Int32_array *v258; // x6
  System_Int32_array *v259; // x7
  System_Int32_array **TreasureDeviceCategoryIdList; // x0
  System_String_array **v261; // x2
  System_String_array **v262; // x3
  System_Boolean_array **v263; // x4
  System_Int32_array **v264; // x5
  System_Int32_array *v265; // x6
  System_Int32_array *v266; // x7
  BalanceConfig_c *v267; // x8
  int v268; // w19
  __int64 v269; // x0
  struct PartyOrganizationListViewItem_o **p_baseItem; // [xsp+8h] [xbp-1C8h]
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+10h] [xbp-1C0h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+18h] [xbp-1B8h]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+20h] [xbp-1B0h]
  UserServantEntity_o **p_userServantEntity; // [xsp+38h] [xbp-198h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v277; // [xsp+40h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v278; // [xsp+60h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v279; // [xsp+80h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v280; // [xsp+A0h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v281; // [xsp+C0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v282; // [xsp+E0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v283; // [xsp+100h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v284; // [xsp+120h] [xbp-B0h] BYREF
  UserEventServantPointEntity_o *v285; // [xsp+138h] [xbp-98h] BYREF
  int32_t actMaxRarity; // [xsp+144h] [xbp-8Ch] BYREF
  System_String_o *skillName; // [xsp+148h] [xbp-88h] BYREF
  int v288; // [xsp+154h] [xbp-7Ch] BYREF
  __int64 v289; // [xsp+158h] [xbp-78h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+160h] [xbp-70h] BYREF
  int64_t recoverAt; // [xsp+168h] [xbp-68h] BYREF
  int32_t friendshipRank[3]; // [xsp+174h] [xbp-5Ch] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v293; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v294; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v295; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v296; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v297; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v298; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v299; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v300; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v301; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v302; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v303; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v304; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v305; // 0:x0.16

  if ( (byte_418B7F9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, *(_QWORD *)&index);
    sub_B2C35C(&BalanceConfig_TypeInfo, v16);
    sub_B2C35C(&CommonRestrictionMaster_TypeInfo, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventQuestMaster___, v19);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, v20);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v21);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v22);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v23);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v24);
    sub_B2C35C(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v25);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v26);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v27);
    sub_B2C35C(&DataManager_TypeInfo, v28);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v29);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v30);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v31);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v32);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v33);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v34);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v35);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v36);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v37);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v38);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v39);
    sub_B2C35C(&NetworkManager_TypeInfo, v40);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v42);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v44);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v45);
    byte_418B7F9 = 1;
  }
  friendshipRank[0] = 0;
  entity = 0LL;
  recoverAt = 0LL;
  v289 = 0LL;
  v288 = 0;
  skillName = 0LL;
  actMaxRarity = 0;
  v285 = 0LL;
  memset(&v284, 0, sizeof(v284));
  v46 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v46, 0LL);
  this->fields.iconLabelInfo1 = v46;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v53, 0LL);
  this->fields.iconLabelInfo2 = v53;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v60 = this;
  v61 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v61, 0LL);
  this->fields.iconLabelInfo3 = v61;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo3,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_252;
  Member = PartyListViewItem__GetMember(partyItem, num, 0LL);
  this->fields.baseItem = Member;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseItem,
    (System_Int32_array **)Member,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  baseItem = this->fields.baseItem;
  this->fields._PartyListViewItemMenuKind_k__BackingField = partyItem->fields.menuKind;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_252;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0LL;
  this->fields.userServantEntity = userServantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  p_userServantEntity = &this->fields.userServantEntity;
  if ( !this->fields.userServantEntity )
    goto LABEL_252;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_252;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v98 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v97 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v99 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v293.fields.currentCryptoKey = v98;
  *(_QWORD *)&v293.fields.fakeValue = v97;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v293, 0LL);
  if ( !v99 )
    goto LABEL_252;
  v100 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     v99,
                                     Instance,
                                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v100;
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v100,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_252;
  v108 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.svtId, 0LL);
  v109 = this->fields.userServantEntity;
  if ( !v109 )
    goto LABEL_252;
  v110 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v109->fields.limitCount, 0LL);
  if ( !v108 )
    goto LABEL_252;
  v111 = ServantLimitMaster__GetEntity(v108, v110, Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_252;
  p_baseItem = &this->fields.baseItem;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v112 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_252;
  v113 = *(_OWORD *)&v112->fields.userId.fields.fakeValue;
  v114 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v283.fields.currentCryptoKey = *(_OWORD *)&v112->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v283.fields.fakeValue = v113;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v282 = v283;
  v115 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v282, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.svtId, 0LL);
  if ( !v114 )
    goto LABEL_252;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v114, v115, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_252;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !v111 )
    goto LABEL_252;
  this->fields.rarityId = v111->fields.rarity;
  if ( !userServantEntity )
    goto LABEL_252;
  v116 = (UserServantCollectionEntity_o *)Instance;
  Instance = UserServantEntity__getFrameType(userServantEntity, 0LL);
  this->fields.frameType = Instance;
  if ( !v116 )
    goto LABEL_252;
  UserServantCollectionEntity__getFriendShipRankInfo(v116, friendshipRank, &this->fields.friendshipMax, 0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank[0], 0LL);
  this->fields.isBase = 0;
  *(_WORD *)&this->fields.isCostOver = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity,
    0LL,
    v117,
    v118,
    v119,
    v120,
    v121,
    v122);
  this->fields.equipServantEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v123, v124, v125, v126, v127, v128);
  this->fields.equipIdList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v129, v130, v131, v132, v133, v134);
  for ( i = 0; ; ++i )
  {
    v153 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v153 = BalanceConfig_TypeInfo;
    }
    if ( i >= v153->static_fields->DeckMemberMax )
      break;
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, i, 0LL);
    if ( !Instance )
      goto LABEL_252;
    v136 = (PartyOrganizationListViewItem_o *)Instance;
    if ( *(_QWORD *)(Instance + 112) )
    {
      v137 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_252;
      v138 = *(_OWORD *)&v137->fields.id.fields.fakeValue;
      *(_OWORD *)&v283.fields.currentCryptoKey = *(_OWORD *)&v137->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v283.fields.fakeValue = v138;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v281 = v283;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v281, 0LL);
      v139 = v136->fields.userServantEntity;
      if ( !v139 )
        goto LABEL_252;
      v140 = *(_OWORD *)&v139->fields.id.fields.fakeValue;
      v141 = Instance;
      *(_OWORD *)&v280.fields.currentCryptoKey = *(_OWORD *)&v139->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v280.fields.fakeValue = v140;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v280, 0LL);
      if ( v141 == Instance )
      {
        this->fields.isSame = 0;
        this->fields.isBase = num == i;
        this->fields.partyIndex = i;
        EquipList = PartyOrganizationListViewItem__GetEquipList(v136, 0LL);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v155);
        break;
      }
      if ( num != i )
      {
        v142 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_252;
        v143 = *(_QWORD *)&v142[2].fields.currentCryptoKey;
        v144 = *(_QWORD *)&v142[2].fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v294.fields.currentCryptoKey = v143;
        *(_QWORD *)&v294.fields.fakeValue = v144;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v294, 0LL);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v136->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_252;
        v146 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(servantEntity[2], 0LL);
        if ( v146 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else if ( this->fields.commonRestrictionId == -1 )
        {
          v147 = v136->fields.servantEntity;
          if ( !v147 )
            goto LABEL_252;
          v149 = *(_QWORD *)&v147->fields.baseSvtId.fields.currentCryptoKey;
          v148 = *(_QWORD *)&v147->fields.baseSvtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v295.fields.currentCryptoKey = v149;
          *(_QWORD *)&v295.fields.fakeValue = v148;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v295, 0LL);
          if ( !*p_servantEntity )
            goto LABEL_252;
          v150 = Instance;
          v151 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_servantEntity)[2], 0LL);
          if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
          }
          IncludedRestrictionIds = CommonRestrictionMaster__GetIncludedRestrictionIds(v150, v151, 0LL);
          if ( (IncludedRestrictionIds & 0x80000000) == 0 )
            this->fields.commonRestrictionId = IncludedRestrictionIds;
        }
      }
    }
  }
  if ( (this->fields.partyIndex & 0x80000000) != 0 )
  {
    Instance = (int64_t)*p_baseItem;
    if ( !*p_baseItem )
      goto LABEL_252;
    cost = partyItem->fields.cost;
    Instance = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL);
    if ( !*p_servantEntity )
      goto LABEL_252;
    v157 = cost - Instance;
    v60 = this;
    this->fields.isCostOver = v157 + (*p_servantEntity)[9].fields.fakeValue > partyItem->fields.maxCost;
  }
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_252;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v158 = v60->fields.userServantEntity;
  v60->fields.isLock = Instance & 1;
  if ( !v158 )
    goto LABEL_252;
  IsChoice = UserServantEntity__IsChoice(v158, 0LL);
  *(_WORD *)&v60->fields.isSwapLock = 0;
  *(_WORD *)&v60->fields.isLockMode = 0;
  v60->fields.isChoice = IsChoice;
  v60->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_252;
  v160 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_252;
  v161 = *(_OWORD *)&v160->fields.id.fields.fakeValue;
  v162 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v283.fields.currentCryptoKey = *(_OWORD *)&v160->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v283.fields.fakeValue = v161;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v279 = v283;
  v163 = v162 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v279, 0LL);
  v164 = this;
  v165 = v163;
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isPush = v165;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_252;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  v166 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v166 )
    goto LABEL_252;
  IsLeave = UserServantEntity__IsLeave(v166, 0LL);
  this->fields.isEventUpVal = 0;
  this->fields.isLeave = IsLeave;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v168);
  v169 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v169 )
    goto LABEL_252;
  Instance = UserServantEntity__getUniqueSvtRestriction_21657540(
               v169,
               this->fields.questRestrictionInfo,
               partyItem,
               num,
               this->fields.partyIndex,
               0LL);
  v170 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v170 )
    goto LABEL_252;
  IsUniqueIndividualityRestriction_21657940 = UserServantEntity__IsUniqueIndividualityRestriction_21657940(
                                                v170,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                this->fields.partyIndex,
                                                0LL);
  this->fields.isFatigureRecover = 0;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_21657940;
  this->fields.fatigureTime = -1LL;
  v173 = this->fields.questRestrictionInfo;
  if ( v173 && v173->fields.isFatigure )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_252;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !*p_questRestrictionInfo )
      goto LABEL_252;
    v174 = (UserEventServantFatigueMaster_o *)Instance;
    eventId = (*p_questRestrictionInfo)->fields.eventId;
    v176 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v177 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v296.fields.currentCryptoKey = v176;
    *(_QWORD *)&v296.fields.fakeValue = v177;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v296, 0LL);
    if ( !v174 )
      goto LABEL_252;
    if ( UserEventServantFatigueMaster__GetFatigueInfo(
           v174,
           &recoverAt,
           &this->fields.isFatigureRecover,
           eventId,
           Instance,
           0LL) )
    {
      v178 = recoverAt;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v179 = v178 <= NetworkManager__getTime(0LL);
      v164 = this;
      if ( !v179 )
        this->fields.fatigureTime = recoverAt;
    }
  }
  AllOutBattleAlreadyUsed = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(v164, v172);
  v181 = v164->fields.questRestrictionInfo;
  v164->fields._IsAllOutBattle_k__BackingField = AllOutBattleAlreadyUsed;
  if ( v181 && v181->fields.isDataLostBattle )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !*p_questRestrictionInfo || !Master_WarQuestSelectionMaster )
      goto LABEL_252;
    Instance = UserEventDataLostMaster__TryGetEntity(
                 (UserEventDataLostMaster_o *)Master_WarQuestSelectionMaster,
                 &entity,
                 Instance,
                 (*p_questRestrictionInfo)->fields.dataLostBattleId,
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      v183 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_252;
      v184 = entity;
      v186 = *(_QWORD *)&v183->fields.svtId.fields.currentCryptoKey;
      v185 = *(_QWORD *)&v183->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v297.fields.currentCryptoKey = v186;
      *(_QWORD *)&v297.fields.fakeValue = v185;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v297, 0LL);
      if ( !v184 )
        goto LABEL_252;
      Instance = UserEventDataLostEntity__IsRestart(v184, Instance, 0LL);
      v187 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_252;
      v188 = entity;
      v190 = *(_QWORD *)&v187->fields.svtId.fields.currentCryptoKey;
      v189 = *(_QWORD *)&v187->fields.svtId.fields.fakeValue;
      if ( (Instance & 1) != 0 )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v298.fields.currentCryptoKey = v190;
        *(_QWORD *)&v298.fields.fakeValue = v189;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v298, 0LL);
        if ( !v188 )
          goto LABEL_252;
        v164->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(v188, Instance, 0LL);
      }
      else
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v305.fields.currentCryptoKey = v190;
        *(_QWORD *)&v305.fields.fakeValue = v189;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v305, 0LL);
        if ( !v188 )
          goto LABEL_252;
        if ( UserEventDataLostEntity__IsDataLost(v188, Instance, 0LL) )
          v164->fields._IsDataLost_k__BackingField = 1;
      }
    }
  }
  else
  {
    v164->fields._IsDataLost_k__BackingField = 0;
    v164->fields._TimesToRestart_k__BackingField = -1;
  }
  if ( *p_questRestrictionInfo )
    v191 = (*p_questRestrictionInfo)->fields.eventId;
  else
    v191 = -1;
  if ( !v164->fields.isBase )
  {
    LODWORD(partyIndex) = v164->fields.partyIndex;
    if ( ((unsigned int)partyIndex & 0x80000000) == 0 )
      goto LABEL_138;
  }
  Instance = (int64_t)PartyListViewItem__GetMember(partyItem, num, 0LL);
  if ( !Instance )
    goto LABEL_252;
  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(EquipSvtId, 0LL) >= 1 )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v193 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_252;
    v194 = Instance;
    v196 = *(_QWORD *)&v193->fields.svtId.fields.currentCryptoKey;
    v195 = *(_QWORD *)&v193->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v299.fields.currentCryptoKey = v196;
    *(_QWORD *)&v299.fields.fakeValue = v195;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v299, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_252;
    v197 = Instance;
    Rarity = UserServantEntity__getRarity(*p_userServantEntity, 0LL);
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, num, 0LL);
    if ( !Instance )
      goto LABEL_252;
    v300 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v300, 0LL);
    if ( !v194 )
      goto LABEL_252;
    p_skillName = (System_String_o **)&v289;
    p_actMaxRarity = &v288;
    v202 = v197;
    v203 = Rarity;
LABEL_154:
    v164->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                     (PartyOrganizationUtility_o *)Instance,
                                     p_skillName,
                                     p_actMaxRarity,
                                     v202,
                                     v203,
                                     Instance,
                                     v191,
                                     v199);
    goto LABEL_155;
  }
  partyIndex = (const MethodInfo *)(unsigned int)v164->fields.partyIndex;
  if ( ((unsigned int)partyIndex & 0x80000000) == 0 )
  {
LABEL_138:
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, (int32_t)partyIndex, 0LL);
    if ( !Instance )
      goto LABEL_252;
    v204 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v204, 0LL) < 1 )
      goto LABEL_155;
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v205 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_252;
    v206 = Instance;
    v208 = *(_QWORD *)&v205->fields.svtId.fields.currentCryptoKey;
    v207 = *(_QWORD *)&v205->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v301.fields.currentCryptoKey = v208;
    *(_QWORD *)&v301.fields.fakeValue = v207;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v301, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_252;
    v209 = Instance;
    v210 = UserServantEntity__getRarity(*p_userServantEntity, 0LL);
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, v164->fields.partyIndex, 0LL);
    if ( !Instance )
      goto LABEL_252;
    v302 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v302, 0LL);
    if ( !v206 )
      goto LABEL_252;
    p_skillName = &skillName;
    p_actMaxRarity = &actMaxRarity;
    v202 = v209;
    v203 = v210;
    goto LABEL_154;
  }
LABEL_155:
  v211 = v164->fields.questRestrictionInfo;
  v164->fields._IsDispSvtPoint_k__BackingField = 0;
  v164->fields._SvtPointRank_k__BackingField = 0;
  v164->fields._SvtPoint_k__BackingField = 0;
  if ( v211 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !Instance )
      goto LABEL_252;
    v212 = (EventServantPointRankMaster_o *)Instance;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v191, 0LL) )
    {
      this->fields._IsDispSvtPoint_k__BackingField = 1;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v213 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_252;
      v214 = *(_OWORD *)&v213->fields.userId.fields.fakeValue;
      v215 = (UserEventServantPointMaster_o *)Instance;
      *(_OWORD *)&v283.fields.currentCryptoKey = *(_OWORD *)&v213->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v283.fields.fakeValue = v214;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v278 = v283;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v278, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_252;
      v216 = Instance;
      Instance = UserServantEntity__getSvtId(*p_userServantEntity, 0LL);
      if ( !v215 )
        goto LABEL_252;
      p_SvtPoint_k__BackingField = &this->fields._SvtPoint_k__BackingField;
      if ( UserEventServantPointMaster__TryGetEntity(v215, &v285, v216, v191, Instance, 0LL) )
      {
        Instance = (int64_t)v285;
        if ( !v285 )
          goto LABEL_252;
        *p_SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v285, 0LL);
      }
      Instance = (int64_t)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_252;
      v218 = *p_SvtPoint_k__BackingField;
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
      EnableEntity = EventServantPointRankMaster__GetEnableEntity(v212, v191, v218, SvtId, 0LL);
      if ( EnableEntity )
        this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
    }
  }
  if ( this->fields._PartyListViewItemMenuKind_k__BackingField == 9 )
  {
    v221 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v221,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    v222 = baseDeckItemList;
    if ( !baseDeckItemList )
      goto LABEL_252;
    v223 = this;
    this->fields._MaxWave_k__BackingField = *(_QWORD *)&baseDeckItemList->max_length;
    v224 = *(_QWORD *)&baseDeckItemList->max_length;
    if ( (int)v224 < 1 )
      goto LABEL_204;
    v225 = 0LL;
    v226 = 1;
    do
    {
      if ( v225 >= (unsigned int)v224 )
      {
        v269 = sub_B2C460(Instance);
        sub_B2C400(v269, 0LL);
      }
      v227 = v222->m_Items[v225];
      for ( j = 0; ; ++j )
      {
        Instance = (int64_t)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (int64_t)BalanceConfig_TypeInfo;
        }
        if ( j >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 160LL) )
          break;
        if ( !v227 )
          goto LABEL_252;
        Instance = (int64_t)PartyListViewItem__GetMember(v227, j, 0LL);
        if ( !Instance )
          goto LABEL_252;
        v229 = (PartyOrganizationListViewItem_o *)Instance;
        if ( *(_QWORD *)(Instance + 112) )
        {
          v230 = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v230, 0LL);
          if ( !v221 )
            goto LABEL_252;
          System_Collections_Generic_List_int___Add(
            v221,
            Instance,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          if ( v226 )
          {
            v231 = *p_userServantEntity;
            if ( !*p_userServantEntity )
              goto LABEL_252;
            v232 = v229->fields.userServantEntity;
            if ( !v232 )
              goto LABEL_252;
            v233 = *(_OWORD *)&v232->fields.id.fields.fakeValue;
            *(_OWORD *)&v277.fields.currentCryptoKey = *(_OWORD *)&v232->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v277.fields.fakeValue = v233;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_44761692(&v231->fields.id, &v277, 0LL) )
            {
              v234 = PartyOrganizationListViewItem__GetEquipList(v229, 0LL);
              PartyServantListViewItem__SetEquipStatus(this, v234, v235);
              this->fields._OrganizedWave_k__BackingField = v226;
              v226 = 0;
            }
          }
        }
      }
      v222 = baseDeckItemList;
      ++v225;
      if ( v226 )
        ++v226;
      else
        v226 = 0;
      LODWORD(v224) = baseDeckItemList->max_length;
    }
    while ( (__int64)v225 < (int)v224 );
    v223 = this;
    if ( v226 )
    {
LABEL_204:
      v237 = *(_QWORD *)&v223->fields.svtId.fields.currentCryptoKey;
      v236 = *(_QWORD *)&v223->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v303.fields.currentCryptoKey = v237;
      *(_QWORD *)&v303.fields.fakeValue = v236;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v303, 0LL);
      if ( !v221 )
        goto LABEL_252;
      v238 = System_Collections_Generic_List_int___Contains(
               v221,
               Instance,
               (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
      v223 = this;
      if ( v238 )
        this->fields.isSame = 1;
    }
  }
  else
  {
    v223 = this;
    this->fields._OrganizedWave_k__BackingField = 0;
  }
  v239 = v223->fields.questRestrictionInfo;
  v240 = v223;
  v223->fields._FriendshipUpVal_k__BackingField = 0;
  if ( v239 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_252;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    if ( !Instance )
      goto LABEL_252;
    FriendshipUpCampaigns = EventCampaignMaster__GetFriendshipUpCampaigns((EventCampaignMaster_o *)Instance, 0LL);
    if ( FriendshipUpCampaigns )
    {
      v242 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FriendshipUpCampaigns;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_252;
      v243 = (EventQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventQuestMaster___);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v283,
        v242,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
      v284 = *(System_Collections_Generic_List_Enumerator_T__o *)&v283.fields.currentCryptoKey;
      while ( 1 )
      {
        v244 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 &v284,
                 (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( (v244 & 1) == 0 )
          break;
        current = (EventCampaignEntity_o *)v284.fields.current;
        if ( !v284.fields.current )
          sub_B2C434(v244, v245);
        monitor = (System_Int32_array *)v284.fields.current[2].monitor;
        if ( !monitor || !monitor->max_length )
          goto LABEL_228;
        v248 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          sub_B2C434(v244, v245);
        v250 = *(_QWORD *)&v248->fields.svtId.fields.currentCryptoKey;
        v249 = *(_QWORD *)&v248->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v304.fields.currentCryptoKey = v250;
        *(_QWORD *)&v304.fields.fakeValue = v249;
        v251 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v304, 0LL);
        v244 = System_Array__IndexOf_int_(monitor, v251, (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
        if ( (v244 & 0x80000000) == 0 )
        {
LABEL_228:
          if ( !*p_questRestrictionInfo )
            sub_B2C434(v244, v245);
          if ( !v243 )
            sub_B2C434(v244, v245);
          if ( EventQuestMaster__IsExistQuest(
                 v243,
                 current->fields.eventId,
                 (*p_questRestrictionInfo)->fields.questId,
                 (*p_questRestrictionInfo)->fields.questPhase,
                 0LL) )
          {
            this->fields._FriendshipUpVal_k__BackingField = EventCampaignEntity__GetFriendshipBonusValue(current, 0LL);
            break;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v284,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
      v240 = this;
    }
  }
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_252;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v252 = v240->fields.userServantEntity;
  v240->fields.dispLimitCount = Instance;
  if ( !v252 )
    goto LABEL_252;
  SkillCategoryIdList = (System_Int32_array **)UserServantEntity__GetSkillCategoryIdList(v252, -1, 0LL);
  v240->fields.skillCategoryIdList = (struct System_Int32_array *)SkillCategoryIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v240->fields.skillCategoryIdList,
    SkillCategoryIdList,
    v254,
    v255,
    v256,
    v257,
    v258,
    v259);
  Instance = (int64_t)v240->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_252;
  TreasureDeviceCategoryIdList = (System_Int32_array **)UserServantEntity__GetTreasureDeviceCategoryIdList(
                                                          (UserServantEntity_o *)Instance,
                                                          0,
                                                          0LL);
  v240->fields.tdCategoryIdList = (struct System_Int32_array *)TreasureDeviceCategoryIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v240->fields.tdCategoryIdList,
    TreasureDeviceCategoryIdList,
    v261,
    v262,
    v263,
    v264,
    v265,
    v266);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_252;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_252;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        v240->fields.classId,
                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_252;
  v240->fields.priority = *(_DWORD *)(Instance + 48);
  PartyServantListViewItem__InitAfterSecondSort(v240, partyIndex);
  Instance = (int64_t)v240->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_252;
  v267 = BalanceConfig_TypeInfo;
  v268 = *(_DWORD *)(Instance + 276);
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v267 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  this->fields.hpReinforceValue = v267->static_fields->StatusUpAdjustHp * v268;
  if ( !Instance )
    goto LABEL_252;
  this->fields.atkReinforceValue = v267->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.amountSortValue = -1LL;
  if ( !Instance
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (int64_t)*p_iconLabelInfo3) == 0) )
  {
LABEL_252:
    sub_B2C434(Instance, partyIndex);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewItem___ctor_32356396(
        PartyServantListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userServantEntity,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t num,
        int32_t tutorialMode,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  IconLabelInfo_o *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  IconLabelInfo_o *v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  IconLabelInfo_o *v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  int64_t Instance; // x0
  const MethodInfo *v52; // x1
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct UserServantEntity_o **p_userServantEntity; // x22
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v81; // x21
  __int64 v82; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v83; // x20
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // x27
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  ServantLimitMaster_o *v92; // x20
  struct UserServantEntity_o *v93; // x8
  int32_t v94; // w21
  ServantLimitEntity_o *v95; // x20
  struct UserServantEntity_o *v96; // x8
  __int128 v97; // q1
  UserServantCollectionMaster_o *v98; // x21
  int64_t v99; // x26
  UserServantCollectionEntity_o *v100; // x21
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
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
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  int32_t v120; // w28
  PartyOrganizationListViewItem_o *v121; // x20
  struct UserServantEntity_o *v122; // x8
  __int128 v123; // q0
  struct UserServantEntity_o *v124; // x8
  __int128 v125; // q0
  int64_t v126; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v127; // x8
  __int64 v128; // x21
  __int64 v129; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *servantEntity; // x8
  int v131; // w21
  struct ServantEntity_o *v132; // x8
  __int64 v133; // x20
  __int64 v134; // x21
  int32_t v135; // w20
  int32_t v136; // w21
  System_Int64_array *EquipList; // x0
  const MethodInfo *v138; // x2
  int32_t cost; // w20
  UserServantEntity_o *v140; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v142; // x8
  bool IsLeave; // w0
  const MethodInfo *v144; // x1
  UserServantEntity_o *v145; // x8
  UserServantEntity_o *v146; // x8
  bool IsUniqueIndividualityRestriction_21657940; // w0
  const MethodInfo *v148; // x1
  struct QuestRestrictionInfo_o *v149; // x8
  UserEventServantFatigueMaster_o *v150; // x21
  int32_t eventId; // w23
  __int64 v152; // x24
  __int64 v153; // x25
  int64_t v154; // x20
  UserServantEntity_o *v155; // x8
  UserServantEntity_o *v156; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  int v171; // w20
  BalanceConfig_c *v172; // x8
  struct PartyOrganizationListViewItem_o **p_baseItem; // [xsp+0h] [xbp-110h]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+8h] [xbp-108h]
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+10h] [xbp-100h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+18h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v177; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v178; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v179; // [xsp+60h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v180; // [xsp+80h] [xbp-90h]
  int64_t recoverAt; // [xsp+A8h] [xbp-68h] BYREF
  int32_t friendshipRank[3]; // [xsp+B4h] [xbp-5Ch] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v183; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v184; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v185; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v186; // 0:x0.16

  if ( (byte_418B7FA & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&CommonRestrictionMaster_TypeInfo, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v19);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v21);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v22);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v23);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v24);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v25);
    sub_B2C35C(&NetworkManager_TypeInfo, v26);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    byte_418B7FA = 1;
  }
  friendshipRank[0] = 0;
  recoverAt = 0LL;
  v30 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v30, 0LL);
  this->fields.iconLabelInfo1 = v30;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v37, 0LL);
  this->fields.iconLabelInfo2 = v37;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v44, 0LL);
  this->fields.iconLabelInfo3 = v44;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo3,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_96;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, num, 0LL);
  this->fields.baseItem = MemberItem;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseItem,
    (System_Int32_array **)MemberItem,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  baseItem = this->fields.baseItem;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_96;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0LL;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  if ( !this->fields.userServantEntity )
    goto LABEL_96;
  p_baseItem = &this->fields.baseItem;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v82 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v81 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v83 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v183.fields.currentCryptoKey = v82;
  *(_QWORD *)&v183.fields.fakeValue = v81;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v183, 0LL);
  if ( !v83 )
    goto LABEL_96;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v83,
                                       Instance,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  v92 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.svtId, 0LL);
  v93 = this->fields.userServantEntity;
  if ( !v93 )
    goto LABEL_96;
  v94 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v93->fields.limitCount, 0LL);
  if ( !v92 )
    goto LABEL_96;
  v95 = ServantLimitMaster__GetEntity(v92, v94, Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v96 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_96;
  v97 = *(_OWORD *)&v96->fields.userId.fields.fakeValue;
  v98 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v180.fields.currentCryptoKey = *(_OWORD *)&v96->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v180.fields.fakeValue = v97;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v179 = v180;
  v99 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v179, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.svtId, 0LL);
  if ( !v98 )
    goto LABEL_96;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v98, v99, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_96;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !v95 )
    goto LABEL_96;
  this->fields.rarityId = v95->fields.rarity;
  if ( !userServantEntity )
    goto LABEL_96;
  v100 = (UserServantCollectionEntity_o *)Instance;
  Instance = UserServantEntity__getFrameType(userServantEntity, 0LL);
  this->fields.frameType = Instance;
  if ( !v100 )
    goto LABEL_96;
  UserServantCollectionEntity__getFriendShipRankInfo(v100, friendshipRank, &this->fields.friendshipMax, 0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank[0], 0LL);
  this->fields.isBase = 0;
  *(_WORD *)&this->fields.isCostOver = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity,
    0LL,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  this->fields.equipServantEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v107, v108, v109, v110, v111, v112);
  this->fields.equipIdList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v113, v114, v115, v116, v117, v118);
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_96;
  v120 = 0;
  while ( v120 < (signed int)memberItemList->max_length )
  {
    Instance = (int64_t)WarBoardPartyListViewItem__GetMemberItem(partyItem, v120, 0LL);
    if ( !Instance )
      goto LABEL_96;
    v121 = (PartyOrganizationListViewItem_o *)Instance;
    if ( *(_QWORD *)(Instance + 112) )
    {
      v122 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_96;
      v123 = *(_OWORD *)&v122->fields.id.fields.fakeValue;
      *(_OWORD *)&v180.fields.currentCryptoKey = *(_OWORD *)&v122->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v180.fields.fakeValue = v123;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v178 = v180;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v178, 0LL);
      v124 = v121->fields.userServantEntity;
      if ( !v124 )
        goto LABEL_96;
      v125 = *(_OWORD *)&v124->fields.id.fields.fakeValue;
      v126 = Instance;
      *(_OWORD *)&v177.fields.currentCryptoKey = *(_OWORD *)&v124->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v177.fields.fakeValue = v125;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v177, 0LL);
      if ( v126 == Instance )
      {
        this->fields.isSame = 0;
        this->fields.isBase = num == v120;
        this->fields.partyIndex = v120;
        EquipList = PartyOrganizationListViewItem__GetEquipList(v121, 0LL);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v138);
        break;
      }
      if ( num != v120 )
      {
        v127 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_96;
        v129 = *(_QWORD *)&v127[2].fields.currentCryptoKey;
        v128 = *(_QWORD *)&v127[2].fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v184.fields.currentCryptoKey = v129;
        *(_QWORD *)&v184.fields.fakeValue = v128;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v184, 0LL);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v121->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_96;
        v131 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(servantEntity[2], 0LL);
        if ( v131 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else if ( this->fields.commonRestrictionId == -1 )
        {
          v132 = v121->fields.servantEntity;
          if ( !v132 )
            goto LABEL_96;
          v134 = *(_QWORD *)&v132->fields.baseSvtId.fields.currentCryptoKey;
          v133 = *(_QWORD *)&v132->fields.baseSvtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v185.fields.currentCryptoKey = v134;
          *(_QWORD *)&v185.fields.fakeValue = v133;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v185, 0LL);
          if ( !*p_servantEntity )
            goto LABEL_96;
          v135 = Instance;
          v136 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_servantEntity)[2], 0LL);
          if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
          }
          Instance = CommonRestrictionMaster__GetIncludedRestrictionIds(v135, v136, 0LL);
          if ( (Instance & 0x80000000) == 0 )
            this->fields.commonRestrictionId = Instance;
        }
      }
    }
    memberItemList = partyItem->fields.memberItemList;
    ++v120;
    if ( !memberItemList )
      goto LABEL_96;
  }
  if ( (this->fields.partyIndex & 0x80000000) != 0 )
  {
    Instance = (int64_t)*p_baseItem;
    if ( !*p_baseItem )
      goto LABEL_96;
    cost = partyItem->fields.cost;
    Instance = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL);
    if ( !*p_servantEntity )
      goto LABEL_96;
    this->fields.isCostOver = cost - (int)Instance + (*p_servantEntity)[9].fields.fakeValue > partyItem->fields.maxCost;
  }
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_96;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v140 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v140 )
    goto LABEL_96;
  IsChoice = UserServantEntity__IsChoice(v140, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  *(_DWORD *)&this->fields.isLockMode = 0;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_96;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  v142 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v142 )
    goto LABEL_96;
  IsLeave = UserServantEntity__IsLeave(v142, 0LL);
  this->fields.isEventUpVal = 0;
  this->fields.isLeave = IsLeave;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v144);
  v145 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v145 )
    goto LABEL_96;
  Instance = UserServantEntity__getUniqueSvtRestriction_21657540(
               v145,
               this->fields.questRestrictionInfo,
               0LL,
               num,
               this->fields.partyIndex,
               0LL);
  v146 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v146 )
    goto LABEL_96;
  IsUniqueIndividualityRestriction_21657940 = UserServantEntity__IsUniqueIndividualityRestriction_21657940(
                                                v146,
                                                this->fields.questRestrictionInfo,
                                                0LL,
                                                num,
                                                this->fields.partyIndex,
                                                0LL);
  this->fields.isFatigureRecover = 0;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_21657940;
  this->fields.fatigureTime = -1LL;
  v149 = this->fields.questRestrictionInfo;
  if ( v149 && v149->fields.isFatigure )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
      if ( *p_questRestrictionInfo )
      {
        v150 = (UserEventServantFatigueMaster_o *)Instance;
        eventId = (*p_questRestrictionInfo)->fields.eventId;
        v153 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v152 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v186.fields.currentCryptoKey = v153;
        *(_QWORD *)&v186.fields.fakeValue = v152;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v186, 0LL);
        if ( v150 )
        {
          if ( UserEventServantFatigueMaster__GetFatigueInfo(
                 v150,
                 &recoverAt,
                 &this->fields.isFatigureRecover,
                 eventId,
                 Instance,
                 0LL) )
          {
            v154 = recoverAt;
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            if ( v154 > NetworkManager__getTime(0LL) )
              this->fields.fatigureTime = recoverAt;
          }
          goto LABEL_81;
        }
      }
    }
LABEL_96:
    sub_B2C434(Instance, v52);
  }
LABEL_81:
  Instance = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v148);
  v155 = this->fields.userServantEntity;
  this->fields._IsAllOutBattle_k__BackingField = Instance & 1;
  if ( !v155 )
    goto LABEL_96;
  Instance = UserServantEntity__getDispLimitCount(v155, 0, 0LL);
  v156 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v156 )
    goto LABEL_96;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v156, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v158,
    v159,
    v160,
    v161,
    v162,
    v163);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_96;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v165,
    v166,
    v167,
    v168,
    v169,
    v170);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_96;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_96;
  this->fields.priority = *(_DWORD *)(Instance + 48);
  PartyServantListViewItem__InitAfterSecondSort(this, v52);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_96;
  v171 = *(_DWORD *)(Instance + 276);
  v172 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v172 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  this->fields.hpReinforceValue = v172->static_fields->StatusUpAdjustHp * v171;
  if ( !Instance )
    goto LABEL_96;
  this->fields.atkReinforceValue = v172->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_96;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_96;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo3;
  if ( !*p_iconLabelInfo3 )
    goto LABEL_96;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


bool __fastcall PartyServantListViewItem__ChkQuestRestriction(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  PartyServantListViewItem_o *v2; // x19
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v5; // x21
  __int64 v6; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v7; // x8
  int32_t v8; // w21
  int32_t v9; // w22
  struct UserServantEntity_o *v10; // x8
  struct PartyOrganizationListViewItem_o *baseItem; // x9
  QuestRestrictionInfo_o *v12; // x20
  __int64 v13; // x21
  __int64 v14; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v15; // x8
  int32_t v16; // w21
  int32_t v17; // w22
  QuestRestrictionInfo_o *v18; // x20
  __int64 v19; // x21
  __int64 v20; // x22
  struct PartyOrganizationListViewItem_o *v21; // x8
  struct PartyOrganizationListViewItem_o *v22; // x8
  struct UserServantEntity_o *v23; // x8
  QuestRestrictionInfo_o *v24; // x20
  __int64 v25; // x21
  __int64 v26; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v27; // x8
  int32_t v28; // w21
  int32_t v29; // w22
  struct PartyOrganizationListViewItem_o *v30; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  v2 = this;
  if ( (byte_418B7FB & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_418B7FB = 1;
  }
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_41;
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v32.fields.currentCryptoKey = v6;
  *(_QWORD *)&v32.fields.fakeValue = v5;
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v32, 0LL);
  v7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
  if ( !v7 )
    goto LABEL_41;
  v8 = (int)this;
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v7[6], 0LL);
  if ( !v2->fields.userServantEntity )
    goto LABEL_41;
  v9 = (int)this;
  this = (PartyServantListViewItem_o *)UserServantEntity__getDispLimitCount(v2->fields.userServantEntity, 0, 0LL);
  v10 = v2->fields.userServantEntity;
  if ( !v10 )
    goto LABEL_41;
  baseItem = v2->fields.baseItem;
  if ( !baseItem )
    goto LABEL_41;
  if ( QuestRestrictionInfo__IsRestriction_31224308(
         questRestrictionInfo,
         &v2->fields.isQuestRestrictionWhole,
         v8,
         v9,
         (int32_t)this,
         v10->fields.lv,
         baseItem->fields._InitPos_k__BackingField,
         0LL) )
  {
    return 1;
  }
  this = (PartyServantListViewItem_o *)v2->fields.questRestrictionInfo;
  if ( !this )
    goto LABEL_41;
  if ( QuestRestrictionInfo__IsSupportOnly((QuestRestrictionInfo_o *)this, 0LL) )
    return 1;
  v12 = v2->fields.questRestrictionInfo;
  v13 = *(_QWORD *)&v2->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&v2->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v33.fields.currentCryptoKey = v13;
  *(_QWORD *)&v33.fields.fakeValue = v14;
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v33, 0LL);
  v15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
  if ( !v15 )
    goto LABEL_41;
  v16 = (int)this;
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v15[6], 0LL);
  if ( !v2->fields.userServantEntity )
    goto LABEL_41;
  v17 = (int)this;
  this = (PartyServantListViewItem_o *)UserServantEntity__getDispLimitCount(v2->fields.userServantEntity, 0, 0LL);
  if ( !v12 )
    goto LABEL_41;
  if ( QuestRestrictionInfo__GetFixedMyServantSingleRestriction(
         v12,
         v16,
         v17,
         (int32_t)this,
         v2->fields.memberIndex,
         0LL) )
  {
    return 1;
  }
  v18 = v2->fields.questRestrictionInfo;
  v19 = *(_QWORD *)&v2->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&v2->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v34.fields.currentCryptoKey = v19;
  *(_QWORD *)&v34.fields.fakeValue = v20;
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v34, 0LL);
  v21 = v2->fields.baseItem;
  if ( !v21 || !v18 )
    goto LABEL_41;
  this = (PartyServantListViewItem_o *)QuestRestrictionInfo__IsServantNumAndFixedServantPositionRestriction(
                                         v18,
                                         (int32_t)this,
                                         v21->fields._InitPos_k__BackingField,
                                         0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 1;
  v22 = v2->fields.baseItem;
  if ( !v22 )
    goto LABEL_41;
  if ( !v22->fields.isMyServantOrNpcRestriction )
    return 0;
  v23 = v2->fields.userServantEntity;
  if ( !v23 )
    goto LABEL_41;
  v24 = v2->fields.questRestrictionInfo;
  v26 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v35.fields.currentCryptoKey = v26;
  *(_QWORD *)&v35.fields.fakeValue = v25;
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v35, 0LL);
  v27 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
  if ( !v27
    || (v28 = (int)this,
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                               v27[6],
                                               0LL),
        !v2->fields.userServantEntity)
    || (v29 = (int)this,
        this = (PartyServantListViewItem_o *)UserServantEntity__getDispLimitCount(v2->fields.userServantEntity, 0, 0LL),
        (v30 = v2->fields.baseItem) == 0LL)
    || !v24 )
  {
LABEL_41:
    sub_B2C434(this, method);
  }
  return QuestRestrictionInfo__IsRestrictionServantIndividuality(
           v24,
           v28,
           v29,
           (int32_t)this,
           v30->fields._InitPos_k__BackingField,
           0,
           0LL);
}


void __fastcall PartyServantListViewItem__ClearFatigure(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  this->fields.fatigureTime = -1LL;
}


void __fastcall PartyServantListViewItem__Finalize(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall PartyServantListViewItem__GetAllOutBattleAlreadyUsed(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t allOutBattleGroupNo; // w20
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x22
  __int64 v11; // x23
  UserEventAlloutBattleMaster_o *v12; // x21
  struct QuestRestrictionInfo_o *v13; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_418B800 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418B800 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = questRestrictionInfo->fields.allOutBattleGroupNo;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (UserEventAlloutBattleMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v15, 0LL);
  v13 = this->fields.questRestrictionInfo;
  if ( !v13 || !v12 )
LABEL_14:
    sub_B2C434(Instance, v8);
  return UserEventAlloutBattleMaster__IsAlreadyUsedServant(
           v12,
           (int32_t)Instance,
           v13->fields.eventId,
           allOutBattleGroupNo,
           0LL);
}


System_Int64_array *__fastcall PartyServantListViewItem__GetEquipList(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.equipIdList;
}


EventUpValSetupInfo_o *__fastcall PartyServantListViewItem__GetEventUpValSetupInfo(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.setupInfo;
}


bool __fastcall PartyServantListViewItem__GetNpInfo(
        PartyServantListViewItem_o *this,
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

  if ( (byte_418B803 & 1) == 0 )
  {
    sub_B2C35C(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_418B803 = 1;
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


System_String_o *__fastcall PartyServantListViewItem__GetRestrictionMessage(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t commonRestrictionId; // w19

  if ( (byte_418B7FF & 1) == 0 )
  {
    sub_B2C35C(&CommonRestrictionMaster_TypeInfo, method);
    byte_418B7FF = 1;
  }
  commonRestrictionId = this->fields.commonRestrictionId;
  if ( (commonRestrictionId & 0x80000000) != 0 )
    return 0LL;
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  }
  return CommonRestrictionMaster__GetRestrictionMessageFromId(commonRestrictionId, 0LL);
}


void __fastcall PartyServantListViewItem__InitAfterSecondSort(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  PartyServantListViewItem_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantEntity_o *v6; // x8
  __int128 v7; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+40h] [xbp-30h]

  v2 = this;
  if ( (byte_418B804 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_418B804 = 1;
  }
  if ( v2->fields.tutorialMode )
  {
    userServantEntity = v2->fields.userServantEntity;
    v2->fields.sortValue1B = 0LL;
    if ( userServantEntity )
    {
      v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v10.fields.fakeValue = v4;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v8 = v10;
      v2->fields.sortValue2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v8, 0LL);
      v2->fields.sortValue2B = 0LL;
      return;
    }
LABEL_16:
    sub_B2C434(this, method);
  }
  servantEntity = v2->fields.servantEntity;
  v2->fields.sortValue1B = v2->fields.priority;
  if ( !servantEntity )
    goto LABEL_16;
  v6 = v2->fields.userServantEntity;
  if ( !v6 )
    goto LABEL_16;
  v2->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)v2->fields.rarityId << 48) | v6->fields.lv;
  v7 = *(_OWORD *)&v6->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&v6->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v9 = v10;
  v2->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v9, 0LL);
}


bool __fastcall PartyServantListViewItem__IsMatchFilter(
        PartyServantListViewItem_o *this,
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
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w21
  UserServantEntity_o *userServantEntity; // x22
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

  if ( (byte_418B7FD & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_B2C35C(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_418B7FD = 1;
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
    goto LABEL_69;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                        (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_69;
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
      goto LABEL_69;
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
    goto LABEL_69;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0LL) )
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
LABEL_69:
    sub_B2C434(ClassGroupFilterKindList, sort);
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
      eventId = questRestrictionInfo->fields.eventId;
    else
      eventId = -1;
    userServantEntity = this->fields.userServantEntity;
    if ( (BYTE3(ServantEventBonusFilterController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    }
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, sort, eventId, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v22 = this->fields.userServantEntity;
    if ( v22 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v22, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_69;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v24 = this->fields.userServantEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v24 )
          goto LABEL_69;
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
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_69;
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
      goto LABEL_69;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_70;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_70:
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
    goto LABEL_69;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_70;
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
    goto LABEL_69;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v20, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarityId, 0LL);
}


void __fastcall PartyServantListViewItem__Modify(
        PartyServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  PartyServantListViewItem__ModifyItem(this, userServantEntity, method);
  PartyServantListViewItem__ModifyLockItem(this, v4);
  PartyServantListViewItem__ModifyChoiceItem(this, v5);
}


void __fastcall PartyServantListViewItem__ModifyChoiceItem(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B2C434(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userServantEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall PartyServantListViewItem__ModifyItem(
        PartyServantListViewItem_o *this,
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
  bool IsLeave; // w0
  const MethodInfo *v12; // x1

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
  IsLeave = UserServantEntity__IsLeave(*p_userServantEntity, 0LL);
  this->fields.isEventUpVal = 0;
  this->fields.isLeave = IsLeave;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  this->fields.isQuestRestriction = PartyServantListViewItem__ChkQuestRestriction(this, v12);
}


void __fastcall PartyServantListViewItem__ModifyLockItem(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B2C434(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall PartyServantListViewItem__SetEquipStatus(
        PartyServantListViewItem_o *this,
        System_Int64_array *equipIdList,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int64_array *v8; // x22
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  BattleServantConfConponent_o *p_equipUserServantEntity; // x20
  BattleServantConfConponent_o *p_equipServantEntity; // x19
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Int64_array **p_equipIdList; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  DataManager_o *Instance; // x0
  Il2CppObject *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  Il2CppObject *v40; // x22
  System_Int32_array **v41; // x1
  BalanceConfig_c *v42; // x0
  __int64 v43; // x1
  struct System_Int64_array *v44; // x8
  System_Int32_array **Entity; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  BattleServantConfConponent_c *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  BattleServantConfConponent_c *v55; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v56; // x20
  Il2CppClass *v57; // x21
  Il2CppClass *v58; // x22
  System_Int32_array **v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  v8 = equipIdList;
  if ( (byte_418B7FC & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, equipIdList);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B2C35C(&long___TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_418B7FC = 1;
  }
  p_equipUserServantEntity = (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity;
  this->fields.equipUserServantEntity = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  p_equipServantEntity = (BattleServantConfConponent_o *)&this->fields.equipServantEntity;
  this->fields.equipServantEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.equipIdList = 0LL;
  p_equipIdList = &this->fields.equipIdList;
  sub_B2C2F8((BattleServantConfConponent_o *)p_equipIdList, 0LL, v26, v27, v28, v29, v30, v31);
  if ( !*(p_equipIdList - 1) )
    return;
  if ( v8 )
  {
    if ( *p_equipIdList == v8 )
      goto LABEL_15;
    v33 = System_Array__Clone((System_Array_o *)v8, 0LL);
    if ( !v33 )
    {
      v41 = 0LL;
      goto LABEL_14;
    }
    v40 = v33;
    v41 = (System_Int32_array **)sub_B2C41C(v33, long___TypeInfo);
    if ( v41 )
      goto LABEL_14;
    sub_B2C728(v40);
  }
  v42 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v42 = BalanceConfig_TypeInfo;
  }
  v41 = (System_Int32_array **)sub_B2C374(long___TypeInfo, (unsigned int)v42->static_fields->SvtEquipMax);
LABEL_14:
  *p_equipIdList = (struct System_Int64_array *)v41;
  sub_B2C2F8((BattleServantConfConponent_o *)p_equipIdList, v41, v34, v35, v36, v37, v38, v39);
  v8 = *p_equipIdList;
  if ( !*p_equipIdList )
    goto LABEL_34;
LABEL_15:
  if ( !v8->max_length )
    goto LABEL_35;
  if ( v8->m_Items[0] < 1 )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  v44 = *p_equipIdList;
  if ( !*p_equipIdList )
    goto LABEL_34;
  if ( !v44->max_length )
  {
LABEL_35:
    v66 = sub_B2C460(Instance);
    sub_B2C400(v66, 0LL);
  }
  if ( !Instance )
    goto LABEL_34;
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                    v44->m_Items[0],
                                    (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_equipUserServantEntity->klass = (BattleServantConfConponent_c *)Entity;
  sub_B2C2F8(p_equipUserServantEntity, Entity, v46, v47, v48, v49, v50, v51);
  klass = p_equipUserServantEntity->klass;
  if ( p_equipUserServantEntity->klass )
  {
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v67.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v67.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v67, 0LL) >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
        v55 = p_equipUserServantEntity->klass;
        if ( p_equipUserServantEntity->klass )
        {
          v56 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
          v58 = v55->_1.declaringType;
          v57 = v55->_1.parent;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v68.fields.currentCryptoKey = v58;
          *(_QWORD *)&v68.fields.fakeValue = v57;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v68, 0LL);
          if ( v56 )
          {
            v59 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v56,
                                           (int32_t)Instance,
                                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            p_equipServantEntity->klass = (BattleServantConfConponent_c *)v59;
            sub_B2C2F8(p_equipServantEntity, v59, v60, v61, v62, v63, v64, v65);
            return;
          }
        }
      }
LABEL_34:
      sub_B2C434(Instance, v43);
    }
  }
}


bool __fastcall PartyServantListViewItem__SetSortValue(
        PartyServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  PartyServantListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v13; // x11
  PartyServantListViewManager_o *v14; // x21
  struct EventUpValSetupInfo_o *setupInfo; // x8
  int32_t bonusKind; // w8
  EventUpValSetupInfo_o *v17; // x21
  PartyServantListViewItem_o *userServantEntity; // x22
  int32_t v19; // w2
  EventUpValSetupInfo_o *v20; // x1
  int32_t bonusKind2; // w8
  int32_t *p_bonusKind2Id; // x8
  int32_t *v23; // x8
  int32_t v24; // w9
  int32_t *p_bonusKindId; // x8
  int32_t bonusKind2Id; // w10
  int32_t bonusKindId; // w22
  __int64 v28; // x23
  __int64 v29; // x24
  const MethodInfo *v30; // x3
  bool IsCampaignServant; // w0
  int32_t v32; // w22
  __int64 v33; // x23
  __int64 v34; // x24
  const MethodInfo *v35; // x3
  PartyServantListViewItem_c *v36; // x0
  _BOOL4 isSwapChoice; // w22
  _BOOL4 isChoice; // w23
  struct PartyServantListViewItem_StaticFields **p_static_fields; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x9
  int v41; // w22
  __int64 PRIORITY_LOWEST; // x8
  PartyServantListViewItem_c *v43; // x0
  __int64 PRIORITY_LOWEST_HEROIN_LEAVE; // x8
  struct ServantEntity_o *servantEntity; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  int32_t cost; // w4
  struct UserServantEntity_o *v48; // x8
  __int128 v49; // q1
  struct UserServantEntity_o *v50; // x8
  int64_t fatigureTime; // x8
  int64_t rarityId; // x2
  struct UserServantEntity_o *v53; // x8
  int64_t hpReinforceValue; // x2
  int32_t adjustAtk; // w3
  int32_t v56; // w1
  struct UserServantEntity_o *v57; // x8
  struct UserServantEntity_o *equipUserServantEntity; // x9
  int64_t hp; // x10
  int32_t v60; // w4
  int32_t adjustHp; // w3
  int32_t v62; // w2
  int32_t v63; // w1
  struct UserServantEntity_o *v64; // x8
  struct UserServantEntity_o *v65; // x9
  int64_t atk; // x10
  struct ServantEntity_o *v67; // x8
  int64_t v68; // x8
  __int64 v69; // x20
  __int64 v70; // x21
  int32_t v71; // w0
  PartyServantListViewItem_o *iconLabelInfo1; // x20
  int64_t v73; // x9
  struct ListViewManager_o *v74; // x8
  __int64 v75; // x11
  struct ListViewManager_o *v76; // x20
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct QuestRestrictionInfo_o *v78; // x8
  int64_t priority; // x10
  struct ServantEntity_o *v80; // x8
  int32_t lv; // w20
  __int64 v82; // x21
  __int64 v83; // x22
  const MethodInfo *v84; // x2
  struct ServantEntity_o *v85; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v87; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16

  v4 = this;
  if ( (byte_418B7FE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantFilterMaster___, sort);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B2C35C(&PartyServantListViewItem_TypeInfo, v8);
    sub_B2C35C(&PartyServantListViewManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    this = (PartyServantListViewItem_o *)sub_B2C35C(&TutorialFlag_TypeInfo, v11);
    byte_418B7FE = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  if ( !sort )
    goto LABEL_204;
  if ( !sort->fields.isBonusKind )
    goto LABEL_74;
  if ( v4->fields.isBase )
    goto LABEL_75;
  manager = sort->fields.manager;
  if ( manager
    && (v13 = *(&PartyServantListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
  {
    if ( (PartyServantListViewManager_c *)manager->klass->_2.typeHierarchy[v13 - 1] == PartyServantListViewManager_TypeInfo )
      v14 = (PartyServantListViewManager_o *)sort->fields.manager;
    else
      v14 = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  setupInfo = v4->fields.setupInfo;
  if ( setupInfo )
  {
    if ( !setupInfo->fields.isQuestStart )
    {
LABEL_28:
      bonusKind2 = sort->fields.bonusKind2;
      if ( bonusKind2 == 3 )
      {
        v4->fields.bonusKind = 3;
        v4->fields.bonusKindId = sort->fields.bonusKind2Id;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
        {
          bonusKindId = v4->fields.bonusKindId;
          v29 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
          v28 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v92.fields.currentCryptoKey = v29;
          *(_QWORD *)&v92.fields.fakeValue = v28;
          this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                 v92,
                                                 0LL);
          if ( !v14 )
            goto LABEL_204;
          IsCampaignServant = PartyServantListViewManager__IsCampaignServant(v14, bonusKindId, (int32_t)this, v30);
LABEL_73:
          v4->fields.isEventUpVal = IsCampaignServant;
          if ( IsCampaignServant )
            goto LABEL_74;
LABEL_136:
          LOBYTE(this) = 0;
          return (char)this;
        }
        goto LABEL_62;
      }
      if ( bonusKind2 != 2 )
      {
        if ( bonusKind2 != 1 )
          goto LABEL_74;
        if ( v4->fields.bonusKind != 1 )
        {
          p_bonusKind2Id = &sort->fields.bonusKind2Id;
LABEL_66:
          v4->fields.bonusKind = 1;
          v19 = *p_bonusKind2Id;
          this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
          v4->fields.bonusKindId = *p_bonusKind2Id;
          if ( !this )
            goto LABEL_204;
          v20 = v4->fields.setupInfo;
LABEL_68:
          IsCampaignServant = UserServantEntity__getEventUpVal_21652144((UserServantEntity_o *)this, v20, v19, 0LL);
          goto LABEL_73;
        }
        p_bonusKind2Id = &sort->fields.bonusKind2Id;
        if ( v4->fields.bonusKindId != sort->fields.bonusKind2Id )
          goto LABEL_66;
        goto LABEL_62;
      }
      if ( v4->fields.bonusKind != 2 )
      {
        p_bonusKindId = &sort->fields.bonusKind2Id;
        goto LABEL_70;
      }
      v24 = v4->fields.bonusKindId;
      p_bonusKindId = &sort->fields.bonusKind2Id;
      bonusKind2Id = sort->fields.bonusKind2Id;
      goto LABEL_50;
    }
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (PartyServantListViewItem_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_28;
    if ( !v14 )
      goto LABEL_204;
    if ( !v14->fields.isQuestStart )
      goto LABEL_28;
  }
  bonusKind = sort->fields.bonusKind;
  if ( bonusKind != 3 )
  {
    if ( bonusKind != 2 )
    {
      if ( bonusKind != 1 )
        goto LABEL_74;
      if ( v4->fields.bonusKind != 1 )
      {
        v4->fields.bonusKind = 1;
        v17 = v4->fields.setupInfo;
        v4->fields.bonusKindId = sort->fields.bonusKindId;
        if ( !v17 )
          goto LABEL_204;
        userServantEntity = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
        this = (PartyServantListViewItem_o *)EventUpValSetupInfo__get_ServantFilterEventId(v17, 0LL);
        if ( !userServantEntity )
          goto LABEL_204;
        v19 = (int)this;
        this = userServantEntity;
        v20 = v17;
        goto LABEL_68;
      }
      goto LABEL_62;
    }
    if ( v4->fields.bonusKind != 2 )
    {
      p_bonusKindId = &sort->fields.bonusKindId;
      goto LABEL_70;
    }
    v24 = v4->fields.bonusKindId;
    p_bonusKindId = &sort->fields.bonusKindId;
    bonusKind2Id = sort->fields.bonusKindId;
LABEL_50:
    if ( v24 != bonusKind2Id )
    {
LABEL_70:
      v4->fields.bonusKind = 2;
      v4->fields.bonusKindId = *p_bonusKindId;
      this = (PartyServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_204;
      this = (PartyServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantFilterMaster___);
      if ( !this )
        goto LABEL_204;
      IsCampaignServant = ServantFilterMaster__IsEnableServant(
                            (ServantFilterMaster_o *)this,
                            v4->fields.svtId,
                            v4->fields.bonusKindId,
                            0LL);
      goto LABEL_73;
    }
    goto LABEL_62;
  }
  if ( v4->fields.bonusKind == 3 )
  {
    v23 = &sort->fields.bonusKindId;
    if ( v4->fields.bonusKindId == sort->fields.bonusKindId )
      goto LABEL_62;
  }
  else
  {
    v23 = &sort->fields.bonusKindId;
  }
  v4->fields.bonusKind = 3;
  v4->fields.bonusKindId = *v23;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
  {
    v32 = v4->fields.bonusKindId;
    v34 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
    v33 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v93.fields.currentCryptoKey = v34;
    *(_QWORD *)&v93.fields.fakeValue = v33;
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v93, 0LL);
    if ( !v14 )
      goto LABEL_204;
    v4->fields.isEventUpVal = PartyServantListViewManager__IsCampaignServant(v14, v32, (int32_t)this, v35);
  }
LABEL_62:
  if ( !v4->fields.isEventUpVal )
    goto LABEL_136;
LABEL_74:
  if ( !v4->fields.isBase )
  {
    this = (PartyServantListViewItem_o *)v4->fields.servantEntity;
    if ( !this )
      goto LABEL_204;
    if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0LL) )
      goto LABEL_136;
    this = (PartyServantListViewItem_o *)v4->fields.servantEntity;
    if ( !this )
      goto LABEL_204;
    if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0LL)
      || (((__int64 (__fastcall *)(PartyServantListViewItem_o *, ListViewSort_o *, void *))v4->klass->vtable._5_IsMatchFilter.method)(
            v4,
            sort,
            v4->klass[1]._1.image) & 1) == 0 )
    {
      goto LABEL_136;
    }
  }
LABEL_75:
  v36 = PartyServantListViewItem_TypeInfo;
  isSwapChoice = v4->fields.isSwapChoice;
  isChoice = v4->fields.isChoice;
  if ( (BYTE3(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo);
    v36 = PartyServantListViewItem_TypeInfo;
  }
  p_static_fields = &v36->static_fields;
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  v41 = isSwapChoice ^ isChoice;
  v4->fields.sortValue0 = v36->static_fields->PRIORITY_NORMAL;
  v4->fields.sortValue0B = v36->static_fields->PRIORITY_NORMAL;
  if ( questRestrictionInfo )
  {
    if ( questRestrictionInfo->fields.isFatigure && sort->fields.isSmartSort )
    {
      if ( v4->fields.fatigureTime >= 1 )
        goto LABEL_82;
      goto LABEL_89;
    }
    if ( questRestrictionInfo->fields.isAllOutBattle && sort->fields.isSmartSort )
    {
      if ( v4->fields._IsAllOutBattle_k__BackingField )
      {
LABEL_82:
        if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v36);
          v36 = PartyServantListViewItem_TypeInfo;
        }
        PRIORITY_LOWEST = v36->static_fields->PRIORITY_LOWEST;
        goto LABEL_91;
      }
LABEL_89:
      if ( !v4->fields.isQuestRestriction )
      {
LABEL_92:
        if ( v41 && sort->fields.isChoiceSort )
        {
          if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v36);
            v36 = PartyServantListViewItem_TypeInfo;
          }
          v4->fields.sortValue0B = v36->static_fields->PRIORITY_TOP;
        }
        this = (PartyServantListViewItem_o *)v4->fields.servantEntity;
        if ( this )
        {
          if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)this, 0LL) )
            goto LABEL_117;
          if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TutorialFlag_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          }
          if ( !TutorialFlag__Get_28617756(126, 0LL) )
            goto LABEL_117;
          v43 = PartyServantListViewItem_TypeInfo;
          if ( (BYTE3(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PartyServantListViewItem_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo);
            v43 = PartyServantListViewItem_TypeInfo;
          }
          PRIORITY_LOWEST_HEROIN_LEAVE = v43->static_fields->PRIORITY_LOWEST_HEROIN_LEAVE;
          goto LABEL_116;
        }
LABEL_204:
        sub_B2C434(this, sort);
      }
      PRIORITY_LOWEST = -1LL;
LABEL_91:
      v4->fields.sortValue0 = PRIORITY_LOWEST;
      goto LABEL_92;
    }
  }
  if ( v41 && sort->fields.isChoiceSort )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      p_static_fields = &PartyServantListViewItem_TypeInfo->static_fields;
    }
    PRIORITY_LOWEST_HEROIN_LEAVE = (*p_static_fields)->PRIORITY_TOP;
  }
  else
  {
    if ( !v4->fields.isQuestRestriction )
      goto LABEL_117;
    PRIORITY_LOWEST_HEROIN_LEAVE = -1LL;
  }
LABEL_116:
  v4->fields.sortValue0 = PRIORITY_LOWEST_HEROIN_LEAVE;
LABEL_117:
  PartyServantListViewItem__InitAfterSecondSort(v4, (const MethodInfo *)sort);
  this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_204;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  servantEntity = v4->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_204;
  this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo3;
  equipServantEntity = v4->fields.equipServantEntity;
  if ( equipServantEntity )
  {
    cost = equipServantEntity->fields.cost;
    if ( !this )
      goto LABEL_204;
  }
  else
  {
    cost = 0;
    if ( !this )
      goto LABEL_204;
  }
  IconLabelInfo__Set_27362128((IconLabelInfo_o *)this, 7, servantEntity->fields.cost, 0, cost, 0, 0, 0, 0LL);
  this = (PartyServantListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v48 = v4->fields.userServantEntity;
      if ( !v48 )
        goto LABEL_204;
      v49 = *(_OWORD *)&v48->fields.id.fields.fakeValue;
      *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&v48->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v90.fields.fakeValue = v49;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v89 = v90;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                             &v89,
                                             0LL);
      v50 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v50 )
        goto LABEL_204;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_204;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v50->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_173;
    case 2:
      rarityId = v4->fields.rarityId;
      v53 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = rarityId;
      if ( !v53 )
        goto LABEL_204;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_204;
      IconLabelInfo__Set_27362128(
        (IconLabelInfo_o *)this,
        36,
        rarityId,
        v53->fields.exceedCount,
        0,
        0,
        0,
        v53->fields.lv,
        0LL);
      goto LABEL_188;
    case 3:
      goto LABEL_182;
    case 4:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_204;
      UserServantEntity__getTreasureDeviceInfo_21659764((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(hpReinforceValue) = tdMaxLv[1];
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = tdMaxLv[1];
      if ( !this )
        goto LABEL_204;
      adjustAtk = tdMaxLv[0];
      v56 = 33;
      goto LABEL_172;
    case 5:
      v57 = v4->fields.userServantEntity;
      if ( !v57 )
        goto LABEL_204;
      equipUserServantEntity = v4->fields.equipUserServantEntity;
      hp = v57->fields.hp;
      if ( equipUserServantEntity )
      {
        this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = equipUserServantEntity->fields.hp + (int)hp;
        if ( !this )
          goto LABEL_204;
        v60 = equipUserServantEntity->fields.hp;
        adjustHp = v57->fields.adjustHp;
        v62 = v57->fields.hp;
        v63 = 46;
        goto LABEL_153;
      }
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_204;
      adjustAtk = v57->fields.adjustHp;
      LODWORD(hpReinforceValue) = v57->fields.hp;
      v56 = 3;
      goto LABEL_172;
    case 6:
      v64 = v4->fields.userServantEntity;
      if ( !v64 )
        goto LABEL_204;
      v65 = v4->fields.equipUserServantEntity;
      atk = v64->fields.atk;
      if ( v65 )
      {
        this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = v65->fields.atk + (int)atk;
        if ( !this )
          goto LABEL_204;
        v60 = v65->fields.atk;
        adjustHp = v64->fields.adjustAtk;
        v62 = v64->fields.atk;
        v63 = 47;
LABEL_153:
        IconLabelInfo__Set_27362128((IconLabelInfo_o *)this, v63, v62, adjustHp, v60, 0, 0, 0, 0LL);
      }
      else
      {
        this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = atk;
        if ( !this )
          goto LABEL_204;
        adjustAtk = v64->fields.adjustAtk;
        LODWORD(hpReinforceValue) = v64->fields.atk;
        v56 = 5;
LABEL_172:
        IconLabelInfo__Set_27362128((IconLabelInfo_o *)this, v56, hpReinforceValue, adjustAtk, 0, 0, 0, 0, 0LL);
      }
LABEL_173:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_204;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
      goto LABEL_185;
    case 7:
      v67 = v4->fields.servantEntity;
      if ( !v67 )
        goto LABEL_204;
      v68 = v67->fields.cost;
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
LABEL_157:
      v4->fields.sortValue1 = v68;
      if ( !this )
        goto LABEL_204;
      goto LABEL_184;
    case 8:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      v68 = -v4->fields.priority;
      goto LABEL_157;
    case 0xA:
      v69 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
      v70 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v94.fields.currentCryptoKey = v69;
      *(_QWORD *)&v94.fields.fakeValue = v70;
      v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v94, 0LL);
      iconLabelInfo1 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v73 = v71;
      friendship = v4->fields.friendship;
      v4->fields.sortValue1 = v73;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                             friendship,
                                             0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_204;
      adjustAtk = v4->fields.friendshipMax;
      LODWORD(hpReinforceValue) = (_DWORD)this;
      v56 = 32;
      this = iconLabelInfo1;
      goto LABEL_172;
    case 0xE:
      this = (PartyServantListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_201;
      v74 = sort->fields.manager;
      if ( v74
        && (v75 = *(&PartyServantListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&v74->klass->_2.bitflags2 + 1) >= (unsigned int)v75) )
      {
        if ( (PartyServantListViewManager_c *)v74->klass->_2.typeHierarchy[v75 - 1] == PartyServantListViewManager_TypeInfo )
          v76 = sort->fields.manager;
        else
          v76 = 0LL;
      }
      else
      {
        v76 = 0LL;
      }
      v83 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v82 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v96.fields.currentCryptoKey = v83;
      *(_QWORD *)&v96.fields.fakeValue = v82;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v96, 0LL);
      if ( !v76 )
        goto LABEL_204;
      this = (PartyServantListViewItem_o *)PartyServantListViewManager__GetAmountSortValue(
                                             (PartyServantListViewManager_o *)v76,
                                             (int32_t)this,
                                             v84);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_201:
      v85 = v4->fields.servantEntity;
      if ( !v85 )
        goto LABEL_204;
      collectionNo = v85->fields.collectionNo;
      v87 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarityId << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v87 )
        goto LABEL_204;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      lv = v87->fields.lv;
      this = (PartyServantListViewItem_o *)v87;
      goto LABEL_186;
    case 0xF:
      hpReinforceValue = v4->fields.hpReinforceValue;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hpReinforceValue;
      if ( !this )
        goto LABEL_204;
      adjustAtk = v4->fields.nowMaxHpReinforceValue;
      v56 = 44;
      goto LABEL_172;
    case 0x10:
      hpReinforceValue = v4->fields.atkReinforceValue;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hpReinforceValue;
      if ( !this )
        goto LABEL_204;
      adjustAtk = v4->fields.nowMaxAtkReinforceValue;
      v56 = 45;
      goto LABEL_172;
    case 0x19:
      v78 = v4->fields.questRestrictionInfo;
      if ( !v78 || !v78->fields.isFatigure )
        goto LABEL_181;
      fatigureTime = v4->fields.fatigureTime;
      goto LABEL_178;
    case 0x1C:
      if ( v4->fields._IsDispSvtPoint_k__BackingField )
      {
        fatigureTime = v4->fields._SvtPoint_k__BackingField;
LABEL_178:
        this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
        v4->fields.sortValue1 = fatigureTime;
        if ( !this )
          goto LABEL_204;
        priority = v4->fields.priority;
        v80 = v4->fields.servantEntity;
        v4->fields.sortValue1B = SLODWORD(this->fields.iconLabelInfo1);
        v4->fields.sortValue2 = priority;
        if ( !v80 )
          goto LABEL_204;
        v4->fields.sortValue2B = ((__int64)v80->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)v4->fields.rarityId << 48) | SLODWORD(this->fields.iconLabelInfo1);
      }
      else
      {
LABEL_181:
        sort->fields.sortKind = 3;
LABEL_182:
        this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_204;
        v4->fields.sortValue1 = SLODWORD(this->fields.iconLabelInfo1);
      }
LABEL_184:
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
LABEL_185:
      lv = (int32_t)this->fields.iconLabelInfo1;
LABEL_186:
      this = (PartyServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo2 )
        goto LABEL_204;
      IconLabelInfo__Set_27362128(iconLabelInfo2, 2, lv, (int32_t)this, 0, 0, 0, 0, 0LL);
LABEL_188:
      LOBYTE(this) = 1;
      return (char)this;
    default:
      return (char)this;
  }
}


bool __fastcall PartyServantListViewItem__SwapChoice(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall PartyServantListViewItem__SwapLock(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


int32_t __fastcall PartyServantListViewItem__get_ClassId(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.classId;
}


int32_t __fastcall PartyServantListViewItem__get_Cost(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_B2C434(this, method);
  return servantEntity->fields.cost;
}


int32_t __fastcall PartyServantListViewItem__get_EquipCost(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *equipServantEntity; // x8

  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity )
    return equipServantEntity->fields.cost;
  else
    return 0;
}


int64_t __fastcall PartyServantListViewItem__get_FatigureTime(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fatigureTime;
}


int32_t __fastcall PartyServantListViewItem__get_FrameType(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.frameType;
}


int32_t __fastcall PartyServantListViewItem__get_FriendshipUpVal(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._FriendshipUpVal_k__BackingField;
}


IconLabelInfo_o *__fastcall PartyServantListViewItem__get_IconInfo1(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall PartyServantListViewItem__get_IconInfo2(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


IconLabelInfo_o *__fastcall PartyServantListViewItem__get_IconInfo3(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo3;
}


bool __fastcall PartyServantListViewItem__get_IsAllOutBattle(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsAllOutBattle_k__BackingField;
}


bool __fastcall PartyServantListViewItem__get_IsBase(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBase;
}


bool __fastcall PartyServantListViewItem__get_IsChoice(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall PartyServantListViewItem__get_IsCostOver(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isCostOver;
}


bool __fastcall PartyServantListViewItem__get_IsDataLost(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsDataLost_k__BackingField;
}


bool __fastcall PartyServantListViewItem__get_IsDispChoice(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice ^ this->fields.isChoice;
}


bool __fastcall PartyServantListViewItem__get_IsDispLock(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock ^ this->fields.isLock;
}


bool __fastcall PartyServantListViewItem__get_IsDispSvtPoint(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDispSvtPoint_k__BackingField;
}


bool __fastcall PartyServantListViewItem__get_IsEnabled(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEnabled;
}


bool __fastcall PartyServantListViewItem__get_IsEquip(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.equipServantEntity != 0LL;
}


bool __fastcall PartyServantListViewItem__get_IsEventJoin(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEventJoin;
}


bool __fastcall PartyServantListViewItem__get_IsFatigureRecover(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFatigureRecover;
}


bool __fastcall PartyServantListViewItem__get_IsInvalidRarity(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isInvalidRarity;
}


bool __fastcall PartyServantListViewItem__get_IsLeave(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLeave;
}


bool __fastcall PartyServantListViewItem__get_IsLock(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall PartyServantListViewItem__get_IsLockMode(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLockMode;
}


bool __fastcall PartyServantListViewItem__get_IsParty(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex >= 0;
}


bool __fastcall PartyServantListViewItem__get_IsPush(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool __fastcall PartyServantListViewItem__get_IsPushMode(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPushMode;
}


bool __fastcall PartyServantListViewItem__get_IsQuestRestriction(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isQuestRestriction;
}


bool __fastcall PartyServantListViewItem__get_IsQuestRestrictionWhole(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isQuestRestrictionWhole;
}


bool __fastcall PartyServantListViewItem__get_IsRestricted(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.commonRestrictionId >= 0;
}


bool __fastcall PartyServantListViewItem__get_IsSame(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSame;
}


bool __fastcall PartyServantListViewItem__get_IsSelectEmpty(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSelectEmpty;
}


bool __fastcall PartyServantListViewItem__get_IsSelectLeader(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSelectLeader;
}


bool __fastcall PartyServantListViewItem__get_IsSelectMode(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSelectMode;
}


bool __fastcall PartyServantListViewItem__get_IsSwapChoice(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall PartyServantListViewItem__get_IsSwapLock(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool __fastcall PartyServantListViewItem__get_IsUniqueIndividualityRestriction(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUniqueIndividualityRestriction;
}


bool __fastcall PartyServantListViewItem__get_IsUniqueSvtRestriction(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUniqueSvtRestriction;
}


bool __fastcall PartyServantListViewItem__get_IsValidDataLostDisplay(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return !this->fields.isLockMode && !this->fields.isSelectMode && !this->fields.isPushMode;
}


int32_t __fastcall PartyServantListViewItem__get_MaxWave(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._MaxWave_k__BackingField;
}


System_String_o *__fastcall PartyServantListViewItem__get_NameText(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_418B802 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B2C35C(&StringLiteral_18395/*"error"*/, v3);
    byte_418B802 = 1;
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


int32_t __fastcall PartyServantListViewItem__get_OrganizedWave(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._OrganizedWave_k__BackingField;
}


int32_t __fastcall PartyServantListViewItem__get_PartyIndex(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex;
}


int32_t __fastcall PartyServantListViewItem__get_PartyListViewItemMenuKind(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._PartyListViewItemMenuKind_k__BackingField;
}


QuestRestrictionInfo_o *__fastcall PartyServantListViewItem__get_QuestRestriction(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.questRestrictionInfo;
}


int32_t __fastcall PartyServantListViewItem__get_RarityId(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rarityId;
}


ServantEntity_o *__fastcall PartyServantListViewItem__get_Servant(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t __fastcall PartyServantListViewItem__get_SvtId(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_418B801 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_418B801 = 1;
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


int32_t __fastcall PartyServantListViewItem__get_SvtPoint(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._SvtPoint_k__BackingField;
}


int32_t __fastcall PartyServantListViewItem__get_SvtPointRank(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SvtPointRank_k__BackingField;
}


int32_t __fastcall PartyServantListViewItem__get_TimesToRestart(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TimesToRestart_k__BackingField;
}


UserServantEntity_o *__fastcall PartyServantListViewItem__get_UserServant(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


System_Int32_array *__fastcall PartyServantListViewItem__get_WaveBattleEnemyClassIds(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_o *baseItem; // x8

  baseItem = this->fields.baseItem;
  if ( !baseItem )
    sub_B2C434(this, method);
  return baseItem->fields._WaveEnemyClassIds_k__BackingField;
}


void __fastcall PartyServantListViewItem__set_FriendshipUpVal(
        PartyServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._FriendshipUpVal_k__BackingField = value;
}


void __fastcall PartyServantListViewItem__set_IsAllOutBattle(
        PartyServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsAllOutBattle_k__BackingField = value;
}


void __fastcall PartyServantListViewItem__set_IsDataLost(
        PartyServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDataLost_k__BackingField = value;
}


void __fastcall PartyServantListViewItem__set_IsDispSvtPoint(
        PartyServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDispSvtPoint_k__BackingField = value;
}


void __fastcall PartyServantListViewItem__set_IsEnabled(
        PartyServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isEnabled = value;
}


void __fastcall PartyServantListViewItem__set_IsLockMode(
        PartyServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isLockMode = value;
}


void __fastcall PartyServantListViewItem__set_IsPush(
        PartyServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isPush = value;
}


void __fastcall PartyServantListViewItem__set_IsPushMode(
        PartyServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isPushMode = value;
}


void __fastcall PartyServantListViewItem__set_IsSelectMode(
        PartyServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isSelectMode = value;
}


void __fastcall PartyServantListViewItem__set_MaxWave(
        PartyServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MaxWave_k__BackingField = value;
}


void __fastcall PartyServantListViewItem__set_OrganizedWave(
        PartyServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._OrganizedWave_k__BackingField = value;
}


void __fastcall PartyServantListViewItem__set_PartyListViewItemMenuKind(
        PartyServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._PartyListViewItemMenuKind_k__BackingField = value;
}


void __fastcall PartyServantListViewItem__set_SvtPoint(
        PartyServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SvtPoint_k__BackingField = value;
}


void __fastcall PartyServantListViewItem__set_SvtPointRank(
        PartyServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SvtPointRank_k__BackingField = value;
}


void __fastcall PartyServantListViewItem__set_TimesToRestart(
        PartyServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TimesToRestart_k__BackingField = value;
}