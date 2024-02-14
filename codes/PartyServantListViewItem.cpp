void __fastcall PartyServantListViewItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewItem_c *v2; // x8

  if ( (byte_4217FA9 & 1) == 0 )
  {
    sub_B0D8A4(&PartyServantListViewItem_TypeInfo, v1);
    byte_4217FA9 = 1;
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
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  IconLabelInfo_o *v51; // x22
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x1
  __int64 v59; // x2
  IconLabelInfo_o *v60; // x22
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x1
  __int64 v68; // x2
  IconLabelInfo_o *v69; // x22
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  int64_t Instance; // x0
  struct PartyOrganizationListViewItem_o *Member; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v104; // x21
  __int64 v105; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v106; // x20
  struct ServantEntity_o *v107; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // x20
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  ServantLimitMaster_o *v115; // x21
  struct UserServantEntity_o *v116; // x8
  int32_t v117; // w28
  ServantLimitEntity_o *v118; // x21
  UserServantEntity_o *v119; // x8
  __int128 v120; // q1
  UserServantCollectionMaster_o *v121; // x28
  int64_t v122; // x23
  UserServantCollectionEntity_o *v123; // x28
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  int32_t i; // w21
  PartyOrganizationListViewItem_o *v143; // x28
  UserServantEntity_o *v144; // x8
  __int128 v145; // q0
  struct UserServantEntity_o *v146; // x8
  __int128 v147; // q0
  int64_t v148; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v149; // x8
  __int64 v150; // x23
  __int64 v151; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *servantEntity; // x8
  int v153; // w23
  struct ServantEntity_o *v154; // x8
  __int64 v155; // x23
  __int64 v156; // x25
  int32_t v157; // w28
  int32_t v158; // w23
  int32_t IncludedRestrictionIds; // w0
  BalanceConfig_c *v160; // x0
  System_Int64_array *EquipList; // x0
  const MethodInfo *v162; // x2
  int32_t cost; // w19
  UserServantEntity_o *v164; // x8
  bool IsChoice; // w0
  UserServantEntity_o *v166; // x8
  __int128 v167; // q0
  __int64 v168; // x19
  bool v169; // zf
  bool v170; // w8
  UserServantEntity_o *v171; // x8
  bool IsLeave; // w0
  const MethodInfo *v173; // x1
  UserServantEntity_o *v174; // x8
  UserServantEntity_o *v175; // x8
  bool IsUniqueIndividualityRestriction_21269692; // w0
  const MethodInfo *v177; // x1
  struct QuestRestrictionInfo_o *v178; // x8
  UserEventServantFatigueMaster_o *v179; // x21
  int32_t eventId; // w28
  __int64 v181; // x23
  __int64 v182; // x25
  int64_t v183; // x19
  bool AllOutBattleAlreadyUsed; // w0
  struct QuestRestrictionInfo_o *v185; // x8
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x20
  UserServantEntity_o *v187; // x8
  UserEventDataLostEntity_o *v188; // x20
  __int64 v189; // x21
  __int64 v190; // x23
  UserServantEntity_o *v191; // x9
  UserEventDataLostEntity_o *v192; // x20
  __int64 v193; // x21
  __int64 v194; // x28
  int32_t v195; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr10_16
  __int64 v197; // x2
  UserServantEntity_o *v198; // x8
  int64_t v199; // x20
  __int64 v200; // x21
  __int64 v201; // x23
  int32_t v202; // w21
  int32_t Rarity; // w28
  const MethodInfo *v204; // x7
  System_String_o **p_skillName; // x1
  int *p_actMaxRarity; // x2
  int32_t v207; // w3
  int32_t v208; // w4
  __int64 partyIndex; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v210; // kr20_16
  UserServantEntity_o *v211; // x8
  int64_t v212; // x20
  __int64 v213; // x21
  __int64 v214; // x23
  int32_t v215; // w21
  int32_t v216; // w27
  struct QuestRestrictionInfo_o *v217; // x8
  EventServantPointRankMaster_o *v218; // x20
  UserServantEntity_o *v219; // x8
  __int128 v220; // q0
  UserEventServantPointMaster_o *v221; // x21
  int64_t v222; // x26
  int32_t *p_SvtPoint_k__BackingField; // x19
  int32_t v224; // w21
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  System_Collections_Generic_List_int__o *v227; // x20
  PartyListViewItem_array *v228; // x9
  __int64 v229; // x8
  unsigned __int64 v230; // x25
  int32_t v231; // w19
  PartyListViewItem_o *v232; // x21
  int32_t j; // w26
  PartyOrganizationListViewItem_o *v234; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v235; // kr30_16
  UserServantEntity_o *v236; // x8
  struct UserServantEntity_o *v237; // x9
  __int128 v238; // q0
  System_Int64_array *v239; // x0
  const MethodInfo *v240; // x2
  __int64 v241; // x21
  __int64 v242; // x23
  System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___o *v243; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v244; // x24
  EventQuestMaster_o *v245; // x21
  _BOOL8 v246; // x0
  EventCampaignEntity_o *current; // x24
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x26
  __int64 v249; // x27
  __int64 v250; // x28
  int32_t v251; // w1
  int32_t v252; // w26
  int32_t FriendshipBonusValue; // w0
  int32_t calcType; // w3
  int32_t v255; // w2
  const MethodInfo_2AD2138 *v256; // x5
  __int64 v257; // x0
  System_Int32_array **v258; // x0
  System_String_array **v259; // x2
  System_String_array **v260; // x3
  System_Boolean_array **v261; // x4
  System_Int32_array **v262; // x5
  System_Int32_array *v263; // x6
  System_Int32_array *v264; // x7
  UserServantEntity_o *v265; // x8
  System_Int32_array **SkillCategoryIdList; // x0
  System_String_array **v267; // x2
  System_String_array **v268; // x3
  System_Boolean_array **v269; // x4
  System_Int32_array **v270; // x5
  System_Int32_array *v271; // x6
  System_Int32_array *v272; // x7
  System_Int32_array **TreasureDeviceCategoryIdList; // x0
  System_String_array **v274; // x2
  System_String_array **v275; // x3
  System_Boolean_array **v276; // x4
  System_Int32_array **v277; // x5
  System_Int32_array *v278; // x6
  System_Int32_array *v279; // x7
  const MethodInfo *v280; // x1
  BalanceConfig_c *v281; // x8
  int v282; // w19
  __int64 v283; // x0
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+8h] [xbp-1C8h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+10h] [xbp-1C0h]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+28h] [xbp-1A8h]
  struct PartyOrganizationListViewItem_o **p_baseItem; // [xsp+30h] [xbp-1A0h]
  PartyServantListViewItem_o *v290; // [xsp+30h] [xbp-1A0h]
  UserServantEntity_o **p_userServantEntity; // [xsp+38h] [xbp-198h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v292; // [xsp+40h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v293; // [xsp+60h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v294; // [xsp+80h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v295; // [xsp+A0h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v296; // [xsp+C0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v297; // [xsp+E0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v298; // [xsp+100h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v299; // [xsp+120h] [xbp-B0h] BYREF
  UserEventServantPointEntity_o *v300; // [xsp+138h] [xbp-98h] BYREF
  int32_t actMaxRarity; // [xsp+144h] [xbp-8Ch] BYREF
  System_String_o *skillName; // [xsp+148h] [xbp-88h] BYREF
  int v303; // [xsp+154h] [xbp-7Ch] BYREF
  __int64 v304; // [xsp+158h] [xbp-78h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+160h] [xbp-70h] BYREF
  int64_t recoverAt; // [xsp+168h] [xbp-68h] BYREF
  int32_t friendshipRank[3]; // [xsp+174h] [xbp-5Ch] BYREF
  System_ValueTuple_int__int__EventCombineEntity_CalcType__o v308; // 0:x0.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v309; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v310; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v311; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v312; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v313; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v314; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v315; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v316; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v317; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v318; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v319; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v320; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v321; // 0:x0.16

  if ( (byte_4217F9D & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&CommonRestrictionMaster_TypeInfo, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventQuestMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantClassMaster___, v19);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v20);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v21);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v22);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v23);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v24);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v25);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v26);
    sub_B0D8A4(&DataManager_TypeInfo, v27);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v28);
    sub_B0D8A4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v29);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v31);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v32);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v33);
    sub_B0D8A4(&IconLabelInfo_TypeInfo, v34);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__, v35);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v36);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v37);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v38);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__,
      v39);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__, v40);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v41);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v42);
    sub_B0D8A4(&System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo, v43);
    sub_B0D8A4(&NetworkManager_TypeInfo, v44);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v45);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v46);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v48);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v49);
    sub_B0D8A4(&Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__, v50);
    byte_4217F9D = 1;
  }
  friendshipRank[0] = 0;
  entity = 0LL;
  recoverAt = 0LL;
  v304 = 0LL;
  v303 = 0;
  skillName = 0LL;
  actMaxRarity = 0;
  v300 = 0LL;
  memset(&v299, 0, sizeof(v299));
  v51 = (IconLabelInfo_o *)sub_B0D974(IconLabelInfo_TypeInfo, *(_QWORD *)&index, userServantEntity);
  IconLabelInfo___ctor(v51, 0LL);
  this->fields.iconLabelInfo1 = v51;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v60 = (IconLabelInfo_o *)sub_B0D974(IconLabelInfo_TypeInfo, v58, v59);
  IconLabelInfo___ctor(v60, 0LL);
  this->fields.iconLabelInfo2 = v60;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v69 = (IconLabelInfo_o *)sub_B0D974(IconLabelInfo_TypeInfo, v67, v68);
  IconLabelInfo___ctor(v69, 0LL);
  this->fields.iconLabelInfo3 = v69;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo3,
    (System_Int32_array **)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_253;
  Member = PartyListViewItem__GetMember(partyItem, num, 0LL);
  this->fields.baseItem = Member;
  p_baseItem = &this->fields.baseItem;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.baseItem,
    (System_Int32_array **)Member,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  baseItem = this->fields.baseItem;
  this->fields._PartyListViewItemMenuKind_k__BackingField = partyItem->fields.menuKind;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_253;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0LL;
  this->fields.userServantEntity = userServantEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
  p_userServantEntity = &this->fields.userServantEntity;
  if ( !this->fields.userServantEntity )
    goto LABEL_253;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_253;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v105 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v104 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v106 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v309.fields.currentCryptoKey = v105;
  *(_QWORD *)&v309.fields.fakeValue = v104;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v309, 0LL);
  if ( !v106 )
    goto LABEL_253;
  v107 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     v106,
                                     Instance,
                                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v107;
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v107,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_253;
  v115 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(this->fields.svtId, 0LL);
  v116 = this->fields.userServantEntity;
  if ( !v116 )
    goto LABEL_253;
  v117 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v116->fields.limitCount, 0LL);
  if ( !v115 )
    goto LABEL_253;
  v118 = ServantLimitMaster__GetEntity(v115, v117, Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_253;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v119 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_253;
  v120 = *(_OWORD *)&v119->fields.userId.fields.fakeValue;
  v121 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v298.fields.currentCryptoKey = *(_OWORD *)&v119->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v298.fields.fakeValue = v120;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v297 = v298;
  v122 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v297, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(this->fields.svtId, 0LL);
  if ( !v121 )
    goto LABEL_253;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v121, v122, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_253;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !v118 )
    goto LABEL_253;
  this->fields.rarityId = v118->fields.rarity;
  if ( !userServantEntity )
    goto LABEL_253;
  v123 = (UserServantCollectionEntity_o *)Instance;
  Instance = UserServantEntity__getFrameType(userServantEntity, 0LL);
  this->fields.frameType = Instance;
  if ( !v123 )
    goto LABEL_253;
  UserServantCollectionEntity__getFriendShipRankInfo(v123, friendshipRank, &this->fields.friendshipMax, 0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank[0], 0LL);
  this->fields.isBase = 0;
  *(_WORD *)&this->fields.isCostOver = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity,
    0LL,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  this->fields.equipServantEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v130, v131, v132, v133, v134, v135);
  this->fields.equipIdList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v136, v137, v138, v139, v140, v141);
  for ( i = 0; ; ++i )
  {
    v160 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v160 = BalanceConfig_TypeInfo;
    }
    if ( i >= v160->static_fields->DeckMemberMax )
      break;
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, i, 0LL);
    if ( !Instance )
      goto LABEL_253;
    v143 = (PartyOrganizationListViewItem_o *)Instance;
    if ( *(_QWORD *)(Instance + 112) )
    {
      v144 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_253;
      v145 = *(_OWORD *)&v144->fields.id.fields.fakeValue;
      *(_OWORD *)&v298.fields.currentCryptoKey = *(_OWORD *)&v144->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v298.fields.fakeValue = v145;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v296 = v298;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v296, 0LL);
      v146 = v143->fields.userServantEntity;
      if ( !v146 )
        goto LABEL_253;
      v147 = *(_OWORD *)&v146->fields.id.fields.fakeValue;
      v148 = Instance;
      *(_OWORD *)&v295.fields.currentCryptoKey = *(_OWORD *)&v146->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v295.fields.fakeValue = v147;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v295, 0LL);
      if ( v148 == Instance )
      {
        this->fields.isSame = 0;
        this->fields.isBase = num == i;
        this->fields.partyIndex = i;
        EquipList = PartyOrganizationListViewItem__GetEquipList(v143, 0LL);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v162);
        break;
      }
      if ( num != i )
      {
        v149 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_253;
        v151 = *(_QWORD *)&v149[2].fields.currentCryptoKey;
        v150 = *(_QWORD *)&v149[2].fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v310.fields.currentCryptoKey = v151;
        *(_QWORD *)&v310.fields.fakeValue = v150;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v310, 0LL);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v143->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_253;
        v153 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(servantEntity[2], 0LL);
        if ( v153 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else if ( this->fields.commonRestrictionId == -1 )
        {
          v154 = v143->fields.servantEntity;
          if ( !v154 )
            goto LABEL_253;
          v156 = *(_QWORD *)&v154->fields.baseSvtId.fields.currentCryptoKey;
          v155 = *(_QWORD *)&v154->fields.baseSvtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v311.fields.currentCryptoKey = v156;
          *(_QWORD *)&v311.fields.fakeValue = v155;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v311, 0LL);
          if ( !*p_servantEntity )
            goto LABEL_253;
          v157 = Instance;
          v158 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576((*p_servantEntity)[2], 0LL);
          if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
          }
          IncludedRestrictionIds = CommonRestrictionMaster__GetIncludedRestrictionIds(v157, v158, 0LL);
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
      goto LABEL_253;
    cost = partyItem->fields.cost;
    Instance = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL);
    if ( !*p_servantEntity )
      goto LABEL_253;
    this->fields.isCostOver = cost - (int)Instance + (*p_servantEntity)[9].fields.fakeValue > partyItem->fields.maxCost;
  }
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_253;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v164 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v164 )
    goto LABEL_253;
  IsChoice = UserServantEntity__IsChoice(v164, 0LL);
  *(_WORD *)&this->fields.isSwapLock = 0;
  *(_WORD *)&this->fields.isLockMode = 0;
  this->fields.isChoice = IsChoice;
  this->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_253;
  v166 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_253;
  v167 = *(_OWORD *)&v166->fields.id.fields.fakeValue;
  v168 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v298.fields.currentCryptoKey = *(_OWORD *)&v166->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v298.fields.fakeValue = v167;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v294 = v298;
  v169 = v168 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v294, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  v170 = v169;
  this->fields.isPush = v170;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_253;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  v171 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v171 )
    goto LABEL_253;
  IsLeave = UserServantEntity__IsLeave(v171, 0LL);
  this->fields.isEventUpVal = 0;
  this->fields.isLeave = IsLeave;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v173);
  v174 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v174 )
    goto LABEL_253;
  Instance = UserServantEntity__getUniqueSvtRestriction_21269292(
               v174,
               this->fields.questRestrictionInfo,
               partyItem,
               num,
               this->fields.partyIndex,
               0LL);
  v175 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v175 )
    goto LABEL_253;
  IsUniqueIndividualityRestriction_21269692 = UserServantEntity__IsUniqueIndividualityRestriction_21269692(
                                                v175,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                this->fields.partyIndex,
                                                0LL);
  this->fields.isFatigureRecover = 0;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_21269692;
  this->fields.fatigureTime = -1LL;
  v178 = this->fields.questRestrictionInfo;
  if ( v178 && v178->fields.isFatigure )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_253;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !*p_questRestrictionInfo )
      goto LABEL_253;
    v179 = (UserEventServantFatigueMaster_o *)Instance;
    eventId = (*p_questRestrictionInfo)->fields.eventId;
    v182 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v181 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v312.fields.currentCryptoKey = v182;
    *(_QWORD *)&v312.fields.fakeValue = v181;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v312, 0LL);
    if ( !v179 )
      goto LABEL_253;
    if ( UserEventServantFatigueMaster__GetFatigueInfo(
           v179,
           &recoverAt,
           &this->fields.isFatigureRecover,
           eventId,
           Instance,
           0LL) )
    {
      v183 = recoverAt;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( v183 > NetworkManager__getTime(0LL) )
        this->fields.fatigureTime = recoverAt;
    }
  }
  AllOutBattleAlreadyUsed = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v177);
  v185 = this->fields.questRestrictionInfo;
  this->fields._IsAllOutBattle_k__BackingField = AllOutBattleAlreadyUsed;
  if ( v185 && v185->fields.isDataLostBattle )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !*p_questRestrictionInfo || !Master_WarQuestSelectionMaster )
      goto LABEL_253;
    Instance = UserEventDataLostMaster__TryGetEntity(
                 (UserEventDataLostMaster_o *)Master_WarQuestSelectionMaster,
                 &entity,
                 Instance,
                 (*p_questRestrictionInfo)->fields.dataLostBattleId,
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      v187 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_253;
      v188 = entity;
      v190 = *(_QWORD *)&v187->fields.svtId.fields.currentCryptoKey;
      v189 = *(_QWORD *)&v187->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v313.fields.currentCryptoKey = v190;
      *(_QWORD *)&v313.fields.fakeValue = v189;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v313, 0LL);
      if ( !v188 )
        goto LABEL_253;
      Instance = UserEventDataLostEntity__IsRestart(v188, Instance, 0LL);
      v191 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_253;
      v192 = entity;
      v194 = *(_QWORD *)&v191->fields.svtId.fields.currentCryptoKey;
      v193 = *(_QWORD *)&v191->fields.svtId.fields.fakeValue;
      if ( (Instance & 1) != 0 )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v314.fields.currentCryptoKey = v194;
        *(_QWORD *)&v314.fields.fakeValue = v193;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v314, 0LL);
        if ( !v192 )
          goto LABEL_253;
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(v192, Instance, 0LL);
      }
      else
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v321.fields.currentCryptoKey = v194;
        *(_QWORD *)&v321.fields.fakeValue = v193;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v321, 0LL);
        if ( !v192 )
          goto LABEL_253;
        if ( UserEventDataLostEntity__IsDataLost(v192, Instance, 0LL) )
          this->fields._IsDataLost_k__BackingField = 1;
      }
    }
  }
  else
  {
    this->fields._IsDataLost_k__BackingField = 0;
    this->fields._TimesToRestart_k__BackingField = -1;
  }
  if ( *p_questRestrictionInfo )
    v195 = (*p_questRestrictionInfo)->fields.eventId;
  else
    v195 = -1;
  if ( !this->fields.isBase )
  {
    LODWORD(partyIndex) = this->fields.partyIndex;
    if ( (partyIndex & 0x80000000) == 0 )
      goto LABEL_138;
  }
  Instance = (int64_t)PartyListViewItem__GetMember(partyItem, num, 0LL);
  if ( !Instance )
    goto LABEL_253;
  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(EquipSvtId, 0LL) >= 1 )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v198 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_253;
    v199 = Instance;
    v201 = *(_QWORD *)&v198->fields.svtId.fields.currentCryptoKey;
    v200 = *(_QWORD *)&v198->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v315.fields.currentCryptoKey = v201;
    *(_QWORD *)&v315.fields.fakeValue = v200;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v315, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_253;
    v202 = Instance;
    Rarity = UserServantEntity__getRarity(*p_userServantEntity, 0LL);
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, num, 0LL);
    if ( !Instance )
      goto LABEL_253;
    v316 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v316, 0LL);
    if ( !v199 )
      goto LABEL_253;
    p_skillName = (System_String_o **)&v304;
    p_actMaxRarity = &v303;
    v207 = v202;
    v208 = Rarity;
LABEL_154:
    this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                     (PartyOrganizationUtility_o *)Instance,
                                     p_skillName,
                                     p_actMaxRarity,
                                     v207,
                                     v208,
                                     Instance,
                                     v195,
                                     v204);
    goto LABEL_155;
  }
  partyIndex = (unsigned int)this->fields.partyIndex;
  if ( (partyIndex & 0x80000000) == 0 )
  {
LABEL_138:
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, partyIndex, 0LL);
    if ( !Instance )
      goto LABEL_253;
    v210 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v210, 0LL) < 1 )
      goto LABEL_155;
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v211 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_253;
    v212 = Instance;
    v214 = *(_QWORD *)&v211->fields.svtId.fields.currentCryptoKey;
    v213 = *(_QWORD *)&v211->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v317.fields.currentCryptoKey = v214;
    *(_QWORD *)&v317.fields.fakeValue = v213;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v317, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_253;
    v215 = Instance;
    v216 = UserServantEntity__getRarity(*p_userServantEntity, 0LL);
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, this->fields.partyIndex, 0LL);
    if ( !Instance )
      goto LABEL_253;
    v318 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v318, 0LL);
    if ( !v212 )
      goto LABEL_253;
    p_skillName = &skillName;
    p_actMaxRarity = &actMaxRarity;
    v207 = v215;
    v208 = v216;
    goto LABEL_154;
  }
LABEL_155:
  v217 = this->fields.questRestrictionInfo;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  this->fields._SvtPointRank_k__BackingField = 0;
  this->fields._SvtPoint_k__BackingField = 0;
  if ( v217 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !Instance )
      goto LABEL_253;
    v218 = (EventServantPointRankMaster_o *)Instance;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v195, 0LL) )
    {
      this->fields._IsDispSvtPoint_k__BackingField = 1;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v219 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_253;
      v220 = *(_OWORD *)&v219->fields.userId.fields.fakeValue;
      v221 = (UserEventServantPointMaster_o *)Instance;
      *(_OWORD *)&v298.fields.currentCryptoKey = *(_OWORD *)&v219->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v298.fields.fakeValue = v220;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v293 = v298;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v293, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_253;
      v222 = Instance;
      Instance = UserServantEntity__getSvtId(*p_userServantEntity, 0LL);
      if ( !v221 )
        goto LABEL_253;
      p_SvtPoint_k__BackingField = &this->fields._SvtPoint_k__BackingField;
      if ( UserEventServantPointMaster__TryGetEntity(v221, &v300, v222, v195, Instance, 0LL) )
      {
        Instance = (int64_t)v300;
        if ( !v300 )
          goto LABEL_253;
        *p_SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v300, 0LL);
      }
      Instance = (int64_t)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_253;
      v224 = *p_SvtPoint_k__BackingField;
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
      EnableEntity = EventServantPointRankMaster__GetEnableEntity(v218, v195, v224, SvtId, 0LL);
      if ( EnableEntity )
        this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
    }
  }
  v290 = this;
  if ( this->fields._PartyListViewItemMenuKind_k__BackingField == 9 )
  {
    v227 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                       System_Collections_Generic_List_int__TypeInfo,
                                                       partyIndex,
                                                       v197);
    System_Collections_Generic_List_int____ctor(
      v227,
      (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
    v228 = baseDeckItemList;
    if ( !baseDeckItemList )
      goto LABEL_253;
    this->fields._MaxWave_k__BackingField = *(_QWORD *)&baseDeckItemList->max_length;
    v229 = *(_QWORD *)&baseDeckItemList->max_length;
    if ( (int)v229 < 1 )
      goto LABEL_204;
    v230 = 0LL;
    v231 = 1;
    do
    {
      if ( v230 >= (unsigned int)v229 )
      {
        v283 = sub_B0D9A8(Instance);
        sub_B0D948(v283, 0LL);
      }
      v232 = v228->m_Items[v230];
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
        if ( !v232 )
          goto LABEL_253;
        Instance = (int64_t)PartyListViewItem__GetMember(v232, j, 0LL);
        if ( !Instance )
          goto LABEL_253;
        v234 = (PartyOrganizationListViewItem_o *)Instance;
        if ( *(_QWORD *)(Instance + 112) )
        {
          v235 = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v235, 0LL);
          if ( !v227 )
            goto LABEL_253;
          System_Collections_Generic_List_int___Add(
            v227,
            Instance,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          if ( v231 )
          {
            v236 = *p_userServantEntity;
            if ( !*p_userServantEntity )
              goto LABEL_253;
            v237 = v234->fields.userServantEntity;
            if ( !v237 )
              goto LABEL_253;
            v238 = *(_OWORD *)&v237->fields.id.fields.fakeValue;
            *(_OWORD *)&v292.fields.currentCryptoKey = *(_OWORD *)&v237->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v292.fields.fakeValue = v238;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_44166204(&v236->fields.id, &v292, 0LL) )
            {
              v239 = PartyOrganizationListViewItem__GetEquipList(v234, 0LL);
              PartyServantListViewItem__SetEquipStatus(this, v239, v240);
              this->fields._OrganizedWave_k__BackingField = v231;
              v231 = 0;
            }
          }
        }
      }
      v228 = baseDeckItemList;
      ++v230;
      if ( v231 )
        ++v231;
      else
        v231 = 0;
      LODWORD(v229) = baseDeckItemList->max_length;
    }
    while ( (__int64)v230 < (int)v229 );
    if ( v231 )
    {
LABEL_204:
      v242 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v241 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v319.fields.currentCryptoKey = v242;
      *(_QWORD *)&v319.fields.fakeValue = v241;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v319, 0LL);
      if ( !v227 )
        goto LABEL_253;
      if ( System_Collections_Generic_List_int___Contains(
             v227,
             Instance,
             (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        this->fields.isSame = 1;
      }
    }
  }
  else
  {
    this->fields._OrganizedWave_k__BackingField = 0;
  }
  v243 = (System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo,
                                                                                                   partyIndex,
                                                                                                   v197);
  System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType_____ctor(
    v243,
    (const MethodInfo_2F2EF94 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
  if ( *p_questRestrictionInfo )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_253;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    if ( !Instance )
      goto LABEL_253;
    Instance = (int64_t)EventCampaignMaster__GetFriendshipUpCampaigns((EventCampaignMaster_o *)Instance, 0LL);
    if ( Instance )
    {
      v244 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_253;
      v245 = (EventQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventQuestMaster___);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v298,
        v244,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
      v299 = *(System_Collections_Generic_List_Enumerator_T__o *)&v298.fields.currentCryptoKey;
      while ( 1 )
      {
        v246 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 &v299,
                 (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v246 )
          break;
        current = (EventCampaignEntity_o *)v299.fields.current;
        if ( !v299.fields.current )
          sub_B0D97C(v246);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v299.fields.current[2].monitor;
        if ( monitor && monitor[1].monitor )
        {
          v250 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
          v249 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v320.fields.currentCryptoKey = v250;
          *(_QWORD *)&v320.fields.fakeValue = v249;
          v251 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v320, 0LL);
          v246 = System_Linq_Enumerable__Contains_int_(
                   monitor,
                   v251,
                   (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( !v246 )
            continue;
        }
        if ( !*p_questRestrictionInfo )
          sub_B0D97C(v246);
        if ( !v245 )
          sub_B0D97C(v246);
        if ( !EventQuestMaster__IsEventNotIncluded(
                v245,
                current->fields.eventId,
                (*p_questRestrictionInfo)->fields.questId,
                (*p_questRestrictionInfo)->fields.questPhase,
                7,
                0LL) )
        {
          v252 = current->fields.eventId;
          FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0LL);
          calcType = current->fields.calcType;
          v255 = FriendshipBonusValue;
          LODWORD(v298.fields.hiddenValue) = 0;
          v298.fields.currentCryptoKey = 0LL;
          *(_QWORD *)&v308.fields.Item1 = &v298;
          v308.fields.Item3 = v252;
          System_ValueTuple_int__int__EventCombineEntity_CalcType____ctor(
            v308,
            v255,
            calcType,
            Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__,
            v256);
          if ( !v243 )
            sub_B0D97C(v257);
          System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____Add(
            v243,
            *(System_ValueTuple_int__int__EventCombineEntity_CalcType__o *)&v298.fields.currentCryptoKey,
            (const MethodInfo_2F2FD38 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__);
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v299,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    }
  }
  if ( !v243 )
    goto LABEL_253;
  v258 = (System_Int32_array **)System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ToArray(
                                  v243,
                                  (const MethodInfo_2F32000 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
  v290->fields._FriendshipUpValTuple_k__BackingField = (struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *)v258;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v290->fields._FriendshipUpValTuple_k__BackingField,
    v258,
    v259,
    v260,
    v261,
    v262,
    v263,
    v264);
  Instance = (int64_t)v290->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_253;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v265 = v290->fields.userServantEntity;
  v290->fields.dispLimitCount = Instance;
  if ( !v265 )
    goto LABEL_253;
  SkillCategoryIdList = (System_Int32_array **)UserServantEntity__GetSkillCategoryIdList(v265, -1, 0LL);
  v290->fields.skillCategoryIdList = (struct System_Int32_array *)SkillCategoryIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v290->fields.skillCategoryIdList,
    SkillCategoryIdList,
    v267,
    v268,
    v269,
    v270,
    v271,
    v272);
  Instance = (int64_t)v290->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_253;
  TreasureDeviceCategoryIdList = (System_Int32_array **)UserServantEntity__GetTreasureDeviceCategoryIdList(
                                                          (UserServantEntity_o *)Instance,
                                                          0,
                                                          0LL);
  v290->fields.tdCategoryIdList = (struct System_Int32_array *)TreasureDeviceCategoryIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v290->fields.tdCategoryIdList,
    TreasureDeviceCategoryIdList,
    v274,
    v275,
    v276,
    v277,
    v278,
    v279);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_253;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_253;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        v290->fields.classId,
                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_253;
  v290->fields.priority = *(_DWORD *)(Instance + 48);
  PartyServantListViewItem__InitAfterSecondSort(v290, v280);
  Instance = (int64_t)v290->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_253;
  v281 = BalanceConfig_TypeInfo;
  v282 = *(_DWORD *)(Instance + 276);
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v281 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  v290->fields.hpReinforceValue = v281->static_fields->StatusUpAdjustHp * v282;
  if ( !Instance )
    goto LABEL_253;
  v290->fields.atkReinforceValue = v281->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &v290->fields.nowMaxHpReinforceValue,
    &v290->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)v290->fields.iconLabelInfo1;
  v290->fields.amountSortValue = -1LL;
  if ( !Instance
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (int64_t)*p_iconLabelInfo3) == 0) )
  {
LABEL_253:
    sub_B0D97C(Instance);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewItem___ctor_31076468(
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
  IconLabelInfo_o *v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x1
  __int64 v47; // x2
  IconLabelInfo_o *v48; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  int64_t Instance; // x0
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct UserServantEntity_o **p_userServantEntity; // x22
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v84; // x21
  __int64 v85; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v86; // x20
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // x27
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  ServantLimitMaster_o *v95; // x20
  struct UserServantEntity_o *v96; // x8
  int32_t v97; // w21
  ServantLimitEntity_o *v98; // x20
  struct UserServantEntity_o *v99; // x8
  __int128 v100; // q1
  UserServantCollectionMaster_o *v101; // x21
  int64_t v102; // x26
  UserServantCollectionEntity_o *v103; // x21
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
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  int32_t v123; // w28
  PartyOrganizationListViewItem_o *v124; // x20
  struct UserServantEntity_o *v125; // x8
  __int128 v126; // q0
  struct UserServantEntity_o *v127; // x8
  __int128 v128; // q0
  int64_t v129; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v130; // x8
  __int64 v131; // x21
  __int64 v132; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *servantEntity; // x8
  int v134; // w21
  struct ServantEntity_o *v135; // x8
  __int64 v136; // x20
  __int64 v137; // x21
  int32_t v138; // w20
  int32_t v139; // w21
  System_Int64_array *EquipList; // x0
  const MethodInfo *v141; // x2
  int32_t cost; // w20
  UserServantEntity_o *v143; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v145; // x8
  bool IsLeave; // w0
  const MethodInfo *v147; // x1
  UserServantEntity_o *v148; // x8
  UserServantEntity_o *v149; // x8
  bool IsUniqueIndividualityRestriction_21269692; // w0
  const MethodInfo *v151; // x1
  struct QuestRestrictionInfo_o *v152; // x8
  UserEventServantFatigueMaster_o *v153; // x21
  int32_t eventId; // w23
  __int64 v155; // x24
  __int64 v156; // x25
  int64_t v157; // x20
  UserServantEntity_o *v158; // x8
  UserServantEntity_o *v159; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v161; // x2
  System_String_array **v162; // x3
  System_Boolean_array **v163; // x4
  System_Int32_array **v164; // x5
  System_Int32_array *v165; // x6
  System_Int32_array *v166; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  const MethodInfo *v174; // x1
  int v175; // w20
  BalanceConfig_c *v176; // x8
  struct PartyOrganizationListViewItem_o **p_baseItem; // [xsp+0h] [xbp-110h]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+8h] [xbp-108h]
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+10h] [xbp-100h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+18h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v181; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v182; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v183; // [xsp+60h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v184; // [xsp+80h] [xbp-90h]
  int64_t recoverAt; // [xsp+A8h] [xbp-68h] BYREF
  int32_t friendshipRank[3]; // [xsp+B4h] [xbp-5Ch] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v187; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v188; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v189; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v190; // 0:x0.16

  if ( (byte_4217F9E & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&CommonRestrictionMaster_TypeInfo, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantClassMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v19);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v21);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v22);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v23);
    sub_B0D8A4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v24);
    sub_B0D8A4(&IconLabelInfo_TypeInfo, v25);
    sub_B0D8A4(&NetworkManager_TypeInfo, v26);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    byte_4217F9E = 1;
  }
  friendshipRank[0] = 0;
  recoverAt = 0LL;
  v30 = (IconLabelInfo_o *)sub_B0D974(IconLabelInfo_TypeInfo, *(_QWORD *)&index, userServantEntity);
  IconLabelInfo___ctor(v30, 0LL);
  this->fields.iconLabelInfo1 = v30;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v39 = (IconLabelInfo_o *)sub_B0D974(IconLabelInfo_TypeInfo, v37, v38);
  IconLabelInfo___ctor(v39, 0LL);
  this->fields.iconLabelInfo2 = v39;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v48 = (IconLabelInfo_o *)sub_B0D974(IconLabelInfo_TypeInfo, v46, v47);
  IconLabelInfo___ctor(v48, 0LL);
  this->fields.iconLabelInfo3 = v48;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo3,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_96;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, num, 0LL);
  this->fields.baseItem = MemberItem;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.baseItem,
    (System_Int32_array **)MemberItem,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  baseItem = this->fields.baseItem;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_96;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0LL;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  if ( !this->fields.userServantEntity )
    goto LABEL_96;
  p_baseItem = &this->fields.baseItem;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v85 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v84 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v86 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v187.fields.currentCryptoKey = v85;
  *(_QWORD *)&v187.fields.fakeValue = v84;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v187, 0LL);
  if ( !v86 )
    goto LABEL_96;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v86,
                                       Instance,
                                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  v95 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(this->fields.svtId, 0LL);
  v96 = this->fields.userServantEntity;
  if ( !v96 )
    goto LABEL_96;
  v97 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v96->fields.limitCount, 0LL);
  if ( !v95 )
    goto LABEL_96;
  v98 = ServantLimitMaster__GetEntity(v95, v97, Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v99 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_96;
  v100 = *(_OWORD *)&v99->fields.userId.fields.fakeValue;
  v101 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v184.fields.currentCryptoKey = *(_OWORD *)&v99->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v184.fields.fakeValue = v100;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v183 = v184;
  v102 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v183, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(this->fields.svtId, 0LL);
  if ( !v101 )
    goto LABEL_96;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v101, v102, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_96;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !v98 )
    goto LABEL_96;
  this->fields.rarityId = v98->fields.rarity;
  if ( !userServantEntity )
    goto LABEL_96;
  v103 = (UserServantCollectionEntity_o *)Instance;
  Instance = UserServantEntity__getFrameType(userServantEntity, 0LL);
  this->fields.frameType = Instance;
  if ( !v103 )
    goto LABEL_96;
  UserServantCollectionEntity__getFriendShipRankInfo(v103, friendshipRank, &this->fields.friendshipMax, 0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank[0], 0LL);
  this->fields.isBase = 0;
  *(_WORD *)&this->fields.isCostOver = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity,
    0LL,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  this->fields.equipServantEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v110, v111, v112, v113, v114, v115);
  this->fields.equipIdList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v116, v117, v118, v119, v120, v121);
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_96;
  v123 = 0;
  while ( v123 < (signed int)memberItemList->max_length )
  {
    Instance = (int64_t)WarBoardPartyListViewItem__GetMemberItem(partyItem, v123, 0LL);
    if ( !Instance )
      goto LABEL_96;
    v124 = (PartyOrganizationListViewItem_o *)Instance;
    if ( *(_QWORD *)(Instance + 112) )
    {
      v125 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_96;
      v126 = *(_OWORD *)&v125->fields.id.fields.fakeValue;
      *(_OWORD *)&v184.fields.currentCryptoKey = *(_OWORD *)&v125->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v184.fields.fakeValue = v126;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v182 = v184;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v182, 0LL);
      v127 = v124->fields.userServantEntity;
      if ( !v127 )
        goto LABEL_96;
      v128 = *(_OWORD *)&v127->fields.id.fields.fakeValue;
      v129 = Instance;
      *(_OWORD *)&v181.fields.currentCryptoKey = *(_OWORD *)&v127->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v181.fields.fakeValue = v128;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v181, 0LL);
      if ( v129 == Instance )
      {
        this->fields.isSame = 0;
        this->fields.isBase = num == v123;
        this->fields.partyIndex = v123;
        EquipList = PartyOrganizationListViewItem__GetEquipList(v124, 0LL);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v141);
        break;
      }
      if ( num != v123 )
      {
        v130 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_96;
        v132 = *(_QWORD *)&v130[2].fields.currentCryptoKey;
        v131 = *(_QWORD *)&v130[2].fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v188.fields.currentCryptoKey = v132;
        *(_QWORD *)&v188.fields.fakeValue = v131;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v188, 0LL);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v124->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_96;
        v134 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(servantEntity[2], 0LL);
        if ( v134 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else if ( this->fields.commonRestrictionId == -1 )
        {
          v135 = v124->fields.servantEntity;
          if ( !v135 )
            goto LABEL_96;
          v137 = *(_QWORD *)&v135->fields.baseSvtId.fields.currentCryptoKey;
          v136 = *(_QWORD *)&v135->fields.baseSvtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v189.fields.currentCryptoKey = v137;
          *(_QWORD *)&v189.fields.fakeValue = v136;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v189, 0LL);
          if ( !*p_servantEntity )
            goto LABEL_96;
          v138 = Instance;
          v139 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576((*p_servantEntity)[2], 0LL);
          if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
          }
          Instance = CommonRestrictionMaster__GetIncludedRestrictionIds(v138, v139, 0LL);
          if ( (Instance & 0x80000000) == 0 )
            this->fields.commonRestrictionId = Instance;
        }
      }
    }
    memberItemList = partyItem->fields.memberItemList;
    ++v123;
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
  v143 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v143 )
    goto LABEL_96;
  IsChoice = UserServantEntity__IsChoice(v143, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  *(_DWORD *)&this->fields.isLockMode = 0;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_96;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  v145 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v145 )
    goto LABEL_96;
  IsLeave = UserServantEntity__IsLeave(v145, 0LL);
  this->fields.isEventUpVal = 0;
  this->fields.isLeave = IsLeave;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v147);
  v148 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v148 )
    goto LABEL_96;
  Instance = UserServantEntity__getUniqueSvtRestriction_21269292(
               v148,
               this->fields.questRestrictionInfo,
               0LL,
               num,
               this->fields.partyIndex,
               0LL);
  v149 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v149 )
    goto LABEL_96;
  IsUniqueIndividualityRestriction_21269692 = UserServantEntity__IsUniqueIndividualityRestriction_21269692(
                                                v149,
                                                this->fields.questRestrictionInfo,
                                                0LL,
                                                num,
                                                this->fields.partyIndex,
                                                0LL);
  this->fields.isFatigureRecover = 0;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_21269692;
  this->fields.fatigureTime = -1LL;
  v152 = this->fields.questRestrictionInfo;
  if ( v152 && v152->fields.isFatigure )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
      if ( *p_questRestrictionInfo )
      {
        v153 = (UserEventServantFatigueMaster_o *)Instance;
        eventId = (*p_questRestrictionInfo)->fields.eventId;
        v156 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v155 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v190.fields.currentCryptoKey = v156;
        *(_QWORD *)&v190.fields.fakeValue = v155;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v190, 0LL);
        if ( v153 )
        {
          if ( UserEventServantFatigueMaster__GetFatigueInfo(
                 v153,
                 &recoverAt,
                 &this->fields.isFatigureRecover,
                 eventId,
                 Instance,
                 0LL) )
          {
            v157 = recoverAt;
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            if ( v157 > NetworkManager__getTime(0LL) )
              this->fields.fatigureTime = recoverAt;
          }
          goto LABEL_81;
        }
      }
    }
LABEL_96:
    sub_B0D97C(Instance);
  }
LABEL_81:
  Instance = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v151);
  v158 = this->fields.userServantEntity;
  this->fields._IsAllOutBattle_k__BackingField = Instance & 1;
  if ( !v158 )
    goto LABEL_96;
  Instance = UserServantEntity__getDispLimitCount(v158, 0, 0LL);
  v159 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v159 )
    goto LABEL_96;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v159, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v161,
    v162,
    v163,
    v164,
    v165,
    v166);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_96;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v168,
    v169,
    v170,
    v171,
    v172,
    v173);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_96;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_96;
  this->fields.priority = *(_DWORD *)(Instance + 48);
  PartyServantListViewItem__InitAfterSecondSort(this, v174);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_96;
  v175 = *(_DWORD *)(Instance + 276);
  v176 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v176 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  this->fields.hpReinforceValue = v176->static_fields->StatusUpAdjustHp * v175;
  if ( !Instance )
    goto LABEL_96;
  this->fields.atkReinforceValue = v176->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
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
  if ( (byte_4217F9F & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4217F9F = 1;
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
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v32, 0LL);
  v7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
  if ( !v7 )
    goto LABEL_41;
  v8 = (int)this;
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v7[6], 0LL);
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
  if ( QuestRestrictionInfo__IsRestriction_30608704(
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
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v33, 0LL);
  v15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
  if ( !v15 )
    goto LABEL_41;
  v16 = (int)this;
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v15[6], 0LL);
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
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v34, 0LL);
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
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v35, 0LL);
  v27 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
  if ( !v27
    || (v28 = (int)this,
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                               v27[6],
                                               0LL),
        !v2->fields.userServantEntity)
    || (v29 = (int)this,
        this = (PartyServantListViewItem_o *)UserServantEntity__getDispLimitCount(v2->fields.userServantEntity, 0, 0LL),
        (v30 = v2->fields.baseItem) == 0LL)
    || !v24 )
  {
LABEL_41:
    sub_B0D97C(this);
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x22
  __int64 v10; // x23
  UserEventAlloutBattleMaster_o *v11; // x21
  struct QuestRestrictionInfo_o *v12; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4217FA4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4217FA4 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = questRestrictionInfo->fields.allOutBattleGroupNo;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (UserEventAlloutBattleMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v14, 0LL);
  v12 = this->fields.questRestrictionInfo;
  if ( !v12 || !v11 )
LABEL_14:
    sub_B0D97C(Instance);
  return UserEventAlloutBattleMaster__IsAlreadyUsedServant(
           v11,
           (int32_t)Instance,
           v12->fields.eventId,
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

  if ( (byte_4217FA7 & 1) == 0 )
  {
    sub_B0D8A4(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4217FA7 = 1;
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


System_String_o *__fastcall PartyServantListViewItem__GetRestrictionMessage(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t commonRestrictionId; // w19

  if ( (byte_4217FA3 & 1) == 0 )
  {
    sub_B0D8A4(&CommonRestrictionMaster_TypeInfo, method);
    byte_4217FA3 = 1;
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
  if ( (byte_4217FA8 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4217FA8 = 1;
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
      v2->fields.sortValue2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v8, 0LL);
      v2->fields.sortValue2B = 0LL;
      return;
    }
LABEL_16:
    sub_B0D97C(this);
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
  v2->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v9, 0LL);
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

  if ( (byte_4217FA1 & 1) == 0 )
  {
    sub_B0D8A4(&FilterKindList_TypeInfo, sort);
    sub_B0D8A4(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_B0D8A4(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_4217FA1 = 1;
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
                                        (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_B0D97C(ClassGroupFilterKindList);
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        sub_B0D840(
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
        sub_B0D840(
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
    ClassGroupFilterKindList = sub_B0D8BC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_70;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B0D8BC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_70:
      v43 = sub_B0D9A8(ClassGroupFilterKindList);
      sub_B0D948(v43, 0LL);
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
  ClassGroupFilterKindList = sub_B0D8BC(ListViewSort_FilterKind___TypeInfo, 1LL);
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
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall PartyServantListViewItem__SetEquipStatus(
        PartyServantListViewItem_o *this,
        System_Int64_array *equipIds,
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
  UserServantEntity_o **p_equipUserServantEntity; // x20
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
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
  struct System_Int64_array *v43; // x8
  UserServantEntity_o *v44; // x8
  __int64 v45; // x21
  __int64 v46; // x22
  UserServantEntity_o *v47; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v48; // x20
  __int64 v49; // x21
  __int64 v50; // x22
  System_Int32_array **Entity; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  v8 = equipIds;
  if ( (byte_4217FA0 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, equipIds);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, v11);
    sub_B0D8A4(&DataManager_TypeInfo, v12);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v14);
    sub_B0D8A4(&long___TypeInfo, v15);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    byte_4217FA0 = 1;
  }
  p_equipUserServantEntity = &this->fields.equipUserServantEntity;
  this->fields.equipUserServantEntity = 0LL;
  sub_B0D840(
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.equipIdList = 0LL;
  p_equipIdList = &this->fields.equipIdList;
  sub_B0D840((BattleServantConfConponent_o *)p_equipIdList, 0LL, v26, v27, v28, v29, v30, v31);
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
    v41 = (System_Int32_array **)sub_B0D964(v33, long___TypeInfo);
    if ( v41 )
      goto LABEL_14;
    sub_B0DC70(v40);
  }
  v42 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v42 = BalanceConfig_TypeInfo;
  }
  v41 = (System_Int32_array **)sub_B0D8BC(long___TypeInfo, (unsigned int)v42->static_fields->SvtEquipMax);
LABEL_14:
  *p_equipIdList = (struct System_Int64_array *)v41;
  sub_B0D840((BattleServantConfConponent_o *)p_equipIdList, v41, v34, v35, v36, v37, v38, v39);
  v8 = *p_equipIdList;
  if ( !*p_equipIdList )
    goto LABEL_39;
LABEL_15:
  if ( !v8->max_length )
    goto LABEL_40;
  if ( v8->m_Items[0] < 1 )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
  v43 = *p_equipIdList;
  if ( !*p_equipIdList )
    goto LABEL_39;
  if ( !v43->max_length )
  {
LABEL_40:
    v58 = sub_B0D9A8(Master_WarQuestSelectionMaster);
    sub_B0D948(v58, 0LL);
  }
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_39;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                                  (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
                                                                  p_equipUserServantEntity,
                                                                  v43->m_Items[0],
                                                                  (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    v44 = *p_equipUserServantEntity;
    if ( !*p_equipUserServantEntity )
      goto LABEL_39;
    v46 = *(_QWORD *)&v44->fields.svtId.fields.currentCryptoKey;
    v45 = *(_QWORD *)&v44->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v59.fields.currentCryptoKey = v46;
    *(_QWORD *)&v59.fields.fakeValue = v45;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v59, 0LL) >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
      v47 = *p_equipUserServantEntity;
      if ( *p_equipUserServantEntity )
      {
        v48 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
        v50 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
        v49 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v60.fields.currentCryptoKey = v50;
        *(_QWORD *)&v60.fields.fakeValue = v49;
        Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                        v60,
                                                                        0LL);
        if ( v48 )
        {
          Entity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            v48,
                                            (int32_t)Master_WarQuestSelectionMaster,
                                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          p_equipServantEntity->klass = (BattleServantConfConponent_c *)Entity;
          sub_B0D840(p_equipServantEntity, Entity, v52, v53, v54, v55, v56, v57);
          return;
        }
      }
LABEL_39:
      sub_B0D97C(Master_WarQuestSelectionMaster);
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
  if ( (byte_4217FA2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantFilterMaster___, sort);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B0D8A4(&PartyServantListViewItem_TypeInfo, v8);
    sub_B0D8A4(&PartyServantListViewManager_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    this = (PartyServantListViewItem_o *)sub_B0D8A4(&TutorialFlag_TypeInfo, v11);
    byte_4217FA2 = 1;
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
          this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
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
          IsCampaignServant = UserServantEntity__getEventUpVal_21263896((UserServantEntity_o *)this, v20, v19, 0LL);
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
      this = (PartyServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_204;
      this = (PartyServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
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
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v93, 0LL);
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
          if ( !TutorialFlag__Get_28088484(126, 0LL) )
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
        sub_B0D97C(this);
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
  IconLabelInfo__Set_26821248((IconLabelInfo_o *)this, 7, servantEntity->fields.cost, 0, cost, 0, 0, 0, 0LL);
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
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
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
      IconLabelInfo__Set_26821248(
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
      UserServantEntity__getTreasureDeviceInfo_21271516((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
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
        IconLabelInfo__Set_26821248((IconLabelInfo_o *)this, v63, v62, adjustHp, v60, 0, 0, 0, 0LL);
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
        IconLabelInfo__Set_26821248((IconLabelInfo_o *)this, v56, hpReinforceValue, adjustAtk, 0, 0, 0, 0, 0LL);
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
      v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v94, 0LL);
      iconLabelInfo1 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v73 = v71;
      friendship = v4->fields.friendship;
      v4->fields.sortValue1 = v73;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
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
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v96, 0LL);
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
      IconLabelInfo__Set_26821248(iconLabelInfo2, 2, lv, (int32_t)this, 0, 0, 0, 0, 0LL);
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
    sub_B0D97C(this);
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


System_ValueTuple_int__int__EventCombineEntity_CalcType__array *__fastcall PartyServantListViewItem__get_FriendshipUpValTuple(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._FriendshipUpValTuple_k__BackingField;
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


bool __fastcall PartyServantListViewItem__get_IsFocus(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsFocus_k__BackingField;
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

  if ( (byte_4217FA6 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_18452/*"error"*/, v3);
    byte_4217FA6 = 1;
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

  if ( (byte_4217FA5 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4217FA5 = 1;
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
    sub_B0D97C(this);
  return baseItem->fields._WaveEnemyClassIds_k__BackingField;
}


void __fastcall PartyServantListViewItem__set_FriendshipUpValTuple(
        PartyServantListViewItem_o *this,
        System_ValueTuple_int__int__EventCombineEntity_CalcType__array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._FriendshipUpValTuple_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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


void __fastcall PartyServantListViewItem__set_IsFocus(
        PartyServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsFocus_k__BackingField = value;
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