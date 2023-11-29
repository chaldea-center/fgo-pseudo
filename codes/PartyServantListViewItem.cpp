void __fastcall PartyServantListViewItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewItem_c *v2; // x8

  if ( (byte_40FDE2F & 1) == 0 )
  {
    sub_B16FFC(&PartyServantListViewItem_TypeInfo, v1);
    byte_40FDE2F = 1;
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
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  IconLabelInfo_o *v57; // x21
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  PartyServantListViewItem_o *v64; // x19
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  IconLabelInfo_o *v69; // x21
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct PartyOrganizationListViewItem_o *Member; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  struct PartyOrganizationListViewItem_o *baseItem; // x8
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v104; // x21
  __int64 v105; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v106; // x20
  int32_t v107; // w0
  struct ServantEntity_o *v108; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // x20
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  WebViewManager_o *v116; // x0
  ServantLimitMaster_o *v117; // x21
  int32_t v118; // w0
  struct UserServantEntity_o *v119; // x8
  int32_t v120; // w27
  int32_t v121; // w0
  ServantLimitEntity_o *v122; // x21
  WebViewManager_o *v123; // x0
  WarQuestSelectionMaster_o *v124; // x0
  UserServantEntity_o *v125; // x8
  __int128 v126; // q1
  UserServantCollectionMaster_o *v127; // x27
  int64_t v128; // x24
  int32_t v129; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v131; // x27
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
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  int32_t i; // w28
  PartyOrganizationListViewItem_o *v151; // x0
  PartyOrganizationListViewItem_o *v152; // x21
  UserServantEntity_o *v153; // x8
  __int128 v154; // q0
  int64_t v155; // x0
  struct UserServantEntity_o *v156; // x8
  __int128 v157; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v158; // x8
  __int64 v159; // x24
  __int64 v160; // x27
  int32_t v161; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *servantEntity; // x8
  struct ServantEntity_o *v163; // x8
  __int64 v164; // x21
  __int64 v165; // x24
  int32_t v166; // w0
  int32_t v167; // w21
  int32_t v168; // w27
  int32_t IncludedRestrictionIds; // w0
  BalanceConfig_c *v170; // x0
  System_Int64_array *EquipList; // x0
  const MethodInfo *v172; // x2
  int32_t cost; // w19
  int32_t MargeCost; // w0
  int v175; // w10
  bool IsLock; // w0
  UserServantEntity_o *v177; // x8
  bool IsChoice; // w0
  UserGameEntity_o *SelfUserGame; // x0
  UserServantEntity_o *v180; // x8
  __int128 v181; // q0
  int64_t pushUserSvtId; // x19
  bool v183; // zf
  PartyServantListViewItem_o *v184; // x19
  bool v185; // w8
  UserServantEntity_o *v186; // x0
  bool IsEventJoin; // w0
  UserServantEntity_o *v188; // x8
  bool IsLeave; // w0
  const MethodInfo *v190; // x1
  bool v191; // w0
  UserServantEntity_o *v192; // x8
  bool UniqueSvtRestriction_21450924; // w0
  UserServantEntity_o *v194; // x8
  bool IsUniqueIndividualityRestriction_21451324; // w0
  const MethodInfo *v196; // x1
  struct QuestRestrictionInfo_o *v197; // x8
  WebViewManager_o *v198; // x0
  WarQuestSelectionMaster_o *v199; // x0
  UserEventServantFatigueMaster_o *v200; // x21
  int32_t eventId; // w27
  __int64 v202; // x24
  __int64 v203; // x28
  int32_t v204; // w0
  int64_t v205; // x19
  bool v206; // cc
  bool AllOutBattleAlreadyUsed; // w0
  struct QuestRestrictionInfo_o *v208; // x8
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserServantEntity_o *v211; // x8
  UserEventDataLostEntity_o *v212; // x20
  __int64 v213; // x21
  __int64 v214; // x24
  int32_t v215; // w0
  bool IsRestart; // w0
  UserServantEntity_o *v217; // x9
  UserEventDataLostEntity_o *v218; // x20
  __int64 v219; // x21
  __int64 v220; // x27
  int32_t v221; // w0
  int32_t v222; // w27
  PartyOrganizationListViewItem_o *v223; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr10_16
  __int64 v225; // x2
  __int64 v226; // x3
  __int64 v227; // x4
  clsQuestCheck_o *v228; // x0
  UserServantEntity_o *v229; // x8
  clsQuestCheck_o *v230; // x20
  __int64 v231; // x21
  __int64 v232; // x24
  int32_t v233; // w0
  int32_t v234; // w21
  int32_t Rarity; // w28
  PartyOrganizationListViewItem_o *v236; // x0
  PartyOrganizationUtility_o *v237; // x0
  const MethodInfo *v238; // x7
  System_String_o **p_skillName; // x1
  int *p_actMaxRarity; // x2
  int32_t v241; // w3
  int32_t v242; // w4
  __int64 partyIndex; // x1
  PartyOrganizationListViewItem_o *v244; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v245; // kr20_16
  clsQuestCheck_o *v246; // x0
  UserServantEntity_o *v247; // x8
  clsQuestCheck_o *v248; // x20
  __int64 v249; // x21
  __int64 v250; // x24
  int32_t v251; // w0
  int32_t v252; // w21
  int32_t v253; // w26
  PartyOrganizationListViewItem_o *v254; // x0
  struct QuestRestrictionInfo_o *v255; // x8
  EventServantPointRankMaster_o *v256; // x0
  EventServantPointRankMaster_o *v257; // x20
  WarQuestSelectionMaster_o *v258; // x0
  UserServantEntity_o *v259; // x8
  __int128 v260; // q0
  UserEventServantPointMaster_o *v261; // x21
  int64_t v262; // x0
  int64_t v263; // x25
  int32_t SvtId; // w0
  int32_t *p_SvtPoint_k__BackingField; // x19
  int32_t v266; // w21
  int32_t v267; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  System_Collections_Generic_List_int__o *v269; // x20
  BalanceConfig_c *v270; // x0
  __int64 v271; // x1
  __int64 v272; // x2
  PartyListViewItem_array *v273; // x10
  PartyServantListViewItem_o *v274; // x9
  __int64 v275; // x8
  unsigned __int64 v276; // x24
  int32_t v277; // w19
  PartyListViewItem_o *v278; // x25
  int32_t j; // w26
  PartyOrganizationListViewItem_o *v280; // x0
  PartyOrganizationListViewItem_o *v281; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v282; // kr30_16
  int32_t v283; // w0
  UserServantEntity_o *v284; // x8
  struct UserServantEntity_o *v285; // x9
  __int128 v286; // q0
  System_Int64_array *v287; // x0
  const MethodInfo *v288; // x2
  __int64 v289; // x21
  __int64 v290; // x23
  int32_t v291; // w0
  bool v292; // w0
  struct QuestRestrictionInfo_o *v293; // x8
  PartyServantListViewItem_o *v294; // x19
  WebViewManager_o *v295; // x0
  EventCampaignMaster_o *v296; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *FriendshipUpCampaigns; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v298; // x21
  WebViewManager_o *v299; // x0
  EventQuestMaster_o *v300; // x20
  EventCampaignEntity_o *current; // x21
  System_Int32_array *monitor; // x23
  UserServantEntity_o *v303; // x8
  __int64 v304; // x25
  __int64 v305; // x26
  int32_t v306; // w1
  int32_t DispLimitCount; // w0
  UserServantEntity_o *v308; // x8
  System_Int32_array **SkillCategoryIdList; // x0
  System_String_array **v310; // x2
  System_String_array **v311; // x3
  System_Boolean_array **v312; // x4
  System_Int32_array **v313; // x5
  System_Int32_array *v314; // x6
  System_Int32_array *v315; // x7
  UserServantEntity_o *v316; // x0
  System_Int32_array **TreasureDeviceCategoryIdList; // x0
  System_String_array **v318; // x2
  System_String_array **v319; // x3
  System_Boolean_array **v320; // x4
  System_Int32_array **v321; // x5
  System_Int32_array *v322; // x6
  System_Int32_array *v323; // x7
  WebViewManager_o *v324; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v325; // x0
  WarEntity_o *v326; // x0
  const MethodInfo *v327; // x1
  UserServantEntity_o *v328; // x0
  BalanceConfig_c *v329; // x8
  int32_t adjustHp; // w19
  IconLabelInfo_o *iconLabelInfo1; // x0
  int32_t v332; // w0
  PartyOrganizationListViewItem_o **p_baseItem; // [xsp+8h] [xbp-1C8h]
  IconLabelInfo_o **p_iconLabelInfo3; // [xsp+10h] [xbp-1C0h]
  IconLabelInfo_o **p_iconLabelInfo2; // [xsp+18h] [xbp-1B8h]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+20h] [xbp-1B0h]
  UserServantEntity_o **p_userServantEntity; // [xsp+38h] [xbp-198h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v340; // [xsp+40h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v341; // [xsp+60h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v342; // [xsp+80h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v343; // [xsp+A0h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v344; // [xsp+C0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v345; // [xsp+E0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v346; // [xsp+100h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v347; // [xsp+120h] [xbp-B0h] BYREF
  UserEventServantPointEntity_o *v348; // [xsp+138h] [xbp-98h] BYREF
  int32_t actMaxRarity; // [xsp+144h] [xbp-8Ch] BYREF
  System_String_o *skillName; // [xsp+148h] [xbp-88h] BYREF
  int v351; // [xsp+154h] [xbp-7Ch] BYREF
  __int64 v352; // [xsp+158h] [xbp-78h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+160h] [xbp-70h] BYREF
  int64_t recoverAt; // [xsp+168h] [xbp-68h] BYREF
  int32_t friendshipRank[3]; // [xsp+174h] [xbp-5Ch] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v356; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v357; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v358; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v359; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v360; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v361; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v362; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v363; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v364; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v365; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v366; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v367; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v368; // 0:x0.16

  if ( (byte_40FDE23 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, *(_QWORD *)&index);
    sub_B16FFC(&BalanceConfig_TypeInfo, v16);
    sub_B16FFC(&CommonRestrictionMaster_TypeInfo, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventQuestMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, v20);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v21);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v22);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v23);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v24);
    sub_B16FFC(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v25);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v26);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v27);
    sub_B16FFC(&DataManager_TypeInfo, v28);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v29);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v31);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v32);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v33);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v34);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v35);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v36);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v37);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v38);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v39);
    sub_B16FFC(&NetworkManager_TypeInfo, v40);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v42);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v44);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v45);
    byte_40FDE23 = 1;
  }
  friendshipRank[0] = 0;
  entity = 0LL;
  recoverAt = 0LL;
  v352 = 0LL;
  v351 = 0;
  skillName = 0LL;
  actMaxRarity = 0;
  v348 = 0LL;
  memset(&v347, 0, sizeof(v347));
  v46 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&index,
                             userServantEntity,
                             baseDeckItemList,
                             partyItem);
  IconLabelInfo___ctor(v46, 0LL);
  this->fields.iconLabelInfo1 = v46;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v57 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v53, v54, v55, v56);
  IconLabelInfo___ctor(v57, 0LL);
  this->fields.iconLabelInfo2 = v57;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  v64 = this;
  v69 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v65, v66, v67, v68);
  IconLabelInfo___ctor(v69, 0LL);
  this->fields.iconLabelInfo3 = v69;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo3,
    (System_Int32_array **)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_252;
  Member = PartyListViewItem__GetMember(partyItem, num, 0LL);
  this->fields.baseItem = Member;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseItem,
    (System_Int32_array **)Member,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  baseItem = this->fields.baseItem;
  this->fields._PartyListViewItemMenuKind_k__BackingField = partyItem->fields.menuKind;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_252;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0LL;
  this->fields.userServantEntity = userServantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  p_userServantEntity = &this->fields.userServantEntity;
  if ( !this->fields.userServantEntity )
    goto LABEL_252;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_252;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v105 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v104 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v106 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v356.fields.currentCryptoKey = v105;
  *(_QWORD *)&v356.fields.fakeValue = v104;
  v107 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v356, 0LL);
  if ( !v106 )
    goto LABEL_252;
  v108 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     v106,
                                     v107,
                                     (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v108;
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v108,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  v116 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v116 )
    goto LABEL_252;
  v117 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v116,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v118 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.svtId, 0LL);
  v119 = this->fields.userServantEntity;
  if ( !v119 )
    goto LABEL_252;
  v120 = v118;
  v121 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v119->fields.limitCount, 0LL);
  if ( !v117 )
    goto LABEL_252;
  v122 = ServantLimitMaster__GetEntity(v117, v120, v121, 0LL);
  v123 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v123 )
    goto LABEL_252;
  p_baseItem = &this->fields.baseItem;
  v124 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)v123,
           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v125 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_252;
  v126 = *(_OWORD *)&v125->fields.userId.fields.fakeValue;
  v127 = (UserServantCollectionMaster_o *)v124;
  *(_OWORD *)&v346.fields.currentCryptoKey = *(_OWORD *)&v125->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v346.fields.fakeValue = v126;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v345 = v346;
  v128 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v345, 0LL);
  v129 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.svtId, 0LL);
  if ( !v127 )
    goto LABEL_252;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v127, v128, v129, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_252;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !v122 )
    goto LABEL_252;
  this->fields.rarityId = v122->fields.rarity;
  if ( !userServantEntity )
    goto LABEL_252;
  v131 = EntityDefinitely;
  this->fields.frameType = UserServantEntity__getFrameType(userServantEntity, 0LL);
  if ( !v131 )
    goto LABEL_252;
  UserServantCollectionEntity__getFriendShipRankInfo(v131, friendshipRank, &this->fields.friendshipMax, 0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank[0], 0LL);
  this->fields.isBase = 0;
  *(_WORD *)&this->fields.isCostOver = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity,
    0LL,
    v132,
    v133,
    v134,
    v135,
    v136,
    v137);
  this->fields.equipServantEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v138, v139, v140, v141, v142, v143);
  this->fields.equipIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v144, v145, v146, v147, v148, v149);
  for ( i = 0; ; ++i )
  {
    v170 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v170 = BalanceConfig_TypeInfo;
    }
    if ( i >= v170->static_fields->DeckMemberMax )
      break;
    v151 = PartyListViewItem__GetMember(partyItem, i, 0LL);
    if ( !v151 )
      goto LABEL_252;
    v152 = v151;
    if ( v151->fields.userServantEntity )
    {
      v153 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_252;
      v154 = *(_OWORD *)&v153->fields.id.fields.fakeValue;
      *(_OWORD *)&v346.fields.currentCryptoKey = *(_OWORD *)&v153->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v346.fields.fakeValue = v154;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v344 = v346;
      v155 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v344, 0LL);
      v156 = v152->fields.userServantEntity;
      if ( !v156 )
        goto LABEL_252;
      v157 = *(_OWORD *)&v156->fields.id.fields.fakeValue;
      *(_OWORD *)&v343.fields.currentCryptoKey = *(_OWORD *)&v156->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v343.fields.fakeValue = v157;
      if ( v155 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v343, 0LL) )
      {
        this->fields.isSame = 0;
        this->fields.isBase = num == i;
        this->fields.partyIndex = i;
        EquipList = PartyOrganizationListViewItem__GetEquipList(v152, 0LL);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v172);
        break;
      }
      if ( num != i )
      {
        v158 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_252;
        v159 = *(_QWORD *)&v158[2].fields.currentCryptoKey;
        v160 = *(_QWORD *)&v158[2].fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v357.fields.currentCryptoKey = v159;
        *(_QWORD *)&v357.fields.fakeValue = v160;
        v161 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v357, 0LL);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v152->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_252;
        if ( v161 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(servantEntity[2], 0LL) )
        {
          this->fields.isSame = 1;
        }
        else if ( this->fields.commonRestrictionId == -1 )
        {
          v163 = v152->fields.servantEntity;
          if ( !v163 )
            goto LABEL_252;
          v165 = *(_QWORD *)&v163->fields.baseSvtId.fields.currentCryptoKey;
          v164 = *(_QWORD *)&v163->fields.baseSvtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v358.fields.currentCryptoKey = v165;
          *(_QWORD *)&v358.fields.fakeValue = v164;
          v166 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v358, 0LL);
          if ( !*p_servantEntity )
            goto LABEL_252;
          v167 = v166;
          v168 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_servantEntity)[2], 0LL);
          if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
          }
          IncludedRestrictionIds = CommonRestrictionMaster__GetIncludedRestrictionIds(v167, v168, 0LL);
          if ( (IncludedRestrictionIds & 0x80000000) == 0 )
            this->fields.commonRestrictionId = IncludedRestrictionIds;
        }
      }
    }
  }
  if ( (this->fields.partyIndex & 0x80000000) != 0 )
  {
    if ( !*p_baseItem )
      goto LABEL_252;
    cost = partyItem->fields.cost;
    MargeCost = PartyOrganizationListViewItem__get_MargeCost(*p_baseItem, 0LL);
    if ( !*p_servantEntity )
      goto LABEL_252;
    v175 = cost - MargeCost;
    v64 = this;
    this->fields.isCostOver = v175 + (*p_servantEntity)[9].fields.fakeValue > partyItem->fields.maxCost;
  }
  if ( !*p_userServantEntity )
    goto LABEL_252;
  IsLock = UserServantEntity__IsLock(*p_userServantEntity, 0LL);
  v177 = v64->fields.userServantEntity;
  v64->fields.isLock = IsLock;
  if ( !v177 )
    goto LABEL_252;
  IsChoice = UserServantEntity__IsChoice(v177, 0LL);
  *(_WORD *)&v64->fields.isSwapLock = 0;
  *(_WORD *)&v64->fields.isLockMode = 0;
  v64->fields.isChoice = IsChoice;
  v64->fields.isPushMode = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_252;
  v180 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_252;
  v181 = *(_OWORD *)&v180->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v346.fields.currentCryptoKey = *(_OWORD *)&v180->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v346.fields.fakeValue = v181;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v342 = v346;
  v183 = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v342, 0LL);
  v184 = this;
  v185 = v183;
  v186 = this->fields.userServantEntity;
  this->fields.isPush = v185;
  this->fields.isEnabled = 1;
  if ( !v186 )
    goto LABEL_252;
  IsEventJoin = UserServantEntity__IsEventJoin(v186, 0LL);
  v188 = this->fields.userServantEntity;
  this->fields.isEventJoin = IsEventJoin;
  if ( !v188 )
    goto LABEL_252;
  IsLeave = UserServantEntity__IsLeave(v188, 0LL);
  this->fields.isEventUpVal = 0;
  this->fields.isLeave = IsLeave;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  v191 = PartyServantListViewItem__ChkQuestRestriction(this, v190);
  v192 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = v191;
  if ( !v192 )
    goto LABEL_252;
  UniqueSvtRestriction_21450924 = UserServantEntity__getUniqueSvtRestriction_21450924(
                                    v192,
                                    this->fields.questRestrictionInfo,
                                    partyItem,
                                    num,
                                    this->fields.partyIndex,
                                    0LL);
  v194 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = UniqueSvtRestriction_21450924;
  if ( !v194 )
    goto LABEL_252;
  IsUniqueIndividualityRestriction_21451324 = UserServantEntity__IsUniqueIndividualityRestriction_21451324(
                                                v194,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                this->fields.partyIndex,
                                                0LL);
  this->fields.isFatigureRecover = 0;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_21451324;
  this->fields.fatigureTime = -1LL;
  v197 = this->fields.questRestrictionInfo;
  if ( v197 && v197->fields.isFatigure )
  {
    v198 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v198 )
      goto LABEL_252;
    v199 = DataManager__GetMasterData_WarQuestSelectionMaster_(
             (DataManager_o *)v198,
             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !*p_questRestrictionInfo )
      goto LABEL_252;
    v200 = (UserEventServantFatigueMaster_o *)v199;
    eventId = (*p_questRestrictionInfo)->fields.eventId;
    v202 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v203 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v359.fields.currentCryptoKey = v202;
    *(_QWORD *)&v359.fields.fakeValue = v203;
    v204 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v359, 0LL);
    if ( !v200 )
      goto LABEL_252;
    if ( UserEventServantFatigueMaster__GetFatigueInfo(
           v200,
           &recoverAt,
           &this->fields.isFatigureRecover,
           eventId,
           v204,
           0LL) )
    {
      v205 = recoverAt;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v206 = v205 <= NetworkManager__getTime(0LL);
      v184 = this;
      if ( !v206 )
        this->fields.fatigureTime = recoverAt;
    }
  }
  AllOutBattleAlreadyUsed = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(v184, v196);
  v208 = v184->fields.questRestrictionInfo;
  v184->fields._IsAllOutBattle_k__BackingField = AllOutBattleAlreadyUsed;
  if ( v208 && v208->fields.isDataLostBattle )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !*p_questRestrictionInfo || !Master_WarQuestSelectionMaster )
      goto LABEL_252;
    if ( UserEventDataLostMaster__TryGetEntity(
           (UserEventDataLostMaster_o *)Master_WarQuestSelectionMaster,
           &entity,
           UserId,
           (*p_questRestrictionInfo)->fields.dataLostBattleId,
           0LL) )
    {
      v211 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_252;
      v212 = entity;
      v214 = *(_QWORD *)&v211->fields.svtId.fields.currentCryptoKey;
      v213 = *(_QWORD *)&v211->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v360.fields.currentCryptoKey = v214;
      *(_QWORD *)&v360.fields.fakeValue = v213;
      v215 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v360, 0LL);
      if ( !v212 )
        goto LABEL_252;
      IsRestart = UserEventDataLostEntity__IsRestart(v212, v215, 0LL);
      v217 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_252;
      v218 = entity;
      v220 = *(_QWORD *)&v217->fields.svtId.fields.currentCryptoKey;
      v219 = *(_QWORD *)&v217->fields.svtId.fields.fakeValue;
      if ( IsRestart )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v361.fields.currentCryptoKey = v220;
        *(_QWORD *)&v361.fields.fakeValue = v219;
        v221 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v361, 0LL);
        if ( !v218 )
          goto LABEL_252;
        v184->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(v218, v221, 0LL);
      }
      else
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v368.fields.currentCryptoKey = v220;
        *(_QWORD *)&v368.fields.fakeValue = v219;
        v332 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v368, 0LL);
        if ( !v218 )
          goto LABEL_252;
        if ( UserEventDataLostEntity__IsDataLost(v218, v332, 0LL) )
          v184->fields._IsDataLost_k__BackingField = 1;
      }
    }
  }
  else
  {
    v184->fields._IsDataLost_k__BackingField = 0;
    v184->fields._TimesToRestart_k__BackingField = -1;
  }
  if ( *p_questRestrictionInfo )
    v222 = (*p_questRestrictionInfo)->fields.eventId;
  else
    v222 = -1;
  if ( !v184->fields.isBase )
  {
    LODWORD(partyIndex) = v184->fields.partyIndex;
    if ( (partyIndex & 0x80000000) == 0 )
      goto LABEL_138;
  }
  v223 = PartyListViewItem__GetMember(partyItem, num, 0LL);
  if ( !v223 )
    goto LABEL_252;
  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v223, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(EquipSvtId, 0LL) >= 1 )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v228 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v229 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_252;
    v230 = v228;
    v232 = *(_QWORD *)&v229->fields.svtId.fields.currentCryptoKey;
    v231 = *(_QWORD *)&v229->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v362.fields.currentCryptoKey = v232;
    *(_QWORD *)&v362.fields.fakeValue = v231;
    v233 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v362, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_252;
    v234 = v233;
    Rarity = UserServantEntity__getRarity(*p_userServantEntity, 0LL);
    v236 = PartyListViewItem__GetMember(partyItem, num, 0LL);
    if ( !v236 )
      goto LABEL_252;
    v363 = PartyOrganizationListViewItem__get_EquipSvtId(v236, 0LL);
    v237 = (PartyOrganizationUtility_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v363, 0LL);
    if ( !v230 )
      goto LABEL_252;
    p_skillName = (System_String_o **)&v352;
    p_actMaxRarity = &v351;
    v241 = v234;
    v242 = Rarity;
LABEL_154:
    v184->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                     v237,
                                     p_skillName,
                                     p_actMaxRarity,
                                     v241,
                                     v242,
                                     (int32_t)v237,
                                     v222,
                                     v238);
    goto LABEL_155;
  }
  partyIndex = (unsigned int)v184->fields.partyIndex;
  if ( (partyIndex & 0x80000000) == 0 )
  {
LABEL_138:
    v244 = PartyListViewItem__GetMember(partyItem, partyIndex, 0LL);
    if ( !v244 )
      goto LABEL_252;
    v245 = PartyOrganizationListViewItem__get_EquipSvtId(v244, 0LL);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v245, 0LL) < 1 )
      goto LABEL_155;
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v246 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v247 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_252;
    v248 = v246;
    v250 = *(_QWORD *)&v247->fields.svtId.fields.currentCryptoKey;
    v249 = *(_QWORD *)&v247->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v364.fields.currentCryptoKey = v250;
    *(_QWORD *)&v364.fields.fakeValue = v249;
    v251 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v364, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_252;
    v252 = v251;
    v253 = UserServantEntity__getRarity(*p_userServantEntity, 0LL);
    v254 = PartyListViewItem__GetMember(partyItem, v184->fields.partyIndex, 0LL);
    if ( !v254 )
      goto LABEL_252;
    v365 = PartyOrganizationListViewItem__get_EquipSvtId(v254, 0LL);
    v237 = (PartyOrganizationUtility_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v365, 0LL);
    if ( !v248 )
      goto LABEL_252;
    p_skillName = &skillName;
    p_actMaxRarity = &actMaxRarity;
    v241 = v252;
    v242 = v253;
    goto LABEL_154;
  }
LABEL_155:
  v255 = v184->fields.questRestrictionInfo;
  v184->fields._IsDispSvtPoint_k__BackingField = 0;
  v184->fields._SvtPointRank_k__BackingField = 0;
  v184->fields._SvtPoint_k__BackingField = 0;
  if ( v255 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v256 = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !v256 )
      goto LABEL_252;
    v257 = v256;
    if ( EventServantPointRankMaster__IsEnableEvent(v256, v222, 0LL) )
    {
      this->fields._IsDispSvtPoint_k__BackingField = 1;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v258 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v259 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_252;
      v260 = *(_OWORD *)&v259->fields.userId.fields.fakeValue;
      v261 = (UserEventServantPointMaster_o *)v258;
      *(_OWORD *)&v346.fields.currentCryptoKey = *(_OWORD *)&v259->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v346.fields.fakeValue = v260;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v341 = v346;
      v262 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v341, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_252;
      v263 = v262;
      SvtId = UserServantEntity__getSvtId(*p_userServantEntity, 0LL);
      if ( !v261 )
        goto LABEL_252;
      p_SvtPoint_k__BackingField = &this->fields._SvtPoint_k__BackingField;
      if ( UserEventServantPointMaster__TryGetEntity(v261, &v348, v263, v222, SvtId, 0LL) )
      {
        if ( !v348 )
          goto LABEL_252;
        *p_SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v348, 0LL);
      }
      if ( !*p_userServantEntity )
        goto LABEL_252;
      v266 = *p_SvtPoint_k__BackingField;
      v267 = UserServantEntity__getSvtId(*p_userServantEntity, 0LL);
      EnableEntity = EventServantPointRankMaster__GetEnableEntity(v257, v222, v266, v267, 0LL);
      if ( EnableEntity )
        this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
    }
  }
  if ( this->fields._PartyListViewItemMenuKind_k__BackingField == 9 )
  {
    v269 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                       System_Collections_Generic_List_int__TypeInfo,
                                                       partyIndex,
                                                       v225,
                                                       v226,
                                                       v227);
    System_Collections_Generic_List_int____ctor(
      v269,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    v273 = baseDeckItemList;
    if ( !baseDeckItemList )
      goto LABEL_252;
    v274 = this;
    this->fields._MaxWave_k__BackingField = *(_QWORD *)&baseDeckItemList->max_length;
    v275 = *(_QWORD *)&baseDeckItemList->max_length;
    if ( (int)v275 < 1 )
      goto LABEL_204;
    v276 = 0LL;
    v277 = 1;
    do
    {
      if ( v276 >= (unsigned int)v275 )
      {
        sub_B17100(v270, v271, v272);
        sub_B170A0();
      }
      v278 = v273->m_Items[v276];
      for ( j = 0; ; ++j )
      {
        v270 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v270 = BalanceConfig_TypeInfo;
        }
        if ( j >= v270->static_fields->DeckMainMemberMax )
          break;
        if ( !v278 )
          goto LABEL_252;
        v280 = PartyListViewItem__GetMember(v278, j, 0LL);
        if ( !v280 )
          goto LABEL_252;
        v281 = v280;
        if ( v280->fields.userServantEntity )
        {
          v282 = PartyOrganizationListViewItem__get_SvtId(v280, 0LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          v283 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v282, 0LL);
          if ( !v269 )
            goto LABEL_252;
          System_Collections_Generic_List_int___Add(
            v269,
            v283,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          if ( v277 )
          {
            v284 = *p_userServantEntity;
            if ( !*p_userServantEntity )
              goto LABEL_252;
            v285 = v281->fields.userServantEntity;
            if ( !v285 )
              goto LABEL_252;
            v286 = *(_OWORD *)&v285->fields.id.fields.fakeValue;
            *(_OWORD *)&v340.fields.currentCryptoKey = *(_OWORD *)&v285->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v340.fields.fakeValue = v286;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_44072164(&v284->fields.id, &v340, 0LL) )
            {
              v287 = PartyOrganizationListViewItem__GetEquipList(v281, 0LL);
              PartyServantListViewItem__SetEquipStatus(this, v287, v288);
              this->fields._OrganizedWave_k__BackingField = v277;
              v277 = 0;
            }
          }
        }
      }
      v273 = baseDeckItemList;
      ++v276;
      if ( v277 )
        ++v277;
      else
        v277 = 0;
      LODWORD(v275) = baseDeckItemList->max_length;
    }
    while ( (__int64)v276 < (int)v275 );
    v274 = this;
    if ( v277 )
    {
LABEL_204:
      v290 = *(_QWORD *)&v274->fields.svtId.fields.currentCryptoKey;
      v289 = *(_QWORD *)&v274->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v366.fields.currentCryptoKey = v290;
      *(_QWORD *)&v366.fields.fakeValue = v289;
      v291 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v366, 0LL);
      if ( !v269 )
        goto LABEL_252;
      v292 = System_Collections_Generic_List_int___Contains(
               v269,
               v291,
               (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
      v274 = this;
      if ( v292 )
        this->fields.isSame = 1;
    }
  }
  else
  {
    v274 = this;
    this->fields._OrganizedWave_k__BackingField = 0;
  }
  v293 = v274->fields.questRestrictionInfo;
  v294 = v274;
  v274->fields._FriendshipUpVal_k__BackingField = 0;
  if ( v293 )
  {
    v295 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v295 )
      goto LABEL_252;
    v296 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v295,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    if ( !v296 )
      goto LABEL_252;
    FriendshipUpCampaigns = EventCampaignMaster__GetFriendshipUpCampaigns(v296, 0LL);
    if ( FriendshipUpCampaigns )
    {
      v298 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FriendshipUpCampaigns;
      v299 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v299 )
        goto LABEL_252;
      v300 = (EventQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v299,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventQuestMaster___);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v346,
        v298,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
      v347 = *(System_Collections_Generic_List_Enumerator_T__o *)&v346.fields.currentCryptoKey;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v347,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
      {
        current = (EventCampaignEntity_o *)v347.fields.current;
        if ( !v347.fields.current )
          sub_B170D4();
        monitor = (System_Int32_array *)v347.fields.current[2].monitor;
        if ( !monitor || !monitor->max_length )
          goto LABEL_228;
        v303 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          sub_B170D4();
        v305 = *(_QWORD *)&v303->fields.svtId.fields.currentCryptoKey;
        v304 = *(_QWORD *)&v303->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v367.fields.currentCryptoKey = v305;
        *(_QWORD *)&v367.fields.fakeValue = v304;
        v306 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v367, 0LL);
        if ( (System_Array__IndexOf_int_(monitor, v306, (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
        {
LABEL_228:
          if ( !*p_questRestrictionInfo )
            sub_B170D4();
          if ( !v300 )
            sub_B170D4();
          if ( EventQuestMaster__IsExistQuest(
                 v300,
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
        &v347,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
      v294 = this;
    }
  }
  if ( !*p_userServantEntity )
    goto LABEL_252;
  DispLimitCount = UserServantEntity__getDispLimitCount(*p_userServantEntity, 0, 0LL);
  v308 = v294->fields.userServantEntity;
  v294->fields.dispLimitCount = DispLimitCount;
  if ( !v308 )
    goto LABEL_252;
  SkillCategoryIdList = (System_Int32_array **)UserServantEntity__GetSkillCategoryIdList(v308, -1, 0LL);
  v294->fields.skillCategoryIdList = (struct System_Int32_array *)SkillCategoryIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v294->fields.skillCategoryIdList,
    SkillCategoryIdList,
    v310,
    v311,
    v312,
    v313,
    v314,
    v315);
  v316 = v294->fields.userServantEntity;
  if ( !v316 )
    goto LABEL_252;
  TreasureDeviceCategoryIdList = (System_Int32_array **)UserServantEntity__GetTreasureDeviceCategoryIdList(v316, 0, 0LL);
  v294->fields.tdCategoryIdList = (struct System_Int32_array *)TreasureDeviceCategoryIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v294->fields.tdCategoryIdList,
    TreasureDeviceCategoryIdList,
    v318,
    v319,
    v320,
    v321,
    v322,
    v323);
  v324 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v324 )
    goto LABEL_252;
  v325 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)v324,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !v325 )
    goto LABEL_252;
  v326 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
           v325,
           v294->fields.classId,
           (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !v326 )
    goto LABEL_252;
  v294->fields.priority = v326->fields.bannerId;
  PartyServantListViewItem__InitAfterSecondSort(v294, v327);
  v328 = v294->fields.userServantEntity;
  if ( !v328 )
    goto LABEL_252;
  v329 = BalanceConfig_TypeInfo;
  adjustHp = v328->fields.adjustHp;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v329 = BalanceConfig_TypeInfo;
    v328 = *p_userServantEntity;
  }
  this->fields.hpReinforceValue = v329->static_fields->StatusUpAdjustHp * adjustHp;
  if ( !v328
    || (this->fields.atkReinforceValue = v329->static_fields->StatusUpAdjustAtk * v328->fields.adjustAtk,
        UserServantEntity__getAdjustMaxData(
          v328,
          &this->fields.nowMaxHpReinforceValue,
          &this->fields.nowMaxAtkReinforceValue,
          0LL),
        iconLabelInfo1 = this->fields.iconLabelInfo1,
        this->fields.amountSortValue = -1LL,
        !iconLabelInfo1)
    || (IconLabelInfo__Clear(iconLabelInfo1, 0LL), !*p_iconLabelInfo2)
    || (IconLabelInfo__Clear(*p_iconLabelInfo2, 0LL), !*p_iconLabelInfo3) )
  {
LABEL_252:
    sub_B170D4();
  }
  IconLabelInfo__Clear(*p_iconLabelInfo3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewItem___ctor_32542248(
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
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  IconLabelInfo_o *v41; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  IconLabelInfo_o *v52; // x21
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  UserServantEntity_o **p_userServantEntity; // x22
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v88; // x21
  __int64 v89; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v90; // x20
  int32_t v91; // w0
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // x27
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  WebViewManager_o *v100; // x0
  ServantLimitMaster_o *v101; // x20
  int32_t v102; // w0
  struct UserServantEntity_o *v103; // x8
  int32_t v104; // w21
  int32_t v105; // w0
  ServantLimitEntity_o *v106; // x20
  WebViewManager_o *v107; // x0
  WarQuestSelectionMaster_o *v108; // x0
  UserServantEntity_o *v109; // x8
  __int128 v110; // q1
  UserServantCollectionMaster_o *v111; // x21
  int64_t v112; // x26
  int32_t v113; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v115; // x21
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  int32_t v135; // w28
  PartyOrganizationListViewItem_o *v136; // x0
  PartyOrganizationListViewItem_o *v137; // x20
  UserServantEntity_o *v138; // x8
  __int128 v139; // q0
  int64_t v140; // x0
  struct UserServantEntity_o *v141; // x8
  __int128 v142; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v143; // x8
  __int64 v144; // x21
  __int64 v145; // x26
  int32_t v146; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *servantEntity; // x8
  struct ServantEntity_o *v148; // x8
  __int64 v149; // x20
  __int64 v150; // x21
  int32_t v151; // w0
  int32_t v152; // w20
  int32_t v153; // w21
  int32_t IncludedRestrictionIds; // w0
  System_Int64_array *EquipList; // x0
  const MethodInfo *v156; // x2
  int32_t cost; // w20
  int32_t MargeCost; // w0
  bool IsLock; // w0
  UserServantEntity_o *v160; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v162; // x0
  bool IsEventJoin; // w0
  UserServantEntity_o *v164; // x8
  bool IsLeave; // w0
  const MethodInfo *v166; // x1
  bool v167; // w0
  UserServantEntity_o *v168; // x8
  bool UniqueSvtRestriction_21450924; // w0
  UserServantEntity_o *v170; // x8
  bool IsUniqueIndividualityRestriction_21451324; // w0
  const MethodInfo *v172; // x1
  struct QuestRestrictionInfo_o *v173; // x8
  WebViewManager_o *v174; // x0
  WarQuestSelectionMaster_o *v175; // x0
  UserEventServantFatigueMaster_o *v176; // x21
  int32_t eventId; // w23
  __int64 v178; // x24
  __int64 v179; // x25
  int32_t v180; // w0
  int64_t v181; // x20
  bool AllOutBattleAlreadyUsed; // w0
  UserServantEntity_o *v183; // x8
  int32_t DispLimitCount; // w0
  UserServantEntity_o *v185; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v187; // x2
  System_String_array **v188; // x3
  System_Boolean_array **v189; // x4
  System_Int32_array **v190; // x5
  System_Int32_array *v191; // x6
  System_Int32_array *v192; // x7
  UserServantEntity_o *v193; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v195; // x2
  System_String_array **v196; // x3
  System_Boolean_array **v197; // x4
  System_Int32_array **v198; // x5
  System_Int32_array *v199; // x6
  System_Int32_array *v200; // x7
  WebViewManager_o *v201; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v202; // x0
  WarEntity_o *v203; // x0
  const MethodInfo *v204; // x1
  struct UserServantEntity_o *v205; // x0
  int32_t adjustHp; // w20
  BalanceConfig_c *v207; // x8
  IconLabelInfo_o *iconLabelInfo1; // x0
  PartyOrganizationListViewItem_o **p_baseItem; // [xsp+0h] [xbp-110h]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+8h] [xbp-108h]
  IconLabelInfo_o **p_iconLabelInfo3; // [xsp+10h] [xbp-100h]
  IconLabelInfo_o **p_iconLabelInfo2; // [xsp+18h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v213; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v214; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v215; // [xsp+60h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v216; // [xsp+80h] [xbp-90h]
  int64_t recoverAt; // [xsp+A8h] [xbp-68h] BYREF
  int32_t friendshipRank[3]; // [xsp+B4h] [xbp-5Ch] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v219; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v220; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v221; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v222; // 0:x0.16

  if ( (byte_40FDE24 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&CommonRestrictionMaster_TypeInfo, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v21);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v22);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v23);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v24);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v25);
    sub_B16FFC(&NetworkManager_TypeInfo, v26);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    byte_40FDE24 = 1;
  }
  friendshipRank[0] = 0;
  recoverAt = 0LL;
  v30 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&index,
                             userServantEntity,
                             partyItem,
                             *(_QWORD *)&num);
  IconLabelInfo___ctor(v30, 0LL);
  this->fields.iconLabelInfo1 = v30;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v41 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v37, v38, v39, v40);
  IconLabelInfo___ctor(v41, 0LL);
  this->fields.iconLabelInfo2 = v41;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v52 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v48, v49, v50, v51);
  IconLabelInfo___ctor(v52, 0LL);
  this->fields.iconLabelInfo3 = v52;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo3,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_96;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, num, 0LL);
  this->fields.baseItem = MemberItem;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseItem,
    (System_Int32_array **)MemberItem,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  baseItem = this->fields.baseItem;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_96;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0LL;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  if ( !this->fields.userServantEntity )
    goto LABEL_96;
  p_baseItem = &this->fields.baseItem;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v89 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v88 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v90 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v219.fields.currentCryptoKey = v89;
  *(_QWORD *)&v219.fields.fakeValue = v88;
  v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v219, 0LL);
  if ( !v90 )
    goto LABEL_96;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v90,
                                       v91,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
  v100 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v100 )
    goto LABEL_96;
  v101 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v100,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v102 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.svtId, 0LL);
  v103 = this->fields.userServantEntity;
  if ( !v103 )
    goto LABEL_96;
  v104 = v102;
  v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v103->fields.limitCount, 0LL);
  if ( !v101 )
    goto LABEL_96;
  v106 = ServantLimitMaster__GetEntity(v101, v104, v105, 0LL);
  v107 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v107 )
    goto LABEL_96;
  v108 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)v107,
           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v109 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_96;
  v110 = *(_OWORD *)&v109->fields.userId.fields.fakeValue;
  v111 = (UserServantCollectionMaster_o *)v108;
  *(_OWORD *)&v216.fields.currentCryptoKey = *(_OWORD *)&v109->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v216.fields.fakeValue = v110;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v215 = v216;
  v112 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v215, 0LL);
  v113 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.svtId, 0LL);
  if ( !v111 )
    goto LABEL_96;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v111, v112, v113, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_96;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !v106 )
    goto LABEL_96;
  this->fields.rarityId = v106->fields.rarity;
  if ( !userServantEntity )
    goto LABEL_96;
  v115 = EntityDefinitely;
  this->fields.frameType = UserServantEntity__getFrameType(userServantEntity, 0LL);
  if ( !v115 )
    goto LABEL_96;
  UserServantCollectionEntity__getFriendShipRankInfo(v115, friendshipRank, &this->fields.friendshipMax, 0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank[0], 0LL);
  this->fields.isBase = 0;
  *(_WORD *)&this->fields.isCostOver = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity,
    0LL,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
  this->fields.equipServantEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v122, v123, v124, v125, v126, v127);
  this->fields.equipIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v128, v129, v130, v131, v132, v133);
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_96;
  v135 = 0;
  while ( v135 < (signed int)memberItemList->max_length )
  {
    v136 = WarBoardPartyListViewItem__GetMemberItem(partyItem, v135, 0LL);
    if ( !v136 )
      goto LABEL_96;
    v137 = v136;
    if ( v136->fields.userServantEntity )
    {
      v138 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_96;
      v139 = *(_OWORD *)&v138->fields.id.fields.fakeValue;
      *(_OWORD *)&v216.fields.currentCryptoKey = *(_OWORD *)&v138->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v216.fields.fakeValue = v139;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v214 = v216;
      v140 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v214, 0LL);
      v141 = v137->fields.userServantEntity;
      if ( !v141 )
        goto LABEL_96;
      v142 = *(_OWORD *)&v141->fields.id.fields.fakeValue;
      *(_OWORD *)&v213.fields.currentCryptoKey = *(_OWORD *)&v141->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v213.fields.fakeValue = v142;
      if ( v140 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v213, 0LL) )
      {
        this->fields.isSame = 0;
        this->fields.isBase = num == v135;
        this->fields.partyIndex = v135;
        EquipList = PartyOrganizationListViewItem__GetEquipList(v137, 0LL);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v156);
        break;
      }
      if ( num != v135 )
      {
        v143 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_96;
        v145 = *(_QWORD *)&v143[2].fields.currentCryptoKey;
        v144 = *(_QWORD *)&v143[2].fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v220.fields.currentCryptoKey = v145;
        *(_QWORD *)&v220.fields.fakeValue = v144;
        v146 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v220, 0LL);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v137->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_96;
        if ( v146 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(servantEntity[2], 0LL) )
        {
          this->fields.isSame = 1;
        }
        else if ( this->fields.commonRestrictionId == -1 )
        {
          v148 = v137->fields.servantEntity;
          if ( !v148 )
            goto LABEL_96;
          v150 = *(_QWORD *)&v148->fields.baseSvtId.fields.currentCryptoKey;
          v149 = *(_QWORD *)&v148->fields.baseSvtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v221.fields.currentCryptoKey = v150;
          *(_QWORD *)&v221.fields.fakeValue = v149;
          v151 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v221, 0LL);
          if ( !*p_servantEntity )
            goto LABEL_96;
          v152 = v151;
          v153 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_servantEntity)[2], 0LL);
          if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
          }
          IncludedRestrictionIds = CommonRestrictionMaster__GetIncludedRestrictionIds(v152, v153, 0LL);
          if ( (IncludedRestrictionIds & 0x80000000) == 0 )
            this->fields.commonRestrictionId = IncludedRestrictionIds;
        }
      }
    }
    memberItemList = partyItem->fields.memberItemList;
    ++v135;
    if ( !memberItemList )
      goto LABEL_96;
  }
  if ( (this->fields.partyIndex & 0x80000000) != 0 )
  {
    if ( !*p_baseItem )
      goto LABEL_96;
    cost = partyItem->fields.cost;
    MargeCost = PartyOrganizationListViewItem__get_MargeCost(*p_baseItem, 0LL);
    if ( !*p_servantEntity )
      goto LABEL_96;
    this->fields.isCostOver = cost - MargeCost + (*p_servantEntity)[9].fields.fakeValue > partyItem->fields.maxCost;
  }
  if ( !*p_userServantEntity )
    goto LABEL_96;
  IsLock = UserServantEntity__IsLock(*p_userServantEntity, 0LL);
  v160 = this->fields.userServantEntity;
  this->fields.isLock = IsLock;
  if ( !v160 )
    goto LABEL_96;
  IsChoice = UserServantEntity__IsChoice(v160, 0LL);
  v162 = this->fields.userServantEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  *(_DWORD *)&this->fields.isLockMode = 0;
  this->fields.isEnabled = 1;
  if ( !v162 )
    goto LABEL_96;
  IsEventJoin = UserServantEntity__IsEventJoin(v162, 0LL);
  v164 = this->fields.userServantEntity;
  this->fields.isEventJoin = IsEventJoin;
  if ( !v164 )
    goto LABEL_96;
  IsLeave = UserServantEntity__IsLeave(v164, 0LL);
  this->fields.isEventUpVal = 0;
  this->fields.isLeave = IsLeave;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  v167 = PartyServantListViewItem__ChkQuestRestriction(this, v166);
  v168 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = v167;
  if ( !v168 )
    goto LABEL_96;
  UniqueSvtRestriction_21450924 = UserServantEntity__getUniqueSvtRestriction_21450924(
                                    v168,
                                    this->fields.questRestrictionInfo,
                                    0LL,
                                    num,
                                    this->fields.partyIndex,
                                    0LL);
  v170 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = UniqueSvtRestriction_21450924;
  if ( !v170 )
    goto LABEL_96;
  IsUniqueIndividualityRestriction_21451324 = UserServantEntity__IsUniqueIndividualityRestriction_21451324(
                                                v170,
                                                this->fields.questRestrictionInfo,
                                                0LL,
                                                num,
                                                this->fields.partyIndex,
                                                0LL);
  this->fields.isFatigureRecover = 0;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_21451324;
  this->fields.fatigureTime = -1LL;
  v173 = this->fields.questRestrictionInfo;
  if ( v173 && v173->fields.isFatigure )
  {
    v174 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( v174 )
    {
      v175 = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)v174,
               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
      if ( *p_questRestrictionInfo )
      {
        v176 = (UserEventServantFatigueMaster_o *)v175;
        eventId = (*p_questRestrictionInfo)->fields.eventId;
        v179 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v178 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v222.fields.currentCryptoKey = v179;
        *(_QWORD *)&v222.fields.fakeValue = v178;
        v180 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v222, 0LL);
        if ( v176 )
        {
          if ( UserEventServantFatigueMaster__GetFatigueInfo(
                 v176,
                 &recoverAt,
                 &this->fields.isFatigureRecover,
                 eventId,
                 v180,
                 0LL) )
          {
            v181 = recoverAt;
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            if ( v181 > NetworkManager__getTime(0LL) )
              this->fields.fatigureTime = recoverAt;
          }
          goto LABEL_81;
        }
      }
    }
LABEL_96:
    sub_B170D4();
  }
LABEL_81:
  AllOutBattleAlreadyUsed = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v172);
  v183 = this->fields.userServantEntity;
  this->fields._IsAllOutBattle_k__BackingField = AllOutBattleAlreadyUsed;
  if ( !v183 )
    goto LABEL_96;
  DispLimitCount = UserServantEntity__getDispLimitCount(v183, 0, 0LL);
  v185 = this->fields.userServantEntity;
  this->fields.dispLimitCount = DispLimitCount;
  if ( !v185 )
    goto LABEL_96;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v185, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v187,
    v188,
    v189,
    v190,
    v191,
    v192);
  v193 = this->fields.userServantEntity;
  if ( !v193 )
    goto LABEL_96;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(v193, 0, 0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v195,
    v196,
    v197,
    v198,
    v199,
    v200);
  v201 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v201 )
    goto LABEL_96;
  v202 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)v201,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !v202 )
    goto LABEL_96;
  v203 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
           v202,
           this->fields.classId,
           (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !v203 )
    goto LABEL_96;
  this->fields.priority = v203->fields.bannerId;
  PartyServantListViewItem__InitAfterSecondSort(this, v204);
  v205 = this->fields.userServantEntity;
  if ( !v205 )
    goto LABEL_96;
  adjustHp = v205->fields.adjustHp;
  v207 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v207 = BalanceConfig_TypeInfo;
    v205 = *p_userServantEntity;
  }
  this->fields.hpReinforceValue = v207->static_fields->StatusUpAdjustHp * adjustHp;
  if ( !v205 )
    goto LABEL_96;
  this->fields.atkReinforceValue = v207->static_fields->StatusUpAdjustAtk * v205->fields.adjustAtk;
  UserServantEntity__getAdjustMaxData(
    v205,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields.amountSortValue = -1LL;
  if ( !iconLabelInfo1 )
    goto LABEL_96;
  IconLabelInfo__Clear(iconLabelInfo1, 0LL);
  if ( !*p_iconLabelInfo2 )
    goto LABEL_96;
  IconLabelInfo__Clear(*p_iconLabelInfo2, 0LL);
  if ( !*p_iconLabelInfo3 )
    goto LABEL_96;
  IconLabelInfo__Clear(*p_iconLabelInfo3, 0LL);
}


bool __fastcall PartyServantListViewItem__ChkQuestRestriction(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w0
  struct UserServantEntity_o *v8; // x8
  int32_t v9; // w21
  int32_t v10; // w0
  int32_t v11; // w22
  int32_t DispLimitCount; // w0
  struct UserServantEntity_o *v13; // x8
  struct PartyOrganizationListViewItem_o *baseItem; // x9
  QuestRestrictionInfo_o *v15; // x0
  QuestRestrictionInfo_o *v16; // x20
  __int64 v17; // x21
  __int64 v18; // x22
  int32_t v19; // w0
  struct UserServantEntity_o *v20; // x8
  int32_t v21; // w21
  int32_t v22; // w0
  int32_t v23; // w22
  int32_t v24; // w0
  QuestRestrictionInfo_o *v25; // x20
  __int64 v26; // x21
  __int64 v27; // x22
  int32_t v28; // w0
  struct PartyOrganizationListViewItem_o *v29; // x8
  struct PartyOrganizationListViewItem_o *v30; // x8
  struct UserServantEntity_o *v31; // x8
  QuestRestrictionInfo_o *v32; // x20
  __int64 v33; // x21
  __int64 v34; // x22
  int32_t v35; // w0
  struct UserServantEntity_o *v36; // x8
  int32_t v37; // w21
  int32_t v38; // w0
  int32_t v39; // w22
  int32_t v40; // w0
  struct PartyOrganizationListViewItem_o *v41; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_40FDE25 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40FDE25 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_41;
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v43.fields.currentCryptoKey = v6;
  *(_QWORD *)&v43.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v43, 0LL);
  v8 = this->fields.userServantEntity;
  if ( !v8 )
    goto LABEL_41;
  v9 = v7;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v8->fields.limitCount, 0LL);
  if ( !this->fields.userServantEntity )
    goto LABEL_41;
  v11 = v10;
  DispLimitCount = UserServantEntity__getDispLimitCount(this->fields.userServantEntity, 0, 0LL);
  v13 = this->fields.userServantEntity;
  if ( !v13 )
    goto LABEL_41;
  baseItem = this->fields.baseItem;
  if ( !baseItem )
    goto LABEL_41;
  if ( QuestRestrictionInfo__IsRestriction_31241596(
         questRestrictionInfo,
         &this->fields.isQuestRestrictionWhole,
         v9,
         v11,
         DispLimitCount,
         v13->fields.lv,
         baseItem->fields._InitPos_k__BackingField,
         0LL) )
  {
    return 1;
  }
  v15 = this->fields.questRestrictionInfo;
  if ( !v15 )
    goto LABEL_41;
  if ( QuestRestrictionInfo__IsSupportOnly(v15, 0LL) )
    return 1;
  v16 = this->fields.questRestrictionInfo;
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v44.fields.currentCryptoKey = v17;
  *(_QWORD *)&v44.fields.fakeValue = v18;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v44, 0LL);
  v20 = this->fields.userServantEntity;
  if ( !v20 )
    goto LABEL_41;
  v21 = v19;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20->fields.limitCount, 0LL);
  if ( !this->fields.userServantEntity )
    goto LABEL_41;
  v23 = v22;
  v24 = UserServantEntity__getDispLimitCount(this->fields.userServantEntity, 0, 0LL);
  if ( !v16 )
    goto LABEL_41;
  if ( QuestRestrictionInfo__GetFixedMyServantSingleRestriction(v16, v21, v23, v24, this->fields.memberIndex, 0LL) )
    return 1;
  v25 = this->fields.questRestrictionInfo;
  v26 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v45.fields.currentCryptoKey = v26;
  *(_QWORD *)&v45.fields.fakeValue = v27;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v45, 0LL);
  v29 = this->fields.baseItem;
  if ( !v29 || !v25 )
    goto LABEL_41;
  if ( QuestRestrictionInfo__IsServantNumAndFixedServantPositionRestriction(
         v25,
         v28,
         v29->fields._InitPos_k__BackingField,
         0LL) )
  {
    return 1;
  }
  v30 = this->fields.baseItem;
  if ( !v30 )
    goto LABEL_41;
  if ( !v30->fields.isMyServantOrNpcRestriction )
    return 0;
  v31 = this->fields.userServantEntity;
  if ( !v31 )
    goto LABEL_41;
  v32 = this->fields.questRestrictionInfo;
  v34 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
  v33 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v46.fields.currentCryptoKey = v34;
  *(_QWORD *)&v46.fields.fakeValue = v33;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v46, 0LL);
  v36 = this->fields.userServantEntity;
  if ( !v36
    || (v37 = v35,
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v36->fields.limitCount, 0LL),
        !this->fields.userServantEntity)
    || (v39 = v38,
        v40 = UserServantEntity__getDispLimitCount(this->fields.userServantEntity, 0, 0LL),
        (v41 = this->fields.baseItem) == 0LL)
    || !v32 )
  {
LABEL_41:
    sub_B170D4();
  }
  return QuestRestrictionInfo__IsRestrictionServantIndividuality(
           v32,
           v37,
           v39,
           v40,
           v41->fields._InitPos_k__BackingField,
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x22
  __int64 v10; // x23
  UserEventAlloutBattleMaster_o *v11; // x21
  int32_t v12; // w0
  struct QuestRestrictionInfo_o *v13; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_40FDE2A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FDE2A = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = questRestrictionInfo->fields.allOutBattleGroupNo;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (UserEventAlloutBattleMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v15, 0LL);
  v13 = this->fields.questRestrictionInfo;
  if ( !v13 || !v11 )
LABEL_14:
    sub_B170D4();
  return UserEventAlloutBattleMaster__IsAlreadyUsedServant(v11, v12, v13->fields.eventId, allOutBattleGroupNo, 0LL);
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

  if ( (byte_40FDE2D & 1) == 0 )
  {
    sub_B16FFC(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_40FDE2D = 1;
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


System_String_o *__fastcall PartyServantListViewItem__GetRestrictionMessage(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t commonRestrictionId; // w19

  if ( (byte_40FDE29 & 1) == 0 )
  {
    sub_B16FFC(&CommonRestrictionMaster_TypeInfo, method);
    byte_40FDE29 = 1;
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
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantEntity_o *v6; // x8
  __int128 v7; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+40h] [xbp-30h]

  if ( (byte_40FDE2E & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40FDE2E = 1;
  }
  if ( this->fields.tutorialMode )
  {
    userServantEntity = this->fields.userServantEntity;
    this->fields.sortValue1B = 0LL;
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
      this->fields.sortValue2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v8, 0LL);
      this->fields.sortValue2B = 0LL;
      return;
    }
LABEL_16:
    sub_B170D4();
  }
  servantEntity = this->fields.servantEntity;
  this->fields.sortValue1B = this->fields.priority;
  if ( !servantEntity )
    goto LABEL_16;
  v6 = this->fields.userServantEntity;
  if ( !v6 )
    goto LABEL_16;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarityId << 48) | v6->fields.lv;
  v7 = *(_OWORD *)&v6->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&v6->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v9 = v10;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v9, 0LL);
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
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassFilterKindList; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *NpTypeFilterKindList; // x0
  ListViewSort_FilterKind_array *v16; // x0
  FilterKindList_c *v17; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *NpEffectFilterKindList; // x0
  ListViewSort_FilterKind_array *v19; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w21
  UserServantEntity_o *userServantEntity; // x22
  __int64 v23; // x2
  ListViewSort_FilterKind_array *v24; // x0
  __int64 v25; // x2
  ListViewSort_FilterKind_array *v26; // x1
  FilterKindList_c *v27; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v29; // x21
  UserServantEntity_o *v31; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v33; // x0
  int32_t v34; // w0
  UserServantEntity_o *v35; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UserServantEntity_o *v43; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  __int64 v52; // x2
  _BOOL4 v53; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v55; // w0

  if ( (byte_40FDE27 & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_B16FFC(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_40FDE27 = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_69;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL) )
  {
    v11 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v11 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v11->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      goto LABEL_69;
    v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             ClassFilterKindList,
                                             (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
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
  NpTypeFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v14->static_fields->NpTypeFilterKindList;
  if ( !NpTypeFilterKindList )
    goto LABEL_69;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           NpTypeFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0LL) )
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
  NpEffectFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v17->static_fields->NpEffectFilterKindList;
  if ( !NpEffectFilterKindList )
LABEL_69:
    sub_B170D4();
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           NpEffectFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL)
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
    v31 = this->fields.userServantEntity;
    if ( v31 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v31, 0, 0LL) )
      {
        v33 = this->fields.userServantEntity;
        if ( !v33 )
          goto LABEL_69;
        v34 = UserServantEntity__getDispLimitCount(v33, 0, 0LL);
        v35 = this->fields.userServantEntity;
        this->fields.dispLimitCount = v34;
        if ( !v35 )
          goto LABEL_69;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v35, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
        v43 = this->fields.userServantEntity;
        if ( !v43 )
          goto LABEL_69;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(v43, 0, 0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
      }
    }
    v24 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v23);
    if ( !v24 )
      goto LABEL_69;
    v26 = v24;
    if ( !v24->max_length )
      goto LABEL_70;
    v24->m_Items[1] = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(sort, v24, 0LL);
    v24 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v52);
    if ( !v24 )
      goto LABEL_69;
    v26 = v24;
    if ( !v24->max_length )
    {
LABEL_70:
      sub_B17100(v24, v26, v25);
      sub_B170A0();
    }
    v24->m_Items[1] = 51;
    v53 = ListViewSort__IsUnSelectedAllTargetFilters(sort, v24, 0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v55 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
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
  v24 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v23);
  if ( !v24 )
    goto LABEL_69;
  v26 = v24;
  if ( !v24->max_length )
    goto LABEL_70;
  v24->m_Items[1] = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v24, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields.isSwapChoice == this->fields.isChoice )
  {
    return 0;
  }
  v27 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v27 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v27->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_69;
  v29 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v29, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v29, 0LL)
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
    sub_B170D4();
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
  bool IsLeave; // w0
  const MethodInfo *v11; // x1

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
  IsLeave = UserServantEntity__IsLeave(*p_userServantEntity, 0LL);
  this->fields.isEventUpVal = 0;
  this->fields.isLeave = IsLeave;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  this->fields.isQuestRestriction = PartyServantListViewItem__ChkQuestRestriction(this, v11);
}


void __fastcall PartyServantListViewItem__ModifyLockItem(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B170D4();
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
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  Il2CppObject *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  Il2CppObject *v42; // x22
  System_Int32_array **v43; // x1
  BalanceConfig_c *v44; // x0
  WebViewManager_o *Instance; // x0
  struct System_Int64_array *v46; // x8
  System_Int32_array **Entity; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  BattleServantConfConponent_c *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  WebViewManager_o *v57; // x0
  WarQuestSelectionMaster_o *v58; // x0
  BattleServantConfConponent_c *v59; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v60; // x20
  Il2CppClass *v61; // x21
  Il2CppClass *v62; // x22
  int32_t v63; // w0
  System_Int32_array **v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  v8 = equipIdList;
  if ( (byte_40FDE26 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, equipIdList);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B16FFC(&long___TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40FDE26 = 1;
  }
  p_equipUserServantEntity = (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity;
  this->fields.equipUserServantEntity = 0LL;
  sub_B16F98(
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.equipIdList = 0LL;
  p_equipIdList = &this->fields.equipIdList;
  sub_B16F98((BattleServantConfConponent_o *)p_equipIdList, 0LL, v26, v27, v28, v29, v30, v31);
  if ( !*(p_equipIdList - 1) )
    return;
  if ( v8 )
  {
    if ( *p_equipIdList == v8 )
      goto LABEL_15;
    v35 = System_Array__Clone((System_Array_o *)v8, 0LL);
    if ( !v35 )
    {
      v43 = 0LL;
      goto LABEL_14;
    }
    v42 = v35;
    v43 = (System_Int32_array **)sub_B170BC(v35, long___TypeInfo);
    if ( v43 )
      goto LABEL_14;
    sub_B173C8(v42);
  }
  v44 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v44 = BalanceConfig_TypeInfo;
  }
  v43 = (System_Int32_array **)sub_B17014(long___TypeInfo, (unsigned int)v44->static_fields->SvtEquipMax, v34);
LABEL_14:
  *p_equipIdList = (struct System_Int64_array *)v43;
  sub_B16F98((BattleServantConfConponent_o *)p_equipIdList, v43, v36, v37, v38, v39, v40, v41);
  v8 = *p_equipIdList;
  if ( !*p_equipIdList )
    goto LABEL_34;
LABEL_15:
  if ( !v8->max_length )
    goto LABEL_35;
  if ( v8->m_Items[0] < 1 )
    return;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v46 = *p_equipIdList;
  if ( !*p_equipIdList )
    goto LABEL_34;
  if ( !v46->max_length )
  {
LABEL_35:
    sub_B17100(MasterData_WarQuestSelectionMaster, v33, v34);
    sub_B170A0();
  }
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_34;
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    v46->m_Items[0],
                                    (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_equipUserServantEntity->klass = (BattleServantConfConponent_c *)Entity;
  sub_B16F98(p_equipUserServantEntity, Entity, v48, v49, v50, v51, v52, v53);
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
    *(_QWORD *)&v71.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v71.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v71, 0LL) >= 1 )
    {
      v57 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( v57 )
      {
        v58 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)v57,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
        v59 = p_equipUserServantEntity->klass;
        if ( p_equipUserServantEntity->klass )
        {
          v60 = (DataMasterBase_WarMaster__WarEntity__int__o *)v58;
          v62 = v59->_1.declaringType;
          v61 = v59->_1.parent;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v72.fields.currentCryptoKey = v62;
          *(_QWORD *)&v72.fields.fakeValue = v61;
          v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v72, 0LL);
          if ( v60 )
          {
            v64 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v60,
                                           v63,
                                           (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            p_equipServantEntity->klass = (BattleServantConfConponent_c *)v64;
            sub_B16F98(p_equipServantEntity, v64, v65, v66, v67, v68, v69, v70);
            return;
          }
        }
      }
LABEL_34:
      sub_B170D4();
    }
  }
}


bool __fastcall PartyServantListViewItem__SetSortValue(
        PartyServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
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
  struct UserServantEntity_o *v18; // x22
  int32_t ServantFilterEventId; // w0
  int32_t v20; // w2
  UserServantEntity_o *userServantEntity; // x0
  EventUpValSetupInfo_o *v22; // x1
  int32_t bonusKind2; // w8
  int32_t *p_bonusKind2Id; // x8
  int32_t *v25; // x8
  int32_t v26; // w9
  int32_t *p_bonusKindId; // x8
  int32_t bonusKind2Id; // w10
  int32_t bonusKindId; // w22
  __int64 v30; // x23
  __int64 v31; // x24
  int32_t v32; // w0
  const MethodInfo *v33; // x3
  bool IsCampaignServant; // w0
  int32_t v35; // w22
  __int64 v36; // x23
  __int64 v37; // x24
  int32_t v38; // w0
  const MethodInfo *v39; // x3
  WebViewManager_o *Instance; // x0
  ServantFilterMaster_o *MasterData_WarQuestSelectionMaster; // x0
  PartyServantListViewItem_c *v42; // x0
  _BOOL4 isSwapChoice; // w22
  _BOOL4 isChoice; // w23
  struct PartyServantListViewItem_StaticFields **p_static_fields; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x9
  int v47; // w22
  int64_t PRIORITY_LOWEST; // x8
  ServantEntity_o *v49; // x0
  PartyServantListViewItem_c *v50; // x0
  int64_t PRIORITY_LOWEST_HEROIN_LEAVE; // x8
  IconLabelInfo_o *iconLabelInfo2; // x0
  struct ServantEntity_o *v53; // x8
  IconLabelInfo_o *iconLabelInfo3; // x0
  struct ServantEntity_o *equipServantEntity; // x9
  int32_t cost; // w4
  bool result; // w0
  struct UserServantEntity_o *v58; // x8
  __int128 v59; // q1
  int64_t v60; // x0
  struct UserServantEntity_o *v61; // x8
  IconLabelInfo_o *iconLabelInfo1; // x0
  ServantEntity_o *servantEntity; // x0
  ServantEntity_o *v64; // x0
  int64_t fatigureTime; // x8
  int64_t rarityId; // x2
  struct UserServantEntity_o *v67; // x8
  IconLabelInfo_o *v68; // x0
  UserServantEntity_o *v69; // x0
  int64_t hpReinforceValue; // x2
  IconLabelInfo_o *v71; // x0
  int32_t adjustAtk; // w3
  int32_t v73; // w1
  struct UserServantEntity_o *v74; // x8
  struct UserServantEntity_o *equipUserServantEntity; // x9
  int64_t hp; // x10
  IconLabelInfo_o *v77; // x0
  int32_t v78; // w4
  int32_t adjustHp; // w3
  int32_t v80; // w2
  int32_t v81; // w1
  struct UserServantEntity_o *v82; // x8
  struct UserServantEntity_o *v83; // x9
  int64_t atk; // x10
  struct ServantEntity_o *v85; // x8
  int64_t v86; // x8
  struct UserServantEntity_o *v87; // x0
  __int64 v88; // x20
  __int64 v89; // x21
  int32_t v90; // w0
  struct IconLabelInfo_o *v91; // x20
  int64_t v92; // x9
  int32_t v93; // w0
  int64_t amountSortValue; // x0
  struct ListViewManager_o *v95; // x8
  __int64 v96; // x11
  struct ListViewManager_o *v97; // x20
  IconLabelInfo_o *v98; // x19
  struct QuestRestrictionInfo_o *v99; // x8
  int64_t priority; // x10
  struct ServantEntity_o *v101; // x8
  int32_t lv; // w20
  int32_t LevelMax; // w0
  __int64 v104; // x21
  __int64 v105; // x22
  int32_t v106; // w0
  const MethodInfo *v107; // x2
  struct ServantEntity_o *v108; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v110; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // 0:x0.16

  if ( (byte_40FDE28 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantFilterMaster___, sort);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B16FFC(&PartyServantListViewItem_TypeInfo, v8);
    sub_B16FFC(&PartyServantListViewManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&TutorialFlag_TypeInfo, v11);
    byte_40FDE28 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  if ( !sort )
    goto LABEL_204;
  if ( !sort->fields.isBonusKind )
    goto LABEL_74;
  if ( this->fields.isBase )
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
  setupInfo = this->fields.setupInfo;
  if ( setupInfo )
  {
    if ( !setupInfo->fields.isQuestStart )
    {
LABEL_28:
      bonusKind2 = sort->fields.bonusKind2;
      if ( bonusKind2 == 3 )
      {
        this->fields.bonusKind = 3;
        this->fields.bonusKindId = sort->fields.bonusKind2Id;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
        {
          bonusKindId = this->fields.bonusKindId;
          v31 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v30 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v114.fields.currentCryptoKey = v31;
          *(_QWORD *)&v114.fields.fakeValue = v30;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v114, 0LL);
          if ( !v14 )
            goto LABEL_204;
          IsCampaignServant = PartyServantListViewManager__IsCampaignServant(v14, bonusKindId, v32, v33);
LABEL_73:
          this->fields.isEventUpVal = IsCampaignServant;
          if ( IsCampaignServant )
            goto LABEL_74;
          return 0;
        }
        goto LABEL_62;
      }
      if ( bonusKind2 != 2 )
      {
        if ( bonusKind2 != 1 )
          goto LABEL_74;
        if ( this->fields.bonusKind != 1 )
        {
          p_bonusKind2Id = &sort->fields.bonusKind2Id;
LABEL_66:
          this->fields.bonusKind = 1;
          v20 = *p_bonusKind2Id;
          userServantEntity = this->fields.userServantEntity;
          this->fields.bonusKindId = *p_bonusKind2Id;
          if ( !userServantEntity )
            goto LABEL_204;
          v22 = this->fields.setupInfo;
LABEL_68:
          IsCampaignServant = UserServantEntity__getEventUpVal_21445528(userServantEntity, v22, v20, 0LL);
          goto LABEL_73;
        }
        p_bonusKind2Id = &sort->fields.bonusKind2Id;
        if ( this->fields.bonusKindId != sort->fields.bonusKind2Id )
          goto LABEL_66;
        goto LABEL_62;
      }
      if ( this->fields.bonusKind != 2 )
      {
        p_bonusKindId = &sort->fields.bonusKind2Id;
        goto LABEL_70;
      }
      v26 = this->fields.bonusKindId;
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
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
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
      if ( this->fields.bonusKind != 1 )
      {
        this->fields.bonusKind = 1;
        v17 = this->fields.setupInfo;
        this->fields.bonusKindId = sort->fields.bonusKindId;
        if ( !v17 )
          goto LABEL_204;
        v18 = this->fields.userServantEntity;
        ServantFilterEventId = EventUpValSetupInfo__get_ServantFilterEventId(v17, 0LL);
        if ( !v18 )
          goto LABEL_204;
        v20 = ServantFilterEventId;
        userServantEntity = v18;
        v22 = v17;
        goto LABEL_68;
      }
      goto LABEL_62;
    }
    if ( this->fields.bonusKind != 2 )
    {
      p_bonusKindId = &sort->fields.bonusKindId;
      goto LABEL_70;
    }
    v26 = this->fields.bonusKindId;
    p_bonusKindId = &sort->fields.bonusKindId;
    bonusKind2Id = sort->fields.bonusKindId;
LABEL_50:
    if ( v26 != bonusKind2Id )
    {
LABEL_70:
      this->fields.bonusKind = 2;
      this->fields.bonusKindId = *p_bonusKindId;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_204;
      MasterData_WarQuestSelectionMaster = (ServantFilterMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_204;
      IsCampaignServant = ServantFilterMaster__IsEnableServant(
                            MasterData_WarQuestSelectionMaster,
                            this->fields.svtId,
                            this->fields.bonusKindId,
                            0LL);
      goto LABEL_73;
    }
    goto LABEL_62;
  }
  if ( this->fields.bonusKind == 3 )
  {
    v25 = &sort->fields.bonusKindId;
    if ( this->fields.bonusKindId == sort->fields.bonusKindId )
      goto LABEL_62;
  }
  else
  {
    v25 = &sort->fields.bonusKindId;
  }
  this->fields.bonusKind = 3;
  this->fields.bonusKindId = *v25;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
  {
    v35 = this->fields.bonusKindId;
    v37 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v36 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v115.fields.currentCryptoKey = v37;
    *(_QWORD *)&v115.fields.fakeValue = v36;
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v115, 0LL);
    if ( !v14 )
      goto LABEL_204;
    this->fields.isEventUpVal = PartyServantListViewManager__IsCampaignServant(v14, v35, v38, v39);
  }
LABEL_62:
  if ( !this->fields.isEventUpVal )
    return 0;
LABEL_74:
  if ( !this->fields.isBase )
  {
    servantEntity = this->fields.servantEntity;
    if ( !servantEntity )
      goto LABEL_204;
    if ( ServantEntity__get_IsExpUp(servantEntity, 0LL) )
      return 0;
    v64 = this->fields.servantEntity;
    if ( !v64 )
      goto LABEL_204;
    if ( ServantEntity__get_IsStatusUp(v64, 0LL)
      || (((__int64 (__fastcall *)(PartyServantListViewItem_o *, ListViewSort_o *, void *))this->klass->vtable._5_IsMatchFilter.method)(
            this,
            sort,
            this->klass[1]._1.image) & 1) == 0 )
    {
      return 0;
    }
  }
LABEL_75:
  v42 = PartyServantListViewItem_TypeInfo;
  isSwapChoice = this->fields.isSwapChoice;
  isChoice = this->fields.isChoice;
  if ( (BYTE3(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo);
    v42 = PartyServantListViewItem_TypeInfo;
  }
  p_static_fields = &v42->static_fields;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  v47 = isSwapChoice ^ isChoice;
  this->fields.sortValue0 = v42->static_fields->PRIORITY_NORMAL;
  this->fields.sortValue0B = v42->static_fields->PRIORITY_NORMAL;
  if ( questRestrictionInfo )
  {
    if ( questRestrictionInfo->fields.isFatigure && sort->fields.isSmartSort )
    {
      if ( this->fields.fatigureTime >= 1 )
        goto LABEL_82;
      goto LABEL_89;
    }
    if ( questRestrictionInfo->fields.isAllOutBattle && sort->fields.isSmartSort )
    {
      if ( this->fields._IsAllOutBattle_k__BackingField )
      {
LABEL_82:
        if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v42);
          v42 = PartyServantListViewItem_TypeInfo;
        }
        PRIORITY_LOWEST = v42->static_fields->PRIORITY_LOWEST;
        goto LABEL_91;
      }
LABEL_89:
      if ( !this->fields.isQuestRestriction )
      {
LABEL_92:
        if ( v47 && sort->fields.isChoiceSort )
        {
          if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v42);
            v42 = PartyServantListViewItem_TypeInfo;
          }
          this->fields.sortValue0B = v42->static_fields->PRIORITY_TOP;
        }
        v49 = this->fields.servantEntity;
        if ( v49 )
        {
          if ( !ServantEntity__checkIsHeroineSvt(v49, 0LL) )
            goto LABEL_117;
          if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TutorialFlag_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          }
          if ( !TutorialFlag__Get_28023340(126, 0LL) )
            goto LABEL_117;
          v50 = PartyServantListViewItem_TypeInfo;
          if ( (BYTE3(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PartyServantListViewItem_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo);
            v50 = PartyServantListViewItem_TypeInfo;
          }
          PRIORITY_LOWEST_HEROIN_LEAVE = v50->static_fields->PRIORITY_LOWEST_HEROIN_LEAVE;
          goto LABEL_116;
        }
LABEL_204:
        sub_B170D4();
      }
      PRIORITY_LOWEST = -1LL;
LABEL_91:
      this->fields.sortValue0 = PRIORITY_LOWEST;
      goto LABEL_92;
    }
  }
  if ( v47 && sort->fields.isChoiceSort )
  {
    if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      p_static_fields = &PartyServantListViewItem_TypeInfo->static_fields;
    }
    PRIORITY_LOWEST_HEROIN_LEAVE = (*p_static_fields)->PRIORITY_TOP;
  }
  else
  {
    if ( !this->fields.isQuestRestriction )
      goto LABEL_117;
    PRIORITY_LOWEST_HEROIN_LEAVE = -1LL;
  }
LABEL_116:
  this->fields.sortValue0 = PRIORITY_LOWEST_HEROIN_LEAVE;
LABEL_117:
  PartyServantListViewItem__InitAfterSecondSort(this, (const MethodInfo *)sort);
  iconLabelInfo2 = this->fields.iconLabelInfo2;
  if ( !iconLabelInfo2 )
    goto LABEL_204;
  IconLabelInfo__Clear(iconLabelInfo2, 0LL);
  v53 = this->fields.servantEntity;
  if ( !v53 )
    goto LABEL_204;
  iconLabelInfo3 = this->fields.iconLabelInfo3;
  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity )
  {
    cost = equipServantEntity->fields.cost;
    if ( !iconLabelInfo3 )
      goto LABEL_204;
  }
  else
  {
    cost = 0;
    if ( !iconLabelInfo3 )
      goto LABEL_204;
  }
  IconLabelInfo__Set_28888132(iconLabelInfo3, 7, v53->fields.cost, 0, cost, 0, 0, 0, 0LL);
  result = 1;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v58 = this->fields.userServantEntity;
      if ( !v58 )
        goto LABEL_204;
      v59 = *(_OWORD *)&v58->fields.id.fields.fakeValue;
      *(_OWORD *)&v112.fields.currentCryptoKey = *(_OWORD *)&v58->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v112.fields.fakeValue = v59;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v111 = v112;
      v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v111, 0LL);
      v61 = this->fields.userServantEntity;
      this->fields.sortValue1 = v60;
      if ( !v61 )
        goto LABEL_204;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      if ( !iconLabelInfo1 )
        goto LABEL_204;
      IconLabelInfo__SetTime(iconLabelInfo1, 49, v61->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_173;
    case 2:
      rarityId = this->fields.rarityId;
      v67 = this->fields.userServantEntity;
      this->fields.sortValue1 = rarityId;
      if ( !v67 )
        goto LABEL_204;
      v68 = this->fields.iconLabelInfo1;
      if ( !v68 )
        goto LABEL_204;
      IconLabelInfo__Set_28888132(v68, 36, rarityId, v67->fields.exceedCount, 0, 0, 0, v67->fields.lv, 0LL);
      return 1;
    case 3:
      goto LABEL_182;
    case 4:
      v69 = this->fields.userServantEntity;
      if ( !v69 )
        goto LABEL_204;
      UserServantEntity__getTreasureDeviceInfo_21453148(v69, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(hpReinforceValue) = tdMaxLv[1];
      v71 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !v71 )
        goto LABEL_204;
      adjustAtk = tdMaxLv[0];
      v73 = 33;
      goto LABEL_172;
    case 5:
      v74 = this->fields.userServantEntity;
      if ( !v74 )
        goto LABEL_204;
      equipUserServantEntity = this->fields.equipUserServantEntity;
      hp = v74->fields.hp;
      if ( equipUserServantEntity )
      {
        v77 = this->fields.iconLabelInfo1;
        this->fields.sortValue1 = equipUserServantEntity->fields.hp + (int)hp;
        if ( !v77 )
          goto LABEL_204;
        v78 = equipUserServantEntity->fields.hp;
        adjustHp = v74->fields.adjustHp;
        v80 = v74->fields.hp;
        v81 = 46;
        goto LABEL_153;
      }
      v71 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !v71 )
        goto LABEL_204;
      adjustAtk = v74->fields.adjustHp;
      LODWORD(hpReinforceValue) = v74->fields.hp;
      v73 = 3;
      goto LABEL_172;
    case 6:
      v82 = this->fields.userServantEntity;
      if ( !v82 )
        goto LABEL_204;
      v83 = this->fields.equipUserServantEntity;
      atk = v82->fields.atk;
      if ( v83 )
      {
        v77 = this->fields.iconLabelInfo1;
        this->fields.sortValue1 = v83->fields.atk + (int)atk;
        if ( !v77 )
          goto LABEL_204;
        v78 = v83->fields.atk;
        adjustHp = v82->fields.adjustAtk;
        v80 = v82->fields.atk;
        v81 = 47;
LABEL_153:
        IconLabelInfo__Set_28888132(v77, v81, v80, adjustHp, v78, 0, 0, 0, 0LL);
      }
      else
      {
        v71 = this->fields.iconLabelInfo1;
        this->fields.sortValue1 = atk;
        if ( !v71 )
          goto LABEL_204;
        adjustAtk = v82->fields.adjustAtk;
        LODWORD(hpReinforceValue) = v82->fields.atk;
        v73 = 5;
LABEL_172:
        IconLabelInfo__Set_28888132(v71, v73, hpReinforceValue, adjustAtk, 0, 0, 0, 0, 0LL);
      }
LABEL_173:
      v87 = this->fields.userServantEntity;
      if ( !v87 )
        goto LABEL_204;
      v98 = this->fields.iconLabelInfo2;
      goto LABEL_185;
    case 7:
      v85 = this->fields.servantEntity;
      if ( !v85 )
        goto LABEL_204;
      v86 = v85->fields.cost;
      v87 = this->fields.userServantEntity;
LABEL_157:
      this->fields.sortValue1 = v86;
      if ( !v87 )
        goto LABEL_204;
      goto LABEL_184;
    case 8:
      v87 = this->fields.userServantEntity;
      v86 = -this->fields.priority;
      goto LABEL_157;
    case 0xA:
      v88 = *(_QWORD *)&this->fields.friendship.fields.currentCryptoKey;
      v89 = *(_QWORD *)&this->fields.friendship.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v116.fields.currentCryptoKey = v88;
      *(_QWORD *)&v116.fields.fakeValue = v89;
      v90 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v116, 0LL);
      v91 = this->fields.iconLabelInfo1;
      v92 = v90;
      friendship = this->fields.friendship;
      this->fields.sortValue1 = v92;
      v93 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(friendship, 0LL);
      if ( !v91 )
        goto LABEL_204;
      adjustAtk = this->fields.friendshipMax;
      LODWORD(hpReinforceValue) = v93;
      v73 = 32;
      v71 = v91;
      goto LABEL_172;
    case 0xE:
      amountSortValue = this->fields.amountSortValue;
      if ( (amountSortValue & 0x8000000000000000LL) == 0 )
        goto LABEL_201;
      v95 = sort->fields.manager;
      if ( v95
        && (v96 = *(&PartyServantListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&v95->klass->_2.bitflags2 + 1) >= (unsigned int)v96) )
      {
        if ( (PartyServantListViewManager_c *)v95->klass->_2.typeHierarchy[v96 - 1] == PartyServantListViewManager_TypeInfo )
          v97 = sort->fields.manager;
        else
          v97 = 0LL;
      }
      else
      {
        v97 = 0LL;
      }
      v105 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v104 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v118.fields.currentCryptoKey = v105;
      *(_QWORD *)&v118.fields.fakeValue = v104;
      v106 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v118, 0LL);
      if ( !v97 )
        goto LABEL_204;
      amountSortValue = PartyServantListViewManager__GetAmountSortValue(
                          (PartyServantListViewManager_o *)v97,
                          v106,
                          v107);
      this->fields.amountSortValue = amountSortValue;
LABEL_201:
      v108 = this->fields.servantEntity;
      if ( !v108 )
        goto LABEL_204;
      collectionNo = v108->fields.collectionNo;
      v110 = this->fields.userServantEntity;
      this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarityId << 32) + (amountSortValue << 48)) | collectionNo;
      if ( !v110 )
        goto LABEL_204;
      v98 = this->fields.iconLabelInfo1;
      lv = v110->fields.lv;
      v87 = v110;
      goto LABEL_186;
    case 0xF:
      hpReinforceValue = this->fields.hpReinforceValue;
      v71 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hpReinforceValue;
      if ( !v71 )
        goto LABEL_204;
      adjustAtk = this->fields.nowMaxHpReinforceValue;
      v73 = 44;
      goto LABEL_172;
    case 0x10:
      hpReinforceValue = this->fields.atkReinforceValue;
      v71 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hpReinforceValue;
      if ( !v71 )
        goto LABEL_204;
      adjustAtk = this->fields.nowMaxAtkReinforceValue;
      v73 = 45;
      goto LABEL_172;
    case 0x19:
      v99 = this->fields.questRestrictionInfo;
      if ( !v99 || !v99->fields.isFatigure )
        goto LABEL_181;
      fatigureTime = this->fields.fatigureTime;
      goto LABEL_178;
    case 0x1C:
      if ( this->fields._IsDispSvtPoint_k__BackingField )
      {
        fatigureTime = this->fields._SvtPoint_k__BackingField;
LABEL_178:
        v87 = this->fields.userServantEntity;
        this->fields.sortValue1 = fatigureTime;
        if ( !v87 )
          goto LABEL_204;
        priority = this->fields.priority;
        v101 = this->fields.servantEntity;
        this->fields.sortValue1B = v87->fields.lv;
        this->fields.sortValue2 = priority;
        if ( !v101 )
          goto LABEL_204;
        this->fields.sortValue2B = ((__int64)v101->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarityId << 48) | v87->fields.lv;
      }
      else
      {
LABEL_181:
        sort->fields.sortKind = 3;
LABEL_182:
        v87 = this->fields.userServantEntity;
        if ( !v87 )
          goto LABEL_204;
        this->fields.sortValue1 = v87->fields.lv;
      }
LABEL_184:
      v98 = this->fields.iconLabelInfo1;
LABEL_185:
      lv = v87->fields.lv;
LABEL_186:
      LevelMax = UserServantEntity__getLevelMax(v87, 0LL);
      if ( !v98 )
        goto LABEL_204;
      IconLabelInfo__Set_28888132(v98, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
      return 1;
    default:
      return result;
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
    sub_B170D4();
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

  if ( (byte_40FDE2C & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B16FFC(&StringLiteral_18326, v3);
    byte_40FDE2C = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18326;
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

  if ( (byte_40FDE2B & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40FDE2B = 1;
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
    sub_B170D4();
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