void __fastcall PartyServantListViewItem___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  PartyServantListViewItem_c *v4; // x8

  if ( (byte_42EC3B5 & 1) == 0 )
  {
    sub_B5D5C4(&PartyServantListViewItem_TypeInfo, v1, v2, v3);
    byte_42EC3B5 = 1;
  }
  PartyServantListViewItem_TypeInfo->static_fields->PRIORITY_NORMAL = 0LL;
  v4 = PartyServantListViewItem_TypeInfo;
  PartyServantListViewItem_TypeInfo->static_fields->PRIORITY_TOP = 10LL;
  v4->static_fields->PRIORITY_LOWEST = -10LL;
  v4->static_fields->PRIORITY_LOWEST_HEROIN_LEAVE = -20LL;
}


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
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  int v109; // w1
  int v110; // w2
  __int64 v111; // x3
  int v112; // w1
  int v113; // w2
  __int64 v114; // x3
  int v115; // w1
  int v116; // w2
  __int64 v117; // x3
  int v118; // w1
  int v119; // w2
  __int64 v120; // x3
  IconLabelInfo_o *v121; // x22
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  IconLabelInfo_o *v128; // x22
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  IconLabelInfo_o *v135; // x22
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  int64_t Instance; // x0
  const MethodInfo *v143; // x1
  struct PartyOrganizationListViewItem_o *Member; // x0
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v171; // x21
  __int64 v172; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v173; // x20
  struct ServantEntity_o *v174; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // x20
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  ServantLimitMaster_o *v182; // x21
  struct UserServantEntity_o *v183; // x8
  int32_t v184; // w28
  ServantLimitEntity_o *v185; // x21
  UserServantEntity_o *v186; // x8
  __int128 v187; // q1
  UserServantCollectionMaster_o *v188; // x28
  int64_t v189; // x23
  UserServantCollectionEntity_o *v190; // x28
  System_String_array **v191; // x2
  System_String_array **v192; // x3
  System_Boolean_array **v193; // x4
  System_Int32_array **v194; // x5
  System_Int32_array *v195; // x6
  System_Int32_array *v196; // x7
  System_String_array **v197; // x2
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  System_String_array **v203; // x2
  System_String_array **v204; // x3
  System_Boolean_array **v205; // x4
  System_Int32_array **v206; // x5
  System_Int32_array *v207; // x6
  System_Int32_array *v208; // x7
  int32_t i; // w21
  PartyOrganizationListViewItem_o *v210; // x28
  UserServantEntity_o *v211; // x8
  __int128 v212; // q0
  struct UserServantEntity_o *v213; // x8
  __int128 v214; // q0
  int64_t v215; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v216; // x8
  __int64 v217; // x23
  __int64 v218; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *servantEntity; // x8
  int v220; // w23
  struct ServantEntity_o *v221; // x8
  __int64 v222; // x23
  __int64 v223; // x25
  int32_t v224; // w28
  int32_t v225; // w23
  int32_t IncludedRestrictionIds; // w0
  BalanceConfig_c *v227; // x0
  System_Int64_array *EquipList; // x0
  const MethodInfo *v229; // x2
  int32_t cost; // w21
  UserServantEntity_o *v231; // x8
  bool IsChoice; // w0
  UserServantEntity_o *v233; // x8
  __int128 v234; // q0
  __int64 v235; // x20
  bool v236; // zf
  bool v237; // w8
  UserServantEntity_o *v238; // x8
  bool IsLeave; // w0
  const MethodInfo *v240; // x1
  UserServantEntity_o *v241; // x8
  UserServantEntity_o *v242; // x8
  bool IsUniqueIndividualityRestriction_21846248; // w0
  const MethodInfo *v244; // x1
  struct QuestRestrictionInfo_o *v245; // x8
  UserEventServantFatigueMaster_o *v246; // x21
  int32_t eventId; // w28
  __int64 v248; // x23
  __int64 v249; // x25
  int64_t v250; // x20
  bool AllOutBattleAlreadyUsed; // w0
  struct QuestRestrictionInfo_o *v252; // x8
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x20
  UserServantEntity_o *v254; // x8
  UserEventDataLostEntity_o *v255; // x20
  __int64 v256; // x21
  __int64 v257; // x23
  UserServantEntity_o *v258; // x9
  UserEventDataLostEntity_o *v259; // x20
  __int64 v260; // x21
  __int64 v261; // x28
  int32_t v262; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr10_16
  UserServantEntity_o *v264; // x8
  int64_t v265; // x20
  __int64 v266; // x21
  __int64 v267; // x23
  int32_t v268; // w21
  int32_t Rarity; // w28
  const MethodInfo *v270; // x7
  System_String_o **p_skillName; // x1
  int *p_actMaxRarity; // x2
  int32_t v273; // w3
  int32_t v274; // w4
  int32_t partyIndex; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v276; // kr20_16
  UserServantEntity_o *v277; // x8
  int64_t v278; // x20
  __int64 v279; // x21
  __int64 v280; // x23
  int32_t v281; // w21
  int32_t v282; // w27
  struct QuestRestrictionInfo_o *v283; // x8
  EventServantPointRankMaster_o *v284; // x20
  UserServantEntity_o *v285; // x8
  __int128 v286; // q0
  UserEventServantPointMaster_o *v287; // x21
  int64_t v288; // x26
  int32_t *p_SvtPoint_k__BackingField; // x22
  int32_t v290; // w21
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  System_Collections_Generic_List_int__o *v293; // x20
  PartyListViewItem_array *v294; // x9
  __int64 v295; // x8
  unsigned __int64 v296; // x25
  int32_t v297; // w24
  PartyListViewItem_o *v298; // x21
  int32_t j; // w26
  PartyOrganizationListViewItem_o *v300; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v301; // kr30_16
  UserServantEntity_o *v302; // x8
  struct UserServantEntity_o *v303; // x9
  __int128 v304; // q0
  System_Int64_array *v305; // x0
  const MethodInfo *v306; // x2
  __int64 v307; // x21
  __int64 v308; // x23
  System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___o *v309; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v310; // x24
  EventQuestMaster_o *v311; // x21
  _BOOL8 v312; // x0
  __int64 v313; // x1
  EventCampaignEntity_o *current; // x24
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x26
  __int64 v316; // x27
  __int64 v317; // x28
  int32_t v318; // w1
  int32_t v319; // w26
  int32_t FriendshipBonusValue; // w0
  int32_t calcType; // w3
  int32_t v322; // w2
  const MethodInfo_2BECCD8 *v323; // x5
  __int64 v324; // x0
  __int64 v325; // x1
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v326; // x0
  System_String_array **v327; // x2
  System_String_array **v328; // x3
  System_Boolean_array **v329; // x4
  System_Int32_array **v330; // x5
  System_Int32_array *v331; // x6
  System_Int32_array *v332; // x7
  UserServantEntity_o *v333; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v335; // x2
  System_String_array **v336; // x3
  System_Boolean_array **v337; // x4
  System_Int32_array **v338; // x5
  System_Int32_array *v339; // x6
  System_Int32_array *v340; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v342; // x2
  System_String_array **v343; // x3
  System_Boolean_array **v344; // x4
  System_Int32_array **v345; // x5
  System_Int32_array *v346; // x6
  System_Int32_array *v347; // x7
  int v348; // w20
  BalanceConfig_c *v349; // x8
  __int64 v350; // x0
  struct PartyOrganizationListViewItem_o **p_baseItem; // [xsp+8h] [xbp-1C8h]
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+10h] [xbp-1C0h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+18h] [xbp-1B8h]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+30h] [xbp-1A0h]
  UserServantEntity_o **p_userServantEntity; // [xsp+38h] [xbp-198h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v358; // [xsp+40h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v359; // [xsp+60h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v360; // [xsp+80h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v361; // [xsp+A0h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v362; // [xsp+C0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v363; // [xsp+E0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v364; // [xsp+100h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v365; // [xsp+120h] [xbp-B0h] BYREF
  UserEventServantPointEntity_o *v366; // [xsp+138h] [xbp-98h] BYREF
  int32_t actMaxRarity; // [xsp+144h] [xbp-8Ch] BYREF
  System_String_o *skillName; // [xsp+148h] [xbp-88h] BYREF
  int v369; // [xsp+154h] [xbp-7Ch] BYREF
  __int64 v370; // [xsp+158h] [xbp-78h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+160h] [xbp-70h] BYREF
  int64_t recoverAt; // [xsp+168h] [xbp-68h] BYREF
  int32_t friendshipRank[3]; // [xsp+174h] [xbp-5Ch] BYREF
  System_ValueTuple_int__int__EventCombineEntity_CalcType__o v374; // 0:x0.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v375; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v376; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v377; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v378; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v379; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v380; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v381; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v382; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v383; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v384; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v385; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v386; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v387; // 0:x0.16

  if ( (byte_42EC3A9 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, index, (_DWORD)userServantEntity, baseDeckItemList);
    sub_B5D5C4(&CommonRestrictionMaster_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventQuestMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, v25, v26, v27);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v28, v29, v30);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v31, v32, v33);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v34, v35, v36);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v37, v38, v39);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v40, v41, v42);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v43, v44, v45);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v46, v47, v48);
    sub_B5D5C4(&DataManager_TypeInfo, v49, v50, v51);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v52, v53, v54);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v55, v56, v57);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v58, v59, v60);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v61, v62, v63);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v64, v65, v66);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v67, v68, v69);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v70, v71, v72);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__,
      v73,
      v74,
      v75);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v76, v77, v78);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v79, v80, v81);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v82, v83, v84);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__,
      v85,
      v86,
      v87);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__,
      v88,
      v89,
      v90);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v91, v92, v93);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v94, v95, v96);
    sub_B5D5C4(
      &System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo,
      v97,
      v98,
      v99);
    sub_B5D5C4(&NetworkManager_TypeInfo, v100, v101, v102);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v103, v104, v105);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v106, v107, v108);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v109, v110, v111);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v112, v113, v114);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v115, v116, v117);
    sub_B5D5C4(&Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__, v118, v119, v120);
    byte_42EC3A9 = 1;
  }
  friendshipRank[0] = 0;
  entity = 0LL;
  recoverAt = 0LL;
  v370 = 0LL;
  v369 = 0;
  skillName = 0LL;
  actMaxRarity = 0;
  v366 = 0LL;
  memset(&v365, 0, sizeof(v365));
  v121 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v121, 0LL);
  this->fields.iconLabelInfo1 = v121;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v121,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
  v128 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v128, 0LL);
  this->fields.iconLabelInfo2 = v128;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v128,
    v129,
    v130,
    v131,
    v132,
    v133,
    v134);
  v135 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v135, 0LL);
  this->fields.iconLabelInfo3 = v135;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo3,
    (System_Int32_array **)v135,
    v136,
    v137,
    v138,
    v139,
    v140,
    v141);
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_253;
  Member = PartyListViewItem__GetMember(partyItem, num, 0LL);
  this->fields.baseItem = Member;
  p_baseItem = &this->fields.baseItem;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseItem,
    (System_Int32_array **)Member,
    v145,
    v146,
    v147,
    v148,
    v149,
    v150);
  baseItem = this->fields.baseItem;
  this->fields._PartyListViewItemMenuKind_k__BackingField = partyItem->fields.menuKind;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_253;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0LL;
  this->fields.userServantEntity = userServantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v151,
    v152,
    v153,
    v154,
    v155,
    v156);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v158,
    v159,
    v160,
    v161,
    v162,
    v163);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v164,
    v165,
    v166,
    v167,
    v168,
    v169);
  p_userServantEntity = &this->fields.userServantEntity;
  if ( !this->fields.userServantEntity )
    goto LABEL_253;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_253;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v172 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v171 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v173 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v375.fields.currentCryptoKey = v172;
  *(_QWORD *)&v375.fields.fakeValue = v171;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v375, 0LL);
  if ( !v173 )
    goto LABEL_253;
  v174 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     v173,
                                     Instance,
                                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v174;
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v174,
    v176,
    v177,
    v178,
    v179,
    v180,
    v181);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_253;
  v182 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.svtId, 0LL);
  v183 = this->fields.userServantEntity;
  if ( !v183 )
    goto LABEL_253;
  v184 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v183->fields.limitCount, 0LL);
  if ( !v182 )
    goto LABEL_253;
  v185 = ServantLimitMaster__GetEntity(v182, v184, Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_253;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v186 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_253;
  v187 = *(_OWORD *)&v186->fields.userId.fields.fakeValue;
  v188 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v364.fields.currentCryptoKey = *(_OWORD *)&v186->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v364.fields.fakeValue = v187;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v363 = v364;
  v189 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v363, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.svtId, 0LL);
  if ( !v188 )
    goto LABEL_253;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v188, v189, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_253;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !v185 )
    goto LABEL_253;
  v190 = (UserServantCollectionEntity_o *)Instance;
  Instance = (int64_t)userServantEntity;
  this->fields.rarityId = v185->fields.rarity;
  if ( !userServantEntity )
    goto LABEL_253;
  Instance = UserServantEntity__getFrameType(userServantEntity, 0LL);
  this->fields.frameType = Instance;
  if ( !v190 )
    goto LABEL_253;
  UserServantCollectionEntity__getFriendShipRankInfo(v190, friendshipRank, &this->fields.friendshipMax, 0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank[0], 0LL);
  this->fields.isBase = 0;
  *(_WORD *)&this->fields.isCostOver = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity,
    0LL,
    v191,
    v192,
    v193,
    v194,
    v195,
    v196);
  this->fields.equipServantEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v197, v198, v199, v200, v201, v202);
  this->fields.equipIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v203, v204, v205, v206, v207, v208);
  for ( i = 0; ; ++i )
  {
    v227 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v227 = BalanceConfig_TypeInfo;
    }
    if ( i >= v227->static_fields->DeckMemberMax )
      break;
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, i, 0LL);
    if ( !Instance )
      goto LABEL_253;
    v210 = (PartyOrganizationListViewItem_o *)Instance;
    if ( *(_QWORD *)(Instance + 112) )
    {
      v211 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_253;
      v212 = *(_OWORD *)&v211->fields.id.fields.fakeValue;
      *(_OWORD *)&v364.fields.currentCryptoKey = *(_OWORD *)&v211->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v364.fields.fakeValue = v212;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v362 = v364;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v362, 0LL);
      v213 = v210->fields.userServantEntity;
      if ( !v213 )
        goto LABEL_253;
      v214 = *(_OWORD *)&v213->fields.id.fields.fakeValue;
      v215 = Instance;
      *(_OWORD *)&v361.fields.currentCryptoKey = *(_OWORD *)&v213->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v361.fields.fakeValue = v214;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v361, 0LL);
      if ( v215 == Instance )
      {
        this->fields.isSame = 0;
        this->fields.isBase = num == i;
        this->fields.partyIndex = i;
        EquipList = PartyOrganizationListViewItem__GetEquipList(v210, 0LL);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v229);
        break;
      }
      if ( num != i )
      {
        v216 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_253;
        v218 = *(_QWORD *)&v216[2].fields.currentCryptoKey;
        v217 = *(_QWORD *)&v216[2].fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v376.fields.currentCryptoKey = v218;
        *(_QWORD *)&v376.fields.fakeValue = v217;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v376, 0LL);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v210->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_253;
        v220 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(servantEntity[2], 0LL);
        if ( v220 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else if ( this->fields.commonRestrictionId == -1 )
        {
          v221 = v210->fields.servantEntity;
          if ( !v221 )
            goto LABEL_253;
          v223 = *(_QWORD *)&v221->fields.baseSvtId.fields.currentCryptoKey;
          v222 = *(_QWORD *)&v221->fields.baseSvtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v377.fields.currentCryptoKey = v223;
          *(_QWORD *)&v377.fields.fakeValue = v222;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v377, 0LL);
          if ( !*p_servantEntity )
            goto LABEL_253;
          v224 = Instance;
          v225 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_servantEntity)[2], 0LL);
          if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
          }
          IncludedRestrictionIds = CommonRestrictionMaster__GetIncludedRestrictionIds(v224, v225, 0LL);
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
  v231 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v231 )
    goto LABEL_253;
  IsChoice = UserServantEntity__IsChoice(v231, 0LL);
  *(_WORD *)&this->fields.isSwapLock = 0;
  *(_WORD *)&this->fields.isLockMode = 0;
  this->fields.isChoice = IsChoice;
  this->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_253;
  v233 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_253;
  v234 = *(_OWORD *)&v233->fields.id.fields.fakeValue;
  v235 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v364.fields.currentCryptoKey = *(_OWORD *)&v233->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v364.fields.fakeValue = v234;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v360 = v364;
  v236 = v235 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v360, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  v237 = v236;
  this->fields.isPush = v237;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_253;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  v238 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v238 )
    goto LABEL_253;
  IsLeave = UserServantEntity__IsLeave(v238, 0LL);
  this->fields.isEventUpVal = 0;
  this->fields.isLeave = IsLeave;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v240);
  v241 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v241 )
    goto LABEL_253;
  Instance = UserServantEntity__getUniqueSvtRestriction_21845848(
               v241,
               this->fields.questRestrictionInfo,
               partyItem,
               num,
               this->fields.partyIndex,
               0LL);
  v242 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v242 )
    goto LABEL_253;
  IsUniqueIndividualityRestriction_21846248 = UserServantEntity__IsUniqueIndividualityRestriction_21846248(
                                                v242,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                this->fields.partyIndex,
                                                0LL);
  this->fields.isFatigureRecover = 0;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_21846248;
  this->fields.fatigureTime = -1LL;
  v245 = this->fields.questRestrictionInfo;
  if ( v245 && v245->fields.isFatigure )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_253;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !*p_questRestrictionInfo )
      goto LABEL_253;
    v246 = (UserEventServantFatigueMaster_o *)Instance;
    eventId = (*p_questRestrictionInfo)->fields.eventId;
    v249 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v248 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v378.fields.currentCryptoKey = v249;
    *(_QWORD *)&v378.fields.fakeValue = v248;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v378, 0LL);
    if ( !v246 )
      goto LABEL_253;
    if ( UserEventServantFatigueMaster__GetFatigueInfo(
           v246,
           &recoverAt,
           &this->fields.isFatigureRecover,
           eventId,
           Instance,
           0LL) )
    {
      v250 = recoverAt;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( v250 > NetworkManager__getTime(0LL) )
        this->fields.fatigureTime = recoverAt;
    }
  }
  AllOutBattleAlreadyUsed = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v244);
  v252 = this->fields.questRestrictionInfo;
  this->fields._IsAllOutBattle_k__BackingField = AllOutBattleAlreadyUsed;
  if ( v252 && v252->fields.isDataLostBattle )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
      v254 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_253;
      v255 = entity;
      v257 = *(_QWORD *)&v254->fields.svtId.fields.currentCryptoKey;
      v256 = *(_QWORD *)&v254->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v379.fields.currentCryptoKey = v257;
      *(_QWORD *)&v379.fields.fakeValue = v256;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v379, 0LL);
      if ( !v255 )
        goto LABEL_253;
      Instance = UserEventDataLostEntity__IsRestart(v255, Instance, 0LL);
      v258 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_253;
      v259 = entity;
      v261 = *(_QWORD *)&v258->fields.svtId.fields.currentCryptoKey;
      v260 = *(_QWORD *)&v258->fields.svtId.fields.fakeValue;
      if ( (Instance & 1) != 0 )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v380.fields.currentCryptoKey = v261;
        *(_QWORD *)&v380.fields.fakeValue = v260;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v380, 0LL);
        if ( !v259 )
          goto LABEL_253;
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(v259, Instance, 0LL);
      }
      else
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v387.fields.currentCryptoKey = v261;
        *(_QWORD *)&v387.fields.fakeValue = v260;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v387, 0LL);
        if ( !v259 )
          goto LABEL_253;
        if ( UserEventDataLostEntity__IsDataLost(v259, Instance, 0LL) )
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
    v262 = (*p_questRestrictionInfo)->fields.eventId;
  else
    v262 = -1;
  if ( !this->fields.isBase )
  {
    partyIndex = this->fields.partyIndex;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(EquipSvtId, 0LL) >= 1 )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v264 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_253;
    v265 = Instance;
    v267 = *(_QWORD *)&v264->fields.svtId.fields.currentCryptoKey;
    v266 = *(_QWORD *)&v264->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v381.fields.currentCryptoKey = v267;
    *(_QWORD *)&v381.fields.fakeValue = v266;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v381, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_253;
    v268 = Instance;
    Rarity = UserServantEntity__getRarity(*p_userServantEntity, 0LL);
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, num, 0LL);
    if ( !Instance )
      goto LABEL_253;
    v382 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v382, 0LL);
    if ( !v265 )
      goto LABEL_253;
    p_skillName = (System_String_o **)&v370;
    p_actMaxRarity = &v369;
    v273 = v268;
    v274 = Rarity;
LABEL_154:
    this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                     (PartyOrganizationUtility_o *)Instance,
                                     p_skillName,
                                     p_actMaxRarity,
                                     v273,
                                     v274,
                                     Instance,
                                     v262,
                                     v270);
    goto LABEL_155;
  }
  partyIndex = this->fields.partyIndex;
  if ( (partyIndex & 0x80000000) == 0 )
  {
LABEL_138:
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, partyIndex, 0LL);
    if ( !Instance )
      goto LABEL_253;
    v276 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v276, 0LL) < 1 )
      goto LABEL_155;
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v277 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_253;
    v278 = Instance;
    v280 = *(_QWORD *)&v277->fields.svtId.fields.currentCryptoKey;
    v279 = *(_QWORD *)&v277->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v383.fields.currentCryptoKey = v280;
    *(_QWORD *)&v383.fields.fakeValue = v279;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v383, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_253;
    v281 = Instance;
    v282 = UserServantEntity__getRarity(*p_userServantEntity, 0LL);
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, this->fields.partyIndex, 0LL);
    if ( !Instance )
      goto LABEL_253;
    v384 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v384, 0LL);
    if ( !v278 )
      goto LABEL_253;
    p_skillName = &skillName;
    p_actMaxRarity = &actMaxRarity;
    v273 = v281;
    v274 = v282;
    goto LABEL_154;
  }
LABEL_155:
  v283 = this->fields.questRestrictionInfo;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  this->fields._SvtPointRank_k__BackingField = 0;
  this->fields._SvtPoint_k__BackingField = 0;
  if ( v283 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !Instance )
      goto LABEL_253;
    v284 = (EventServantPointRankMaster_o *)Instance;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v262, 0LL) )
    {
      this->fields._IsDispSvtPoint_k__BackingField = 1;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v285 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_253;
      v286 = *(_OWORD *)&v285->fields.userId.fields.fakeValue;
      v287 = (UserEventServantPointMaster_o *)Instance;
      *(_OWORD *)&v364.fields.currentCryptoKey = *(_OWORD *)&v285->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v364.fields.fakeValue = v286;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v359 = v364;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v359, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_253;
      v288 = Instance;
      Instance = UserServantEntity__getSvtId(*p_userServantEntity, 0LL);
      if ( !v287 )
        goto LABEL_253;
      p_SvtPoint_k__BackingField = &this->fields._SvtPoint_k__BackingField;
      if ( UserEventServantPointMaster__TryGetEntity(v287, &v366, v288, v262, Instance, 0LL) )
      {
        Instance = (int64_t)v366;
        if ( !v366 )
          goto LABEL_253;
        *p_SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v366, 0LL);
      }
      Instance = (int64_t)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_253;
      v290 = *p_SvtPoint_k__BackingField;
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
      EnableEntity = EventServantPointRankMaster__GetEnableEntity(v284, v262, v290, SvtId, 0LL);
      if ( EnableEntity )
        this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
    }
  }
  if ( this->fields._PartyListViewItemMenuKind_k__BackingField == 9 )
  {
    v293 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v293,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
    v294 = baseDeckItemList;
    if ( !baseDeckItemList )
      goto LABEL_253;
    this->fields._MaxWave_k__BackingField = *(_QWORD *)&baseDeckItemList->max_length;
    v295 = *(_QWORD *)&baseDeckItemList->max_length;
    if ( (int)v295 < 1 )
      goto LABEL_204;
    v296 = 0LL;
    v297 = 1;
    do
    {
      if ( v296 >= (unsigned int)v295 )
      {
        v350 = sub_B5D6C8(Instance);
        sub_B5D668(v350, 0LL);
      }
      v298 = v294->m_Items[v296];
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
        if ( !v298 )
          goto LABEL_253;
        Instance = (int64_t)PartyListViewItem__GetMember(v298, j, 0LL);
        if ( !Instance )
          goto LABEL_253;
        v300 = (PartyOrganizationListViewItem_o *)Instance;
        if ( *(_QWORD *)(Instance + 112) )
        {
          v301 = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v301, 0LL);
          if ( !v293 )
            goto LABEL_253;
          System_Collections_Generic_List_int___Add(
            v293,
            Instance,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          if ( v297 )
          {
            v302 = *p_userServantEntity;
            if ( !*p_userServantEntity )
              goto LABEL_253;
            v303 = v300->fields.userServantEntity;
            if ( !v303 )
              goto LABEL_253;
            v304 = *(_OWORD *)&v303->fields.id.fields.fakeValue;
            *(_OWORD *)&v358.fields.currentCryptoKey = *(_OWORD *)&v303->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v358.fields.fakeValue = v304;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_44902916(&v302->fields.id, &v358, 0LL) )
            {
              v305 = PartyOrganizationListViewItem__GetEquipList(v300, 0LL);
              PartyServantListViewItem__SetEquipStatus(this, v305, v306);
              this->fields._OrganizedWave_k__BackingField = v297;
              v297 = 0;
              this->fields._IsClearedWave_k__BackingField = v298->fields._IsClearedWave_k__BackingField;
            }
          }
        }
      }
      v294 = baseDeckItemList;
      ++v296;
      if ( v297 )
        ++v297;
      else
        v297 = 0;
      LODWORD(v295) = baseDeckItemList->max_length;
    }
    while ( (__int64)v296 < (int)v295 );
    if ( v297 )
    {
LABEL_204:
      v308 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v307 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v385.fields.currentCryptoKey = v308;
      *(_QWORD *)&v385.fields.fakeValue = v307;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v385, 0LL);
      if ( !v293 )
        goto LABEL_253;
      if ( System_Collections_Generic_List_int___Contains(
             v293,
             Instance,
             (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        this->fields.isSame = 1;
      }
    }
  }
  else
  {
    this->fields._OrganizedWave_k__BackingField = 0;
  }
  v309 = (System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___o *)sub_B5D694(System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
  System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType_____ctor(
    v309,
    (const MethodInfo_300B028 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
  if ( *p_questRestrictionInfo )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_253;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    if ( !Instance )
      goto LABEL_253;
    Instance = (int64_t)EventCampaignMaster__GetFriendshipUpCampaigns((EventCampaignMaster_o *)Instance, 0LL);
    if ( Instance )
    {
      v310 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_253;
      v311 = (EventQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventQuestMaster___);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v364,
        v310,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
      v365 = *(System_Collections_Generic_List_Enumerator_T__o *)&v364.fields.currentCryptoKey;
      while ( 1 )
      {
        v312 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 &v365,
                 (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v312 )
          break;
        current = (EventCampaignEntity_o *)v365.fields.current;
        if ( !v365.fields.current )
          sub_B5D69C(v312, v313);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v365.fields.current[2].monitor;
        if ( monitor && monitor[1].monitor )
        {
          v317 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
          v316 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v386.fields.currentCryptoKey = v317;
          *(_QWORD *)&v386.fields.fakeValue = v316;
          v318 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v386, 0LL);
          v312 = System_Linq_Enumerable__Contains_int_(
                   monitor,
                   v318,
                   (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
          if ( !v312 )
            continue;
        }
        if ( !*p_questRestrictionInfo )
          sub_B5D69C(v312, v313);
        if ( !v311 )
          sub_B5D69C(v312, v313);
        if ( !EventQuestMaster__IsEventNotIncluded(
                v311,
                current->fields.eventId,
                (*p_questRestrictionInfo)->fields.questId,
                (*p_questRestrictionInfo)->fields.questPhase,
                7,
                0LL) )
        {
          v319 = current->fields.eventId;
          FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0LL);
          calcType = current->fields.calcType;
          v322 = FriendshipBonusValue;
          LODWORD(v364.fields.hiddenValue) = 0;
          v364.fields.currentCryptoKey = 0LL;
          *(_QWORD *)&v374.fields.Item1 = &v364;
          v374.fields.Item3 = v319;
          System_ValueTuple_int__int__EventCombineEntity_CalcType____ctor(
            v374,
            v322,
            calcType,
            Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__,
            v323);
          if ( !v309 )
            sub_B5D69C(v324, v325);
          System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____Add(
            v309,
            *(System_ValueTuple_int__int__EventCombineEntity_CalcType__o *)&v364.fields.currentCryptoKey,
            (const MethodInfo_300BDCC *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__);
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v365,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    }
  }
  if ( !v309 )
    goto LABEL_253;
  v326 = System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ToArray(
           v309,
           (const MethodInfo_300E094 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
  this->fields._FriendshipUpValTuple_k__BackingField = v326;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (System_Int32_array **)v326,
    v327,
    v328,
    v329,
    v330,
    v331,
    v332);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_253;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v333 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v333 )
    goto LABEL_253;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v333, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v335,
    v336,
    v337,
    v338,
    v339,
    v340);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_253;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v342,
    v343,
    v344,
    v345,
    v346,
    v347);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_253;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_253;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_253;
  this->fields.priority = *(_DWORD *)(Instance + 48);
  PartyServantListViewItem__InitAfterSecondSort(this, v143);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_253;
  v348 = *(_DWORD *)(Instance + 276);
  v349 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v349 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  this->fields.hpReinforceValue = v349->static_fields->StatusUpAdjustHp * v348;
  if ( !Instance )
    goto LABEL_253;
  this->fields.atkReinforceValue = v349->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
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
LABEL_253:
    sub_B5D69C(Instance, v143);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


void __fastcall PartyServantListViewItem___ctor_32065412(
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  IconLabelInfo_o *v56; // x21
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  IconLabelInfo_o *v63; // x21
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  IconLabelInfo_o *v70; // x21
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  int64_t Instance; // x0
  const MethodInfo *v78; // x1
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
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
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct UserServantEntity_o **p_userServantEntity; // x22
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v107; // x21
  __int64 v108; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v109; // x20
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // x27
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  ServantLimitMaster_o *v118; // x20
  struct UserServantEntity_o *v119; // x8
  int32_t v120; // w21
  ServantLimitEntity_o *v121; // x20
  struct UserServantEntity_o *v122; // x8
  __int128 v123; // q1
  UserServantCollectionMaster_o *v124; // x21
  int64_t v125; // x26
  UserServantCollectionEntity_o *v126; // x21
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  int32_t v146; // w28
  PartyOrganizationListViewItem_o *v147; // x20
  struct UserServantEntity_o *v148; // x8
  __int128 v149; // q0
  struct UserServantEntity_o *v150; // x8
  __int128 v151; // q0
  int64_t v152; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v153; // x8
  __int64 v154; // x21
  __int64 v155; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *servantEntity; // x8
  int v157; // w21
  struct ServantEntity_o *v158; // x8
  __int64 v159; // x20
  __int64 v160; // x21
  int32_t v161; // w20
  int32_t v162; // w21
  System_Int64_array *EquipList; // x0
  const MethodInfo *v164; // x2
  int32_t cost; // w20
  UserServantEntity_o *v166; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v168; // x8
  bool IsLeave; // w0
  const MethodInfo *v170; // x1
  UserServantEntity_o *v171; // x8
  UserServantEntity_o *v172; // x8
  bool IsUniqueIndividualityRestriction_21846248; // w0
  const MethodInfo *v174; // x1
  struct QuestRestrictionInfo_o *v175; // x8
  UserEventServantFatigueMaster_o *v176; // x21
  int32_t eventId; // w23
  __int64 v178; // x24
  __int64 v179; // x25
  int64_t v180; // x20
  UserServantEntity_o *v181; // x8
  UserServantEntity_o *v182; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v184; // x2
  System_String_array **v185; // x3
  System_Boolean_array **v186; // x4
  System_Int32_array **v187; // x5
  System_Int32_array *v188; // x6
  System_Int32_array *v189; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v191; // x2
  System_String_array **v192; // x3
  System_Boolean_array **v193; // x4
  System_Int32_array **v194; // x5
  System_Int32_array *v195; // x6
  System_Int32_array *v196; // x7
  int v197; // w20
  BalanceConfig_c *v198; // x8
  struct PartyOrganizationListViewItem_o **p_baseItem; // [xsp+0h] [xbp-110h]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+8h] [xbp-108h]
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+10h] [xbp-100h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+18h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v203; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v204; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v205; // [xsp+60h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v206; // [xsp+80h] [xbp-90h]
  int64_t recoverAt; // [xsp+A8h] [xbp-68h] BYREF
  int32_t friendshipRank[3]; // [xsp+B4h] [xbp-5Ch] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v209; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v210; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v211; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v212; // 0:x0.16

  if ( (byte_42EC3AA & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, index, (_DWORD)userServantEntity, partyItem);
    sub_B5D5C4(&CommonRestrictionMaster_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v23, v24, v25);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v26, v27, v28);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v29, v30, v31);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v32, v33, v34);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v35, v36, v37);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v38, v39, v40);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&NetworkManager_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v53, v54, v55);
    byte_42EC3AA = 1;
  }
  friendshipRank[0] = 0;
  recoverAt = 0LL;
  v56 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v56, 0LL);
  this->fields.iconLabelInfo1 = v56;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v63 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v63, 0LL);
  this->fields.iconLabelInfo2 = v63;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v70 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v70, 0LL);
  this->fields.iconLabelInfo3 = v70;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo3,
    (System_Int32_array **)v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_96;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, num, 0LL);
  this->fields.baseItem = MemberItem;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseItem,
    (System_Int32_array **)MemberItem,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  baseItem = this->fields.baseItem;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_96;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0LL;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  if ( !this->fields.userServantEntity )
    goto LABEL_96;
  p_baseItem = &this->fields.baseItem;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v108 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v107 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v109 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v209.fields.currentCryptoKey = v108;
  *(_QWORD *)&v209.fields.fakeValue = v107;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v209, 0LL);
  if ( !v109 )
    goto LABEL_96;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v109,
                                       Instance,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v112,
    v113,
    v114,
    v115,
    v116,
    v117);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  v118 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.svtId, 0LL);
  v119 = this->fields.userServantEntity;
  if ( !v119 )
    goto LABEL_96;
  v120 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v119->fields.limitCount, 0LL);
  if ( !v118 )
    goto LABEL_96;
  v121 = ServantLimitMaster__GetEntity(v118, v120, Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v122 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_96;
  v123 = *(_OWORD *)&v122->fields.userId.fields.fakeValue;
  v124 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v206.fields.currentCryptoKey = *(_OWORD *)&v122->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v206.fields.fakeValue = v123;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v205 = v206;
  v125 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v205, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.svtId, 0LL);
  if ( !v124 )
    goto LABEL_96;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v124, v125, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_96;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !v121 )
    goto LABEL_96;
  this->fields.rarityId = v121->fields.rarity;
  if ( !userServantEntity )
    goto LABEL_96;
  v126 = (UserServantCollectionEntity_o *)Instance;
  Instance = UserServantEntity__getFrameType(userServantEntity, 0LL);
  this->fields.frameType = Instance;
  if ( !v126 )
    goto LABEL_96;
  UserServantCollectionEntity__getFriendShipRankInfo(v126, friendshipRank, &this->fields.friendshipMax, 0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank[0], 0LL);
  this->fields.isBase = 0;
  *(_WORD *)&this->fields.isCostOver = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity,
    0LL,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132);
  this->fields.equipServantEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v133, v134, v135, v136, v137, v138);
  this->fields.equipIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v139, v140, v141, v142, v143, v144);
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_96;
  v146 = 0;
  while ( v146 < (signed int)memberItemList->max_length )
  {
    Instance = (int64_t)WarBoardPartyListViewItem__GetMemberItem(partyItem, v146, 0LL);
    if ( !Instance )
      goto LABEL_96;
    v147 = (PartyOrganizationListViewItem_o *)Instance;
    if ( *(_QWORD *)(Instance + 112) )
    {
      v148 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_96;
      v149 = *(_OWORD *)&v148->fields.id.fields.fakeValue;
      *(_OWORD *)&v206.fields.currentCryptoKey = *(_OWORD *)&v148->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v206.fields.fakeValue = v149;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v204 = v206;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v204, 0LL);
      v150 = v147->fields.userServantEntity;
      if ( !v150 )
        goto LABEL_96;
      v151 = *(_OWORD *)&v150->fields.id.fields.fakeValue;
      v152 = Instance;
      *(_OWORD *)&v203.fields.currentCryptoKey = *(_OWORD *)&v150->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v203.fields.fakeValue = v151;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v203, 0LL);
      if ( v152 == Instance )
      {
        this->fields.isSame = 0;
        this->fields.isBase = num == v146;
        this->fields.partyIndex = v146;
        EquipList = PartyOrganizationListViewItem__GetEquipList(v147, 0LL);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v164);
        break;
      }
      if ( num != v146 )
      {
        v153 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_96;
        v155 = *(_QWORD *)&v153[2].fields.currentCryptoKey;
        v154 = *(_QWORD *)&v153[2].fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v210.fields.currentCryptoKey = v155;
        *(_QWORD *)&v210.fields.fakeValue = v154;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v210, 0LL);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v147->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_96;
        v157 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(servantEntity[2], 0LL);
        if ( v157 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else if ( this->fields.commonRestrictionId == -1 )
        {
          v158 = v147->fields.servantEntity;
          if ( !v158 )
            goto LABEL_96;
          v160 = *(_QWORD *)&v158->fields.baseSvtId.fields.currentCryptoKey;
          v159 = *(_QWORD *)&v158->fields.baseSvtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v211.fields.currentCryptoKey = v160;
          *(_QWORD *)&v211.fields.fakeValue = v159;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v211, 0LL);
          if ( !*p_servantEntity )
            goto LABEL_96;
          v161 = Instance;
          v162 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_servantEntity)[2], 0LL);
          if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
          }
          Instance = CommonRestrictionMaster__GetIncludedRestrictionIds(v161, v162, 0LL);
          if ( (Instance & 0x80000000) == 0 )
            this->fields.commonRestrictionId = Instance;
        }
      }
    }
    memberItemList = partyItem->fields.memberItemList;
    ++v146;
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
  v166 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v166 )
    goto LABEL_96;
  IsChoice = UserServantEntity__IsChoice(v166, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  *(_DWORD *)&this->fields.isLockMode = 0;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_96;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  v168 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v168 )
    goto LABEL_96;
  IsLeave = UserServantEntity__IsLeave(v168, 0LL);
  this->fields.isEventUpVal = 0;
  this->fields.isLeave = IsLeave;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v170);
  v171 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v171 )
    goto LABEL_96;
  Instance = UserServantEntity__getUniqueSvtRestriction_21845848(
               v171,
               this->fields.questRestrictionInfo,
               0LL,
               num,
               this->fields.partyIndex,
               0LL);
  v172 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v172 )
    goto LABEL_96;
  IsUniqueIndividualityRestriction_21846248 = UserServantEntity__IsUniqueIndividualityRestriction_21846248(
                                                v172,
                                                this->fields.questRestrictionInfo,
                                                0LL,
                                                num,
                                                this->fields.partyIndex,
                                                0LL);
  this->fields.isFatigureRecover = 0;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_21846248;
  this->fields.fatigureTime = -1LL;
  v175 = this->fields.questRestrictionInfo;
  if ( v175 && v175->fields.isFatigure )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
      if ( *p_questRestrictionInfo )
      {
        v176 = (UserEventServantFatigueMaster_o *)Instance;
        eventId = (*p_questRestrictionInfo)->fields.eventId;
        v179 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v178 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v212.fields.currentCryptoKey = v179;
        *(_QWORD *)&v212.fields.fakeValue = v178;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v212, 0LL);
        if ( v176 )
        {
          if ( UserEventServantFatigueMaster__GetFatigueInfo(
                 v176,
                 &recoverAt,
                 &this->fields.isFatigureRecover,
                 eventId,
                 Instance,
                 0LL) )
          {
            v180 = recoverAt;
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            if ( v180 > NetworkManager__getTime(0LL) )
              this->fields.fatigureTime = recoverAt;
          }
          goto LABEL_81;
        }
      }
    }
LABEL_96:
    sub_B5D69C(Instance, v78);
  }
LABEL_81:
  Instance = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v174);
  v181 = this->fields.userServantEntity;
  this->fields._IsAllOutBattle_k__BackingField = Instance & 1;
  if ( !v181 )
    goto LABEL_96;
  Instance = UserServantEntity__getDispLimitCount(v181, 0, 0LL);
  v182 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v182 )
    goto LABEL_96;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v182, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v184,
    v185,
    v186,
    v187,
    v188,
    v189);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_96;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v191,
    v192,
    v193,
    v194,
    v195,
    v196);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_96;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_96;
  this->fields.priority = *(_DWORD *)(Instance + 48);
  PartyServantListViewItem__InitAfterSecondSort(this, v78);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_96;
  v197 = *(_DWORD *)(Instance + 276);
  v198 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v198 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  this->fields.hpReinforceValue = v198->static_fields->StatusUpAdjustHp * v197;
  if ( !Instance )
    goto LABEL_96;
  this->fields.atkReinforceValue = v198->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
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
  int v2; // w2
  __int64 v3; // x3
  PartyServantListViewItem_o *v4; // x19
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v7; // x21
  __int64 v8; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v9; // x8
  int32_t v10; // w21
  int32_t v11; // w22
  struct UserServantEntity_o *v12; // x8
  struct PartyOrganizationListViewItem_o *baseItem; // x9
  bool v14; // w23
  QuestRestrictionInfo_o *v15; // x20
  __int64 v16; // x21
  __int64 v17; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v18; // x8
  int32_t v19; // w21
  int32_t v20; // w22
  QuestRestrictionInfo_o *v21; // x20
  __int64 v22; // x21
  __int64 v23; // x22
  struct PartyOrganizationListViewItem_o *v24; // x8
  struct PartyOrganizationListViewItem_o *v25; // x8
  struct UserServantEntity_o *v26; // x8
  QuestRestrictionInfo_o *v27; // x20
  __int64 v28; // x21
  __int64 v29; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v30; // x8
  int32_t v31; // w21
  int32_t v32; // w22
  struct PartyOrganizationListViewItem_o *v33; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  v4 = this;
  if ( (byte_42EC3AB & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_B5D5C4(
                                           &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                           (_DWORD)method,
                                           v2,
                                           v3);
    byte_42EC3AB = 1;
  }
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  userServantEntity = v4->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_42;
  v8 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v35.fields.currentCryptoKey = v8;
  *(_QWORD *)&v35.fields.fakeValue = v7;
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v35, 0LL);
  v9 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
  if ( !v9 )
    goto LABEL_42;
  v10 = (int)this;
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v9[6], 0LL);
  if ( !v4->fields.userServantEntity )
    goto LABEL_42;
  v11 = (int)this;
  this = (PartyServantListViewItem_o *)UserServantEntity__getDispLimitCount(v4->fields.userServantEntity, 0, 0LL);
  v12 = v4->fields.userServantEntity;
  if ( !v12 )
    goto LABEL_42;
  baseItem = v4->fields.baseItem;
  if ( !baseItem )
    goto LABEL_42;
  v14 = 1;
  if ( !QuestRestrictionInfo__IsRestriction_34264504(
          questRestrictionInfo,
          &v4->fields.isQuestRestrictionWhole,
          v10,
          v11,
          (int32_t)this,
          v12->fields.lv,
          baseItem->fields._InitPos_k__BackingField,
          1,
          0LL) )
  {
    this = (PartyServantListViewItem_o *)v4->fields.questRestrictionInfo;
    if ( !this )
      goto LABEL_42;
    if ( QuestRestrictionInfo__IsSupportOnly((QuestRestrictionInfo_o *)this, 0LL) )
      return 1;
    v15 = v4->fields.questRestrictionInfo;
    v16 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v36.fields.currentCryptoKey = v16;
    *(_QWORD *)&v36.fields.fakeValue = v17;
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v36, 0LL);
    v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
    if ( !v18 )
      goto LABEL_42;
    v19 = (int)this;
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                           v18[6],
                                           0LL);
    if ( !v4->fields.userServantEntity )
      goto LABEL_42;
    v20 = (int)this;
    this = (PartyServantListViewItem_o *)UserServantEntity__getDispLimitCount(v4->fields.userServantEntity, 0, 0LL);
    if ( !v15 )
      goto LABEL_42;
    if ( QuestRestrictionInfo__GetFixedMyServantSingleRestriction(
           v15,
           v19,
           v20,
           (int32_t)this,
           v4->fields.memberIndex,
           0LL) )
    {
      return 1;
    }
    v21 = v4->fields.questRestrictionInfo;
    v22 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
    v23 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v37.fields.currentCryptoKey = v22;
    *(_QWORD *)&v37.fields.fakeValue = v23;
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v37, 0LL);
    v24 = v4->fields.baseItem;
    if ( !v24 || !v21 )
      goto LABEL_42;
    this = (PartyServantListViewItem_o *)QuestRestrictionInfo__IsServantNumAndFixedServantPositionRestriction(
                                           v21,
                                           (int32_t)this,
                                           v24->fields._InitPos_k__BackingField,
                                           0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    v25 = v4->fields.baseItem;
    if ( v25 )
    {
      if ( !v25->fields.isMyServantOrNpcRestriction )
        return 0;
      v26 = v4->fields.userServantEntity;
      if ( v26 )
      {
        v27 = v4->fields.questRestrictionInfo;
        v29 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
        v28 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v38.fields.currentCryptoKey = v29;
        *(_QWORD *)&v38.fields.fakeValue = v28;
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                               v38,
                                               0LL);
        v30 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
        if ( v30 )
        {
          v31 = (int)this;
          this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                 v30[6],
                                                 0LL);
          if ( v4->fields.userServantEntity )
          {
            v32 = (int)this;
            this = (PartyServantListViewItem_o *)UserServantEntity__getDispLimitCount(
                                                   v4->fields.userServantEntity,
                                                   0,
                                                   0LL);
            v33 = v4->fields.baseItem;
            if ( v33 )
            {
              if ( v27 )
                return QuestRestrictionInfo__IsRestrictionServantIndividuality(
                         v27,
                         v31,
                         v32,
                         (int32_t)this,
                         v33->fields._InitPos_k__BackingField,
                         0,
                         0LL);
            }
          }
        }
      }
    }
LABEL_42:
    sub_B5D69C(this, method);
  }
  return v14;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t allOutBattleGroupNo; // w20
  WebViewManager_o *Instance; // x0
  __int64 v14; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x22
  __int64 v17; // x23
  UserEventAlloutBattleMaster_o *v18; // x21
  struct QuestRestrictionInfo_o *v19; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42EC3B0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EC3B0 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = questRestrictionInfo->fields.allOutBattleGroupNo;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (UserEventAlloutBattleMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v17;
  *(_QWORD *)&v21.fields.fakeValue = v16;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
  v19 = this->fields.questRestrictionInfo;
  if ( !v19 || !v18 )
LABEL_14:
    sub_B5D69C(Instance, v14);
  return UserEventAlloutBattleMaster__IsAlreadyUsedServant(
           v18,
           (int32_t)Instance,
           v19->fields.eventId,
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
  __int64 v3; // x3
  UserServantEntity_o *userServantEntity; // x0
  TreasureDvcInfo_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EC3B3 & 1) == 0 )
  {
    sub_B5D5C4(&TreasureDvcInfo_TypeInfo, (_DWORD)tdInfo, (_DWORD)method, v3);
    byte_42EC3B3 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0LL);
  v8 = (TreasureDvcInfo_o *)sub_B5D694(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v8, 0LL);
  *tdInfo = v8;
  sub_B5D560((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  return 0;
}


System_String_o *__fastcall PartyServantListViewItem__GetRestrictionMessage(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t commonRestrictionId; // w19

  if ( (byte_42EC3AF & 1) == 0 )
  {
    sub_B5D5C4(&CommonRestrictionMaster_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC3AF = 1;
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
  int v2; // w2
  __int64 v3; // x3
  PartyServantListViewItem_o *v4; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantEntity_o *v8; // x8
  __int128 v9; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+40h] [xbp-30h]

  v4 = this;
  if ( (byte_42EC3B4 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_B5D5C4(
                                           &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                           (_DWORD)method,
                                           v2,
                                           v3);
    byte_42EC3B4 = 1;
  }
  if ( v4->fields.tutorialMode )
  {
    userServantEntity = v4->fields.userServantEntity;
    v4->fields.sortValue1B = 0LL;
    if ( userServantEntity )
    {
      v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v12.fields.fakeValue = v6;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v10 = v12;
      v4->fields.sortValue2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v10, 0LL);
      v4->fields.sortValue2B = 0LL;
      return;
    }
LABEL_16:
    sub_B5D69C(this, method);
  }
  servantEntity = v4->fields.servantEntity;
  v4->fields.sortValue1B = v4->fields.priority;
  if ( !servantEntity )
    goto LABEL_16;
  v8 = v4->fields.userServantEntity;
  if ( !v8 )
    goto LABEL_16;
  v4->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)v4->fields.rarityId << 48) | v8->fields.lv;
  v9 = *(_OWORD *)&v8->fields.id.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&v8->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v11 = v12;
  v4->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v11, 0LL);
}


bool __fastcall PartyServantListViewItem__IsMatchFilter(
        PartyServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  FilterKindList_c *v15; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x0
  FilterKindList_c *v21; // x0
  ListViewSort_FilterKind_array *v22; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w21
  UserServantEntity_o *userServantEntity; // x22
  FilterKindList_c *v26; // x0
  ListViewSort_FilterKind_array *v27; // x21
  UserServantEntity_o *v29; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v31; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
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

  if ( (byte_42EC3AD & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&ListViewSort_FilterKind___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9, v10, v11);
    sub_B5D5C4(&ServantEventBonusFilterController_TypeInfo, v12, v13, v14);
    byte_42EC3AD = 1;
  }
  v15 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v15->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                        (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_69;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v17 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v17 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v17->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
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
  ClassGroupFilterKindList = (__int64)v19->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v21 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v21 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v21->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_69:
    sub_B5D69C(ClassGroupFilterKindList, sort);
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL)
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
    v29 = this->fields.userServantEntity;
    if ( v29 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v29, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_69;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v31 = this->fields.userServantEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v31 )
          goto LABEL_69;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v31, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_69;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
      }
    }
    ClassGroupFilterKindList = sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_70;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_70:
      v50 = sub_B5D6C8(ClassGroupFilterKindList);
      sub_B5D668(v50, 0LL);
    }
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v47 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v49 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
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
  ClassGroupFilterKindList = sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
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
  v26 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v26 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v26->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  v27 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v27, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v27, 0LL)
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
    sub_B5D69C(0LL, method);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_userServantEntity )
    sub_B5D69C(0LL, v10);
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
    sub_B5D69C(0LL, method);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  UserServantEntity_o **p_equipUserServantEntity; // x20
  BattleServantConfConponent_o *p_equipServantEntity; // x19
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Int64_array **p_equipIdList; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  Il2CppObject *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  Il2CppObject *v54; // x22
  System_Int32_array **v55; // x1
  BalanceConfig_c *v56; // x0
  __int64 v57; // x1
  struct System_Int64_array *v58; // x8
  UserServantEntity_o *v59; // x8
  __int64 v60; // x21
  __int64 v61; // x22
  UserServantEntity_o *v62; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v63; // x20
  __int64 v64; // x21
  __int64 v65; // x22
  System_Int32_array **Entity; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16

  v8 = equipIds;
  if ( (byte_42EC3AC & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)equipIds, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v13, v14, v15);
    sub_B5D5C4(&DataManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19, v20, v21);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v22, v23, v24);
    sub_B5D5C4(&long___TypeInfo, v25, v26, v27);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28, v29, v30);
    byte_42EC3AC = 1;
  }
  p_equipUserServantEntity = &this->fields.equipUserServantEntity;
  this->fields.equipUserServantEntity = 0LL;
  sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.equipIdList = 0LL;
  p_equipIdList = &this->fields.equipIdList;
  sub_B5D560((BattleServantConfConponent_o *)p_equipIdList, 0LL, v40, v41, v42, v43, v44, v45);
  if ( !*(p_equipIdList - 1) )
    return;
  if ( v8 )
  {
    if ( *p_equipIdList == v8 )
      goto LABEL_15;
    v47 = System_Array__Clone((System_Array_o *)v8, 0LL);
    if ( !v47 )
    {
      v55 = 0LL;
      goto LABEL_14;
    }
    v54 = v47;
    v55 = (System_Int32_array **)sub_B5D684(v47, long___TypeInfo);
    if ( v55 )
      goto LABEL_14;
    sub_B5D990(v54);
  }
  v56 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v56 = BalanceConfig_TypeInfo;
  }
  v55 = (System_Int32_array **)sub_B5D5DC(long___TypeInfo, (unsigned int)v56->static_fields->SvtEquipMax);
LABEL_14:
  *p_equipIdList = (struct System_Int64_array *)v55;
  sub_B5D560((BattleServantConfConponent_o *)p_equipIdList, v55, v48, v49, v50, v51, v52, v53);
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
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  v58 = *p_equipIdList;
  if ( !*p_equipIdList )
    goto LABEL_39;
  if ( !v58->max_length )
  {
LABEL_40:
    v73 = sub_B5D6C8(Master_WarQuestSelectionMaster);
    sub_B5D668(v73, 0LL);
  }
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_39;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                                  (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
                                                                  p_equipUserServantEntity,
                                                                  v58->m_Items[0],
                                                                  (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    v59 = *p_equipUserServantEntity;
    if ( !*p_equipUserServantEntity )
      goto LABEL_39;
    v61 = *(_QWORD *)&v59->fields.svtId.fields.currentCryptoKey;
    v60 = *(_QWORD *)&v59->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v74.fields.currentCryptoKey = v61;
    *(_QWORD *)&v74.fields.fakeValue = v60;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v74, 0LL) >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
      v62 = *p_equipUserServantEntity;
      if ( *p_equipUserServantEntity )
      {
        v63 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
        v65 = *(_QWORD *)&v62->fields.svtId.fields.currentCryptoKey;
        v64 = *(_QWORD *)&v62->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v75.fields.currentCryptoKey = v65;
        *(_QWORD *)&v75.fields.fakeValue = v64;
        Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                        v75,
                                                                        0LL);
        if ( v63 )
        {
          Entity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            v63,
                                            (int32_t)Master_WarQuestSelectionMaster,
                                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          p_equipServantEntity->klass = (BattleServantConfConponent_c *)Entity;
          sub_B5D560(p_equipServantEntity, Entity, v67, v68, v69, v70, v71, v72);
          return;
        }
      }
LABEL_39:
      sub_B5D69C(Master_WarQuestSelectionMaster, v57);
    }
  }
}


bool __fastcall PartyServantListViewItem__SetSortValue(
        PartyServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PartyServantListViewItem_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  struct ListViewManager_o *manager; // x8
  __int64 v28; // x11
  PartyServantListViewManager_o *v29; // x21
  struct EventUpValSetupInfo_o *setupInfo; // x8
  int32_t bonusKind; // w8
  EventUpValSetupInfo_o *v32; // x21
  PartyServantListViewItem_o *userServantEntity; // x22
  int32_t v34; // w2
  EventUpValSetupInfo_o *v35; // x1
  int32_t bonusKind2; // w8
  int32_t *p_bonusKind2Id; // x8
  int32_t *v38; // x8
  int32_t v39; // w9
  int32_t *p_bonusKindId; // x8
  int32_t bonusKind2Id; // w10
  int32_t bonusKindId; // w22
  __int64 v43; // x23
  __int64 v44; // x24
  const MethodInfo *v45; // x3
  bool IsCampaignServant; // w0
  int32_t v47; // w22
  __int64 v48; // x23
  __int64 v49; // x24
  const MethodInfo *v50; // x3
  PartyServantListViewItem_c *v51; // x0
  _BOOL4 isSwapChoice; // w22
  _BOOL4 isChoice; // w23
  struct PartyServantListViewItem_StaticFields **p_static_fields; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x9
  int v56; // w22
  __int64 PRIORITY_LOWEST; // x8
  PartyServantListViewItem_c *v58; // x0
  __int64 PRIORITY_LOWEST_HEROIN_LEAVE; // x8
  struct ServantEntity_o *servantEntity; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  int32_t cost; // w4
  struct UserServantEntity_o *v63; // x8
  __int128 v64; // q1
  struct UserServantEntity_o *v65; // x8
  int64_t fatigureTime; // x8
  int64_t rarityId; // x2
  struct UserServantEntity_o *v68; // x8
  int64_t hpReinforceValue; // x2
  int32_t adjustAtk; // w3
  int32_t v71; // w1
  struct UserServantEntity_o *v72; // x8
  struct UserServantEntity_o *equipUserServantEntity; // x9
  int64_t hp; // x10
  int32_t v75; // w4
  int32_t adjustHp; // w3
  int32_t v77; // w2
  int32_t v78; // w1
  struct UserServantEntity_o *v79; // x8
  struct UserServantEntity_o *v80; // x9
  int64_t atk; // x10
  struct ServantEntity_o *v82; // x8
  int64_t v83; // x8
  __int64 v84; // x20
  __int64 v85; // x21
  int32_t v86; // w0
  PartyServantListViewItem_o *iconLabelInfo1; // x20
  int64_t v88; // x9
  struct ListViewManager_o *v89; // x8
  __int64 v90; // x11
  struct ListViewManager_o *v91; // x20
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct QuestRestrictionInfo_o *v93; // x8
  int64_t priority; // x10
  struct ServantEntity_o *v95; // x8
  int32_t lv; // w20
  __int64 v97; // x21
  __int64 v98; // x22
  const MethodInfo *v99; // x2
  struct ServantEntity_o *v100; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v102; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16

  v5 = this;
  if ( (byte_42EC3AE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantFilterMaster___, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&PartyServantListViewItem_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&PartyServantListViewManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    this = (PartyServantListViewItem_o *)sub_B5D5C4(&TutorialFlag_TypeInfo, v24, v25, v26);
    byte_42EC3AE = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&v5->fields.isTermination = 0;
  v5->fields.sortValue1 = -1LL;
  if ( !sort )
    goto LABEL_204;
  if ( !sort->fields.isBonusKind )
    goto LABEL_74;
  if ( v5->fields.isBase )
    goto LABEL_75;
  manager = sort->fields.manager;
  if ( manager
    && (v28 = *(&PartyServantListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v28) )
  {
    if ( (PartyServantListViewManager_c *)manager->klass->_2.typeHierarchy[v28 - 1] == PartyServantListViewManager_TypeInfo )
      v29 = (PartyServantListViewManager_o *)sort->fields.manager;
    else
      v29 = 0LL;
  }
  else
  {
    v29 = 0LL;
  }
  setupInfo = v5->fields.setupInfo;
  if ( setupInfo )
  {
    if ( !setupInfo->fields.isQuestStart )
    {
LABEL_28:
      bonusKind2 = sort->fields.bonusKind2;
      if ( bonusKind2 == 3 )
      {
        v5->fields.bonusKind = 3;
        v5->fields.bonusKindId = sort->fields.bonusKind2Id;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL) )
        {
          bonusKindId = v5->fields.bonusKindId;
          v44 = *(_QWORD *)&v5->fields.svtId.fields.currentCryptoKey;
          v43 = *(_QWORD *)&v5->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v107.fields.currentCryptoKey = v44;
          *(_QWORD *)&v107.fields.fakeValue = v43;
          this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                 v107,
                                                 0LL);
          if ( !v29 )
            goto LABEL_204;
          IsCampaignServant = PartyServantListViewManager__IsCampaignServant(v29, bonusKindId, (int32_t)this, v45);
LABEL_73:
          v5->fields.isEventUpVal = IsCampaignServant;
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
        if ( v5->fields.bonusKind != 1 )
        {
          p_bonusKind2Id = &sort->fields.bonusKind2Id;
LABEL_66:
          v5->fields.bonusKind = 1;
          v34 = *p_bonusKind2Id;
          this = (PartyServantListViewItem_o *)v5->fields.userServantEntity;
          v5->fields.bonusKindId = *p_bonusKind2Id;
          if ( !this )
            goto LABEL_204;
          v35 = v5->fields.setupInfo;
LABEL_68:
          IsCampaignServant = UserServantEntity__getEventUpVal_21840416((UserServantEntity_o *)this, v35, v34, 0LL);
          goto LABEL_73;
        }
        p_bonusKind2Id = &sort->fields.bonusKind2Id;
        if ( v5->fields.bonusKindId != sort->fields.bonusKind2Id )
          goto LABEL_66;
        goto LABEL_62;
      }
      if ( v5->fields.bonusKind != 2 )
      {
        p_bonusKindId = &sort->fields.bonusKind2Id;
        goto LABEL_70;
      }
      v39 = v5->fields.bonusKindId;
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
    this = (PartyServantListViewItem_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_28;
    if ( !v29 )
      goto LABEL_204;
    if ( !v29->fields.isQuestStart )
      goto LABEL_28;
  }
  bonusKind = sort->fields.bonusKind;
  if ( bonusKind != 3 )
  {
    if ( bonusKind != 2 )
    {
      if ( bonusKind != 1 )
        goto LABEL_74;
      if ( v5->fields.bonusKind != 1 )
      {
        v5->fields.bonusKind = 1;
        v32 = v5->fields.setupInfo;
        v5->fields.bonusKindId = sort->fields.bonusKindId;
        if ( !v32 )
          goto LABEL_204;
        userServantEntity = (PartyServantListViewItem_o *)v5->fields.userServantEntity;
        this = (PartyServantListViewItem_o *)EventUpValSetupInfo__get_ServantFilterEventId(v32, 0LL);
        if ( !userServantEntity )
          goto LABEL_204;
        v34 = (int)this;
        this = userServantEntity;
        v35 = v32;
        goto LABEL_68;
      }
      goto LABEL_62;
    }
    if ( v5->fields.bonusKind != 2 )
    {
      p_bonusKindId = &sort->fields.bonusKindId;
      goto LABEL_70;
    }
    v39 = v5->fields.bonusKindId;
    p_bonusKindId = &sort->fields.bonusKindId;
    bonusKind2Id = sort->fields.bonusKindId;
LABEL_50:
    if ( v39 != bonusKind2Id )
    {
LABEL_70:
      v5->fields.bonusKind = 2;
      v5->fields.bonusKindId = *p_bonusKindId;
      this = (PartyServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_204;
      this = (PartyServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantFilterMaster___);
      if ( !this )
        goto LABEL_204;
      IsCampaignServant = ServantFilterMaster__IsEnableServant(
                            (ServantFilterMaster_o *)this,
                            v5->fields.svtId,
                            v5->fields.bonusKindId,
                            0LL);
      goto LABEL_73;
    }
    goto LABEL_62;
  }
  if ( v5->fields.bonusKind == 3 )
  {
    v38 = &sort->fields.bonusKindId;
    if ( v5->fields.bonusKindId == sort->fields.bonusKindId )
      goto LABEL_62;
  }
  else
  {
    v38 = &sort->fields.bonusKindId;
  }
  v5->fields.bonusKind = 3;
  v5->fields.bonusKindId = *v38;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL) )
  {
    v47 = v5->fields.bonusKindId;
    v49 = *(_QWORD *)&v5->fields.svtId.fields.currentCryptoKey;
    v48 = *(_QWORD *)&v5->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v108.fields.currentCryptoKey = v49;
    *(_QWORD *)&v108.fields.fakeValue = v48;
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v108, 0LL);
    if ( !v29 )
      goto LABEL_204;
    v5->fields.isEventUpVal = PartyServantListViewManager__IsCampaignServant(v29, v47, (int32_t)this, v50);
  }
LABEL_62:
  if ( !v5->fields.isEventUpVal )
    goto LABEL_136;
LABEL_74:
  if ( !v5->fields.isBase )
  {
    this = (PartyServantListViewItem_o *)v5->fields.servantEntity;
    if ( !this )
      goto LABEL_204;
    if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0LL) )
      goto LABEL_136;
    this = (PartyServantListViewItem_o *)v5->fields.servantEntity;
    if ( !this )
      goto LABEL_204;
    if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0LL)
      || (((__int64 (__fastcall *)(PartyServantListViewItem_o *, ListViewSort_o *, void *))v5->klass->vtable._5_IsMatchFilter.method)(
            v5,
            sort,
            v5->klass[1]._1.image) & 1) == 0 )
    {
      goto LABEL_136;
    }
  }
LABEL_75:
  v51 = PartyServantListViewItem_TypeInfo;
  isSwapChoice = v5->fields.isSwapChoice;
  isChoice = v5->fields.isChoice;
  if ( (BYTE3(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo);
    v51 = PartyServantListViewItem_TypeInfo;
  }
  p_static_fields = &v51->static_fields;
  questRestrictionInfo = v5->fields.questRestrictionInfo;
  v56 = isSwapChoice ^ isChoice;
  v5->fields.sortValue0 = v51->static_fields->PRIORITY_NORMAL;
  v5->fields.sortValue0B = v51->static_fields->PRIORITY_NORMAL;
  if ( questRestrictionInfo )
  {
    if ( questRestrictionInfo->fields.isFatigure && sort->fields.isSmartSort )
    {
      if ( v5->fields.fatigureTime >= 1 )
        goto LABEL_82;
      goto LABEL_89;
    }
    if ( questRestrictionInfo->fields.isAllOutBattle && sort->fields.isSmartSort )
    {
      if ( v5->fields._IsAllOutBattle_k__BackingField )
      {
LABEL_82:
        if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v51);
          v51 = PartyServantListViewItem_TypeInfo;
        }
        PRIORITY_LOWEST = v51->static_fields->PRIORITY_LOWEST;
        goto LABEL_91;
      }
LABEL_89:
      if ( !v5->fields.isQuestRestriction )
      {
LABEL_92:
        if ( v56 && sort->fields.isChoiceSort )
        {
          if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v51);
            v51 = PartyServantListViewItem_TypeInfo;
          }
          v5->fields.sortValue0B = v51->static_fields->PRIORITY_TOP;
        }
        this = (PartyServantListViewItem_o *)v5->fields.servantEntity;
        if ( this )
        {
          if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)this, 0LL) )
            goto LABEL_117;
          if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TutorialFlag_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          }
          if ( !TutorialFlag__Get_29295864(126, 0LL) )
            goto LABEL_117;
          v58 = PartyServantListViewItem_TypeInfo;
          if ( (BYTE3(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PartyServantListViewItem_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo);
            v58 = PartyServantListViewItem_TypeInfo;
          }
          PRIORITY_LOWEST_HEROIN_LEAVE = v58->static_fields->PRIORITY_LOWEST_HEROIN_LEAVE;
          goto LABEL_116;
        }
LABEL_204:
        sub_B5D69C(this, sort);
      }
      PRIORITY_LOWEST = -1LL;
LABEL_91:
      v5->fields.sortValue0 = PRIORITY_LOWEST;
      goto LABEL_92;
    }
  }
  if ( v56 && sort->fields.isChoiceSort )
  {
    if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      p_static_fields = &PartyServantListViewItem_TypeInfo->static_fields;
    }
    PRIORITY_LOWEST_HEROIN_LEAVE = (*p_static_fields)->PRIORITY_TOP;
  }
  else
  {
    if ( !v5->fields.isQuestRestriction )
      goto LABEL_117;
    PRIORITY_LOWEST_HEROIN_LEAVE = -1LL;
  }
LABEL_116:
  v5->fields.sortValue0 = PRIORITY_LOWEST_HEROIN_LEAVE;
LABEL_117:
  PartyServantListViewItem__InitAfterSecondSort(v5, (const MethodInfo *)sort);
  this = (PartyServantListViewItem_o *)v5->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_204;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  servantEntity = v5->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_204;
  this = (PartyServantListViewItem_o *)v5->fields.iconLabelInfo3;
  equipServantEntity = v5->fields.equipServantEntity;
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
  IconLabelInfo__Set_28463004((IconLabelInfo_o *)this, 7, servantEntity->fields.cost, 0, cost, 0, 0, 0, 0LL);
  this = (PartyServantListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v63 = v5->fields.userServantEntity;
      if ( !v63 )
        goto LABEL_204;
      v64 = *(_OWORD *)&v63->fields.id.fields.fakeValue;
      *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)&v63->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v105.fields.fakeValue = v64;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v104 = v105;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                             &v104,
                                             0LL);
      v65 = v5->fields.userServantEntity;
      v5->fields.sortValue1 = (int64_t)this;
      if ( !v65 )
        goto LABEL_204;
      this = (PartyServantListViewItem_o *)v5->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_204;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v65->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_173;
    case 2:
      rarityId = v5->fields.rarityId;
      v68 = v5->fields.userServantEntity;
      v5->fields.sortValue1 = rarityId;
      if ( !v68 )
        goto LABEL_204;
      this = (PartyServantListViewItem_o *)v5->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_204;
      IconLabelInfo__Set_28463004(
        (IconLabelInfo_o *)this,
        36,
        rarityId,
        v68->fields.exceedCount,
        0,
        0,
        0,
        v68->fields.lv,
        0LL);
      goto LABEL_188;
    case 3:
      goto LABEL_182;
    case 4:
      this = (PartyServantListViewItem_o *)v5->fields.userServantEntity;
      if ( !this )
        goto LABEL_204;
      UserServantEntity__getTreasureDeviceInfo_21848072((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(hpReinforceValue) = tdMaxLv[1];
      this = (PartyServantListViewItem_o *)v5->fields.iconLabelInfo1;
      v5->fields.sortValue1 = tdMaxLv[1];
      if ( !this )
        goto LABEL_204;
      adjustAtk = tdMaxLv[0];
      v71 = 33;
      goto LABEL_172;
    case 5:
      v72 = v5->fields.userServantEntity;
      if ( !v72 )
        goto LABEL_204;
      equipUserServantEntity = v5->fields.equipUserServantEntity;
      hp = v72->fields.hp;
      if ( equipUserServantEntity )
      {
        this = (PartyServantListViewItem_o *)v5->fields.iconLabelInfo1;
        v5->fields.sortValue1 = equipUserServantEntity->fields.hp + (int)hp;
        if ( !this )
          goto LABEL_204;
        v75 = equipUserServantEntity->fields.hp;
        adjustHp = v72->fields.adjustHp;
        v77 = v72->fields.hp;
        v78 = 46;
        goto LABEL_153;
      }
      this = (PartyServantListViewItem_o *)v5->fields.iconLabelInfo1;
      v5->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_204;
      adjustAtk = v72->fields.adjustHp;
      LODWORD(hpReinforceValue) = v72->fields.hp;
      v71 = 3;
      goto LABEL_172;
    case 6:
      v79 = v5->fields.userServantEntity;
      if ( !v79 )
        goto LABEL_204;
      v80 = v5->fields.equipUserServantEntity;
      atk = v79->fields.atk;
      if ( v80 )
      {
        this = (PartyServantListViewItem_o *)v5->fields.iconLabelInfo1;
        v5->fields.sortValue1 = v80->fields.atk + (int)atk;
        if ( !this )
          goto LABEL_204;
        v75 = v80->fields.atk;
        adjustHp = v79->fields.adjustAtk;
        v77 = v79->fields.atk;
        v78 = 47;
LABEL_153:
        IconLabelInfo__Set_28463004((IconLabelInfo_o *)this, v78, v77, adjustHp, v75, 0, 0, 0, 0LL);
      }
      else
      {
        this = (PartyServantListViewItem_o *)v5->fields.iconLabelInfo1;
        v5->fields.sortValue1 = atk;
        if ( !this )
          goto LABEL_204;
        adjustAtk = v79->fields.adjustAtk;
        LODWORD(hpReinforceValue) = v79->fields.atk;
        v71 = 5;
LABEL_172:
        IconLabelInfo__Set_28463004((IconLabelInfo_o *)this, v71, hpReinforceValue, adjustAtk, 0, 0, 0, 0, 0LL);
      }
LABEL_173:
      this = (PartyServantListViewItem_o *)v5->fields.userServantEntity;
      if ( !this )
        goto LABEL_204;
      iconLabelInfo2 = v5->fields.iconLabelInfo2;
      goto LABEL_185;
    case 7:
      v82 = v5->fields.servantEntity;
      if ( !v82 )
        goto LABEL_204;
      v83 = v82->fields.cost;
      this = (PartyServantListViewItem_o *)v5->fields.userServantEntity;
LABEL_157:
      v5->fields.sortValue1 = v83;
      if ( !this )
        goto LABEL_204;
      goto LABEL_184;
    case 8:
      this = (PartyServantListViewItem_o *)v5->fields.userServantEntity;
      v83 = -v5->fields.priority;
      goto LABEL_157;
    case 0xA:
      v84 = *(_QWORD *)&v5->fields.friendship.fields.currentCryptoKey;
      v85 = *(_QWORD *)&v5->fields.friendship.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v109.fields.currentCryptoKey = v84;
      *(_QWORD *)&v109.fields.fakeValue = v85;
      v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v109, 0LL);
      iconLabelInfo1 = (PartyServantListViewItem_o *)v5->fields.iconLabelInfo1;
      v88 = v86;
      friendship = v5->fields.friendship;
      v5->fields.sortValue1 = v88;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                             friendship,
                                             0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_204;
      adjustAtk = v5->fields.friendshipMax;
      LODWORD(hpReinforceValue) = (_DWORD)this;
      v71 = 32;
      this = iconLabelInfo1;
      goto LABEL_172;
    case 0xE:
      this = (PartyServantListViewItem_o *)v5->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_201;
      v89 = sort->fields.manager;
      if ( v89
        && (v90 = *(&PartyServantListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&v89->klass->_2.bitflags2 + 1) >= (unsigned int)v90) )
      {
        if ( (PartyServantListViewManager_c *)v89->klass->_2.typeHierarchy[v90 - 1] == PartyServantListViewManager_TypeInfo )
          v91 = sort->fields.manager;
        else
          v91 = 0LL;
      }
      else
      {
        v91 = 0LL;
      }
      v98 = *(_QWORD *)&v5->fields.svtId.fields.currentCryptoKey;
      v97 = *(_QWORD *)&v5->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v111.fields.currentCryptoKey = v98;
      *(_QWORD *)&v111.fields.fakeValue = v97;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                             v111,
                                             0LL);
      if ( !v91 )
        goto LABEL_204;
      this = (PartyServantListViewItem_o *)PartyServantListViewManager__GetAmountSortValue(
                                             (PartyServantListViewManager_o *)v91,
                                             (int32_t)this,
                                             v99);
      v5->fields.amountSortValue = (int64_t)this;
LABEL_201:
      v100 = v5->fields.servantEntity;
      if ( !v100 )
        goto LABEL_204;
      collectionNo = v100->fields.collectionNo;
      v102 = v5->fields.userServantEntity;
      v5->fields.sortValue1 = (((unsigned __int64)(unsigned int)v5->fields.rarityId << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v102 )
        goto LABEL_204;
      iconLabelInfo2 = v5->fields.iconLabelInfo1;
      lv = v102->fields.lv;
      this = (PartyServantListViewItem_o *)v102;
      goto LABEL_186;
    case 0xF:
      hpReinforceValue = v5->fields.hpReinforceValue;
      this = (PartyServantListViewItem_o *)v5->fields.iconLabelInfo1;
      v5->fields.sortValue1 = hpReinforceValue;
      if ( !this )
        goto LABEL_204;
      adjustAtk = v5->fields.nowMaxHpReinforceValue;
      v71 = 44;
      goto LABEL_172;
    case 0x10:
      hpReinforceValue = v5->fields.atkReinforceValue;
      this = (PartyServantListViewItem_o *)v5->fields.iconLabelInfo1;
      v5->fields.sortValue1 = hpReinforceValue;
      if ( !this )
        goto LABEL_204;
      adjustAtk = v5->fields.nowMaxAtkReinforceValue;
      v71 = 45;
      goto LABEL_172;
    case 0x19:
      v93 = v5->fields.questRestrictionInfo;
      if ( !v93 || !v93->fields.isFatigure )
        goto LABEL_181;
      fatigureTime = v5->fields.fatigureTime;
      goto LABEL_178;
    case 0x1C:
      if ( v5->fields._IsDispSvtPoint_k__BackingField )
      {
        fatigureTime = v5->fields._SvtPoint_k__BackingField;
LABEL_178:
        this = (PartyServantListViewItem_o *)v5->fields.userServantEntity;
        v5->fields.sortValue1 = fatigureTime;
        if ( !this )
          goto LABEL_204;
        priority = v5->fields.priority;
        v95 = v5->fields.servantEntity;
        v5->fields.sortValue1B = SLODWORD(this->fields.iconLabelInfo1);
        v5->fields.sortValue2 = priority;
        if ( !v95 )
          goto LABEL_204;
        v5->fields.sortValue2B = ((__int64)v95->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)v5->fields.rarityId << 48) | SLODWORD(this->fields.iconLabelInfo1);
      }
      else
      {
LABEL_181:
        sort->fields.sortKind = 3;
LABEL_182:
        this = (PartyServantListViewItem_o *)v5->fields.userServantEntity;
        if ( !this )
          goto LABEL_204;
        v5->fields.sortValue1 = SLODWORD(this->fields.iconLabelInfo1);
      }
LABEL_184:
      iconLabelInfo2 = v5->fields.iconLabelInfo1;
LABEL_185:
      lv = (int32_t)this->fields.iconLabelInfo1;
LABEL_186:
      this = (PartyServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo2 )
        goto LABEL_204;
      IconLabelInfo__Set_28463004(iconLabelInfo2, 2, lv, (int32_t)this, 0, 0, 0, 0, 0LL);
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
    sub_B5D69C(this, method);
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


bool __fastcall PartyServantListViewItem__get_IsClearedWave(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsClearedWave_k__BackingField;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v10; // x20
  __int64 v11; // x21
  int32_t v12; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42EC3B2 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_18624/*"error"*/, v5, v6, v7);
    byte_42EC3B2 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18624/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v11 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v10 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v14.fields.currentCryptoKey = v11;
    *(_QWORD *)&v14.fields.fakeValue = v10;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v14, 0LL);
  }
  else
  {
    v12 = -1;
  }
  return ServantEntity__getName(servantEntity, v12, -1, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_42EC3B1 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC3B1 = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v8, 0LL);
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
    sub_B5D69C(this, method);
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
  sub_B5D560(
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


void __fastcall PartyServantListViewItem__set_IsClearedWave(
        PartyServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsClearedWave_k__BackingField = value;
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